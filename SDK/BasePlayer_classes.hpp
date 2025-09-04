#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x3048 - 0x2F60)
// BlueprintGeneratedClass BasePlayer.BasePlayer_C
class ABasePlayer_C : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     ClothCollider;                                     // 0x2F68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Muscle_Strength;                           // 0x2F70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Muscle_Strength;                                   // 0x2F78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Muscle_Strength_DEAD;                              // 0x2F80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Air_Muscle_Strength_Switch;                     // 0x2F88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Air_Switch_Delay;                               // 0x2F89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuppressionDebug;                                 // 0x2F8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EDF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          VaultStepAnim;                                     // 0x2F90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          VaultUpAnim;                                       // 0x2F98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          VaultOverAnim;                                     // 0x2FA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CurrentVaultMontage;                               // 0x2FA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentSuppressionShakeAmount;                     // 0x2FB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SuppressionShakeDecreaseRate;                      // 0x2FB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ArmBreakShakeAmount;                               // 0x2FC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SuppressionShakeScale;                             // 0x2FC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultIdleShake;                                  // 0x2FD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprintShakeAmount;                                 // 0x2FD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprintShakeDecreaseRate;                           // 0x2FE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentSprintShakeAmount;                          // 0x2FE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletCursor;                                      // 0x2FF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentFoV;                                        // 0x2FF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletFocusTimer;                                  // 0x3000(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletOpen;                                        // 0x3001(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentTabletFocusDelay;                           // 0x3008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TabletFocused;                                     // 0x3010(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Minhfov;                                           // 0x3018(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Tgtvfov;                                           // 0x3020(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCrouchStarted;                                   // 0x3028(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCrouchEnded;                                     // 0x3038(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABasePlayer_C* GetDefaultObj();

	void GetTabletZoomFOV(double* FOV, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_DegTan_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegAtan_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue);
	void AddFirstPersonShakeFromSuppression(double Strength, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue);
	void UpdateFirstPersonShake(double DeltaSeconds, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsSprinting_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, float K2Node_VariableSet_FirstPersonShakeAmount_ImplicitCast);
	void InpActEvt_F1_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F2_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnJumpStart();
	void OnJumpLand();
	void OnKilledOrGoneUnconciousBP();
	void ToggleTabletCursor(bool Active);
	void PlayVaultAnimation(const struct FVector& Ledge, const struct FVector& LedgeWallNormal, const struct FVector& LedgeTraceDown, float LedgeZ, enum class ELedgeWidth LedgeWidth, enum class ELedgeHeight LedgeHeight);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnTurn();
	void OnLeanStart();
	void FocusTablet();
	void OnLeanEnd();
	void OnSupression(float Strength);
	void ReceiveTick(float DeltaSeconds);
	void OnBulletImpact(float DirectionForward, float DirectionRight);
	void ExecuteUbergraph_BasePlayer(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1, double Temp_real_Variable_1, double Temp_real_Variable_1, bool CallFunc_IsLocalPlayer_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsLocalPlayer_ReturnValue_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, bool CallFunc_IsLocalPlayer_ReturnValue_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, bool K2Node_CustomEvent_Active, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FVector& K2Node_Event_ledge, const struct FVector& K2Node_Event_ledgeWallNormal, const struct FVector& K2Node_Event_ledgeTraceDown, float K2Node_Event_ledgeZ, enum class ELedgeWidth K2Node_Event_ledgeWidth, enum class ELedgeHeight K2Node_Event_ledgeHeight, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_5, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsLocalPlayer_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_Strength, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_4, bool CallFunc_IsLocalPlayer_ReturnValue_4, const struct FKey& K2Node_InputKeyEvent_Key, float K2Node_Event_DeltaSeconds, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_2, float K2Node_Event_DirectionForward, float K2Node_Event_DirectionRight, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, double Temp_real_Variable, double Temp_real_Variable_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_AddFirstPersonShakeFromSuppression_Strength_ImplicitCast, double CallFunc_UpdateFirstPersonShake_DeltaSeconds_ImplicitCast);
	void OnCrouchEnded__DelegateSignature();
	void OnCrouchStarted__DelegateSignature();
};

}


