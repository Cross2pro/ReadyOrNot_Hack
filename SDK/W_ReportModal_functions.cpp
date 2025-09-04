#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReportModal.W_ReportModal_C
// (None)

class UClass* UW_ReportModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReportModal_C");

	return Clss;
}


// W_ReportModal_C W_ReportModal.Default__W_ReportModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReportModal_C* UW_ReportModal_C::GetDefaultObj()
{
	static class UW_ReportModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReportModal_C*>(UW_ReportModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReportModal.W_ReportModal_C.Verify
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Verified                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTextOverMax_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_ReportModal_C::Verify(bool* Verified, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsTextOverMax_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Verify");

	Params::UW_ReportModal_C_Verify_Params Parms{};

	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_IsTextOverMax_ReturnValue = CallFunc_IsTextOverMax_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Verified != nullptr)
		*Verified = Parms.Verified;

}


// Function W_ReportModal.W_ReportModal_C.Update Report Reasons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::Update_Report_Reasons(class FText& Reason, bool Checked, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Update Report Reasons");

	Params::UW_ReportModal_C_Update_Report_Reasons_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.Do Custom Navigation Cancel Up
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ReportModal_C::Do_Custom_Navigation_Cancel_Up(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Do Custom Navigation Cancel Up");

	Params::UW_ReportModal_C_Do_Custom_Navigation_Cancel_Up_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ReportModal_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BP_OnHandleBackAction");

	Params::UW_ReportModal_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ReportModal_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BP_GetDesiredFocusTarget");

	Params::UW_ReportModal_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OkClicked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ApplyClicked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               TextInputConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::Confirm(bool OkClicked, bool ApplyClicked, bool TextInputConfirm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Confirm");

	Params::UW_ReportModal_C_Confirm_Params Parms{};

	Parms.OkClicked = OkClicked;
	Parms.ApplyClicked = ApplyClicked;
	Parms.TextInputConfirm = TextInputConfirm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.WarnTextUnderMin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_ReportModal_C::WarnTextUnderMin(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "WarnTextUnderMin");

	Params::UW_ReportModal_C_WarnTextUnderMin_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.IsTextUnderMin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ReportModal_C::IsTextUnderMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "IsTextUnderMin");

	Params::UW_ReportModal_C_IsTextUnderMin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.WarnTextOverMax
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_ReportModal_C::WarnTextOverMax(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "WarnTextOverMax");

	Params::UW_ReportModal_C_WarnTextOverMax_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.HideWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReportModal_C::HideWarningText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "HideWarningText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReportModal.W_ReportModal_C.IsTextOverMax
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ReportModal_C::IsTextOverMax(class FText CallFunc_GetText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "IsTextOverMax");

	Params::UW_ReportModal_C_IsTextOverMax_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.SetDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ModalDescription                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::SetDescriptionText(class FText ModalDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "SetDescriptionText");

	Params::UW_ReportModal_C_SetDescriptionText_Params Parms{};

	Parms.ModalDescription = ModalDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.DisplayWarningText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        WarningText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::DisplayWarningText(class FText WarningText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "DisplayWarningText");

	Params::UW_ReportModal_C_DisplayWarningText_Params Parms{};

	Parms.WarningText = WarningText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.CancelConfirmTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReportModal_C::CancelConfirmTextEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "CancelConfirmTextEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReportModal.W_ReportModal_C.ConfirmTextEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ConfirmTitleText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ConfirmDescriptionText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::ConfirmTextEntry(class FText ConfirmTitleText, class FText ConfirmDescriptionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "ConfirmTextEntry");

	Params::UW_ReportModal_C_ConfirmTextEntry_Params Parms{};

	Parms.ConfirmTitleText = ConfirmTitleText;
	Parms.ConfirmDescriptionText = ConfirmDescriptionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.Get_OkButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_ReportModal_C::Get_OkButton_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Get_OkButton_bIsEnabled_0");

	Params::UW_ReportModal_C_Get_OkButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportModal.W_ReportModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "PreConstruct");

	Params::UW_ReportModal_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReportModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReportModal.W_ReportModal_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReportModal_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReportModal.W_ReportModal_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "InputMethodChanged");

	Params::UW_ReportModal_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_StandardModal_btn_Apply_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_StandardModal_btn_Apply_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_StandardModal_btn_Apply_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_StandardModal_btn_Apply_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Cheating_K2Node_ComponentBoundEvent_3_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Cheating_K2Node_ComponentBoundEvent_3_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Cheating_K2Node_ComponentBoundEvent_3_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Cheating_K2Node_ComponentBoundEvent_3_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Verbal_K2Node_ComponentBoundEvent_4_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Verbal_K2Node_ComponentBoundEvent_4_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Verbal_K2Node_ComponentBoundEvent_4_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Verbal_K2Node_ComponentBoundEvent_4_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Disruptive_K2Node_ComponentBoundEvent_5_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Disruptive_K2Node_ComponentBoundEvent_5_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Disruptive_K2Node_ComponentBoundEvent_5_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Disruptive_K2Node_ComponentBoundEvent_5_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Username_K2Node_ComponentBoundEvent_6_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Username_K2Node_ComponentBoundEvent_6_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Username_K2Node_ComponentBoundEvent_6_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Username_K2Node_ComponentBoundEvent_6_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Inactivity_K2Node_ComponentBoundEvent_8_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Inactivity_K2Node_ComponentBoundEvent_8_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Inactivity_K2Node_ComponentBoundEvent_8_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Inactivity_K2Node_ComponentBoundEvent_8_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_UGC_K2Node_ComponentBoundEvent_9_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_UGC_K2Node_ComponentBoundEvent_9_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_UGC_K2Node_ComponentBoundEvent_9_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_UGC_K2Node_ComponentBoundEvent_9_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.BndEvt__W_ReportModal_Reason_Other_K2Node_ComponentBoundEvent_10_On Report Reason Check Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReportModal_C::BndEvt__W_ReportModal_Reason_Other_K2Node_ComponentBoundEvent_10_On_Report_Reason_Check_Changed__DelegateSignature(class FText Reason, bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "BndEvt__W_ReportModal_Reason_Other_K2Node_ComponentBoundEvent_10_On Report Reason Check Changed__DelegateSignature");

	Params::UW_ReportModal_C_BndEvt__W_ReportModal_Reason_Other_K2Node_ComponentBoundEvent_10_On_Report_Reason_Check_Changed__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;
	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.ExecuteUbergraph_W_ReportModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason_6                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason_5                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_ComponentBoundEvent_Reason_4                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason_3                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason_2                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason_1                              (None)
