#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x311 - 0x2C0)
// WidgetBlueprintGeneratedClass W_DifficultySelect.W_DifficultySelect_C
class UW_DifficultySelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        Txt_PrimaryDescription;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Txt_SecondaryDescription;                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Carousel_C*                         W_Carousel;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                         W_Dropdown;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          W_SubMenu;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WidgetSwitcher;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                          SelectedDifficulty;                                // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDifficultySelected;                              // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseGamepad;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DifficultySelect_C* GetDefaultObj();

	void PopulateDifficulties(const TArray<struct FGameplayTag>& UsedDifficulties, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetOrderedDifficulties_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Construct();
	void BndEvt__W_DifficultySelect_w_Dropdown_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void PreConstruct(bool IsDesignTime);
	void OnInputMethodChanged(bool UseGamepad);
	void BndEvt__W_DifficultySelect_W_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(class FName OptionID);
	void OnOptionSelected(const class FString& OptionID);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void Stop_Listening();
	void Start_Listening();
	void ExecuteUbergraph_W_DifficultySelect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_1, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_UseGamepad, class FName K2Node_ComponentBoundEvent_OptionID, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& K2Node_CustomEvent_OptionID, const struct FGameplayTag& CallFunc_RequestGameplayTagFromString_OutTag, bool CallFunc_RequestGameplayTagFromString_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UWidget* K2Node_Select_Default, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class FName CallFunc_GetTagName_ReturnValue, const struct FDifficultyData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue);
	void OnDifficultySelected__DelegateSignature(const struct FGameplayTag& SelectedDifficulty);
};

}


