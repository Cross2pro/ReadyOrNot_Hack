#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1968 - 0x1920)
// BlueprintGeneratedClass Primary_B1301_Entryman.Primary_B1301_Entryman_C
class APrimary_B1301_Entryman_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1920(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShellRackShellComponent*              Shell6;                                            // 0x1928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell5;                                            // 0x1930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell4;                                            // 0x1938(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell3;                                            // 0x1940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell2;                                            // 0x1948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell1;                                            // 0x1950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell0;                                            // 0x1958(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LightToggle1P;                                     // 0x1960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APrimary_B1301_Entryman_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Primary_B1301_Entryman(int32 EntryPoint);
};

}


