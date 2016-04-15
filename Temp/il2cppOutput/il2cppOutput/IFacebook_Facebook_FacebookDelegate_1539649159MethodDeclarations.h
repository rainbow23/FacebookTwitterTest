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

// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// System.Object
struct Object_t;
// FBResult
struct FBResult_t339899987_0;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"

// System.Void Facebook.FacebookDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FacebookDelegate__ctor_m_809373621_0 (FacebookDelegate_t_1539649159_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
extern "C"  void FacebookDelegate_Invoke_m809674636_0 (FacebookDelegate_t_1539649159_0 * __this, FBResult_t339899987_0 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FacebookDelegate_t_1539649159_0(Il2CppObject* delegate, FBResult_t339899987_0 * ___result);
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
extern "C"  Object_t * FacebookDelegate_BeginInvoke_m_6013295_0 (FacebookDelegate_t_1539649159_0 * __this, FBResult_t339899987_0 * ___result, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FacebookDelegate_EndInvoke_m_1114161189_0 (FacebookDelegate_t_1539649159_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
