#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t_622099231_0;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t1547971751_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;

#include "mscorlib_System_Object1919833728.h"

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t1236822669_0  : public Object_t
{
};
struct SendMouseEvents_t1236822669_0_StaticFields{
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t_622099231_0* ___m_LastHit_3;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t_622099231_0* ___m_MouseDownHit_4;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t_622099231_0* ___m_CurrentHit_5;
	// UnityEngine.RaycastHit2D[] UnityEngine.SendMouseEvents::m_MouseRayHits2D
	RaycastHit2DU5BU5D_t1547971751_0* ___m_MouseRayHits2D_6;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1253062672_0* ___m_Cameras_7;
};
