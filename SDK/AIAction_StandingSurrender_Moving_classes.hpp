#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x81 - 0x58)
// BlueprintGeneratedClass AIAction_StandingSurrender_Moving.AIAction_StandingSurrender_Moving_C
class UAIAction_StandingSurrender_Moving_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               SwatLocation;                                      // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOtherVoiceLine;                                // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_StandingSurrender_Moving_C* GetDefaultObj();

	void GetComplianceVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue);
	class FName GetMoveStyleOverride(class FName CallFunc_MakeLiteralName_ReturnValue);
	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void EndAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void PlayComplianceVO();
	void ExecuteUbergraph_AIAction_StandingSurrender_Moving(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_PlayRawVO_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& Temp_string_Variable_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetImmediateMoveDestination_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1);
};

}


