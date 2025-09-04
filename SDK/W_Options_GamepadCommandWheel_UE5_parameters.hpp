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

// 0x12 (0x12 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.PopulateOptions
struct UW_Options_GamepadCommandWheel_UE5_C_PopulateOptions_Params
{
public:
	bool                                         CallFunc_GetUseCommandMenuForGamepad_bUsesCommandMenu; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUseCommandMenuForGamepad_ReturnValue;  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DDB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGamepadConfirmationPreset        CallFunc_GetGamepadRadialMenuConfirmationPreset_Preset; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadRadialMenuConfirmationPreset_ReturnValue; // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DF7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadRadialMenuUseLeftStick_UseLeftStick; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadRadialMenuUseLeftStick_ReturnValue; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.ResetToDefaults
struct UW_Options_GamepadCommandWheel_UE5_C_ResetToDefaults_Params
{
public:
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BP_GetDesiredFocusTarget
struct UW_Options_GamepadCommandWheel_UE5_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature
struct UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadOptions_UE5_Controls_OnOff_RadialMenu_1_K2Node_ComponentBoundEvent_21_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature
struct UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GyroActiveMode_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
struct UW_Options_GamepadCommandWheel_UE5_C_BndEvt__W_Options_GamepadCommandWheel_UE5_Options_GameCommander_Preset_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.CreateInputLabel
struct UW_Options_GamepadCommandWheel_UE5_C_CreateInputLabel_Params
{
public:
	class UVerticalBox*                          TargetBox;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Direction;                                         // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_Options_GamepadCommandWheel_UE5.W_Options_GamepadCommandWheel_UE5_C.ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5
struct UW_Options_GamepadCommandWheel_UE5_C_ExecuteUbergraph_W_Options_GamepadCommandWheel_UE5_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2031[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Options_GamePad_InputLabel_C*       CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadRadialMenuUseLeftStick_ReturnValue; // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_1;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EGamepadConfirmationPreset        CallFunc_GetGamepadRadialMenuConfirmationPresetEnum_ReturnValue; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamepadRadialMenuConfirmationPreset_ReturnValue; // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2063[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value;                  // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2076[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          K2Node_Event_TargetBox;                            // 0x48(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Text;                                 // 0x50(0x18)(ConstParm)
	uint8                                        K2Node_Event_Direction;                            // 0x68(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetUseCommandMenuForGamepad_ReturnValue;  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2095[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


