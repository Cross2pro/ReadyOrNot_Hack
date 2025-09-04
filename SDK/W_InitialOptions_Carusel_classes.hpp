#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x364 - 0x2C0)
// WidgetBlueprintGeneratedClass W_InitialOptions_Carusel.W_InitialOptions_Carusel_C
class UW_InitialOptions_Carusel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ArrowLeft;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowRight;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Carousel;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftButton;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightButton;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          OptionsAsText;                                     // 0x2F0(0x10)(Edit, BlueprintVisible)
	double                                       LastPressed;                                       // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFocused;                                         // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OptionsValueAsStrings;                             // 0x310(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            FocusLostDispatcher;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DescriptionText;                                   // 0x330(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPageIndexChanged;                                // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActiveWidgetIndexInternal;                         // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_InitialOptions_Carusel_C* GetDefaultObj();

	void SetActiveOption(int32 NewParam, const class FString& CallFunc_Array_Get_Item);
	void SetupDescription(class UW_Options_UE5_C* CallFunc_FindParentWidgetOfType_ReturnValue);
	void Clear();
	void SetActiveByIndex(int32 Index);
	void NavigateRight(const class FString& CallFunc_Array_Get_Item);
	void NavigateLeft(const class FString& CallFunc_Array_Get_Item);
	void HasPrevious(bool* HasNext, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateArrows(bool CallFunc_HasPrevious_HasNext, bool CallFunc_HasNext_HasNext);
	void HasNext(bool* HasNext, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectPrevious(int32 Temp_int_Variable, bool CallFunc_HasPrevious_HasNext, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SelectNext(int32 Temp_int_Variable, bool CallFunc_HasNext_HasNext, int32 CallFunc_Add_IntInt_ReturnValue);
	void Do_Custom_Navigation(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess);
	void SetActiveByString(const class FString& Active_Option, bool* Success, bool Updated, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	struct FEventReply Navigate(bool Right);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void CreateCarouselDefaultItems(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText CallFunc_Array_Get_Item, class UScaleBox* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UTextBlock* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, float K2Node_MakeStruct_Size_ImplicitCast);
	void BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_W_InitialOptions_Carusel(int32 EntryPoint, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, bool CallFunc_IsValid_ReturnValue_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const class FString& CallFunc_Array_Get_Item);
	void OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void FocusLostDispatcher__DelegateSignature(int32 Index);
};

}


