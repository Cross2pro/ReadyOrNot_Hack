#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasePlayer.BasePlayer_C
// (Actor, Pawn)

class UClass* ABasePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePlayer_C");

	return Clss;
}


// BasePlayer_C BasePlayer.Default__BasePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasePlayer_C* ABasePlayer_C::GetDefaultObj()
{
	static class ABasePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasePlayer_C*>(ABasePlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasePlayer.BasePlayer_C.GetTabletZoomFOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegTan_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegAtan_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::GetTabletZoomFOV(double* FOV, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_DegTan_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegAtan_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "GetTabletZoomFOV");

	Params::ABasePlayer_C_GetTabletZoomFOV_Params Parms{};

	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_DegTan_ReturnValue = CallFunc_DegTan_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_DegAtan_ReturnValue = CallFunc_DegAtan_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function BasePlayer.BasePlayer_C.AddFirstPersonShakeFromSuppression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Strength                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::AddFirstPersonShakeFromSuppression(double Strength, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "AddFirstPersonShakeFromSuppression");

	Params::ABasePlayer_C_AddFirstPersonShakeFromSuppression_Params Parms{};

	Parms.Strength = Strength;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.UpdateFirstPersonShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FirstPersonShakeAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::UpdateFirstPersonShake(double DeltaSeconds, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsSprinting_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, float K2Node_VariableSet_FirstPersonShakeAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "UpdateFirstPersonShake");

	Params::ABasePlayer_C_UpdateFirstPersonShake_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.K2Node_VariableSet_FirstPersonShakeAmount_ImplicitCast = K2Node_VariableSet_FirstPersonShakeAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_F1_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_F1_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_F1_K2Node_InputKeyEvent_2");

	Params::ABasePlayer_C_InpActEvt_F1_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_F2_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_F2_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_F2_K2Node_InputKeyEvent_1");

	Params::ABasePlayer_C_InpActEvt_F2_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_F3_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_F3_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_F3_K2Node_InputKeyEvent_0");

	Params::ABasePlayer_C_InpActEvt_F3_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_4");

	Params::ABasePlayer_C_InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_4_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_3");

	Params::ABasePlayer_C_InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_3_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_2");

	Params::ABasePlayer_C_InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_2_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_1");

	Params::ABasePlayer_C_InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_1_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TriggeredTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                SourceAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_0");

	Params::ABasePlayer_C_InpActEvt_IA_AimDownSights_K2Node_EnhancedInputActionEvent_0_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.OnJumpStart
// (Event, Public, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnJumpStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnJumpStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnJumpLand
// (Event, Public, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnJumpLand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnJumpLand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnKilledOrGoneUnconciousBP
// (Event, Public, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnKilledOrGoneUnconciousBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnKilledOrGoneUnconciousBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.ToggleTabletCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::ToggleTabletCursor(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "ToggleTabletCursor");

	Params::ABasePlayer_C_ToggleTabletCursor_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.PlayVaultAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     Ledge                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LedgeWallNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LedgeTraceDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LedgeZ                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELedgeWidth             LedgeWidth                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELedgeHeight            LedgeHeight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::PlayVaultAnimation(const struct FVector& Ledge, const struct FVector& LedgeWallNormal, const struct FVector& LedgeTraceDown, float LedgeZ, enum class ELedgeWidth LedgeWidth, enum class ELedgeHeight LedgeHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "PlayVaultAnimation");

	Params::ABasePlayer_C_PlayVaultAnimation_Params Parms{};

	Parms.Ledge = Ledge;
	Parms.LedgeWallNormal = LedgeWallNormal;
	Parms.LedgeTraceDown = LedgeTraceDown;
	Parms.LedgeZ = LedgeZ;
	Parms.LedgeWidth = LedgeWidth;
	Parms.LedgeHeight = LedgeHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "K2_OnEndCrouch");

	Params::ABasePlayer_C_K2_OnEndCrouch_Params Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "K2_OnStartCrouch");

	Params::ABasePlayer_C_K2_OnStartCrouch_Params Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.OnTurn
