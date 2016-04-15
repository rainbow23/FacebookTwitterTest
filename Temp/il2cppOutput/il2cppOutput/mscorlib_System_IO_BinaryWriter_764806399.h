#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t_764806399_0;
// System.IO.Stream
struct Stream_t_1021953369_0;
// System.Text.Encoding
struct Encoding_t93655731_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;

#include "mscorlib_System_Object1919833728.h"

// System.IO.BinaryWriter
struct  BinaryWriter_t_764806399_0  : public Object_t
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t_1021953369_0 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t93655731_0 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t1569193387_0* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
};
struct BinaryWriter_t_764806399_0_StaticFields{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t_764806399_0 * ___Null_0;
};
