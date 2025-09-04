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

// 0x8 (0x8 - 0x0)
// Function W_CommanderMode_Acknowledgement.W_CommanderMode_Acknowledgement_C.BP_GetDesiredFocusTarget
struct UW_CommanderMode_Acknowledgement_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CommanderMode_Acknowledgement.W_CommanderMode_Acknowledgement_C.BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UW_CommanderMode_Acknowledgement_C_BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_CommanderMode_Acknowledgement.W_CommanderMode_Acknowledgement_C.ExecuteUbergraph_W_CommanderMode_Acknowledgement
struct UW_CommanderMode_Acknowledgement_C_ExecuteUbergraph_W_CommanderMode_Acknowledgement_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2935[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_MainMenu_V3_C*                      CallFunc_GetFirstWidgetOfClass_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


