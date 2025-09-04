#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1950 - 0x1920)
// BlueprintGeneratedClass Device_SuperShorty.Device_SuperShorty_C
class ADevice_SuperShorty_C : public AShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1920(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShellRackShellComponent*              Shell4;                                            // 0x1928(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell3;                                            // 0x1930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell2;                                            // 0x1938(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell1;                                            // 0x1940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShellRackShellComponent*              Shell0;                                            // 0x1948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADevice_SuperShorty_C* GetDefaultObj();

	void DoReloadComplete_1();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Device_SuperShorty(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


