#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x621 - 0x614)
// WidgetBlueprintGeneratedClass W_TabletText.W_TabletText_C
class UW_TabletText_C : public UW_Text_C
{
public:
	uint8                                        Pad_2F36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x618(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class ETextJustify                      JustificationOverride;                             // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TabletText_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_TabletText(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


