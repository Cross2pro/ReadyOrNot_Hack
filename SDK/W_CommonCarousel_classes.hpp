#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD9 (0x399 - 0x2C0)
// WidgetBlueprintGeneratedClass W_CommonCarousel.W_CommonCarousel_C
class UW_CommonCarousel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ArrowLeft;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ArrowRight;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonAnimatedSwitcher*               Carousel;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               FocusButton;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftButton;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightButton;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          OptionsAsText;                                     // 0x2F8(0x10)(Edit, BlueprintVisible)
	double                                       LastPressed;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFocused;                                         // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OptionsValueAsStrings;                             // 0x318(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            FocusLostDispatcher;                               // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DescriptionText;                                   // 0x338(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPageIndexChanged;                                // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActiveWidgetIndexInternal;                         // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          OptionsAsText_Playstation;                         // 0x370(0x10)(Edit, BlueprintVisible)
	class FText                                  DescriptionText_Playstation;                       // 0x380(0x18)(Edit, BlueprintVisible)
	bool                                         bHasPSUniqueText;                                  // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CommonCarousel_C* GetDefaultObj();

	bool IsPS5TextValid(class FText InputString, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
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
	class UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation);
	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation);
	void SetActiveByString(const class FString& Active_Option, bool* Success, bool Updated, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	struct FEventReply Navigate(bool Right);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void CreateCarouselDefaultItems(int32 Temp_int_Array_Index_Variable, class FText CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsPS5TextValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool Temp_bool_Variable, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UScaleBox* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UTextBlock* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, float K2Node_MakeStruct_Size_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_CommonCarousel_Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__CommonCarousel_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CommonCarousel_LeftButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_W_CommonCarousel(int32 EntryPoint, bool CallFunc_IsPS5TextValid_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFocusEvent& K2Node_Event_InFocusEvent, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool Temp_bool_Variable, class FText K2Node_Select_Default, const class FString& CallFunc_Array_Get_Item);
	void OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void FocusLostDispatcher__DelegateSignature(int32 Index);
};

}


