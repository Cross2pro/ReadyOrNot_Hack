#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_AIConfigValue_TimeSinceGameStart.AG_AIConfigValue_TimeSinceGameStart_C
// (None)

class UClass* UAG_AIConfigValue_TimeSinceGameStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_AIConfigValue_TimeSinceGameStart_C");

	return Clss;
}


// AG_AIConfigValue_TimeSinceGameStart_C AG_AIConfigValue_TimeSinceGameStart.Default__AG_AIConfigValue_TimeSinceGameStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_AIConfigValue_TimeSinceGameStart_C* UAG_AIConfigValue_TimeSinceGameStart_C::GetDefaultObj()
{
	static class UAG_AIConfigValue_TimeSinceGameStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_AIConfigValue_TimeSinceGameStart_C*>(UAG_AIConfigValue_TimeSinceGameStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_AIConfigValue_TimeSinceGameStart.AG_AIConfigValue_TimeSinceGameStart_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue_3                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotAIConfig*         CallFunc_Get_ReturnValue_4                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloat_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_AIConfigValue_TimeSinceGameStart_C::CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_1, float CallFunc_GetFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_2, float CallFunc_GetFloat_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_3, float CallFunc_GetFloat_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_4, float CallFunc_GetFloat_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_AIConfigValue_TimeSinceGameStart_C", "CanOpen");

	Params::UAG_AIConfigValue_TimeSinceGameStart_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Get_ReturnValue = CallFunc_Get_ReturnValue;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue = CallFunc_GetGameTimeSinceCreation_ReturnValue;
	Parms.CallFunc_GetFloat_ReturnValue = CallFunc_GetFloat_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_ReturnValue_1 = CallFunc_Get_ReturnValue_1;
	Parms.CallFunc_GetFloat_ReturnValue_1 = CallFunc_GetFloat_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_ReturnValue_2 = CallFunc_Get_ReturnValue_2;
	Parms.CallFunc_GetFloat_ReturnValue_2 = CallFunc_GetFloat_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_ReturnValue_3 = CallFunc_Get_ReturnValue_3;
	Parms.CallFunc_GetFloat_ReturnValue_3 = CallFunc_GetFloat_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_ReturnValue_4 = CallFunc_Get_ReturnValue_4;
	Parms.CallFunc_GetFloat_ReturnValue_4 = CallFunc_GetFloat_ReturnValue_4;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


