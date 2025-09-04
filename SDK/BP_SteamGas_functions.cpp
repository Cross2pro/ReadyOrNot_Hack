#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SteamGas.BP_SteamGas_C
// (Actor)

class UClass* ABP_SteamGas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SteamGas_C");

	return Clss;
}


// BP_SteamGas_C BP_SteamGas.Default__BP_SteamGas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SteamGas_C* ABP_SteamGas_C::GetDefaultObj()
{
	static class ABP_SteamGas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SteamGas_C*>(ABP_SteamGas_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SteamGas.BP_SteamGas_C.GetGasRadius
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_SteamGas_C::GetGasRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "GetGasRadius");

	Params::ABP_SteamGas_C_GetGasRadius_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.GetScoringComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UScoringComponent*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UScoringComponent* ABP_SteamGas_C::GetScoringComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "GetScoringComponent");

	Params::ABP_SteamGas_C_GetScoringComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.GetInteractableComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInteractableComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UInteractableComponent* ABP_SteamGas_C::GetInteractableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "GetInteractableComponent");

	Params::ABP_SteamGas_C_GetInteractableComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanShowActionSlot1
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanShowActionSlot1(class AReadyOrNotCharacter* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanShowActionSlot1");

	Params::ABP_SteamGas_C_CanShowActionSlot1_Params Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanInteractThroughHitActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanInteractThroughHitActors(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanInteractThroughHitActors");

	Params::ABP_SteamGas_C_CanInteractThroughHitActors_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanInteract");

	Params::ABP_SteamGas_C_CanInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanPing
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanPing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanPing");

	Params::ABP_SteamGas_C_CanPing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanIssueCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanIssueCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanIssueCommand");

	Params::ABP_SteamGas_C_CanIssueCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanBeSecuredByTrailers
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanBeSecuredByTrailers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanBeSecuredByTrailers");

	Params::ABP_SteamGas_C_CanBeSecuredByTrailers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.CanBeSecured
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SteamGas_C::CanBeSecured()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "CanBeSecured");

	Params::ABP_SteamGas_C_CanBeSecured_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SteamGas.BP_SteamGas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SteamGas_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SteamGas.BP_SteamGas_C.Secure
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::Secure(class AReadyOrNotCharacter* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "Secure");

	Params::ABP_SteamGas_C_Secure_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SteamGas.BP_SteamGas_C.DoubleTapInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::DoubleTapInteract(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "DoubleTapInteract");

	Params::ABP_SteamGas_C_DoubleTapInteract_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SteamGas.BP_SteamGas_C.Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::Interact(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "Interact");

	Params::ABP_SteamGas_C_Interact_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SteamGas.BP_SteamGas_C.OnFocusGain
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::OnFocusGain(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "OnFocusGain");

	Params::ABP_SteamGas_C_OnFocusGain_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SteamGas.BP_SteamGas_C.OnFocusLost
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InteractInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      InInteractableComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::OnFocusLost(class AReadyOrNotCharacter* InteractInstigator, class UInteractableComponent* InInteractableComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "OnFocusLost");

	Params::ABP_SteamGas_C_OnFocusLost_Params Parms{};

	Parms.InteractInstigator = InteractInstigator;
	Parms.InInteractableComponent = InInteractableComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SteamGas.BP_SteamGas_C.ExecuteUbergraph_BP_SteamGas
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_InteractInstigator_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      K2Node_Event_InInteractableComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SteamGas_C::ExecuteUbergraph_BP_SteamGas(int32 EntryPoint, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator, class UInteractableComponent* K2Node_Event_InInteractableComponent, class AReadyOrNotCharacter* K2Node_Event_Instigator, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_3, class UInteractableComponent* K2Node_Event_InInteractableComponent_3, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_2, class UInteractableComponent* K2Node_Event_InInteractableComponent_2, class AReadyOrNotCharacter* K2Node_Event_InteractInstigator_1, class UInteractableComponent* K2Node_Event_InInteractableComponent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SteamGas_C", "ExecuteUbergraph_BP_SteamGas");

	Params::ABP_SteamGas_C_ExecuteUbergraph_BP_SteamGas_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InteractInstigator = K2Node_Event_InteractInstigator;
	Parms.K2Node_Event_InInteractableComponent = K2Node_Event_InInteractableComponent;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_InteractInstigator_3 = K2Node_Event_InteractInstigator_3;
	Parms.K2Node_Event_InInteractableComponent_3 = K2Node_Event_InInteractableComponent_3;
	Parms.K2Node_Event_InteractInstigator_2 = K2Node_Event_InteractInstigator_2;
	Parms.K2Node_Event_InInteractableComponent_2 = K2Node_Event_InInteractableComponent_2;
	Parms.K2Node_Event_InteractInstigator_1 = K2Node_Event_InteractInstigator_1;
	Parms.K2Node_Event_InInteractableComponent_1 = K2Node_Event_InInteractableComponent_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


