#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x441 - 0x410)
// WidgetBlueprintGeneratedClass W_SubMenu.W_SubMenu_C
class UW_SubMenu_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                            Contents;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget*                               DesiredFocus;                                      // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              PreviousMenu;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HandleBackPress;                                   // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         OnlyActiveForMKB;                                  // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SubMenu_C* GetDefaultObj();

	void InputModeChanged(bool UsingGamepad);
	bool BP_OnHandleBackAction(bool CallFunc_IsValid_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void BP_OnDeactivated();
	void BP_OnActivated();
	void DisableInputConsume();
	void OnInputMethodChanged_Event_0(enum class ECommonInputType bNewInputType);
	void EnableInputConsume();
	void Construct();
	void ExecuteUbergraph_W_SubMenu(int32 EntryPoint, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleBackPress__DelegateSignature();
};

}


