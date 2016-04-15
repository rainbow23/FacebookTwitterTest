#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t_1813925608_0;
// UnityEngine.RectTransform
struct RectTransform_t212748479_0;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t310896196_0;
// UnityEngine.Canvas
struct Canvas_t814756449_0;
// UnityEngine.Events.UnityAction
struct UnityAction_t502362143_0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t_1130565192_0;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t_69508563_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou1048696858.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// UnityEngine.UI.Graphic
struct  Graphic_t141164899_0  : public UIBehaviour_t1048696858_0
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t1701708784_0 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t_388944582_0  ___m_Color_5;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t212748479_0 * ___m_RectTransform_6;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t310896196_0 * ___m_CanvasRender_7;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t814756449_0 * ___m_Canvas_8;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_9;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_10;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t502362143_0 * ___m_OnDirtyLayoutCallback_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t502362143_0 * ___m_OnDirtyVertsCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t502362143_0 * ___m_OnDirtyMaterialCallback_13;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t_1130565192_0 * ___m_ColorTweenRunner_14;
};
struct Graphic_t141164899_0_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t1701708784_0 * ___s_DefaultUI_1;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t_485082364_0 * ___s_WhiteTexture_2;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::s_VboPool
	ObjectPool_1_t_1813925608_0 * ___s_VboPool_3;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheE
	UnityAction_1_t_69508563_0 * ___U3CU3Ef__amU24cacheE_15;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>> UnityEngine.UI.Graphic::<>f__am$cacheF
	UnityAction_1_t_69508563_0 * ___U3CU3Ef__amU24cacheF_16;
};
