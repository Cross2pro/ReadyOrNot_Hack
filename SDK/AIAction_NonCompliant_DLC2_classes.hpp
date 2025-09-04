#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xB8 - 0x58)
// BlueprintGeneratedClass AIAction_NonCompliant_DLC2.AIAction_NonCompliant_DLC2_C
class UAIAction_NonCompliant_DLC2_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               HesitateMoveLocation;                              // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastSeenSwatLocation;                              // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOtherVoiceLine;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeOfLastMoveCalc;                                // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DynamicRadius;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartingRadius;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_NonCompliant_DLC2_C* GetDefaultObj();

	bool ShouldForcePerformAction();
	void GetHesitationVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue);
	class FName GetMoveStyleOverride(enum class EAnimWeaponType Temp_byte_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, class FName K2Node_Select_Default);
	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void Tick_Blueprint(float DeltaTime);
	void PlayHesitationVO();
	void EndAction_Blueprint();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void ExecuteUbergraph_AIAction_NonCompliant_DLC2(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetHesitationVoiceOver_NewParam, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EAnimWeaponType Temp_byte_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, float K2Node_Event_DeltaTime, bool CallFunc_IsMovingForRequest_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, float CallFunc_IsMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsMontagePlayingWithTimeRemaining_ReturnValue, float CallFunc_IsMontagePlayingWithTimeRemaining_TimeRemaining_1, bool CallFunc_IsMontagePlayingWithTimeRemaining_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, const class FString& Temp_string_Variable, bool CallFunc_PlayRawVO_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, const class FString& CallFunc_GetHesitationVoiceOver_NewParam_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PlayRawVO_ReturnValue_1, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation_1, bool CallFunc_HasRecentlySeenSwat_ReturnValue_1, double CallFunc_GetTimeSeconds_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, const struct FVector& CallFunc_FindPositionAwayFromSwat_OutLocation, bool CallFunc_FindPositionAwayFromSwat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const class FString& Temp_string_Variable_1, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_10, const struct FVector& CallFunc_GetImmediateMoveDestination_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_IncreaseStress_Amount_ImplicitCast, float CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast);
};

}


