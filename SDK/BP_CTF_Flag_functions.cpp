#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CTF_Flag.BP_CTF_Flag_C
// (Actor)

class UClass* ABP_CTF_Flag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CTF_Flag_C");

	return Clss;
}


// BP_CTF_Flag_C BP_CTF_Flag.Default__BP_CTF_Flag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CTF_Flag_C* ABP_CTF_Flag_C::GetDefaultObj()
{
	static class ABP_CTF_Flag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CTF_Flag_C*>(ABP_CTF_Flag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CTF_Flag.BP_CTF_Flag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CTF_Flag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CTF_Flag_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CTF_Flag.BP_CTF_Flag_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CTF_Flag_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CTF_Flag_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CTF_Flag.BP_CTF_Flag_C.ExecuteUbergraph_BP_CTF_Flag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBuildPirated_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CTF_Flag_C::ExecuteUbergraph_BP_CTF_Flag(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsBuildPirated_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CTF_Flag_C", "ExecuteUbergraph_BP_CTF_Flag");

	Params::ABP_CTF_Flag_C_ExecuteUbergraph_BP_CTF_Flag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsBuildPirated_ReturnValue = CallFunc_IsBuildPirated_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