// bool                               K2Node_ComponentBoundEvent_Checked_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Reason                                (None)
// bool                               K2Node_ComponentBoundEvent_Checked                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Verify_Verified                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Verify_Verified_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)

void UW_ReportModal_C::ExecuteUbergraph_W_ReportModal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Conv_StringToText_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText K2Node_ComponentBoundEvent_Reason_6, bool K2Node_ComponentBoundEvent_Checked_6, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_ComponentBoundEvent_Reason_5, bool K2Node_ComponentBoundEvent_Checked_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_ComponentBoundEvent_Reason_4, bool K2Node_ComponentBoundEvent_Checked_4, class FText K2Node_ComponentBoundEvent_Reason_3, bool K2Node_ComponentBoundEvent_Checked_3, class FText K2Node_ComponentBoundEvent_Reason_2, bool K2Node_ComponentBoundEvent_Checked_2, class FText K2Node_ComponentBoundEvent_Reason_1, bool K2Node_ComponentBoundEvent_Checked_1, class FText K2Node_ComponentBoundEvent_Reason, bool K2Node_ComponentBoundEvent_Checked, bool CallFunc_Verify_Verified, bool CallFunc_Verify_Verified_1, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "ExecuteUbergraph_W_ReportModal");

	Params::UW_ReportModal_C_ExecuteUbergraph_W_ReportModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Reason_6 = K2Node_ComponentBoundEvent_Reason_6;
	Parms.K2Node_ComponentBoundEvent_Checked_6 = K2Node_ComponentBoundEvent_Checked_6;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_ComponentBoundEvent_Reason_5 = K2Node_ComponentBoundEvent_Reason_5;
	Parms.K2Node_ComponentBoundEvent_Checked_5 = K2Node_ComponentBoundEvent_Checked_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Reason_4 = K2Node_ComponentBoundEvent_Reason_4;
	Parms.K2Node_ComponentBoundEvent_Checked_4 = K2Node_ComponentBoundEvent_Checked_4;
	Parms.K2Node_ComponentBoundEvent_Reason_3 = K2Node_ComponentBoundEvent_Reason_3;
	Parms.K2Node_ComponentBoundEvent_Checked_3 = K2Node_ComponentBoundEvent_Checked_3;
	Parms.K2Node_ComponentBoundEvent_Reason_2 = K2Node_ComponentBoundEvent_Reason_2;
	Parms.K2Node_ComponentBoundEvent_Checked_2 = K2Node_ComponentBoundEvent_Checked_2;
	Parms.K2Node_ComponentBoundEvent_Reason_1 = K2Node_ComponentBoundEvent_Reason_1;
	Parms.K2Node_ComponentBoundEvent_Checked_1 = K2Node_ComponentBoundEvent_Checked_1;
	Parms.K2Node_ComponentBoundEvent_Reason = K2Node_ComponentBoundEvent_Reason;
	Parms.K2Node_ComponentBoundEvent_Checked = K2Node_ComponentBoundEvent_Checked;
	Parms.CallFunc_Verify_Verified = CallFunc_Verify_Verified;
	Parms.CallFunc_Verify_Verified_1 = CallFunc_Verify_Verified_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReportModal_C*            CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::OnTextCommitted__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "OnTextCommitted__DelegateSignature");

	Params::UW_ReportModal_C_OnTextCommitted__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.OnApplyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReportModal_C*            CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::OnApplyClicked__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "OnApplyClicked__DelegateSignature");

	Params::UW_ReportModal_C_OnApplyClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportModal.W_ReportModal_C.OnOkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReportModal_C*            CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ReportModal_C::OnOkClicked__DelegateSignature(class UW_ReportModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportModal_C", "OnOkClicked__DelegateSignature");

	Params::UW_ReportModal_C_OnOkClicked__DelegateSignature_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


