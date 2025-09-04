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

// 0x11 (0x11 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.Set Checked
struct UW_Options_Button_With_Status_C_Set_Checked_Params
{
public:
	bool                                         Checked;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_OnOffButton_C*                      K2Node_DynamicCast_AsW_on_Off_Button;              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.Set Status
struct UW_Options_Button_With_Status_C_Set_Status_Params
{
public:
	class FText                                  Status;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.PreConstruct
struct UW_Options_Button_With_Status_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Options_Button_With_Status_C_BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature
struct UW_Options_Button_With_Status_C_BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.SetCheckedState
struct UW_Options_Button_With_Status_C_SetCheckedState_Params
{
public:
	bool                                         bChecked;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.SetWidgetStatus
struct UW_Options_Button_With_Status_C_SetWidgetStatus_Params
{
public:
	class FText                                  NewStatus;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x52 (0x52 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.ExecuteUbergraph_W_Options_Button_With_Status
struct UW_Options_Button_With_Status_C_ExecuteUbergraph_W_Options_Button_With_Status_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2849[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2853[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bChecked;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2855[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_NewStatus;                            // 0x28(0x18)(ConstParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2857[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_OnOffButton_C*                      K2Node_DynamicCast_AsW_on_Off_Button;              // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Button_With_Status.W_Options_Button_With_Status_C.OnValueChange__DelegateSignature
struct UW_Options_Button_With_Status_C_OnValueChange__DelegateSignature_Params
{
public:
	bool                                         NewCheckState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


