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

// 0x4A (0x4A - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.PreviousControlsTab
struct UW_Options_Controls_UE5_C_PreviousControlsTab_Params
{
public:
	TArray<class UW_ScrollButton_C*>             CallFunc_Map_Keys_Keys;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     CallFunc_Array_Get_Item_1;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Map_Find_Value;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Map_Find_Value_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.NextControlsTab
struct UW_Options_Controls_UE5_C_NextControlsTab_Params
{
public:
	TArray<class UW_ScrollButton_C*>             CallFunc_Map_Keys_Keys;                            // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ScrollButton_C*                     CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Map_Find_Value;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9FF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ScrollButton_C*                     CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Map_Find_Value_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BP_GetDesiredFocusTarget
struct UW_Options_Controls_UE5_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Initialise Or Get Pop Up
struct UW_Options_Controls_UE5_C_Initialise_Or_Get_Pop_Up_Params
{
public:
	class UClass*                                PopUpType;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSStandardModalDetails                ModalDetails;                                      // 0x8(0x79)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_A40[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        OutputPopUp;                                       // 0x88(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        TempPopUp;                                         // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PopUpClass;                                        // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A44[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        CallFunc_Create_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UStandardModal*>                CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xB0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UStandardModal*                        CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.SwitchControlsTab
struct UW_Options_Controls_UE5_C_SwitchControlsTab_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               MenuWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.GetConflictingKeybindText
struct UW_Options_Controls_UE5_C_GetConflictingKeybindText_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FAxisMappingStruct>            ConflictingAxes;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          ConflictingActions;                                // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          ConflictBindNames;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Text;                                              // 0x48(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetConflictingKeybindListText_Text;       // 0x60(0x18)(None)
	class FString                                CallFunc_Abbreviate_Key_Abreviated_Name;           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x88(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xF0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x140(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x150(0x18)(None)
};

// 0x381 (0x381 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.GetConflictingKeybindListText
struct UW_Options_Controls_UE5_C_GetConflictingKeybindListText_Params
{
public:
	TArray<struct FAxisMappingStruct>            Axes;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FActionMappingStruct>          Actions;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                          ConflictBinds;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Text;                                              // 0x30(0x18)(Parm, OutParm)
	class FText                                  LocalizedActionChain;                              // 0x48(0x18)(Edit, BlueprintVisible)
	class FText                                  Inputs_2LocalizedComma;                            // 0x60(0x18)(Edit, BlueprintVisible)
	class FText                                  Inputs_2LocalizedAnd;                              // 0x78(0x18)(Edit, BlueprintVisible)
	TArray<class FText>                          LocalizedActions;                                  // 0x90(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x100(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x150(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x170(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B41[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1F0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x240(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x250(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x278(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x290(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_2;                         // 0x2E0(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x300(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x358(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x368(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.TryAssignUnbindableControl
struct UW_Options_Controls_UE5_C_TryAssignUnbindableControl_Params
{
public:
	struct FKeyBinding                           KeyBinding;                                        // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CannotBeUnbindable;                                // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Add To Control Binds Lists
struct UW_Options_Controls_UE5_C_Add_To_Control_Binds_Lists_Params
{
public:
	class UW_ControlsBind_C*                     ControlBind;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAxisMappingStruct                    InputAxis;                                         // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActionMappingStruct                  InputAction;                                       // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.AddControlsToGridPanel
struct UW_Options_Controls_UE5_C_AddControlsToGridPanel_Params
{
public:
	TArray<struct FKeyBinding>                   Bindings;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGridPanel*                            GridPanel;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Started
struct UW_Options_Controls_UE5_C_On_Binding_Started_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Canceled
struct UW_Options_Controls_UE5_C_On_Binding_Canceled_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Committed
struct UW_Options_Controls_UE5_C_On_Binding_Committed_Params
{
public:
	class UW_ControlsBind_C*                     CallingWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Detected
struct UW_Options_Controls_UE5_C_Conflicting_Bind_Detected_Params
{
public:
	class UW_ControlsBind_C*                     CallingBind;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                  Key;                                               // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class FText>                          ConflictBindsText;                                 // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Ok Clicked
struct UW_Options_Controls_UE5_C_Conflicting_Bind_Ok_Clicked_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Cancel Clicked
struct UW_Options_Controls_UE5_C_Conflicting_Bind_Cancel_Clicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.OnCancelIllegalBindClicked
struct UW_Options_Controls_UE5_C_OnCancelIllegalBindClicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
struct UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params
{
public:
	class UW_ScrollButton_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x440 (0x440 - 0x0)
// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.ExecuteUbergraph_W_Options_Controls_UE5
struct UW_Options_Controls_UE5_C_ExecuteUbergraph_W_Options_Controls_UE5_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SettingLabel_C*                     CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKeyBinding>                   K2Node_CustomEvent_Bindings;                       // 0x50(0x10)(ConstParm, ReferenceParm)
	class UGridPanel*                            K2Node_CustomEvent_GridPanel;                      // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKeyBinding                           CallFunc_Array_Get_Item;                           // 0x70(0x48)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryAssignUnbindableControl_bSuccess;      // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryAssignUnbindableControl_bSuccess_1;    // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_1;                     // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     CallFunc_Create_ReturnValue_2;                     // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_1;             // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_2;             // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x110(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x120(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x140(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_2;                // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x158(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_1;                         // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E81[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x178(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x18C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x1A0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_2;                         // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsResetBinding_C*             CallFunc_Create_ReturnValue_3;                     // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                             CallFunc_AddChildToGrid_ReturnValue_3;             // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsBind_C*>             K2Node_MakeArray_Array;                            // 0x1D0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FAxisMappingStruct>            K2Node_MakeArray_Array_1;                          // 0x1E0(0x10)(ReferenceParm)
	TArray<struct FActionMappingStruct>          K2Node_MakeArray_Array_2;                          // 0x1F0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x200(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget_1;                // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ControlsBind_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;      // 0x218(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_3;                         // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ControlsResetBinding_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;      // 0x248(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsResetBinding_C*             CallFunc_Array_Get_Item_4;                         // 0x260(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     CallFunc_Array_Get_Item_5;                         // 0x278(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EC3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_StandardButton_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;      // 0x288(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_StandardButton_C*                   CallFunc_Array_Get_Item_6;                         // 0x298(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingWidget;                  // 0x2A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_CustomEvent_NewKey;                         // 0x2B0(0x18)(HasGetValueTypeHash)
	class UW_ControlsBind_C*                     K2Node_CustomEvent_CallingBind;                    // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActionMappingStruct>          K2Node_CustomEvent_ActionMappings;                 // 0x2D0(0x10)(ReferenceParm)
	TArray<struct FAxisMappingStruct>            K2Node_CustomEvent_AxisMappings;                   // 0x2E0(0x10)(ReferenceParm)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x2F0(0x18)(HasGetValueTypeHash)
	TArray<class FText>                          K2Node_CustomEvent_ConflictBindsText;              // 0x308(0x10)(ReferenceParm)
	class FText                                  CallFunc_GetConflictingKeybindText_Text;           // 0x318(0x18)(None)
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EC8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ECA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_2;                 // 0x350(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0x358(0x18)(None)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_1;                 // 0x370(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;     // 0x378(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1;   // 0x380(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_BindConflictModal_C*                K2Node_DynamicCast_AsW_Bind_Conflict_Modal;        // 0x388(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ECF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_IllegalUnbindModal_C*               K2Node_DynamicCast_AsW_Illegal_Unbind_Modal;       // 0x398(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStandardModal*                        K2Node_CustomEvent_CallingModal;                   // 0x3A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_ScrollButton_C*>             CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x3B0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x3C0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_ScrollButton_C*                     CallFunc_Array_Get_Item_7;                         // 0x3D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item_8;                         // 0x3D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_8;               // 0x3E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_7;               // 0x3F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_6;               // 0x400(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_5;               // 0x408(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_4;               // 0x410(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_3;               // 0x418(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x420(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x428(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetDoublePropertyByName_Value_ImplicitCast; // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1; // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


