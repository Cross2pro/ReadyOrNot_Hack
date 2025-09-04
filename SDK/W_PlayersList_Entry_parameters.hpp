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
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.SetProfileButtonVisibility
struct UW_PlayersList_Entry_C_SetProfileButtonVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FEE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalOnlinePlatformType_ReturnValue;   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue; // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.UpdatePlatformIcon
struct UW_PlayersList_Entry_C_UpdatePlatformIcon_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConsole_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2016[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue; // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF (0xF - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.RefreshOnlinePlatformType
struct UW_PlayersList_Entry_C_RefreshOnlinePlatformType_Params
{
public:
	int32                                        OnlinePlatformType;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_203A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLocalOnlinePlatformType_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGamePlatform                     CallFunc_GetPlatform_ReturnValue;                  // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Initialise Popup
struct UW_PlayersList_Entry_C_Initialise_Popup_Params
{
public:
	struct FLobbyPlayer                          Player_Name;                                       // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  TextFormat;                                        // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ButtonText;                                        // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Show_Cancel_Button;                                // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2082[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    OutputPopUp;                                       // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x120(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x130(0x18)(None)
	class FText                                  Temp_text_Variable;                                // 0x148(0x18)(ConstParm)
	struct FVector2D                             Temp_struct_Variable;                              // 0x160(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.GetColorAndOpacity_0
struct UW_PlayersList_Entry_C_GetColorAndOpacity_0_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x14(0x14)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Cancel kick
struct UW_PlayersList_Entry_C_Cancel_kick_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.kick
struct UW_PlayersList_Entry_C_Kick_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.CancelBlock
struct UW_PlayersList_Entry_C_CancelBlock_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.bLock
struct UW_PlayersList_Entry_C_bLock_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature
struct UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.RefreshPlayer
struct UW_PlayersList_Entry_C_RefreshPlayer_Params
{
public:
	struct FLobbyPlayer                          Player;                                            // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.CancelReport
struct UW_PlayersList_Entry_C_CancelReport_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.ReportCompleted
struct UW_PlayersList_Entry_C_ReportCompleted_Params
{
public:
	bool                                         WasReportSuccessful;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Report Player
struct UW_PlayersList_Entry_C_Report_Player_Params
{
public:
	class UW_ReportModal_C*                      CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Block and Report Player
struct UW_PlayersList_Entry_C_Block_and_Report_Player_Params
{
public:
	class UW_ReportModal_C*                      CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.OnImageFetched
struct UW_PlayersList_Entry_C_OnImageFetched_Params
{
public:
	class UTexture2D*                            InTexture;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x47C (0x47C - 0x0)
// Function W_PlayersList_Entry.W_PlayersList_Entry_C.ExecuteUbergraph_W_PlayersList_Entry
struct UW_PlayersList_Entry_C_ExecuteUbergraph_W_PlayersList_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2520[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_29;              // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanChangeMutedState_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2522[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FindTextInLocalizationTable_OutText;      // 0x38(0x18)(None)
	bool                                         CallFunc_FindTextInLocalizationTable_ReturnValue;  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2523[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FindTextInLocalizationTable_OutText_1;    // 0x58(0x18)(None)
	bool                                         CallFunc_FindTextInLocalizationTable_ReturnValue_1; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUniqueNetIDString_OutString;           // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUniqueNetIDString_OutString_1;         // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowProfileUI_ReturnValue;                // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2545[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_28;              // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_Initialise_Popup_OutputPopUp;             // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_27;              // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_26;              // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_25;              // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_24;              // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_23;              // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_22;              // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_21;              // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_20;              // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_Initialise_Popup_OutputPopUp_1;           // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_6;                 // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_5;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_3;                    // 0x118(0x18)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_30;              // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_4;                 // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal_3;                 // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_2;                    // 0x148(0x18)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_19;              // 0x160(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_18;              // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_17;              // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_16;              // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_15;              // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_14;              // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_13;              // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_12;              // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_11;              // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_10;              // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_31;              // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_9;               // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_8;               // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_7;               // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_6;               // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_5;               // 0x1D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1F0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_4;               // 0x200(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ReportSubmittedModal_C*             CallFunc_Create_ReturnValue;                       // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x230(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x240(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance;   // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AReadyOrNotGameMode*>           CallFunc_GetAllGameModes_ReturnValue;              // 0x268(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetProfileResizedURI_ReturnValue;         // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x294(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLobbyPlayer                          K2Node_CustomEvent_Player;                         // 0x2A8(0x70)(None)
	class UW_ReportModal_C*                      CallFunc_Create_ReturnValue_1;                     // 0x318(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FReportPlayerContext                  K2Node_MakeStruct_ReportPlayerContext;             // 0x320(0x10)(None)
	bool                                         CallFunc_IsPlayerBlocked_ReturnValue;              // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerBanned_ReturnValue;               // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerBanned_ReturnValue_1;             // 0x332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x334(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x348(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x360(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x370(0x18)(None)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_2;                 // 0x388(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_WasReportSuccessful;            // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x398(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x3B0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x3C8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ReportModal_C*                      K2Node_CustomEvent_CallingModal_1;                 // 0x3D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry_1;                    // 0x3E0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x3F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReportPlayer_ReturnValue;                 // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_ReportModal_C*                      K2Node_CustomEvent_CallingModal;                   // 0x410(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0x418(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x438(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x448(0x18)(None)
	class UTexture2D*                            K2Node_CustomEvent_InTexture;                      // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x46C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


