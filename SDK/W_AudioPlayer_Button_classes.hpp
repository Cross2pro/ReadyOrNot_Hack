#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x16D8 - 0x15D8)
// WidgetBlueprintGeneratedClass W_AudioPlayer_Button.W_AudioPlayer_Button_C
class UW_AudioPlayer_Button_C : public UCommonButtonImplementation
{
public:
	uint8                                        Pad_2AF7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x15E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_icon;                                          // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bActive;                                           // 0x15F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0x15F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPressed;                                          // 0x15FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x15FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDarkTheme;                                     // 0x15FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LabelText;                                         // 0x1600(0x18)(Edit, BlueprintVisible)
	class FText                                  ActiveLabelText;                                   // 0x1618(0x18)(Edit, BlueprintVisible)
	enum class E_Briefing_Audio_PlayStates       Control;                                           // 0x1630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFlipIcon_Horiz_;                                  // 0x1631(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B51[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TextSize;                                          // 0x1638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimCurrentTime;                                   // 0x1640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimDuration;                                      // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentTextSize;                                   // 0x1650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReverseHoverAnim;                                  // 0x1658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AnimationTimer;                                    // 0x1660(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AnimFPS;                                           // 0x1668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimStartSize;                                     // 0x1670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Briefing_Audio_PlayStates       CurrentControl;                                    // 0x1678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_Briefing_Audio_PlayStates, struct FSlateBrush> ControlIcons;                                      // 0x1680(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSubclassOf<class UCommonButtonStyle>        DarkThemeStyle;                                    // 0x16D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_AudioPlayer_Button_C* GetDefaultObj();

	void SetTheme(bool UseDarkTheme, bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default);
	void UpdateControlSetting(enum class E_Briefing_Audio_PlayStates Control, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class E_Briefing_Audio_PlayStates K2Node_Select_Default);
	void UpdateIcon(const struct FLinearColor& CallFunc_GetIconColor_ReturnValue, const struct FSlateBrush& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	struct FLinearColor GetIconColor(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_GetSelected_ReturnValue, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4);
	void SetPressedState();
	void SetHoveredState(bool IsHovered);
	void AnimateHover();
	void PreConstruct(bool IsDesignTime);
	void HoverAnim(double Duration, bool Reverse, double FPS);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void BP_OnPressed();
	void BP_OnReleased();
	void ExecuteUbergraph_W_AudioPlayer_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double K2Node_CustomEvent_Duration, bool K2Node_CustomEvent_Reverse, double K2Node_CustomEvent_FPS, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


