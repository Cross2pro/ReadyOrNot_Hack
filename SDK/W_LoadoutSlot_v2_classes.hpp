#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x211 (0x5B1 - 0x3A0)
// WidgetBlueprintGeneratedClass W_LoadoutSlot_v2.W_LoadoutSlot_v2_C
class UW_LoadoutSlot_v2_C : public ULoadoutSlot_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealSubtext;                                 // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_DecrementSlot;                                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_IncrementSlot;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           Button;                                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedGlow;                                      // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EquippedTag;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Slots;                                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_AttachmentIcon;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivDetails;                                    // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemIcon;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarFade;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarSolid;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_AttachmentIcon;                               // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_ItemIcon;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ItemName;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotCount;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotName;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Warn;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WarningTag;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           EquippedGreen;                                     // 0x470(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           NormalGrey;                                        // 0x484(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x498(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x4AC(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DefaultWhite;                                      // 0x4C0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_3748[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhover;                                         // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PreviewHovered;                                    // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewPressed;                                    // 0x4F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewEquipped;                                   // 0x4FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3755[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        ButtonStyle;                                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        GamepadButtonStyle;                                // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        DetailsFontSize;                                   // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadDetailsFontSize;                            // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NameFontSize;                                      // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadNameFontSize;                               // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewGamepad;                                    // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3782[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           ParentButton;                                      // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDoubleClick;                                     // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bMinimalLayout;                                    // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_37D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          FontStyle;                                         // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>          FontStyleHovered;                                  // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>          GamepadFontStyle;                                  // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>          GamepadFontStyleHovered;                           // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CategoryOverrideText;                              // 0x568(0x18)(Edit, BlueprintVisible)
	bool                                         PreviewAttachment;                                 // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMunitionSlot;                                     // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3847[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUpdated;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  CurrentSubtext;                                    // 0x598(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bWarning;                                          // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutSlot_v2_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue);
	void SetWarning(bool HasWarning, class FText WarningText, bool ShouldBlockInput, bool CallFunc_GetEquipped_ReturnValue);
	void SetMinimalLayout(bool Minimal);
	class UWidget* Custom_Right_Navigation(enum class EUINavigation Navigation);
	class UWidget* Custom_Left_Navigation(enum class EUINavigation Navigation);
	void Set_Custom_Navigation_Rules(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RefreshMunitionButtons(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_MunitionsMaxed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool MunitionsMaxed(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_GetCurrentSlotCount_ReturnValue, int32 CallFunc_GetMaximumSlotCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool IsNewSubtext(class FText Text, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetIconVisibility(bool SmallIcon, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void RefreshInfo(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_GetItemClassText_Category_Text, class ABaseBodyArmor_C* K2Node_DynamicCast_AsBase_Body_Armor, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetAttachmentSlotText_SlotText);
	void SetVisualState(bool Hovered, bool Pressed, bool Equipped, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& K2Node_Select_Default_2, const struct FSlateColor& CallFunc_GetEquippedColorByState_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FSlateColor& K2Node_Select_Default_4);
	TSubclassOf<class UCommonTextStyle> GetGamepadFontStyles(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default);
	TSubclassOf<class UCommonTextStyle> GetNormalFontSyles(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default);
	void UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	void BindDoubleClick(class UW_Button_C* ParentButton);
	void BindClick(class UW_Button_C* ParentButton);
	void BindUnhovered(bool CallFunc_GetEquipped_ReturnValue);
	void BindPressedState(bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void BindHovered(class UW_Button_C* ParentButton, bool CallFunc_GetEquipped_ReturnValue);
	void BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue);
	void BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
	struct FSlateColor GetEquippedColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void UpdateDetailFontSize(int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font_1);
	void UpdateNameFont(bool Temp_bool_Variable, TSubclassOf<class UCommonTextStyle> CallFunc_GetNormalFontSyles_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonTextStyle> CallFunc_GetGamepadFontStyles_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UCommonTextStyle> K2Node_Select_Default);
	void AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_3);
	struct FSlateColor GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnEquipped();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature();
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void Reveal(double Delay);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void ChangePage(class FName PageName);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void SetArmorMaterial(class UArmourMaterial* Item);
	void SetManualDetails(class FText ItemName, class FText SlotName, class FText Subtext, class UTexture2D* ItemImage);
	void RefreshItemImage();
	void RefreshAttachmentImage();
	void BndEvt__W_LoadoutSlot_v2_btn_DecrementSlot_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_btn_IncrementSlot_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void OnSlotsUpdated();
	void ShowSubtext(class FText& Text, bool Show);
	void SetInputMode(bool IsGamepad);
	void Hide(double Delay, bool Collapse);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_4_OnRightMouseReleased__DelegateSignature();
	void ExecuteUbergraph_W_LoadoutSlot_v2(int32 EntryPoint, bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_3, bool CallFunc_GetEquipped_ReturnValue_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, double K2Node_Event_Delay_1, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FName K2Node_Event_PageName, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_GetEquipped_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UArmourMaterial* K2Node_Event_Item, class FText K2Node_CustomEvent_ItemName, class FText K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_Subtext, class UTexture2D* K2Node_CustomEvent_ItemImage, bool CallFunc_IsValid_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_OptionNameID, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const struct FSlateColor& K2Node_Select_Default, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetMunitionTypeText_MunitionText, class FText K2Node_Event_Text, bool K2Node_Event_Show, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsNewSubtext_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsGamepad, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, double K2Node_Event_Delay, bool K2Node_Event_Collapse, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnUpdated__DelegateSignature();
	void OnDoubleClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
};

}


