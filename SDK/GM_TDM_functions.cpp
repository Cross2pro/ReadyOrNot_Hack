#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_TDM.GM_TDM_C
// (Actor)

class UClass* AGM_TDM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_TDM_C");

	return Clss;
}


// GM_TDM_C GM_TDM.Default__GM_TDM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_TDM_C* AGM_TDM_C::GetDefaultObj()
{
	static class AGM_TDM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_TDM_C*>(AGM_TDM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GM_TDM.GM_TDM_C.StartNextRound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETeamType               WinningTeam                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGM_TDM_C::StartNextRound(enum class ETeamType WinningTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GM_TDM_C", "StartNextRound");

	Params::AGM_TDM_C_StartNextRound_Params Parms{};

	Parms.WinningTeam = WinningTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GM_TDM.GM_TDM_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGM_TDM_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GM_TDM_C", "ReceiveTick");

	Params::AGM_TDM_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GM_TDM.GM_TDM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGM_TDM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GM_TDM_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GM_TDM.GM_TDM_C.ExecuteUbergraph_GM_TDM
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGM_TDM_C::ExecuteUbergraph_GM_TDM(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GM_TDM_C", "ExecuteUbergraph_GM_TDM");

	Params::AGM_TDM_C_ExecuteUbergraph_GM_TDM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GM_TDM.GM_TDM_C.OnRoundResetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGM_TDM_C::OnRoundResetComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GM_TDM_C", "OnRoundResetComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


