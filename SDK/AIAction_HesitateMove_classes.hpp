#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xC0 - 0x58)
// BlueprintGeneratedClass AIAction_HesitateMove.AIAction_HesitateMove_C
class UAIAction_HesitateMove_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               HesitateMoveLocation;                              // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastSeenSwatLocation;                              // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseOtherVoiceLine;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3999[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RequestMoveCooldown;                               // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeOfLastMoveCalc;                                // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartingRadius;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DynamicRadius;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_HesitateMove_C* GetDefaultObj();

	bool ShouldForcePerformAction();
	void GetHesitationVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue);
	class FName GetMoveStyleOverride(class FName CurrentMoveStyle, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	bool ShouldPerformAction();
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void PlayHesitationVO();
	void EndAction_Blueprint();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void ExecuteUbergraph_AIAction_HesitateMove(int32 EntryPoint, const class FString& CallFunc_GetHesitationVoiceOver_NewParam, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_IsMovingForRequest_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_PlayRawVO_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_PlayRawVO_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_10, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& Temp_string_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, const struct FVector& CallFunc_FindPositionAwayFromSwat_OutLocation, bool CallFunc_FindPositionAwayFromSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_11, const struct FVector& CallFunc_GetImmediateMoveDestination_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast, float CallFunc_IncreaseStress_Amount_ImplicitCast, float CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast);
};

}


