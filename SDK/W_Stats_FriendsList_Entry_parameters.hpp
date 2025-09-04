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

// 0x33 (0x33 - 0x0)
// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.UpdatePlatformIcon
struct UW_Stats_FriendsList_Entry_C_UpdatePlatformIcon_Params
{
public:
	enum class EGamePlatform                     CallFunc_GetPlatform_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetPlatformIcon_NewParam;                 // 0x8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.UpdateFriend
struct UW_Stats_FriendsList_Entry_C_UpdateFriend_Params
{
public:
	struct FFriend                               Friend;                                            // 0x0(0x1C8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1C8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.OnImageFetched
struct UW_Stats_FriendsList_Entry_C_OnImageFetched_Params
{
public:
	class UTexture2D*                            InTexture;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.ExecuteUbergraph_W_Stats_FriendsList_Entry
struct UW_Stats_FriendsList_Entry_C_ExecuteUbergraph_W_Stats_FriendsList_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ABC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetProfileResizedURI_ReturnValue;         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_CustomEvent_InTexture;                      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextStyle*                      CallFunc_GetCurrentTextStyle_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColor_OutColor;                        // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x50(0x14)(None)
};

}
}


