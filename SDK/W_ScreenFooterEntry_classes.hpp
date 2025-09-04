#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x550 - 0x460)
// WidgetBlueprintGeneratedClass W_ScreenFooterEntry.W_ScreenFooterEntry_C
class UW_ScreenFooterEntry_C : public UPageFooter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_FooterInputActionButton_C*          W_FooterInputActionButton;                         // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseGamepad;                                        // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EntryID;                                           // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScreenFooterEntry                    FooterEntryData;                                   // 0x488(0x78)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ScreenFooterEntry_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsVisible_ReturnValue);
	void BackPage(bool* Handled);
	void GetTriggeringInputAction(struct FDataTableRowHandle* TriggeringInputAction);
	void Set_Input_Actions(TArray<struct FDataTableRowHandle>& InInputActions, const struct FKey& Key, const TArray<struct FDataTableRowHandle>& Actions, class FText LabelText, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, class FText CallFunc_GetButtonLabel_ButtonLabel_1, const struct FDataTableRowHandle& CallFunc_GetTriggeringInputAction_TriggeringInputAction, bool CallFunc_TextIsEmpty_ReturnValue_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& CallFunc_GetInputActions_InputActions, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Array_Contains_ReturnValue);
	void GetInputActions(TArray<struct FDataTableRowHandle>* InputActions);
	void SetMultiInputAction(TArray<struct FDataTableRowHandle>& InputActionRows);
	void GetMultipleInputActions(TArray<struct FDataTableRowHandle>* InputActions);
	void GetIsMultiInput(bool* IsMulti);
	void Set_Button_Text(class FText ButtonText);
	void UpdateVisualState(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsButton_IsButton, bool CallFunc_GetIsButton_IsButton_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetInputAction(struct FDataTableRowHandle* InputAction);
	void GetButtonID(class FString* ButtonId);
	void GetButtonLabel(class FText* ButtonLabel);
	void GetIsButton(bool* IsButton);
	void SetInputVisibility();
	void InputSwitched(bool UseGamepad);
	void SetFooterEntryData(const struct FScreenFooterEntry& FooterEntryData);
	void UpdateEntry(TArray<struct FDataTableRowHandle>& Temp_struct_Variable);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow, class FText CallFunc_GetInputActionData_ActionName, const struct FKey& CallFunc_GetInputActionData_ActionKey, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetButtonLabel_ButtonLabel, bool CallFunc_TextIsEmpty_ReturnValue);
	void SetLabel(class FText InText);
	void SetInputMode(bool IsGamepad);
	void Construct();
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	void OnInitialized();
	void BndEvt__W_ScreenFooterEntry_W_FooterInputActionButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void InputTypeChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_ScreenFooterEntry(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsGamepad, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnReleased__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnPressed__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
};

}


