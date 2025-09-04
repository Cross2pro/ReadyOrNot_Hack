#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass AIAction_FallbackToZone.AIAction_FallbackToZone_C
class UAIAction_FallbackToZone_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMoveToZoneCombatMove*                 FallbackToZoneCM;                                  // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_FallbackToZone_C* GetDefaultObj();

	bool ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMoveToZoneCombatMove* K2Node_DynamicCast_AsMove_to_Zone_Combat_Move, bool K2Node_DynamicCast_bSuccess);
	void BeginAction_Blueprint();
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void ExecuteUbergraph_AIAction_FallbackToZone(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class UMoveToZoneCombatMove* CallFunc_SpawnObject_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue);
};

}


