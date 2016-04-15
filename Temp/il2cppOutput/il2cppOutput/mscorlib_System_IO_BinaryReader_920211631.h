#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t_1021953369_0;
// System.Text.Encoding
struct Encoding_t93655731_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// System.Text.Decoder
struct Decoder_t_2100355234_0;
// System.Char[]
struct CharU5BU5D_t1581569145_0;

#include "mscorlib_System_Object1919833728.h"

// System.IO.BinaryReader
struct  BinaryReader_t_920211631_0  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t_1021953369_0 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t93655731_0 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t1569193387_0* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t_2100355234_0 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t1581569145_0* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
