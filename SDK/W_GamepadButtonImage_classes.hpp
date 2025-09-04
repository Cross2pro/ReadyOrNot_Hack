#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2E4 - 0x2D8)
// WidgetBlueprintGeneratedClass W_GamepadButtonImage.W_GamepadButtonImage_C
class UW_GamepadButtonImage_C : public UGamepadButtonImage
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Size;                                              // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_GamepadButtonImage_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_GamepadButtonImage(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FName CallFunc_GetCurrentGamepadName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FSlateBrush& CallFunc_GetBrush_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


