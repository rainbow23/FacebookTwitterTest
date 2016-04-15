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

// Facebook.AbstractFacebook
struct AbstractFacebook_t_1272854506_0;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// System.String[]
struct StringU5BU5D_t_171208140_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t490374140_0;
// Facebook.HttpMethod
struct HttpMethod_t1081556247_0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t_1640843327_0;
// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;
// FBResult
struct FBResult_t339899987_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_173468004.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"

// System.Void Facebook.AbstractFacebook::.ctor()
extern "C"  void AbstractFacebook__ctor_m896410490_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::Awake()
extern "C"  void AbstractFacebook_Awake_m1134015709_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C"  bool AbstractFacebook_get_IsInitialized_m377800143_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C"  bool AbstractFacebook_get_IsLoggedIn_m1843505358_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C"  String_t* AbstractFacebook_get_UserId_m_1775771754_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C"  void AbstractFacebook_set_UserId_m_876592043_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C"  String_t* AbstractFacebook_get_AccessToken_m42734151_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C"  void AbstractFacebook_set_AccessToken_m2135230610_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C"  DateTime_t_173468004_0  AbstractFacebook_get_AccessTokenExpiresAt_m_174865940_0 (AbstractFacebook_t_1272854506_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C"  void AbstractFacebook_GetAuthResponse_m1452387656_0 (AbstractFacebook_t_1272854506_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void AbstractFacebook_AppRequest_m1615450775_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___message, StringU5BU5D_t_171208140_0* ___to, List_1_t490374140_0 * ___filters, StringU5BU5D_t_171208140_0* ___excludeIds, Nullable_1_t_233164790_0  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern "C"  void AbstractFacebook_API_m_1318403227_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___query, HttpMethod_t1081556247_0 * ___method, Dictionary_2_t_1640843327_0 * ___formData, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern "C"  void AbstractFacebook_API_m1189816236_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___query, HttpMethod_t1081556247_0 * ___method, WWWForm_t_251098350_0 * ___formData, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C"  void AbstractFacebook_AddAuthDelegate_m_1171996199_0 (AbstractFacebook_t_1272854506_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern "C"  void AbstractFacebook_OnAuthResponse_m1294735609_0 (AbstractFacebook_t_1272854506_0 * __this, FBResult_t339899987_0 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C"  String_t* AbstractFacebook_AddFacebookDelegate_m_1813197576_0 (AbstractFacebook_t_1272854506_0 * __this, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C"  void AbstractFacebook_OnFacebookResponse_m_2125725605_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___uniqueId, FBResult_t339899987_0 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  Dictionary_2_t_1640843327_0 * AbstractFacebook_CopyByValue_m1990855102_0 (AbstractFacebook_t_1272854506_0 * __this, Dictionary_2_t_1640843327_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern "C"  String_t* AbstractFacebook_GetGraphUrl_m1473351824_0 (AbstractFacebook_t_1272854506_0 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
