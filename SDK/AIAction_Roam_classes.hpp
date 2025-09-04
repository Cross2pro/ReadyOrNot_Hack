#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xA0 - 0x58)
// BlueprintGeneratedClass AIAction_Roam.AIAction_Roam_C
class UAIAction_Roam_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bFinishedRoaming;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMoveFinished;                                     // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPathGoesThroughClosedDoor;                        // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMoving;                                           // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FocusTime;                                         // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FocusTimeRemaining;                                // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Angle;                                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FocusLocation;                                     // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AThreatAwarenessActor*                 ChosenThreatFocus;                                 // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_Roam_C* GetDefaultObj();

	void ResetData();
	bool ShouldPerformAction(bool CallFunc_Not_PreBool_ReturnValue);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID);
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void EndAction_Blueprint();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void ExecuteUbergraph_AIAction_Roam(int32 EntryPoint, bool CallFunc_Less_DoubleDouble_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class UThreatAwarenessSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class ACyberneticController* K2Node_Event_Controller_1, double CallFunc_RandomFloatInRange_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class AAIController* K2Node_Event_Controller, int32 K2Node_Event_RequestID, double CallFunc_RandomFloatInRange_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation_1, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const class FString& Temp_string_Variable_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Array_RemoveItem_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, TArray<class AThreatAwarenessActor*>& CallFunc_GetThreatsForLocation_OutThreats, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class AThreatAwarenessActor* CallFunc_GetFurthestHighestThreat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


