#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF9 (0x509 - 0x410)
// WidgetBlueprintGeneratedClass W_Loadout_Page_WeaponEdit.W_Loadout_Page_WeaponEdit_C
class UW_Loadout_Page_WeaponEdit_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Loadout_Page_ItemList_C*            AttachmentList;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      AttachmentSwitcher;                                // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   CurrentWeapon;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_104;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Attachments;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Switcher;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_AttachmentCategories;                           // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Attachments;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_ItemList_C*            WeaponList;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                WeaponClass;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABaseWeapon*                           WeaponObject;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Secondary;                                         // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAttachmentHovered;                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAttachmentUnhovered;                             // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAttachmentClicked;                               // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  Page_ID;                                           // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponAttachmentType             CurrentAttachmentType;                             // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Gamepad;                                       // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LastHovered;                                       // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ChangingWeapon;                                    // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangingAttachment;                                // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3348[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCurrentWeaponClicked;                            // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFMODEvent*                            AttachmentSelectedEvent;                           // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            NullAttachmentSelectedEvent;                       // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCurrentWeaponHovered;                            // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUpdated;                                     // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bSectionFocused;                                   // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_WeaponEdit_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus, class UWidget* CallFunc_GetFocusTarget_Focus_1, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2);
	class UWidget* BP_GetDesiredFocusTarget(TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1);
	void GetWeaponObject(class ABaseWeapon** WeaponObject);
	void InitializeSecondary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue);
	void InitializePrimary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue);
	void CloseAttachmentSelect(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CloseWeaponSelect();
	void UpdateStyle(bool bUseGamepad);
	class UWeaponAttachment* GetCurrentAttachmentByType(enum class EWeaponAttachmentType Type, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue);
	class UWeaponAttachment* GetStoredAttachmentByType(TSubclassOf<class ABaseWeapon> Weapon, enum class EWeaponAttachmentType Type, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UWeaponAttachment* CallFunc_GetDefaultAttachmentByType_Attachment, class UWeaponAttachment* CallFunc_GetStoredAttachmentByWeaponAndType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWeaponAttachment* K2Node_Select_Default);
	void InitializeByPageID(const class FString& CallFunc_Conv_NameToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetDefaultAttachmentByType(enum class EWeaponAttachmentType Type, class UWeaponAttachment** Attachment, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSubclassOf<class UWeaponAttachment> CallFunc_GetActiveSecondaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> CallFunc_GetActivePrimaryAttachmentByType_ReturnValue, TSubclassOf<class UWeaponAttachment> K2Node_Select_Default, class UWeaponAttachment* CallFunc_GetClassDefaultObject_ReturnValue);
	void PopulateAttachmentCategories(class UW_LoadoutSlot_v2_C* NewSlot, enum class EWeaponAttachmentType Type, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UW_LoadoutSlot_v2_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWeaponAttachment* CallFunc_GetCurrentAttachmentByType_ReturnValue, class FText CallFunc_GetAttachmentSlotText_SlotText, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<enum class EWeaponAttachmentType>& CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EWeaponAttachmentType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	TSoftObjectPtr<class UTexture2D> GetWeaponImage(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSecondaryWeaponImage_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetPrimaryWeaponImage_ReturnValue);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void BP_OnActivated();
	void InitializeWeapon(bool Secondary, class UClass* Weapon);
	void BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_0_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_1_OnAttachmentUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_WeaponEdit_AttachmentList_K2Node_ComponentBoundEvent_2_OnAttachmentClicked__DelegateSignature(TSubclassOf<class UWeaponAttachment> AttachmentClass, enum class EWeaponAttachmentType AttachmentType);
	void AttachmentCategoryUnhovered();
	void AttachmentCategoryHovered(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void AttachmentCategoryClicked(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Loadout_Page_WeaponEdit_CurrentWeapon_K2Node_ComponentBoundEvent_7_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void ChangePage(class FName PageName);
	void Weapon_Selected();
	void BP_OnDeactivated();
	void ExecuteUbergraph_W_Loadout_Page_WeaponEdit(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class FName K2Node_Event_OptionNameID, bool K2Node_CustomEvent_Secondary, class UClass* K2Node_CustomEvent_Weapon, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, TSubclassOf<class UWeaponAttachment> K2Node_ComponentBoundEvent_AttachmentClass, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot_1, class UW_LoadoutSlot_v2_C* K2Node_CustomEvent_TriggeringSlot, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class ABaseWeapon* K2Node_ComponentBoundEvent_Weapon_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, TSubclassOf<class ABaseWeapon> K2Node_ComponentBoundEvent_Weapon, enum class EItemType CallFunc_GetItemType_Item_Type, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<TSubclassOf<class UWeaponAttachment>>& CallFunc_GetAttachmentByWeaponAndType_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetFocusTarget_Focus, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_GetAttachmentSlotText_SlotText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class FName K2Node_Event_PageName, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UFMODEvent* K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3);
	void OnItemUpdated__DelegateSignature();
	void OnCurrentWeaponHovered__DelegateSignature();
	void OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass);
	void OnAttachmentClicked__DelegateSignature(class UClass* AttachmentClass, enum class EWeaponAttachmentType AttachmentType);
	void OnAttachmentUnhovered__DelegateSignature();
	void OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType);
};

}


