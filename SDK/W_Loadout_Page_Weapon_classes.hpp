#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x491 - 0x410)
// WidgetBlueprintGeneratedClass W_Loadout_Page_Weapon.W_Loadout_Page_Weapon_C
class UW_Loadout_Page_Weapon_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Loadout_Munitions_C*                Ammo;                                              // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabCarousel_C*                      Carousel;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Munitions_C*                Deployables;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      MainSwitcher;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TabCarousel_C*                      MunitionsCarousel;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      MunitionsSwitcher;                                 // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_WeaponEdit_C*          PrimaryEdit;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_WeaponEdit_C*          SecondaryEdit;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      Switcher;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_WeaponEdits;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_Page_ItemList_C*            WeaponList;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ChangingPrimary;                                   // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangingSecondary;                                 // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemClass                        CurrentItemClass;                                  // 0x47A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B0C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            PrimarySelectedEvent;                              // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            SecondarySelectedEvent;                            // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableAutoFocus;                                  // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_Weapon_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, class UWidget* CallFunc_GetFocusTarget_Focus, class UWidget* CallFunc_GetFocusTarget_Focus_1, class FName CallFunc_GetActiveTab_ReturnValue, bool K2Node_SwitchName_CmpSuccess);
	void BackPage(bool* Handled, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_BackPage_self_CastInput, bool CallFunc_BackPage_Handled, bool CallFunc_BooleanOR_ReturnValue);
	void IsPrimaryActiveTab(bool* Active, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void RegisterTabs();
	void UpdateStyle(bool bUseGamepad);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void Construct();
	void OnInitialized();
	void BndEvt__W_Loadout_Page_Weapon_WeaponEdit_K2Node_ComponentBoundEvent_0_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_4_OnWeaponHovered__DelegateSignature(class ABaseWeapon* Weapon, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_5_OnWeaponUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_WeaponEdit_WeaponList_K2Node_ComponentBoundEvent_6_OnWeaponClicked__DelegateSignature(TSubclassOf<class ABaseWeapon> Weapon);
	void BP_OnActivated();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_1_OnCurrentWeaponClicked__DelegateSignature(bool Secondary, enum class EItemClass ItemClass);
	void ChangePage(class FName PageName);
	void TabSwitched(class FName TabId);
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_2_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType);
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_3_OnAttachmentHovered__DelegateSignature(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_7_OnAttachmentUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_8_OnAttachmentUnhovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_Carousel_K2Node_ComponentBoundEvent_9_OnTabSelected__DelegateSignature(class FName TabId);
	void BP_OnDeactivated();
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_10_OnCurrentWeaponHovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_11_OnCurrentWeaponHovered__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_WeaponList_K2Node_ComponentBoundEvent_12_OnWidgetActivationChanged__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_Carousel_1_K2Node_ComponentBoundEvent_13_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__W_Loadout_Page_Weapon_Ammo_K2Node_ComponentBoundEvent_14_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Weapon_Deployables_K2Node_ComponentBoundEvent_15_OnMunitionHovered__DelegateSignature(class UW_Loadout_Munitions_C* TriggeringList, class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Loadout_Page_Weapon_PrimaryEdit_K2Node_ComponentBoundEvent_16_OnItemUpdated__DelegateSignature();
	void BndEvt__W_Loadout_Page_Weapon_SecondaryEdit_K2Node_ComponentBoundEvent_17_OnItemUpdated__DelegateSignature();
	void EnableSwitcherFocus();
	void ExecuteUbergraph_W_Loadout_Page_Weapon(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class ELoadoutCategory Temp_byte_Variable, enum class ELoadoutCategory Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ECommonInputType Temp_byte_Variable_2, enum class EDescendantScrollDestination Temp_byte_Variable_3, enum class EDescendantScrollDestination Temp_byte_Variable_4, enum class EDescendantScrollDestination Temp_byte_Variable_5, enum class EDescendantScrollDestination Temp_byte_Variable_6, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, bool K2Node_ComponentBoundEvent_Secondary_1, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass_1, bool Temp_bool_Variable_2, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class ABaseWeapon* K2Node_ComponentBoundEvent_Weapon_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EDescendantScrollDestination K2Node_Select_Default, TSubclassOf<class ABaseWeapon> K2Node_ComponentBoundEvent_Weapon, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EItemType CallFunc_GetItemType_Item_Type, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, bool K2Node_ComponentBoundEvent_Secondary, enum class EItemClass K2Node_ComponentBoundEvent_ItemClass, bool CallFunc_BackPage_Handled, class FName K2Node_Event_PageName, bool CallFunc_SelectTabByID_ReturnValue, class FName K2Node_CustomEvent_TabId, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UWidget* CallFunc_GetFocusTarget_Focus, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment_1, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType_1, class UWeaponAttachment* K2Node_ComponentBoundEvent_Attachment, enum class EWeaponAttachmentType K2Node_ComponentBoundEvent_AttachmentType, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, bool CallFunc_IsActivated_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class FName K2Node_Event_OptionNameID, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon_Edit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BackPage_Handled_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ELoadoutCategory K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, class FName K2Node_ComponentBoundEvent_TabId_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, class FName CallFunc_GetActiveTab_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABaseWeapon* CallFunc_GetWeaponObject_WeaponObject_1, class UFMODEvent* K2Node_Select_Default_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13, class FName K2Node_ComponentBoundEvent_TabId, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList_1, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Munitions_C* K2Node_ComponentBoundEvent_TriggeringList, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetFocusTarget_Focus_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
};

}


