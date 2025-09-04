#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_FN509.ANIMBP_FN509_C
// (None)

class UClass* UANIMBP_FN509_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_FN509_C");

	return Clss;
}


// ANIMBP_FN509_C ANIMBP_FN509.Default__ANIMBP_FN509_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_FN509_C* UANIMBP_FN509_C::GetDefaultObj()
{
	static class UANIMBP_FN509_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_FN509_C*>(UANIMBP_FN509_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_FN509.ANIMBP_FN509_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_FN509_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "AnimGraph");

	Params::UANIMBP_FN509_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_6294AABA4A850F112F3366B08261D507
// (BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_6294AABA4A850F112F3366B08261D507()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_6294AABA4A850F112F3366B08261D507");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_4A7FF2E64B28459B114FA0BCBC419E8F
// (BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_4A7FF2E64B28459B114FA0BCBC419E8F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_FN509_AnimGraphNode_BlendListByBool_4A7FF2E64B28459B114FA0BCBC419E8F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FN509_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_FN509_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.AnimNotify_SlideBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::AnimNotify_SlideBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "AnimNotify_SlideBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.AnimNotify_SlideForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_FN509_C::AnimNotify_SlideForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "AnimNotify_SlideForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_FN509.ANIMBP_FN509_C.ExecuteUbergraph_ANIMBP_FN509
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_FN509_C::ExecuteUbergraph_ANIMBP_FN509(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_FN509_C", "ExecuteUbergraph_ANIMBP_FN509");

	Params::UANIMBP_FN509_C_ExecuteUbergraph_ANIMBP_FN509_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


