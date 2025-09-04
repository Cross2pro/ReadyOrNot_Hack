#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_IsLeavingSurrenderedState.AG_IsLeavingSurrenderedState_C
// (None)

class UClass* UAG_IsLeavingSurrenderedState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_IsLeavingSurrenderedState_C");

	return Clss;
}


// AG_IsLeavingSurrenderedState_C AG_IsLeavingSurrenderedState.Default__AG_IsLeavingSurrenderedState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_IsLeavingSurrenderedState_C* UAG_IsLeavingSurrenderedState_C::GetDefaultObj()
{
	static class UAG_IsLeavingSurrenderedState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_IsLeavingSurrenderedState_C*>(UAG_IsLeavingSurrenderedState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_IsLeavingSurrenderedState.AG_IsLeavingSurrenderedState_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExitingSurrender_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_IsLeavingSurrenderedState_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsExitingSurrender_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_IsLeavingSurrenderedState_C", "CanOpen");

	Params::UAG_IsLeavingSurrenderedState_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_IsExitingSurrender_ReturnValue = CallFunc_IsExitingSurrender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


