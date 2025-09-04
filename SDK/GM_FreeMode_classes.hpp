#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x318 (0xCE8 - 0x9D0)
// BlueprintGeneratedClass GM_FreeMode.GM_FreeMode_C
class AGM_FreeMode_C : public AFreeMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSavedLoadout                         Loadout;                                           // 0x9E0(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasGivenGear_;                                     // 0xCC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadoutEquipOptions                  Loadout_Equip_Options;                             // 0xCD0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AGM_FreeMode_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GM_FreeMode(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Array_Index_Variable, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class APlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_EquipLoadoutOnPlayer_ReturnValue);
};

}


