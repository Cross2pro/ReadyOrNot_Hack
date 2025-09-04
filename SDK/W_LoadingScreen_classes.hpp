#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x559 - 0x508)
// WidgetBlueprintGeneratedClass W_LoadingScreen.W_LoadingScreen_C
class UW_LoadingScreen_C : public ULoadingScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LoadingPercentText;                                // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LoadingSpinner;                                    // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Tips;                                              // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Out_Map;                                           // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Out_Mode;                                          // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsConsole;                                         // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadingScreen_C* GetDefaultObj();

	void SetLoadingScreenConsole();
	class FText GetLoadingProgressText();
	void UpdateHeaderText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	class FText GetText_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_TextLoading_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_ServerName_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateLoadingScreenPercentage(double NewPercentage, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateTips();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_LoadingScreen(int32 EntryPoint, bool CallFunc_ShouldShowLoadingPercentage_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetLoadingProgressText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsConsole_ReturnValue);
};

}


