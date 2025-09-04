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
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.GetFocusTarget
struct UW_Stats_Missions_Favorite_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.BackPage
struct UW_Stats_Missions_Favorite_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x959 (0x959 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.GetLevelContent
struct UW_Stats_Missions_Favorite_C_GetLevelContent_Params
{
public:
	class FString                                LevelProgressionTagPrefix;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  LevelName;                                         // 0x10(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             LevelPicture;                                      // 0x28(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Picture;                                           // 0x50(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x78(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelDataLookupTable>         CallFunc_GetLevels_ReturnValue;                    // 0xA8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelDataLookupTable                 CallFunc_Array_Get_Item;                           // 0xC0(0x880)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x941(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x948(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.UpdateStats
struct UW_Stats_Missions_Favorite_C_UpdateStats_Params
{
public:
	class FString                                StatID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ERONStatType                      Temp_wildcard_Variable;                            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Temp_int64_Variable;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x5C(0x14)(None)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x74(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x88(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x9C(0x14)(None)
	class FText                                  Temp_text_Variable_1;                              // 0xB0(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0xD0(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatSubsystem*                        CallFunc_GetStatSubsystem_ReturnValue;             // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFriendStatString_ReturnValue;          // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLevelContent_LevelName;                // 0x110(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLevelContent_LevelPicture;             // 0x128(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x150(0x18)(None)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStatSubsystem*                        CallFunc_GetStatSubsystem_ReturnValue_1;           // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStatString_ReturnValue;                // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B4D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLevelContent_LevelName_1;              // 0x190(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetLevelContent_LevelPicture_1;           // 0x1A8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatDefinition                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x1D8(0x58)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B65[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x238(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.Reveal
struct UW_Stats_Missions_Favorite_C_Reveal_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.Hide
struct UW_Stats_Missions_Favorite_C_Hide_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.SetInputMode
struct UW_Stats_Missions_Favorite_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.ChangePage
struct UW_Stats_Missions_Favorite_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.CompareWithFriend
struct UW_Stats_Missions_Favorite_C_CompareWithFriend_Params
{
public:
	struct FFriend                               Friend;                                            // 0x0(0x1C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.OnStatChanged
struct UW_Stats_Missions_Favorite_C_OnStatChanged_Params
{
public:
	class FString                                StatID;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x23A (0x23A - 0x0)
// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.ExecuteUbergraph_W_Stats_Missions_Favorite
struct UW_Stats_Missions_Favorite_C_ExecuteUbergraph_W_Stats_Missions_Favorite_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Delay_1;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Delay;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CA7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFriend                               K2Node_Event_Friend;                               // 0x48(0x1C8)(None)
	class UStatSubsystem*                        CallFunc_GetStatSubsystem_ReturnValue;             // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_StatID;                               // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UStatSubsystem*                        CallFunc_GetStatSubsystem_ReturnValue_1;           // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInitialized_ReturnValue;                // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


