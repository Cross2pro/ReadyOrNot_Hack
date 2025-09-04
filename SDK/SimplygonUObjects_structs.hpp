#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESourceTexCoordMode : uint8
{
	Auto                           = 0,
	Manual                         = 1,
	ESourceTexCoordMode_MAX        = 2,
};

enum class EWorldPartitionFoliageMode : uint8
{
	Instancing                     = 0,
	Grouping                       = 1,
	EWorldPartitionFoliageMode_MAX = 2,
};

enum class ESeparateOverlappingChartsMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Auto                           = 2,
	ESeparateOverlappingChartsMode_MAX = 3,
};

enum class EImportComponent : uint8
{
	StaticMeshComponent            = 0,
	InstancedStaticMeshComponent   = 1,
	EImportComponent_MAX           = 2,
};

enum class EReductionPerformanceMode : uint8
{
	AllFeatures                    = 0,
	HighPerformance                = 1,
	EReductionPerformanceMode_MAX  = 2,
};

enum class EReductionTargetStopCondition : uint8
{
	Any                            = 0,
	All                            = 1,
	EReductionTargetStopCondition_MAX = 2,
};

enum class EReductionHeuristics : uint8
{
	Fast                           = 0,
	Consistent                     = 1,
	EReductionHeuristics_MAX       = 2,
};

enum class ESymmetryAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESymmetryAxis_MAX              = 3,
};

enum class EDataCreationPreferences : uint8
{
	OnlyUseOriginalData            = 0,
	PreferOriginalData             = 1,
	PreferOptimizedResult          = 2,
	EDataCreationPreferences_MAX   = 3,
};

enum class EVisibilityCameraMode : uint8
{
	Manual                         = 0,
	Sphere                         = 1,
	Hemisphere                     = 2,
	EVisibilityCameraMode_MAX      = 3,
};

enum class EHemisphereUpVector : uint8
{
	PositiveX                      = 0,
	NegativeX                      = 1,
	PositiveY                      = 2,
	NegativeY                      = 3,
	PositiveZ                      = 4,
	NegativeZ                      = 5,
	EHemisphereUpVector_MAX        = 6,
};

enum class EComputeVisibilityMode : uint8
{
	DirectX                        = 0,
	Software                       = 1,
	EComputeVisibilityMode_MAX     = 2,
};

enum class EBoneReductionTargetStopCondition : uint8
{
	Any                            = 0,
	All                            = 1,
	EBoneReductionTargetStopCondition_MAX = 2,
};

enum class EWeightsFromColorComponent : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EWeightsFromColorComponent_MAX = 4,
};

enum class EWeightsFromColorMode : uint8
{
	Standard                       = 0,
	High                           = 1,
	Low                            = 2,
	EWeightsFromColorMode_MAX      = 3,
};

enum class EAttributeTessellationDensityMode : uint8
{
	RelativeArea                   = 0,
	AbsoluteArea                   = 1,
	RelativeLength                 = 2,
	AbsoluteLength                 = 3,
	UserDefined                    = 4,
	OnScreenSize                   = 5,
	EAttributeTessellationDensityMode_MAX = 6,
};

enum class ETransformationSpace : uint8
{
	Global                         = 0,
	Local                          = 1,
	Tangent                        = 2,
	View                           = 3,
	ETransformationSpace_MAX       = 4,
};

enum class ETexCoordGeneratorType : uint8
{
	Parameterizer                  = 0,
	ChartAggregator                = 1,
	ETexCoordGeneratorType_MAX     = 2,
};

enum class ETangentCalculatorType : uint8
{
	OrthonormalRightHanded         = 0,
	Autodesk3dsMax                 = 1,
	OrthonormalLeftHanded          = 2,
	MikkTSpace                     = 3,
	ImplicitOrthonormalRightHandedCompatible = 4,
	ETangentCalculatorType_MAX     = 5,
};

enum class EChartAggregatorMode : uint8
{
	TextureSizeProportions         = 0,
	SurfaceArea                    = 1,
	OriginalPixelDensity           = 2,
	UVSizeProportions              = 3,
	EChartAggregatorMode_MAX       = 4,
};

