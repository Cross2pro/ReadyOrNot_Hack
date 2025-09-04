#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_Page_Preset.W_Loadout_Page_Preset_C
// (None)

class UClass* UW_Loadout_Page_Preset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_Page_Preset_C");

	return Clss;
}


// W_Loadout_Page_Preset_C W_Loadout_Page_Preset.Default__W_Loadout_Page_Preset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_Page_Preset_C* UW_Loadout_Page_Preset_C::GetDefaultObj()
{
	static class UW_Loadout_Page_Preset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_Page_Preset_C*>(UW_Loadout_Page_Preset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Customization Preset Exists
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomizationPresetNames_ReturnValue                 (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Loadout_Page_Preset_C::Customization_Preset_Exists(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Customization Preset Exists");

	Params::UW_Loadout_Page_Preset_C_Customization_Preset_Exists_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue = CallFunc_GetCurrentCustomizationPresetName_ReturnValue;
	Parms.CallFunc_GetCustomizationPresetNames_ReturnValue = CallFunc_GetCustomizationPresetNames_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Preset Exists
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Loadout_Page_Preset_C::Preset_Exists(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Preset Exists");

	Params::UW_Loadout_Page_Preset_C_Preset_Exists_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Unequip Preset If Deleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEquippingSwat          CurrentSwat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Preset_Exists_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Unequip_Preset_If_Deleted(enum class EEquippingSwat CurrentSwat, bool CallFunc_Preset_Exists_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Unequip Preset If Deleted");

	Params::UW_Loadout_Page_Preset_C_Unequip_Preset_If_Deleted_Params Parms{};

	Parms.CurrentSwat = CurrentSwat;
	Parms.CallFunc_Preset_Exists_ReturnValue = CallFunc_Preset_Exists_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Set Equipped Preset By Swat Member
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEquippingSwat          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButtonBase*>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class FString>              CallFunc_Map_Values_Values                                       (ReferenceParm)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// class FString                      CallFunc_GetCustomizationPresetBySwat_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Set_Equipped_Preset_By_Swat_Member(enum class EEquippingSwat NewParam, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, TArray<class FString>& CallFunc_Map_Values_Values, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_GetCustomizationPresetBySwat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, class UCommonButtonBase* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Set Equipped Preset By Swat Member");

	Params::UW_Loadout_Page_Preset_C_Set_Equipped_Preset_By_Swat_Member_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_GetCustomizationPresetBySwat_ReturnValue = CallFunc_GetCustomizationPresetBySwat_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Set Current Unit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetActiveSwatMemberLabel_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Set_Current_Unit(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Set Current Unit");

	Params::UW_Loadout_Page_Preset_C_Set_Current_Unit_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveSwatMemberLabel_ReturnValue = CallFunc_GetActiveSwatMemberLabel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Equip Selected Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Selected_Button                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButtonBase*>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SmallSlot_v2_C*           CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SmallSlot_v2_C*           CallFunc_FindParentWidgetOfType_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Equip_Selected_Preset(class UWidget* Selected_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_FindParentWidgetOfType_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Equip Selected Preset");

	Params::UW_Loadout_Page_Preset_C_Equip_Selected_Preset_Params Parms{};

	Parms.Selected_Button = Selected_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue_1 = CallFunc_FindParentWidgetOfType_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Loadout_Page_Preset_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BP_OnHandleBackAction");

	Params::UW_Loadout_Page_Preset_C_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonButtonBase*>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// class UCommonButtonBase*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_Page_Preset_C::BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, class UCommonButtonBase* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_Page_Preset_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Add Presets to List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton_C*             CallFunc_Create_Preset_Option_FocusButton                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Add_Presets_to_List(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class UCommonButton_C* CallFunc_Create_Preset_Option_FocusButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Add Presets to List");

	Params::UW_Loadout_Page_Preset_C_Add_Presets_to_List_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue = CallFunc_GetCurrentCustomizationPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Create_Preset_Option_FocusButton = CallFunc_Create_Preset_Option_FocusButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Create New Preset Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_SmallSlot_v2_C*           New_Button                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_NewPreset_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Create_New_Preset_Button(class UW_SmallSlot_v2_C* New_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_NewPreset_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Create New Preset Button");

	Params::UW_Loadout_Page_Preset_C_Create_New_Preset_Button_Params Parms{};

	Parms.New_Button = New_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Populate Presets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomizationPresetNames_ReturnValue                 (ReferenceParm)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// TArray<class FString>              K2Node_Select_Default                                            (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Populate_Presets(bool Temp_bool_Variable, class FText Temp_text_Variable, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, TArray<class FString>& K2Node_Select_Default, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Populate Presets");

	Params::UW_Loadout_Page_Preset_C_Populate_Presets_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCustomizationPresetNames_ReturnValue = CallFunc_GetCustomizationPresetNames_ReturnValue;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Create Preset Option
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preset_ID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton_C*             FocusButton                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SmallSlot_v2_C*           New_Button                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SmallSlot_v2_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Create_Preset_Option(const class FString& Preset_ID, class UCommonButton_C** FocusButton, class UW_SmallSlot_v2_C* New_Button, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Create Preset Option");

	Params::UW_Loadout_Page_Preset_C_Create_Preset_Option_Params Parms{};

	Parms.Preset_ID = Preset_ID;
	Parms.New_Button = New_Button;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusButton != nullptr)
		*FocusButton = Parms.FocusButton;

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Preset_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "UpdateActiveLoadout");

	Params::UW_Loadout_Page_Preset_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Preset_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_Page_Preset_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_Page_Preset_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Option Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Option_Hovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Option Hovered");

	Params::UW_Loadout_Page_Preset_C_Option_Hovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Add New Preset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Add_New_Preset(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Add New Preset");

	Params::UW_Loadout_Page_Preset_C_Add_New_Preset_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Option Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::Option_Clicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Option Clicked");

	Params::UW_Loadout_Page_Preset_C_Option_Clicked_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_1_OnCarouselNext__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_1_OnCarouselNext__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_1_OnCarouselNext__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_2_OnCarouselPrevious__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_2_OnCarouselPrevious__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_2_OnCarouselPrevious__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "InputMethodChanged");

	Params::UW_Loadout_Page_Preset_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Preset Deleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Preset_C::Preset_Deleted(class FText PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Preset Deleted");

	Params::UW_Loadout_Page_Preset_C_Preset_Deleted_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Preset List Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::Preset_List_Updated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Preset List Updated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.New Preset Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::New_Preset_Hovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "New Preset Hovered");

	Params::UW_Loadout_Page_Preset_C_New_Preset_Hovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.Customization Preset Deleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_Page_Preset_C::Customization_Preset_Deleted(class FText PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "Customization Preset Deleted");

	Params::UW_Loadout_Page_Preset_C_Customization_Preset_Deleted_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_0_OnEquippingUnitSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FST_EquippingUnit           EquippingUnitInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_0_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_0_OnEquippingUnitSelected__DelegateSignature");

	Params::UW_Loadout_Page_Preset_C_BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_0_OnEquippingUnitSelected__DelegateSignature_Params Parms{};

	Parms.EquippingUnitInfo = EquippingUnitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.ExecuteUbergraph_W_Loadout_Page_Preset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEquippingSwat          CallFunc_PreviousActiveSwatMember_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PresetName_1                                  (None)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_OpenPresetSaveModal_Preset_Modal                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue_1         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue_1               (None)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class UW_Loadout_V2_C*             CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PresetName                                    (None)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue_2         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue_2               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsMultiplayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_EquippingUnit           K2Node_ComponentBoundEvent_EquippingUnitInfo                     (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::ExecuteUbergraph_W_Loadout_Page_Preset(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button_1, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, enum class EEquippingSwat CallFunc_PreviousActiveSwatMember_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class FText K2Node_CustomEvent_PresetName_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, class UCommonButtonBase* K2Node_CustomEvent_Button_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_3, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button_3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName K2Node_Event_OptionNameID, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UCommonButtonBase* K2Node_CustomEvent_Button, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_4, class FText CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue_1, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class FText K2Node_CustomEvent_PresetName, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_5, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_6, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_IsMultiplayer_ReturnValue, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "ExecuteUbergraph_W_Loadout_Page_Preset");

	Params::UW_Loadout_Page_Preset_C_ExecuteUbergraph_W_Loadout_Page_Preset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_PreviousActiveSwatMember_ReturnValue = CallFunc_PreviousActiveSwatMember_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1;
	Parms.K2Node_CustomEvent_PresetName_1 = K2Node_CustomEvent_PresetName_1;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.K2Node_CustomEvent_Button_2 = K2Node_CustomEvent_Button_2;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_3 = CallFunc_GetReadyOrNotGameState_ReturnValue_3;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue = CallFunc_GetCurrentCustomizationPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_OpenPresetSaveModal_Preset_Modal = CallFunc_OpenPresetSaveModal_Preset_Modal;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_Button_3 = K2Node_CustomEvent_Button_3;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_4 = CallFunc_GetReadyOrNotGameState_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue_1 = CallFunc_GetCurrentCustomizationPresetName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue_1 = CallFunc_GetCurrentPresetDisplayName_ReturnValue_1;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6 = CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6;
	Parms.K2Node_CustomEvent_PresetName = K2Node_CustomEvent_PresetName;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_5 = CallFunc_GetReadyOrNotGameState_ReturnValue_5;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue_2 = CallFunc_GetCurrentCustomizationPresetName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_6 = CallFunc_GetReadyOrNotGameState_ReturnValue_6;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue_2 = CallFunc_GetCurrentPresetDisplayName_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsMultiplayer_ReturnValue = CallFunc_IsMultiplayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_EquippingUnitInfo = K2Node_ComponentBoundEvent_EquippingUnitInfo;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_7 = CallFunc_GetReadyOrNotGameState_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.OnCustomizationPresetHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::OnCustomizationPresetHovered__DelegateSignature(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "OnCustomizationPresetHovered__DelegateSignature");

	Params::UW_Loadout_Page_Preset_C_OnCustomizationPresetHovered__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.OnPresetEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::OnPresetEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "OnPresetEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.OnPresetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_Page_Preset_C::OnPresetSelected__DelegateSignature(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "OnPresetSelected__DelegateSignature");

	Params::UW_Loadout_Page_Preset_C_OnPresetSelected__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_Page_Preset.W_Loadout_Page_Preset_C.OnDefaultPresetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_Page_Preset_C::OnDefaultPresetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_Page_Preset_C", "OnDefaultPresetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


