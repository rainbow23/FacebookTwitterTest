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

// UnityEngine.AssetBundle
struct AssetBundle_t1143280681_0;
// UnityEngine.Object
struct Object_t1159094344_0;
struct Object_t1159094344_0_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
extern "C"  Object_t1159094344_0 * AssetBundle_get_mainAsset_m_697739892_0 (AssetBundle_t1143280681_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::Load(System.String,System.Type)
extern "C"  Object_t1159094344_0 * AssetBundle_Load_m1433454475_0 (AssetBundle_t1143280681_0 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern "C"  void AssetBundle_Unload_m913727763_0 (AssetBundle_t1143280681_0 * __this, bool ___unloadAllLoadedObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
