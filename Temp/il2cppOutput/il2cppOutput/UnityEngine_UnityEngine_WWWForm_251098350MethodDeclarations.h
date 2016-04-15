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

// UnityEngine.WWWForm
struct WWWForm_t_251098350_0;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t93655731_0;
// System.Byte[]
struct ByteU5BU5D_t1569193387_0;
// System.Collections.Hashtable
struct Hashtable_t_1563846426_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m1417930174_0 (WWWForm_t_251098350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m_1404462977_0 (WWWForm_t_251098350_0 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m_868299790_0 (WWWForm_t_251098350_0 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t93655731_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C"  void WWWForm_AddBinaryData_m_834055847_0 (WWWForm_t_251098350_0 * __this, String_t* ___fieldName, ByteU5BU5D_t1569193387_0* ___contents, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m1424533973_0 (WWWForm_t_251098350_0 * __this, String_t* ___fieldName, ByteU5BU5D_t1569193387_0* ___contents, String_t* ___fileName, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable UnityEngine.WWWForm::get_headers()
extern "C"  Hashtable_t_1563846426_0 * WWWForm_get_headers_m_718486720_0 (WWWForm_t_251098350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C"  ByteU5BU5D_t1569193387_0* WWWForm_get_data_m_1401155345_0 (WWWForm_t_251098350_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
