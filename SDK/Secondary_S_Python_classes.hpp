#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x18D9 - 0x18B0)
// BlueprintGeneratedClass Secondary_S_Python.Secondary_S_Python_C
class ASecondary_S_Python_C : public ABaseMagazineWeapon
{
public:
	int32                                        BarrelIndex;                                       // 0x18B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3431[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  FireMontagesEmpty;                                 // 0x18B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                  FireMontages;                                      // 0x18C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bCocked;                                           // 0x18D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_S_Python_C* GetDefaultObj();

	void UserConstructionScript(class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue);
};

}


