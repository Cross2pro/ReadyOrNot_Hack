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

// 0xE0 (0xE0 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetBorderColor
struct UW_Briefing_Media_AudioEntry_V2_C_GetBorderColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x20(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x44(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_2;             // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_2;              // 0x68(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_3;             // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_3;              // 0x8C(0x14)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_2;                // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_3;                // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetTextColor
struct UW_Briefing_Media_AudioEntry_V2_C_GetTextColor_Params
{
public:
	struct FSlateColor                           Color;                                             // 0x0(0x14)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3193[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x2C(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x50(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_2;             // 0x64(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_2;              // 0x74(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_3;             // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_3;              // 0x98(0x14)(None)
	struct FSlateColor                           K2Node_Select_Default;                             // 0xAC(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_4;             // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_4;              // 0xD0(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_5;             // 0xE4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_5;              // 0xF4(0x14)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x108(0x14)(None)
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x11C(0x14)(None)
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0x130(0x14)(None)
	struct FSlateColor                           K2Node_Select_Default_4;                           // 0x144(0x14)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetPressedState
struct UW_Briefing_Media_AudioEntry_V2_C_SetPressedState_Params
{
public:
	bool                                         Pressed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetHoverState
struct UW_Briefing_Media_AudioEntry_V2_C_SetHoverState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x114 (0x114 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetIconColor
struct UW_Briefing_Media_AudioEntry_V2_C_GetIconColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor;               // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor;                // 0x20(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_1;             // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_1;              // 0x44(0x14)(None)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_2;             // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_2;              // 0x68(0x14)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_3;             // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_3;              // 0xAC(0x14)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_2;                // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetColorByName_LinearColor_4;             // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetColorByName_SlateColor_4;              // 0xE0(0x14)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_3;                // 0xF4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_4;                // 0x104(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.UpdateVisualState
struct UW_Briefing_Media_AudioEntry_V2_C_UpdateVisualState_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pressed;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Playing;                                           // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           CallFunc_GetTextColor_Color;                       // 0x4(0x14)(None)
	struct FLinearColor                          CallFunc_GetIconColor_Color;                       // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBorderColor_Color;                     // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetIsPlaying
struct UW_Briefing_Media_AudioEntry_V2_C_SetIsPlaying_Params
{
public:
	bool                                         IsPlaying;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3256[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnAddedToFocusPath
struct UW_Briefing_Media_AudioEntry_V2_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnRemovedFromFocusPath
struct UW_Briefing_Media_AudioEntry_V2_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.PreConstruct
struct UW_Briefing_Media_AudioEntry_V2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2
struct UW_Briefing_Media_AudioEntry_V2_C_ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x4(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0xC(0x8)(NoDestructor)
	uint8                                        Pad_32B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue_1;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnUnfocused__DelegateSignature
struct UW_Briefing_Media_AudioEntry_V2_C_OnUnfocused__DelegateSignature_Params
{
public:
	class UW_Briefing_Media_AudioEntry_V2_C*     AudioEntry;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnFocused__DelegateSignature
struct UW_Briefing_Media_AudioEntry_V2_C_OnFocused__DelegateSignature_Params
{
public:
	class UW_Briefing_Media_AudioEntry_V2_C*     AudioEntry;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnClick__DelegateSignature
struct UW_Briefing_Media_AudioEntry_V2_C_OnClick__DelegateSignature_Params
{
public:
	class UW_Briefing_Media_AudioEntry_V2_C*     AudioEntry;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


