#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TimeSinceExitedLandmark.AC_TimeSinceExitedLandmark_C
// (None)

class UClass* UAC_TimeSinceExitedLandmark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TimeSinceExitedLandmark_C");

	return Clss;
}


// AC_TimeSinceExitedLandmark_C AC_TimeSinceExitedLandmark.Default__AC_TimeSinceExitedLandmark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TimeSinceExitedLandmark_C* UAC_TimeSinceExitedLandmark_C::GetDefaultObj()
{
	static class UAC_TimeSinceExitedLandmark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TimeSinceExitedLandmark_C*>(UAC_TimeSinceExitedLandmark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TimeSinceExitedLandmark.AC_TimeSinceExitedLandmark_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TimeSinceExitedLandmark_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TimeSinceExitedLandmark_C", "Score");

	Params::UAC_TimeSinceExitedLandmark_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
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


