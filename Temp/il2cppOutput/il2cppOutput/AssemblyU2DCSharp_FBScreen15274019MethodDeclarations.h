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

// FBScreen
struct FBScreen_t15274019_0;
// FBScreen/Layout[]
struct LayoutU5BU5D_t_507047784_0;
// System.String
struct String_t;
// FBScreen/Layout/OptionLeft
struct OptionLeft_t1131839285_0;
// FBScreen/Layout/OptionTop
struct OptionTop_t_2041691033_0;
// FBScreen/Layout/OptionCenterHorizontal
struct OptionCenterHorizontal_t1695750279_0;
// FBScreen/Layout/OptionCenterVertical
struct OptionCenterVertical_t1908912281_0;
// System.Collections.Generic.IEnumerable`1<FBScreen/Layout>
struct IEnumerable_1_t_1330049893_0;

#include "codegen/il2cpp-codegen.h"

// System.Void FBScreen::.ctor()
extern "C"  void FBScreen__ctor_m_1364240557_0 (FBScreen_t15274019_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::.cctor()
extern "C"  void FBScreen__cctor_m176119482_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBScreen::get_FullScreen()
extern "C"  bool FBScreen_get_FullScreen_m2099365033_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::set_FullScreen(System.Boolean)
extern "C"  void FBScreen_set_FullScreen_m_1178042592_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FBScreen::get_Resizable()
extern "C"  bool FBScreen_get_Resizable_m_998539073_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBScreen::get_Width()
extern "C"  int32_t FBScreen_get_Width_m_348644480_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FBScreen::get_Height()
extern "C"  int32_t FBScreen_get_Height_m_1714229937_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetResolution(System.Int32,System.Int32,System.Boolean,System.Int32,FBScreen/Layout[])
extern "C"  void FBScreen_SetResolution_m_53528614_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___fullscreen, int32_t ___preferredRefreshRate, LayoutU5BU5D_t_507047784_0* ___layoutParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetAspectRatio(System.Int32,System.Int32,FBScreen/Layout[])
extern "C"  void FBScreen_SetAspectRatio_m1640923645_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, LayoutU5BU5D_t_507047784_0* ___layoutParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetUnityPlayerEmbedCSS(System.String,System.String)
extern "C"  void FBScreen_SetUnityPlayerEmbedCSS_m2071686351_0 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionLeft FBScreen::Left(System.Single)
extern "C"  OptionLeft_t1131839285_0 * FBScreen_Left_m_2034647792_0 (Object_t * __this /* static, unused */, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionTop FBScreen::Top(System.Single)
extern "C"  OptionTop_t_2041691033_0 * FBScreen_Top_m1530609942_0 (Object_t * __this /* static, unused */, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionCenterHorizontal FBScreen::CenterHorizontal()
extern "C"  OptionCenterHorizontal_t1695750279_0 * FBScreen_CenterHorizontal_m1419317691_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FBScreen/Layout/OptionCenterVertical FBScreen::CenterVertical()
extern "C"  OptionCenterVertical_t1908912281_0 * FBScreen_CenterVertical_m1517468347_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBScreen::SetLayout(System.Collections.Generic.IEnumerable`1<FBScreen/Layout>)
extern "C"  void FBScreen_SetLayout_m_1900094753_0 (Object_t * __this /* static, unused */, Object_t* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
