#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplaySocket.W_ReplaySocket_C
// (None)

class UClass* UW_ReplaySocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplaySocket_C");

	return Clss;
}


// W_ReplaySocket_C W_ReplaySocket.Default__W_ReplaySocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplaySocket_C* UW_ReplaySocket_C::GetDefaultObj()
{
	static class UW_ReplaySocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplaySocket_C*>(UW_ReplaySocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplaySocket.W_ReplaySocket_C.BndEvt__W_ReplaySocket_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplaySocket_C::BndEvt__W_ReplaySocket_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplaySocket_C", "BndEvt__W_ReplaySocket_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplaySocket.W_ReplaySocket_C.ExecuteUbergraph_W_ReplaySocket
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplaySocket_C::ExecuteUbergraph_W_ReplaySocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplaySocket_C", "ExecuteUbergraph_W_ReplaySocket");

	Params::UW_ReplaySocket_C_ExecuteUbergraph_W_ReplaySocket_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


