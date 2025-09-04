#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C
// (None)

class UClass* UPPR_WasPlayerHitFromLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PPR_WasPlayerHitFromLeft_C");

	return Clss;
}


// PPR_WasPlayerHitFromLeft_C PPR_WasPlayerHitFromLeft.Default__PPR_WasPlayerHitFromLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPPR_WasPlayerHitFromLeft_C* UPPR_WasPlayerHitFromLeft_C::GetDefaultObj()
{
	static class UPPR_WasPlayerHitFromLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPPR_WasPlayerHitFromLeft_C*>(UPPR_WasPlayerHitFromLeft_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PPR_WasPlayerHitFromLeft.PPR_WasPlayerHitFromLeft_C.EnablePostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPPR_WasPlayerHitFromLeft_C::EnablePostProcessEffect(bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PPR_WasPlayerHitFromLeft_C", "EnablePostProcessEffect");

	Params::UPPR_WasPlayerHitFromLeft_C_EnablePostProcessEffect_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


