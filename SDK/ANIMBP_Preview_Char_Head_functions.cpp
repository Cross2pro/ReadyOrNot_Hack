#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C
// (None)

class UClass* UANIMBP_Preview_Char_Head_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Preview_Char_Head_C");

	return Clss;
}


// ANIMBP_Preview_Char_Head_C ANIMBP_Preview_Char_Head.Default__ANIMBP_Preview_Char_Head_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Preview_Char_Head_C* UANIMBP_Preview_Char_Head_C::GetDefaultObj()
{
	static class UANIMBP_Preview_Char_Head_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Preview_Char_Head_C*>(UANIMBP_Preview_Char_Head_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Preview_Char_Head_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Head_C", "AnimGraph");

	Params::UANIMBP_Preview_Char_Head_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Preview_Char_Head_AnimGraphNode_SequenceEvaluator_F8474E6A4D398410092ACBB9BF41F8AA
// (BlueprintEvent)
// Parameters:

void UANIMBP_Preview_Char_Head_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Preview_Char_Head_AnimGraphNode_SequenceEvaluator_F8474E6A4D398410092ACBB9BF41F8AA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Head_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Preview_Char_Head_AnimGraphNode_SequenceEvaluator_F8474E6A4D398410092ACBB9BF41F8AA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Preview_Char_Head_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Head_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Preview_Char_Head_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C.ExecuteUbergraph_ANIMBP_Preview_Char_Head
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Preview_Char_Head_C::ExecuteUbergraph_ANIMBP_Preview_Char_Head(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Head_C", "ExecuteUbergraph_ANIMBP_Preview_Char_Head");

	Params::UANIMBP_Preview_Char_Head_C_ExecuteUbergraph_ANIMBP_Preview_Char_Head_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPreview_Character_Template = K2Node_DynamicCast_AsPreview_Character_Template;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_ImplicitCast = K2Node_StructMemberSet___FloatProperty_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


