#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// WidgetBlueprintGeneratedClass W_BlockList.W_BlockList_C
class UW_BlockList_C : public UBlockList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_BlockList_C* GetDefaultObj();

	void UnbanPlayer(const class FString& PlayerId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBlockListData* K2Node_DynamicCast_AsBlock_List_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void UpdateBlockList();
	void Construct();
	void BP_OnActivated();
	void ExecuteUbergraph_W_BlockList(int32 EntryPoint);
};

}


