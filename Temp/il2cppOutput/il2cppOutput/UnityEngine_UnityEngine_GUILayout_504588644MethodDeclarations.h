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

// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t_1479612077_0;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t1897899569_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUILayout::Label(UnityEngine.Texture,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m1657324111_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___image, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m_482920774_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109_0 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextField_m_1927315168_0 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m_470599281_0 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739_0 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C"  void GUILayout_FlexibleSpace_m_978261107_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m722450062_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m_1876442087_0 (Object_t * __this /* static, unused */, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m_1871323978_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m556624369_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m_2139147652_0 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginVertical_m_1169314908_0 (Object_t * __this /* static, unused */, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUILayoutOptionU5BU5D_t_1479612077_0* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C"  void GUILayout_EndVertical_m_609436733_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_Width_m_2035345885_0 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_MinWidth_m1816706679_0 (Object_t * __this /* static, unused */, float ___minWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_Height_m_520164412_0 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_ExpandWidth_m1724891333_0 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C"  GUILayoutOption_t1897899569_0 * GUILayout_ExpandHeight_m_1603824008_0 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
