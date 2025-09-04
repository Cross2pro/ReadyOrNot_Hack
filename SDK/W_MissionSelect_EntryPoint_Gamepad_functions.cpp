#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C
// (None)

class UClass* UW_MissionSelect_EntryPoint_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MissionSelect_EntryPoint_Gamepad_C");

	return Clss;
}


// W_MissionSelect_EntryPoint_Gamepad_C W_MissionSelect_EntryPoint_Gamepad.Default__W_MissionSelect_EntryPoint_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MissionSelect_EntryPoint_Gamepad_C* UW_MissionSelect_EntryPoint_Gamepad_C::GetDefaultObj()
{
	static class UW_MissionSelect_EntryPoint_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MissionSelect_EntryPoint_Gamepad_C*>(UW_MissionSelect_EntryPoint_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "GetFocusTarget");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "BackPage");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SequenceEvent__ENTRYPOINTW_MissionSelect_EntryPoint_Gamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_Gamepad_C::SequenceEvent__ENTRYPOINTW_MissionSelect_EntryPoint_Gamepad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "SequenceEvent__ENTRYPOINTW_MissionSelect_EntryPoint_Gamepad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "Hide");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "SetInputMode");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "ChangePage");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SetImageVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::SetImageVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "SetImageVisibility");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_SetImageVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_Gamepad_C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "SequenceEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "Reveal");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MissionSelect_EntryPoint_Gamepad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.OnEntryPointChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEntryPoint                 NewEntryPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MissionSelect_EntryPoint_Gamepad_C::OnEntryPointChanged(const struct FEntryPoint& NewEntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "OnEntryPointChanged");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_OnEntryPointChanged_Params Parms{};

	Parms.NewEntryPoint = NewEntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEntryPoint                 K2Node_CustomEvent_NewEntryPoint                                 (None)

void UW_MissionSelect_EntryPoint_Gamepad_C::ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad(int32 EntryPoint, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, double K2Node_Event_Delay, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FEntryPoint& K2Node_CustomEvent_NewEntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_NewEntryPoint = K2Node_CustomEvent_NewEntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_MissionSelect_EntryPoint_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MissionSelect_EntryPoint_Gamepad_C::OnClicked__DelegateSignature(class UW_MissionSelect_EntryPoint_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MissionSelect_EntryPoint_Gamepad_C", "OnClicked__DelegateSignature");

	Params::UW_MissionSelect_EntryPoint_Gamepad_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


