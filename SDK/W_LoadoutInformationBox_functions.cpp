#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadoutInformationBox.W_LoadoutInformationBox_C
// (None)

class UClass* UW_LoadoutInformationBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadoutInformationBox_C");

	return Clss;
}


// W_LoadoutInformationBox_C W_LoadoutInformationBox.Default__W_LoadoutInformationBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadoutInformationBox_C* UW_LoadoutInformationBox_C::GetDefaultObj()
{
	static class UW_LoadoutInformationBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadoutInformationBox_C*>(UW_LoadoutInformationBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.CreateAttachmentElement
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UWeaponAttachment*>   Attachments                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<enum class EWeaponAttachmentType>AttachmentTypes                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_LoadoutInformationBox_C::CreateAttachmentElement(TArray<class UWeaponAttachment*>& Attachments, TArray<enum class EWeaponAttachmentType>& AttachmentTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationBox_C", "CreateAttachmentElement");

	Params::UW_LoadoutInformationBox_C_CreateAttachmentElement_Params Parms{};

	Parms.Attachments = Attachments;
	Parms.AttachmentTypes = AttachmentTypes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.CreateEffectsElement
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FAttachmentEffects>  AttachmentEffects                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_LoadoutInformationBox_C::CreateEffectsElement(TArray<struct FAttachmentEffects>& AttachmentEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationBox_C", "CreateEffectsElement");

	Params::UW_LoadoutInformationBox_C_CreateEffectsElement_Params Parms{};

	Parms.AttachmentEffects = AttachmentEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.UpdateAmmoInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInformationBox_C::UpdateAmmoInfo(class FName AmmoName, class FText CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationBox_C", "UpdateAmmoInfo");

	Params::UW_LoadoutInformationBox_C_UpdateAmmoInfo_Params Parms{};

	Parms.AmmoName = AmmoName;
	Parms.CategoryText = CategoryText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.UpdateNVGStyleInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENVGStyle               NVG_Style                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_LoadoutInformationBox_C::UpdateNVGStyleInfo(enum class ENVGStyle NVG_Style, class FText CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationBox_C", "UpdateNVGStyleInfo");

	Params::UW_LoadoutInformationBox_C_UpdateNVGStyleInfo_Params Parms{};

	Parms.NVG_Style = NVG_Style;
	Parms.CategoryText = CategoryText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadoutInformationBox.W_LoadoutInformationBox_C.ExecuteUbergraph_W_LoadoutInformationBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWeaponAttachment*>   K2Node_Event_Attachments                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<enum class EWeaponAttachmentType>K2Node_Event_AttachmentTypes                                     (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutInformationElement_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutInformationElement_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutInformationElement_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextFromStringTable_ReturnValue                         (None)
// class FString                      CallFunc_String__CombineStrings_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAttachmentEffects>  K2Node_Event_AttachmentEffects                                   (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttachmentEffects          CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AmmoName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_CategoryText_1                                (None)
// struct FAmmoTypeData               CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// class FText                        Temp_text_Variable                                               (None)
// enum class ENVGStyle               K2Node_CustomEvent_NVG_Style                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_CategoryText                                  (None)
// class FText                        CallFunc_GetNVG_StyleDescription_CoverageText                    (None)
// class FText                        CallFunc_GetNVG_StyleText_CoverageText                           (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)

void UW_LoadoutInformationBox_C::ExecuteUbergraph_W_LoadoutInformationBox(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWeaponAttachment*>& K2Node_Event_Attachments, TArray<enum class EWeaponAttachmentType>& K2Node_Event_AttachmentTypes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWeaponAttachment* CallFunc_Array_Get_Item, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue_1, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue_2, enum class EWeaponAttachmentType CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_TextFromStringTable_ReturnValue, const class FString& CallFunc_String__CombineStrings_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FAttachmentEffects>& K2Node_Event_AttachmentEffects, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FAttachmentEffects& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, bool Temp_bool_Variable, class FName K2Node_CustomEvent_AmmoName, class FText K2Node_CustomEvent_CategoryText_1, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_Select_Default_1, class FText Temp_text_Variable, enum class ENVGStyle K2Node_CustomEvent_NVG_Style, class FText K2Node_CustomEvent_CategoryText, class FText CallFunc_GetNVG_StyleDescription_CoverageText, class FText CallFunc_GetNVG_StyleText_CoverageText, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadoutInformationBox_C", "ExecuteUbergraph_W_LoadoutInformationBox");

	Params::UW_LoadoutInformationBox_C_ExecuteUbergraph_W_LoadoutInformationBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_Attachments = K2Node_Event_Attachments;
	Parms.K2Node_Event_AttachmentTypes = K2Node_Event_AttachmentTypes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_TextFromStringTable_ReturnValue = CallFunc_TextFromStringTable_ReturnValue;
	Parms.CallFunc_String__CombineStrings_ReturnValue = CallFunc_String__CombineStrings_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_AttachmentEffects = K2Node_Event_AttachmentEffects;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_AmmoName = K2Node_CustomEvent_AmmoName;
	Parms.K2Node_CustomEvent_CategoryText_1 = K2Node_CustomEvent_CategoryText_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CustomEvent_NVG_Style = K2Node_CustomEvent_NVG_Style;
	Parms.K2Node_CustomEvent_CategoryText = K2Node_CustomEvent_CategoryText;
	Parms.CallFunc_GetNVG_StyleDescription_CoverageText = CallFunc_GetNVG_StyleDescription_CoverageText;
	Parms.CallFunc_GetNVG_StyleText_CoverageText = CallFunc_GetNVG_StyleText_CoverageText;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


