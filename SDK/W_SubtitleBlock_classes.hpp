#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F0 - 0x2D0)
// WidgetBlueprintGeneratedClass W_SubtitleBlock.W_SubtitleBlock_C
class UW_SubtitleBlock_C : public USubtitleBlock
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               CurrentBorder;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        CurrentText;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       FadeTime;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SubtitleBlock_C* GetDefaultObj();

	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(class FText& Text);
	void ExecuteUbergraph_W_SubtitleBlock(int32 EntryPoint, const struct FLinearColor& K2Node_Event_Color, class FText K2Node_Event_Text);
};

}