enum class ESurfaceAreaScale : uint8
{
	LargestInstance                = 0,
	SmallestInstance               = 1,
	Average                        = 2,
	ESurfaceAreaScale_MAX          = 3,
};

enum class ERemeshingTarget : uint8
{
	OnScreenSize                   = 0,
	MaxDeviation                   = 1,
	ERemeshingTarget_MAX           = 2,
};

enum class ERemeshingMode : uint8
{
	Outside                        = 0,
	Inside                         = 1,
	Manual                         = 2,
	ERemeshingMode_MAX             = 3,
};

enum class EHoleFilling : uint8
{
	Disabled                       = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EHoleFilling_MAX               = 4,
};

enum class ESurfaceTransferMode : uint8
{
	Fast                           = 0,
	Accurate                       = 1,
	ESurfaceTransferMode_MAX       = 2,
};

enum class EBillboardMode : uint8
{
	OuterShell                     = 0,
	Foliage                        = 1,
	EBillboardMode_MAX             = 2,
};

enum class EOpacityChannelComponent : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EOpacityChannelComponent_MAX   = 4,
};

enum class EStopCondition : uint8
{
	Any                            = 0,
	All                            = 1,
	EStopCondition_MAX             = 2,
};

enum class EDitherType : uint8
{
	NoDither                       = 0,
	FloydSteinberg                 = 1,
	JarvisJudiceNinke              = 2,
	Sierra                         = 3,
	EDitherType_MAX                = 4,
};

enum class EFillMode : uint8
{
	Interpolate                    = 0,
	NearestNeighbor                = 1,
	NoFill                         = 2,
	EFillMode_MAX                  = 3,
};

enum class EOutputPixelFormat : uint8
{
	R8G8B8A8                       = 0,
	R8G8B8                         = 1,
	R8                             = 2,
	R16G16B16A16                   = 3,
	R16G16B16                      = 4,
	R16                            = 5,
	R32G32B32A32F                  = 6,
	EOutputPixelFormat_MAX         = 7,
};

enum class EOutputImageFileFormat : uint8
{
	BMP                            = 0,
	DDS                            = 1,
	JPEG                           = 2,
	PNG                            = 3,
	TGA                            = 4,
	TIFF                           = 5,
	EXR                            = 8,
	EOutputImageFileFormat_MAX     = 9,
};

enum class EOutputDDSCompressionType : uint8
{
	NoCompression                  = 255,
	BC1                            = 0,
	BC2                            = 1,
	BC3                            = 2,
	BC4                            = 3,
	BC5                            = 4,
	EOutputDDSCompressionType_MAX  = 256,
};

enum class EOutputOpacityType : uint8
{
	Opacity                        = 0,
	Transparency                   = 1,
	EOutputOpacityType_MAX         = 2,
};

enum class EFlipBackfacingMode : uint8
{
	PixelNormal                    = 0,
	FaceNormal                     = 1,
	EFlipBackfacingMode_MAX        = 2,
};

enum class EGeometryDataFieldType : uint8
{
	Coords                         = 0,
	TexCoords                      = 1,
	Normals                        = 2,
	Tangents                       = 3,
	Bitangents                     = 4,
	Colors                         = 5,
	TriangleIds                    = 6,
	MaterialIds                    = 7,
	VertexIds                      = 8,
	UserVertexField                = 9,
	UserCornerField                = 10,
	UserTriangleField              = 11,
	CustomField                    = 12,
	EGeometryDataFieldType_MAX     = 13,
};

enum class EOutputColorSpace : uint8
{
	Undefined                      = 0,
	Linear                         = 1,
	SRGB                           = 2,
	EOutputColorSpace_MAX          = 3,
};

