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

// FB/AppEvents
struct AppEvents_t2089488194_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t574024987_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen2000177693.h"

// System.Void FB/AppEvents::.ctor()
extern "C"  void AppEvents__ctor_m1204611476_0 (AppEvents_t2089488194_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB/AppEvents::get_LimitEventUsage()
extern "C"  bool AppEvents_get_LimitEventUsage_m_663300649_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::set_LimitEventUsage(System.Boolean)
extern "C"  void AppEvents_set_LimitEventUsage_m1493918798_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AppEvents_LogEvent_m961223485_0 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t2000177693_0  ___valueToSum, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void AppEvents_LogPurchase_m504245045_0 (Object_t * __this /* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t574024987_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
