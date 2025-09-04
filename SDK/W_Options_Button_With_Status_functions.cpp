#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Button_With_Status.W_Options_Button_With_Status_C
// (None)

class UClass* UW_Options_Button_With_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Button_With_Status_C");

	return Clss;
}


// W_Options_Button_With_Status_C W_Options_Button_With_Status.Default__W_Options_Button_With_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Button_With_Status_C* UW_Options_Button_With_Status_C::GetDefaultObj()
{
	static class UW_Options_Button_With_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Button_With_Status_C*>(UW_Options_Button_With_Status_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.Set Checked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_OnOffButton_C*            K2Node_DynamicCast_AsW_on_Off_Button                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::Set_Checked(bool Checked, class UW_OnOffButton_C* K2Node_DynamicCast_AsW_on_Off_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "Set Checked");

	Params::UW_Options_Button_With_Status_C_Set_Checked_Params Parms{};

	Parms.Checked = Checked;
	Parms.K2Node_DynamicCast_AsW_on_Off_Button = K2Node_DynamicCast_AsW_on_Off_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.Set Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::Set_Status(class FText Status, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "Set Status");

	Params::UW_Options_Button_With_Status_C_Set_Status_Params Parms{};

	Parms.Status = Status;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.ButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Button_With_Status_C::ButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "ButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "PreConstruct");

	Params::UW_Options_Button_With_Status_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_Button_With_Status_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Options_Button_With_Status_C_BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Button_With_Status_C_BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.SetCheckedState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bChecked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::SetCheckedState(bool bChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "SetCheckedState");

	Params::UW_Options_Button_With_Status_C_SetCheckedState_Params Parms{};

	Parms.bChecked = bChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.SetWidgetStatus
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewStatus                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Options_Button_With_Status_C::SetWidgetStatus(class FText& NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "SetWidgetStatus");

	Params::UW_Options_Button_With_Status_C_SetWidgetStatus_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.ExecuteUbergraph_W_Options_Button_With_Status
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bChecked                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewStatus                                           (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_OnOffButton_C*            K2Node_DynamicCast_AsW_on_Off_Button                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::ExecuteUbergraph_W_Options_Button_With_Status(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bNewCheckState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bChecked, class FText K2Node_Event_NewStatus, bool CallFunc_TextIsEmpty_ReturnValue, class UW_OnOffButton_C* K2Node_DynamicCast_AsW_on_Off_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "ExecuteUbergraph_W_Options_Button_With_Status");

	Params::UW_Options_Button_With_Status_C_ExecuteUbergraph_W_Options_Button_With_Status_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bChecked = K2Node_Event_bChecked;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_on_Off_Button = K2Node_DynamicCast_AsW_on_Off_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.OnValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewCheckState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Button_With_Status_C::OnValueChange__DelegateSignature(bool NewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "OnValueChange__DelegateSignature");

	Params::UW_Options_Button_With_Status_C_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewCheckState = NewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Button_With_Status_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Button_With_Status_C", "OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


