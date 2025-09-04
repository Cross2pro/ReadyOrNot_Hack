#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// Class SkinnedDecalComponent.SkinnedDecalInstance
class USkinnedDecalInstance : public USceneComponent
{
public:
	int32                                        Index;                                             // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubUV;                                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinnedDecalInstance* GetDefaultObj();

	void UpdateDecal();
	class USkinnedDecalSampler* GetSampler();
};

// 0x78 (0xA0 - 0x28)
// Class SkinnedDecalComponent.SkinnedDecalSamplerSave
class USkinnedDecalSamplerSave : public USaveGame
{
public:
	struct FSkinnedDecalSamplerState             SamplerState;                                      // 0x28(0x78)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USkinnedDecalSamplerSave* GetDefaultObj();

};

// 0x148 (0x1E8 - 0xA0)
// Class SkinnedDecalComponent.SkinnedDecalSampler
class USkinnedDecalSampler : public UActorComponent
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0xA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDecals;                                         // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDecalDistance;                                  // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkinnedDecalBlendMode            BlendMode;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInterface>     OverlayBlendMaterial;                              // 0xB8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerIndex;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialParameterAssociation     Association;                                       // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESkinnedDecalAdditionalData       AdditionalData;                                    // 0xE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0xE8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EnableSaveGame;                                    // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class USkinnedDecalInstance*, int32>    InstanceMap;                                       // 0x100(0x50)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              OverlayBlendMaterialDynamic;                       // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USkeletalMeshComponent*>        RenderMeshes;                                      // 0x158(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                DataTarget;                                        // 0x168(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkinnedDecalSamplerState             SamplerState;                                      // 0x170(0x78)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USkinnedDecalSampler* GetDefaultObj();

	void UpdateInstance(class USkinnedDecalInstance* Instance);
	void UpdateAllDecals();
	void SpawnDecalFromData(const struct FSkinnedDecalData& Data);
	int32 SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, class FName BoneName, float Size, int32 SubUV, int32 Index, bool bEnableDisplacement);
	void SetupMaterials();
	void SetupComponentMaterials(class USkeletalMeshComponent* Component);
	void SetSamplerState(const struct FSkinnedDecalSamplerState& State);
	void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);
	void SaveSampler(const class FString& SlotName, int32 UserIndex);
	void RemoveDecal(int32 Index);
	void LoadSampler(const class FString& SlotName, int32 UserIndex);
	struct FSkinnedDecalSamplerState GetSamplerState();
	class UTextureRenderTarget2D* GetDataTarget();
	void CloneDecals(class USkinnedDecalSampler* Source);
	void ClearAllDecals();
	void AutoSetup();
};

}


