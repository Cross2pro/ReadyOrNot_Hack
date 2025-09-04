#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x3E0 - 0x2E8)
// WidgetBlueprintGeneratedClass W_Customization_Selector.W_Customization_Selector_C
class UW_Customization_Selector_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Dropdown_C*                         Dropdown;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class FText>               OptionsMap;                                        // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bUseGamepad;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EquippedOptionID;                                  // 0x34C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OptionSelected;                                    // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class ECustomizationType                Category;                                          // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitialized;                                      // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_267E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectorClicked;                                 // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDropdownClosed;                                  // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       MaxDropdownHeight;                                 // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMenuOpened;                                      // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Customization_Selector_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SetEquipped(class FName EquippedID);
	void SetOptions(TMap<class FName, class FText> OptionsMap, class FText OptionText, class FName OptionID, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateStyle(bool bUseGamepad);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_5_OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_6_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_7_OnOptionUnhovered__DelegateSignature();
	void BndEvt__W_Customization_Selector_Dropdown_K2Node_ComponentBoundEvent_0_OnMenuOpened__DelegateSignature();
	void ExecuteUbergraph_W_Customization_Selector(int32 EntryPoint, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, TArray<class FName>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_1, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown, class FName CallFunc_Conv_StringToName_ReturnValue_1);
	void OnMenuOpened__DelegateSignature();
	void OnOptionUnhovered__DelegateSignature();
	void OnDropdownClosed__DelegateSignature(class UW_Dropdown_C* TriggeringSelector);
	void OnOptionHovered__DelegateSignature(class FName OptionID);
	void OnSelectorClicked__DelegateSignature(class UW_Customization_Selector_C* TriggeringSelector);
	void OptionSelected__DelegateSignature(class FName OptionID);
};

}


