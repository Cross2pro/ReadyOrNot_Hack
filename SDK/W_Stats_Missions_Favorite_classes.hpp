#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x500 - 0x2E8)
// WidgetBlueprintGeneratedClass W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C
class UW_Stats_Missions_Favorite_C : public UStatViewerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Div_Compare;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Images;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Mission;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Mission_Compare;                               // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Scale_Image_Compare;                               // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_MissionName;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_MissionName_Compare;                           // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_MissionText_Compare;                            // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bCompare;                                          // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFriend                               CompareFriend;                                     // 0x338(0x1C8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Stats_Missions_Favorite_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetLevelContent(const class FString& LevelProgressionTagPrefix, class FText* LevelName, TSoftObjectPtr<class UTexture2D>* LevelPicture, TSoftObjectPtr<class UTexture2D> Picture, class FText Name, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLevelDataLookupTable>& CallFunc_GetLevels_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLevelDataLookupTable& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void UpdateStyle();
	void UpdateStats(const class FString& StatID, class FText Temp_text_Variable, const class FString& Temp_string_Variable, enum class ERONStatType Temp_wildcard_Variable, int64 Temp_int64_Variable, const class FString& Temp_string_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, const class FString& CallFunc_GetFriendStatString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_GetLevelContent_LevelName, TSoftObjectPtr<class UTexture2D> CallFunc_GetLevelContent_LevelPicture, class FText K2Node_Select_Default, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, const class FString& CallFunc_GetStatString_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class FText CallFunc_GetLevelContent_LevelName_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetLevelContent_LevelPicture_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default_1);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void CompareWithFriend(const struct FFriend& Friend);
	void CancelCompare();
	void OnStatsLoaded();
	void OnInitialized();
	void OnStatChanged(const class FString& StatID);
	void ExecuteUbergraph_W_Stats_Missions_Favorite(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FFriend& K2Node_Event_Friend, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Event_StatID, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInitialized_ReturnValue);
};

}


