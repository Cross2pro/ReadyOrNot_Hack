#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x588 - 0x3C0)
// WidgetBlueprintGeneratedClass W_Customization_VariantCarousel.W_Customization_VariantCarousel_C
class UW_Customization_VariantCarousel_C : public UCommonCarousel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimRevealList;                                    // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHideList;                                      // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHide;                                          // 0x3D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Left;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Right;                                         // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_RedLine;                                       // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   LeftActionWidget;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   RightActionWidget;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Carousel;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Left;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Right;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Customization_Slot_C*               W_Customization_Slot;                              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Customization_Slot_C*               W_Customization_Slot_1;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Customization_Slot_C*               W_Customization_Slot_2;                            // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              WB_VariantList;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Customization_Slot_C*               EquippedVariantSlot;                               // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationType                CurrentCategory;                                   // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_Customization_Slot_C*>       VariantSlots;                                      // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnVariantListPopulated;                            // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnVariantClicked;                                  // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnVariantHovered;                                  // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnVariantUnhovered;                                // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       LeftActionIconRatio;                               // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RightActionIconRatio;                              // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUsingGamepad;                                     // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SlotSize;                                          // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InputActionIconHeight;                             // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               ItemPadding;                                       // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USizeBox*                              Size;                                              // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UW_Customization_Slot_C*> VariantMap;                                        // 0x4F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_Customization_Slot_C*               HighlightedVariantSlot;                            // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bPopulated;                                        // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnVariantSlotEquipped;                             // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHidden;                                           // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bListHidden;                                       // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadoutCustomization*                 Parent_Item;                                       // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULoadoutCustomization*                 Equipped_Variant;                                  // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnVariantHighlighted;                              // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Customization_VariantCarousel_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void HighlightSlot(class UW_Customization_Slot_C* NewHighlight, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ClearVariants();
	void AddVariantToMaps(class UW_Customization_Slot_C* Slot, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void CreateSlotWidget(class ULoadoutCustomization* Item, class UW_Customization_Slot_C** NewSlot, class UW_Customization_Slot_C* NewSlotWidget, class UW_Customization_Slot_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void GetInputIconVisibility(enum class ESlateVisibility* Visibility, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetIconSize(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1);
	void GetActionIconSizeRatio(class UCommonActionWidget* CommonActionWidget, double* IconRatio, const struct FSlateBrush& CallFunc_GetIcon_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_BreakVector2D_InVec_ImplicitCast, const struct FVector2D& CallFunc_NotEqual_Vector2DVector2D_A_ImplicitCast);
	void UpdateVariantListEquipped(class UW_Customization_Slot_C* NewEquippedSlot, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PopulateVariants(class ULoadoutCustomization* ParentItem, enum class ECustomizationType Category, class ULoadoutCustomization* EquippedVariant, class UW_Customization_Slot_C* DefaultWidget, class UW_Customization_Slot_C* NewWidget, const TArray<class ULoadoutCustomization*>& Variants, class UW_Customization_Slot_C* NewSlot, class ULoadoutCustomization* NewItem, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UW_Customization_Slot_C* CallFunc_CreateSlotWidget_NewSlot, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, class UW_Customization_Slot_C* CallFunc_CreateSlotWidget_NewSlot_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class ULoadoutCustomization* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Finished_CBDC193A483107451E79AFB7D86600BA();
	void Finished_5D3A15DF41AE559F28640EA8D797D0E7();
	void VariantUnhovered();
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void OptionSelected(class FName OptionNameID);
	void VariantClicked(class UW_Customization_Slot_C* TriggeringSlot);
	void VariantHovered(class UW_Customization_Slot_C* TriggeringSlot);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void HideList(bool RefreshList);
	void NavigateNextTerminated(bool Terminated);
	void NavigatePrevTerminated(bool Terminated);
	void ExecuteUbergraph_W_Customization_VariantCarousel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetActionIconSizeRatio_IconRatio, double CallFunc_GetActionIconSizeRatio_IconRatio_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetInputIconVisibility_Visibility, bool CallFunc_IsVisible_ReturnValue, class FName K2Node_Event_OptionNameID, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_Customization_Slot_C* K2Node_CustomEvent_TriggeringSlot, class UW_Customization_Slot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_RefreshList, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_Terminated_1, bool K2Node_Event_Terminated, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanAND_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
	void OnVariantHighlighted__DelegateSignature(class UW_Customization_Slot_C* NewParam);
	void OnVariantSlotEquipped__DelegateSignature(class UW_Customization_Slot_C* EquippedSlot);
	void OnVariantUnhovered__DelegateSignature();
	void OnVariantHovered__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot);
	void OnVariantClicked__DelegateSignature(class UW_Customization_Slot_C* TriggeringSlot);
	void OnVariantListPopulated__DelegateSignature(bool HasVariants);
};

}


