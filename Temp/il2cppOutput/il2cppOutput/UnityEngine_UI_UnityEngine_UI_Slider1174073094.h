#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t212748479_0;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t_783939440_0;
// UnityEngine.UI.Image
struct Image_t_2049549674_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UI_UnityEngine_UI_Selectable1019922427.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction_1387902058.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracke_1079305987.h"

// UnityEngine.UI.Slider
struct  Slider_t1174073094_0  : public Selectable_t1019922427_0
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t212748479_0 * ___m_FillRect_15;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t212748479_0 * ___m_HandleRect_16;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_18;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_19;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_20;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_21;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t_783939440_0 * ___m_OnValueChanged_22;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t_2049549674_0 * ___m_FillImage_23;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t1584899523_0 * ___m_FillTransform_24;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t212748479_0 * ___m_FillContainerRect_25;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t1584899523_0 * ___m_HandleTransform_26;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t212748479_0 * ___m_HandleContainerRect_27;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t_725341338_0  ___m_Offset_28;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t_1079305987_0  ___m_Tracker_29;
};
