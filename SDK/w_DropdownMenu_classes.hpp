#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x4E8 - 0x2C0)
// WidgetBlueprintGeneratedClass w_DropdownMenu.w_DropdownMenu_C
class UW_DropdownMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               btn_ClickAway;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Div_Footer;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_FooterOptions;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_Options;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             Options;                                           // 0x2F0(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                SelectedOption;                                    // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_Style_Buttons                   OptionButtonStyleOld;                              // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3076[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UW_Button_C*, class FString>      OptionsMap;                                        // 0x388(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, struct FST_DropdownOptions> FooterOptions;                                     // 0x3D8(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class UW_Button_C*, class FString>      FooterOptionsMap;                                  // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class E_Style_Buttons                   FooterButtonStyle;                                 // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFooterOptionSelected;                            // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterOptionHovered;                             // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterOptionUnhovered;                           // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickaway;                                       // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       DropdownMaxHeigh;                                  // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CharacterLimit;                                    // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_30C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDesiredFocusSet;                                 // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                OptionButtonStyle;                                 // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DropdownMenu_C* GetDefaultObj();

	void CreateFooterButton(class FString& FooterOptionID, class UW_Button_C* NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FST_DropdownOptions& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void CreateOptionButton(const class FString& OptionID, class UW_Button_C** NewOptionButton, class UW_Button_C* NewButton, class UW_Button_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Construct();
	void PopulateOptions(TMap<class FString, class FText> Options);
	void OptionClicked(class UW_Button_C* Button);
	void FooterOptionClicked(class UW_Button_C* Button);
	void OptionHovered(class UW_Button_C* Button);
	void BndEvt__w_DropdownMenu_btn_Clickaway_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OptionUnhovered();
	void FooterOptionHovered(class UW_Button_C* Button);
	void FooterOptionUnhovered();
	void ExecuteUbergraph_w_DropdownMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TMap<class FString, class FText> K2Node_CustomEvent_Options, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UW_Button_C* CallFunc_CreateOptionButton_NewOptionButton, class UW_Button_C* K2Node_CustomEvent_Button_3, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UW_Button_C* K2Node_CustomEvent_Button_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_Button_C* K2Node_CustomEvent_Button_1, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UW_Button_C* K2Node_CustomEvent_Button, const class FString& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast);
	void OnFooterOptionUnhovered__DelegateSignature();
	void OnFooterOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnOptionUnhovered__DelegateSignature();
	void OnDesiredFocusSet__DelegateSignature(class UW_Button_C* DesiredFocus);
	void OnClickaway__DelegateSignature();
	void OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
	void OnOptionSelected__DelegateSignature(const class FString& OptionID);
};

}