enum class EShaderCodeInputMode : uint8
{
	Source                         = 0,
	Binary                         = 1,
	EShaderCodeInputMode_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
struct FSimplygonPipelineSettings
{
public:
	uint8                                        Pad_199A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SimplygonUObjects.VisibilitySettings
struct FVisibilitySettings
{
public:
	enum class EVisibilityCameraMode             VisibilityCameraMode;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHemisphereUpVector               HemisphereUpVector;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HemisphereCoverageAngle;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HemisphereFidelity;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SphereFidelity;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CameraSelectionSetID;                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CameraSelectionSetName;                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OccluderSelectionSetID;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OccluderSelectionSetName;                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RemoveTrianglesNotOccludingOtherTriangles : 1;     // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_96 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_19F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FillNonVisibleAreaThreshold;                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForceVisibilityCalculation : 1;                    // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConservativeMode : 1;                              // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CullOccludedGeometry : 1;                          // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_98 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisibilityWeightsPower;                            // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseVisibilityWeightsInTexcoordGenerator : 1;       // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseVisibilityWeightsInReducer : 1;                 // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseBackfaceCulling : 1;                            // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_99 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EComputeVisibilityMode            ComputeVisibilityMode;                             // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SimplygonUObjects.RemeshingSettings
struct FRemeshingSettings
{
public:
	enum class ERemeshingTarget                  RemeshingTarget;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OnScreenSize;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeviation;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDerivedOnScreenSize;                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERemeshingMode                    RemeshingMode;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoleFilling                      HoleFilling;                                       // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A63[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RemeshingModeManualPositionX;                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemeshingModeManualPositionY;                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemeshingModeManualPositionZ;                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurfaceTransferMode              SurfaceTransferMode;                               // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HardEdgeAngle;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TransferNormals : 1;                               // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TransferColors : 1;                                // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LimitMaxEdgeLength : 1;                            // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9D : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxEdgeLength;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PopulateAttributeTessellationDisplacement : 1;     // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeometricalAccuracy;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopologicalAccuracy;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessSelectionSetID;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProcessSelectionSetName;                           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        KeepUnprocessedSceneMeshes : 1;                    // Mask: 0x1, PropSize: 0x10x50(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForceSoftEdgesWithinTextureCharts : 1;             // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SimplygonUObjects.BoneSettings
struct FBoneSettings
{
public:
	uint8                                        UseBoneReducer : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneReductionTargetBoneRatioEnabled : 1;           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A1 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1ACE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoneReductionTargetBoneRatio;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneReductionTargetBoneCountEnabled : 1;           // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A2 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoneReductionTargetBoneCount;                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneReductionTargetMaxDeviationEnabled : 1;        // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoneReductionTargetMaxDeviation;                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneReductionTargetOnScreenSizeEnabled : 1;        // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A4 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoneReductionTargetOnScreenSize;                   // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneReductionTargetStopCondition BoneReductionTargetStopCondition;                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RemoveUnusedBones : 1;                             // Mask: 0x1, PropSize: 0x10x21(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AF9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LockBoneSelectionSetID;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LockBoneSelectionSetName;                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemoveBoneSelectionSetID;                          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RemoveBoneSelectionSetName;                        // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LimitBonesPerVertex : 1;                           // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A6 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBonePerVertex;                                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct SimplygonUObjects.InputMaterialSettings
struct FInputMaterialSettings
{
public:
	int32                                        MaterialMapping;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
struct FChartAggregatorSettings
{
public:
	enum class EChartAggregatorMode              ChartAggregatorMode;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurfaceAreaScale                 SurfaceAreaScale;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B27[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OriginalTexCoordLevel;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OriginalTexCoordName;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SeparateOverlappingCharts : 1;                     // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SplitMirroredCharts : 1;                           // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A7 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OriginalChartProportionsChannel;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LockUVRotation : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B36[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SimplygonUObjects.ParameterizerSettings
struct FParameterizerSettings
{
public:
	float                                        MaxStretch;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LargeChartsImportance;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SimplygonUObjects.OutputMaterialSettings
struct FOutputMaterialSettings
{
public:
	int32                                        TextureWidth;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureHeight;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultisamplingLevel;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GutterSpace;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct SimplygonUObjects.MappingImageSettings
struct FMappingImageSettings
{
public:
	uint8                                        GenerateMappingImage : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateTexCoords : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateTangents : 1;                              // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReplaceMappingImages : 1;                          // Mask: 0x8, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseFullRetexturing : 1;                            // Mask: 0x10, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ApplyNewMaterialIds : 1;                           // Mask: 0x20, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseAutomaticTextureSize : 1;                       // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A8 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutomaticTextureSizeMultiplier;                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ForcePower2Texture : 1;                            // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OnlyParameterizeInvalidUVs : 1;                    // Mask: 0x2, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowTransparencyMapping : 1;                      // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A9 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1BC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaximumLayers;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TexCoordLevel;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TexCoordName;                                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETexCoordGeneratorType            TexCoordGeneratorType;                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETangentCalculatorType            TangentCalculatorType;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideTangentCalculator : 1;                     // Mask: 0x1, PropSize: 0x10x2A(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1BCD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OutputMaterialCount;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TangentCalculatorInvertV : 1;                      // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AB : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputMaterialCount;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChartAggregatorSettings              ChartAggregatorSettings;                           // 0x38(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FParameterizerSettings                ParameterizerSettings;                             // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FInputMaterialSettings>        InputMaterialSettings;                             // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOutputMaterialSettings>       OutputMaterialSettings;                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.GeometryCullingSettings
struct FGeometryCullingSettings
{
public:
	uint8                                        UseClippingPlanes : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AC : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1BFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClippingPlaneSelectionSetID;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClippingPlaneSelectionSetName;                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseClippingGeometry : 1;                           // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AD : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1BFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClippingGeometrySelectionSetID;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClippingGeometrySelectionSetName;                  // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SimplygonUObjects.AttributeTessellationSettings
struct FAttributeTessellationSettings
{
public:
	uint8                                        EnableAttributeTessellation : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AE : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EAttributeTessellationDensityMode AttributeTessellationDensityMode;                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformationSpace              TransformationSpace;                               // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C30[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAreaOfTessellatedValue;                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLengthOfTessellatedValue;                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OnScreenSize;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OnlyAllowOneLevelOfDifference : 1;                 // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinTessellationLevel;                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTessellationLevel;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTotalValuesCount;                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x208 - 0x8)
// ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
struct FRemeshingPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FRemeshingSettings                    RemeshingSettings;                                 // 0x8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneSettings                         BoneSettings;                                      // 0x60(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryCullingSettings              GeometryCullingSettings;                           // 0xB8(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVisibilitySettings                   VisibilitySettings;                                // 0xE8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x140(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x160(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x1F8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x208 - 0x208)
// ScriptStruct SimplygonUObjects.HLODRemeshingSettings
struct FHLODRemeshingSettings : public FRemeshingPipelineSettings
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.AggregationSettings
struct FAggregationSettings
{
public:
	uint8                                        MergeGeometries : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EnableGeometryCulling : 1;                         // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B2 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeometryCullingPrecision;                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SubdivideGeometryBasedOnUVTiles : 1;               // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubdivisionTileSize;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessSelectionSetID;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProcessSelectionSetName;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        KeepUnprocessedSceneMeshes : 1;                    // Mask: 0x1, PropSize: 0x10x28(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SimplygonUObjects.VertexWeightSettings
struct FVertexWeightSettings
{
public:
	uint8                                        UseVertexWeightsInReducer : 1;                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseVertexWeightsInTexcoordGenerator : 1;           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B4 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeightsFromColorLevel;                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WeightsFromColorName;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeightsFromColorComponent        WeightsFromColorComponent;                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeightsFromColorMultiplier;                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeightsFromColorMode             WeightsFromColorMode;                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
struct FGenerateLightmapTexCoordSettings
{
public:
	uint8                                        GenerateLightmapTexCoord : 1;                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1CFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LightmapTexCoordLevel;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LightmapTexCoordName;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChartAggregatorMode              ChartAggregatorMode;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextureWidth;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureHeight;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GutterSpace;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceTexCoordLevel;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D8 (0x1E0 - 0x8)
// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
struct FAggregationPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FAggregationSettings                  AggregationSettings;                               // 0x8(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVisibilitySettings                   VisibilitySettings;                                // 0x38(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryCullingSettings              GeometryCullingSettings;                           // 0x90(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexWeightSettings                 VertexWeightSettings;                              // 0xC0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0xE8(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x108(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGenerateLightmapTexCoordSettings     GenerateLightmapTexCoordSettings;                  // 0x1A0(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x1D0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x1E0 - 0x1E0)
// ScriptStruct SimplygonUObjects.HLODAggregationSettings
struct FHLODAggregationSettings : public FAggregationPipelineSettings
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SimplygonUObjects.FoliageSettings
struct FFoliageSettings
{
public:
	uint8                                        MaintainLeafConnections : 1;                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SeparateTrunkAndFoliage : 1;                       // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B6 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D51[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SeparateFoliageTriangleRatio;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SeparateFoliageTriangleThreshold;                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparateFoliageAreaThreshold;                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparateFoliageSizeThreshold;                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrunkReductionRatio;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SimplygonUObjects.BillboardCloudSettings
struct FBillboardCloudSettings
{
public:
	enum class EBillboardMode                    BillboardMode;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BillboardDensity;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlaneCount;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GeometricComplexity;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FavorVerticalPlanes : 1;                           // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B7 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1D93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpacityCutoff;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TwoSided : 1;                                      // Mask: 0x1, PropSize: 0x10x29(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseVisibilityWeights : 1;                          // Mask: 0x2, PropSize: 0x10x29(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B9 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DA7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UpVector;                                          // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFoliageSettings                      FoliageSettings;                                   // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct SimplygonUObjects.BillboardCloudVegetationPipelineSettings
struct FBillboardCloudVegetationPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FBillboardCloudSettings               BillboardCloudSettings;                            // 0x8(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x68(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x88(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x120(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct SimplygonUObjects.HLODBillboardCloudVegetationSettings
struct FHLODBillboardCloudVegetationSettings : public FBillboardCloudVegetationPipelineSettings
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SimplygonUObjects.StandinLightmapSettings
struct FStandinLightmapSettings
{
public:
	int32                                        LightMapResolution;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightmapIndex;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x1C - 0x8)
// ScriptStruct SimplygonUObjects.NearStandinLightmapSettings
struct FNearStandinLightmapSettings : public FStandinLightmapSettings
{
public:
	bool                                         bGenerateLightmapTexCoords;                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E01[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TexCoordResolution;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TexCoordGutterSpace;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChartAggregatorMode              TexCoordPackerMode;                                // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESourceTexCoordMode               SourceTexCoordMode;                                // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E26[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SourceTexCoordIndex;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SimplygonUObjects.MaterialOutputSettings
struct FMaterialOutputSettings
{
public:
	TSoftObjectPtr<class UMaterialInterface>     ParentMaterialOverride;                            // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SimplygonUObjects.ReductionSettings
struct FReductionSettings
{
public:
	uint8                                        ReductionTargetTriangleRatioEnabled : 1;           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReductionTargetTriangleRatio;                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReductionTargetTriangleCountEnabled : 1;           // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BB : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReductionTargetTriangleCount;                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReductionTargetMaxDeviationEnabled : 1;            // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BC : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReductionTargetMaxDeviation;                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReductionTargetOnScreenSizeEnabled : 1;            // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BD : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1EAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReductionTargetOnScreenSize;                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReductionPerformanceMode         ReductionPerformanceMode;                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReductionTargetStopCondition     ReductionTargetStopCondition;                      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReductionHeuristics              ReductionHeuristics;                               // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeometryImportance;                                // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaterialImportance;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureImportance;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadingImportance;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroupImportance;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertexColorImportance;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EdgeSetImportance;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkinningImportance;                                // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutwardMoveMultiplier;                             // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InwardMoveMultiplier;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LimitMaxEdgeLength : 1;                            // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BE : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1EF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxEdgeLength;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        KeepSymmetry : 1;                                  // Mask: 0x1, PropSize: 0x10x54(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseSymmetryQuadRetriangulator : 1;                 // Mask: 0x2, PropSize: 0x10x54(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseAutomaticSymmetryDetection : 1;                 // Mask: 0x4, PropSize: 0x10x54(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BF : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SymmetryDetectionTolerance;                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESymmetryAxis                     SymmetryAxis;                                      // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SymmetryOffset;                                    // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CreateGeomorphGeometry : 1;                        // Mask: 0x1, PropSize: 0x10x64(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateGeomorphData : 1;                          // Mask: 0x2, PropSize: 0x10x64(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C0 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EDataCreationPreferences          DataCreationPreferences;                           // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseHighQualityNormalCalculation : 1;               // Mask: 0x1, PropSize: 0x10x66(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LockGeometricBorder : 1;                           // Mask: 0x2, PropSize: 0x10x66(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MergeGeometries : 1;                               // Mask: 0x4, PropSize: 0x10x66(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowDegenerateTexCoords : 1;                      // Mask: 0x8, PropSize: 0x10x66(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C3 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F3F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ProcessSelectionSetID;                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProcessSelectionSetName;                           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        KeepUnprocessedSceneMeshes : 1;                    // Mask: 0x1, PropSize: 0x10x80(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PreserveQuadFlags : 1;                             // Mask: 0x2, PropSize: 0x10x80(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F61[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SimplygonUObjects.RepairSettings
struct FRepairSettings
{
public:
	uint8                                        UseTJunctionRemover : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TJuncDist;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseWelding : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeldOnlyBorderVertices : 1;                        // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeldOnlyWithinMaterial : 1;                        // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeldOnlyWithinSceneNode : 1;                       // Mask: 0x8, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeldOnlyBetweenSceneNodes : 1;                     // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C6 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WeldDist;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressivePasses;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct SimplygonUObjects.NormalCalculationSettings
struct FNormalCalculationSettings
{
public:
	uint8                                        ReplaceNormals : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RepairInvalidNormals : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CA : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HardEdgeAngle;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReplaceTangents : 1;                               // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReorthogonalizeTangentSpace : 1;                   // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ScaleByArea : 1;                                   // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ScaleByAngle : 1;                                  // Mask: 0x8, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SnapNormalsToFlatSurfaces : 1;                     // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SimplygonUObjects.FlipbookSettings
struct FFlipbookSettings
{
public:
	int32                                        NumberOfViews;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ViewDirection;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfColumns;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfRows;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlipRowColumnOrder : 1;                            // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CB : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverrideFlipbookTextureWidth;                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PivotAroundOrigin : 1;                             // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewSettings
struct FImpostorFromSingleViewSettings
{
public:
	uint8                                        UseTightFitting : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CE : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TightFittingDepthOffset;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TwoSided : 1;                                      // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ViewDirection;                                     // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TexCoordPadding;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseOverrideCenterAndRadius : 1;                    // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D0 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2001[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverrideRadius;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OverrideCenter;                                    // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideCenterX;                                   // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideCenterY;                                   // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverrideCenterZ;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2004[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SimplygonUObjects.HighDensityMeshReductionSettings
struct FHighDensityMeshReductionSettings
{
public:
	uint8                                        OnScreenSizeEnabled : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D1 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2005[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OnScreenSize;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        MaxDeviationEnabled : 1;                           // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D2 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2009[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDeviation;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStopCondition                    StopCondition;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProcessSelectionSetName;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.ColorCasterSettings
struct FColorCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2027[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D3 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutputSRGB : 1;                                    // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BakeOpacityInAlpha : 1;                            // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkipCastingIfNoInputChannel : 1;                   // Mask: 0x4, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D4 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputOpacityType                OutputOpacityType;                                 // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.OpacityCasterSettings
struct FOpacityCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D5 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutputSRGB : 1;                                    // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutputToTessellatedAttributes : 1;                 // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D6 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputOpacityType                OutputOpacityType;                                 // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SimplygonUObjects.NormalCasterSettings
struct FNormalCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2055[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D7 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlipBackfacingNormals : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D8 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EFlipBackfacingMode               FlipBackfacingMode;                                // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateTangentSpaceNormals : 1;                   // Mask: 0x1, PropSize: 0x10x2E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlipGreen : 1;                                     // Mask: 0x2, PropSize: 0x10x2E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CalculateBitangentPerFragment : 1;                 // Mask: 0x4, PropSize: 0x10x2E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NormalizeInterpolatedTangentSpace : 1;             // Mask: 0x8, PropSize: 0x10x2E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2074[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
struct FDisplacementCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D9 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceScaling;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateScalarDisplacement : 1;                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OutputToTessellatedAttributes : 1;                 // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GenerateTangentSpaceDisplacement : 1;              // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DA : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_209F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NormalMapTexCoordLevel;                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
struct FAmbientOcclusionCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DB : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RaysPerPixel;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionFalloff;                                  // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionMultiplier;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseSimpleOcclusionMode : 1;                        // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlipBackfacingNormals : 1;                         // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2100[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
struct FGeometryDataCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DF : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryDataFieldType            GeometryDataFieldType;                             // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2151[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeometryDataFieldIndex;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingLayerIndex;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_215B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              MappingInf;                                        // 0x40(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              MappingSup;                                        // 0x60(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SimplygonUObjects.VertexColorCasterSettings
struct FVertexColorCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_E0 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputColorLevel;                                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputColorName;                                   // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorSpaceEdgeThreshold;                           // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SimplygonUObjects.ComputeCasterSettings
struct FComputeCasterSettings
{
public:
	class FString                                MaterialChannel;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OpacityChannel;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpacityChannelComponent          OpacityChannelComponent;                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDitherType                       DitherType;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFillMode                         FillMode;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2201[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dilation;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UseMultisampling : 1;                              // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_E1 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EOutputPixelFormat                OutputPixelFormat;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputImageFileFormat            OutputImageFileFormat;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputDDSCompressionType         OutputDDSCompressionType;                          // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutputColorSpace                 OutputColorSpace;                                  // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CastLayersFrontToBack : 1;                         // Mask: 0x1, PropSize: 0x10x2D(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_E2 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2269[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCastLayers;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EShaderCodeInputMode              ShaderCodeInputMode;                               // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2272[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x250 - 0x8)
// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
struct FReductionPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FReductionSettings                    ReductionSettings;                                 // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRepairSettings                       RepairSettings;                                    // 0x90(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FNormalCalculationSettings            NormalCalculationSettings;                         // 0xA4(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVisibilitySettings                   VisibilitySettings;                                // 0xB0(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBoneSettings                         BoneSettings;                                      // 0x108(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexWeightSettings                 VertexWeightSettings;                              // 0x160(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x188(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x1A8(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x240(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct SimplygonUObjects.BillboardCloudPipelineSettings
struct FBillboardCloudPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FBillboardCloudSettings               BillboardCloudSettings;                            // 0x8(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x68(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x88(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x120(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct SimplygonUObjects.FlipbookPipelineSettings
struct FFlipbookPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FFlipbookSettings                     FlipbookSettings;                                  // 0x8(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x58(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x78(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x110(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
struct FImpostorFromSingleViewPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FImpostorFromSingleViewSettings       ImpostorFromSingleViewSettings;                    // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeTessellationSettings        AttributeTessellationSettings;                     // 0x68(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMappingImageSettings                 MappingImageSettings;                              // 0x88(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class USimplygonMaterialCaster*>      MaterialPropertyCasters;                           // 0x120(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct SimplygonUObjects.HighDensityMeshReductionPipelineSettings
struct FHighDensityMeshReductionPipelineSettings : public FSimplygonPipelineSettings
{
public:
	struct FHighDensityMeshReductionSettings     HighDensityMeshReductionSettings;                  // 0x8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


