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

// UnityEngine.Component
struct Component_t_867674284_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_503171416_0;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1584899523_0 * Component_get_transform_m_37826853_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
extern "C"  Transform_t1584899523_0 * Component_InternalGetTransform_m_207421507_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Component::get_camera()
extern "C"  Camera_t814710830_0 * Component_get_camera_m_976981725_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t_184308134_0 * Component_get_gameObject_m1170635899_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
extern "C"  GameObject_t_184308134_0 * Component_InternalGetGameObject_m_1718389557_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C"  Component_t_867674284_0 * Component_GetComponent_m936021879_0 (Component_t_867674284_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
extern "C"  void Component_GetComponentsForListInternal_m1943033306_0 (Component_t_867674284_0 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void Component_GetComponents_m_868155011_0 (Component_t_867674284_0 * __this, Type_t * ___type, List_1_t_503171416_0 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
