#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x88 - 0x28)
// Class SimplygonUObjects.SimplygonStandinPipeline
class USimplygonStandinPipeline : public UObject
{
public:
	struct FChartAggregatorSettings              ChartAggregatorSettings;                           // 0x28(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMaterialOutputSettings               MaterialOutputSettings;                            // 0x60(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonStandinPipeline* GetDefaultObj();

};

// 0x200 (0x288 - 0x88)
// Class SimplygonUObjects.StandinNearPipeline
class UStandinNearPipeline : public USimplygonStandinPipeline
{
public:
	struct FAggregationPipelineSettings          Settings;                                          // 0x88(0x1E0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNearStandinLightmapSettings          LightmapSettings;                                  // 0x268(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1425[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStandinNearPipeline* GetDefaultObj();

};

// 0x210 (0x298 - 0x88)
// Class SimplygonUObjects.StandinFarPipeline
class UStandinFarPipeline : public USimplygonStandinPipeline
{
public:
	struct FRemeshingPipelineSettings            Settings;                                          // 0x88(0x208)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FStandinLightmapSettings              LightmapSettings;                                  // 0x290(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStandinFarPipeline* GetDefaultObj();

};

// 0x138 (0x1C0 - 0x88)
// Class SimplygonUObjects.BillboardCloudPipeline
class UBillboardCloudPipeline : public USimplygonStandinPipeline
{
public:
	struct FBillboardCloudPipelineSettings       Settings;                                          // 0x88(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FStandinLightmapSettings              LightmapSettings;                                  // 0x1B8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBillboardCloudPipeline* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class SimplygonUObjects.SimplygonPipeline
class USimplygonPipeline : public UObject
{
public:
	int32                                        BaseLODIndex;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USimplygonPipeline* GetDefaultObj();

};

// 0x120 (0x150 - 0x30)
// Class SimplygonUObjects.FlipbookPipeline
class UFlipbookPipeline : public USimplygonPipeline
{
public:
	struct FFlipbookPipelineSettings             Settings;                                          // 0x30(0x120)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFlipbookPipeline* GetDefaultObj();

};

// 0x130 (0x160 - 0x30)
// Class SimplygonUObjects.BillboardCloudVegetationPipeline
class UBillboardCloudVegetationPipeline : public USimplygonPipeline
{
public:
	struct FBillboardCloudVegetationPipelineSettings Settings;                                          // 0x30(0x130)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBillboardCloudVegetationPipeline* GetDefaultObj();

};

// 0x208 (0x238 - 0x30)
// Class SimplygonUObjects.RemeshingPipeline
class URemeshingPipeline : public USimplygonPipeline
{
public:
	struct FRemeshingPipelineSettings            Settings;                                          // 0x30(0x208)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URemeshingPipeline* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SimplygonUObjects.HighDensityMeshReductionPipeline
class UHighDensityMeshReductionPipeline : public USimplygonPipeline
{
public:
	struct FHighDensityMeshReductionPipelineSettings Settings;                                          // 0x30(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHighDensityMeshReductionPipeline* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SimplygonUObjects.SimplygonMaterialCaster
class USimplygonMaterialCaster : public UObject
{
public:

	static class UClass* StaticClass();
	static class USimplygonMaterialCaster* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SimplygonUObjects.SimplygonColorCaster
class USimplygonColorCaster : public USimplygonMaterialCaster
{
public:
	struct FColorCasterSettings                  ColorCasterSettings;                               // 0x28(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonColorCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.BaseColorCaster
class UBaseColorCaster : public USimplygonColorCaster
{
public:

	static class UClass* StaticClass();
	static class UBaseColorCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.MetallicCaster
class UMetallicCaster : public UBaseColorCaster
{
public:

	static class UClass* StaticClass();
	static class UMetallicCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.SpecularCaster
class USpecularCaster : public UBaseColorCaster
{
public:

	static class UClass* StaticClass();
	static class USpecularCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.RoughnessCaster
class URoughnessCaster : public UBaseColorCaster
{
public:

	static class UClass* StaticClass();
	static class URoughnessCaster* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SimplygonUObjects.SimplygonNormalCaster
class USimplygonNormalCaster : public USimplygonMaterialCaster
{
public:
	struct FNormalCasterSettings                 NormalCasterSettings;                              // 0x28(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonNormalCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.NormalCaster
class UNormalCaster : public USimplygonNormalCaster
{
public:

