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

// FBSettings
struct FBSettings_t_655295974_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_171208140_0;

#include "codegen/il2cpp-codegen.h"

// System.Void FBSettings::.ctor()
extern "C"  void FBSettings__ctor_m_2103567748_0 (FBSettings_t_655295974_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBSettings FBSettings::get_Instance()
extern "C"  FBSettings_t_655295974_0 * FBSettings_get_Instance_m_1716167420_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C"  void FBSettings_SetAppIndex_m_1765164130_0 (FBSettings_t_655295974_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C"  int32_t FBSettings_get_SelectedAppIndex_m805165899_0 (FBSettings_t_655295974_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern "C"  void FBSettings_SetAppId_m446578287_0 (FBSettings_t_655295974_0 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppIds()
extern "C"  StringU5BU5D_t_171208140_0* FBSettings_get_AppIds_m_2063828695_0 (FBSettings_t_655295974_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppIds(System.String[])
extern "C"  void FBSettings_set_AppIds_m_1304671804_0 (FBSettings_t_655295974_0 * __this, StringU5BU5D_t_171208140_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern "C"  void FBSettings_SetAppLabel_m_988879236_0 (FBSettings_t_655295974_0 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AppLabels()
extern "C"  StringU5BU5D_t_171208140_0* FBSettings_get_AppLabels_m1073856464_0 (FBSettings_t_655295974_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C"  void FBSettings_set_AppLabels_m234796099_0 (FBSettings_t_655295974_0 * __this, StringU5BU5D_t_171208140_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] FBSettings::get_AllAppIds()
extern "C"  StringU5BU5D_t_171208140_0* FBSettings_get_AllAppIds_m_688886232_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_AppId()
extern "C"  String_t* FBSettings_get_AppId_m_1918455350_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_IsValidAppId()
extern "C"  bool FBSettings_get_IsValidAppId_m_654351537_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Cookie()
extern "C"  bool FBSettings_get_Cookie_m_149624599_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C"  void FBSettings_set_Cookie_m1143730272_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Logging()
extern "C"  bool FBSettings_get_Logging_m1945100956_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C"  void FBSettings_set_Logging_m_684134061_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Status()
extern "C"  bool FBSettings_get_Status_m1715962615_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Status(System.Boolean)
extern "C"  void FBSettings_set_Status_m466147822_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_Xfbml()
extern "C"  bool FBSettings_get_Xfbml_m_1726220016_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C"  void FBSettings_set_Xfbml_m1878277319_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_IosURLSuffix()
extern "C"  String_t* FBSettings_get_IosURLSuffix_m1577285383_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern "C"  void FBSettings_set_IosURLSuffix_m_1878720406_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBSettings::get_ChannelUrl()
extern "C"  String_t* FBSettings_get_ChannelUrl_m323405536_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C"  bool FBSettings_get_FrictionlessRequests_m866749244_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C"  void FBSettings_set_FrictionlessRequests_m_1101433485_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBSettings::DirtyEditor()
extern "C"  void FBSettings_DirtyEditor_m_1678903047_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
