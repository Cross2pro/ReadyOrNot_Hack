#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x438 - 0x410)
// WidgetBlueprintGeneratedClass W_InitialOptions_Language.W_InitialOptions_Language_C
class UW_InitialOptions_Language_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                             Txt_HeaderText;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InitialOptions_Carusel_C*           W_InitialOptionsCarusel;                           // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                SelectedLanguage;                                  // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_InitialOptions_Language_C* GetDefaultObj();

	void DoCustomNavigation(enum class EUINavigation Navigation);
	class UWidget* BP_GetDesiredFocusTarget();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PageIndexChanged(int32 Index, const class FString& Value);
	void ExecuteUbergraph_W_InitialOptions_Language(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_Index, const class FString& K2Node_CustomEvent_Value, const class FString& CallFunc_GetSystemLanguage_ReturnValue, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


