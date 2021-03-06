﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m_2015104964_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m_1951016159_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m1280478331_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m_315290848_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m_211489575_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m_760758911_0 (Matrix4x4_t1577636070_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_Inverse_m1483646919_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_INTERNAL_CALL_Inverse_m_787432506_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_Transpose_m_154611170_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_INTERNAL_CALL_Transpose_m_1123244017_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
extern "C"  bool Matrix4x4_Invert_m_1729027288_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inMatrix, Matrix4x4_t1577636070_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  bool Matrix4x4_INTERNAL_CALL_Invert_m68055965_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0 * ___inMatrix, Matrix4x4_t1577636070_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_get_inverse_m_1698893814_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_get_transpose_m_1006658669_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
extern "C"  bool Matrix4x4_get_isIdentity_m1942609957_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t_725341336_0  Matrix4x4_GetColumn_m786071102_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
extern "C"  Vector4_t_725341336_0  Matrix4x4_GetRow_m467170390_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetColumn_m568608163_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___i, Vector4_t_725341336_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetRow_m242342709_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___i, Vector4_t_725341336_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Matrix4x4_MultiplyPoint_m_411638261_0 (Matrix4x4_t1577636070_0 * __this, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Matrix4x4_MultiplyPoint3x4_m_2096792394_0 (Matrix4x4_t1577636070_0 * __this, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Matrix4x4_MultiplyVector_m260129746_0 (Matrix4x4_t1577636070_0 * __this, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_Scale_m_731495412_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_get_zero_m1808471152_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_get_identity_m_348283514_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Matrix4x4_SetTRS_m_168037256_0 (Matrix4x4_t1577636070_0 * __this, Vector3_t_725341337_0  ___pos, Quaternion_t1989680039_0  ___q, Vector3_t_725341337_0  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_TRS_m_698568637_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___pos, Quaternion_t1989680039_0  ___q, Vector3_t_725341337_0  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_INTERNAL_CALL_TRS_m499876178_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___pos, Quaternion_t1989680039_0 * ___q, Vector3_t_725341337_0 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m294134723_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
extern "C"  String_t* Matrix4x4_ToString_m_530911201_0 (Matrix4x4_t1577636070_0 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_Ortho_m_849975575_0 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_Perspective_m588059099_0 (Object_t * __this /* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1577636070_0  Matrix4x4_op_Multiply_m_186763607_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___lhs, Matrix4x4_t1577636070_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Vector4_t_725341336_0  Matrix4x4_op_Multiply_m314399977_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___lhs, Vector4_t_725341336_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  bool Matrix4x4_op_Equality_m1601474088_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___lhs, Matrix4x4_t1577636070_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  bool Matrix4x4_op_Inequality_m1139887331_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___lhs, Matrix4x4_t1577636070_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
