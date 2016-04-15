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

// FB/RemoteFacebookLoader
struct RemoteFacebookLoader_t_1427882313_0;
// System.Collections.IEnumerator
struct IEnumerator_t_366941965_0;
// System.String
struct String_t;
// FB/RemoteFacebookLoader/LoadedDllCallback
struct LoadedDllCallback_t_572589428_0;
// Facebook.IFacebook
struct IFacebook_t_113896638_0;

#include "codegen/il2cpp-codegen.h"

// System.Void FB/RemoteFacebookLoader::.ctor()
extern "C"  void RemoteFacebookLoader__ctor_m2095187897_0 (RemoteFacebookLoader_t_1427882313_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader::.cctor()
extern "C"  void RemoteFacebookLoader__cctor_m44219156_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FB/RemoteFacebookLoader::LoadFacebookClass(System.String,FB/RemoteFacebookLoader/LoadedDllCallback)
extern "C"  Object_t * RemoteFacebookLoader_LoadFacebookClass_m1005155388_0 (Object_t * __this /* static, unused */, String_t* ___className, LoadedDllCallback_t_572589428_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FB/RemoteFacebookLoader::Start()
extern "C"  Object_t * RemoteFacebookLoader_Start_m_278790399_0 (RemoteFacebookLoader_t_1427882313_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader::OnDllLoaded(Facebook.IFacebook)
extern "C"  void RemoteFacebookLoader_OnDllLoaded_m_2031721862_0 (RemoteFacebookLoader_t_1427882313_0 * __this, Object_t * ___fb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
