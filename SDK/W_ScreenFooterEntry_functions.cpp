#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ScreenFooterEntry.W_ScreenFooterEntry_C
// (None)

class UClass* UW_ScreenFooterEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ScreenFooterEntry_C");

	return Clss;
}


// W_ScreenFooterEntry_C W_ScreenFooterEntry.Default__W_ScreenFooterEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ScreenFooterEntry_C* UW_ScreenFooterEntry_C::GetDefaultObj()
{
	static class UW_ScreenFooterEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ScreenFooterEntry_C*>(UW_ScreenFooterEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetFocusTarget");

	Params::UW_ScreenFooterEntry_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BackPage");

	Params::UW_ScreenFooterEntry_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetTriggeringInputAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         TriggeringInputAction                                            (Parm, OutParm, NoDestructor)

void UW_ScreenFooterEntry_C::GetTriggeringInputAction(struct FDataTableRowHandle* TriggeringInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetTriggeringInputAction");

	Params::UW_ScreenFooterEntry_C_GetTriggeringInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TriggeringInputAction != nullptr)
		*TriggeringInputAction = std::move(Parms.TriggeringInputAction);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Set Input Actions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> InInputActions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FKey                        Key                                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> Actions                                                          (Edit, BlueprintVisible)
// class FText                        LabelText                                                        (Edit, BlueprintVisible)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetButtonLabel_ButtonLabel                              (None)
// class FText                        CallFunc_GetButtonLabel_ButtonLabel_1                            (None)
// struct FDataTableRowHandle         CallFunc_GetTriggeringInputAction_TriggeringInputAction          (NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<struct FDataTableRowHandle> CallFunc_GetInputActions_InputActions                            (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInputActionData_ActionName                           (None)
// struct FKey                        CallFunc_GetInputActionData_ActionKey                            (HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::Set_Input_Actions(TArray<struct FDataTableRowHandle>& InInputActions, const struct FKey& Key, const TArray<struct FDataTableRowHandle>& Actions, class FText LabelText, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, class FText CallFunc_GetButtonLabel_ButtonLabel_1, const struct FDataTableRowHandle& CallFunc_GetTriggeringInputAction_TriggeringInputAction, bool CallFunc_TextIsEmpty_ReturnValue_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& CallFunc_GetInputActions_InputActions, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Set Input Actions");

	Params::UW_ScreenFooterEntry_C_Set_Input_Actions_Params Parms{};

	Parms.InInputActions = InInputActions;
	Parms.Key = Key;
	Parms.Actions = Actions;
	Parms.LabelText = LabelText;
	Parms.CallFunc_Abbreviate_Key_Abreviated_Name = CallFunc_Abbreviate_Key_Abreviated_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetButtonLabel_ButtonLabel = CallFunc_GetButtonLabel_ButtonLabel;
	Parms.CallFunc_GetButtonLabel_ButtonLabel_1 = CallFunc_GetButtonLabel_ButtonLabel_1;
	Parms.CallFunc_GetTriggeringInputAction_TriggeringInputAction = CallFunc_GetTriggeringInputAction_TriggeringInputAction;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetInputActions_InputActions = CallFunc_GetInputActions_InputActions;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetInputActionData_ActionName = CallFunc_GetInputActionData_ActionName;
	Parms.CallFunc_GetInputActionData_ActionKey = CallFunc_GetInputActionData_ActionKey;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetInputActions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDataTableRowHandle> InputActions                                                     (Parm, OutParm)

void UW_ScreenFooterEntry_C::GetInputActions(TArray<struct FDataTableRowHandle>* InputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetInputActions");

	Params::UW_ScreenFooterEntry_C_GetInputActions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputActions != nullptr)
		*InputActions = std::move(Parms.InputActions);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetMultiInputAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> InputActionRows                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_ScreenFooterEntry_C::SetMultiInputAction(TArray<struct FDataTableRowHandle>& InputActionRows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetMultiInputAction");

	Params::UW_ScreenFooterEntry_C_SetMultiInputAction_Params Parms{};

	Parms.InputActionRows = InputActionRows;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetMultipleInputActions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDataTableRowHandle> InputActions                                                     (Parm, OutParm)

void UW_ScreenFooterEntry_C::GetMultipleInputActions(TArray<struct FDataTableRowHandle>* InputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetMultipleInputActions");

	Params::UW_ScreenFooterEntry_C_GetMultipleInputActions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputActions != nullptr)
		*InputActions = std::move(Parms.InputActions);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetIsMultiInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsMulti                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::GetIsMultiInput(bool* IsMulti)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetIsMultiInput");

	Params::UW_ScreenFooterEntry_C_GetIsMultiInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMulti != nullptr)
		*IsMulti = Parms.IsMulti;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Set Button Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooterEntry_C::Set_Button_Text(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Set Button Text");

	Params::UW_ScreenFooterEntry_C_Set_Button_Text_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsButton_IsButton                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsButton_IsButton_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::UpdateVisualState(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsButton_IsButton, bool CallFunc_GetIsButton_IsButton_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "UpdateVisualState");

	Params::UW_ScreenFooterEntry_C_UpdateVisualState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIsButton_IsButton = CallFunc_GetIsButton_IsButton;
	Parms.CallFunc_GetIsButton_IsButton_1 = CallFunc_GetIsButton_IsButton_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetInputAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         InputAction                                                      (Parm, OutParm, NoDestructor)

void UW_ScreenFooterEntry_C::GetInputAction(struct FDataTableRowHandle* InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetInputAction");

	Params::UW_ScreenFooterEntry_C_GetInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputAction != nullptr)
		*InputAction = std::move(Parms.InputAction);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ButtonId                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::GetButtonID(class FString* ButtonId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetButtonID");

	Params::UW_ScreenFooterEntry_C_GetButtonID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonId != nullptr)
		*ButtonId = std::move(Parms.ButtonId);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ButtonLabel                                                      (Parm, OutParm)

void UW_ScreenFooterEntry_C::GetButtonLabel(class FText* ButtonLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetButtonLabel");

	Params::UW_ScreenFooterEntry_C_GetButtonLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonLabel != nullptr)
		*ButtonLabel = Parms.ButtonLabel;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetIsButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsButton                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::GetIsButton(bool* IsButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "GetIsButton");

	Params::UW_ScreenFooterEntry_C_GetIsButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsButton != nullptr)
		*IsButton = Parms.IsButton;

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::SetInputVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputSwitched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGamepad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::InputSwitched(bool UseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "InputSwitched");

	Params::UW_ScreenFooterEntry_C_InputSwitched_Params Parms{};

	Parms.UseGamepad = UseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetFooterEntryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScreenFooterEntry          FooterEntryData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooterEntry_C::SetFooterEntryData(const struct FScreenFooterEntry& FooterEntryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetFooterEntryData");

	Params::UW_ScreenFooterEntry_C_SetFooterEntryData_Params Parms{};

	Parms.FooterEntryData = FooterEntryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Temp_struct_Variable                                             (ReferenceParm)

void UW_ScreenFooterEntry_C::UpdateEntry(TArray<struct FDataTableRowHandle>& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "UpdateEntry");

	Params::UW_ScreenFooterEntry_C_UpdateEntry_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FText                        CallFunc_GetInputActionData_ActionName                           (None)
// struct FKey                        CallFunc_GetInputActionData_ActionKey                            (HasGetValueTypeHash)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetButtonLabel_ButtonLabel                              (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::SetInputAction(const struct FDataTableRowHandle& InputActionRow, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputAction");

	Params::UW_ScreenFooterEntry_C_SetInputAction_Params Parms{};

	Parms.InputActionRow = InputActionRow;
	Parms.CallFunc_GetInputActionData_ActionName = CallFunc_GetInputActionData_ActionName;
	Parms.CallFunc_GetInputActionData_ActionKey = CallFunc_GetInputActionData_ActionKey;
	Parms.CallFunc_Abbreviate_Key_Abreviated_Name = CallFunc_Abbreviate_Key_Abreviated_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetButtonLabel_ButtonLabel = CallFunc_GetButtonLabel_ButtonLabel;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ScreenFooterEntry_C::SetLabel(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetLabel");

	Params::UW_ScreenFooterEntry_C_SetLabel_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "SetInputMode");

	Params::UW_ScreenFooterEntry_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Hide");

	Params::UW_ScreenFooterEntry_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "Reveal");

	Params::UW_ScreenFooterEntry_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "PreConstruct");

	Params::UW_ScreenFooterEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "ChangePage");

	Params::UW_ScreenFooterEntry_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::InputTypeChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "InputTypeChanged");

	Params::UW_ScreenFooterEntry_C_InputTypeChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ExecuteUbergraph_W_ScreenFooterEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::ExecuteUbergraph_W_ScreenFooterEntry(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsGamepad, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "ExecuteUbergraph_W_ScreenFooterEntry");

	Params::UW_ScreenFooterEntry_C_ExecuteUbergraph_W_ScreenFooterEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnReleased__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnReleased__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnReleased__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnPressed__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnPressed__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ScreenFooterEntry_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnHovered__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ScreenFooterEntry_C::OnClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ScreenFooterEntry_C", "OnClicked__DelegateSignature");

	Params::UW_ScreenFooterEntry_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


