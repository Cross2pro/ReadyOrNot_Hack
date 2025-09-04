#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x390 - 0x2C0)
// WidgetBlueprintGeneratedClass W_OnOffButton.W_OnOffButton_C
class UW_OnOffButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Toggle;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueStateChange;                                // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  EnabledText;                                       // 0x2E8(0x18)(Edit, BlueprintVisible)
	class FText                                  DisabledText;                                      // 0x300(0x18)(Edit, BlueprintVisible)
	class FText                                  DescriptionText;                                   // 0x318(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            DescriptionWidget;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  DescriptionText_PS5Variant;                        // 0x338(0x18)(Edit, BlueprintVisible)
	class FText                                  EnabledText_PS5Variant;                            // 0x350(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  DisabledText_PS5Variant;                           // 0x378(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_OnOffButton_C* GetDefaultObj();

	bool IsPS5TextValid(class FText InputString, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetDisabledText(class FText EnabledText);
	void SetEnabledText(class FText EnabledText);
	void SetupDescription(class UW_Options_UE5_C* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCheckedState(bool NewChecked);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_OnOffButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPS5TextValid_ReturnValue, bool CallFunc_IsPS5TextValid_ReturnValue_1, bool CallFunc_IsPS5TextValid_ReturnValue_2);
	void OnClicked__DelegateSignature();
	void OnValueStateChange__DelegateSignature(bool bNewCheckState);
};

}


