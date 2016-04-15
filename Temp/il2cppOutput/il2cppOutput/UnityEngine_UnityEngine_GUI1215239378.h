#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t_1636059793_0;
// UnityEngineInternal.GenericStack
struct GenericStack_t1899127421_0;

#include "mscorlib_System_Object1919833728.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "mscorlib_System_DateTime_173468004.h"

// UnityEngine.GUI
struct  GUI_t1215239378_0  : public Object_t
{
};
struct GUI_t1215239378_0_StaticFields{
	// System.Single UnityEngine.GUI::scrollStepSize
	float ___scrollStepSize_0;
	// System.Int32 UnityEngine.GUI::scrollControlID
	int32_t ___scrollControlID_1;
	// System.Int32 UnityEngine.GUI::hotTextField
	int32_t ___hotTextField_2;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t_1636059793_0 * ___s_Skin_3;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_t_981940947_0  ___s_ToolTipRect_4;
	// System.Int32 UnityEngine.GUI::boxHash
	int32_t ___boxHash_5;
	// System.Int32 UnityEngine.GUI::repeatButtonHash
	int32_t ___repeatButtonHash_6;
	// System.Int32 UnityEngine.GUI::toggleHash
	int32_t ___toggleHash_7;
	// System.Int32 UnityEngine.GUI::buttonGridHash
	int32_t ___buttonGridHash_8;
	// System.Int32 UnityEngine.GUI::sliderHash
	int32_t ___sliderHash_9;
	// System.Int32 UnityEngine.GUI::beginGroupHash
	int32_t ___beginGroupHash_10;
	// System.Int32 UnityEngine.GUI::scrollviewHash
	int32_t ___scrollviewHash_11;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t1899127421_0 * ___s_ScrollViewStates_12;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t_173468004_0  ___U3CnextScrollStepTimeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.GUI::<scrollTroughSide>k__BackingField
	int32_t ___U3CscrollTroughSideU3Ek__BackingField_14;
};
