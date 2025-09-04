#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE1 (0x3A1 - 0x2C0)
// WidgetBlueprintGeneratedClass W_MissionSelect_EntryPoint_Gamepad.W_MissionSelect_EntryPoint_Gamepad_C
class UW_MissionSelect_EntryPoint_Gamepad_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimChangeEntryPoint;                              // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                      Img_EntryPreview;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_EntryPointPreview;                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FEntryPoint                           EntryPoint;                                        // 0x2F8(0xA8)(Edit, BlueprintVisible)
	bool                                         HasImage;                                          // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MissionSelect_EntryPoint_Gamepad_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SequenceEvent__ENTRYPOINTW_MissionSelect_EntryPoint_Gamepad();
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void SetImageVisibility(enum class ESlateVisibility InVisibility);
	void SequenceEvent();
	void Reveal(double Delay);
	void Construct();
	void OnEntryPointChanged(const struct FEntryPoint& NewEntryPoint);
	void ExecuteUbergraph_W_MissionSelect_EntryPoint_Gamepad(int32 EntryPoint, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, double K2Node_Event_Delay, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FEntryPoint& K2Node_CustomEvent_NewEntryPoint);
	void OnClicked__DelegateSignature(class UW_MissionSelect_EntryPoint_C* Widget);
};

}


