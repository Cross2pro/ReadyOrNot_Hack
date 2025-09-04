#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C
// (None)

class UClass* UW_Options_GamepadOptions_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_GamepadOptions_UE5_C");

	return Clss;
}


// W_Options_GamepadOptions_UE5_C W_Options_GamepadOptions_UE5.Default__W_Options_GamepadOptions_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_GamepadOptions_UE5_C* UW_Options_GamepadOptions_UE5_C::GetDefaultObj()
{
	static class UW_Options_GamepadOptions_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_GamepadOptions_UE5_C*>(UW_Options_GamepadOptions_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_GamepadOptions_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_GamepadOptions_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.PopulateGamepadControls_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetForceFeedbackEnabled_ForceFeedbackEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetForceFeedbackEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPS5AdaptiveAimTriggers_PS5AdaptiveAimTriggers       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPS5AdaptiveAimTriggers_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPS5AdaptiveFireTriggers_PS5AdaptiveFireTriggers     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPS5AdaptiveFireTriggers_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGyroActiveMode_GyroActiveMode                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroActiveMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_bInvertGyroVertical                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_bInvertGyroHorizontal                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActiveByString_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroHorizontalAimSensitivity_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroVerticalAimSensitivity_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroHorizontalLookSensitivity_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroVerticalLookSensitivity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadLookSensitivitySpeedUp_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertButtonLayout_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertStickLayout_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadLookInnerDeadzone_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadMovementInnerDeadzone_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadAimSensitivityHorizontal_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadAimSensitivityVertical_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadLookSensitivityHorizontal_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadLookSensitivityVertical_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetGamepadAimAssistIntensity_AimAssistIntensity         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadAimAssistIntensity_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActiveByString_Success_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetForceFeedbackIntensity_ForceFeedbackIntensity        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetForceFeedbackIntensity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSpeakerIntensity_SpeakerIntensity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpeakerIntensity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTogglePS5Gyro_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHoldCrouch_HoldCrouch                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_bInvertVertical                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_bInvertHorizontal                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadToggleADS_ToggleADS                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadToggleADS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::PopulateGamepadControls_0(bool CallFunc_GetForceFeedbackEnabled_ForceFeedbackEnabled, bool CallFunc_GetForceFeedbackEnabled_ReturnValue, bool CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick, bool CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue, bool CallFunc_LoadPS5AdaptiveAimTriggers_PS5AdaptiveAimTriggers, bool CallFunc_LoadPS5AdaptiveAimTriggers_ReturnValue, bool CallFunc_LoadPS5AdaptiveFireTriggers_PS5AdaptiveFireTriggers, bool CallFunc_LoadPS5AdaptiveFireTriggers_ReturnValue, const class FString& CallFunc_GetGyroActiveMode_GyroActiveMode, bool CallFunc_GetGyroActiveMode_ReturnValue, bool CallFunc_GetGyroInverted_bInvertGyroVertical, bool CallFunc_GetGyroInverted_bInvertGyroHorizontal, bool CallFunc_GetGyroInverted_ReturnValue, bool CallFunc_SetActiveByString_Success, float CallFunc_GetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity, bool CallFunc_GetGyroHorizontalAimSensitivity_ReturnValue, float CallFunc_GetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity, bool CallFunc_GetGyroVerticalAimSensitivity_ReturnValue, double CallFunc_SetFloatValue_NewValue, double CallFunc_SetFloatValue_NewValue_1, float CallFunc_GetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity, bool CallFunc_GetGyroHorizontalLookSensitivity_ReturnValue, float CallFunc_GetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity, bool CallFunc_GetGyroVerticalLookSensitivity_ReturnValue, double CallFunc_SetFloatValue_NewValue_2, double CallFunc_SetFloatValue_NewValue_3, float CallFunc_GetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp, bool CallFunc_GetGamepadLookSensitivitySpeedUp_ReturnValue, double CallFunc_SetFloatValue_NewValue_4, bool CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout, bool CallFunc_GetGamepadInvertButtonLayout_ReturnValue, bool CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout, bool CallFunc_GetGamepadInvertStickLayout_ReturnValue, float CallFunc_GetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone, bool CallFunc_GetGamepadLookInnerDeadzone_ReturnValue, float CallFunc_GetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone, bool CallFunc_GetGamepadMovementInnerDeadzone_ReturnValue, double CallFunc_SetFloatValue_NewValue_5, double CallFunc_SetFloatValue_NewValue_6, float CallFunc_GetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal, bool CallFunc_GetGamepadAimSensitivityHorizontal_ReturnValue, float CallFunc_GetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical, bool CallFunc_GetGamepadAimSensitivityVertical_ReturnValue, double CallFunc_SetFloatValue_NewValue_7, float CallFunc_GetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal, bool CallFunc_GetGamepadLookSensitivityHorizontal_ReturnValue, float CallFunc_GetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical, bool CallFunc_GetGamepadLookSensitivityVertical_ReturnValue, double CallFunc_SetFloatValue_NewValue_8, const class FString& CallFunc_GetGamepadAimAssistIntensity_AimAssistIntensity, bool CallFunc_GetGamepadAimAssistIntensity_ReturnValue, bool CallFunc_SetActiveByString_Success_1, float CallFunc_GetForceFeedbackIntensity_ForceFeedbackIntensity, bool CallFunc_GetForceFeedbackIntensity_ReturnValue, double CallFunc_SetFloatValue_NewValue_9, float CallFunc_GetSpeakerIntensity_SpeakerIntensity, bool CallFunc_GetSpeakerIntensity_ReturnValue, bool CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout, bool CallFunc_GetGamepadInvertTriggersLayout_ReturnValue, double CallFunc_SetFloatValue_NewValue_10, bool CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro, bool CallFunc_LoadTogglePS5Gyro_ReturnValue, bool CallFunc_LoadHoldCrouch_HoldCrouch, bool CallFunc_LoadHoldCrouch_ReturnValue, bool CallFunc_GetGamepadInverted_bInvertVertical, bool CallFunc_GetGamepadInverted_bInvertHorizontal, bool CallFunc_GetGamepadInverted_ReturnValue, bool CallFunc_LoadToggleADS_ToggleADS, bool CallFunc_LoadToggleADS_ReturnValue, double CallFunc_SetFloatValue_NewValue_11, double CallFunc_SetFloatValue_NewValue_12, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_2, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_3, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_4, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_5, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_6, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_7, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_8, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_9, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_10, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_11, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "PopulateGamepadControls_0");

	Params::UW_Options_GamepadOptions_UE5_C_PopulateGamepadControls_0_Params Parms{};

	Parms.CallFunc_GetForceFeedbackEnabled_ForceFeedbackEnabled = CallFunc_GetForceFeedbackEnabled_ForceFeedbackEnabled;
	Parms.CallFunc_GetForceFeedbackEnabled_ReturnValue = CallFunc_GetForceFeedbackEnabled_ReturnValue;
	Parms.CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick = CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick;
	Parms.CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue = CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue;
	Parms.CallFunc_LoadPS5AdaptiveAimTriggers_PS5AdaptiveAimTriggers = CallFunc_LoadPS5AdaptiveAimTriggers_PS5AdaptiveAimTriggers;
	Parms.CallFunc_LoadPS5AdaptiveAimTriggers_ReturnValue = CallFunc_LoadPS5AdaptiveAimTriggers_ReturnValue;
	Parms.CallFunc_LoadPS5AdaptiveFireTriggers_PS5AdaptiveFireTriggers = CallFunc_LoadPS5AdaptiveFireTriggers_PS5AdaptiveFireTriggers;
	Parms.CallFunc_LoadPS5AdaptiveFireTriggers_ReturnValue = CallFunc_LoadPS5AdaptiveFireTriggers_ReturnValue;
	Parms.CallFunc_GetGyroActiveMode_GyroActiveMode = CallFunc_GetGyroActiveMode_GyroActiveMode;
	Parms.CallFunc_GetGyroActiveMode_ReturnValue = CallFunc_GetGyroActiveMode_ReturnValue;
	Parms.CallFunc_GetGyroInverted_bInvertGyroVertical = CallFunc_GetGyroInverted_bInvertGyroVertical;
	Parms.CallFunc_GetGyroInverted_bInvertGyroHorizontal = CallFunc_GetGyroInverted_bInvertGyroHorizontal;
	Parms.CallFunc_GetGyroInverted_ReturnValue = CallFunc_GetGyroInverted_ReturnValue;
	Parms.CallFunc_SetActiveByString_Success = CallFunc_SetActiveByString_Success;
	Parms.CallFunc_GetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity = CallFunc_GetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity;
	Parms.CallFunc_GetGyroHorizontalAimSensitivity_ReturnValue = CallFunc_GetGyroHorizontalAimSensitivity_ReturnValue;
	Parms.CallFunc_GetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity = CallFunc_GetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity;
	Parms.CallFunc_GetGyroVerticalAimSensitivity_ReturnValue = CallFunc_GetGyroVerticalAimSensitivity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_GetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity = CallFunc_GetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity;
	Parms.CallFunc_GetGyroHorizontalLookSensitivity_ReturnValue = CallFunc_GetGyroHorizontalLookSensitivity_ReturnValue;
	Parms.CallFunc_GetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity = CallFunc_GetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity;
	Parms.CallFunc_GetGyroVerticalLookSensitivity_ReturnValue = CallFunc_GetGyroVerticalLookSensitivity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_GetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp = CallFunc_GetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp;
	Parms.CallFunc_GetGamepadLookSensitivitySpeedUp_ReturnValue = CallFunc_GetGamepadLookSensitivitySpeedUp_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout = CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout;
	Parms.CallFunc_GetGamepadInvertButtonLayout_ReturnValue = CallFunc_GetGamepadInvertButtonLayout_ReturnValue;
	Parms.CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout = CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout;
	Parms.CallFunc_GetGamepadInvertStickLayout_ReturnValue = CallFunc_GetGamepadInvertStickLayout_ReturnValue;
	Parms.CallFunc_GetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone = CallFunc_GetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone;
	Parms.CallFunc_GetGamepadLookInnerDeadzone_ReturnValue = CallFunc_GetGamepadLookInnerDeadzone_ReturnValue;
	Parms.CallFunc_GetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone = CallFunc_GetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone;
	Parms.CallFunc_GetGamepadMovementInnerDeadzone_ReturnValue = CallFunc_GetGamepadMovementInnerDeadzone_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;
	Parms.CallFunc_SetFloatValue_NewValue_6 = CallFunc_SetFloatValue_NewValue_6;
	Parms.CallFunc_GetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal = CallFunc_GetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal;
	Parms.CallFunc_GetGamepadAimSensitivityHorizontal_ReturnValue = CallFunc_GetGamepadAimSensitivityHorizontal_ReturnValue;
	Parms.CallFunc_GetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical = CallFunc_GetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical;
	Parms.CallFunc_GetGamepadAimSensitivityVertical_ReturnValue = CallFunc_GetGamepadAimSensitivityVertical_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_7 = CallFunc_SetFloatValue_NewValue_7;
	Parms.CallFunc_GetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal = CallFunc_GetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal;
	Parms.CallFunc_GetGamepadLookSensitivityHorizontal_ReturnValue = CallFunc_GetGamepadLookSensitivityHorizontal_ReturnValue;
	Parms.CallFunc_GetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical = CallFunc_GetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical;
	Parms.CallFunc_GetGamepadLookSensitivityVertical_ReturnValue = CallFunc_GetGamepadLookSensitivityVertical_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_8 = CallFunc_SetFloatValue_NewValue_8;
	Parms.CallFunc_GetGamepadAimAssistIntensity_AimAssistIntensity = CallFunc_GetGamepadAimAssistIntensity_AimAssistIntensity;
	Parms.CallFunc_GetGamepadAimAssistIntensity_ReturnValue = CallFunc_GetGamepadAimAssistIntensity_ReturnValue;
	Parms.CallFunc_SetActiveByString_Success_1 = CallFunc_SetActiveByString_Success_1;
	Parms.CallFunc_GetForceFeedbackIntensity_ForceFeedbackIntensity = CallFunc_GetForceFeedbackIntensity_ForceFeedbackIntensity;
	Parms.CallFunc_GetForceFeedbackIntensity_ReturnValue = CallFunc_GetForceFeedbackIntensity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_9 = CallFunc_SetFloatValue_NewValue_9;
	Parms.CallFunc_GetSpeakerIntensity_SpeakerIntensity = CallFunc_GetSpeakerIntensity_SpeakerIntensity;
	Parms.CallFunc_GetSpeakerIntensity_ReturnValue = CallFunc_GetSpeakerIntensity_ReturnValue;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout = CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_ReturnValue = CallFunc_GetGamepadInvertTriggersLayout_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_10 = CallFunc_SetFloatValue_NewValue_10;
	Parms.CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro = CallFunc_LoadTogglePS5Gyro_TogglePS5Gyro;
	Parms.CallFunc_LoadTogglePS5Gyro_ReturnValue = CallFunc_LoadTogglePS5Gyro_ReturnValue;
	Parms.CallFunc_LoadHoldCrouch_HoldCrouch = CallFunc_LoadHoldCrouch_HoldCrouch;
	Parms.CallFunc_LoadHoldCrouch_ReturnValue = CallFunc_LoadHoldCrouch_ReturnValue;
	Parms.CallFunc_GetGamepadInverted_bInvertVertical = CallFunc_GetGamepadInverted_bInvertVertical;
	Parms.CallFunc_GetGamepadInverted_bInvertHorizontal = CallFunc_GetGamepadInverted_bInvertHorizontal;
	Parms.CallFunc_GetGamepadInverted_ReturnValue = CallFunc_GetGamepadInverted_ReturnValue;
	Parms.CallFunc_LoadToggleADS_ToggleADS = CallFunc_LoadToggleADS_ToggleADS;
	Parms.CallFunc_LoadToggleADS_ReturnValue = CallFunc_LoadToggleADS_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_11 = CallFunc_SetFloatValue_NewValue_11;
	Parms.CallFunc_SetFloatValue_NewValue_12 = CallFunc_SetFloatValue_NewValue_12;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_2 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_2;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_3 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_3;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_4 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_4;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_5 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_5;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_6 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_6;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_7 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_7;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_8 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_8;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_9 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_9;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_10 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_10;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_11 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_11;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_12 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_ToggleADS_K2Node_ComponentBoundEvent_72_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_73_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_LookSensitivity_K2Node_ComponentBoundEvent_85_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_Gamepad_AimSensitivity_K2Node_ComponentBoundEvent_88_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_TogglePS5Gyro_K2Node_ComponentBoundEvent_59_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_W_CommonCarousel_K2Node_ComponentBoundEvent_61_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_W_CommonCarousel_K2Node_ComponentBoundEvent_61_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_W_CommonCarousel_K2Node_ComponentBoundEvent_61_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_W_CommonCarousel_K2Node_ComponentBoundEvent_61_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadOptions_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertHorizontal_K2Node_ComponentBoundEvent_71_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadOptions_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5AdaptiveTrigger_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5AdaptiveTrigger_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5AdaptiveTrigger_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5AdaptiveTrigger_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_5_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_K2Node_ComponentBoundEvent_6_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_1_K2Node_ComponentBoundEvent_7_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_1_K2Node_ComponentBoundEvent_7_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_1_K2Node_ComponentBoundEvent_7_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertLookSensitivity_1_K2Node_ComponentBoundEvent_7_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertADSSensitivity_K2Node_ComponentBoundEvent_8_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertADSSensitivity_K2Node_ComponentBoundEvent_8_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertADSSensitivity_K2Node_ComponentBoundEvent_8_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroVertADSSensitivity_K2Node_ComponentBoundEvent_8_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroHorizontalADSSensitivity_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroHorizontalADSSensitivity_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroHorizontalADSSensitivity_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_GyroHorizontalADSSensitivity_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertVertGyro_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertVertGyro_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertVertGyro_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertVertGyro_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertHorizontalGyro_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertHorizontalGyro_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertHorizontalGyro_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_InvertHorizontalGyro_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_SettingsMenuGamepad_Controls_OnOff_InvertVertical_K2Node_ComponentBoundEvent_70_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivityHorizontal_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivityHorizontal_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivityHorizontal_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivityHorizontal_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_AimSensitivityHorizontal_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_AimSensitivityHorizontal_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_AimSensitivityHorizontal_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_AimSensitivityHorizontal_K2Node_ComponentBoundEvent_13_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivitySpeedUp_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivitySpeedUp_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivitySpeedUp_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookSensitivitySpeedUp_K2Node_ComponentBoundEvent_14_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_MovementInnerDeadzone_K2Node_ComponentBoundEvent_18_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_MovementInnerDeadzone_K2Node_ComponentBoundEvent_18_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_MovementInnerDeadzone_K2Node_ComponentBoundEvent_18_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_MovementInnerDeadzone_K2Node_ComponentBoundEvent_18_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_InputMethodListener_K2Node_ComponentBoundEvent_20_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_InputMethodListener_K2Node_ComponentBoundEvent_20_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_InputMethodListener_K2Node_ComponentBoundEvent_20_OnInputMethodChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_InputMethodListener_K2Node_ComponentBoundEvent_20_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookInnerDeadzone_K2Node_ComponentBoundEvent_22_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookInnerDeadzone_K2Node_ComponentBoundEvent_22_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookInnerDeadzone_K2Node_ComponentBoundEvent_22_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_LookInnerDeadzone_K2Node_ComponentBoundEvent_22_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.ResetDefaultsGamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_GamepadOptions_UE5_C::ResetDefaultsGamepad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "ResetDefaultsGamepad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5ADSAdaptiveTrigger_K2Node_ComponentBoundEvent_19_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5ADSAdaptiveTrigger_K2Node_ComponentBoundEvent_19_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5ADSAdaptiveTrigger_K2Node_ComponentBoundEvent_19_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_TogglePS5ADSAdaptiveTrigger_K2Node_ComponentBoundEvent_19_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_W_OnOffButton_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_W_OnOffButton_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_W_OnOffButton_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_W_OnOffButton_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_ForceFeedbackSlider_K2Node_ComponentBoundEvent_16_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_ForceFeedbackSlider_K2Node_ComponentBoundEvent_16_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_ForceFeedbackSlider_K2Node_ComponentBoundEvent_16_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_ForceFeedbackSlider_K2Node_ComponentBoundEvent_16_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.UpdateDescriptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_GamepadOptions_UE5_C::UpdateDescriptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "UpdateDescriptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_Volume_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_Volume_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_Volume_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_GamepadOptions_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_Gamepad_Volume_K2Node_ComponentBoundEvent_0_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadOptions_UE5.W_Options_GamepadOptions_UE5_C.ExecuteUbergraph_W_Options_GamepadOptions_UE5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_bInvertVertical                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_bInvertHorizontal                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadLookSensitivityVertical_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadAimSensitivityVertical_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveTogglePS5Gyro_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadAimAssistIntensity_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInverted_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertButtonLayout_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertStickLayout_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroActiveMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroVerticalLookSensitivity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroHorizontalLookSensitivity_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroVerticalAimSensitivity_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroHorizontalAimSensitivity_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInverted_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadLookSensitivityHorizontal_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadAimSensitivityHorizontal_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadLookSensitivitySpeedUp_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadMovementInnerDeadzone_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadLookInnerDeadzone_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_bInvertGyroVertical                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_bInvertGyroHorizontal                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGyroInverted_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroInverted_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGyroInverted_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetForceFeedbackEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveToggleADS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetForceFeedbackIntensity_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertTriggersLayout_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_SetSpeakerIntensity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_SetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadOptions_UE5_C::ExecuteUbergraph_W_Options_GamepadOptions_UE5(int32 EntryPoint, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_GetGamepadInverted_bInvertVertical, bool CallFunc_GetGamepadInverted_bInvertHorizontal, bool CallFunc_GetGamepadInverted_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_12, double K2Node_ComponentBoundEvent_NewSliderValue_12, double K2Node_ComponentBoundEvent_NewFloatValue_11, double K2Node_ComponentBoundEvent_NewSliderValue_11, bool CallFunc_SetGamepadLookSensitivityVertical_ReturnValue, bool CallFunc_SetGamepadAimSensitivityVertical_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_11, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, bool CallFunc_SaveTogglePS5Gyro_ReturnValue, bool CallFunc_SetGamepadAimAssistIntensity_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_10, bool CallFunc_SetGamepadInverted_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_2, bool K2Node_ComponentBoundEvent_bNewCheckState_9, bool CallFunc_SetGamepadInvertButtonLayout_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_8, bool CallFunc_SetGamepadInvertStickLayout_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_7, bool CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, double K2Node_ComponentBoundEvent_NewFloatValue_10, double K2Node_ComponentBoundEvent_NewSliderValue_10, bool CallFunc_SetGyroActiveMode_ReturnValue, bool CallFunc_SetGyroVerticalLookSensitivity_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_9, double K2Node_ComponentBoundEvent_NewSliderValue_9, double K2Node_ComponentBoundEvent_NewFloatValue_8, double K2Node_ComponentBoundEvent_NewSliderValue_8, bool CallFunc_SetGyroHorizontalLookSensitivity_ReturnValue, bool CallFunc_SetGyroVerticalAimSensitivity_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_7, double K2Node_ComponentBoundEvent_NewSliderValue_7, bool K2Node_ComponentBoundEvent_bNewCheckState_6, bool CallFunc_SetGyroHorizontalAimSensitivity_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_5, bool K2Node_ComponentBoundEvent_bNewCheckState_4, bool CallFunc_SetGamepadInverted_ReturnValue_1, double K2Node_ComponentBoundEvent_NewFloatValue_6, double K2Node_ComponentBoundEvent_NewSliderValue_6, double K2Node_ComponentBoundEvent_NewFloatValue_5, double K2Node_ComponentBoundEvent_NewSliderValue_5, bool CallFunc_SetGamepadLookSensitivityHorizontal_ReturnValue, bool CallFunc_SetGamepadAimSensitivityHorizontal_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_4, double K2Node_ComponentBoundEvent_NewSliderValue_4, double K2Node_ComponentBoundEvent_NewFloatValue_3, double K2Node_ComponentBoundEvent_NewSliderValue_3, bool CallFunc_SetGamepadLookSensitivitySpeedUp_ReturnValue, bool CallFunc_SetGamepadMovementInnerDeadzone_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, double K2Node_ComponentBoundEvent_NewFloatValue_2, double K2Node_ComponentBoundEvent_NewSliderValue_2, bool CallFunc_SetGamepadLookInnerDeadzone_ReturnValue, bool CallFunc_GetGyroInverted_bInvertGyroVertical, bool CallFunc_GetGyroInverted_bInvertGyroHorizontal, bool CallFunc_GetGyroInverted_ReturnValue, bool CallFunc_SetGyroInverted_ReturnValue, bool CallFunc_SetGyroInverted_ReturnValue_1, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_3, bool CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool CallFunc_SetForceFeedbackEnabled_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_12, bool K2Node_ComponentBoundEvent_bNewCheckState_13, bool CallFunc_SaveHoldCrouch_ReturnValue, bool CallFunc_SaveToggleADS_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_SetForceFeedbackIntensity_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_4, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool CallFunc_SetGamepadInvertTriggersLayout_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue, bool CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue, bool CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue_1, bool CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout, bool CallFunc_GetGamepadInvertTriggersLayout_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_SetSpeakerIntensity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_SelectString_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_SetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical_ImplicitCast, float CallFunc_SetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical_ImplicitCast, float CallFunc_SetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity_ImplicitCast, float CallFunc_SetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity_ImplicitCast, float CallFunc_SetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity_ImplicitCast, float CallFunc_SetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity_ImplicitCast, float CallFunc_SetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal_ImplicitCast, float CallFunc_SetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal_ImplicitCast, float CallFunc_SetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp_ImplicitCast, float CallFunc_SetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone_ImplicitCast, float CallFunc_SetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone_ImplicitCast, float CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast, float CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast_1, float CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast, float CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadOptions_UE5_C", "ExecuteUbergraph_W_Options_GamepadOptions_UE5");

	Params::UW_Options_GamepadOptions_UE5_C_ExecuteUbergraph_W_Options_GamepadOptions_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetGamepadInverted_bInvertVertical = CallFunc_GetGamepadInverted_bInvertVertical;
	Parms.CallFunc_GetGamepadInverted_bInvertHorizontal = CallFunc_GetGamepadInverted_bInvertHorizontal;
	Parms.CallFunc_GetGamepadInverted_ReturnValue = CallFunc_GetGamepadInverted_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_12 = K2Node_ComponentBoundEvent_NewFloatValue_12;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_12 = K2Node_ComponentBoundEvent_NewSliderValue_12;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_11 = K2Node_ComponentBoundEvent_NewFloatValue_11;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_11 = K2Node_ComponentBoundEvent_NewSliderValue_11;
	Parms.CallFunc_SetGamepadLookSensitivityVertical_ReturnValue = CallFunc_SetGamepadLookSensitivityVertical_ReturnValue;
	Parms.CallFunc_SetGamepadAimSensitivityVertical_ReturnValue = CallFunc_SetGamepadAimSensitivityVertical_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_11 = K2Node_ComponentBoundEvent_bNewCheckState_11;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_SaveTogglePS5Gyro_ReturnValue = CallFunc_SaveTogglePS5Gyro_ReturnValue;
	Parms.CallFunc_SetGamepadAimAssistIntensity_ReturnValue = CallFunc_SetGamepadAimAssistIntensity_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_10 = K2Node_ComponentBoundEvent_bNewCheckState_10;
	Parms.CallFunc_SetGamepadInverted_ReturnValue = CallFunc_SetGamepadInverted_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_2 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_9 = K2Node_ComponentBoundEvent_bNewCheckState_9;
	Parms.CallFunc_SetGamepadInvertButtonLayout_ReturnValue = CallFunc_SetGamepadInvertButtonLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_8 = K2Node_ComponentBoundEvent_bNewCheckState_8;
	Parms.CallFunc_SetGamepadInvertStickLayout_ReturnValue = CallFunc_SetGamepadInvertStickLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_7 = K2Node_ComponentBoundEvent_bNewCheckState_7;
	Parms.CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue = CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_10 = K2Node_ComponentBoundEvent_NewFloatValue_10;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_10 = K2Node_ComponentBoundEvent_NewSliderValue_10;
	Parms.CallFunc_SetGyroActiveMode_ReturnValue = CallFunc_SetGyroActiveMode_ReturnValue;
	Parms.CallFunc_SetGyroVerticalLookSensitivity_ReturnValue = CallFunc_SetGyroVerticalLookSensitivity_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_9 = K2Node_ComponentBoundEvent_NewFloatValue_9;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_9 = K2Node_ComponentBoundEvent_NewSliderValue_9;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_8 = K2Node_ComponentBoundEvent_NewFloatValue_8;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_8 = K2Node_ComponentBoundEvent_NewSliderValue_8;
	Parms.CallFunc_SetGyroHorizontalLookSensitivity_ReturnValue = CallFunc_SetGyroHorizontalLookSensitivity_ReturnValue;
	Parms.CallFunc_SetGyroVerticalAimSensitivity_ReturnValue = CallFunc_SetGyroVerticalAimSensitivity_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_7 = K2Node_ComponentBoundEvent_NewFloatValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_7 = K2Node_ComponentBoundEvent_NewSliderValue_7;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_6 = K2Node_ComponentBoundEvent_bNewCheckState_6;
	Parms.CallFunc_SetGyroHorizontalAimSensitivity_ReturnValue = CallFunc_SetGyroHorizontalAimSensitivity_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_5 = K2Node_ComponentBoundEvent_bNewCheckState_5;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.CallFunc_SetGamepadInverted_ReturnValue_1 = CallFunc_SetGamepadInverted_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_6 = K2Node_ComponentBoundEvent_NewFloatValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_6 = K2Node_ComponentBoundEvent_NewSliderValue_6;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_5 = K2Node_ComponentBoundEvent_NewFloatValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_5 = K2Node_ComponentBoundEvent_NewSliderValue_5;
	Parms.CallFunc_SetGamepadLookSensitivityHorizontal_ReturnValue = CallFunc_SetGamepadLookSensitivityHorizontal_ReturnValue;
	Parms.CallFunc_SetGamepadAimSensitivityHorizontal_ReturnValue = CallFunc_SetGamepadAimSensitivityHorizontal_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_4 = K2Node_ComponentBoundEvent_NewFloatValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_4 = K2Node_ComponentBoundEvent_NewSliderValue_4;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_3 = K2Node_ComponentBoundEvent_NewFloatValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_3 = K2Node_ComponentBoundEvent_NewSliderValue_3;
	Parms.CallFunc_SetGamepadLookSensitivitySpeedUp_ReturnValue = CallFunc_SetGamepadLookSensitivitySpeedUp_ReturnValue;
	Parms.CallFunc_SetGamepadMovementInnerDeadzone_ReturnValue = CallFunc_SetGamepadMovementInnerDeadzone_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_2 = K2Node_ComponentBoundEvent_NewFloatValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_2 = K2Node_ComponentBoundEvent_NewSliderValue_2;
	Parms.CallFunc_SetGamepadLookInnerDeadzone_ReturnValue = CallFunc_SetGamepadLookInnerDeadzone_ReturnValue;
	Parms.CallFunc_GetGyroInverted_bInvertGyroVertical = CallFunc_GetGyroInverted_bInvertGyroVertical;
	Parms.CallFunc_GetGyroInverted_bInvertGyroHorizontal = CallFunc_GetGyroInverted_bInvertGyroHorizontal;
	Parms.CallFunc_GetGyroInverted_ReturnValue = CallFunc_GetGyroInverted_ReturnValue;
	Parms.CallFunc_SetGyroInverted_ReturnValue = CallFunc_SetGyroInverted_ReturnValue;
	Parms.CallFunc_SetGyroInverted_ReturnValue_1 = CallFunc_SetGyroInverted_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue = CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.CallFunc_SetForceFeedbackEnabled_ReturnValue = CallFunc_SetForceFeedbackEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_12 = K2Node_ComponentBoundEvent_bNewCheckState_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_13 = K2Node_ComponentBoundEvent_bNewCheckState_13;
	Parms.CallFunc_SaveHoldCrouch_ReturnValue = CallFunc_SaveHoldCrouch_ReturnValue;
	Parms.CallFunc_SaveToggleADS_ReturnValue = CallFunc_SaveToggleADS_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_3 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_SetForceFeedbackIntensity_ReturnValue = CallFunc_SetForceFeedbackIntensity_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_4 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_SetGamepadInvertTriggersLayout_ReturnValue = CallFunc_SetGamepadInvertTriggersLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue = CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue;
	Parms.CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue = CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue;
	Parms.CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue_1 = CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue_1;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout = CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_ReturnValue = CallFunc_GetGamepadInvertTriggersLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SetSpeakerIntensity_ReturnValue = CallFunc_SetSpeakerIntensity_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical_ImplicitCast = CallFunc_SetGamepadLookSensitivityVertical_GamepadLookSensitivityVertical_ImplicitCast;
	Parms.CallFunc_SetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical_ImplicitCast = CallFunc_SetGamepadAimSensitivityVertical_GamepadAimSensitivityVertical_ImplicitCast;
	Parms.CallFunc_SetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity_ImplicitCast = CallFunc_SetGyroVerticalLookSensitivity_GyroVerticalLookSensitivity_ImplicitCast;
	Parms.CallFunc_SetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity_ImplicitCast = CallFunc_SetGyroHorizontalLookSensitivity_GyroHorizontalLookSensitivity_ImplicitCast;
	Parms.CallFunc_SetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity_ImplicitCast = CallFunc_SetGyroVerticalAimSensitivity_GyroVerticalAimSensitivity_ImplicitCast;
	Parms.CallFunc_SetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity_ImplicitCast = CallFunc_SetGyroHorizontalAimSensitivity_GyroHorizontalAimSensitivity_ImplicitCast;
	Parms.CallFunc_SetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal_ImplicitCast = CallFunc_SetGamepadLookSensitivityHorizontal_GamepadLookSensitivityHorizontal_ImplicitCast;
	Parms.CallFunc_SetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal_ImplicitCast = CallFunc_SetGamepadAimSensitivityHorizontal_GamepadAimSensitivityHorizontal_ImplicitCast;
	Parms.CallFunc_SetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp_ImplicitCast = CallFunc_SetGamepadLookSensitivitySpeedUp_GamepadLookSensitivitySpeedUp_ImplicitCast;
	Parms.CallFunc_SetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone_ImplicitCast = CallFunc_SetGamepadMovementInnerDeadzone_GamepadMovementInnerDeadzone_ImplicitCast;
	Parms.CallFunc_SetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone_ImplicitCast = CallFunc_SetGamepadLookInnerDeadzone_GamepadLookInnerDeadzone_ImplicitCast;
	Parms.CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast = CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast;
	Parms.CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast_1 = CallFunc_SetForceFeedbackIntensity_ForceFeedbackIntensity_ImplicitCast_1;
	Parms.CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast = CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast;
	Parms.CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast_1 = CallFunc_SetSpeakerIntensity_SpeakerIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


