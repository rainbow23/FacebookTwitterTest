
#include "iPhone_Profiler.h"

#include <stdint.h>
#include <stdio.h>
#include <mach/mach_time.h>

#define ENABLE_DETAILED_GC_STATS 0

#if ENABLE_INTERNAL_PROFILER

struct UnityFrameStats
{
	typedef signed long long Timestamp;

	Timestamp fixedBehaviourManagerDt;
	Timestamp fixedPhysicsManagerDt;
	Timestamp dynamicBehaviourManagerDt;
	Timestamp coroutineDt;
	Timestamp skinMeshUpdateDt;
	Timestamp animationUpdateDt;
	Timestamp renderDt;
	Timestamp cullingDt;
	Timestamp clearDt;
	int fixedUpdateCount;

	// TODO: add msaa resolve in here

	Timestamp drawCallTime;
	int drawCallCount;
	int triCount;
	int vertCount;

	Timestamp batchDt;
	int batchedDrawCallCount;
	int batchedTris;
	int batchedVerts;
};

extern "C"
{
	int64_t mono_gc_get_used_size();
	int64_t mono_gc_get_heap_size();

	typedef enum
	{
		MONO_GC_EVENT_START,
		MONO_GC_EVENT_MARK_START,
		MONO_GC_EVENT_MARK_END,
		MONO_GC_EVENT_RECLAIM_START,
		MONO_GC_EVENT_RECLAIM_END,
		MONO_GC_EVENT_END,
		MONO_GC_EVENT_PRE_STOP_WORLD,
		MONO_GC_EVENT_POST_STOP_WORLD,
		MONO_GC_EVENT_PRE_START_WORLD,
		MONO_GC_EVENT_POST_START_WORLD
	} MonoGCEvent;

	typedef enum {
		MONO_PROFILE_NONE = 0,
		MONO_PROFILE_APPDOMAIN_EVENTS = 1 << 0,
		MONO_PROFILE_ASSEMBLY_EVENTS  = 1 << 1,
		MONO_PROFILE_MODULE_EVENTS    = 1 << 2,
		MONO_PROFILE_CLASS_EVENTS     = 1 << 3,
		MONO_PROFILE_JIT_COMPILATION  = 1 << 4,
		MONO_PROFILE_INLINING         = 1 << 5,
		MONO_PROFILE_EXCEPTIONS       = 1 << 6,
		MONO_PROFILE_ALLOCATIONS      = 1 << 7,
		MONO_PROFILE_GC               = 1 << 8,
		MONO_PROFILE_THREADS          = 1 << 9,
		MONO_PROFILE_REMOTING         = 1 << 10,
		MONO_PROFILE_TRANSITIONS      = 1 << 11,
		MONO_PROFILE_ENTER_LEAVE      = 1 << 12,
		MONO_PROFILE_COVERAGE         = 1 << 13,
		MONO_PROFILE_INS_COVERAGE     = 1 << 14,
		MONO_PROFILE_STATISTICAL      = 1 << 15,
		MONO_PROFILE_METHOD_EVENTS    = 1 << 16,
		MONO_PROFILE_MONITOR_EVENTS   = 1 << 17,
		MONO_PROFILE_IOMAP_EVENTS     = 1 << 18, /* this should likely be removed, too */
		MONO_PROFILE_GC_MOVES         = 1 << 19,
		MONO_PROFILE_GC_ROOTS         = 1 << 20
	} MonoProfileFlags;

	typedef struct _MonoProfiler MonoProfiler;

	typedef void (*MonoProfileFunc) (MonoProfiler *prof);
	typedef void (*MonoProfileGCFunc)         (MonoProfiler *prof, MonoGCEvent event, int generation);
	typedef void (*MonoProfileGCMoveFunc)     (MonoProfiler *prof, void **objects, int num);
	typedef void (*MonoProfileGCResizeFunc)   (MonoProfiler *prof, int64_t new_size);

	void mono_profiler_install (MonoProfiler *prof, MonoProfileFunc shutdown_callback);
	void mono_profiler_set_events (MonoProfileFlags events);
	void mono_profiler_install_gc (MonoProfileGCFunc callback, MonoProfileGCResizeFunc heap_resize_callback);

	struct _MonoProfiler
	{
		int64_t gc_total_time;
		int64_t gc_mark_time;
		int64_t gc_reclaim_time;
		int64_t gc_stop_world_time;
		int64_t gc_start_world_time;
	};
}

