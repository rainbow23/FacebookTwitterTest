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

// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t_1875721758_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform321659266.h"
#include "UnityEngine_UnityEngine_LogType_721401675.h"
#include "UnityEngine_UnityEngine_NetworkReachability_1908459716.h"
#include "UnityEngine_UnityEngine_UserAuthorization1386731973.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m987993960_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m1279348309_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C"  bool Application_get_isWebPlayer_m_278097265_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m_1376334440_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
extern "C"  void Application_ExternalCall_m_1463478_0 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t_1875721758_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C"  void Application_OpenURL_m1861717334_0 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType)
extern "C"  void Application_CallLogCallback_m_228591823_0 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
extern "C"  int32_t Application_get_internetReachability_m379356375_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean,System.Boolean)
extern "C"  void Application_ReplyToUserAuthorizationRequest_m_1515425863_0 (Object_t * __this /* static, unused */, bool ___reply, bool ___remember, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::ReplyToUserAuthorizationRequest(System.Boolean)
extern "C"  void Application_ReplyToUserAuthorizationRequest_m859730756_0 (Object_t * __this /* static, unused */, bool ___reply, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::GetUserAuthorizationRequestMode_Internal()
extern "C"  int32_t Application_GetUserAuthorizationRequestMode_Internal_m_392647779_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UserAuthorization UnityEngine.Application::GetUserAuthorizationRequestMode()
extern "C"  int32_t Application_GetUserAuthorizationRequestMode_m_1215717379_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
