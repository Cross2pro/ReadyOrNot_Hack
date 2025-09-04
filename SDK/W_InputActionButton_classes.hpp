#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x551 (0x1B29 - 0x15D8)
// WidgetBlueprintGeneratedClass W_InputActionButton.W_InputActionButton_C
class UW_InputActionButton_C : public UCommonButtonImplementation
{
public:
	uint8                                        Pad_2EC4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x15E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            CustomContents;                                    // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_ButtonLabel;                                   // 0x1600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonLabelText;                                   // 0x1608(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_Style_Buttons                   SelectButtonStyle;                                 // 0x1620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            StyleGuide;                                        // 0x1628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x1630(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x1638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Hovered;                                           // 0x1648(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Unhovered;                                         // 0x1658(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Pressed;                                           // 0x1668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            DoubleClicked;                                     // 0x1678(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        FontSizeOverride;                                  // 0x1688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DescriptionWidget;                                 // 0x1690(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceUppercaseDescription;                         // 0x1698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionText;                                   // 0x16A0(0x18)(Edit, BlueprintVisible)
	bool                                         StartActive;                                       // 0x16B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartActiveDisabled;                               // 0x16B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F2F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x16BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTextBlockStyle                       Widget_Style;                                      // 0x16C0(0x340)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredButtonStyle;                                // 0x1A00(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Released;                                          // 0x1AD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x1AE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Deselected;                                        // 0x1AF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EHorizontalAlignment              ContentHorizontalAlignment;                        // 0x1B00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                ContentVerticalAlignment;                          // 0x1B01(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRightMousePressed;                               // 0x1B08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRightMouseReleased;                              // 0x1B18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bActivateRightPadding;                             // 0x1B28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_InputActionButton_C* GetDefaultObj();

	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void PassthroughInteraction(bool PassThrough, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void IgnoreInteraction(bool Ignore, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Deselect();
	void Select();
	class UCommonTextBlock* BP_GetButtonLabel();
	void TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText CallFunc_TruncateText_TruncatedText);
	void DisableInteraction(bool Disable, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize();
	void Enable(bool Enable);
	void SetBackgroundTint(const struct FLinearColor& InBackgroundColor);
	void SetButtonText(class FText Text, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void InitContent(bool CallFunc_HasAnyChildren_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void OnCurrentTextStyleChanged();
	void EventOnReleased(class UCommonButtonBase* Button);
	void EventOnPressed(class UCommonButtonBase* Button);
	void RightMousePressed();
	void RightMouseReleased();
	void Construct();
	void InputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_InputActionButton(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_HeldPercent, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style, bool K2Node_DynamicCast_bSuccess, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_1, const struct FMargin& CallFunc_GetCustomPadding_OutCustomPadding, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_1, bool K2Node_DynamicCast_bSuccess_1, const struct FMargin& CallFunc_GetButtonPadding_OutButtonPadding, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonButtonStyle* CallFunc_GetStyle_ReturnValue_2, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UBaseButtonStyle_C* K2Node_DynamicCast_AsBase_Button_Style_2, bool K2Node_DynamicCast_bSuccess_2, class UCommonButtonBase* K2Node_CustomEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool Temp_bool_Variable_1, class FText CallFunc_GetDisplayText_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_TextIsEmpty_ReturnValue_1);
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


