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

// UnityEngine.RectTransform
struct RectTransform_t212748479_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_503171416_0;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t559341144_0;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t_867674284_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder_280376967.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate256425638.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder__ctor_m_1501035548_0 (LayoutRebuilder_t_280376967_0 * __this, RectTransform_t212748479_0 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C"  void LayoutRebuilder__cctor_m1146736720_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m181656712_0 (LayoutRebuilder_t_280376967_0 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ReapplyDrivenProperties_m965971988_0 (Object_t * __this /* static, unused */, RectTransform_t212748479_0 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C"  Transform_t1584899523_0 * LayoutRebuilder_get_transform_m_1063505184_0 (LayoutRebuilder_t_280376967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C"  bool LayoutRebuilder_IsDestroyed_m_290876068_0 (LayoutRebuilder_t_280376967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_StripDisabledBehavioursFromList_m51650679_0 (Object_t * __this /* static, unused */, List_1_t_503171416_0 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutControl_m724256510_0 (LayoutRebuilder_t_280376967_0 * __this, RectTransform_t212748479_0 * ___rect, UnityAction_1_t559341144_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutCalculation_m941802386_0 (LayoutRebuilder_t_280376967_0 * __this, RectTransform_t212748479_0 * ___rect, UnityAction_1_t559341144_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutForRebuild_m901621521_0 (Object_t * __this /* static, unused */, RectTransform_t212748479_0 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
extern "C"  bool LayoutRebuilder_ValidLayoutGroup_m_114118157_0 (Object_t * __this /* static, unused */, RectTransform_t212748479_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
extern "C"  bool LayoutRebuilder_ValidController_m736901660_0 (Object_t * __this /* static, unused */, RectTransform_t212748479_0 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutRootForRebuild_m1708966351_0 (Object_t * __this /* static, unused */, RectTransform_t212748479_0 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
extern "C"  bool LayoutRebuilder_Equals_m_1702399047_0 (LayoutRebuilder_t_280376967_0 * __this, LayoutRebuilder_t_280376967_0  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C"  int32_t LayoutRebuilder_GetHashCode_m1333271044_0 (LayoutRebuilder_t_280376967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C"  String_t* LayoutRebuilder_ToString_m_1891152714_0 (LayoutRebuilder_t_280376967_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__9_m1269261030_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__A_m733207006_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__B_m666200253_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__C_m599193500_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
extern "C"  bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m748989152_0 (Object_t * __this /* static, unused */, Component_t_867674284_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
