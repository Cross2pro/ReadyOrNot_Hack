#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Firefight.GS_Firefight_C
// (Actor)

class UClass* AGS_Firefight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Firefight_C");

	return Clss;
}


// GS_Firefight_C GS_Firefight.Default__GS_Firefight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Firefight_C* AGS_Firefight_C::GetDefaultObj()
{
	static class AGS_Firefight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Firefight_C*>(AGS_Firefight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GS_Firefight.GS_Firefight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGS_Firefight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_Firefight_C", "ReceiveTick");

	Params::AGS_Firefight_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GS_Firefight.GS_Firefight_C.ExecuteUbergraph_GS_Firefight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGS_Firefight_C::ExecuteUbergraph_GS_Firefight(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_Firefight_C", "ExecuteUbergraph_GS_Firefight");

	Params::AGS_Firefight_C_ExecuteUbergraph_GS_Firefight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


