#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x16C0 - 0x1600)
// WidgetBlueprintGeneratedClass W_MainMenu_SmallButton_V4.W_MainMenu_SmallButton_V4_C
class UW_MainMenu_SmallButton_V4_C : public UMainMenu_BaseButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      MenuText;                                          // 0x1608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        FontStyleDefault;                                  // 0x1610(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        FontStyleHovered;                                  // 0x1668(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MainMenu_SmallButton_V4_C* GetDefaultObj();

	void SetState(bool Hovered, bool Selected, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_W_MainMenu_SmallButton_V4(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class FText CallFunc_TextToUpper_ReturnValue);
};

}


