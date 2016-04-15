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

// Facebook.IOSFacebook
struct IOSFacebook_t1742492198_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_171208140_0;
// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t_949090134_0;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// Facebook.OGActionType
struct OGActionType_t1976593526_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t490374140_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t_1581364632_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t574024987_0;
// Facebook.IOSFacebook/NativeDict
struct NativeDict_t_406285290_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"
#include "mscorlib_System_Nullable_1_gen2000177693.h"
#include "mscorlib_System_DateTime_173468004.h"

// System.Void Facebook.IOSFacebook::.ctor()
extern "C"  void IOSFacebook__ctor_m8184880_0 (IOSFacebook_t1742492198_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  void IOSFacebook_iosInit_m978356083_0 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
extern "C"  void IOSFacebook_iosLogin_m_1119605966_0 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosLogout()
extern "C"  void IOSFacebook_iosLogout_m_1089983195_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
extern "C"  void IOSFacebook_iosSetShareDialogMode_m1229186420_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C"  void IOSFacebook_iosFeedRequest_m2015725601_0 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C"  void IOSFacebook_iosAppRequest_m_61877788_0 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t_171208140_0* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C"  void IOSFacebook_iosCreateGameGroup_m_706128707_0 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
extern "C"  void IOSFacebook_iosJoinGameGroup_m840081623_0 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
extern "C"  void IOSFacebook_iosFBSettingsPublishInstall_m_892379789_0 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
extern "C"  void IOSFacebook_iosFBSettingsActivateApp_m1499513868_0 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C"  void IOSFacebook_iosFBAppEventsLogEvent_m_937809496_0 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t_171208140_0* ___paramKeys, StringU5BU5D_t_171208140_0* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C"  void IOSFacebook_iosFBAppEventsLogPurchase_m_641014577_0 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t_171208140_0* ___paramKeys, StringU5BU5D_t_171208140_0* ___paramVals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m1125761628_0 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
extern "C"  void IOSFacebook_iosGetDeepLink_m_923553373_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
extern "C"  int32_t IOSFacebook_get_DialogMode_m_1321556618_0 (IOSFacebook_t1742492198_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C"  void IOSFacebook_set_DialogMode_m_1990725715_0 (IOSFacebook_t1742492198_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C"  bool IOSFacebook_get_LimitEventUsage_m1890747251_0 (IOSFacebook_t1742492198_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void IOSFacebook_set_LimitEventUsage_m1997511914_0 (IOSFacebook_t1742492198_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C"  void IOSFacebook_OnAwake_m_347302028_0 (IOSFacebook_t1742492198_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C"  void IOSFacebook_Init_m_617380578_0 (IOSFacebook_t1742492198_0 * __this, InitDelegate_t_1491310397_0 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t_949090134_0 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_Login_m2099982948_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___scope, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Logout()
extern "C"  void IOSFacebook_Logout_m_1608440482_0 (IOSFacebook_t1742492198_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_AppRequest_m_2024778999_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___message, OGActionType_t1976593526_0 * ___actionType, String_t* ___objectId, StringU5BU5D_t_171208140_0* ___to, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_FeedRequest_m_832340589_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t_1581364632_0 * ___properties, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_Pay_m_1088771444_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t_233164790_0  ___quantityMin, Nullable_1_t_233164790_0  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_GameGroupCreate_m_621526020_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_GameGroupJoin_m_1097674218_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___id, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_GetDeepLink_m1692066869_0 (IOSFacebook_t1742492198_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern "C"  void IOSFacebook_OnGetDeepLinkComplete_m933087806_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogEvent_m1566814693_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___logEvent, Nullable_1_t2000177693_0  ___valueToSum, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_AppEventsLogPurchase_m1228476893_0 (IOSFacebook_t1742492198_0 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C"  void IOSFacebook_PublishInstall_m1756457691_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___appId, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C"  void IOSFacebook_ActivateApp_m_1503366074_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  NativeDict_t_406285290_0 * IOSFacebook_MarshallDict_m1711565113_0 (IOSFacebook_t1742492198_0 * __this, Dictionary_2_t574024987_0 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  NativeDict_t_406285290_0 * IOSFacebook_MarshallDict_m_878888565_0 (IOSFacebook_t1742492198_0 * __this, Dictionary_2_t_1640843327_0 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern "C"  void IOSFacebook_OnInitComplete_m15916358_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern "C"  void IOSFacebook_OnLogin_m1071335850_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void IOSFacebook_ParseLoginDict_m818231423_0 (IOSFacebook_t1742492198_0 * __this, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern "C"  void IOSFacebook_OnAccessTokenRefresh_m_1521217175_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C"  DateTime_t_173468004_0  IOSFacebook_FromTimestamp_m_411802510_0 (IOSFacebook_t1742492198_0 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C"  void IOSFacebook_OnLogout_m908420741_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern "C"  void IOSFacebook_OnRequestComplete_m_1796762677_0 (IOSFacebook_t1742492198_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
