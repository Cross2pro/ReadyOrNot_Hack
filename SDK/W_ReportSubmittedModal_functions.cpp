#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReportSubmittedModal.W_ReportSubmittedModal_C
// (None)

class UClass* UW_ReportSubmittedModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReportSubmittedModal_C");

	return Clss;
}


// W_ReportSubmittedModal_C W_ReportSubmittedModal.Default__W_ReportSubmittedModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReportSubmittedModal_C* UW_ReportSubmittedModal_C::GetDefaultObj()
{
	static class UW_ReportSubmittedModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReportSubmittedModal_C*>(UW_ReportSubmittedModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReportSubmittedModal.W_ReportSubmittedModal_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ReportSubmittedModal_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportSubmittedModal_C", "BP_GetDesiredFocusTarget");

	Params::UW_ReportSubmittedModal_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReportSubmittedModal.W_ReportSubmittedModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReportSubmittedModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportSubmittedModal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReportSubmittedModal.W_ReportSubmittedModal_C.BndEvt__W_ReportSubmittedModal_OKButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReportSubmittedModal_C::BndEvt__W_ReportSubmittedModal_OKButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportSubmittedModal_C", "BndEvt__W_ReportSubmittedModal_OKButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_ReportSubmittedModal_C_BndEvt__W_ReportSubmittedModal_OKButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportSubmittedModal.W_ReportSubmittedModal_C.ExecuteUbergraph_W_ReportSubmittedModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReportSubmittedModal_C::ExecuteUbergraph_W_ReportSubmittedModal(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportSubmittedModal_C", "ExecuteUbergraph_W_ReportSubmittedModal");

	Params::UW_ReportSubmittedModal_C_ExecuteUbergraph_W_ReportSubmittedModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReportSubmittedModal.W_ReportSubmittedModal_C.On OK Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReportSubmittedModal_C::On_OK_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReportSubmittedModal_C", "On OK Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


