#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C
// (None)

class UClass* UANIMBP_Player_TP_V4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Player_TP_V4_C");

	return Clss;
}


// ANIMBP_Player_TP_V4_C ANIMBP_Player_TP_V4.Default__ANIMBP_Player_TP_V4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Player_TP_V4_C* UANIMBP_Player_TP_V4_C::GetDefaultObj()
{
	static class UANIMBP_Player_TP_V4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Player_TP_V4_C*>(UANIMBP_Player_TP_V4_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Player_TP_V4_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "AnimGraph");

	Params::UANIMBP_Player_TP_V4_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetActiveTurnRecoveryAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// struct FSequencePlayerReference    CallFunc_SetAccumulatedTime_ReturnValue                          (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetActiveTurnRecoveryAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetAccumulatedTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetActiveTurnRecoveryAnim");

	Params::UANIMBP_Player_TP_V4_C_SetActiveTurnRecoveryAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.CallFunc_SetAccumulatedTime_ReturnValue = CallFunc_SetAccumulatedTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetActiveTurnAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetActiveTurnAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetActiveTurnAnim");

	Params::UANIMBP_Player_TP_V4_C_SetActiveTurnAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateActiveTurnAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateActiveTurnAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateActiveTurnAnim");

	Params::UANIMBP_Player_TP_V4_C_UpdateActiveTurnAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateItemIdleOverridePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateItemIdleOverridePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateItemIdleOverridePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateItemIdleOverridePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateShieldAimPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateShieldAimPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateShieldAimPose");

	Params::UANIMBP_Player_TP_V4_C_UpdateShieldAimPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateTaserLoopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateTaserLoopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateTaserLoopAnim");

	Params::UANIMBP_Player_TP_V4_C_UpdateTaserLoopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateStunLoopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateStunLoopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateStunLoopAnim");

	Params::UANIMBP_Player_TP_V4_C_UpdateStunLoopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLeanRightPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateLeanRightPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, float K2Node_Select_Default_1, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateLeanRightPose");

	Params::UANIMBP_Player_TP_V4_C_UpdateLeanRightPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLeanLeftPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateLeanLeftPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, float K2Node_Select_Default_1, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateLeanLeftPose");

	Params::UANIMBP_Player_TP_V4_C_UpdateLeanLeftPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateJumpLoopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateJumpLoopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateJumpLoopAnim");

	Params::UANIMBP_Player_TP_V4_C_UpdateJumpLoopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetJumpStartAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetJumpStartAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetJumpStartAnim");

	Params::UANIMBP_Player_TP_V4_C_SetJumpStartAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetCrouchToStandAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetCrouchToStandAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetCrouchToStandAnim");

	Params::UANIMBP_Player_TP_V4_C_SetCrouchToStandAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetStandToCrouchAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetStandToCrouchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetStandToCrouchAnim");

	Params::UANIMBP_Player_TP_V4_C_SetStandToCrouchAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateHighLeanAdditivePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateHighLeanAdditivePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateHighLeanAdditivePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateHighLeanAdditivePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateJumpRecoveryAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateJumpRecoveryAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateJumpRecoveryAnim");

	Params::UANIMBP_Player_TP_V4_C_UpdateJumpRecoveryAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateQuickLeanRightPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateQuickLeanRightPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateQuickLeanRightPose");

	Params::UANIMBP_Player_TP_V4_C_UpdateQuickLeanRightPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateQuickLeanLeftPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateQuickLeanLeftPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateQuickLeanLeftPose");

	Params::UANIMBP_Player_TP_V4_C_UpdateQuickLeanLeftPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateRetentionAdditivePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateRetentionAdditivePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UAnimSequenceBase* K2Node_Select_Default, class UAnimSequenceBase* K2Node_Select_Default_1, class UAnimSequenceBase* K2Node_Select_Default_2, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateRetentionAdditivePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateRetentionAdditivePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateSightsAdditivePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateSightsAdditivePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateSightsAdditivePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateSightsAdditivePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLoweredAdditivePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateLoweredAdditivePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateLoweredAdditivePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateLoweredAdditivePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateBaseOverridePose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateBaseOverridePose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateBaseOverridePose");

	Params::UANIMBP_Player_TP_V4_C_UpdateBaseOverridePose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateCurrentAOBS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FBlendSpacePlayerReference  CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer          (NoDestructor)
// bool                               CallFunc_ConvertToBlendSpacePlayerPure_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAimOffsetBlendSpace*        K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue           (NoDestructor)

void UANIMBP_Player_TP_V4_C::UpdateCurrentAOBS(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, bool Temp_bool_Variable, class UAimOffsetBlendSpace* K2Node_Select_Default, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "UpdateCurrentAOBS");

	Params::UANIMBP_Player_TP_V4_C_UpdateCurrentAOBS_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer = CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_Result = CallFunc_ConvertToBlendSpacePlayerPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue = CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetWeaponGripPose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference SeqEval                                                          (Edit, BlueprintVisible, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue_1                               (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue_2                               (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue_3                               (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue_4                               (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue_5                               (NoDestructor)

void UANIMBP_Player_TP_V4_C::SetWeaponGripPose(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& SeqEval, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_1, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_2, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_3, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_4, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "SetWeaponGripPose");

	Params::UANIMBP_Player_TP_V4_C_SetWeaponGripPose_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.SeqEval = SeqEval;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetSequence_ReturnValue = CallFunc_SetSequence_ReturnValue;
	Parms.CallFunc_SetSequence_ReturnValue_1 = CallFunc_SetSequence_ReturnValue_1;
	Parms.CallFunc_SetSequence_ReturnValue_2 = CallFunc_SetSequence_ReturnValue_2;
	Parms.CallFunc_SetSequence_ReturnValue_3 = CallFunc_SetSequence_ReturnValue_3;
	Parms.CallFunc_SetSequence_ReturnValue_4 = CallFunc_SetSequence_ReturnValue_4;
	Parms.CallFunc_SetSequence_ReturnValue_5 = CallFunc_SetSequence_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Player_TP_V4_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Player_TP_V4_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.AnimNotify_PlayFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V4_C::AnimNotify_PlayFootstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "AnimNotify_PlayFootstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.AnimNotify_ShowTPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V4_C::AnimNotify_ShowTPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "AnimNotify_ShowTPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.AnimNotify_HideTPMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_Player_TP_V4_C::AnimNotify_HideTPMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "AnimNotify_HideTPMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.ExecuteUbergraph_ANIMBP_Player_TP_V4
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetItemMesh_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Player_TP_V4_C::ExecuteUbergraph_ANIMBP_Player_TP_V4(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Player_TP_V4_C", "ExecuteUbergraph_ANIMBP_Player_TP_V4");

	Params::UANIMBP_Player_TP_V4_C_ExecuteUbergraph_ANIMBP_Player_TP_V4_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemMesh_ReturnValue = CallFunc_GetItemMesh_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue_1 = CallFunc_GetEquippedItem_ReturnValue_1;
	Parms.CallFunc_GetItemMesh_ReturnValue_1 = CallFunc_GetItemMesh_ReturnValue_1;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_2 = CallFunc_TryGetPawnOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


