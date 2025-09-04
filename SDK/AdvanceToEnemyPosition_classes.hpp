#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x240 - 0x230)
// BlueprintGeneratedClass AdvanceToEnemyPosition.AdvanceToEnemyPosition_C
class UAdvanceToEnemyPosition_C : public UBaseCombatMoveActivity
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AReadyOrNotCharacter*                  SeekingPlayer;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAdvanceToEnemyPosition_C* GetDefaultObj();

	void RequestCombatMove_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AdvanceToEnemyPosition(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


