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

// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"

// System.Void Facebook.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InitDelegate__ctor_m1878715413_0 (InitDelegate_t_1491310397_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::Invoke()
extern "C"  void InitDelegate_Invoke_m_1893463889_0 (InitDelegate_t_1491310397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t_1491310397_0(Il2CppObject* delegate);
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * InitDelegate_BeginInvoke_m647719420_0 (InitDelegate_t_1491310397_0 * __this, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InitDelegate_EndInvoke_m1634316453_0 (InitDelegate_t_1491310397_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
