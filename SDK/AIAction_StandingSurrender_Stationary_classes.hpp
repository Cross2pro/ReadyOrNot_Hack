#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x88 - 0x58)
// BlueprintGeneratedClass AIAction_StandingSurrender_Stationary.AIAction_StandingSurrender_Stationary_C
class UAIAction_StandingSurrender_Stationary_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          TimerHandle;                                       // 0x60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOtherVoiceLine;                                // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SwatLocation;                                      // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_StandingSurrender_Stationary_C* GetDefaultObj();

	void GetComplianceVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue);
	class FName GetMoveStyleOverride(class FName CallFunc_MakeLiteralName_ReturnValue);
	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void EndAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void PlayComplianceVO();
	void ExecuteUbergraph_AIAction_StandingSurrender_Stationary(int32 EntryPoint, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_PlayRawVO_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
};

}


