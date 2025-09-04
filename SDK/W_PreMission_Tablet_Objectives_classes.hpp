#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B8 (0xC78 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C
class UW_PreMission_Tablet_Objectives_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Text_C*                             Lbl_Objectives;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ObjectiveScrollBox;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Situation;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ObjectiveList;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 LevelData;                                         // 0x2E8(0x880)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                MissionURL;                                        // 0xB68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       ObjectiveSpacing;                                  // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           DividerBrush;                                      // 0xB80(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       ObjectiveAutoScrollSpeed;                          // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ObjectiveAutoScrollStartDelay;                     // 0xC58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ObjectiveAutoScrollEndDelay;                       // 0xC60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ObjectiveAutoScrollTimeAtEnd;                      // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ObjectiveAutoScrollTimeAtStart;                    // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Objectives_C* GetDefaultObj();

	void ShouldResetScroll(double DeltaTime, bool* Reset, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void ShouldAutoScroll(double DeltaTime, bool* Scroll, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void AddObjectiveToList(class UW_PreMission_Tablet_Objectives_Entry_C* ObjectiveEntry, bool IsLast, class UImage* Divider, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UImage* CallFunc_SpawnObject_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void OnLoaded_3BD6E0A444807EC303095394A3607018(TSubclassOf<class UObject> Loaded);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData);
	void UpdateObjectives();
	void GetObjectivesByClass();
	void CustomEvent_0();
	void ExecuteUbergraph_W_PreMission_Tablet_Objectives(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& K2Node_Event_MissionURL, const struct FLevelDataLookupTable& K2Node_Event_LevelData, bool CallFunc_ShouldAutoScroll_Scroll, bool CallFunc_ShouldResetScroll_Reset, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_GetSelectedMode_OutMode, bool CallFunc_GetSelectedMode_ReturnValue, enum class ECOOPMode CallFunc_GetCoopModeFromModeName_ReturnValue, TSoftClassPtr<class AObjective> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AObjective* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInLobby_ReturnValue, class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsObjective, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_ShouldResetScroll_DeltaTime_ImplicitCast, double CallFunc_ShouldAutoScroll_DeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
};

}


