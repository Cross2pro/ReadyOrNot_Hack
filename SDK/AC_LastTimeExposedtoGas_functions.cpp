#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_LastTimeExposedtoGas.AC_LastTimeExposedtoGas_C
// (None)

class UClass* UAC_LastTimeExposedtoGas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_LastTimeExposedtoGas_C");

	return Clss;
}


// AC_LastTimeExposedtoGas_C AC_LastTimeExposedtoGas.Default__AC_LastTimeExposedtoGas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_LastTimeExposedtoGas_C* UAC_LastTimeExposedtoGas_C::GetDefaultObj()
{
	static class UAC_LastTimeExposedtoGas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_LastTimeExposedtoGas_C*>(UAC_LastTimeExposedtoGas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_LastTimeExposedtoGas.AC_LastTimeExposedtoGas_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceLastTookStunDamageOfType_TimeSinceTookStunDamage(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTimeSinceLastTookStunDamageOfType_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_LastTimeExposedtoGas_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetTimeSinceLastTookStunDamageOfType_TimeSinceTookStunDamage, bool CallFunc_GetTimeSinceLastTookStunDamageOfType_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_LastTimeExposedtoGas_C", "Score");

	Params::UAC_LastTimeExposedtoGas_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetTimeSinceLastTookStunDamageOfType_TimeSinceTookStunDamage = CallFunc_GetTimeSinceLastTookStunDamageOfType_TimeSinceTookStunDamage;
	Parms.CallFunc_GetTimeSinceLastTookStunDamageOfType_ReturnValue = CallFunc_GetTimeSinceLastTookStunDamageOfType_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast = CallFunc_MapRangeClamped_InRangeA_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


