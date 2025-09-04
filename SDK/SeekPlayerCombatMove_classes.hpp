#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass SeekPlayerCombatMove.SeekPlayerCombatMove_C
class USeekPlayerCombatMove_C : public UBaseCombatMoveActivity
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AReadyOrNotCharacter*                  SeekingPlayer;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StopDistance;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USeekPlayerCombatMove_C* GetDefaultObj();

	class FName GetMoveStyleOverride(int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RequestCombatMove_Blueprint(float DeltaTime);
	void StartActivity_Blueprint(class AAIController* Owner);
	void FinishedActivity_Blueprint(bool bSuccess);
	void ExecuteUbergraph_SeekPlayerCombatMove(int32 EntryPoint, const class FString& Temp_string_Variable, float K2Node_Event_DeltaTime, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, class APlayerCharacter* CallFunc_GetFirstAlivePlayerControlledCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceBetweenActors_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_Event_Owner, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool K2Node_Event_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AReadyOrNotCharacter* CallFunc_GetSquadLeader_ReturnValue, const class FString& Temp_string_Variable_1, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