extern bool	_ios43orNewer;

namespace
{
	mach_timebase_info_data_t timebaseInfo;
	void ProfilerInit()
	{
		mach_timebase_info(&timebaseInfo);
	}

	static float MachToMillisecondsDelta(int64_t delta)
	{
		// Convert to nanoseconds
		delta *= timebaseInfo.numer;
		delta /= timebaseInfo.denom;
		float result = (float)delta / 1000000.0F;
		return result;
	}

	struct ProfilerBlock
	{
		int64_t maxV, minV, avgV;
	};

	void ProfilerBlock_Update(struct ProfilerBlock* b, int64_t d, bool reset, bool avoidZero = false)
	{
		if (reset)
		{
			b->maxV = b->minV = b->avgV = d;
		}
		else
		{
			b->maxV = (d > b->maxV)? d : b->maxV;
			if (avoidZero && (b->minV == 0 || d == 0))
				b->minV = (d > b->minV)? d : b->minV;
			else
				b->minV = (d < b->minV)? d : b->minV;
			b->avgV += d;
		}
	}


	ProfilerBlock	_framePB;
	ProfilerBlock	_presentPB;
	ProfilerBlock	_gpuPB;
	ProfilerBlock	_playerPB;
	ProfilerBlock	_oglesPB;

	ProfilerBlock	_drawCallCountPB;
	ProfilerBlock	_triCountPB;
	ProfilerBlock	_vertCountPB;

	struct ProfilerBlock _batchPB;
	struct ProfilerBlock _batchedDrawCallCountPB;
	struct ProfilerBlock _batchedTriCountPB;
	struct ProfilerBlock _batchedVertCountPB;

	struct ProfilerBlock _fixedBehaviourManagerPB;
	struct ProfilerBlock _fixedPhysicsManagerPB;
	struct ProfilerBlock _dynamicBehaviourManagerPB;
	struct ProfilerBlock _coroutinePB;
	struct ProfilerBlock _skinMeshUpdatePB;
	struct ProfilerBlock _animationUpdatePB;
	struct ProfilerBlock _unityRenderLoopPB;
	struct ProfilerBlock _unityCullingPB;
	struct ProfilerBlock _unityWaitsForGpuPB;
	struct ProfilerBlock _unityMSAAResolvePB;
	struct ProfilerBlock _fixedUpdateCountPB;
	struct ProfilerBlock _GCCountPB;
	struct ProfilerBlock _GCDurationPB;


	int		_frameId			= 0;

	int64_t	_gpuDelta			= 0;
	int64_t	_swapStart			= 0;
	int64_t	_lastVBlankTime		= -1;
	int64_t	_frameStart			= 0;

	int64_t	_msaaResolveStart	= 0;
	int64_t	_msaaResolve		= 0;
	void*	_msaaResolveCounter	= 0;


	UnityFrameStats	_unityFrameStats;
}

extern "C"	int64_t	UnityScriptingGetUsedSize();
extern "C"	int64_t	UnityScriptingGetHeapSize();
static		void	Profiler_SetupScriptingProfile();

void Profiler_InitProfiler()
{
	Profiler_SetupScriptingProfile();
	ProfilerInit();

	if( _msaaResolveCounter == 0 )
		_msaaResolveCounter = UnityCreateProfilerCounter("iOS.MSAAResolve");
}

void Profiler_UninitProfiler()
{
	UnityDestroyProfilerCounter(_msaaResolveCounter);
}

void
Profiler_FrameStart()
{
	_frameStart = mach_absolute_time();
}

void
Profiler_FrameEnd()
{
#if ENABLE_BLOCK_ON_GPU_PROFILER
		int64_t gpuTime0 = mach_absolute_time();
		UnityFinishRendering();
		int64_t gpuTime1 = mach_absolute_time();

		_gpuDelta = gpuTime1 - gpuTime0;
#else
		_gpuDelta = 0;
#endif

	_swapStart = mach_absolute_time();
}

