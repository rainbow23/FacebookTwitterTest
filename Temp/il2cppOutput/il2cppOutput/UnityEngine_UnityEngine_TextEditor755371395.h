#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t_662603991_0;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1760585128_0;

#include "mscorlib_System_Object1919833728.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin1798931458.h"

// UnityEngine.TextEditor
struct  TextEditor_t755371395_0  : public Object_t
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t_662603991_0 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::pos
	int32_t ___pos_1;
	// System.Int32 UnityEngine.TextEditor::selectPos
	int32_t ___selectPos_2;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_3;
	// UnityEngine.GUIContent UnityEngine.TextEditor::content
	GUIContent_t_1764161721_0 * ___content_4;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t822037503_0 * ___style_5;
	// UnityEngine.Rect UnityEngine.TextEditor::position
	Rect_t_981940947_0  ___position_6;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_7;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_8;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_9;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_10;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t_725341338_0  ___scrollOffset_11;
	// System.Boolean UnityEngine.TextEditor::m_TextHeightPotentiallyChanged
	bool ___m_TextHeightPotentiallyChanged_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t_725341338_0  ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t_725341338_0  ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;
};
struct TextEditor_t755371395_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t1760585128_0 * ___s_Keyactions_23;
};
