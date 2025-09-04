#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x530 - 0x468)
// WidgetBlueprintGeneratedClass W_TabCarousel.W_TabCarousel_C
class UW_TabCarousel_C : public UCommonTabListWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Left;                                          // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Right;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Nav;                                            // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   LeftActionWidget;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   RightActionWidget;                                 // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Left;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Right;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class UCommonButtonBase*>  NavMap;                                            // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                             InputActionIconSize;                               // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TabStyle;                                          // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EListItemAlignment                TabOrientation;                                    // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_900[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TabHistory;                                        // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_TabCarousel_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled, int32 CurrentIndex, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_SelectTabByID_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void SetInputActionIconVisibility(bool bHideIcons, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void RemoveTabFromHistory(class FName TabNameID, bool CallFunc_Array_RemoveItem_ReturnValue);
	void SetDefaultTab(class FName TabNameID, bool CallFunc_SelectTabByID_ReturnValue);
	void ClearHistory();
	void SetInputActionIconSize(const struct FVector2D& IconSize, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
	void SetTabOrientation(class UHorizontalBoxSlot* HorizontalBoxSlotItem, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, enum class EListItemAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class EHorizontalAlignment Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, enum class EHorizontalAlignment K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void RegisterStyledTab(class FText ButtonText, class FName TabNameID, class UWidget* ContentWidget, bool CallFunc_RegisterTab_ReturnValue);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void SetTabName(class FName TabNameID, class FText ButtonText);
	void OnInitialized();
	void SetTabStyle(class FName TabNameID, class UClass* ButtonStyle);
	void LogTabHistory(class FName TabId);
	void BndEvt__W_TabCarousel_LeftActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_W_TabCarousel(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_TabNameID_1, class UCommonButtonBase* K2Node_Event_TabButton_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class FName K2Node_Event_TabNameID, class UCommonButtonBase* K2Node_Event_TabButton, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_RemoveChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, class FName K2Node_CustomEvent_TabNameID_1, class FText K2Node_CustomEvent_ButtonText, enum class ESlateVisibility Temp_byte_Variable_4, class UCommonButtonBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Button_C* K2Node_DynamicCast_AsW_Button, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_TabNameID, class UClass* K2Node_CustomEvent_ButtonStyle, enum class ESlateVisibility Temp_byte_Variable_5, class UCommonButtonBase* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UW_Button_C* K2Node_DynamicCast_AsW_Button_1, bool K2Node_DynamicCast_bSuccess_1, enum class ECommonInputType Temp_byte_Variable_6, class FName K2Node_CustomEvent_TabId, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
};

}


