#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Primary_Mossberg590Mv2.BP_Primary_Mossberg590Mv2_C
// (Actor)

class UClass* ABP_Primary_Mossberg590Mv2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Primary_Mossberg590Mv2_C");

	return Clss;
}


// BP_Primary_Mossberg590Mv2_C BP_Primary_Mossberg590Mv2.Default__BP_Primary_Mossberg590Mv2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Primary_Mossberg590Mv2_C* ABP_Primary_Mossberg590Mv2_C::GetDefaultObj()
{
	static class ABP_Primary_Mossberg590Mv2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Primary_Mossberg590Mv2_C*>(ABP_Primary_Mossberg590Mv2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Primary_Mossberg590Mv2.BP_Primary_Mossberg590Mv2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Primary_Mossberg590Mv2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Primary_Mossberg590Mv2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Primary_Mossberg590Mv2.BP_Primary_Mossberg590Mv2_C.ExecuteUbergraph_BP_Primary_Mossberg590Mv2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Primary_Mossberg590Mv2_C::ExecuteUbergraph_BP_Primary_Mossberg590Mv2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Primary_Mossberg590Mv2_C", "ExecuteUbergraph_BP_Primary_Mossberg590Mv2");

	Params::ABP_Primary_Mossberg590Mv2_C_ExecuteUbergraph_BP_Primary_Mossberg590Mv2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


