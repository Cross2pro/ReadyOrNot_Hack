#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// WidgetBlueprintGeneratedClass W_SubtitlesOverlay.W_SubtitlesOverlay_C
class UW_SubtitlesOverlay_C : public USubtitlesWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             SubtitleScaleBox;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SubtitlesOverlay_C* GetDefaultObj();

	void SetSubtitlesSize(enum class ESubtitlesSize Size);
	void ExecuteUbergraph_W_SubtitlesOverlay(int32 EntryPoint, enum class ESubtitlesSize K2Node_Event_Size, enum class ESubtitlesSize Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double K2Node_Select_Default, float CallFunc_SetUserSpecifiedScale_InUserSpecifiedScale_ImplicitCast);
};

}


