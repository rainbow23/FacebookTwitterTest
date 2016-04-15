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

// FB/Canvas
struct Canvas_t1951551920_0;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t_1539649159_0;
// FBScreen/Layout[]
struct LayoutU5BU5D_t_507047784_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_233164790.h"

// System.Void FB/Canvas::.ctor()
extern "C"  void Canvas__ctor_m_1143167072_0 (Canvas_t1951551920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C"  void Canvas_Pay_m_1664081412_0 (Object_t * __this /* static, unused */, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t_233164790_0  ___quantityMin, Nullable_1_t_233164790_0  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t_1539649159_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::SetResolution(System.Int32,System.Int32,System.Boolean,System.Int32,FBScreen/Layout[])
extern "C"  void Canvas_SetResolution_m168659949_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___fullscreen, int32_t ___preferredRefreshRate, LayoutU5BU5D_t_507047784_0* ___layoutParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/Canvas::SetAspectRatio(System.Int32,System.Int32,FBScreen/Layout[])
extern "C"  void Canvas_SetAspectRatio_m_191154742_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, LayoutU5BU5D_t_507047784_0* ___layoutParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
