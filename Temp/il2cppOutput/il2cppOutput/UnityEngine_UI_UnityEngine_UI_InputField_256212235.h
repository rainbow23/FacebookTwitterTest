#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t_662603991_0;
// System.Char[]
struct CharU5BU5D_t1581569145_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// UnityEngine.UI.Graphic
struct Graphic_t141164899_0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1161253160_0;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t_301552719_0;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t_525148805_0;
// UnityEngine.RectTransform
struct RectTransform_t212748479_0;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1377284899_0;
// UnityEngine.TextGenerator
struct TextGenerator_t_221040899_0;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t310896196_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t757324127_0;
// UnityEngine.Coroutine
struct Coroutine_t_748028625_0;
struct Coroutine_t_748028625_0_marshaled;
// UnityEngine.Event
struct Event_t_386895759_0;
struct Event_t_386895759_0_marshaled;

#include "UnityEngine_UI_UnityEngine_UI_Selectable1019922427.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentTyp742527769.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType680222570.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType1062714883.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType_645570744.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_Characte_2028316088.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// UnityEngine.UI.InputField
struct  InputField_t_256212235_0  : public Selectable_t1019922427_0
{
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t_204341102_0 * ___m_TextComponent_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t141164899_0 * ___m_Placeholder_21;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_22;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_23;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar_24;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_25;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_26;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_27;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_28;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_29;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_EndEdit
	SubmitEvent_t1161253160_0 * ___m_EndEdit_30;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChange
	OnChangeEvent_t_301552719_0 * ___m_OnValueChange_31;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t_525148805_0 * ___m_OnValidateInput_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t_388944582_0  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_36;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_37;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t212748479_0 * ___caretRectTrans_38;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1377284899_0* ___m_CursorVerts_39;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t_221040899_0 * ___m_InputTextCache_40;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t310896196_0 * ___m_CachedInputRenderer_41;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_42;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.UI.InputField::m_Vbo
	List_1_t757324127_0 * ___m_Vbo_43;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_45;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_46;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_47;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_48;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t_748028625_0 * ___m_BlinkCoroutine_49;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_50;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_51;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t_748028625_0 * ___m_DragCoroutine_53;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_54;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_55;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_56;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t_386895759_0 * ___m_ProcessingEvent_57;
};
struct InputField_t_256212235_0_StaticFields{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t_662603991_0 * ___m_Keyboard_18;
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t1581569145_0* ___kSeparators_19;
};
