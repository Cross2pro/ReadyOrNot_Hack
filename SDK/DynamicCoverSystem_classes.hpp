#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x320 - 0x2D0)
// Class DynamicCoverSystem.CoverGenOverrideVolume
class ACoverGenOverrideVolume : public AVolume
{
public:
	struct FCoverGenSettings                     CoverGenSettings;                                  // 0x2D0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumCoverPoints;                                    // 0x300(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverGenTime;                                      // 0x304(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FB[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACoverGenOverrideVolume* GetDefaultObj();

	void GenerateCoverPoints();
};

// 0xD0 (0x368 - 0x298)
// Class DynamicCoverSystem.CoverPoint
class ACoverPoint : public AActor
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 CoverActor;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverRail                            CoverRail;                                         // 0x2A8(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct FCoverDirection                       StandCoverDirection;                               // 0x300(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FCoverDirection                       CrouchCoverDirection;                              // 0x330(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x360(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCrouchOnlyCover : 1;                            // Mask: 0x1, PropSize: 0x10x364(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCoverType : 1;                            // Mask: 0x2, PropSize: 0x10x364(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_41 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EStandCoverType                   StandCoverType;                                    // 0x365(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECrouchCoverType                  CrouchCoverType;                                   // 0x366(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5C[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACoverPoint* GetDefaultObj();

	void StopPreviewCoverAnim();
	void SetStandCoverType(enum class EStandCoverType& NewCoverType);
	void SetCrouchCoverType(enum class ECrouchCoverType& NewCoverType);
	void ResetCoverTypes();
	void PreviewCoverAnim();
};

// 0x88 (0xC8 - 0x40)
// Class DynamicCoverSystem.CoverSystem
class UCoverSystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_A98[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCoverSystem* GetDefaultObj();

	bool ReleaseCover(struct FVector& InCoverPoint);
	bool OccupyCover(struct FVector& InCoverPoint);
	bool IsCoverPointOccupied(struct FVector& InCoverLocation);
};

// 0xD8 (0x6A0 - 0x5C8)
// Class DynamicCoverSystem.NotifyingRecastNavMesh
class ANotifyingRecastNavMesh : public ARecastNavMesh
{
public:
	int32                                        NumCoverPoints;                                    // 0x5C8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoverGenTimeMs;                                    // 0x5CC(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCoverGenSettings                     CoverGenSettings;                                  // 0x5D0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDistanceBetweenCoverPoints;                     // 0x600(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPhysicalSurface>          IgnoredPhysicalSurfacesForGeoTest;                 // 0x608(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          IgnoredPhysicalSurfacesForEdgeTests;               // 0x618(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACB[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANotifyingRecastNavMesh* GetDefaultObj();

	void GenerateCoverPoints();
	void DeleteAllCoverPoints();
};

}