	static class UClass* StaticClass();
	static class UNormalCaster* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SimplygonUObjects.SimplygonOpacityCaster
class USimplygonOpacityCaster : public USimplygonMaterialCaster
{
public:
	struct FOpacityCasterSettings                OpacityCasterSettings;                             // 0x28(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonOpacityCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.OpacityCaster
class UOpacityCaster : public USimplygonOpacityCaster
{
public:

	static class UClass* StaticClass();
	static class UOpacityCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.EmissiveCaster
class UEmissiveCaster : public UBaseColorCaster
{
public:

	static class UClass* StaticClass();
	static class UEmissiveCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.OpacityMaskCaster
class UOpacityMaskCaster : public USimplygonOpacityCaster
{
public:

	static class UClass* StaticClass();
	static class UOpacityMaskCaster* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class SimplygonUObjects.AmbientOcclusionMaskCaster
class UAmbientOcclusionMaskCaster : public UBaseColorCaster
{
public:

	static class UClass* StaticClass();
	static class UAmbientOcclusionMaskCaster* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class SimplygonUObjects.SimplygonVertexColorCaster
class USimplygonVertexColorCaster : public USimplygonMaterialCaster
{
public:
	struct FVertexColorCasterSettings            VertexColorCasterSettings;                         // 0x28(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.BaseColorVertexColorCaster
class UBaseColorVertexColorCaster : public USimplygonVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UBaseColorVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.MetallicVertexColorCaster
class UMetallicVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UMetallicVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.SpecularVertexColorCaster
class USpecularVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class USpecularVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.RoughnessVertexColorCaster
class URoughnessVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class URoughnessVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.NormalVertexColorCaster
class UNormalVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UNormalVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.OpacityVertexColorCaster
class UOpacityVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UOpacityVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.EmissiveVertexColorCaster
class UEmissiveVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UEmissiveVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.OpacityMaskVertexColorCaster
class UOpacityMaskVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UOpacityMaskVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.AmbientOcclusionVertexColorCaster
class UAmbientOcclusionVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class UAmbientOcclusionVertexColorCaster* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class SimplygonUObjects.SubSurfaceVertexColorCaster
class USubSurfaceVertexColorCaster : public UBaseColorVertexColorCaster
{
public:

	static class UClass* StaticClass();
	static class USubSurfaceVertexColorCaster* GetDefaultObj();

};

// 0x250 (0x280 - 0x30)
// Class SimplygonUObjects.ReductionPipeline
class UReductionPipeline : public USimplygonPipeline
{
public:
	struct FReductionPipelineSettings            Settings;                                          // 0x30(0x250)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UReductionPipeline* GetDefaultObj();

};

// 0x1E0 (0x210 - 0x30)
// Class SimplygonUObjects.AggregationPipeline
class UAggregationPipeline : public USimplygonPipeline
{
public:
	struct FAggregationPipelineSettings          Settings;                                          // 0x30(0x1E0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAggregationPipeline* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SimplygonUObjects.SimplygonDisplacementCaster
class USimplygonDisplacementCaster : public USimplygonMaterialCaster
{
public:
	struct FDisplacementCasterSettings           DisplacementCasterSettings;                        // 0x28(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonDisplacementCaster* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class SimplygonUObjects.SimplygonAmbientOcclusionCaster
class USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster
{
public:
	struct FAmbientOcclusionCasterSettings       AmbientOcclusionCasterSettings;                    // 0x28(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonAmbientOcclusionCaster* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class SimplygonUObjects.SimplygonGeometryDataCaster
class USimplygonGeometryDataCaster : public USimplygonMaterialCaster
{
public:
	uint8                                        Pad_1826[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryDataCasterSettings           GeometryDataCasterSettings;                        // 0x30(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonGeometryDataCaster* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SimplygonUObjects.SimplygonComputeCaster
class USimplygonComputeCaster : public USimplygonMaterialCaster
{
public:
	struct FComputeCasterSettings                ComputeCasterSettings;                             // 0x28(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USimplygonComputeCaster* GetDefaultObj();

};

}


