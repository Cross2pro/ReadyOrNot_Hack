#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x99 - 0x58)
// BlueprintGeneratedClass AIAction_HesitateStationary.AIAction_HesitateStationary_C
class UAIAction_HesitateStationary_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               HesitateMoveLocation;                              // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastSeenSwatLocation;                              // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOtherVoiceLine;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_HesitateStationary_C* GetDefaultObj();

	void GetHesitationVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue);
	class FName GetMoveStyleOverride(class FName CurrentMoveStyle, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	bool ShouldPerformAction();
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void PlayHesitationVO();
	void EndAction_Blueprint();
	void ExecuteUbergraph_AIAction_HesitateStationary(int32 EntryPoint, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam, float K2Node_Event_DeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, const class FString& Temp_string_Variable_1, bool CallFunc_PlayRawVO_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam_1, bool CallFunc_PlayRawVO_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast, float CallFunc_IncreaseStress_Amount_ImplicitCast);
};

}


