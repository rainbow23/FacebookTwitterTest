#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t1286782926_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1661474876_0;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic962735421.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type1187456819.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod772947325.h"

// UnityEngine.UI.Image
struct  Image_t_2049549674_0  : public MaskableGraphic_t962735421_0
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t1286782926_0 * ___m_Sprite_22;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t1286782926_0 * ___m_OverrideSprite_23;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_24;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_25;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_26;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_27;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_28;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_29;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_30;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold_31;
};
struct Image_t_2049549674_0_StaticFields{
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1661474876_0* ___s_VertScratch_32;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1661474876_0* ___s_UVScratch_33;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Xy
	Vector2U5BU5D_t1661474876_0* ___s_Xy_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_Uv
	Vector2U5BU5D_t1661474876_0* ___s_Uv_35;
};
