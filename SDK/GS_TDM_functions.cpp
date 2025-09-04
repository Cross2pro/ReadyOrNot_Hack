#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_TDM.GS_TDM_C
// (Actor)

class UClass* AGS_TDM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_TDM_C");

	return Clss;
}


// GS_TDM_C GS_TDM.Default__GS_TDM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_TDM_C* AGS_TDM_C::GetDefaultObj()
{
	static class AGS_TDM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_TDM_C*>(AGS_TDM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GS_TDM.GS_TDM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGS_TDM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_TDM_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GS_TDM.GS_TDM_C.ExecuteUbergraph_GS_TDM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGS_TDM_C::ExecuteUbergraph_GS_TDM(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_TDM_C", "ExecuteUbergraph_GS_TDM");

	Params::AGS_TDM_C_ExecuteUbergraph_GS_TDM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


