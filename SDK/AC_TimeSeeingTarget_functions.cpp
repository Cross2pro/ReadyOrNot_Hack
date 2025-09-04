#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_TimeSeeingTarget.AC_TimeSeeingTarget_C
// (None)

class UClass* UAC_TimeSeeingTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_TimeSeeingTarget_C");

	return Clss;
}


// AC_TimeSeeingTarget_C AC_TimeSeeingTarget.Default__AC_TimeSeeingTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_TimeSeeingTarget_C* UAC_TimeSeeingTarget_C::GetDefaultObj()
{
	static class UAC_TimeSeeingTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_TimeSeeingTarget_C*>(UAC_TimeSeeingTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_TimeSeeingTarget.AC_TimeSeeingTarget_C.Score
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAC_TimeSeeingTarget_C::Score(struct FAIActionDecisionContext& Context, bool* bSuccess, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast_2, float K2Node_FunctionResult_ReturnValue_ImplicitCast_3, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast_1, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast_2, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast_2, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast_3, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_TimeSeeingTarget_C", "Score");

	Params::UAC_TimeSeeingTarget_C_Score_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_1 = K2Node_FunctionResult_ReturnValue_ImplicitCast_1;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_2 = K2Node_FunctionResult_ReturnValue_ImplicitCast_2;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_3 = K2Node_FunctionResult_ReturnValue_ImplicitCast_3;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast = CallFunc_MapRangeClamped_InRangeA_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast_1 = CallFunc_MapRangeClamped_InRangeB_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_2 = CallFunc_MapRangeClamped_Value_ImplicitCast_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_3 = CallFunc_MapRangeClamped_Value_ImplicitCast_3;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast_1 = CallFunc_MapRangeClamped_InRangeA_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast_2 = CallFunc_MapRangeClamped_InRangeB_ImplicitCast_2;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast_2 = CallFunc_MapRangeClamped_InRangeA_ImplicitCast_2;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast_3 = CallFunc_MapRangeClamped_InRangeB_ImplicitCast_3;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast_3 = CallFunc_MapRangeClamped_InRangeA_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}

}


