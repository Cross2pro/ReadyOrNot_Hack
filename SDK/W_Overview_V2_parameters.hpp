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

// 0x1 (0x1 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BackPage
struct UW_Overview_V2_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.GetFocusTarget
struct UW_Overview_V2_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      K2Node_DynamicCast_AsReady_or_Not_UI;              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutSlot_V2*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Unequip Preset If Deleted
struct UW_Overview_V2_C_Unequip_Preset_If_Deleted_Params
{
public:
	enum class EEquippingSwat                    Swat_Member;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Preset_Exists_ReturnValue;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25B0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Preset Exists
struct UW_Overview_V2_C_Preset_Exists_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentPresetDisplayName_ReturnValue;  // 0x10(0x18)(None)
	TArray<class FString>                        CallFunc_GetAllPresetNames_ReturnValue;            // 0x28(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Select Character
struct UW_Overview_V2_C_Select_Character_Params
{
public:
	class FString                                Unit_ID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    SwatMember;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                Player_State;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMultiplayer_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Equipping_Unit_Is_Self_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Equipping Unit Is Self
struct UW_Overview_V2_C_Equipping_Unit_Is_Self_Params
{
public:
	class FString                                Unit_ID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x18(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x308 (0x308 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.SetLoadoutPreview
struct UW_Overview_V2_C_SetLoadoutPreview_Params
{
public:
	struct FSavedLoadout                         Loadout;                                           // 0x0(0x2E8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue_1;      // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue_2;      // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue_3;      // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Set Current Preset Name
struct UW_Overview_V2_C_Set_Current_Preset_Name_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_265A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentPresetDisplayName_ReturnValue;  // 0x28(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_265C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x60(0x18)(None)
};

// 0x301 (0x301 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.InitializeLoadoutPresets
struct UW_Overview_V2_C_InitializeLoadoutPresets_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         CallFunc_GetActiveLoadout_ReturnValue;             // 0x8(0x2E8)(None)
	TScriptInterface<class ILoadoutUI_C>         K2Node_DynamicCast_AsLoadout_UI;                   // 0x2F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.UpdateBodyArmor
struct UW_Overview_V2_C_UpdateBodyArmor_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseItem>                 CallFunc_GetActiveBodyArmor_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EArmourCoverage                   CallFunc_GetArmorCoverage_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UArmourMaterial*                       CallFunc_GetActiveArmorMaterial_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.UpdateLongTactical
struct UW_Overview_V2_C_UpdateLongTactical_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseItem>                 CallFunc_GetActiveLongTactical_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.UpdateSecondary
struct UW_Overview_V2_C_UpdateSecondary_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseWeapon>               CallFunc_GetActiveSecondary_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABaseWeapon*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.UpdatePrimary
struct UW_Overview_V2_C_UpdatePrimary_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ABaseWeapon>               CallFunc_GetActivePrimary_ReturnValue;             // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABaseWeapon*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.UpdateStyle
struct UW_Overview_V2_C_UpdateStyle_Params
{
public:
	bool                                         bUseGamepad;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2771[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        Temp_class_Variable;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        Temp_class_Variable_1;                             // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Temp_struct_Variable;                              // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_Select_Default_1;                           // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_277F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        K2Node_Select_Default_2;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BP_GetDesiredFocusTarget
struct UW_Overview_V2_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTarget_Focus;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Update Active Character
struct UW_Overview_V2_C_Update_Active_Character_Params
{
public:
	bool                                         CallFunc_IsMultiplayer_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2818[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCurrentPresetDirty_IsDirty;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_281E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetActiveSwatMemberLabel_ReturnValue;     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.OnCharacterSelectionNext
struct UW_Overview_V2_C_OnCharacterSelectionNext_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    CallFunc_NextActiveSwatMember_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.OnCharacterSelectionPrevious
struct UW_Overview_V2_C_OnCharacterSelectionPrevious_Params
{
public:
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEquippingSwat                    CallFunc_PreviousActiveSwatMember_ReturnValue;     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Reveal
struct UW_Overview_V2_C_Reveal_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Hide
struct UW_Overview_V2_C_Hide_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.SetInputMode
struct UW_Overview_V2_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.ChangePage
struct UW_Overview_V2_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.Tick
struct UW_Overview_V2_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature_Params
{
public:
	struct FST_EquippingUnit                     EquippingUnitInfo;                                 // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.InputMethodChanged
struct UW_Overview_V2_C_InputMethodChanged_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
public:
	class UW_ArmorOverviewSlot_C*                TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.SetLastHovered
struct UW_Overview_V2_C_SetLastHovered_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature_Params
{
public:
	class UW_LoadoutSlot_v2_C*                   TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature_Params
{
public:
	class FString                                ModifiedPreset;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.PresetModified
struct UW_Overview_V2_C_PresetModified_Params
{
public:
	bool                                         PresetDirty;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2F8 (0x2F8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.PresetApplied
struct UW_Overview_V2_C_PresetApplied_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         Loadout;                                           // 0x10(0x2E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2E8 (0x2E8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_26_OnLoadoutPresetHovered__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_26_OnLoadoutPresetHovered__DelegateSignature_Params
{
public:
	struct FSavedLoadout                         SavedLoadout;                                      // 0x0(0x2E8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_PresetName_K2Node_ComponentBoundEvent_19_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_PresetName_K2Node_ComponentBoundEvent_19_OnClick__DelegateSignature_Params
{
public:
	class UW_SmallSlot_v2_C*                     TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_33_OnClick__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_33_OnClick__DelegateSignature_Params
{
public:
	class UW_HeadwearOverviewSlot_C*             TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_21_Hovered__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_21_Hovered__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature
struct UW_Overview_V2_C_BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature_Params
{
public:
	class UW_HeadwearOverviewSlot_C*             TriggeringSlot;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x898 (0x898 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.ExecuteUbergraph_W_Overview_V2
struct UW_Overview_V2_C_ExecuteUbergraph_W_Overview_V2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULoadoutSlot_V2*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Delay_1;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Delay;                                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsGamepad;                            // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C2A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x64(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_9;       // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_8;       // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FST_EquippingUnit                     K2Node_ComponentBoundEvent_EquippingUnitInfo;      // 0xB0(0x20)(ZeroConstructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue;       // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_7;       // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_ArmorOverviewSlot_C*                K2Node_ComponentBoundEvent_TriggeringSlot_6;       // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;        // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;        // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput;                // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_1;              // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;        // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;        // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_2;              // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_3;              // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5;        // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_Widget;                         // 0x160(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_4;              // 0x168(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_5;       // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_4;       // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   K2Node_ComponentBoundEvent_TriggeringSlot_3;       // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemClassText_Category_Text;           // 0x190(0x18)(None)
	TArray<class ULoadoutSlot_V2*>               CallFunc_WidgetGetChildrenOfClass_ChildWidgets;    // 0x1A8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6;        // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7;        // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8;        // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_PresetName_1;           // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9;        // 0x1E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_ModifiedPreset;         // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_OpenPresetSaveModal_Preset_Modal;         // 0x200(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10;       // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11;       // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_OpenPresetSaveModal_Preset_Modal_1;       // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_PresetDirty;                    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_PresetName;             // 0x228(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12;       // 0x238(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    CallFunc_OpenPresetSaveModal_Preset_Modal_2;       // 0x240(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  CallFunc_GetReadyOrNotGameState_ReturnValue_1;     // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Name;                           // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_CustomEvent_Loadout;                        // 0x260(0x2E8)(ConstParm)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13;       // 0x548(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14;       // 0x550(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15;       // 0x558(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         K2Node_ComponentBoundEvent_SavedLoadout;           // 0x560(0x2E8)(None)
	class UW_SmallSlot_v2_C*                     K2Node_ComponentBoundEvent_TriggeringSlot_2;       // 0x848(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16;       // 0x850(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_5;              // 0x858(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Loadout_V2_C*                       CallFunc_GetLoadoutWidget_AsW_Loadout_V2_17;       // 0x868(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_HeadwearOverviewSlot_C*             K2Node_ComponentBoundEvent_TriggeringSlot_1;       // 0x870(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_ChangePage_self_CastInput_6;              // 0x878(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x888(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_HeadwearOverviewSlot_C*             K2Node_ComponentBoundEvent_TriggeringSlot;         // 0x890(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Overview_V2.W_Overview_V2_C.CharacterChanged__DelegateSignature
struct UW_Overview_V2_C_CharacterChanged__DelegateSignature_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


