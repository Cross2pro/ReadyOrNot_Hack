#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x300 - 0x2C8)
// WidgetBlueprintGeneratedClass W_DLC_Button.W_DLC_Button_C
class UW_DLC_Button_C : public UDLCButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_29;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_29;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Image;                                             // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DLC_Button_C* GetDefaultObj();

	class UWidget* GetToolTipWidget(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, bool Temp_bool_Variable, class UW_Simple_Tooltip_C* CallFunc_Create_ReturnValue, enum class EGameVersionRestriction Temp_byte_Variable, bool CallFunc_IsGameVersionEnabled_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_DLC_Button_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_DLC_Button_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__W_DLC_Button_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_W_DLC_Button(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsGameVersionEnabled_ReturnValue, enum class EMouseCursor Temp_byte_Variable, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, enum class EMouseCursor Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, enum class EMouseCursor K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const class FString& CallFunc_GetURL_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsGameVersionEnabled_ReturnValue_1, bool CallFunc_IsGameVersionEnabled_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2);
};

}


