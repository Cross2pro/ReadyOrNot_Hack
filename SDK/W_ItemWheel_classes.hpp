#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x55C - 0x4D0)
// WidgetBlueprintGeneratedClass W_ItemWheel.W_ItemWheel_C
class UW_ItemWheel_C : public UItemWheel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ShowBackStick;                                // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CollapseOuter;                                // 0x4E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ExpandOuter;                                  // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_EnableDisableWheel;                           // 0x4F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                HeaderTextBackground;                              // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BgFade;                                        // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ItemWheelCanvasPanel;                              // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UW_WheelIcon_C*>                MainWheelIcons;                                    // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       IconSize;                                          // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_WheelIcon_C*>                SubWheelIcons;                                     // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         InDeadZone;                                        // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SelectedColor;                                     // 0x53C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnselectedColor;                                   // 0x54C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ItemWheel_C* GetDefaultObj();

	void Update_Cursor_Visibility(class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void GetItemAmount(enum class EItemCategory ItemID, int32* ItemAmount, int32 Amount, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, TArray<class ABaseItem*>& CallFunc_GetInventoryItemsOfType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
	void GetShowCounter(enum class EItemCategory ItemID, bool* ShowCounter, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void SetCurrentIndex(class UUMG_RadialMenu_C* RadialMenu, int32 Temp_int_Variable, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void CreateItemWheelIcon(struct FItemWheelOption& ItemWheelOption, int32 OptionIndex, int32 SelectedIndex, class UW_WheelIcon_C** WheelIcon, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetNumSubOptions_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, int32 CallFunc_GetItemAmount_ItemAmount, bool CallFunc_GetShowCounter_ShowCounter, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_WheelIcon_C* CallFunc_Create_ReturnValue);
	void UpdateWheelSelection(class UObject* ItemWheel, const struct FVector& Direction, class UUMG_RadialMenu_C* RadialMenu, bool IsMainWheel, int32 Temp_int_Array_Index_Variable, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UW_WheelIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ValidWithoutSubOptions_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid, bool CallFunc_IsSegmentEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_WheelIcon_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateRadialMenu(int32 SelectedIndex, class UObject* ItemWheel, TArray<struct FItemWheelOption>& ItemWheelOptions, class UObject* InItemWheel, int32 InSelectedIndex, class UUMG_RadialMenu_C* InRadialMenu, bool IsMainWheel, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FItemWheelOption& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UW_WheelIcon_C* CallFunc_CreateItemWheelIcon_WheelIcon, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess);
	void SetWheelOptions(class UUserWidget* ItemWheel, TArray<struct FItemWheelOption>& ItemWheelOptions, int32& SelectedIndex);
	void SetWheelSelection(class UUserWidget* ItemWheel, struct FVector& Direction);
	void SetWheelSegments(class UUserWidget* ItemWheel, uint8& Amount);
	void ItemWheelEnabled();
	void ItemWheelDisabled();
	void ItemWheelCollapsed();
	void ItemWheelExpanded();
	void ForceSetInDeadzone(bool bInDeadzone);
	void ExecuteUbergraph_W_ItemWheel(int32 EntryPoint, float CallFunc_GetRenderOpacity_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UUserWidget* K2Node_Event_ItemWheel_2, TArray<struct FItemWheelOption>& K2Node_Event_ItemWheelOptions, int32 K2Node_Event_SelectedIndex, class UUserWidget* K2Node_Event_ItemWheel_1, const struct FVector& K2Node_Event_Direction, class UUserWidget* K2Node_Event_ItemWheel, uint8 K2Node_Event_Amount, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bInDeadzone, class UW_WheelIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast);
};

}


