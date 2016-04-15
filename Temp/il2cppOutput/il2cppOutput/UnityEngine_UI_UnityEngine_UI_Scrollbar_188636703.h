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
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t708227199_0;
// UnityEngine.Coroutine
struct Coroutine_t_748028625_0;
struct Coroutine_t_748028625_0_marshaled;

#include "UnityEngine_UI_UnityEngine_UI_Selectable1019922427.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction_2139395919.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracke_1079305987.h"

// UnityEngine.UI.Scrollbar
struct  Scrollbar_t_188636703_0  : public Selectable_t1019922427_0
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t212748479_0 * ___m_HandleRect_15;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_16;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_17;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_18;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_19;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t708227199_0 * ___m_OnValueChanged_20;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t212748479_0 * ___m_ContainerRect_21;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t_725341338_0  ___m_Offset_22;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t_1079305987_0  ___m_Tracker_23;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t_748028625_0 * ___m_PointerDownRepeat_24;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_25;
};
