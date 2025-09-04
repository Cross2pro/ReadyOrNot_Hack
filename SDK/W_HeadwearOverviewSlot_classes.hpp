#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B1 (0x551 - 0x3A0)
// WidgetBlueprintGeneratedClass W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C
class UW_HeadwearOverviewSlot_C : public ULoadoutSlot_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealSubtext_Mount;                           // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimRevealSubtext;                                 // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BottomLine;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           Button;                                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EquippedGlow;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EquippedTag;                                       // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Border;                                        // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivDetails;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivFacewearDetails;                            // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_DivMountDetails;                               // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ItemIcon;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarFade;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarSolid;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Facewear;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Mount;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Icon;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TopLine;                                           // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Facewear;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_HelmetName;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Mount;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_SlotName;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext_Facewear;                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext_Mount;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClick;                                           // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           EquippedGreen;                                     // 0x480(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           NormalGrey;                                        // 0x494(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           SelectedRed;                                       // 0x4A8(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           HoveredWhite;                                      // 0x4BC(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DefaultWhite;                                      // 0x4D0(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_2CA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhover;                                         // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PreviewHovered;                                    // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewPressed;                                    // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewEquipped;                                   // 0x50A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CA6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonStyle>        ButtonStyle;                                       // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonButtonStyle>        GamepadButtonStyle;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        DetailsFontSize;                                   // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadDetailsFontSize;                            // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NameFontSize;                                      // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadNameFontSize;                               // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewGamepad;                                    // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           ParentButton;                                      // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDoubleClick;                                     // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bMinimalLayout;                                    // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_HeadwearOverviewSlot_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled);
	void UpdateHeadwearPreview(class UClass* Headwear, class UClass* Facewear, class UClass* Mount, enum class ENVGStyle NVG_Style, enum class ENVGStyle Temp_byte_Variable, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_1, class ABP_HelmetMount_None_C* K2Node_DynamicCast_AsBP_Helmet_Mount_None, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_2);
	void UpdateFacewear(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveFacewear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateHelmet(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateMountItem(enum class ENVGStyle Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHelmetMount_ReturnValue, enum class ENVGStyle CallFunc_GetActiveNvgStyle_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class ABP_HelmetMount_None_C* K2Node_DynamicCast_AsBP_Helmet_Mount_None, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default);
	void SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& CallFunc_GetEquippedColorByState_ReturnValue, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FSlateColor& K2Node_Select_Default_4);
	void SetArmorCoverage(enum class EArmourCoverage ArmorCoverage, class FText CallFunc_GetArmorCoverageText_CoverageText);
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
	void UpdateNameFontSize(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font);
	void AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2);
	struct FSlateColor GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnEquipped();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature();
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature();
	void SetInputMode(bool IsGamepad);
	void Hide(double Delay, bool Collapse);
	void Construct();
	void Reveal(double Delay);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void RefreshItemInfo();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void SetArmorMaterial(class UArmourMaterial* Item);
	void SetManualDetails(class FText ItemName, class FText SlotName, class FText Subtext, class UTexture2D* ItemImage);
	void UpdateArmor(class ABaseItem* ArmorItem, class UArmourMaterial* Material, enum class EArmourCoverage Coverage);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void ChangePage(class FName PageName);
	void ShowSubtext(class FText& Text, bool Show);
	void UpdateArmorCoverage(enum class EArmourCoverage Coverage);
	void UpdateArmorMaterial(class UArmourMaterial* Material);
	void RefreshInfo();
	void UpdateHeadwear();
	void ExecuteUbergraph_W_HeadwearOverviewSlot(int32 EntryPoint, bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_GetEquipped_ReturnValue_4, bool K2Node_Event_IsGamepad, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_OptionNameID, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_5, class UArmourMaterial* K2Node_Event_Item, class FText K2Node_CustomEvent_ItemName, class FText K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_Subtext, class UTexture2D* K2Node_CustomEvent_ItemImage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ABaseItem* K2Node_CustomEvent_ArmorItem, class UArmourMaterial* K2Node_CustomEvent_Material_1, enum class EArmourCoverage K2Node_CustomEvent_Coverage_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABaseBodyArmor_C* K2Node_DynamicCast_AsBase_Body_Armor, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FText CallFunc_Format_ReturnValue, class FName K2Node_Event_PageName, class FText K2Node_Event_Text, bool K2Node_Event_Show, enum class EArmourCoverage K2Node_CustomEvent_Coverage, class FText CallFunc_GetArmorCoverageText_CoverageText, class UArmourMaterial* K2Node_CustomEvent_Material);
	void OnDoubleClick__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot);
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot);
	void OnClick__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot);
};

}


