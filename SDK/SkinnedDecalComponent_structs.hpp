#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESkinnedDecalAdditionalData : uint8
{
	NoAdditionalData               = 0,
	SpawnTime                      = 1,
	DecalBoneID                    = 2,
	ESkinnedDecalAdditionalData_MAX = 3,
};

enum class ESkinnedDecalBlendMode : uint8
{
	Overlay                        = 0,
	Material                       = 1,
	ESkinnedDecalBlendMode_MAX     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct SkinnedDecalComponent.SkinnedDecalData
struct FSkinnedDecalData
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DecalLocation;                                     // 0x8(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BasisX;                                            // 0x20(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BasisY;                                            // 0x38(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BasisZ;                                            // 0x50(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Info;                                              // 0x70(0x20)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SkinnedDecalComponent.SkinnedDecalSamplerState
struct FSkinnedDecalSamplerState
{
public:
	TMap<int32, struct FSkinnedDecalData>        Decals;                                            // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DecalLocations;                                    // 0x50(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                EmptyIndexes;                                      // 0x60(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        LastDecalIndex;                                    // 0x70(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


