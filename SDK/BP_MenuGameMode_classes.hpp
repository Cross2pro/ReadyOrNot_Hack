#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x438 - 0x408)
// BlueprintGeneratedClass BP_MenuGameMode.BP_MenuGameMode_C
class ABP_MenuGameMode_C : public AMainMenuGM
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomMapInt;                                      // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ConnectingWidget;                                  // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           RequestRestart;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MessageDisplayBox_C*               CurrentDispalyBox;                                 // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MenuGameMode_C* GetDefaultObj();

	void FindSpawnPoint(const class FString& Tag, struct FTransform* SpawnPoint, int32 CallFunc_Len_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ADefaultPlayerStart_C* K2Node_DynamicCast_AsDefault_Player_Start, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot, const struct FTransform& CallFunc_FindSpawnPoint_SpawnPoint, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* CallFunc_FinishSpawningActor_ReturnValue);
	class AActor* ChoosePlayerStart(class AController* Player);
	void ReceiveBeginPlay();
	void CreateRestartWidget();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ShowMessageDisplayBox(const class FString& MessageText, const class FString& ButtonText, bool QuitOnPress, bool bCloseExistingMsgBoxIfOpen);
	void OnMessageClicked();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_MenuGameMode(int32 EntryPoint, bool CallFunc_LoadMainMenuIfInStartupLevelOnPS5_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, const class FString& K2Node_Event_MessageText, const class FString& K2Node_Event_ButtonText, bool K2Node_Event_QuitOnPress, bool K2Node_Event_bCloseExistingMsgBoxIfOpen, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class UW_MainMenu_V3_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UW_MainMenu_V3_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UMainMenu_V3* CallFunc_Array_Get_Item, class UMainMenu_V3* CallFunc_Array_Get_Item_1, class UW_MainMenu_V3_C* K2Node_DynamicCast_AsW_Main_Menu_V3, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSearchingForSession_ReturnValue, const struct FPointerEvent& Temp_struct_Variable, const struct FEventReply& CallFunc_CancelSessionSearch_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_MessageDisplayBox_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


