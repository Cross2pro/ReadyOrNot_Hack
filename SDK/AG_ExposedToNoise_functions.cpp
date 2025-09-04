#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_ExposedToNoise.AG_ExposedToNoise_C
// (None)

class UClass* UAG_ExposedToNoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_ExposedToNoise_C");

	return Clss;
}


// AG_ExposedToNoise_C AG_ExposedToNoise.Default__AG_ExposedToNoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_ExposedToNoise_C* UAG_ExposedToNoise_C::GetDefaultObj()
{
	static class UAG_ExposedToNoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_ExposedToNoise_C*>(UAG_ExposedToNoise_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_ExposedToNoise.AG_ExposedToNoise_C.CanOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenExposedToAnyNoise_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HasBeenExposedToAnyNoise_Tag_OutTag                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenExposedToAnyNoise_Tag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HasBeenExposedToAnyNoise_MaxDistance_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HasBeenExposedToAnyNoise_SinceSeconds_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HasBeenExposedToAnyNoise_Tag_MaxDistance_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HasBeenExposedToAnyNoise_Tag_SinceSeconds_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_ExposedToNoise_C::CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_HasBeenExposedToAnyNoise_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_HasBeenExposedToAnyNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAnyNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_HasBeenExposedToAnyNoise_MaxDistance_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_SinceSeconds_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_Tag_MaxDistance_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_Tag_SinceSeconds_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_ExposedToNoise_C", "CanOpen");

	Params::UAG_ExposedToNoise_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_HasBeenExposedToAnyNoise_ReturnValue = CallFunc_HasBeenExposedToAnyNoise_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenExposedToAnyNoise_Tag_OutTag = CallFunc_HasBeenExposedToAnyNoise_Tag_OutTag;
	Parms.CallFunc_HasBeenExposedToAnyNoise_Tag_ReturnValue = CallFunc_HasBeenExposedToAnyNoise_Tag_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_HasBeenExposedToAnyNoise_MaxDistance_ImplicitCast = CallFunc_HasBeenExposedToAnyNoise_MaxDistance_ImplicitCast;
	Parms.CallFunc_HasBeenExposedToAnyNoise_SinceSeconds_ImplicitCast = CallFunc_HasBeenExposedToAnyNoise_SinceSeconds_ImplicitCast;
	Parms.CallFunc_HasBeenExposedToAnyNoise_Tag_MaxDistance_ImplicitCast = CallFunc_HasBeenExposedToAnyNoise_Tag_MaxDistance_ImplicitCast;
	Parms.CallFunc_HasBeenExposedToAnyNoise_Tag_SinceSeconds_ImplicitCast = CallFunc_HasBeenExposedToAnyNoise_Tag_SinceSeconds_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


