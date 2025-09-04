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

// 0xE4 (0xE4 - 0x0)
// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.SetCharacterInfo
struct UW_Therapist_OfficerEntry_C_SetCharacterInfo_Params
{
public:
	class URosterCharacter*                      Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2213[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)(None)
	class FText                                  CallFunc_StressPercentageAsStatus_StatusText;      // 0xB8(0x18)(None)
	struct FSlateColor                           CallFunc_StressPercentageAsStatus_StatusColor;     // 0xD0(0x14)(None)
};

// 0x8 (0x8 - 0x0)
// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UW_Therapist_OfficerEntry_C_BndEvt__W_Therapist_OfficerEntry_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.ExecuteUbergraph_W_Therapist_OfficerEntry
struct UW_Therapist_OfficerEntry_C_ExecuteUbergraph_W_Therapist_OfficerEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Therapist_OfficerEntry.W_Therapist_OfficerEntry_C.OnClicked__DelegateSignature
struct UW_Therapist_OfficerEntry_C_OnClicked__DelegateSignature_Params
{
public:
	class UW_Therapist_OfficerEntry_C*           Entry;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


