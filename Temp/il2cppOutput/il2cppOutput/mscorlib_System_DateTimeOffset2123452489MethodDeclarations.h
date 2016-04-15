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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_539797303_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t_1172917514_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset2123452489.h"
#include "mscorlib_System_DateTime_173468004.h"
#include "mscorlib_System_TimeSpan1786341660.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon_143021694.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m206991153_0 (DateTimeOffset_t2123452489_0 * __this, DateTime_t_173468004_0  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m_1682347641_0 (DateTimeOffset_t2123452489_0 * __this, DateTime_t_173468004_0  ___dateTime, TimeSpan_t1786341660_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m_1826964273_0 (DateTimeOffset_t2123452489_0 * __this, int64_t ___ticks, TimeSpan_t1786341660_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m846097640_0 (DateTimeOffset_t2123452489_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m_1809531802_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1459743069_0 (DateTimeOffset_t2123452489_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m_1612772988_0 (DateTimeOffset_t2123452489_0 * __this, SerializationInfo_t_539797303_0 * ___info, StreamingContext_t_143021694_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m_1133482641_0 (DateTimeOffset_t2123452489_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m1122350244_0 (DateTimeOffset_t2123452489_0 * __this, DateTimeOffset_t2123452489_0  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m_186880277_0 (DateTimeOffset_t2123452489_0 * __this, DateTimeOffset_t2123452489_0  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m1431331290_0 (DateTimeOffset_t2123452489_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m1972583858_0 (DateTimeOffset_t2123452489_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m983707174_0 (DateTimeOffset_t2123452489_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m_293810472_0 (DateTimeOffset_t2123452489_0 * __this, String_t* ___format, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t_173468004_0  DateTimeOffset_get_DateTime_m_1793130264_0 (DateTimeOffset_t2123452489_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t1786341660_0  DateTimeOffset_get_Offset_m_356668164_0 (DateTimeOffset_t2123452489_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t_173468004_0  DateTimeOffset_get_UtcDateTime_m_1462997996_0 (DateTimeOffset_t2123452489_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
