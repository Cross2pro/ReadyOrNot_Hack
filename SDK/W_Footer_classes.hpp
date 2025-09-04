#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x478 - 0x458)
// WidgetBlueprintGeneratedClass W_Footer.W_Footer_C
class UW_Footer_C : public UCommonFooterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnShow;                                       // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  FooterText;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedLine_Image;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Footer_C* GetDefaultObj();

	void RefreshWidget();
	void BP_OnDismissInputAction();
	void BP_DismissInputActionProgress(float HeldTime);
	void Construct();
	void ExecuteUbergraph_W_Footer(int32 EntryPoint, class UHumanCharacterHUD_V2* CallFunc_GetPlayerHUD_ReturnValue, class FText CallFunc_GetFooterText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float K2Node_Event_HeldTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast);
};

}


