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

// UnityEngine.Terrain
struct Terrain_t1808398156_0;
// UnityEngine.TerrainData
struct TerrainData_t_62532330_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t_1591124050_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr1759419328.h"
#include "UnityEngine_UnityEngine_TerrainRenderFlags1021686693.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_TreeInstance_2090008420.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_TerrainChangedFlags1597498783.h"

// System.Void UnityEngine.Terrain::.ctor()
extern "C"  void Terrain__ctor_m_1220568380_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::get_InstanceObject()
extern "C"  IntPtr_t Terrain_get_InstanceObject_m_283853144_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_InstanceObject(System.IntPtr)
extern "C"  void Terrain_set_InstanceObject_m312390339_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDestroy()
extern "C"  void Terrain_OnDestroy_m343829949_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::MakeSureObjectIsAlive()
extern "C"  void Terrain_MakeSureObjectIsAlive_m1416560835_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Cleanup(System.IntPtr)
extern "C"  void Terrain_Cleanup_m_790831922_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainRenderFlags UnityEngine.Terrain::get_editorRenderFlags()
extern "C"  int32_t Terrain_get_editorRenderFlags_m1949372793_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
extern "C"  void Terrain_set_editorRenderFlags_m1248706902_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::GetEditorRenderFlags(System.IntPtr)
extern "C"  int32_t Terrain_GetEditorRenderFlags_m_974813978_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetEditorRenderFlags(System.IntPtr,System.Int32)
extern "C"  void Terrain_SetEditorRenderFlags_m_1217973083_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C"  TerrainData_t_62532330_0 * Terrain_get_terrainData_m315613379_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
extern "C"  void Terrain_set_terrainData_m1316262310_0 (Terrain_t1808398156_0 * __this, TerrainData_t_62532330_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::Internal_GetTerrainData(System.IntPtr)
extern "C"  TerrainData_t_62532330_0 * Terrain_Internal_GetTerrainData_m8206300_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTerrainData(System.IntPtr,UnityEngine.TerrainData)
extern "C"  void Terrain_Internal_SetTerrainData_m_719988809_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, TerrainData_t_62532330_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeDistance()
extern "C"  float Terrain_get_treeDistance_m_998493232_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
extern "C"  void Terrain_set_treeDistance_m_155900453_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeDistance(System.IntPtr)
extern "C"  float Terrain_Internal_GetTreeDistance_m_1909407879_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeDistance(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetTreeDistance_m_2146826490_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
extern "C"  float Terrain_get_treeBillboardDistance_m1376774523_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
extern "C"  void Terrain_set_treeBillboardDistance_m1158722064_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeBillboardDistance(System.IntPtr)
extern "C"  float Terrain_Internal_GetTreeBillboardDistance_m_309632668_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeBillboardDistance(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetTreeBillboardDistance_m1428970977_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
extern "C"  float Terrain_get_treeCrossFadeLength_m_1426461687_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
extern "C"  void Terrain_set_treeCrossFadeLength_m1761494594_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeCrossFadeLength(System.IntPtr)
extern "C"  float Terrain_Internal_GetTreeCrossFadeLength_m1551508566_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeCrossFadeLength(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetTreeCrossFadeLength_m1076713299_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
extern "C"  int32_t Terrain_get_treeMaximumFullLODCount_m_1931874792_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
extern "C"  void Terrain_set_treeMaximumFullLODCount_m1625322229_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetTreeMaximumFullLODCount(System.IntPtr)
extern "C"  int32_t Terrain_Internal_GetTreeMaximumFullLODCount_m_1049183961_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeMaximumFullLODCount(System.IntPtr,System.Int32)
extern "C"  void Terrain_Internal_SetTreeMaximumFullLODCount_m84359684_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
extern "C"  float Terrain_get_detailObjectDistance_m_1577055070_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
extern "C"  void Terrain_set_detailObjectDistance_m_786845111_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDistance(System.IntPtr)
extern "C"  float Terrain_Internal_GetDetailObjectDistance_m1111328487_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDistance(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetDetailObjectDistance_m_390115852_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
extern "C"  float Terrain_get_detailObjectDensity_m1958415741_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
extern "C"  void Terrain_set_detailObjectDensity_m811213134_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDensity(System.IntPtr)
extern "C"  float Terrain_Internal_GetDetailObjectDensity_m601227106_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDensity(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetDetailObjectDensity_m1987505503_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
extern "C"  float Terrain_get_heightmapPixelError_m_1948653124_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
extern "C"  void Terrain_set_heightmapPixelError_m1221944175_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetHeightmapPixelError(System.IntPtr)
extern "C"  float Terrain_Internal_GetHeightmapPixelError_m1011958147_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapPixelError(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetHeightmapPixelError_m_1033936448_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_heightmapMaximumLOD()
extern "C"  int32_t Terrain_get_heightmapMaximumLOD_m2004669007_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
extern "C"  void Terrain_set_heightmapMaximumLOD_m_2133630292_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetHeightmapMaximumLOD(System.IntPtr)
extern "C"  int32_t Terrain_Internal_GetHeightmapMaximumLOD_m_1378528304_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapMaximumLOD(System.IntPtr,System.Int32)
extern "C"  void Terrain_Internal_SetHeightmapMaximumLOD_m360354811_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_basemapDistance()
extern "C"  float Terrain_get_basemapDistance_m132232101_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
extern "C"  void Terrain_set_basemapDistance_m_1892303834_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetBasemapDistance(System.IntPtr)
extern "C"  float Terrain_Internal_GetBasemapDistance_m_1474951238_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetBasemapDistance(System.IntPtr,System.Single)
extern "C"  void Terrain_Internal_SetBasemapDistance_m795379639_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_splatmapDistance()
extern "C"  float Terrain_get_splatmapDistance_m_16748756_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_splatmapDistance(System.Single)
extern "C"  void Terrain_set_splatmapDistance_m1335508991_0 (Terrain_t1808398156_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapIndex()
extern "C"  int32_t Terrain_get_lightmapIndex_m_390424315_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapIndex(System.Int32)
extern "C"  void Terrain_set_lightmapIndex_m1536418146_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetLightmapIndex(System.Int32)
extern "C"  void Terrain_SetLightmapIndex_m_695659013_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ShiftLightmapIndex(System.Int32)
extern "C"  void Terrain_ShiftLightmapIndex_m_1440592357_0 (Terrain_t1808398156_0 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapIndex(System.IntPtr)
extern "C"  int32_t Terrain_Internal_GetLightmapIndex_m807981338_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapIndex(System.IntPtr,System.Int32)
extern "C"  void Terrain_Internal_SetLightmapIndex_m_1886829071_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapSize()
extern "C"  int32_t Terrain_get_lightmapSize_m_1808477488_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapSize(System.Int32)
extern "C"  void Terrain_set_lightmapSize_m2040814613_0 (Terrain_t1808398156_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapSize(System.IntPtr)
extern "C"  int32_t Terrain_Internal_GetLightmapSize_m_313406343_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapSize(System.IntPtr,System.Int32)
extern "C"  void Terrain_Internal_SetLightmapSize_m1714318986_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_castShadows()
extern "C"  bool Terrain_get_castShadows_m1486308883_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_castShadows(System.Boolean)
extern "C"  void Terrain_set_castShadows_m1556861296_0 (Terrain_t1808398156_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCastShadows(System.IntPtr)
extern "C"  bool Terrain_Internal_GetCastShadows_m1799438220_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCastShadows(System.IntPtr,System.Boolean)
extern "C"  void Terrain_Internal_SetCastShadows_m_1623254145_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
extern "C"  Material_t1701708784_0 * Terrain_get_materialTemplate_m1293739577_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
extern "C"  void Terrain_set_materialTemplate_m584582464_0 (Terrain_t1808398156_0 * __this, Material_t1701708784_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::Internal_GetMaterialTemplate(System.IntPtr)
extern "C"  Material_t1701708784_0 * Terrain_Internal_GetMaterialTemplate_m994355248_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetMaterialTemplate(System.IntPtr,UnityEngine.Material)
extern "C"  void Terrain_Internal_SetMaterialTemplate_m_1729272907_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, Material_t1701708784_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_drawTreesAndFoliage()
extern "C"  bool Terrain_get_drawTreesAndFoliage_m_1941254350_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
extern "C"  void Terrain_set_drawTreesAndFoliage_m28504655_0 (Terrain_t1808398156_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetDrawTreesAndFoliage(System.IntPtr)
extern "C"  bool Terrain_Internal_GetDrawTreesAndFoliage_m_830462515_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDrawTreesAndFoliage(System.IntPtr,System.Boolean)
extern "C"  void Terrain_Internal_SetDrawTreesAndFoliage_m_901915362_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_collectDetailPatches()
extern "C"  bool Terrain_get_collectDetailPatches_m874055006_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_collectDetailPatches(System.Boolean)
extern "C"  void Terrain_set_collectDetailPatches_m_1320897041_0 (Terrain_t1808398156_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCollectDetailPatches(System.IntPtr)
extern "C"  bool Terrain_Internal_GetCollectDetailPatches_m392570283_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCollectDetailPatches(System.IntPtr,System.Boolean)
extern "C"  void Terrain_Internal_SetCollectDetailPatches_m1773240612_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
extern "C"  float Terrain_SampleHeight_m_1072335852_0 (Terrain_t1808398156_0 * __this, Vector3_t_725341337_0  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_SampleHeight(System.IntPtr,UnityEngine.Vector3)
extern "C"  float Terrain_Internal_SampleHeight_m1336852486_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, Vector3_t_725341337_0  ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_Internal_SampleHeight(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector3&)
extern "C"  float Terrain_INTERNAL_CALL_Internal_SampleHeight_m_1261652519_0 (Object_t * __this /* static, unused */, Terrain_t1808398156_0 * ___self, IntPtr_t ___terrainInstance, Vector3_t_725341337_0 * ___worldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ApplyDelayedHeightmapModification()
extern "C"  void Terrain_ApplyDelayedHeightmapModification_m254370943_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_ApplyDelayedHeightmapModification(System.IntPtr)
extern "C"  void Terrain_Internal_ApplyDelayedHeightmapModification_m_1162642951_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::AddTreeInstance(UnityEngine.TreeInstance)
extern "C"  void Terrain_AddTreeInstance_m_133299092_0 (Terrain_t1808398156_0 * __this, TreeInstance_t_2090008420_0  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_AddTreeInstance(System.IntPtr,UnityEngine.TreeInstance)
extern "C"  void Terrain_Internal_AddTreeInstance_m16344666_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, TreeInstance_t_2090008420_0  ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_AddTreeInstance(UnityEngine.Terrain,System.IntPtr,UnityEngine.TreeInstance&)
extern "C"  void Terrain_INTERNAL_CALL_Internal_AddTreeInstance_m499097825_0 (Object_t * __this /* static, unused */, Terrain_t1808398156_0 * ___self, IntPtr_t ___terrainInstance, TreeInstance_t_2090008420_0 * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C"  void Terrain_SetNeighbors_m_834950689_0 (Terrain_t1808398156_0 * __this, Terrain_t1808398156_0 * ___left, Terrain_t1808398156_0 * ___top, Terrain_t1808398156_0 * ___right, Terrain_t1808398156_0 * ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetNeighbors(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  void Terrain_Internal_SetNeighbors_m392260585_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, IntPtr_t ___left, IntPtr_t ___top, IntPtr_t ___right, IntPtr_t ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
extern "C"  Vector3_t_725341337_0  Terrain_GetPosition_m1664151035_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::Internal_GetPosition(System.IntPtr)
extern "C"  Vector3_t_725341337_0  Terrain_Internal_GetPosition_m_1418467535_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Flush()
extern "C"  void Terrain_Flush_m_1136621082_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_Flush(System.IntPtr)
extern "C"  void Terrain_Internal_Flush_m_957537806_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::RemoveTrees(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  void Terrain_RemoveTrees_m_1906301397_0 (Terrain_t1808398156_0 * __this, Vector2_t_725341338_0  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_RemoveTrees(System.IntPtr,UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  void Terrain_Internal_RemoveTrees_m_637773607_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, Vector2_t_725341338_0  ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_RemoveTrees(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector2&,System.Single,System.Int32)
extern "C"  void Terrain_INTERNAL_CALL_Internal_RemoveTrees_m1272272078_0 (Object_t * __this /* static, unused */, Terrain_t1808398156_0 * ___self, IntPtr_t ___terrainInstance, Vector2_t_725341338_0 * ___position, float ___radius, int32_t ___prototypeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
extern "C"  void Terrain_OnTerrainChanged_m_198066973_0 (Terrain_t1808398156_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnTerrainChanged(System.IntPtr,UnityEngine.TerrainChangedFlags)
extern "C"  void Terrain_Internal_OnTerrainChanged_m_25538515_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::Construct()
extern "C"  IntPtr_t Terrain_Construct_m_412325074_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnEnable()
extern "C"  void Terrain_OnEnable_m1312097858_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnEnable(System.IntPtr)
extern "C"  void Terrain_Internal_OnEnable_m_1949134578_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDisable()
extern "C"  void Terrain_OnDisable_m_1833702101_0 (Terrain_t1808398156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnDisable(System.IntPtr)
extern "C"  void Terrain_Internal_OnDisable_m_845450035_0 (Terrain_t1808398156_0 * __this, IntPtr_t ___terrainInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
extern "C"  Terrain_t1808398156_0 * Terrain_get_activeTerrain_m_684716195_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C"  TerrainU5BU5D_t_1591124050_0* Terrain_get_activeTerrains_m1971110842_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
extern "C"  GameObject_t_184308134_0 * Terrain_CreateTerrainGameObject_m1268936983_0 (Object_t * __this /* static, unused */, TerrainData_t_62532330_0 * ___assignTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ReconnectTerrainData()
extern "C"  void Terrain_ReconnectTerrainData_m1802139304_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
