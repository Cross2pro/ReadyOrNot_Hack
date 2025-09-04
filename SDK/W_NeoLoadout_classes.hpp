#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xA69 - 0xA08)
// WidgetBlueprintGeneratedClass W_NeoLoadout.W_NeoLoadout_C
class UW_NeoLoadout_C : public UCustomizationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_NeoLoadout_Slot_C*                  ArmourMaterialsSlot;                               // 0xA10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DoneButton;                                        // 0xA18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LoadoutBox;                                        // 0xA20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LoadoutWidgetSwitcher;                             // 0xA28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  LongTacticalSlot;                                  // 0xA30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  PrimarySlot;                                       // 0xA38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  SecondarySlot;                                     // 0xA40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SelectionBox;                                      // 0xA48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SelectionScrollBox;                                // 0xA50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_NeoLoadout_Slot_C*                  TacticalSlot;                                      // 0xA58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageHeader;                                      // 0xA60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ELoadoutV2Enum                    CurrentListType;                                   // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_NeoLoadout_C* GetDefaultObj();

	void Construct();
	void BndEvt__W_LoadoutV2_DoneButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_LoadoutV2_PrimarySlot_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_SecondarySlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_LongTacticalSlot_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void SetupItemList(TArray<class ULoadoutItem*>& Items, class ULoadoutItem* CurrentItem);
	void SetupLoadout();
	void BndEvt__W_LoadoutV2_ArmourMaterialsSlot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void BndEvt__W_LoadoutV2_TacticalSlot_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void OnSelectionListItemClicked(class ULoadoutItem* Item, class UW_NeoLoadout_Slot_C* Slot);
	void ExecuteUbergraph_W_NeoLoadout(int32 EntryPoint, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_4, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_4, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_3, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_3, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_2, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_2, TArray<class ULoadoutItem*>& K2Node_CustomEvent_Items, class ULoadoutItem* K2Node_CustomEvent_CurrentItem, TArray<class ULoadoutWeapon*>& CallFunc_GetPrimaryWeapons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class ULoadoutWeapon*>& CallFunc_GetSecondaryWeapons_ReturnValue, TArray<class ULoadoutEquipment*>& CallFunc_GetLongTacticalItems_ReturnValue, class UW_NeoLoadout_Slot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class ULoadoutItem* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class ULoadoutWeapon* CallFunc_GetPrimaryWeapon_ReturnValue, class ULoadoutWeapon* CallFunc_GetSecondaryWeapon_ReturnValue, class ULoadoutEquipment* CallFunc_GetLongTactical_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class ULoadoutItem* K2Node_ComponentBoundEvent_Item_1, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot_1, class ULoadoutItem* K2Node_ComponentBoundEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_ComponentBoundEvent_Slot, TArray<class ULoadoutEquipment*>& CallFunc_GetTacticalItems_ReturnValue, class ULoadoutItem* K2Node_CustomEvent_Item, class UW_NeoLoadout_Slot_C* K2Node_CustomEvent_Slot, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon, bool K2Node_DynamicCast_bSuccess, class ULoadoutWeapon* K2Node_DynamicCast_AsLoadout_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, class ULoadoutEquipment* K2Node_DynamicCast_AsLoadout_Equipment, bool K2Node_DynamicCast_bSuccess_2);
};

}


