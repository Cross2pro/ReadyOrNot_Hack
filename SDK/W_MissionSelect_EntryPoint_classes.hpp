#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x3A9 - 0x2C0)
// WidgetBlueprintGeneratedClass W_MissionSelect_EntryPoint.W_MissionSelect_EntryPoint_C
class UW_MissionSelect_EntryPoint_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimShowImage;                                     // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           ButtonBase;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Img_EntryPreview;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_EntryPointPreview;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FEntryPoint                           EntryPoint;                                        // 0x300(0xA8)(Edit, BlueprintVisible)
	bool                                         HasImage;                                          // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MissionSelect_EntryPoint_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SequenceEvent__ENTRYPOINTW_MissionSelect_EntryPoint();
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void SetImageVisibility(enum class ESlateVisibility InVisibility);
	void SetupEntryPoint(const struct FEntryPoint& EntryPoint);
	void BndEvt__W_MissionSelect_EntryPoint_ButtonBase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Deselect();
	void Select();
	void Reveal(double Delay);
	void Construct();
	void ForceClick();
	void Hide(double Delay, bool Collapse);
	void ExecuteUbergraph_W_MissionSelect_EntryPoint(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FEntryPoint& K2Node_CustomEvent_EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, double K2Node_Event_Delay_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, class FName K2Node_Event_PageName, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnClicked__DelegateSignature(class UW_MissionSelect_EntryPoint_C* Widget);
};

}


