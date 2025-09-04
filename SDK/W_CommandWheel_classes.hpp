#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x144 (0x674 - 0x530)
// WidgetBlueprintGeneratedClass W_CommandWheel.W_CommandWheel_C
class UW_CommandWheel_C : public UCommandWheel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ShowBackStick;                                // 0x538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_EnableOuter_backup;                           // 0x540(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_DisableOuter;                                 // 0x548(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_EnableOuter;                                  // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_OpenCloseWheel;                               // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CommandReticle_Image;                              // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderTextBackground_1;                            // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderTextBackground_2;                            // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BgFade;                                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        QueueText_2;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ReticleScaleBox;                                   // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          RedTeamColor;                                      // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BlueTeamColor;                                     // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GoldTeamColor;                                     // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                TestImage;                                         // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                NewVar_0;                                          // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFBasicIconSettings                   IconStyle;                                         // 0x5D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_WheelIcon_C*>                InnerWheelIcons;                                   // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       Icon_Size;                                         // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_WheelIcon_C*                        SelectedIcon;                                      // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentOuterWheelIndex;                            // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_WheelIcon_C*>                OuterWheelIcons;                                   // 0x620(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         InDeadZone;                                        // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DeadZone;                                          // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SelectedIconColor;                                 // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnselectedIconColor;                               // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RadialHighlightBrightness;                         // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RadialTintBrightness;                              // 0x664(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CommandWheel_C* GetDefaultObj();

	void Update_Icons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_WheelIcon_C* CallFunc_Array_Get_Item, class UW_WheelIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_WheelIcon_C* CallFunc_Array_Get_Item_2, class UW_WheelIcon_C* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Update_Cursor_Visibility(class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateRadialMenu(TArray<struct FSwatCommand>& Commands, class UUMG_RadialMenu_C* RadialMenu, int32 SelectedIndex, class UW_WheelIcon_C* NewIconWidget, int32 CurrentIndex, const struct FSwatCommand& CurrentCommand, class UUMG_RadialMenu_C* UpdatingRadial, bool IsInnerWheel, int32 Temp_int_Array_Index_Variable, bool CallFunc_AddChildToRadialMenu_Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FSwatCommand& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, enum class EWheelCardinalDirection CallFunc_GetDirectionFromIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCommandWheelIconData& CallFunc_GetIconData_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_WheelIcon_C* CallFunc_Create_ReturnValue);
	void GetCurentIndex(int32* CurrentIndex, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid);
	void UpdateWheelSelection(class UObject* Object, const struct FVector& InVector, class UW_WheelIcon_C* NewSelection, class UUMG_RadialMenu_C* Radial, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, int32 CallFunc_GetCurrentIndex_Index_1, bool CallFunc_GetCurrentIndex_Valid_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, class UW_WheelIcon_C* CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void SetInnerSegments(int32 Num);
	void SetOuterSegments(int32 Num);
	void SetInnerWheelDirection(const struct FVector& Direction);
	void SetInnerCommands(TArray<struct FSwatCommand>& Options);
	void UpdateOuterWheel(const struct FVector& Direction, TArray<struct FSwatCommand>& Options, int32 SelectedIndex);
	void DisableOuterWheel();
	void CommandWheelDisabled();
	void CommandWheelEnabled();
	void UpdateIconColors();
	void ForceSetInDeadzone(bool bInDeadzone);
	void AnimateWheelUpdate();
	void OnUpdateWheelColor(enum class ETeamType Team);
	void ExecuteUbergraph_W_CommandWheel(int32 EntryPoint, int32 K2Node_Event_num_1, int32 K2Node_Event_num, const struct FVector& K2Node_Event_Direction_1, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, TArray<struct FSwatCommand>& K2Node_Event_Options_1, const struct FVector& K2Node_Event_Direction, TArray<struct FSwatCommand>& K2Node_Event_Options, int32 K2Node_Event_SelectedIndex, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bInDeadzone, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, enum class ETeamType K2Node_Event_Team, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_2, bool K2Node_DynamicCast_bSuccess_2, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_3, bool K2Node_DynamicCast_bSuccess_3, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_4, bool K2Node_DynamicCast_bSuccess_4, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_5, bool K2Node_DynamicCast_bSuccess_5, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_6, bool K2Node_DynamicCast_bSuccess_6, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_7, bool K2Node_DynamicCast_bSuccess_7, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, enum class ETeamType Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_Conv_DoubleToLinearColor_ReturnValue, float CallFunc_BreakColor_R_2, float CallFunc_BreakColor_G_2, float CallFunc_BreakColor_B_2, float CallFunc_BreakColor_A_2, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_BreakColor_R_3, float CallFunc_BreakColor_G_3, float CallFunc_BreakColor_B_3, float CallFunc_BreakColor_A_3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, double CallFunc_Conv_DoubleToLinearColor_InDouble_ImplicitCast);
};

}


