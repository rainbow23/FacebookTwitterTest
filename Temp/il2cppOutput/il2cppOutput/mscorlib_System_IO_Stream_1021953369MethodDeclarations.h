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

// System.IO.Stream
struct Stream_t_1021953369_0;
// System.IAsyncResult
struct IAsyncResult_t_2075007983_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// System.AsyncCallback
struct AsyncCallback_t_626615168_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.Stream::.ctor()
extern "C"  void Stream__ctor_m773667535_0 (Stream_t_1021953369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C"  void Stream__cctor_m1000345604_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C"  void Stream_Dispose_m_1390660922_0 (Stream_t_1021953369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C"  void Stream_Dispose_m655732675_0 (Stream_t_1021953369_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C"  void Stream_Close_m_1810440219_0 (Stream_t_1021953369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C"  int32_t Stream_ReadByte_m_838437707_0 (Stream_t_1021953369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C"  void Stream_WriteByte_m480466941_0 (Stream_t_1021953369_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * Stream_BeginRead_m_1838358357_0 (Stream_t_1021953369_0 * __this, ByteU5BU5D_t1569193387_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * Stream_BeginWrite_m1317962366_0 (Stream_t_1021953369_0 * __this, ByteU5BU5D_t1569193387_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t_626615168_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C"  int32_t Stream_EndRead_m_2043047737_0 (Stream_t_1021953369_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C"  void Stream_EndWrite_m_556387740_0 (Stream_t_1021953369_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
