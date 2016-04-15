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

// Facebook.EditorFacebook
struct EditorFacebook_t24311360_0;
// Facebook.InitDelegate
struct InitDelegate_t_1491310397_0;
// System.String
struct String_t;
// Facebook.HideUnityDelegate
struct HideUnityDelegate_t_949090134_0;
// System.Collections.IEnumerator
struct IEnumerator_t_366941965_0;
// Facebook.IFacebook
struct IFacebook_t_113896638_0;
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
// FBResult
struct FBResult_t339899987_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"
#include "mscorlib_System_Nullable_1_gen2000177693.h"

// System.Void Facebook.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m_515982768_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.EditorFacebook::get_DialogMode()
extern "C"  int32_t EditorFacebook_get_DialogMode_m_1163619974_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_DialogMode(System.Int32)
extern "C"  void EditorFacebook_set_DialogMode_m_168874611_0 (EditorFacebook_t24311360_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m_1317532549_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m_1890516214_0 (EditorFacebook_t24311360_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C"  void EditorFacebook_OnAwake_m_1561238124_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C"  void EditorFacebook_Init_m213568318_0 (EditorFacebook_t24311360_0 * __this, InitDelegate_t_1491310397_0 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t_949090134_0 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.EditorFacebook::OnInit(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C"  Object_t * EditorFacebook_OnInit_m_885448473_0 (EditorFacebook_t24311360_0 * __this, InitDelegate_t_1491310397_0 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t_949090134_0 * ___hideUnityDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::OnDllLoaded(Facebook.IFacebook)
extern "C"  void EditorFacebook_OnDllLoaded_m625639441_0 (EditorFacebook_t24311360_0 * __this, Object_t * ___fb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_Login_m543340612_0 (EditorFacebook_t24311360_0 * __this, String_t* ___scope, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Logout()
extern "C"  void EditorFacebook_Logout_m_677768386_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_AppRequest_m429830377_0 (EditorFacebook_t24311360_0 * __this, String_t* ___message, OGActionType_t1976593526_0 * ___actionType, String_t* ___objectId, StringU5BU5D_t_171208140_0* ___to, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_FeedRequest_m_1566274637_0 (EditorFacebook_t24311360_0 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t_1581364632_0 * ___properties, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_Pay_m6084780_0 (EditorFacebook_t24311360_0 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t_233164790_0  ___quantityMin, Nullable_1_t_233164790_0  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_GameGroupCreate_m_1103601188_0 (EditorFacebook_t24311360_0 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_GameGroupJoin_m_2074707978_0 (EditorFacebook_t24311360_0 * __this, String_t* ___id, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_GetAuthResponse_m_794659150_0 (EditorFacebook_t24311360_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_PublishInstall_m1533182203_0 (EditorFacebook_t24311360_0 * __this, String_t* ___appId, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m_1586386394_0 (EditorFacebook_t24311360_0 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C"  void EditorFacebook_GetDeepLink_m124144149_0 (EditorFacebook_t24311360_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m1136695237_0 (EditorFacebook_t24311360_0 * __this, String_t* ___logEvent, Nullable_1_t2000177693_0  ___valueToSum, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m_421677123_0 (EditorFacebook_t24311360_0 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern "C"  void EditorFacebook_MockLoginCallback_m887743097_0 (EditorFacebook_t24311360_0 * __this, FBResult_t339899987_0 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern "C"  void EditorFacebook_MockCancelledLoginCallback_m_684154341_0 (EditorFacebook_t24311360_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern "C"  void EditorFacebook_BadAccessToken_m_639955298_0 (EditorFacebook_t24311360_0 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
