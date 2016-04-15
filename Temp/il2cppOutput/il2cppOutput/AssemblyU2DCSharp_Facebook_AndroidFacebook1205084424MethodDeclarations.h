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

// Facebook.AndroidFacebook
struct AndroidFacebook_t1205084424_0;
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t574024987_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"
#include "mscorlib_System_Nullable_1_gen2000177693.h"
#include "mscorlib_System_DateTime_173468004.h"

// System.Void Facebook.AndroidFacebook::.ctor()
extern "C"  void AndroidFacebook__ctor_m_993725938_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C"  String_t* AndroidFacebook_get_KeyHash_m_2053946739_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.AndroidFacebook::get_DialogMode()
extern "C"  int32_t AndroidFacebook_get_DialogMode_m1380375128_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_DialogMode(System.Int32)
extern "C"  void AndroidFacebook_set_DialogMode_m880924815_0 (AndroidFacebook_t1205084424_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C"  bool AndroidFacebook_get_LimitEventUsage_m_454250799_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void AndroidFacebook_set_LimitEventUsage_m1631211976_0 (AndroidFacebook_t1205084424_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C"  void AndroidFacebook_CallFB_m1927195758_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAwake()
extern "C"  void AndroidFacebook_OnAwake_m_1110923822_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
extern "C"  bool AndroidFacebook_IsErrorResponse_m_1788260213_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C"  void AndroidFacebook_Init_m_956916740_0 (AndroidFacebook_t1205084424_0 * __this, InitDelegate_t_1491310397_0 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t_949090134_0 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C"  void AndroidFacebook_OnInitComplete_m_1157230428_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_Login_m152397510_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___scope, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern "C"  void AndroidFacebook_OnLoginComplete_m1632261779_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern "C"  void AndroidFacebook_OnGroupCreateComplete_m1980032609_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern "C"  void AndroidFacebook_OnAccessTokenRefresh_m_1887517113_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Logout()
extern "C"  void AndroidFacebook_Logout_m1692062528_0 (AndroidFacebook_t1205084424_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern "C"  void AndroidFacebook_OnLogoutComplete_m_1174141974_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_AppRequest_m780405227_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, OGActionType_t1976593526_0 * ___actionType, String_t* ___objectId, StringU5BU5D_t_171208140_0* ___to, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern "C"  void AndroidFacebook_OnAppRequestsComplete_m_659283337_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_FeedRequest_m_1983100943_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t_1581364632_0 * ___properties, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern "C"  void AndroidFacebook_OnFeedRequestComplete_m1938123499_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_Pay_m895263466_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t_233164790_0  ___quantityMin, Nullable_1_t_233164790_0  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_GameGroupCreate_m1274420958_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_GameGroupJoin_m1765508216_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___id, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_GetDeepLink_m_1532454249_0 (AndroidFacebook_t1205084424_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern "C"  void AndroidFacebook_OnGetDeepLinkComplete_m_1832275680_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogEvent_m_1001697209_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___logEvent, Nullable_1_t2000177693_0  ___valueToSum, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AndroidFacebook_AppEventsLogPurchase_m_1734495169_0 (AndroidFacebook_t1205084424_0 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C"  void AndroidFacebook_PublishInstall_m320799929_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___appId, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern "C"  void AndroidFacebook_OnPublishInstallComplete_m_1031386712_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern "C"  void AndroidFacebook_ActivateApp_m_1017696856_0 (AndroidFacebook_t1205084424_0 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Dictionary_2_t_1640843327_0 * AndroidFacebook_ToStringDict_m1876768773_0 (AndroidFacebook_t1205084424_0 * __this, Dictionary_2_t574024987_0 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C"  DateTime_t_173468004_0  AndroidFacebook_FromTimestamp_m_1425843248_0 (AndroidFacebook_t1205084424_0 * __this, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
