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
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.Set EOS Button Visibility
struct UW_MainMenu_Overlay_C_Set_EOS_Button_Visibility_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_992[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOSMultiplayerSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAccountLinked_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.IsFriendListEmpty
struct UW_MainMenu_Overlay_C_IsFriendListEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9AD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumberOfFriends_Count;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.FooterButtonClicked
struct UW_MainMenu_Overlay_C_FooterButtonClicked_Params
{
public:
	class UW_ScreenFooterEntry_C*                FooterEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.FriendsListUpdate
struct UW_MainMenu_Overlay_C_FriendsListUpdate_Params
{
public:
	int32                                        Number_of_Friends;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature
struct UW_MainMenu_Overlay_C_BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature_Params
{
public:
	struct FFriend                               Friend;                                            // 0x0(0x1C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1C8 (0x1C8 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature
struct UW_MainMenu_Overlay_C_BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature_Params
{
public:
	struct FFriend                               Friend;                                            // 0x0(0x1C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.OnFriendsListConnectionUpdate
struct UW_MainMenu_Overlay_C_OnFriendsListConnectionUpdate_Params
{
public:
	bool                                         Offline;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x521 (0x521 - 0x0)
// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.ExecuteUbergraph_W_MainMenu_Overlay
struct UW_MainMenu_Overlay_C_ExecuteUbergraph_W_MainMenu_Overlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Number_of_Friends;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumberOfFriends_Count;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_ScreenFooterEntry_C*                K2Node_CustomEvent_FooterEntry;                    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFriendListEmpty_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFriendListEmpty_ReturnValue_1;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInitialOptionsSet_ReturnValue;          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFriend                               K2Node_ComponentBoundEvent_Friend_1;               // 0x28(0x1C8)(None)
	class FText                                  CallFunc_FormatViewProfileText_FormattedText;      // 0x1F0(0x18)(None)
	struct FFriend                               K2Node_ComponentBoundEvent_Friend;                 // 0x208(0x1C8)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3D0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHiddenEntry_ReturnValue;                // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A30[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x404(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowEOSSocialOverlay_ReturnValue;         // 0x414(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x415(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x418(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x430(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x448(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x498(0x50)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4F8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x508(0x18)(None)
	bool                                         K2Node_CustomEvent_Offline;                        // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


