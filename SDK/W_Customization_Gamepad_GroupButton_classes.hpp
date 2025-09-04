#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x160C - 0x15B0)
// WidgetBlueprintGeneratedClass W_Customization_Gamepad_GroupButton.W_Customization_Gamepad_GroupButton_C
class UW_Customization_Gamepad_GroupButton_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                EquippedGlow;                                      // 0x15B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BottomLine;                                    // 0x15C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarFade;                                   // 0x15C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_SidebarSolid;                                  // 0x15D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_TopLine;                                       // 0x15D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_GamepadDeco;                                    // 0x15E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x15E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDeselected;                                      // 0x15F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bHovered;                                          // 0x1608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPressed;                                          // 0x1609(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x160A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CustomizationGroups             Group;                                             // 0x160B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Customization_Gamepad_GroupButton_C* GetDefaultObj();

	void Deselect();
	void Select();
	void UpdatePressedState(bool Pressed);
	void UpdateSelectedState(bool bSelected);
	void UpdateHoverState(bool Hovered);
	struct FSlateColor GetColorByState(bool Temp_bool_Variable, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	void UpdateVisualState(bool Hovered, bool Pressed, bool bSelected, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, const struct FSlateColor& CallFunc_GetColorByState_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void BP_OnSelected();
	void BP_OnDeselected();
	void Pressed(class UCommonButtonBase* Button);
	void OnInitialized();
	void Released(class UCommonButtonBase* Button);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Customization_Gamepad_GroupButton(int32 EntryPoint, class UCommonButtonBase* K2Node_CustomEvent_Button_1, class UCommonButtonBase* K2Node_CustomEvent_Button, bool K2Node_Event_IsDesignTime);
	void OnDeselected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button);
	void OnSelected__DelegateSignature(class UW_Customization_Gamepad_GroupButton_C* Button);
};

}


