﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Display
struct Display_t608632025_0;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1496794073_0;
// System.IntPtr[]
struct IntPtrU5BU5D_t_2059958116_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"
#include "UnityEngine_UnityEngine_RenderBuffer_1016476737.h"

// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m923501527_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m_1115892259_0 (Display_t608632025_0 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m_1918319946_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern "C"  void Display_add_onDisplaysUpdated_m1082911237_0 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1496794073_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern "C"  void Display_remove_onDisplaysUpdated_m_1955691670_0 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1496794073_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern "C"  int32_t Display_get_renderingWidth_m1218826960_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern "C"  int32_t Display_get_renderingHeight_m_367255553_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C"  int32_t Display_get_systemWidth_m_994876797_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C"  int32_t Display_get_systemHeight_m_272595284_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern "C"  RenderBuffer_t_1016476737_0  Display_get_colorBuffer_m571436881_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern "C"  RenderBuffer_t_1016476737_0  Display_get_depthBuffer_m301443761_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::Activate()
extern "C"  void Display_Activate_m_1825861440_0 (Display_t608632025_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern "C"  void Display_SetRenderingResolution_m908864995_0 (Display_t608632025_0 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
extern "C"  Display_t608632025_0 * Display_get_main_m_1626089305_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m581883884_0 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t_2059958116_0* ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m_713832599_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetSystemExtImpl_m_891431211_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetRenderingExtImpl_m_1444293922_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C"  void Display_GetRenderingBuffersImpl_m31000264_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t_1016476737_0 * ___color, RenderBuffer_t_1016476737_0 * ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C"  void Display_SetRenderingResolutionImpl_m441137009_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr)
extern "C"  void Display_ActivateDisplayImpl_m2070208912_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
