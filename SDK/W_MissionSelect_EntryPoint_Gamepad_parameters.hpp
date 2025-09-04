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
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.GetFocusTarget
struct UW_MissionSelect_EntryPoint_Gamepad_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.BackPage
struct UW_MissionSelect_EntryPoint_Gamepad_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.Hide
struct UW_MissionSelect_EntryPoint_Gamepad_C_Hide_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SetInputMode
struct UW_MissionSelect_EntryPoint_Gamepad_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.ChangePage
struct UW_MissionSelect_EntryPoint_Gamepad_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.SetImageVisibility
struct UW_MissionSelect_EntryPoint_Gamepad_C_SetImageVisibility_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.Reveal
struct UW_MissionSelect_EntryPoint_Gamepad_C_Reveal_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.OnEntryPointChanged
struct UW_MissionSelect_EntryPoint_Gamepad_C_OnEntryPointChanged_Params
{
public:
	struct FEntryPoint                           NewEntryPoint;                                     // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xF0 (0xF0 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad
struct UW_MissionSelect_EntryPoint_Gamepad_C_ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Delay_1;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C90[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_CustomEvent_InVisibility;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Delay;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FEntryPoint                           K2Node_CustomEvent_NewEntryPoint;                  // 0x48(0xA8)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C.OnClicked__DelegateSignature
struct UW_MissionSelect_EntryPoint_Gamepad_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_MissionSelect_EntryPoint_C*         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


