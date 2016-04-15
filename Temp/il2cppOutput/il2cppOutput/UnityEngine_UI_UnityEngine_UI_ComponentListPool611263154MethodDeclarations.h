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

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_503171416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ComponentListPool::.cctor()
extern "C"  void ComponentListPool__cctor_m1561085705_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Component> UnityEngine.UI.ComponentListPool::Get()
extern "C"  List_1_t_503171416_0 * ComponentListPool_Get_m1677724535_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::Release(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void ComponentListPool_Release_m1897901043_0 (Object_t * __this /* static, unused */, List_1_t_503171416_0 * ___toRelease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ComponentListPool::<s_ComponentListPool>m__17(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void ComponentListPool_U3Cs_ComponentListPoolU3Em__17_m_1587465618_0 (Object_t * __this /* static, unused */, List_1_t_503171416_0 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
