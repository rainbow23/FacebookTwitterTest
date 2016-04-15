#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TerrainData
struct TerrainData_t_62532330_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "mscorlib_System_IntPtr1759419328.h"

// UnityEngine.Terrain
struct  Terrain_t1808398156_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.TerrainData UnityEngine.Terrain::m_TerrainData
	TerrainData_t_62532330_0 * ___m_TerrainData_1;
	// System.Single UnityEngine.Terrain::m_TreeDistance
	float ___m_TreeDistance_2;
	// System.Single UnityEngine.Terrain::m_TreeBillboardDistance
	float ___m_TreeBillboardDistance_3;
	// System.Single UnityEngine.Terrain::m_TreeCrossFadeLength
	float ___m_TreeCrossFadeLength_4;
	// System.Int32 UnityEngine.Terrain::m_TreeMaximumFullLODCount
	int32_t ___m_TreeMaximumFullLODCount_5;
	// System.Single UnityEngine.Terrain::m_DetailObjectDistance
	float ___m_DetailObjectDistance_6;
	// System.Single UnityEngine.Terrain::m_DetailObjectDensity
	float ___m_DetailObjectDensity_7;
	// System.Single UnityEngine.Terrain::m_HeightmapPixelError
	float ___m_HeightmapPixelError_8;
	// System.Single UnityEngine.Terrain::m_SplatMapDistance
	float ___m_SplatMapDistance_9;
	// System.Int32 UnityEngine.Terrain::m_HeightmapMaximumLOD
	int32_t ___m_HeightmapMaximumLOD_10;
	// System.Boolean UnityEngine.Terrain::m_CastShadows
	bool ___m_CastShadows_11;
	// System.Int32 UnityEngine.Terrain::m_LightmapIndex
	int32_t ___m_LightmapIndex_12;
	// System.Int32 UnityEngine.Terrain::m_LightmapSize
	int32_t ___m_LightmapSize_13;
	// System.Boolean UnityEngine.Terrain::m_DrawTreesAndFoliage
	bool ___m_DrawTreesAndFoliage_14;
	// System.Boolean UnityEngine.Terrain::m_CollectDetailPatches
	bool ___m_CollectDetailPatches_15;
	// UnityEngine.Material UnityEngine.Terrain::m_MaterialTemplate
	Material_t1701708784_0 * ___m_MaterialTemplate_16;
	// System.IntPtr UnityEngine.Terrain::m_TerrainInstance
	IntPtr_t ___m_TerrainInstance_17;
};
