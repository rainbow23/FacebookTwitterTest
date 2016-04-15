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

// Facebook.HideUnityDelegate
struct HideUnityDelegate_t_949090134_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"

// System.Void Facebook.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HideUnityDelegate__ctor_m_80856522_0 (HideUnityDelegate_t_949090134_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
extern "C"  void HideUnityDelegate_Invoke_m1963005831_0 (HideUnityDelegate_t_949090134_0 * __this, bool ___isUnityShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HideUnityDelegate_t_949090134_0(Il2CppObject* delegate, bool ___isUnityShown);
// System.IAsyncResult Facebook.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * HideUnityDelegate_BeginInvoke_m_329011788_0 (HideUnityDelegate_t_949090134_0 * __this, bool ___isUnityShown, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HideUnityDelegate_EndInvoke_m_269273274_0 (HideUnityDelegate_t_949090134_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
