#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FB/RemoteFacebookLoader/LoadedDllCallback
struct LoadedDllCallback_t_572589428_0;
// System.Object
struct Object_t;
// Facebook.IFacebook
struct IFacebook_t_113896638_0;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"

// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadedDllCallback__ctor_m1096421214_0 (LoadedDllCallback_t_572589428_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::Invoke(Facebook.IFacebook)
extern "C"  void LoadedDllCallback_Invoke_m1255785265_0 (LoadedDllCallback_t_572589428_0 * __this, Object_t * ___fb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LoadedDllCallback_t_572589428_0(Il2CppObject* delegate, Object_t * ___fb);
// System.IAsyncResult FB/RemoteFacebookLoader/LoadedDllCallback::BeginInvoke(Facebook.IFacebook,System.AsyncCallback,System.Object)
extern "C"  Object_t * LoadedDllCallback_BeginInvoke_m1070575122_0 (LoadedDllCallback_t_572589428_0 * __this, Object_t * ___fb, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::EndInvoke(System.IAsyncResult)
extern "C"  void LoadedDllCallback_EndInvoke_m1080549486_0 (LoadedDllCallback_t_572589428_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
