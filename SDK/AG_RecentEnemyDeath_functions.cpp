#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_RecentEnemyDeath.AG_RecentEnemyDeath_C
// (None)

class UClass* UAG_RecentEnemyDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_RecentEnemyDeath_C");

	return Clss;
}


// AG_RecentEnemyDeath_C AG_RecentEnemyDeath.Default__AG_RecentEnemyDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_RecentEnemyDeath_C* UAG_RecentEnemyDeath_C::GetDefaultObj()
{
	static class UAG_RecentEnemyDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_RecentEnemyDeath_C*>(UAG_RecentEnemyDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_RecentEnemyDeath.AG_RecentEnemyDeath_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_RecentEnemyDeath_C::CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_RecentEnemyDeath_C", "CanOpen");

	Params::UAG_RecentEnemyDeath_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


