#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x18C0 - 0x18B0)
// BlueprintGeneratedClass Secondary_Makarov.Secondary_Makarov_C
class ASecondary_Makarov_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x18B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x18B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_Makarov_C* GetDefaultObj();

	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_Secondary_Makarov(int32 EntryPoint);
};

}


