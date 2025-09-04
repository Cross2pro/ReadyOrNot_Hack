#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Controls_UE5.W_Options_Controls_UE5_C
// (None)

class UClass* UW_Options_Controls_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Controls_UE5_C");

	return Clss;
}


// W_Options_Controls_UE5_C W_Options_Controls_UE5.Default__W_Options_Controls_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Controls_UE5_C* UW_Options_Controls_UE5_C::GetDefaultObj()
{
	static class UW_Options_Controls_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Controls_UE5_C*>(UW_Options_Controls_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.PreviousControlsTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_ScrollButton_C*>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::PreviousControlsTab(TArray<class UW_ScrollButton_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UW_ScrollButton_C* CallFunc_Array_Get_Item, class UW_ScrollButton_C* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "PreviousControlsTab");

	Params::UW_Options_Controls_UE5_C_PreviousControlsTab_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.NextControlsTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_ScrollButton_C*>   CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::NextControlsTab(TArray<class UW_ScrollButton_C*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "NextControlsTab");

	Params::UW_Options_Controls_UE5_C_NextControlsTab_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.SetupControlsCategories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::SetupControlsCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "SetupControlsCategories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_Controls_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_Controls_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Initialise Or Get Pop Up
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      PopUpType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSStandardModalDetails      ModalDetails                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UStandardModal*              OutputPopUp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              TempPopUp                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      PopUpClass                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UStandardModal*>      CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UStandardModal*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::Initialise_Or_Get_Pop_Up(class UClass* PopUpType, const struct FSStandardModalDetails& ModalDetails, class UStandardModal** OutputPopUp, class UStandardModal* TempPopUp, class UClass* PopUpClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UStandardModal* CallFunc_Create_ReturnValue, TArray<class UStandardModal*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UStandardModal* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Initialise Or Get Pop Up");

	Params::UW_Options_Controls_UE5_C_Initialise_Or_Get_Pop_Up_Params Parms{};

	Parms.PopUpType = PopUpType;
	Parms.ModalDetails = ModalDetails;
	Parms.TempPopUp = TempPopUp;
	Parms.PopUpClass = PopUpClass;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPopUp != nullptr)
		*OutputPopUp = Parms.OutputPopUp;

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.SwitchControlsTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     MenuWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::SwitchControlsTab(class UW_ScrollButton_C* Button, class UWidget* MenuWidget, TArray<class UW_ControlsResetBinding_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "SwitchControlsTab");

	Params::UW_Options_Controls_UE5_C_SwitchControlsTab_Params Parms{};

	Parms.Button = Button;
	Parms.MenuWidget = MenuWidget;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Clear Control Binds Lists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::Clear_Control_Binds_Lists()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Clear Control Binds Lists");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.PopulatePCControls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::PopulatePCControls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "PopulatePCControls");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.GetConflictingKeybindText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FAxisMappingStruct>  ConflictingAxes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>ConflictingActions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                ConflictBindNames                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_GetConflictingKeybindListText_Text                      (None)
// class FString                      CallFunc_Abbreviate_Key_Abreviated_Name                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Options_Controls_UE5_C::GetConflictingKeybindText(const struct FKey& Key, TArray<struct FAxisMappingStruct>& ConflictingAxes, TArray<struct FActionMappingStruct>& ConflictingActions, TArray<class FText>& ConflictBindNames, class FText* Text, class FText CallFunc_GetConflictingKeybindListText_Text, const class FString& CallFunc_Abbreviate_Key_Abreviated_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "GetConflictingKeybindText");

	Params::UW_Options_Controls_UE5_C_GetConflictingKeybindText_Params Parms{};

	Parms.Key = Key;
	Parms.ConflictingAxes = ConflictingAxes;
	Parms.ConflictingActions = ConflictingActions;
	Parms.ConflictBindNames = ConflictBindNames;
	Parms.CallFunc_GetConflictingKeybindListText_Text = CallFunc_GetConflictingKeybindListText_Text;
	Parms.CallFunc_Abbreviate_Key_Abreviated_Name = CallFunc_Abbreviate_Key_Abreviated_Name;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.GetConflictingKeybindListText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FAxisMappingStruct>  Axes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FActionMappingStruct>Actions                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                ConflictBinds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        LocalizedActionChain                                             (Edit, BlueprintVisible)
// class FText                        Inputs_2LocalizedComma                                           (Edit, BlueprintVisible)
// class FText                        Inputs_2LocalizedAnd                                             (Edit, BlueprintVisible)
// TArray<class FText>                LocalizedActions                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::GetConflictingKeybindListText(TArray<struct FAxisMappingStruct>& Axes, TArray<struct FActionMappingStruct>& Actions, TArray<class FText>& ConflictBinds, class FText* Text, class FText LocalizedActionChain, class FText Inputs_2LocalizedComma, class FText Inputs_2LocalizedAnd, const TArray<class FText>& LocalizedActions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "GetConflictingKeybindListText");

	Params::UW_Options_Controls_UE5_C_GetConflictingKeybindListText_Params Parms{};

	Parms.Axes = Axes;
	Parms.Actions = Actions;
	Parms.ConflictBinds = ConflictBinds;
	Parms.LocalizedActionChain = LocalizedActionChain;
	Parms.Inputs_2LocalizedComma = Inputs_2LocalizedComma;
	Parms.Inputs_2LocalizedAnd = Inputs_2LocalizedAnd;
	Parms.LocalizedActions = LocalizedActions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.TryAssignUnbindableControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyBinding                 KeyBinding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CannotBeUnbindable                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::TryAssignUnbindableControl(const struct FKeyBinding& KeyBinding, bool* bSuccess, bool CannotBeUnbindable, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "TryAssignUnbindableControl");

	Params::UW_Options_Controls_UE5_C_TryAssignUnbindableControl_Params Parms{};

	Parms.KeyBinding = KeyBinding;
	Parms.CannotBeUnbindable = CannotBeUnbindable;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Add To Control Binds Lists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           ControlBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAxisMappingStruct          InputAxis                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FActionMappingStruct        InputAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::Add_To_Control_Binds_Lists(class UW_ControlsBind_C* ControlBind, const struct FAxisMappingStruct& InputAxis, const struct FActionMappingStruct& InputAction, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Add To Control Binds Lists");

	Params::UW_Options_Controls_UE5_C_Add_To_Control_Binds_Lists_Params Parms{};

	Parms.ControlBind = ControlBind;
	Parms.InputAxis = InputAxis;
	Parms.InputAction = InputAction;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.AddControlsToGridPanel
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FKeyBinding>         Bindings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UGridPanel*                  GridPanel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::AddControlsToGridPanel(TArray<struct FKeyBinding>& Bindings, class UGridPanel* GridPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "AddControlsToGridPanel");

	Params::UW_Options_Controls_UE5_C_AddControlsToGridPanel_Params Parms{};

	Parms.Bindings = Bindings;
	Parms.GridPanel = GridPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::On_Binding_Started(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "On Binding Started");

	Params::UW_Options_Controls_UE5_C_On_Binding_Started_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Canceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::On_Binding_Canceled(class UW_ControlsBind_C* CallingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "On Binding Canceled");

	Params::UW_Options_Controls_UE5_C_On_Binding_Canceled_Params Parms{};

	Parms.CallingWidget = CallingWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.On Binding Committed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        NewKey                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::On_Binding_Committed(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "On Binding Committed");

	Params::UW_Options_Controls_UE5_C_On_Binding_Committed_Params Parms{};

	Parms.CallingWidget = CallingWidget;
	Parms.NewKey = NewKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Detected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ControlsBind_C*           CallingBind                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>ActionMappings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FAxisMappingStruct>  AxisMappings                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<class FText>                ConflictBindsText                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Options_Controls_UE5_C::Conflicting_Bind_Detected(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>& ActionMappings, TArray<struct FAxisMappingStruct>& AxisMappings, const struct FKey& Key, TArray<class FText>& ConflictBindsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Conflicting Bind Detected");

	Params::UW_Options_Controls_UE5_C_Conflicting_Bind_Detected_Params Parms{};

	Parms.CallingBind = CallingBind;
	Parms.ActionMappings = ActionMappings;
	Parms.AxisMappings = AxisMappings;
	Parms.Key = Key;
	Parms.ConflictBindsText = ConflictBindsText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.End Buttons Disabled For Binding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::End_Buttons_Disabled_For_Binding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "End Buttons Disabled For Binding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.ResetKeybinds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::ResetKeybinds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "ResetKeybinds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Ok Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Options_Controls_UE5_C::Conflicting_Bind_Ok_Clicked(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Conflicting Bind Ok Clicked");

	Params::UW_Options_Controls_UE5_C_Conflicting_Bind_Ok_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.Conflicting Bind Cancel Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::Conflicting_Bind_Cancel_Clicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "Conflicting Bind Cancel Clicked");

	Params::UW_Options_Controls_UE5_C_Conflicting_Bind_Cancel_Clicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.InitialisePopUps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::InitialisePopUps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "InitialisePopUps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.OnCancelIllegalBindClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::OnCancelIllegalBindClicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "OnCancelIllegalBindClicked");

	Params::UW_Options_Controls_UE5_C_OnCancelIllegalBindClicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Controls_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_NextGamepadTabButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_W_ScrollButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsVehicle_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsMovement_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsEquipment_1_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsInteraction_1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_ScrollButton_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_ScrollButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");

	Params::UW_Options_Controls_UE5_C_BndEvt__W_Options_Controls_UE5_btn_ControlsReplay_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Controls_UE5.W_Options_Controls_UE5_C.ExecuteUbergraph_W_Options_Controls_UE5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SettingLabel_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKeyBinding>         K2Node_CustomEvent_Bindings                                      (ConstParm, ReferenceParm)
// class UGridPanel*                  K2Node_CustomEvent_GridPanel                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKeyBinding                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAssignUnbindableControl_bSuccess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryAssignUnbindableControl_bSuccess_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsResetBinding_C*   CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_3                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<struct FAxisMappingStruct>  K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FActionMappingStruct>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsBind_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ControlsResetBinding_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_4                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsResetBinding_C*   CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_StandardButton_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_5                     (ReferenceParm, ContainsInstancedReference)
// class UW_StandardButton_C*         CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingWidget                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_NewKey                                        (HasGetValueTypeHash)
// class UW_ControlsBind_C*           K2Node_CustomEvent_CallingBind                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActionMappingStruct>K2Node_CustomEvent_ActionMappings                                (ReferenceParm)
// TArray<struct FAxisMappingStruct>  K2Node_CustomEvent_AxisMappings                                  (ReferenceParm)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// TArray<class FText>                K2Node_CustomEvent_ConflictBindsText                             (ReferenceParm)
// class FText                        CallFunc_GetConflictingKeybindText_Text                          (None)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_BindConflictModal_C*      K2Node_DynamicCast_AsW_Bind_Conflict_Modal                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_IllegalUnbindModal_C*     K2Node_DynamicCast_AsW_Illegal_Unbind_Modal                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_ScrollButton_C*>   CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UW_ScrollButton_C*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ScrollButton_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Controls_UE5_C::ExecuteUbergraph_W_Options_Controls_UE5(int32 EntryPoint, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_SettingLabel_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, TArray<struct FKeyBinding>& K2Node_CustomEvent_Bindings, class UGridPanel* K2Node_CustomEvent_GridPanel, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, const struct FKeyBinding& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TryAssignUnbindableControl_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_TryAssignUnbindableControl_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_1, class UW_ControlsBind_C* CallFunc_Create_ReturnValue_2, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_2, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_StandardButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UW_ControlsResetBinding_C* CallFunc_Create_ReturnValue_3, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_3, TArray<class UW_ControlsBind_C*>& K2Node_MakeArray_Array, TArray<struct FAxisMappingStruct>& K2Node_MakeArray_Array_1, TArray<struct FActionMappingStruct>& K2Node_MakeArray_Array_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget_1, TArray<class UW_ControlsBind_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, int32 Temp_int_Loop_Counter_Variable_6, class UW_ControlsBind_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class UW_ControlsResetBinding_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_4, bool CallFunc_Less_IntInt_ReturnValue_3, class UW_ControlsResetBinding_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, int32 Temp_int_Array_Index_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_4, class UW_ControlsBind_C* CallFunc_Array_Get_Item_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<class UW_StandardButton_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_5, class UW_StandardButton_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, class UW_ControlsBind_C* K2Node_CustomEvent_CallingWidget, const struct FKey& K2Node_CustomEvent_NewKey, class UW_ControlsBind_C* K2Node_CustomEvent_CallingBind, TArray<struct FActionMappingStruct>& K2Node_CustomEvent_ActionMappings, TArray<struct FAxisMappingStruct>& K2Node_CustomEvent_AxisMappings, const struct FKey& K2Node_CustomEvent_Key, TArray<class FText>& K2Node_CustomEvent_ConflictBindsText, class FText CallFunc_GetConflictingKeybindText_Text, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_8, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_2, class FText K2Node_CustomEvent_TextEntry, class UStandardModal* K2Node_CustomEvent_CallingModal_1, class UStandardModal* CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp, class UStandardModal* CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1, class UW_BindConflictModal_C* K2Node_DynamicCast_AsW_Bind_Conflict_Modal, bool K2Node_DynamicCast_bSuccess, class UW_IllegalUnbindModal_C* K2Node_DynamicCast_AsW_Illegal_Unbind_Modal, bool K2Node_DynamicCast_bSuccess_1, class UStandardModal* K2Node_CustomEvent_CallingModal, TArray<class UW_ScrollButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item_7, class UWidget* CallFunc_Array_Get_Item_8, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, bool CallFunc_Less_IntInt_ReturnValue_7, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_6, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_5, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_4, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_3, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_2, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_1, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Controls_UE5_C", "ExecuteUbergraph_W_Options_Controls_UE5");

	Params::UW_Options_Controls_UE5_C_ExecuteUbergraph_W_Options_Controls_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.K2Node_CustomEvent_Bindings = K2Node_CustomEvent_Bindings;
	Parms.K2Node_CustomEvent_GridPanel = K2Node_CustomEvent_GridPanel;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_TryAssignUnbindableControl_bSuccess = CallFunc_TryAssignUnbindableControl_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TryAssignUnbindableControl_bSuccess_1 = CallFunc_TryAssignUnbindableControl_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToGrid_ReturnValue_1 = CallFunc_AddChildToGrid_ReturnValue_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue_2 = CallFunc_AddChildToGrid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_CallingWidget_2 = K2Node_CustomEvent_CallingWidget_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChildToGrid_ReturnValue_3 = CallFunc_AddChildToGrid_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_CallingWidget_1 = K2Node_CustomEvent_CallingWidget_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_4 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_5 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.K2Node_CustomEvent_CallingWidget = K2Node_CustomEvent_CallingWidget;
	Parms.K2Node_CustomEvent_NewKey = K2Node_CustomEvent_NewKey;
	Parms.K2Node_CustomEvent_CallingBind = K2Node_CustomEvent_CallingBind;
	Parms.K2Node_CustomEvent_ActionMappings = K2Node_CustomEvent_ActionMappings;
	Parms.K2Node_CustomEvent_AxisMappings = K2Node_CustomEvent_AxisMappings;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_ConflictBindsText = K2Node_CustomEvent_ConflictBindsText;
	Parms.CallFunc_GetConflictingKeybindText_Text = CallFunc_GetConflictingKeybindText_Text;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp = CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp;
	Parms.CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1 = CallFunc_Initialise_Or_Get_Pop_Up_OutputPopUp_1;
	Parms.K2Node_DynamicCast_AsW_Bind_Conflict_Modal = K2Node_DynamicCast_AsW_Bind_Conflict_Modal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Illegal_Unbind_Modal = K2Node_DynamicCast_AsW_Illegal_Unbind_Modal;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1 = CallFunc_SetDoublePropertyByName_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


