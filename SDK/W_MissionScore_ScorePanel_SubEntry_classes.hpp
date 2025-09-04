#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x379 - 0x2C0)
// WidgetBlueprintGeneratedClass W_MissionScore_ScorePanel_SubEntry.W_MissionScore_ScorePanel_SubEntry_C
class UW_MissionScore_ScorePanel_SubEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_PenaltyBG;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ScoreBG;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_ScoreCount;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PenaltyCount;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PenaltyName;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PenaltyValue;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ScoreCount;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ScoreName;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ScoreValue;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x320(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Count;                                             // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Total;                                             // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SubEntryReady;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Penalty;                                           // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            ScoreSound;                                        // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            PenaltySound;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ScoreNumberSound;                                  // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ObjectiveEntry;                                    // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MissionScore_ScorePanel_SubEntry_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry_0(class UObject* Event_Receiver);
	void SequenceEvent__ENTRYPOINTW_MissionScore_ScorePanel_SubEntry();
	void SetValueText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FSlateColor& CallFunc_GetSlateColorScheme_White, const struct FSlateColor& CallFunc_GetSlateColorScheme_Dark, const struct FSlateColor& CallFunc_GetSlateColorScheme_Red, const struct FSlateColor& CallFunc_GetSlateColorScheme_Yellow, const struct FSlateColor& CallFunc_GetSlateColorScheme_Blue, const struct FSlateColor& CallFunc_GetSlateColorScheme_Green, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default, class UTextBlock* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default_2);
	void SetNameText(bool Temp_bool_Variable, const struct FSlateColor& CallFunc_GetSlateColorScheme_White, const struct FSlateColor& CallFunc_GetSlateColorScheme_Dark, const struct FSlateColor& CallFunc_GetSlateColorScheme_Red, const struct FSlateColor& CallFunc_GetSlateColorScheme_Yellow, const struct FSlateColor& CallFunc_GetSlateColorScheme_Blue, const struct FSlateColor& CallFunc_GetSlateColorScheme_Green, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UTextBlock* K2Node_Select_Default);
	void SetCountText(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UTextBlock* K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1);
	void Finished_FABCC80443E68187381FC1BDCAC03A54();
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void RevealSound();
	void NumberSound(class UObject* Event_Receiver);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void ExecuteUbergraph_W_MissionScore_ScorePanel_SubEntry(int32 EntryPoint, double K2Node_Event_Delay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, class UObject* K2Node_CustomEvent_Event_Receiver, bool K2Node_Event_IsDesignTime, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, float CallFunc_Delay_Duration_ImplicitCast);
	void SubEntryReady__DelegateSignature(class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget, int32 Score);
};

}


