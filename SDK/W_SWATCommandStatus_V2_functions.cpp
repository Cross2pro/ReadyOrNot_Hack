#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C
// (None)

class UClass* UW_SWATCommandStatus_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SWATCommandStatus_V2_C");

	return Clss;
}


// W_SWATCommandStatus_V2_C W_SWATCommandStatus_V2.Default__W_SWATCommandStatus_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SWATCommandStatus_V2_C* UW_SWATCommandStatus_V2_C::GetDefaultObj()
{
	static class UW_SWATCommandStatus_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SWATCommandStatus_V2_C*>(UW_SWATCommandStatus_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C.ShoulderButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SWATCommandStatus_V2_C::ShoulderButtonPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SWATCommandStatus_V2_C", "ShoulderButtonPressed");

	Params::UW_SWATCommandStatus_V2_C_ShoulderButtonPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SWATCommandStatus_V2.W_SWATCommandStatus_V2_C.ExecuteUbergraph_W_SWATCommandStatus_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SWATCommandStatus_V2_C::ExecuteUbergraph_W_SWATCommandStatus_V2(int32 EntryPoint, bool K2Node_Event_Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SWATCommandStatus_V2_C", "ExecuteUbergraph_W_SWATCommandStatus_V2");

	Params::UW_SWATCommandStatus_V2_C_ExecuteUbergraph_W_SWATCommandStatus_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Pressed = K2Node_Event_Pressed;

	UObject::ProcessEvent(Func, &Parms);

}

}


