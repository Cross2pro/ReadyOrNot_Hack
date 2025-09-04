#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x348 - 0x2C0)
// WidgetBlueprintGeneratedClass W_TutorialMessageEntry.W_TutorialMessageEntry_C
class UW_TutorialMessageEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_53;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MessageContent;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  MessageContentText;                                // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateFontInfo                        FontInfo;                                          // 0x2F0(0x58)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_TutorialMessageEntry_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_TutorialMessageEntry(int32 EntryPoint);
};

}


