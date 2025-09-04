#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0xA2 - 0x58)
// BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
class UAIAction_Startle_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsRightStartle;                                   // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StartleAnimation;                                  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                               StimulusLocation;                                  // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTrackingTarget;                                   // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Cooldown;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCoolingDown;                                    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEverShotBefore;                                   // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_Startle_C* GetDefaultObj();

	void CanStartle(bool* Return_Value, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, double CallFunc_RandomFloat_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
	void AngleToAnimation(double InAngle, bool bRight, class FString* Return_Value, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_4, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& K2Node_Select_Default_2);
	void IsLocationRightOfUs(const struct FVector& InLocation, bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void Tick_Blueprint(float DeltaTime);
	void ResetData();
	void EndAction_Blueprint();
	void CustomEvent_0();
	void ExecuteUbergraph_AIAction_Startle(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_HasBeenExposedToAggressiveNoise_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastHeardAggressiveNoiseLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float K2Node_Event_DeltaTime, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsLocationRightOfUs_Return_Value, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Acos_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, double CallFunc_GridSnap_Float_ReturnValue, bool CallFunc_CanStartle_Return_Value, const class FString& CallFunc_AngleToAnimation_Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


