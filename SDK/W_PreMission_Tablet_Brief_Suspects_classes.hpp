#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x470 - 0x410)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief_Suspects.W_PreMission_Tablet_Brief_Suspects_C
class UW_PreMission_Tablet_Brief_Suspects_C : public UCommonActivatableWidget
{
public:
	class UScrollBox*                            ContentScrollBox;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Suspects;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_SubjectListItem_C* W_PreMission_Tablet_Brief_SubjectListItem;         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_SubjectListItem_C* W_PreMission_Tablet_Brief_SubjectListItem_1;       // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_SubjectListItem_C* W_PreMission_Tablet_Brief_SubjectListItem_2;       // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PreMission_Tablet_Brief_SubjectListItem_C* W_PreMission_Tablet_Brief_SubjectListItem_3;       // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCharacterBio>                 Suspects_Bios;                                     // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnNoEntries;                                       // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEntriesPopulated;                                // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Brief_Suspects_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float CallFunc_GetAnalogValue_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_1, bool CallFunc_IsAnalogValueOutsideDeadZone_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue_2, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_IsAnalogValueOutsideDeadZone_Magnitude_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void PopulateSuspects(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_PreMission_Tablet_Brief_SubjectListItem_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterBio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnEntriesPopulated__DelegateSignature();
	void OnNoEntries__DelegateSignature();
};

}


