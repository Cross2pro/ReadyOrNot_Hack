#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x15F0 - 0x15B0)
// WidgetBlueprintGeneratedClass commonButton.CommonButton_C
class UCommonButton_C : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonButton;                                      // 0x15B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0x15C0(0x18)(Edit, BlueprintVisible)
	int32                                        CharacterLimit;                                    // 0x15D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TruncatedCharacters;                               // 0x15E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonButton_C* GetDefaultObj();

	void Construct();
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CommonButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TSubclassOf<class UCommonTextStyle> CallFunc_GetCurrentTextStyleClass_ReturnValue);
};

}


