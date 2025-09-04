#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x300 - 0x2F0)
// BlueprintGeneratedClass Faction_LeftBehind.Faction_LeftBehind_C
class AFaction_LeftBehind_C : public AAIFactionManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFaction_LeftBehind_C* GetDefaultObj();

	void ExecuteUbergraph_Faction_LeftBehind(int32 EntryPoint);
};

}


