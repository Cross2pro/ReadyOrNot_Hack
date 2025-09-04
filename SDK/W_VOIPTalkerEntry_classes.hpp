#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x360 - 0x330)
// WidgetBlueprintGeneratedClass W_VOIPTalkerEntry.W_VOIPTalkerEntry_C
class UW_VOIPTalkerEntry_C : public UVOIPTalkerEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             VoiceImg_Box;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVoiceType                        CurrentVoiceType;                                  // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_222E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  VoiceType;                                         // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_VOIPTalkerEntry_C* GetDefaultObj();

	void Construct();
	void VoiceChannelChanged();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_VOIPTalkerEntry(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EVoiceType CallFunc_GetVoiceType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_GetVoiceTypeText_ReturnValue);
};

}


