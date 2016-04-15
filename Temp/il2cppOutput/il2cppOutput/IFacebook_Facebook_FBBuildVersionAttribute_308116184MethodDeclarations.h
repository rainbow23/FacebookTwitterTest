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

// Facebook.FBBuildVersionAttribute
struct FBBuildVersionAttribute_t_308116184_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Facebook.FBBuildVersionAttribute[]
struct FBBuildVersionAttributeU5BU5D_t253093514_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_173468004.h"

// System.Void Facebook.FBBuildVersionAttribute::.ctor(System.String,System.String)
extern "C"  void FBBuildVersionAttribute__ctor_m2090828176_0 (FBBuildVersionAttribute_t_308116184_0 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.FBBuildVersionAttribute::get_Date()
extern "C"  DateTime_t_173468004_0  FBBuildVersionAttribute_get_Date_m1624070310_0 (FBBuildVersionAttribute_t_308116184_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
extern "C"  String_t* FBBuildVersionAttribute_get_Hash_m_1790024688_0 (FBBuildVersionAttribute_t_308116184_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
extern "C"  String_t* FBBuildVersionAttribute_get_SdkVersion_m_988572288_0 (FBBuildVersionAttribute_t_308116184_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
extern "C"  String_t* FBBuildVersionAttribute_get_BuildVersion_m1785829772_0 (FBBuildVersionAttribute_t_308116184_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::ToString()
extern "C"  String_t* FBBuildVersionAttribute_ToString_m2038260965_0 (FBBuildVersionAttribute_t_308116184_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
extern "C"  FBBuildVersionAttribute_t_308116184_0 * FBBuildVersionAttribute_GetVersionAttributeOfType_m_865468045_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
extern "C"  FBBuildVersionAttributeU5BU5D_t253093514_0* FBBuildVersionAttribute_getAttributes_m961875087_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
