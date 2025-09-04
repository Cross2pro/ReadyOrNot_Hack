#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_SurrenderTimeConfig.AG_SurrenderTimeConfig_C
// (None)

class UClass* UAG_SurrenderTimeConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_SurrenderTimeConfig_C");

	return Clss;
}


// AG_SurrenderTimeConfig_C AG_SurrenderTimeConfig.Default__AG_SurrenderTimeConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_SurrenderTimeConfig_C* UAG_SurrenderTimeConfig_C::GetDefaultObj()
{
	static class UAG_SurrenderTimeConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_SurrenderTimeConfig_C*>(UAG_SurrenderTimeConfig_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_SurrenderTimeConfig.AG_SurrenderTimeConfig_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_SurrenderTimeConfig_C::CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_SurrenderTimeConfig_C", "CanOpen");

	Params::UAG_SurrenderTimeConfig_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


