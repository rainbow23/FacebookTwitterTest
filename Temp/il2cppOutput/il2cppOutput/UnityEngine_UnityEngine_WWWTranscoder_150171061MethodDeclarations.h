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

// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t93655731_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m1486747496_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t1569193387_0* WWWTranscoder_Byte2Hex_m_1879967800_0 (Object_t * __this /* static, unused */, uint8_t ___b, ByteU5BU5D_t1569193387_0* ___hexChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C"  ByteU5BU5D_t1569193387_0* WWWTranscoder_URLEncode_m_255299785_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___toEncode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_QPEncode_m1021207296_0 (Object_t * __this /* static, unused */, String_t* ___toEncode, Encoding_t93655731_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t1569193387_0* WWWTranscoder_Encode_m_1617530350_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___input, uint8_t ___escapeChar, uint8_t ___space, ByteU5BU5D_t1569193387_0* ___forbidden, bool ___uppercase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m_1050047307_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___array, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C"  bool WWWTranscoder_SevenBitClean_m1805125217_0 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t93655731_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m945043319_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1569193387_0* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
