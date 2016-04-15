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

// UnityEngine.GUISkin
struct GUISkin_t_1636059793_0;
// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// UnityEngine.GUIStyle
struct GUIStyle_t822037503_0;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t755371395_0;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t361791205_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_173468004.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "mscorlib_System_IntPtr1759419328.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m_474454500_0 (Object_t * __this /* static, unused */, DateTime_t_173468004_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601_0 (Object_t * __this /* static, unused */, GUISkin_t_1636059793_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t_1636059793_0 * GUI_get_skin_m_293512454_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_backgroundColor(UnityEngine.Color)
extern "C"  void GUI_set_backgroundColor_m885419314_0 (Object_t * __this /* static, unused */, Color_t_388944582_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C"  void GUI_INTERNAL_set_backgroundColor_m_1048086974_0 (Object_t * __this /* static, unused */, Color_t_388944582_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C"  void GUI_set_enabled_m262604887_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m_2001265027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m_1304958283_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m_1587287330_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m_1287915052_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m885093907_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  bool GUI_Button_m_2109816774_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m_488106433_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m_2100473027_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0 * ___position, GUIContent_t_1764161721_0 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C"  String_t* GUI_PasswordFieldGetStrToShow_m1283548296_0 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C"  void GUI_DoTextField_m_1100115499_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForTouchscreen_m_567742145_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___position, int32_t ___id, GUIContent_t_1764161721_0 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t822037503_0 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t755371395_0 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t_981940947_0  GUI_Window_m_1979990601_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t_981940947_0  GUI_ModalWindow_m1806902466_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C"  Rect_t_981940947_0  GUI_DoModalWindow_m1270479406_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C"  Rect_t_981940947_0  GUI_INTERNAL_CALL_DoModalWindow_m1188977681_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0 * ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___content, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m_2034628492_0 (Object_t * __this /* static, unused */, WindowFunction_t361791205_0 * ___func, int32_t ___id, GUISkin_t_1636059793_0 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t822037503_0 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t_981940947_0  GUI_DoWindow_m_1563283580_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0  ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t_981940947_0  GUI_INTERNAL_CALL_DoWindow_m1881200661_0 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t_981940947_0 * ___clientRect, WindowFunction_t361791205_0 * ___func, GUIContent_t_1764161721_0 * ___title, GUIStyle_t822037503_0 * ___style, GUISkin_t_1636059793_0 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
