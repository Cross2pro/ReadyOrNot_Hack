#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_VIPEscort.GS_VIPEscort_C
// (Actor)

class UClass* AGS_VIPEscort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_VIPEscort_C");

	return Clss;
}


// GS_VIPEscort_C GS_VIPEscort.Default__GS_VIPEscort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_VIPEscort_C* AGS_VIPEscort_C::GetDefaultObj()
{
	static class AGS_VIPEscort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_VIPEscort_C*>(AGS_VIPEscort_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GS_VIPEscort.GS_VIPEscort_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGS_VIPEscort_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_VIPEscort_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GS_VIPEscort.GS_VIPEscort_C.ExecuteUbergraph_GS_VIPEscort
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASceneCapturePlayerCamera_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGS_VIPEscort_C::ExecuteUbergraph_GS_VIPEscort(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASceneCapturePlayerCamera_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GS_VIPEscort_C", "ExecuteUbergraph_GS_VIPEscort");

	Params::AGS_VIPEscort_C_ExecuteUbergraph_GS_VIPEscort_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


