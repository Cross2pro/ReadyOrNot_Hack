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
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.Reset to Default
struct UW_Options_GamepadControlScheme_UE5_C_Reset_to_Default_Params
{
public:
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.Populate Settings
struct UW_Options_GamepadControlScheme_UE5_C_Populate_Settings_Params
{
public:
	bool                                         CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHoldCrouch_HoldCrouch;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHoldCrouch_ReturnValue;               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertStickLayout_bInvertStickLayout; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertStickLayout_ReturnValue;  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertButtonLayout_bInvertButtonLayout; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertButtonLayout_ReturnValue; // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertTriggersLayout_bInvertTriggersLayout; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadInvertTriggersLayout_ReturnValue; // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BP_GetDesiredFocusTarget
struct UW_Options_GamepadControlScheme_UE5_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_SettingsMenuGamepad_StandardControlsButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_StickLayout_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_Triggers_K2Node_ComponentBoundEvent_17_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_DirectionalFaceButton_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_HoldCrouch_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_Options_GamepadControlScheme_UE5_Controls_OnOff_BumpersLayout_K2Node_ComponentBoundEvent_4_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature
struct UW_Options_GamepadControlScheme_UE5_C_BndEvt__W_SettingsMenuGamepad_AlternateControlsButton_K2Node_ComponentBoundEvent_62_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_Options_GamepadControlScheme_UE5.W_Options_GamepadControlScheme_UE5_C.ExecuteUbergraph_W_Options_GamepadControlScheme_UE5
struct UW_Options_GamepadControlScheme_UE5_C_ExecuteUbergraph_W_Options_GamepadControlScheme_UE5_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_4;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadInvertStickLayout_ReturnValue;  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_3;       // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadInvertTriggersLayout_ReturnValue; // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_2;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadInvertButtonLayout_ReturnValue; // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_1;       // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHoldCrouch_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadSwitchBumpersTriggersLayout_ReturnValue; // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SavePS5AdaptiveAimTriggers_ReturnValue;   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SavePS5AdaptiveFireTriggers_ReturnValue;  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D30[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


