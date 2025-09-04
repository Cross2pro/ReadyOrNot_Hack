#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x380 - 0x2F8)
// WidgetBlueprintGeneratedClass W_Options_Button_With_Status.W_Options_Button_With_Status_C
class UW_Options_Button_With_Status_C : public UOptionsButtonWithStatus
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                InteractiveNotSelected;                            // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NotInteractiveNotSelected;                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NotInteractiveSelected;                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultButtonStyle;                                // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedButtonStyle;                                 // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnValueChange;                                     // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ButtonText;                                        // 0x348(0x18)(Edit, BlueprintVisible)
	bool                                         ButtonIsToggleable;                                // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_292A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonDescription;                                 // 0x368(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_Options_Button_With_Status_C* GetDefaultObj();

	void Set_Checked(bool Checked, class UW_OnOffButton_C* K2Node_DynamicCast_AsW_on_Off_Button, bool K2Node_DynamicCast_bSuccess);
	void Set_Status(class FText Status, bool CallFunc_TextIsEmpty_ReturnValue);
	void ButtonClicked();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Options_Button_With_Status_Button_K2Node_ComponentBoundEvent_1_OnValueStateChange__DelegateSignature(bool bNewCheckState);
	void SetCheckedState(bool bChecked);
	void SetWidgetStatus(class FText& NewStatus);
	void ExecuteUbergraph_W_Options_Button_With_Status(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bNewCheckState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bChecked, class FText K2Node_Event_NewStatus, bool CallFunc_TextIsEmpty_ReturnValue, class UW_OnOffButton_C* K2Node_DynamicCast_AsW_on_Off_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime);
	void OnValueChange__DelegateSignature(bool NewCheckState);
	void OnButtonClicked__DelegateSignature();
};

}