// (Event, Public, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnTurn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnTurn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnLeanStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnLeanStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnLeanStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.FocusTablet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePlayer_C::FocusTablet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "FocusTablet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnLeanEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnLeanEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnLeanEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnSupression
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Strength                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::OnSupression(float Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnSupression");

	Params::ABasePlayer_C_OnSupression_Params Parms{};

	Parms.Strength = Strength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "ReceiveTick");

	Params::ABasePlayer_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.OnBulletImpact
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DirectionForward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DirectionRight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::OnBulletImpact(float DirectionForward, float DirectionRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnBulletImpact");

	Params::ABasePlayer_C_OnBulletImpact_Params Parms{};

	Parms.DirectionForward = DirectionForward;
	Parms.DirectionRight = DirectionRight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.ExecuteUbergraph_BasePlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_2                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_2                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_1                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_1                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue                      (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ledge                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ledgeWallNormal                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ledgeTraceDown                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ledgeZ                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELedgeWidth             K2Node_Event_ledgeWidth                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELedgeHeight            K2Node_Event_ledgeHeight                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_3                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_3                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Strength                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue_4                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// float                              K2Node_Event_DirectionForward                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DirectionRight                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue           K2Node_EnhancedInputActionEvent_ActionValue_4                    (NoDestructor)
// float                              K2Node_EnhancedInputActionEvent_ElapsedTime_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_EnhancedInputActionEvent_TriggeredTime_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_EnhancedInputActionEvent_SourceAction_4                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_InputActionValueToBool_ReturnValue_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AddFirstPersonShakeFromSuppression_Strength_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateFirstPersonShake_DeltaSeconds_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasePlayer_C::ExecuteUbergraph_BasePlayer(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1, double Temp_real_Variable_1, double Temp_real_Variable_1, bool CallFunc_IsLocalPlayer_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsLocalPlayer_ReturnValue_1, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_1, bool CallFunc_IsLocalPlayer_ReturnValue_2, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, bool K2Node_CustomEvent_Active, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FVector& K2Node_Event_ledge, const struct FVector& K2Node_Event_ledgeWallNormal, const struct FVector& K2Node_Event_ledgeTraceDown, float K2Node_Event_ledgeZ, enum class ELedgeWidth K2Node_Event_ledgeWidth, enum class ELedgeHeight K2Node_Event_ledgeHeight, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_4, bool Temp_bool_IsClosed_Variable_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_5, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsLocalPlayer_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_Event_Strength, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue_4, bool CallFunc_IsLocalPlayer_ReturnValue_4, const struct FKey& K2Node_InputKeyEvent_Key, float K2Node_Event_DeltaSeconds, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_2, float K2Node_Event_DirectionForward, float K2Node_Event_DirectionRight, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, double Temp_real_Variable, double Temp_real_Variable_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_AddFirstPersonShakeFromSuppression_Strength_ImplicitCast, double CallFunc_UpdateFirstPersonShake_DeltaSeconds_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "ExecuteUbergraph_BasePlayer");

	Params::ABasePlayer_C_ExecuteUbergraph_BasePlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_2 = K2Node_EnhancedInputActionEvent_ActionValue_2;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_2 = K2Node_EnhancedInputActionEvent_ElapsedTime_2;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_2 = K2Node_EnhancedInputActionEvent_TriggeredTime_2;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_2 = K2Node_EnhancedInputActionEvent_SourceAction_2;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_1 = K2Node_EnhancedInputActionEvent_ActionValue_1;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_1 = K2Node_EnhancedInputActionEvent_ElapsedTime_1;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_1 = K2Node_EnhancedInputActionEvent_TriggeredTime_1;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_1 = K2Node_EnhancedInputActionEvent_SourceAction_1;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = K2Node_EnhancedInputActionEvent_ActionValue;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_1 = CallFunc_Conv_InputActionValueToBool_ReturnValue_1;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_2 = CallFunc_Conv_InputActionValueToBool_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsLocalPlayer_ReturnValue_1 = CallFunc_IsLocalPlayer_ReturnValue_1;
	Parms.CallFunc_PlayEventAttached_ReturnValue_1 = CallFunc_PlayEventAttached_ReturnValue_1;
	Parms.CallFunc_IsLocalPlayer_ReturnValue_2 = CallFunc_IsLocalPlayer_ReturnValue_2;
	Parms.CallFunc_PlayEventAttached_ReturnValue_2 = CallFunc_PlayEventAttached_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue_1 = CallFunc_Conv_VectorToTransform_ReturnValue_1;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue_1 = CallFunc_PlayEventAtLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ledge = K2Node_Event_ledge;
	Parms.K2Node_Event_ledgeWallNormal = K2Node_Event_ledgeWallNormal;
	Parms.K2Node_Event_ledgeTraceDown = K2Node_Event_ledgeTraceDown;
	Parms.K2Node_Event_ledgeZ = K2Node_Event_ledgeZ;
	Parms.K2Node_Event_ledgeWidth = K2Node_Event_ledgeWidth;
	Parms.K2Node_Event_ledgeHeight = K2Node_Event_ledgeHeight;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue_3 = CallFunc_PlayEvent2D_ReturnValue_3;
	Parms.CallFunc_PlayEvent2D_ReturnValue_4 = CallFunc_PlayEvent2D_ReturnValue_4;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_5 = CallFunc_PlayEvent2D_ReturnValue_5;
	Parms.CallFunc_PlayEventAttached_ReturnValue_3 = CallFunc_PlayEventAttached_ReturnValue_3;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_3 = K2Node_EnhancedInputActionEvent_ActionValue_3;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_3 = K2Node_EnhancedInputActionEvent_ElapsedTime_3;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_3 = K2Node_EnhancedInputActionEvent_TriggeredTime_3;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_3 = K2Node_EnhancedInputActionEvent_SourceAction_3;
	Parms.K2Node_Event_HalfHeightAdjust_1 = K2Node_Event_HalfHeightAdjust_1;
	Parms.K2Node_Event_ScaledHalfHeightAdjust_1 = K2Node_Event_ScaledHalfHeightAdjust_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_3 = CallFunc_Conv_InputActionValueToBool_ReturnValue_3;
	Parms.K2Node_Event_HalfHeightAdjust = K2Node_Event_HalfHeightAdjust;
	Parms.K2Node_Event_ScaledHalfHeightAdjust = K2Node_Event_ScaledHalfHeightAdjust;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_IsLocalPlayer_ReturnValue_3 = CallFunc_IsLocalPlayer_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_Strength = K2Node_Event_Strength;
	Parms.CallFunc_PlayEventAttached_ReturnValue_4 = CallFunc_PlayEventAttached_ReturnValue_4;
	Parms.CallFunc_IsLocalPlayer_ReturnValue_4 = CallFunc_IsLocalPlayer_ReturnValue_4;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_Event_DirectionForward = K2Node_Event_DirectionForward;
	Parms.K2Node_Event_DirectionRight = K2Node_Event_DirectionRight;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_4 = K2Node_EnhancedInputActionEvent_ActionValue_4;
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_4 = K2Node_EnhancedInputActionEvent_ElapsedTime_4;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_4 = K2Node_EnhancedInputActionEvent_TriggeredTime_4;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_4 = K2Node_EnhancedInputActionEvent_SourceAction_4;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_4 = CallFunc_Conv_InputActionValueToBool_ReturnValue_4;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_AddFirstPersonShakeFromSuppression_Strength_ImplicitCast = CallFunc_AddFirstPersonShakeFromSuppression_Strength_ImplicitCast;
	Parms.CallFunc_UpdateFirstPersonShake_DeltaSeconds_ImplicitCast = CallFunc_UpdateFirstPersonShake_DeltaSeconds_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasePlayer.BasePlayer_C.OnCrouchEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnCrouchEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnCrouchEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasePlayer.BasePlayer_C.OnCrouchStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasePlayer_C::OnCrouchStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasePlayer_C", "OnCrouchStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


