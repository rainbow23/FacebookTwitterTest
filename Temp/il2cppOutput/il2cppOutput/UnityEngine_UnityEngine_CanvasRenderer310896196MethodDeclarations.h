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

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t310896196_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t757324127_0;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1377284899_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C"  void CanvasRenderer_SetColor_m_1096888781_0 (CanvasRenderer_t310896196_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_SetColor_m_1387820532_0 (Object_t * __this /* static, unused */, CanvasRenderer_t310896196_0 * ___self, Color_t_388944582_0 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C"  Color_t_388944582_0  CanvasRenderer_GetColor_m_1219573594_0 (CanvasRenderer_t310896196_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C"  void CanvasRenderer_set_isMask_m_2007831108_0 (CanvasRenderer_t310896196_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetMaterial_m1603188579_0 (CanvasRenderer_t310896196_0 * __this, Material_t1701708784_0 * ___material, Texture_t1814018354_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void CanvasRenderer_SetVertices_m_1684213418_0 (CanvasRenderer_t310896196_0 * __this, List_1_t757324127_0 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C"  void CanvasRenderer_SetVerticesInternal_m1632550220_0 (CanvasRenderer_t310896196_0 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern "C"  void CanvasRenderer_SetVertices_m1767443933_0 (CanvasRenderer_t310896196_0 * __this, UIVertexU5BU5D_t1377284899_0* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C"  void CanvasRenderer_SetVerticesInternalArray_m_1622019211_0 (CanvasRenderer_t310896196_0 * __this, UIVertexU5BU5D_t1377284899_0* ___vertices, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C"  void CanvasRenderer_Clear_m1606508093_0 (CanvasRenderer_t310896196_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C"  int32_t CanvasRenderer_get_absoluteDepth_m1613567475_0 (CanvasRenderer_t310896196_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
