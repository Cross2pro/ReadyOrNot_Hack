#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x18D9 - 0x18B0)
// BlueprintGeneratedClass Secondary_Python_V2.Secondary_Python_V2_C
class ASecondary_Python_V2_C : public ABaseMagazineWeapon
{
public:
	int32                                        BarrelIndex;                                       // 0x18B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  FireMontagesEmpty;                                 // 0x18B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                  FireMontages;                                      // 0x18C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bCocked;                                           // 0x18D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_Python_V2_C* GetDefaultObj();

	void UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue);
};

}


