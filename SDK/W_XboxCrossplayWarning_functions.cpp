#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_XboxCrossplayWarning.W_XboxCrossplayWarning_C
// (None)

class UClass* UW_XboxCrossplayWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_XboxCrossplayWarning_C");

	return Clss;
}


// W_XboxCrossplayWarning_C W_XboxCrossplayWarning.Default__W_XboxCrossplayWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_XboxCrossplayWarning_C* UW_XboxCrossplayWarning_C::GetDefaultObj()
{
	static class UW_XboxCrossplayWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_XboxCrossplayWarning_C*>(UW_XboxCrossplayWarning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_XboxCrossplayWarning.W_XboxCrossplayWarning_C.WidgetAnimationEvt_Countdown_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UW_XboxCrossplayWarning_C::WidgetAnimationEvt_Countdown_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_XboxCrossplayWarning_C", "WidgetAnimationEvt_Countdown_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_XboxCrossplayWarning.W_XboxCrossplayWarning_C.SetUseCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInUseCountdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_XboxCrossplayWarning_C::SetUseCountdown(bool bInUseCountdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_XboxCrossplayWarning_C", "SetUseCountdown");

	Params::UW_XboxCrossplayWarning_C_SetUseCountdown_Params Parms{};

	Parms.bInUseCountdown = bInUseCountdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_XboxCrossplayWarning.W_XboxCrossplayWarning_C.ExecuteUbergraph_W_XboxCrossplayWarning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInUseCountdown                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_XboxCrossplayWarning_C::ExecuteUbergraph_W_XboxCrossplayWarning(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bInUseCountdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_XboxCrossplayWarning_C", "ExecuteUbergraph_W_XboxCrossplayWarning");

	Params::UW_XboxCrossplayWarning_C_ExecuteUbergraph_W_XboxCrossplayWarning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_bInUseCountdown = K2Node_Event_bInUseCountdown;

	UObject::ProcessEvent(Func, &Parms);

}

}


