#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentlySeenTarget.AG_RecentlySeenTarget_C
// (None)

class UClass* UAG_RecentlySeenTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentlySeenTarget_C");

	return Clss;
}


// AG_RecentlySeenTarget_C AG_RecentlySeenTarget.Default__AG_RecentlySeenTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentlySeenTarget_C* UAG_RecentlySeenTarget_C::GetDefaultObj()
{
	static class UAG_RecentlySeenTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentlySeenTarget_C*>(UAG_RecentlySeenTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentlySeenTarget.AG_RecentlySeenTarget_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Value_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Value_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Value_ImplicitCast_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Value_ImplicitCast_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_RecentlySeenTarget_C::CanOpen(struct FAIActionDecisionContext& Context, double Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_VariableSet_Value_ImplicitCast, double K2Node_VariableSet_Value_ImplicitCast_1, double K2Node_VariableSet_Value_ImplicitCast_2, double K2Node_VariableSet_Value_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentlySeenTarget_C", "CanOpen");

	Params::UAG_RecentlySeenTarget_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.Value = Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_Value_ImplicitCast = K2Node_VariableSet_Value_ImplicitCast;
	Parms.K2Node_VariableSet_Value_ImplicitCast_1 = K2Node_VariableSet_Value_ImplicitCast_1;
	Parms.K2Node_VariableSet_Value_ImplicitCast_2 = K2Node_VariableSet_Value_ImplicitCast_2;
	Parms.K2Node_VariableSet_Value_ImplicitCast_3 = K2Node_VariableSet_Value_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


