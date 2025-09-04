#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x578 (0x1B68 - 0x15F0)
// WidgetBlueprintGeneratedClass W_FooterInputActionButton.W_FooterInputActionButton_C
class UW_FooterInputActionButton_C : public UCommonFooterButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_MultiAction;                                    // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              InputAction;                                       // 0x1600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilitySwitcher*             InputActionMultiSwitcher;                          // 0x1608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              InputActionPC;                                     // 0x1610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ButtonLabel;                                   // 0x1618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_InputLabel;                                    // 0x1620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Label;                                         // 0x1628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputAction_C*                      W_InputAction;                                     // 0x1630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonLabelText;                                   // 0x1638(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_Style_Buttons                   SelectButtonStyle;                                 // 0x1650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            StyleGuide;                                        // 0x1658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x1660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x1668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Hovered;                                           // 0x1678(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Unhovered;                                         // 0x1688(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Pressed;                                           // 0x1698(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            DoubleClicked;                                     // 0x16A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        FontSizeOverride;                                  // 0x16B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DescriptionWidget;                                 // 0x16C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceUppercaseDescription;                         // 0x16C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionText;                                   // 0x16D0(0x18)(Edit, BlueprintVisible)
	bool                                         StartActive;                                       // 0x16E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartActiveDisabled;                               // 0x16E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x16EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTextBlockStyle                       Widget_Style;                                      // 0x16F0(0x340)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredButtonStyle;                                // 0x1A30(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Released;                                          // 0x1B00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x1B10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Deselected;                                        // 0x1B20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EHorizontalAlignment              ContentHorizontalAlignment;                        // 0x1B30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                ContentVerticalAlignment;                          // 0x1B31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRightMousePressed;                               // 0x1B38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightMouseReleased;                              // 0x1B48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FDataTableRowHandle>           CurrentMultiInputActions;                          // 0x1B58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_FooterInputActionButton_C* GetDefaultObj();

	void SetInputActions(TArray<struct FDataTableRowHandle>& InputActions);
	void SetMultiInputAction(TArray<struct FDataTableRowHandle>& InputActions, bool IsCombo, class UW_InputAction_C* CallFunc_Create_ReturnValue, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable, TArray<class UW_InputAction_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_InputAction_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Array_Identical_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class FText Temp_text_Variable_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void ShowHotkeyInput();
	void HideHotkeyInput();
	void Set_Action_Name(class FText Action_Name);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void PassthroughInteraction(bool PassThrough);
	void IgnoreInteraction(bool Ignore, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Deselect();
	void Select();
	class UCommonTextBlock* BP_GetButtonLabel();
	void TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters);
	void DisableInteraction(bool Disable, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize();
	void Enable(bool Enable);
	void SetBackgroundTint(const struct FLinearColor& InBackgroundColor);
	void SetButtonText(class FText Text, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void InitContent();
	void ForceClick();
	void PreConstruct(bool IsDesignTime);
	void ForceDoubleClick();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnDoubleClicked();
	void BP_OnClicked();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void OnCurrentTextStyleChanged();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnPressed();
	void EventOnReleased(class UCommonButtonBase* Button);
	void EventOnPressed(class UCommonButtonBase* Button);
	void RightMousePressed();
	void RightMouseReleased();
	void BP_OnReleased();
	void Construct();
	void OnInputChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_0_OnInputActionSetNotFound__DelegateSignature(class UW_InputAction_C* TriggeringInputActionWidget);
	void BndEvt__W_FooterInputActionButton_W_InputAction_K2Node_ComponentBoundEvent_1_OnInputActionWidgetUpdated__DelegateSignature();
	void ExecuteUbergraph_W_FooterInputActionButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class FText Temp_text_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Event_HeldPercent, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style, bool K2Node_DynamicCast_bSuccess, const struct FMargin& CallFunc_GetCustomPadding_OutCustomPadding, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_1, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetButtonPadding_OutButtonPadding, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_2, bool K2Node_DynamicCast_bSuccess_2, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UCommonButtonBase* K2Node_CustomEvent_Button, bool Temp_bool_Variable, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue, class UW_InputAction_C* K2Node_ComponentBoundEvent_TriggeringInputActionWidget);
	void OnRightMouseReleased__DelegateSignature();
	void OnRightMousePressed__DelegateSignature(class UW_Button_C* Button);
	void Deselected__DelegateSignature(class UW_Button_C* Button);
	void Selected__DelegateSignature(class UW_Button_C* Button);
	void Released__DelegateSignature();
	void DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void Pressed__DelegateSignature();
	void Unhovered__DelegateSignature();
	void Hovered__DelegateSignature(class UW_Button_C* Button);
	void Clicked__DelegateSignature(class UW_Button_C* Button);
};

}


