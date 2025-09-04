#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_MP17.ANIMBP_MP17_C
// (None)

class UClass* UANIMBP_MP17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_MP17_C");

	return Clss;
}


// ANIMBP_MP17_C ANIMBP_MP17.Default__ANIMBP_MP17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_MP17_C* UANIMBP_MP17_C::GetDefaultObj()
{
	static class UANIMBP_MP17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_MP17_C*>(UANIMBP_MP17_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_MP17.ANIMBP_MP17_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_MP17_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "AnimGraph");

	Params::UANIMBP_MP17_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP17_AnimGraphNode_BlendListByBool_123DC5DC4586F1C5448237AA97A16CFD
// (BlueprintEvent)
// Parameters:

void UANIMBP_MP17_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP17_AnimGraphNode_BlendListByBool_123DC5DC4586F1C5448237AA97A16CFD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_MP17_AnimGraphNode_BlendListByBool_123DC5DC4586F1C5448237AA97A16CFD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP17_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP17_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MP17_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_MP17_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.AnimNotify_HideOTRMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UANIMBP_MP17_C::AnimNotify_HideOTRMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "AnimNotify_HideOTRMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ANIMBP_MP17.ANIMBP_MP17_C.ExecuteUbergraph_ANIMBP_MP17
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeaponOTR*      K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeaponOTR*      K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_MP17_C::ExecuteUbergraph_ANIMBP_MP17(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeaponOTR* K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class ABaseMagazineWeaponOTR* K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_MP17_C", "ExecuteUbergraph_ANIMBP_MP17");

	Params::UANIMBP_MP17_C_ExecuteUbergraph_ANIMBP_MP17_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR = K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR_1 = K2Node_DynamicCast_AsBase_Magazine_Weapon_OTR_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


