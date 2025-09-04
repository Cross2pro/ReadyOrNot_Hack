#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LOBBY_START_Blueprint.LOBBY_START_Blueprint_C
// (Actor)

class UClass* ALOBBY_START_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LOBBY_START_Blueprint_C");

	return Clss;
}


// LOBBY_START_Blueprint_C LOBBY_START_Blueprint.Default__LOBBY_START_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALOBBY_START_Blueprint_C* ALOBBY_START_Blueprint_C::GetDefaultObj()
{
	static class ALOBBY_START_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALOBBY_START_Blueprint_C*>(ALOBBY_START_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALOBBY_START_Blueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOBBY_START_Blueprint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALOBBY_START_Blueprint_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOBBY_START_Blueprint_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LOBBY_START_Blueprint.LOBBY_START_Blueprint_C.ExecuteUbergraph_LOBBY_START_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALOBBY_START_Blueprint_C::ExecuteUbergraph_LOBBY_START_Blueprint(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOBBY_START_Blueprint_C", "ExecuteUbergraph_LOBBY_START_Blueprint");

	Params::ALOBBY_START_Blueprint_C_ExecuteUbergraph_LOBBY_START_Blueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


