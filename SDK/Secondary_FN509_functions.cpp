#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_FN509.Secondary_FN509_C
// (Actor)

class UClass* ASecondary_FN509_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_FN509_C");

	return Clss;
}


// Secondary_FN509_C Secondary_FN509.Default__Secondary_FN509_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_FN509_C* ASecondary_FN509_C::GetDefaultObj()
{
	static class ASecondary_FN509_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_FN509_C*>(ASecondary_FN509_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Secondary_FN509.Secondary_FN509_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_FN509_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FN509_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_FN509.Secondary_FN509_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASecondary_FN509_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FN509_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Secondary_FN509.Secondary_FN509_C.ExecuteUbergraph_Secondary_FN509
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASecondary_FN509_C::ExecuteUbergraph_Secondary_FN509(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Secondary_FN509_C", "ExecuteUbergraph_Secondary_FN509");

	Params::ASecondary_FN509_C_ExecuteUbergraph_Secondary_FN509_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


