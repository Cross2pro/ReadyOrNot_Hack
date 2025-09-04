#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x478 - 0x2E8)
// WidgetBlueprintGeneratedClass W_ItemSelection_Item.W_ItemSelection_Item_C
class UW_ItemSelection_Item_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Focus;                                        // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Select;                                       // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BG_Blur;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BG_Image;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Image;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected_Image;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           DefaultIcon;                                       // 0x330(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           BackgroundColor;                                   // 0x400(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           IconColor;                                         // 0x414(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           SelectedColor;                                     // 0x428(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_3150[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ED_OnAnimFadeOutFinished;                          // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           UnselectedColor;                                   // 0x450(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsPirated;                                        // 0x464(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InDesignTime;                                      // 0x465(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3155[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ED_OnAnimSelectFinished;                           // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ItemSelection_Item_C* GetDefaultObj();

	void StopFadeOutAnim();
	void StopConfirmAnim();
	void ConfirmSelection(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Deselect(bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void Select(bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void FadeOut(bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ChangeIconsIfBuildIsPirated(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnAnimFadeOut_Finished();
	void Initialize(struct FSlateBrush& InBrush, bool bIsVisible);
	void Reset_Selection_Indicator();
	void Construct();
	void ReMinusInitialize(bool bVisible);
	void CustomEvent_0();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_1();
	void ExecuteUbergraph_W_ItemSelection_Item(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double Temp_real_Variable, double Temp_real_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsBuildPirated_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_CustomEvent_InBrush, bool K2Node_CustomEvent_bIsVisible, double K2Node_Select_Default, bool K2Node_CustomEvent_bVisible, bool K2Node_Event_IsDesignTime, bool CallFunc_IsBuildPirated_ReturnValue_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void ED_OnAnimSelectFinished__DelegateSignature();
	void ED_OnAnimFadeOutFinished__DelegateSignature();
};

}


