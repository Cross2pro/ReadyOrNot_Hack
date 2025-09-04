#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C
class UAIAction_MoveToPlayerSpawn_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMoveToPlayerSpawn*                    MoveToPlayerSpawnCombatMove;                       // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_MoveToPlayerSpawn_C* GetDefaultObj();

	void BeginAction_Blueprint();
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void EndAction_Blueprint();
	void ExecuteUbergraph_AIAction_MoveToPlayerSpawn(int32 EntryPoint, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class UMoveToPlayerSpawn* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue_1, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue_2, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


