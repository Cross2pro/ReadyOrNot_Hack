#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.GetGasRadius
struct ABP_SteamGas_C_GetGasRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.GetScoringComponent
struct ABP_SteamGas_C_GetScoringComponent_Params
{
public:
	class UScoringComponent*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.GetInteractableComponent
struct ABP_SteamGas_C_GetInteractableComponent_Params
{
public:
	class UInteractableComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanShowActionSlot1
struct ABP_SteamGas_C_CanShowActionSlot1_Params
{
public:
	class AReadyOrNotCharacter*                  PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanInteractThroughHitActors
struct ABP_SteamGas_C_CanInteractThroughHitActors_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanInteract
struct ABP_SteamGas_C_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanPing
struct ABP_SteamGas_C_CanPing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanIssueCommand
struct ABP_SteamGas_C_CanIssueCommand_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanBeSecuredByTrailers
struct ABP_SteamGas_C_CanBeSecuredByTrailers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.CanBeSecured
struct ABP_SteamGas_C_CanBeSecured_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.Secure
struct ABP_SteamGas_C_Secure_Params
{
public:
	class AReadyOrNotCharacter*                  Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.DoubleTapInteract
struct ABP_SteamGas_C_DoubleTapInteract_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.Interact
struct ABP_SteamGas_C_Interact_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.OnFocusGain
struct ABP_SteamGas_C_OnFocusGain_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.OnFocusLost
struct ABP_SteamGas_C_OnFocusLost_Params
{
public:
	class AReadyOrNotCharacter*                  InteractInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                InInteractableComponent;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_SteamGas.BP_SteamGas_C.ExecuteUbergraph_BP_SteamGas
struct ABP_SteamGas_C_ExecuteUbergraph_BP_SteamGas_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent;              // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_Instigator;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_3;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_3;            // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_2;                 // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_2;            // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_Event_InteractInstigator_1;                 // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractableComponent*                K2Node_Event_InInteractableComponent_1;            // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


