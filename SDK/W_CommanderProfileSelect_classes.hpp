#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x4A9 - 0x410)
// WidgetBlueprintGeneratedClass W_CommanderProfileSelect.W_CommanderProfileSelect_C
class UW_CommanderProfileSelect_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_0;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           ReloadProfilesButton;                              // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SlotsHorizontalBox;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             CurrentHoveredCard;                                // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_CommanderProfileCard_C*             CurrentUnhoveredCard;                              // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         NewHover;                                          // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HoverEffectSpeed;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HoverFillRatio;                                    // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_CommanderProfileCard_C*>     ProfileCards;                                      // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UW_CommanderProfileCard_C*             ProfileForDelete;                                  // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_CommanderProfileCard_C*             ActiveProfileForDifficulty;                        // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_CommanderProfileCard_C*>     AllProfileCards;                                   // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FLASE;                                             // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               FocusTarget;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IronmanMode;                                       // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_CommanderProfileSelect_C* GetDefaultObj();

	void Populate_Difficulties(int32 Temp_int_Array_Index_Variable, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UW_CommanderProfileCard_C* CallFunc_Create_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetOrderedDifficulties_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, int32 CallFunc_Array_Add_ReturnValue);
	void W_CommanderProfileSelect_AutoGenFunc(class UCommonButtonBase* Button, bool Selected);
	class UWidget* BP_GetDesiredFocusTarget(class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item);
	void FillCardList(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue);
	void SetCurrentHoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void ResetCurrentUnhoverFill(const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void BndEvt__W_CommanderProfileSelect_Example_BackButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void PopulateProfiles();
	void ProfileHoverStateChange(class UW_CommanderProfileCard_C* TriggeringProfileCard, bool Hovered);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenDeleteSaveConfirmation(class UW_CommanderProfileCard_C* TriggeringProfileCard);
	void DeleteSave(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void CancelDelete(class UStandardModal* CallingModal);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__W_CommanderProfileSelect_PageWrapper_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void HandleProfileCardSelected(class UW_CommanderProfileCard_C* SelectedProfileCard);
	void HandleProfileCardUnselected(class UW_CommanderProfileCard_C* SelectedProfileCard);
	void UpdateNavigation();
	void ExecuteUbergraph_W_CommanderProfileSelect(int32 EntryPoint, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable_1, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard_1, bool K2Node_CustomEvent_Hovered, class FText Temp_text_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, class UCommanderProfile* CallFunc_LoadProfile_ReturnValue, class UW_CommanderProfileCard_C* CallFunc_Create_ReturnValue, class UW_StandardModal_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_CommanderProfileCard_C* K2Node_CustomEvent_TriggeringProfileCard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry, class UStandardModal* K2Node_CustomEvent_CallingModal, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_5, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class UW_CommanderProfileCard_C* K2Node_CustomEvent_SelectedProfileCard_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, class UW_CommanderProfileCard_C* K2Node_DynamicCast_AsW_Commander_Profile_Card, bool K2Node_DynamicCast_bSuccess, class UW_CommanderProfileCard_C* K2Node_CustomEvent_SelectedProfileCard, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, class FText Temp_text_Variable_2, const struct FVector2D& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_1, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_3, bool CallFunc_GetSelected_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_4, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_3, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_6, class UW_CommanderProfileCard_C* CallFunc_Array_Get_Item_7, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Add_IntInt_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


