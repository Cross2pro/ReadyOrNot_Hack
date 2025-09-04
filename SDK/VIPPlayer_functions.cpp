#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VIPPlayer.VIPPlayer_C
// (Actor, Pawn)

class UClass* AVIPPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VIPPlayer_C");

	return Clss;
}


// VIPPlayer_C VIPPlayer.Default__VIPPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVIPPlayer_C* AVIPPlayer_C::GetDefaultObj()
{
	static class AVIPPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVIPPlayer_C*>(AVIPPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VIPPlayer.VIPPlayer_C.ExecuteUbergraph_VIPPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVIPPlayer_C::ExecuteUbergraph_VIPPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VIPPlayer_C", "ExecuteUbergraph_VIPPlayer");

	Params::AVIPPlayer_C_ExecuteUbergraph_VIPPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


