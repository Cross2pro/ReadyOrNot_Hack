#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C
// (None)

class UClass* UW_Options_GamepadCommandWheel_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_GamepadCommandWheel_UE5_C");

	return Clss;
}


// W_Options_GamepadCommandWheel_UE5_C W_Options_GamepadCommandWheel_UE5.Default__W_Options_GamepadCommandWheel_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_GamepadCommandWheel_UE5_C* UW_Options_GamepadCommandWheel_UE5_C::GetDefaultObj()
{
	static class UW_Options_GamepadCommandWheel_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_GamepadCommandWheel_UE5_C*>(UW_Options_GamepadCommandWheel_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.PopulateOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetUseCommandMenuForGamepad_bUsesCommandMenu            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseCommandMenuForGamepad_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGamepadConfirmationPresetCallFunc_GetGamepadRadialMenuConfirmationPreset_Preset           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadRadialMenuConfirmationPreset_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::PopulateOptions(bool CallFunc_GetUseCommandMenuForGamepad_bUsesCommandMenu, bool CallFunc_GetUseCommandMenuForGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, enum class EGamepadConfirmationPreset CallFunc_GetGamepadRadialMenuConfirmationPreset_Preset, bool CallFunc_GetGamepadRadialMenuConfirmationPreset_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick, bool CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "PopulateOptions");

	Params::UW_Options_GamepadCommandWheel_UE5_C_PopulateOptions_Params Parms{};

	Parms.CallFunc_GetUseCommandMenuForGamepad_bUsesCommandMenu = CallFunc_GetUseCommandMenuForGamepad_bUsesCommandMenu;
	Parms.CallFunc_GetUseCommandMenuForGamepad_ReturnValue = CallFunc_GetUseCommandMenuForGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetGamepadRadialMenuConfirmationPreset_Preset = CallFunc_GetGamepadRadialMenuConfirmationPreset_Preset;
	Parms.CallFunc_GetGamepadRadialMenuConfirmationPreset_ReturnValue = CallFunc_GetGamepadRadialMenuConfirmationPreset_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick = CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick;
	Parms.CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue = CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.ResetToDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::ResetToDefaults(class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "ResetToDefaults");

	Params::UW_Options_GamepadCommandWheel_UE5_C_ResetToDefaults_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_GamepadCommandWheel_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_GamepadCommandWheel_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_GamepadCommandWheel_UE5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadCommandWheel_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature");

	Params::UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_GamepadCommandWheel_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.CreateInputLabel
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UVerticalBox*                TargetBox                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                              Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::CreateInputLabel(class UVerticalBox* TargetBox, class FText& Text, uint8& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "CreateInputLabel");

	Params::UW_Options_GamepadCommandWheel_UE5_C_CreateInputLabel_Params Parms{};

	Parms.TargetBox = TargetBox;
	Parms.Text = Text;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Options_GamePad_InputLabel_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EGamepadConfirmationPresetCallFunc_GetGamepadRadialMenuConfirmationPresetEnum_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamepadRadialMenuConfirmationPreset_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Event_TargetBox                                           (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// uint8                              K2Node_Event_Direction                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetUseCommandMenuForGamepad_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamepadCommandWheel_UE5_C::ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5(int32 EntryPoint, class UW_Options_GamePad_InputLabel_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, enum class EGamepadConfirmationPreset CallFunc_GetGamepadRadialMenuConfirmationPresetEnum_ReturnValue, bool CallFunc_SetGamepadRadialMenuConfirmationPreset_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBox* K2Node_Event_TargetBox, class FText K2Node_Event_Text, uint8 K2Node_Event_Direction, bool CallFunc_SetUseCommandMenuForGamepad_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamepadCommandWheel_UE5_C", "ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5");

	Params::UW_Options_GamepadCommandWheel_UE5_C_ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue = CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_GetGamepadRadialMenuConfirmationPresetEnum_ReturnValue = CallFunc_GetGamepadRadialMenuConfirmationPresetEnum_ReturnValue;
	Parms.CallFunc_SetGamepadRadialMenuConfirmationPreset_ReturnValue = CallFunc_SetGamepadRadialMenuConfirmationPreset_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_TargetBox = K2Node_Event_TargetBox;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.CallFunc_SetUseCommandMenuForGamepad_ReturnValue = CallFunc_SetUseCommandMenuForGamepad_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