void
Profiler_FrameUpdate(const struct UnityFrameStats* unityFrameStats)
{
	if (!unityFrameStats)
		return;

	_unityFrameStats = *unityFrameStats;

	int64_t vblankTime = mach_absolute_time();

	static bool firstFrame = true;
	if( firstFrame )
	{
		_lastVBlankTime = vblankTime;
		firstFrame = false;
		return;
	}

	int64_t frameDelta	= vblankTime - _lastVBlankTime;
	int64_t swapDelta	= vblankTime - _swapStart;
	int64_t playerDelta	= _swapStart - _frameStart - _gpuDelta - _unityFrameStats.drawCallTime;

	_lastVBlankTime = vblankTime;

	const int EachNthFrame = 30;
	if (_frameId == EachNthFrame)
	{
		_frameId = 0;

		printf_console("iPhone Unity internal profiler stats:\n");
		printf_console("cpu-player>    min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_playerPB.minV), MachToMillisecondsDelta(_playerPB.maxV), MachToMillisecondsDelta(_playerPB.avgV / EachNthFrame));
		printf_console("cpu-ogles-drv> min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_oglesPB.minV), MachToMillisecondsDelta(_oglesPB.maxV), MachToMillisecondsDelta(_oglesPB.avgV / EachNthFrame));
		printf_console("cpu-present>   min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_presentPB.minV), MachToMillisecondsDelta(_presentPB.maxV), MachToMillisecondsDelta(_presentPB.avgV / EachNthFrame));
#if ENABLE_BLOCK_ON_GPU_PROFILER
		printf_console("gpu>           min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_gpuPB.minV), MachToMillisecondsDelta(_gpuPB.maxV), MachToMillisecondsDelta(_gpuPB.avgV) / EachNthFrame);
#endif
		// only pay attention if wait-for-gpu is significant (2 milliseconds)
		const float waitForGpuThreshold = 2.0f * EachNthFrame;
		if (MachToMillisecondsDelta(_unityWaitsForGpuPB.avgV) >= waitForGpuThreshold)
		{
			printf_console("cpu-waits-gpu> min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_unityWaitsForGpuPB.minV), MachToMillisecondsDelta(_unityWaitsForGpuPB.maxV), MachToMillisecondsDelta(_unityWaitsForGpuPB.avgV / EachNthFrame));
			printf_console(" msaa-resolve> min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_unityMSAAResolvePB.minV), MachToMillisecondsDelta(_unityMSAAResolvePB.maxV), MachToMillisecondsDelta(_unityMSAAResolvePB.avgV / EachNthFrame));
		}
		printf_console("frametime>     min: %4.1f   max: %4.1f   avg: %4.1f\n", MachToMillisecondsDelta(_framePB.minV), MachToMillisecondsDelta(_framePB.maxV), MachToMillisecondsDelta(_framePB.avgV / EachNthFrame));

		printf_console("draw-call #>   min: %3d    max: %3d    avg: %3d     | batched: %5d\n", (int)_drawCallCountPB.minV, (int)_drawCallCountPB.maxV, (int)(_drawCallCountPB.avgV / EachNthFrame), (int)(_batchedDrawCallCountPB.avgV / EachNthFrame));
		printf_console("tris #>        min: %5d  max: %5d  avg: %5d   | batched: %5d\n", (int)_triCountPB.minV, (int)_triCountPB.maxV, (int)(_triCountPB.avgV / EachNthFrame), (int)(_batchedTriCountPB.avgV / EachNthFrame));
		printf_console("verts #>       min: %5d  max: %5d  avg: %5d   | batched: %5d\n", (int)_vertCountPB.minV, (int)_vertCountPB.maxV, (int)(_vertCountPB.avgV / EachNthFrame), (int)(_batchedVertCountPB.avgV / EachNthFrame));

		printf_console("player-detail> physx: %4.1f animation: %4.1f culling %4.1f skinning: %4.1f batching: %4.1f render: %4.1f fixed-update-count: %d .. %d\n",
					   MachToMillisecondsDelta((int)_fixedPhysicsManagerPB.avgV / EachNthFrame),
					   MachToMillisecondsDelta((int)_animationUpdatePB.avgV / EachNthFrame),
					   MachToMillisecondsDelta((int)_unityCullingPB.avgV / EachNthFrame),
					   MachToMillisecondsDelta((int)_skinMeshUpdatePB.avgV / EachNthFrame),
					   MachToMillisecondsDelta((int)_batchPB.avgV / EachNthFrame),
#if INCLUDE_OPENGLES_IN_RENDER_TIME
					   MachToMillisecondsDelta((int)(_unityRenderLoopPB.avgV - _batchPB.avgV - _unityCullingPB.avgV - _unityWaitsForGpuPB.avgV) / EachNthFrame),
#else
					   MachToMillisecondsDelta((int)(_unityRenderLoopPB.avgV - _oglesPB.avgV - _batchPB.avgV - _unityCullingPB.avgV - _unityWaitsForGpuPB.avgV) / EachNthFrame),
#endif
					   (int)_fixedUpdateCountPB.minV, (int)_fixedUpdateCountPB.maxV);
		printf_console("scripting-scripts>  update: %4.1f   fixedUpdate: %4.1f coroutines: %4.1f \n", MachToMillisecondsDelta(_dynamicBehaviourManagerPB.avgV / EachNthFrame), MachToMillisecondsDelta(_fixedBehaviourManagerPB.avgV / EachNthFrame), MachToMillisecondsDelta(_coroutinePB.avgV / EachNthFrame));
		printf_console("scripting-memory>   used heap: %lld allocated heap: %lld  max number of collections: %d collection total duration: %4.1f\n", UnityScriptingGetUsedSize(), UnityScriptingGetHeapSize(), (int)_GCCountPB.avgV, MachToMillisecondsDelta(_GCDurationPB.avgV));
		printf_console("----------------------------------------\n");
	}
	ProfilerBlock_Update(&_framePB, frameDelta, (_frameId == 0));
	ProfilerBlock_Update(&_presentPB, swapDelta, (_frameId == 0));

	ProfilerBlock_Update(&_gpuPB, _gpuDelta, (_frameId == 0), true);
	ProfilerBlock_Update(&_playerPB, playerDelta, (_frameId == 0));
	ProfilerBlock_Update(&_oglesPB, _unityFrameStats.drawCallTime, (_frameId == 0));

	ProfilerBlock_Update(&_drawCallCountPB, _unityFrameStats.drawCallCount, (_frameId == 0));
	ProfilerBlock_Update(&_triCountPB, _unityFrameStats.triCount, (_frameId == 0));
	ProfilerBlock_Update(&_vertCountPB, _unityFrameStats.vertCount, (_frameId == 0));

	ProfilerBlock_Update(&_batchPB, _unityFrameStats.batchDt, (_frameId == 0));
	ProfilerBlock_Update(&_batchedDrawCallCountPB, _unityFrameStats.batchedDrawCallCount, (_frameId == 0));
	ProfilerBlock_Update(&_batchedTriCountPB, _unityFrameStats.batchedTris, (_frameId == 0));
	ProfilerBlock_Update(&_batchedVertCountPB, _unityFrameStats.batchedVerts, (_frameId == 0));

	ProfilerBlock_Update(&_fixedBehaviourManagerPB, _unityFrameStats.fixedBehaviourManagerDt, (_frameId == 0));
	ProfilerBlock_Update(&_fixedPhysicsManagerPB, _unityFrameStats.fixedPhysicsManagerDt, (_frameId == 0));
	ProfilerBlock_Update(&_dynamicBehaviourManagerPB, _unityFrameStats.dynamicBehaviourManagerDt, (_frameId == 0));
	ProfilerBlock_Update(&_coroutinePB, _unityFrameStats.coroutineDt, (_frameId == 0));
	ProfilerBlock_Update(&_skinMeshUpdatePB, _unityFrameStats.skinMeshUpdateDt, (_frameId == 0));
	ProfilerBlock_Update(&_animationUpdatePB, _unityFrameStats.animationUpdateDt, (_frameId == 0));
	ProfilerBlock_Update(&_unityRenderLoopPB, _unityFrameStats.renderDt, (_frameId == 0));
	ProfilerBlock_Update(&_unityCullingPB, _unityFrameStats.cullingDt, (_frameId == 0));
	ProfilerBlock_Update(&_unityMSAAResolvePB, _msaaResolve, (_frameId == 0));
	ProfilerBlock_Update(&_fixedUpdateCountPB, _unityFrameStats.fixedUpdateCount, (_frameId == 0));
	ProfilerBlock_Update(&_GCCountPB, 0, (_frameId == 0));
	ProfilerBlock_Update(&_GCDurationPB, 0, (_frameId == 0));

	if( _ios43orNewer )
		ProfilerBlock_Update(&_unityWaitsForGpuPB, swapDelta, (_frameId == 0));
	else
		ProfilerBlock_Update(&_unityWaitsForGpuPB, _unityFrameStats.clearDt+_msaaResolve, (_frameId == 0));

	_msaaResolve = 0;


	++_frameId;
}

void Profiler_StartMSAAResolve()
{
	UnityStartProfilerCounter(_msaaResolveCounter);
	_msaaResolveStart = mach_absolute_time();
}

void Profiler_EndMSAAResolve()
{
	_msaaResolve += (mach_absolute_time() - _msaaResolveStart);
	UnityEndProfilerCounter(_msaaResolveCounter);
}


//
// scriptint memory profiling
//

extern "C"
{
	// TODO: move it to unityinterface.h?

	enum ScriptingGCEvent
	{
		SCRIPTING_GC_EVENT_START,
		SCRIPTING_GC_EVENT_MARK_START,
		SCRIPTING_GC_EVENT_MARK_END,
		SCRIPTING_GC_EVENT_RECLAIM_START,
		SCRIPTING_GC_EVENT_RECLAIM_END,
		SCRIPTING_GC_EVENT_END,
		SCRIPTING_GC_EVENT_PRE_STOP_WORLD,
		SCRIPTING_GC_EVENT_POST_STOP_WORLD,
		SCRIPTING_GC_EVENT_PRE_START_WORLD,
		SCRIPTING_GC_EVENT_POST_START_WORLD
	};

	enum ScriptingProfileFlags
	{
		SCRIPTING_PROFILE_NONE				= 0,
		SCRIPTING_PROFILE_APPDOMAIN_EVENTS	= 1 << 0,
		SCRIPTING_PROFILE_ASSEMBLY_EVENTS	= 1 << 1,
		SCRIPTING_PROFILE_MODULE_EVENTS		= 1 << 2,
		SCRIPTING_PROFILE_CLASS_EVENTS		= 1 << 3,
		SCRIPTING_PROFILE_JIT_COMPILATION	= 1 << 4,
		SCRIPTING_PROFILE_INLINING			= 1 << 5,
		SCRIPTING_PROFILE_EXCEPTIONS		= 1 << 6,
		SCRIPTING_PROFILE_ALLOCATIONS		= 1 << 7,
		SCRIPTING_PROFILE_GC				= 1 << 8,
		SCRIPTING_PROFILE_THREADS			= 1 << 9,
		SCRIPTING_PROFILE_REMOTING			= 1 << 10,
		SCRIPTING_PROFILE_TRANSITIONS		= 1 << 11,
		SCRIPTING_PROFILE_ENTER_LEAVE		= 1 << 12,
		SCRIPTING_PROFILE_COVERAGE			= 1 << 13,
		SCRIPTING_PROFILE_INS_COVERAGE		= 1 << 14,
		SCRIPTING_PROFILE_STATISTICAL		= 1 << 15,
		SCRIPTING_PROFILE_METHOD_EVENTS		= 1 << 16,
		SCRIPTING_PROFILE_MONITOR_EVENTS	= 1 << 17,
		SCRIPTING_PROFILE_IOMAP_EVENTS		= 1 << 18, /* this should likely be removed, too */
		SCRIPTING_PROFILE_GC_MOVES			= 1 << 19,
	};

	struct MemoryProfiler
	{
		int64_t gc_total_time;
		int64_t gc_mark_time;
		int64_t gc_reclaim_time;
		int64_t gc_stop_world_time;
		int64_t gc_start_world_time;
	};

	typedef void (*UnityScriptingProfileFunc)(void* /*MemoryProfiler*/ prof);
	typedef void (*UnityScriptingProfileGCFunc)(void* /*MemoryProfiler*/ prof, int event, int generation);
	typedef void (*UnityScriptingProfileGCResizeFunc)(void* /*MemoryProfiler*/ prof, int64_t new_size);

	void	UnityScriptingProfilerInstall(void* /*MemoryProfiler*/ prof, UnityScriptingProfileFunc shutdown_callback);
	void	UnityScriptingProfilerInstallGC(UnityScriptingProfileGCFunc callback, UnityScriptingProfileGCResizeFunc heap_resize_callback);
	void	UnityScriptingProfilerSetEvents(int /*ScriptingProfileFlags*/ events);
}


static MemoryProfiler _MemoryProfiler;

static void gc_event(void* profiler_, int event, int generation)
{
	MemoryProfiler* profiler = (MemoryProfiler*)profiler_;
	switch(event)
	{
		case SCRIPTING_GC_EVENT_START:
			profiler->gc_total_time = mach_absolute_time();
			break;
		case SCRIPTING_GC_EVENT_END:
		{
			profiler->gc_total_time = mach_absolute_time() - profiler->gc_total_time;
			float delta = profiler->gc_total_time;
			ProfilerBlock_Update(&_GCDurationPB, delta, false);
			ProfilerBlock_Update(&_GCCountPB, 1, false);
			break;
		}
		case SCRIPTING_GC_EVENT_MARK_START:
			profiler->gc_mark_time = mach_absolute_time();
			break;
		case SCRIPTING_GC_EVENT_MARK_END:
			profiler->gc_mark_time = mach_absolute_time() - profiler->gc_mark_time;
			break;
		case SCRIPTING_GC_EVENT_RECLAIM_START:
			profiler->gc_reclaim_time = mach_absolute_time();
			break;
		case SCRIPTING_GC_EVENT_RECLAIM_END:
			profiler->gc_reclaim_time = mach_absolute_time() - profiler->gc_reclaim_time;
			break;
		case SCRIPTING_GC_EVENT_PRE_STOP_WORLD:
			profiler->gc_stop_world_time = mach_absolute_time();
			break;
		case SCRIPTING_GC_EVENT_POST_STOP_WORLD:
			profiler->gc_stop_world_time = mach_absolute_time() - profiler->gc_stop_world_time;
			break;
		case SCRIPTING_GC_EVENT_PRE_START_WORLD:
			profiler->gc_start_world_time = mach_absolute_time();
			break;
		case SCRIPTING_GC_EVENT_POST_START_WORLD:
			profiler->gc_start_world_time = mach_absolute_time() - profiler->gc_start_world_time;
			break;
		default:
			break;
	}

#if ENABLE_DETAILED_GC_STATS
	if (event == SCRIPTING_GC_EVENT_END)
	{
		::printf("scripting-gc>   stop time: %4.1f mark time: %4.1f reclaim time: %4.1f start time: %4.1f total time: %4.1f \n",
			MachToMillisecondsDelta(profiler->gc_stop_world_time),
			MachToMillisecondsDelta(profiler->gc_mark_time),
			MachToMillisecondsDelta(profiler->gc_reclaim_time),
			MachToMillisecondsDelta(profiler->gc_start_world_time),
			MachToMillisecondsDelta(profiler->gc_total_time)
			);
	}
#endif
}

static void gc_resize (void* profiler, int64_t new_size)
{
}
static void profiler_shutdown (void* profiler)
{
}

static void Profiler_SetupScriptingProfile()
{
	UnityScriptingProfilerInstall(&_MemoryProfiler, &profiler_shutdown);
	UnityScriptingProfilerInstallGC(&gc_event, &gc_resize);
	UnityScriptingProfilerSetEvents(SCRIPTING_PROFILE_GC);
}


#endif // ENABLE_INTERNAL_PROFILER
