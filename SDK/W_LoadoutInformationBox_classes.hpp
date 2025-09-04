#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x340 - 0x328)
// WidgetBlueprintGeneratedClass W_LoadoutInformationBox.W_LoadoutInformationBox_C
class UW_LoadoutInformationBox_C : public ULoadout_InformationBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AttachmentContainer;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EffectsContainer;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutInformationBox_C* GetDefaultObj();

	void CreateAttachmentElement(TArray<class UWeaponAttachment*>& Attachments, TArray<enum class EWeaponAttachmentType>& AttachmentTypes);
	void CreateEffectsElement(TArray<struct FAttachmentEffects>& AttachmentEffects);
	void UpdateAmmoInfo(class FName AmmoName, class FText CategoryText);
	void UpdateNVGStyleInfo(enum class ENVGStyle NVG_Style, class FText CategoryText);
	void ExecuteUbergraph_W_LoadoutInformationBox(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, TArray<class UWeaponAttachment*>& K2Node_Event_Attachments, TArray<enum class EWeaponAttachmentType>& K2Node_Event_AttachmentTypes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWeaponAttachment* CallFunc_Array_Get_Item, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue_1, class UW_LoadoutInformationElement_C* CallFunc_Create_ReturnValue_2, enum class EWeaponAttachmentType CallFunc_Array_Get_Item_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_TextFromStringTable_ReturnValue, const class FString& CallFunc_String__CombineStrings_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FAttachmentEffects>& K2Node_Event_AttachmentEffects, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FAttachmentEffects& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, bool Temp_bool_Variable, class FName K2Node_CustomEvent_AmmoName, class FText K2Node_CustomEvent_CategoryText_1, const struct FAmmoTypeData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FSlateColor& K2Node_Select_Default_1, class FText Temp_text_Variable, enum class ENVGStyle K2Node_CustomEvent_NVG_Style, class FText K2Node_CustomEvent_CategoryText, class FText CallFunc_GetNVG_StyleDescription_CoverageText, class FText CallFunc_GetNVG_StyleText_CoverageText, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2);
};

}


