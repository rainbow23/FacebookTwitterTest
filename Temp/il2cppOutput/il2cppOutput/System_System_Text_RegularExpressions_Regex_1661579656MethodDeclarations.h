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

// System.Text.RegularExpressions.Regex
struct Regex_t_1661579656_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_539797303_0;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t_629363303_0;
// System.Text.RegularExpressions.Match
struct Match_t_1666304010_0;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1616955188_0;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1950118449_0;
// System.String[]
struct StringU5BU5D_t_171208140_0;
// System.Collections.IDictionary
struct IDictionary_t1000767941_0;
// System.Int32[]
struct Int32U5BU5D_t_1293503665_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions2138459498.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon_143021694.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C"  void Regex__ctor_m523653122_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C"  void Regex__ctor_m574010660_0 (Regex_t_1661579656_0 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex__ctor_m2068483208_0 (Regex_t_1661579656_0 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex__ctor_m1618790979_0 (Regex_t_1661579656_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C"  void Regex__cctor_m_1428718613_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m522480713_0 (Regex_t_1661579656_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex_validate_options_m625353623_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C"  void Regex_Init_m938259986_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C"  void Regex_InitNewRegex_m_1875458567_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  Object_t * Regex_CreateMachineFactory_m_1947850903_0 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C"  int32_t Regex_get_Options_m_366919482_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C"  bool Regex_get_RightToLeft_m_800212289_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C"  int32_t Regex_GetGroupIndex_m547759882_0 (Regex_t_1661579656_0 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C"  int32_t Regex_default_startat_m996366267_0 (Regex_t_1661579656_0 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C"  bool Regex_IsMatch_m_1327075043_0 (Regex_t_1661579656_0 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C"  bool Regex_IsMatch_m_535026982_0 (Regex_t_1661579656_0 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C"  Match_t_1666304010_0 * Regex_Match_m1021969427_0 (Regex_t_1661579656_0 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C"  MatchCollection_t1616955188_0 * Regex_Matches_m_34651084_0 (Regex_t_1661579656_0 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C"  MatchCollection_t1616955188_0 * Regex_Matches_m_23889089_0 (Regex_t_1661579656_0 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C"  String_t* Regex_ToString_m_814686127_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C"  int32_t Regex_get_Gap_m_2141067683_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C"  Object_t * Regex_CreateMachine_m1572823491_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C"  StringU5BU5D_t_171208140_0* Regex_GetGroupNamesArray_m_555040495_0 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C"  Int32U5BU5D_t_1293503665_0* Regex_get_GroupNumbers_m_1794409244_0 (Regex_t_1661579656_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
