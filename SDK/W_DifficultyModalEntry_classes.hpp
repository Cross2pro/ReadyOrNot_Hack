#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x300 - 0x2C0)
// WidgetBlueprintGeneratedClass W_DifficultyModalEntry.W_DifficultyModalEntry_C
class UW_DifficultyModalEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_OnOffButton_C*                      W_OnOffButton;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DifficultyText;                                    // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          EntryTag;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DifficultyModalEntry_C* GetDefaultObj();

	void SetButtonSelected(bool bSelected);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_DifficultyModalEntry_W_OnOffButton_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature(bool bNewCheckState);
	void ExecuteUbergraph_W_DifficultyModalEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bNewCheckState);
	void OnStateChanged__DelegateSignature(bool bEnabled, const struct FGameplayTag& EntryTag);
};

}


