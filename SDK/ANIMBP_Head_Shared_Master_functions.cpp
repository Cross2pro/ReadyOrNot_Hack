#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C
// (None)

class UClass* UANIMBP_Head_Shared_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Head_Shared_Master_C");

	return Clss;
}


// ANIMBP_Head_Shared_Master_C ANIMBP_Head_Shared_Master.Default__ANIMBP_Head_Shared_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Head_Shared_Master_C* UANIMBP_Head_Shared_Master_C::GetDefaultObj()
{
	static class UANIMBP_Head_Shared_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Head_Shared_Master_C*>(UANIMBP_Head_Shared_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Head_Shared_Master_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "AnimGraph");

	Params::UANIMBP_Head_Shared_Master_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.On Lip Sync Anim Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetExplicitTime_Time_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Head_Shared_Master_C::On_Lip_Sync_Anim_Update(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetExplicitTime_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "On Lip Sync Anim Update");

	Params::UANIMBP_Head_Shared_Master_C_On_Lip_Sync_Anim_Update_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetExplicitTime_Time_ImplicitCast = CallFunc_SetExplicitTime_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Head_Shared_Master_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Head_Shared_Master_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C.ExecuteUbergraph_ANIMBP_Head_Shared_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterEmotion       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIncapacitated_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterEmotion       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EmotionWeight_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Head_Shared_Master_C::ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32 EntryPoint, enum class ECharacterEmotion Temp_byte_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool Temp_bool_Variable, enum class ECharacterEmotion K2Node_Select_Default, double K2Node_VariableSet_EmotionWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Head_Shared_Master_C", "ExecuteUbergraph_ANIMBP_Head_Shared_Master");

	Params::UANIMBP_Head_Shared_Master_C_ExecuteUbergraph_ANIMBP_Head_Shared_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsIncapacitated_ReturnValue = CallFunc_IsIncapacitated_ReturnValue;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_VariableSet_EmotionWeight_ImplicitCast = K2Node_VariableSet_EmotionWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


