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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t594103163_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"
#include "mscorlib_System_Collections_DictionaryEntry_606494338.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp_1427236540.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m380669709_0_gshared (Transform_1_t594103163_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m380669709_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t594103163_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m380669709_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t_606494338_0  Transform_1_Invoke_m_2107640821_0_gshared (Transform_1_t594103163_0 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_2107640821_0(__this, ___key, ___value, method) ((  DictionaryEntry_t_606494338_0  (*) (Transform_1_t594103163_0 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m_2107640821_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_470465866_0_gshared (Transform_1_t594103163_0 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_470465866_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t594103163_0 *, Object_t *, int32_t, AsyncCallback_t_626615168_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_470465866_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t_606494338_0  Transform_1_EndInvoke_m1294747551_0_gshared (Transform_1_t594103163_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1294747551_0(__this, ___result, method) ((  DictionaryEntry_t_606494338_0  (*) (Transform_1_t594103163_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1294747551_0_gshared)(__this, ___result, method)
