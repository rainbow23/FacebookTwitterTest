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

// Facebook.AsyncRequestString
struct AsyncRequestString_t_2144043534_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// Facebook.HttpMethod
struct HttpMethod_t1081556247_0;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;
// System.Collections.IEnumerator
struct IEnumerator_t_366941965_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Facebook.AsyncRequestString::.ctor()
extern "C"  void AsyncRequestString__ctor_m_147659298_0 (AsyncRequestString_t_2144043534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C"  void AsyncRequestString_Post_m_7411148_0 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t_1640843327_0 * ___formData, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C"  void AsyncRequestString_Get_m1419764608_0 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t_1640843327_0 * ___formData, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C"  void AsyncRequestString_Request_m_2045275789_0 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t1081556247_0 * ___method, WWWForm_t_251098350_0 * ___query, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C"  void AsyncRequestString_Request_m1338088574_0 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t1081556247_0 * ___method, Dictionary_2_t_1640843327_0 * ___formData, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern "C"  Object_t * AsyncRequestString_Start_m798460872_0 (AsyncRequestString_t_2144043534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C"  AsyncRequestString_t_2144043534_0 * AsyncRequestString_SetUrl_m248962006_0 (AsyncRequestString_t_2144043534_0 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C"  AsyncRequestString_t_2144043534_0 * AsyncRequestString_SetMethod_m1206281083_0 (AsyncRequestString_t_2144043534_0 * __this, HttpMethod_t1081556247_0 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  AsyncRequestString_t_2144043534_0 * AsyncRequestString_SetFormData_m2046885700_0 (AsyncRequestString_t_2144043534_0 * __this, Dictionary_2_t_1640843327_0 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C"  AsyncRequestString_t_2144043534_0 * AsyncRequestString_SetQuery_m836169897_0 (AsyncRequestString_t_2144043534_0 * __this, WWWForm_t_251098350_0 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C"  AsyncRequestString_t_2144043534_0 * AsyncRequestString_SetCallback_m_1927744587_0 (AsyncRequestString_t_2144043534_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
