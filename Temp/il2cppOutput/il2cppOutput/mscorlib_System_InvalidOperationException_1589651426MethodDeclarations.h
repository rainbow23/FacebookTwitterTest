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

// System.InvalidOperationException
struct InvalidOperationException_t_1589651426_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t658426222_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_539797303_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon_143021694.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m_1758833508_0 (InvalidOperationException_t_1589651426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m1289325770_0 (InvalidOperationException_t_1589651426_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidOperationException__ctor_m2119621158_0 (InvalidOperationException_t_1589651426_0 * __this, String_t* ___message, Exception_t658426222_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidOperationException__ctor_m_408910477_0 (InvalidOperationException_t_1589651426_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
