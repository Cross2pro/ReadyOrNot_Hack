#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass AG_SquadmateCount.AG_SquadmateCount_C
class UAG_SquadmateCount_C : public UAIActionGate
{
public:
	int32                                        Number_of_Squadmates;                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_SquadmateCount_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, int32 CurrentCount, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACyberneticCharacter* K2Node_DynamicCast_AsCybernetic_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsSameSquad_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


