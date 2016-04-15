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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds799257534.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds__ctor_m_134673644_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___center, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m_1227578617_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m_1777515357_0 (Bounds_t799257534_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t_725341337_0  Bounds_get_center_m_210356892_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C"  void Bounds_set_center_m_1689323589_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t_725341337_0  Bounds_get_size_m_628618864_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C"  void Bounds_set_size_m_185158257_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t_725341337_0  Bounds_get_extents_m2111648188_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C"  void Bounds_set_extents_m_1691130473_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t_725341337_0  Bounds_get_min_m_1965495227_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
extern "C"  void Bounds_set_min_m1913434478_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t_725341337_0  Bounds_get_max_m_1965723945_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
extern "C"  void Bounds_set_max_m1639526812_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Bounds_SetMinMax_m_2108946302_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___min, Vector3_t_725341337_0  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C"  void Bounds_Encapsulate_m_670282062_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
extern "C"  void Bounds_Encapsulate_m_2090216165_0 (Bounds_t799257534_0 * __this, Bounds_t799257534_0  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C"  void Bounds_Expand_m_1899155291_0 (Bounds_t799257534_0 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C"  void Bounds_Expand_m_323175597_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C"  bool Bounds_Intersects_m_745987110_0 (Bounds_t799257534_0 * __this, Bounds_t799257534_0  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C"  bool Bounds_Internal_Contains_m346296312_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0  ___m, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C"  bool Bounds_INTERNAL_CALL_Internal_Contains_m1487742483_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0 * ___m, Vector3_t_725341337_0 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
extern "C"  bool Bounds_Contains_m_14435960_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
extern "C"  float Bounds_Internal_SqrDistance_m1178436710_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0  ___m, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
extern "C"  float Bounds_INTERNAL_CALL_Internal_SqrDistance_m_290516065_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0 * ___m, Vector3_t_725341337_0 * ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
extern "C"  float Bounds_SqrDistance_m1587170470_0 (Bounds_t799257534_0 * __this, Vector3_t_725341337_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C"  bool Bounds_Internal_IntersectRay_m_1311613013_0 (Object_t * __this /* static, unused */, Ray_t1215250369_0 * ___ray, Bounds_t799257534_0 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
extern "C"  bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m1777421546_0 (Object_t * __this /* static, unused */, Ray_t1215250369_0 * ___ray, Bounds_t799257534_0 * ___bounds, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
extern "C"  bool Bounds_IntersectRay_m_173884158_0 (Bounds_t799257534_0 * __this, Ray_t1215250369_0  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C"  bool Bounds_IntersectRay_m_135909307_0 (Bounds_t799257534_0 * __this, Ray_t1215250369_0  ___ray, float* ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1795228795_0 (Bounds_t799257534_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
extern "C"  String_t* Bounds_ToString_m297204327_0 (Bounds_t799257534_0 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Equality_m_1439000674_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0  ___lhs, Bounds_t799257534_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Bounds_op_Inequality_m_2674919_0 (Object_t * __this /* static, unused */, Bounds_t799257534_0  ___lhs, Bounds_t799257534_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
