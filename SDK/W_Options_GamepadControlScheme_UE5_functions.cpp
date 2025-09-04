#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C
// (None)

class UClass* UW_Options_GamepadControlScheme_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_GamepadControlScheme_UE5_C");

	return Clss;
}


// W_Options_GamepadControlScheme_UE5_C W_Options_GamepadControlScheme_UE5.Default__W_Options_GamepadControlScheme_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_GamepadControlScheme_UE5_C* UW_Options_GamepadControlScheme_UE5_C::GetDefaultObj()
{
	static class UW_Options_GamepadControlScheme_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_GamepadControlScheme_UE5_C*>(UW_Options_GamepadControlScheme_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.Reset to Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::Reset_to_Default(class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "Reset to Default");

	Params::UW_Options_GamepadControlScheme_UE5_C_Reset_to_Default_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.Populate Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHoldCrouch_HoldCrouch                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertStickLayout_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertButtonLayout_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadInvertTriggersLayout_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::Populate_Settings(bool CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers, bool CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue, bool CallFunc_LoadHoldCrouch_HoldCrouch, bool CallFunc_LoadHoldCrouch_ReturnValue, bool CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout, bool CallFunc_GetGamepadInvertStickLayout_ReturnValue, bool CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout, bool CallFunc_GetGamepadInvertButtonLayout_ReturnValue, bool CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout, bool CallFunc_GetGamepadInvertTriggersLayout_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "Populate Settings");

	Params::UW_Options_GamepadControlScheme_UE5_C_Populate_Settings_Params Parms{};

	Parms.CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers = CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers;
	Parms.CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue = CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue;
	Parms.CallFunc_LoadHoldCrouch_HoldCrouch = CallFunc_LoadHoldCrouch_HoldCrouch;
	Parms.CallFunc_LoadHoldCrouch_ReturnValue = CallFunc_LoadHoldCrouch_ReturnValue;
	Parms.CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout = CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout;
	Parms.CallFunc_GetGamepadInvertStickLayout_ReturnValue = CallFunc_GetGamepadInvertStickLayout_ReturnValue;
	Parms.CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout = CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout;
	Parms.CallFunc_GetGamepadInvertButtonLayout_ReturnValue = CallFunc_GetGamepadInvertButtonLayout_ReturnValue;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout = CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout;
	Parms.CallFunc_GetGamepadInvertTriggersLayout_ReturnValue = CallFunc_GetGamepadInvertTriggersLayout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_GamepadControlScheme_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_GamepadControlScheme_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_GamepadControlScheme_UE5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadControlScheme_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadControlScheme_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature");

	Params::UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.ExecuteUbergraph_W_Options_GamepadControlScheme_UE5
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertStickLayout_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertTriggersLayout_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadInvertButtonLayout_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHoldCrouch_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadControlScheme_UE5_C::ExecuteUbergraph_W_Options_GamepadControlScheme_UE5(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool K2Node_ComponentBoundEvent_bNewCheckState_4, bool CallFunc_SetGamepadInvertStickLayout_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_3, bool CallFunc_SetGamepadInvertTriggersLayout_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool CallFunc_SetGamepadInvertButtonLayout_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool CallFunc_SaveHoldCrouch_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue, bool CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadControlScheme_UE5_C", "ExecuteUbergraph_W_Options_GamepadControlScheme_UE5");

	Params::UW_Options_GamepadControlScheme_UE5_C_ExecuteUbergraph_W_Options_GamepadControlScheme_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.CallFunc_SetGamepadInvertStickLayout_ReturnValue = CallFunc_SetGamepadInvertStickLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.CallFunc_SetGamepadInvertTriggersLayout_ReturnValue = CallFunc_SetGamepadInvertTriggersLayout_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.CallFunc_SetGamepadInvertButtonLayout_ReturnValue = CallFunc_SetGamepadInvertButtonLayout_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_SaveHoldCrouch_ReturnValue = CallFunc_SaveHoldCrouch_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue = CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue = CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue;
	Parms.CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue = CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


