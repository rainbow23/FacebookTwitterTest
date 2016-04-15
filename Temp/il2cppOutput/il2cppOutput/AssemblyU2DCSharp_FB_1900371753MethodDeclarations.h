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

// FB
struct FB_t_1900371753_0;
// Facebook.IFacebook
struct IFacebook_t_113896638_0;
// System.String
struct String_t;
// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t_949090134_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// Facebook.OGActionType
struct OGActionType_t1976593526_0;
// System.String[]
struct StringU5BU5D_t_171208140_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t490374140_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t_1581364632_0;
// Facebook.HttpMethod
struct HttpMethod_t1081556247_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_173468004.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"

// System.Void FB::.ctor()
extern "C"  void FB__ctor_m2080455519_0 (FB_t_1900371753_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::.cctor()
extern "C"  void FB__cctor_m_412484562_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IFacebook FB::get_FacebookImpl()
extern "C"  Object_t * FB_get_FacebookImpl_m1264853578_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AppId()
extern "C"  String_t* FB_get_AppId_m_468093395_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_UserId()
extern "C"  String_t* FB_get_UserId_m1255183031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB::get_AccessToken()
extern "C"  String_t* FB_get_AccessToken_m_1565840442_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime FB::get_AccessTokenExpiresAt()
extern "C"  DateTime_t_173468004_0  FB_get_AccessTokenExpiresAt_m_146458439_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsLoggedIn()
extern "C"  bool FB_get_IsLoggedIn_m_1058384557_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB::get_IsInitialized()
extern "C"  bool FB_get_IsInitialized_m_722923734_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,Facebook.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m_1235120718_0 (Object_t * __this /* static, unused */, InitDelegate_t_1491310397_0 * ___onInitComplete, HideUnityDelegate_t_949090134_0 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m50421969_0 (Object_t * __this /* static, unused */, InitDelegate_t_1491310397_0 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t_949090134_0 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::OnDllLoaded()
extern "C"  void FB_OnDllLoaded_m_128211993_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
extern "C"  void FB_Login_m8533077_0 (Object_t * __this /* static, unused */, String_t* ___scope, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Logout()
extern "C"  void FB_Logout_m_1792560113_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void FB_AppRequest_m167998354_0 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t1976593526_0 * ___actionType, String_t* ___objectId, StringU5BU5D_t_171208140_0* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void FB_AppRequest_m128749012_0 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t1976593526_0 * ___actionType, String_t* ___objectId, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void FB_AppRequest_m1011456594_0 (Object_t * __this /* static, unused */, String_t* ___message, StringU5BU5D_t_171208140_0* ___to, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C"  void FB_Feed_m1185953111_0 (Object_t * __this /* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t_1581364632_0 * ___properties, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void FB_API_m_587836808_0 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t1081556247_0 * ___method, FacebookDelegate_t_1539649159_0 * ___callback, Dictionary_2_t_1640843327_0 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
extern "C"  void FB_API_m66791271_0 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t1081556247_0 * ___method, FacebookDelegate_t_1539649159_0 * ___callback, WWWForm_t_251098350_0 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
extern "C"  void FB_PublishInstall_m67890062_0 (Object_t * __this /* static, unused */, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::ActivateApp()
extern "C"  void FB_ActivateApp_m69461035_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
extern "C"  void FB_GetDeepLink_m_546871514_0 (Object_t * __this /* static, unused */, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void FB_GameGroupCreate_m1609255213_0 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C"  void FB_GameGroupJoin_m_742042873_0 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
