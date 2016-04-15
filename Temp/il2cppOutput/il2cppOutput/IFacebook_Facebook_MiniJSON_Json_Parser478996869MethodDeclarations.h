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

// Facebook.MiniJSON.Json/Parser
struct Parser_t478996869_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t574024987_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t490374140_0;

#include "codegen/il2cpp-codegen.h"
#include "IFacebook_Facebook_MiniJSON_Json_Parser_TOKEN_535856945.h"

// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m852796535_0 (Parser_t478996869_0 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Object_t * Parser_Parse_m_1768854031_0 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2139733480_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t574024987_0 * Parser_ParseObject_m_1391264167_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t490374140_0 * Parser_ParseArray_m1155251646_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C"  Object_t * Parser_ParseValue_m215994466_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern "C"  Object_t * Parser_ParseByToken_m_131188938_0 (Parser_t478996869_0 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m_555415280_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Object_t * Parser_ParseNumber_m1924638170_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m989913150_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m898859349_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m_556857107_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m_719376420_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m1818534192_0 (Parser_t478996869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
