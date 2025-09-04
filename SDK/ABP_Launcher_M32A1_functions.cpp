#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Launcher_M32A1.ABP_Launcher_M32A1_C
// (None)

class UClass* UABP_Launcher_M32A1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Launcher_M32A1_C");

	return Clss;
}


// ABP_Launcher_M32A1_C ABP_Launcher_M32A1.Default__ABP_Launcher_M32A1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Launcher_M32A1_C* UABP_Launcher_M32A1_C::GetDefaultObj()
{
	static class UABP_Launcher_M32A1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Launcher_M32A1_C*>(UABP_Launcher_M32A1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Launcher_M32A1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimGraph");

	Params::UABP_Launcher_M32A1_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.SpawnStaticShellWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEmptyShell                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSmokeShell                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CurrentShellSpawnClass                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ShellActor_C*            K2Node_DynamicCast_AsBP_Shell_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Launcher_M32A1_C::SpawnStaticShellWorld(class FName BoneName, bool bIsEmptyShell, bool bIsSmokeShell, class UClass* CurrentShellSpawnClass, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ShellActor_C* K2Node_DynamicCast_AsBP_Shell_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "SpawnStaticShellWorld");

	Params::UABP_Launcher_M32A1_C_SpawnStaticShellWorld_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.bIsEmptyShell = bIsEmptyShell;
	Parms.bIsSmokeShell = bIsSmokeShell;
	Parms.CurrentShellSpawnClass = CurrentShellSpawnClass;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Shell_Actor = K2Node_DynamicCast_AsBP_Shell_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.HideAllShells
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::HideAllShells()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "HideAllShells");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.ResetShellStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::ResetShellStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "ResetShellStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.UpdateShellStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShellIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Launcher_M32A1_C::UpdateShellStatus(int32 ShellIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "UpdateShellStatus");

	Params::UABP_Launcher_M32A1_C_UpdateShellStatus_Params Parms{};

	Parms.ShellIndex = ShellIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_35821CF043ECADCE015ABAA931B74AE3
// (BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_35821CF043ECADCE015ABAA931B74AE3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_35821CF043ECADCE015ABAA931B74AE3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_BF147BE247C77A91A0739BA2CAA1870C
// (BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_BF147BE247C77A91A0739BA2CAA1870C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_BF147BE247C77A91A0739BA2CAA1870C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Launcher_M32A1_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "BlueprintUpdateAnimation");

	Params::UABP_Launcher_M32A1_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_RotateCylinder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_RotateCylinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_RotateCylinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_ResetCylinder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_ResetCylinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_ResetCylinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_ShowSpeedLoader
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_ShowSpeedLoader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_ShowSpeedLoader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_HideSpeedLoader
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_HideSpeedLoader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_HideSpeedLoader");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_HideShells
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_HideShells()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_HideShells");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.AnimNotify_ShowShells
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::AnimNotify_ShowShells()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "AnimNotify_ShowShells");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.HideAndSpawnShellsEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::HideAndSpawnShellsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "HideAndSpawnShellsEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.ShowShellsEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Launcher_M32A1_C::ShowShellsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "ShowShellsEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Launcher_M32A1.ABP_Launcher_M32A1_C.ExecuteUbergraph_ABP_Launcher_M32A1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Launcher_M32A1_C::ExecuteUbergraph_ABP_Launcher_M32A1(int32 EntryPoint, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Launcher_M32A1_C", "ExecuteUbergraph_ABP_Launcher_M32A1");

	Params::UABP_Launcher_M32A1_C_ExecuteUbergraph_ABP_Launcher_M32A1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


