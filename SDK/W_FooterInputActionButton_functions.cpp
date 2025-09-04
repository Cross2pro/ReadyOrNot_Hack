#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FooterInputActionButton.W_FooterInputActionButton_C
// (None)

class UClass* UW_FooterInputActionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FooterInputActionButton_C");

	return Clss;
}


// W_FooterInputActionButton_C W_FooterInputActionButton.Default__W_FooterInputActionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FooterInputActionButton_C* UW_FooterInputActionButton_C::GetDefaultObj()
{
	static class UW_FooterInputActionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FooterInputActionButton_C*>(UW_FooterInputActionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.SetInputActions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> InputActions                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_FooterInputActionButton_C::SetInputActions(TArray<struct FDataTableRowHandle>& InputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "SetInputActions");

	Params::UW_FooterInputActionButton_C_SetInputActions_Params Parms{};

	Parms.InputActions = InputActions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.SetMultiInputAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> InputActions                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsCombo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_InputAction_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// TArray<class UW_InputAction_C*>    CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_InputAction_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Array_Identical_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_2                                        (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UW_FooterInputActionButton_C::SetMultiInputAction(TArray<struct FDataTableRowHandle>& InputActions, bool IsCombo, class UW_InputAction_C* CallFunc_Create_ReturnValue, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable, TArray<class UW_InputAction_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_InputAction_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Array_Identical_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText Temp_text_Variable_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "SetMultiInputAction");

	Params::UW_FooterInputActionButton_C_SetMultiInputAction_Params Parms{};

	Parms.InputActions = InputActions;
	Parms.IsCombo = IsCombo;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Identical_ReturnValue = CallFunc_Array_Identical_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.ShowHotkeyInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::ShowHotkeyInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "ShowHotkeyInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.HideHotkeyInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::HideHotkeyInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "HideHotkeyInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Set Action Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Action_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_FooterInputActionButton_C::Set_Action_Name(class FText Action_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Set Action Name");

	Params::UW_FooterInputActionButton_C_Set_Action_Name_Params Parms{};

	Parms.Action_Name = Action_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UW_FooterInputActionButton_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnMouseButtonUp");

	Params::UW_FooterInputActionButton_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UW_FooterInputActionButton_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnMouseButtonDown");

	Params::UW_FooterInputActionButton_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.PassthroughInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::PassthroughInteraction(bool PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "PassthroughInteraction");

	Params::UW_FooterInputActionButton_C_PassthroughInteraction_Params Parms{};

	Parms.PassThrough = PassThrough;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.IgnoreInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ignore                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::IgnoreInteraction(bool Ignore, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "IgnoreInteraction");

	Params::UW_FooterInputActionButton_C_IgnoreInteraction_Params Parms{};

	Parms.Ignore = Ignore;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_GetButtonLabel
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCommonTextBlock*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonTextBlock* UW_FooterInputActionButton_C::BP_GetButtonLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_GetButtonLabel");

	Params::UW_FooterInputActionButton_C_BP_GetButtonLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.TruncateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Truncate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CharacterLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TruncationCharacters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "TruncateText");

	Params::UW_FooterInputActionButton_C_TruncateText_Params Parms{};

	Parms.Truncate = Truncate;
	Parms.CharacterLimit = CharacterLimit;
	Parms.TruncationCharacters = TruncationCharacters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.DisableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::DisableInteraction(bool Disable, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "DisableInteraction");

	Params::UW_FooterInputActionButton_C_DisableInteraction_Params Parms{};

	Parms.Disable = Disable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::Enable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Enable");

	Params::UW_FooterInputActionButton_C_Enable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.SetBackgroundTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::SetBackgroundTint(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "SetBackgroundTint");

	Params::UW_FooterInputActionButton_C_SetBackgroundTint_Params Parms{};

	Parms.InBackgroundColor = InBackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::SetButtonText(class FText Text, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "SetButtonText");

	Params::UW_FooterInputActionButton_C_SetButtonText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.InitContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::InitContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "InitContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.ForceClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "PreConstruct");

	Params::UW_FooterInputActionButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.ForceDoubleClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::ForceDoubleClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "ForceDoubleClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnDoubleClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnActionProgress");

	Params::UW_FooterInputActionButton_C_OnActionProgress_Params Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnActionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.EventOnReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::EventOnReleased(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "EventOnReleased");

	Params::UW_FooterInputActionButton_C_EventOnReleased_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.EventOnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::EventOnPressed(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "EventOnPressed");

	Params::UW_FooterInputActionButton_C_EventOnPressed_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.RightMousePressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::RightMousePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "RightMousePressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.RightMouseReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::RightMouseReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "RightMouseReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BP_OnReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnInputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::OnInputChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnInputChanged");

	Params::UW_FooterInputActionButton_C_OnInputChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_0_OnInputActionSetNotFound__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_InputAction_C*            TriggeringInputActionWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_0_OnInputActionSetNotFound__DelegateSignature(class UW_InputAction_C* TriggeringInputActionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_0_OnInputActionSetNotFound__DelegateSignature");

	Params::UW_FooterInputActionButton_C_BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_0_OnInputActionSetNotFound__DelegateSignature_Params Parms{};

	Parms.TriggeringInputActionWidget = TriggeringInputActionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_1_OnInputActionWidgetUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_1_OnInputActionWidgetUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_1_OnInputActionWidgetUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.ExecuteUbergraph_W_FooterInputActionButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HeldPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetCustomPadding_OutCustomPadding                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetButtonPadding_OutButtonPadding                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButtonStyle*          CallFunc_GetStyle_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseButtonStyle_C*          K2Node_DynamicCast_AsBase_Button_Style_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_InputAction_C*            K2Node_ComponentBoundEvent_TriggeringInputActionWidget           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::ExecuteUbergraph_W_FooterInputActionButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText Temp_text_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Event_HeldPercent, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetCustomPadding_OutCustomPadding, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_1, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetButtonPadding_OutButtonPadding, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_2, bool K2Node_DynamicCast_bSuccess_2, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UCommonButtonBase* K2Node_CustomEvent_Button, bool Temp_bool_Variable, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, class UW_InputAction_C* K2Node_ComponentBoundEvent_TriggeringInputActionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "ExecuteUbergraph_W_FooterInputActionButton");

	Params::UW_FooterInputActionButton_C_ExecuteUbergraph_W_FooterInputActionButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;
	Parms.CallFunc_GetStyle_ReturnValue = CallFunc_GetStyle_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Button_Style = K2Node_DynamicCast_AsBase_Button_Style;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomPadding_OutCustomPadding = CallFunc_GetCustomPadding_OutCustomPadding;
	Parms.CallFunc_GetStyle_ReturnValue_1 = CallFunc_GetStyle_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Button_Style_1 = K2Node_DynamicCast_AsBase_Button_Style_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetButtonPadding_OutButtonPadding = CallFunc_GetButtonPadding_OutButtonPadding;
	Parms.CallFunc_GetStyle_ReturnValue_2 = CallFunc_GetStyle_ReturnValue_2;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Button_Style_2 = K2Node_DynamicCast_AsBase_Button_Style_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_TriggeringInputActionWidget = K2Node_ComponentBoundEvent_TriggeringInputActionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnRightMouseReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::OnRightMouseReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnRightMouseReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.OnRightMousePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::OnRightMousePressed__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "OnRightMousePressed__DelegateSignature");

	Params::UW_FooterInputActionButton_C_OnRightMousePressed__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Deselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::Deselected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Deselected__DelegateSignature");

	Params::UW_FooterInputActionButton_C_Deselected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::Selected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Selected__DelegateSignature");

	Params::UW_FooterInputActionButton_C_Selected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.DoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "DoubleClicked__DelegateSignature");

	Params::UW_FooterInputActionButton_C_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FooterInputActionButton_C::Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Hovered__DelegateSignature");

	Params::UW_FooterInputActionButton_C_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FooterInputActionButton.W_FooterInputActionButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_FooterInputActionButton_C::Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FooterInputActionButton_C", "Clicked__DelegateSignature");

	Params::UW_FooterInputActionButton_C_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


