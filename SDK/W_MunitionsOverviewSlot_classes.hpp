#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x498 - 0x370)
// WidgetBlueprintGeneratedClass W_MunitionsOverviewSlot.W_MunitionsOverviewSlot_C
class UW_MunitionsOverviewSlot_C : public UMunitionsSlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimAutoScrollerFade;                              // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BackgroundGradient;                                // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            MunitionListAutoScroller;                          // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           MunitionsButton;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Separator;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Sidebar;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotCount;                                     // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MunitionsOverviewSlot_Element_C*    W_MunitionsSlotElement;                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           NormalGrey;                                        // 0x3D0(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x3E4(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x3F8(0x14)(Edit, BlueprintVisible)
	bool                                         bHovered;                                          // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPressed;                                          // 0x40D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        ButtonStyle;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        GamepadButtonStyle;                                // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReverseAutoScroll;                                // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           Parent_Button;                                     // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       AutoScrollProgress;                                // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AutoScrollSpeed;                                   // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AutoScrollResetDelay;                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MunitionsOverviewSlot_C* GetDefaultObj();

	void GetAmmoOverrideIcon(class FText AmmoType, class UTexture2D** OverrideIcon, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnbindFromButton(bool CallFunc_IsValid_ReturnValue);
	void BindDoubleClick(class UW_Button_C* ParentButton);
	void BindClick(class UW_Button_C* ParentButton);
	void BindUnhovered();
	void BindPressedState(bool CallFunc_IsPressed_ReturnValue);
	void BindHovered(class UW_Button_C* ParentButton);
	void BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue);
	void BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_1);
	void SetVisualState(bool Hovered, bool Pressed, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	struct FSlateColor GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void Finished_E56C9B394D35DA873E40859FDFD06587();
	void Finished_350F6A894C1DB263F37D5A903B9DF3B3();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CreateSeparator(bool bShouldCreateSeparator);
	void CreateElement(class UTexture2D* Icon, int32 Amount, bool bIsAmmoElement, class FText& AmmoType);
	void UpdateSlotText(int32 CurrentSlots, int32 MaxSlots);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature();
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void BndEvt__W_MunitionsSlot_MunitionsButton_K2Node_ComponentBoundEvent_4_Released__DelegateSignature();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_MunitionsOverviewSlot(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_MunitionsOverviewSlot_Element_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bShouldCreateSeparator, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2D* K2Node_Event_Icon, int32 K2Node_Event_Amount, bool K2Node_Event_bIsAmmoElement, class FText K2Node_Event_AmmoType, class UImage* CallFunc_SpawnObject_ReturnValue, class UTexture2D* CallFunc_GetAmmoOverrideIcon_OverrideIcon, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UTexture2D* CallFunc_GetAmmoOverrideIcon_OverrideIcon_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 K2Node_Event_CurrentSlots, int32 K2Node_Event_MaxSlots, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_Format_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, float CallFunc_GetViewFraction_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


