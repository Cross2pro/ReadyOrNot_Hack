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

// 0x9 (0x9 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetFocusTarget
struct UW_ScreenFooterEntry_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BackPage
struct UW_ScreenFooterEntry_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetTriggeringInputAction
struct UW_ScreenFooterEntry_C_GetTriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x131 (0x131 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Set Input Actions
struct UW_ScreenFooterEntry_C_Set_Input_Actions_Params
{
public:
	TArray<struct FDataTableRowHandle>           InInputActions;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                  Key;                                               // 0x10(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           Actions;                                           // 0x28(0x10)(Edit, BlueprintVisible)
	class FText                                  LabelText;                                         // 0x38(0x18)(Edit, BlueprintVisible)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name;           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3247[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetButtonLabel_ButtonLabel;               // 0x80(0x18)(None)
	class FText                                  CallFunc_GetButtonLabel_ButtonLabel_1;             // 0x98(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_GetTriggeringInputAction_TriggeringInputAction; // 0xB0(0x10)(NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3249[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ConstParm, ReferenceParm)
	TArray<struct FDataTableRowHandle>           CallFunc_GetInputActions_InputActions;             // 0xD8(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3251[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetInputActionData_ActionName;            // 0xF0(0x18)(None)
	struct FKey                                  CallFunc_GetInputActionData_ActionKey;             // 0x108(0x18)(HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x120(0x10)(NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetInputActions
struct UW_ScreenFooterEntry_C_GetInputActions_Params
{
public:
	TArray<struct FDataTableRowHandle>           InputActions;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetMultiInputAction
struct UW_ScreenFooterEntry_C_SetMultiInputAction_Params
{
public:
	TArray<struct FDataTableRowHandle>           InputActionRows;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetMultipleInputActions
struct UW_ScreenFooterEntry_C_GetMultipleInputActions_Params
{
public:
	TArray<struct FDataTableRowHandle>           InputActions;                                      // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetIsMultiInput
struct UW_ScreenFooterEntry_C_GetIsMultiInput_Params
{
public:
	bool                                         IsMulti;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Set Button Text
struct UW_ScreenFooterEntry_C_Set_Button_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x5 (0x5 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateVisualState
struct UW_ScreenFooterEntry_C_UpdateVisualState_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsButton_IsButton;                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsButton_IsButton_1;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetInputAction
struct UW_ScreenFooterEntry_C_GetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputAction;                                       // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonID
struct UW_ScreenFooterEntry_C_GetButtonID_Params
{
public:
	class FString                                ButtonId;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetButtonLabel
struct UW_ScreenFooterEntry_C_GetButtonLabel_Params
{
public:
	class FText                                  ButtonLabel;                                       // 0x0(0x18)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.GetIsButton
struct UW_ScreenFooterEntry_C_GetIsButton_Params
{
public:
	bool                                         IsButton;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputSwitched
struct UW_ScreenFooterEntry_C_InputSwitched_Params
{
public:
	bool                                         UseGamepad;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetFooterEntryData
struct UW_ScreenFooterEntry_C_SetFooterEntryData_Params
{
public:
	struct FScreenFooterEntry                    FooterEntryData;                                   // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.UpdateEntry
struct UW_ScreenFooterEntry_C_UpdateEntry_Params
{
public:
	TArray<struct FDataTableRowHandle>           Temp_struct_Variable;                              // 0x0(0x10)(ReferenceParm)
};

// 0x81 (0x81 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputAction
struct UW_ScreenFooterEntry_C_SetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FText                                  CallFunc_GetInputActionData_ActionName;            // 0x10(0x18)(None)
	struct FKey                                  CallFunc_GetInputActionData_ActionKey;             // 0x28(0x18)(HasGetValueTypeHash)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class FText                                  CallFunc_GetButtonLabel_ButtonLabel;               // 0x68(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetLabel
struct UW_ScreenFooterEntry_C_SetLabel_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.SetInputMode
struct UW_ScreenFooterEntry_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Hide
struct UW_ScreenFooterEntry_C_Hide_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.Reveal
struct UW_ScreenFooterEntry_C_Reveal_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.PreConstruct
struct UW_ScreenFooterEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ChangePage
struct UW_ScreenFooterEntry_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
struct UW_ScreenFooterEntry_C_BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.InputTypeChanged
struct UW_ScreenFooterEntry_C_InputTypeChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.ExecuteUbergraph_W_ScreenFooterEntry
struct UW_ScreenFooterEntry_C_ExecuteUbergraph_W_ScreenFooterEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3407[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Delay_1;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Delay;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3421[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerController*           CallFunc_GetReadyOrNotPlayerController_ReturnValue_1; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3433[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnReleased__DelegateSignature
struct UW_ScreenFooterEntry_C_OnReleased__DelegateSignature_Params
{
public:
	class UW_ScreenFooterEntry_C*                FooterEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnPressed__DelegateSignature
struct UW_ScreenFooterEntry_C_OnPressed__DelegateSignature_Params
{
public:
	class UW_ScreenFooterEntry_C*                FooterEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnHovered__DelegateSignature
struct UW_ScreenFooterEntry_C_OnHovered__DelegateSignature_Params
{
public:
	class UW_ScreenFooterEntry_C*                FooterEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_ScreenFooterEntry.W_ScreenFooterEntry_C.OnClicked__DelegateSignature
struct UW_ScreenFooterEntry_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_ScreenFooterEntry_C*                FooterEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


