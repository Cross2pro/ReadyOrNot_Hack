#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3C8 - 0x320)
// WidgetBlueprintGeneratedClass W_PlayerActionText.W_PlayerActionText_C
class UW_PlayerActionText_C : public UPlayerActionPromptWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  ActionRichText;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedLine_Image;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPlayerActionPromptSlot               ActionPrompt;                                      // 0x338(0x90)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_PlayerActionText_C* GetDefaultObj();

	void OnScalingSet(float Scale);
	void Construct();
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void RefreshWidget();
	void ExecuteUbergraph_W_PlayerActionText(int32 EntryPoint, float K2Node_Event_Scale, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType);
};

}


