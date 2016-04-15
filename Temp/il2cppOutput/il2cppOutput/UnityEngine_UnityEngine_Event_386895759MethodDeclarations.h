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

// UnityEngine.Event
struct Event_t_386895759_0;
struct Event_t_386895759_0_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"
#include "UnityEngine_UnityEngine_EventType563663691.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"
#include "UnityEngine_UnityEngine_EventModifiers555415307.h"
#include "UnityEngine_UnityEngine_KeyCode_1879089917.h"

// System.Void UnityEngine.Event::.ctor()
extern "C"  void Event__ctor_m1609448063_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(UnityEngine.Event)
extern "C"  void Event__ctor_m476307760_0 (Event_t_386895759_0 * __this, Event_t_386895759_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.IntPtr)
extern "C"  void Event__ctor_m2059284533_0 (Event_t_386895759_0 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C"  void Event_Init_m696190965_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C"  void Event_Finalize_m_1845141117_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C"  void Event_Cleanup_m_1134844351_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitCopy(UnityEngine.Event)
extern "C"  void Event_InitCopy_m2065763013_0 (Event_t_386895759_0 * __this, Event_t_386895759_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::InitPtr(System.IntPtr)
extern "C"  void Event_InitPtr_m_525618343_0 (Event_t_386895759_0 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C"  int32_t Event_get_rawType_m696564524_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C"  int32_t Event_get_type_m_2085028046_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
extern "C"  void Event_set_type_m1699027001_0 (Event_t_386895759_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
extern "C"  int32_t Event_GetTypeForControl_m854773288_0 (Event_t_386895759_0 * __this, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C"  Vector2_t_725341338_0  Event_get_mousePosition_m_684541347_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mousePosition(UnityEngine.Vector2)
extern "C"  void Event_set_mousePosition_m1422607276_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMousePosition(UnityEngine.Vector2)
extern "C"  void Event_Internal_SetMousePosition_m5581487_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMousePosition(UnityEngine.Event,UnityEngine.Vector2&)
extern "C"  void Event_INTERNAL_CALL_Internal_SetMousePosition_m1508890229_0 (Object_t * __this /* static, unused */, Event_t_386895759_0 * ___self, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMousePosition_m2054214537_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
extern "C"  Vector2_t_725341338_0  Event_get_delta_m489813159_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_delta(UnityEngine.Vector2)
extern "C"  void Event_set_delta_m_1293574110_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetMouseDelta(UnityEngine.Vector2)
extern "C"  void Event_Internal_SetMouseDelta_m1524970914_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::INTERNAL_CALL_Internal_SetMouseDelta(UnityEngine.Event,UnityEngine.Vector2&)
extern "C"  void Event_INTERNAL_CALL_Internal_SetMouseDelta_m_1872791040_0 (Object_t * __this /* static, unused */, Event_t_386895759_0 * ___self, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
extern "C"  void Event_Internal_GetMouseDelta_m798523742_0 (Event_t_386895759_0 * __this, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Event::get_mouseRay()
extern "C"  Ray_t1215250369_0  Event_get_mouseRay_m_1680090637_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_mouseRay(UnityEngine.Ray)
extern "C"  void Event_set_mouseRay_m_1930515304_0 (Event_t_386895759_0 * __this, Ray_t1215250369_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_button()
extern "C"  int32_t Event_get_button_m_2146943808_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_button(System.Int32)
extern "C"  void Event_set_button_m_2026142459_0 (Event_t_386895759_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C"  int32_t Event_get_modifiers_m_273976410_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
extern "C"  void Event_set_modifiers_m755733059_0 (Event_t_386895759_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Event::get_pressure()
extern "C"  float Event_get_pressure_m_203953465_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_pressure(System.Single)
extern "C"  void Event_set_pressure_m692872516_0 (Event_t_386895759_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C"  int32_t Event_get_clickCount_m57286197_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_clickCount(System.Int32)
extern "C"  void Event_set_clickCount_m142296314_0 (Event_t_386895759_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C"  uint16_t Event_get_character_m_631794629_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_character(System.Char)
extern "C"  void Event_set_character_m1518464756_0 (Event_t_386895759_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C"  String_t* Event_get_commandName_m1197792621_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_commandName(System.String)
extern "C"  void Event_set_commandName_m1537085484_0 (Event_t_386895759_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C"  int32_t Event_get_keyCode_m1820698462_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
extern "C"  void Event_set_keyCode_m1503068465_0 (Event_t_386895759_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_shift()
extern "C"  bool Event_get_shift_m643038780_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_shift(System.Boolean)
extern "C"  void Event_set_shift_m920355033_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_control()
extern "C"  bool Event_get_control_m_1802059241_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_control(System.Boolean)
extern "C"  void Event_set_control_m_1983907852_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_alt()
extern "C"  bool Event_get_alt_m_2098505757_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_alt(System.Boolean)
extern "C"  void Event_set_alt_m_1403733056_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_command()
extern "C"  bool Event_get_command_m1389262981_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_command(System.Boolean)
extern "C"  void Event_set_command_m898160098_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_capsLock()
extern "C"  bool Event_get_capsLock_m1015302612_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_capsLock(System.Boolean)
extern "C"  void Event_set_capsLock_m_1412277147_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_numeric()
extern "C"  bool Event_get_numeric_m340577223_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_numeric(System.Boolean)
extern "C"  void Event_set_numeric_m_796176988_0 (Event_t_386895759_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_functionKey()
extern "C"  bool Event_get_functionKey_m_1695358687_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C"  Event_t_386895759_0 * Event_get_current_m238587645_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_current(UnityEngine.Event)
extern "C"  void Event_set_current_m1302861974_0 (Object_t * __this /* static, unused */, Event_t_386895759_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C"  void Event_Internal_SetNativeEvent_m930902932_0 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C"  void Event_Internal_MakeMasterEventCurrent_m116964302_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
extern "C"  void Event_Use_m310777444_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C"  bool Event_PopEvent_m_1504892281_0 (Object_t * __this /* static, unused */, Event_t_386895759_0 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetEventCount()
extern "C"  int32_t Event_GetEventCount_m222991336_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C"  bool Event_get_isKey_m645126607_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C"  bool Event_get_isMouse_m_743690539_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::KeyboardEvent(System.String)
extern "C"  Event_t_386895759_0 * Event_KeyboardEvent_m1236547202_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C"  int32_t Event_GetHashCode_m_1953319826_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C"  bool Event_Equals_m_1920351466_0 (Event_t_386895759_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C"  String_t* Event_ToString_m_633449778_0 (Event_t_386895759_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t_386895759_0_marshal(const Event_t_386895759_0& unmarshaled, Event_t_386895759_0_marshaled& marshaled);
extern "C" void Event_t_386895759_0_marshal_back(const Event_t_386895759_0_marshaled& marshaled, Event_t_386895759_0& unmarshaled);
extern "C" void Event_t_386895759_0_marshal_cleanup(Event_t_386895759_0_marshaled& marshaled);
