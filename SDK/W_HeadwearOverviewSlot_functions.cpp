#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C
// (None)

class UClass* UW_HeadwearOverviewSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HeadwearOverviewSlot_C");

	return Clss;
}


// W_HeadwearOverviewSlot_C W_HeadwearOverviewSlot.Default__W_HeadwearOverviewSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HeadwearOverviewSlot_C* UW_HeadwearOverviewSlot_C::GetDefaultObj()
{
	static class UW_HeadwearOverviewSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HeadwearOverviewSlot_C*>(UW_HeadwearOverviewSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetFocusTarget");

	Params::UW_HeadwearOverviewSlot_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BackPage");

	Params::UW_HeadwearOverviewSlot_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHeadwearPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Headwear                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Facewear                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Mount                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               NVG_Style                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENVGStyle               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_HelmetMount_None_C*      K2Node_DynamicCast_AsBP_Helmet_Mount_None                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateHeadwearPreview(class UClass* Headwear, class UClass* Facewear, class UClass* Mount, enum class ENVGStyle NVG_Style, enum class ENVGStyle Temp_byte_Variable, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_1, class ABP_HelmetMount_None_C* K2Node_DynamicCast_AsBP_Helmet_Mount_None, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHeadwearPreview");

	Params::UW_HeadwearOverviewSlot_C_UpdateHeadwearPreview_Params Parms{};

	Parms.Headwear = Headwear;
	Parms.Facewear = Facewear;
	Parms.Mount = Mount;
	Parms.NVG_Style = NVG_Style;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Helmet_Mount_None = K2Node_DynamicCast_AsBP_Helmet_Mount_None;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_2 = CallFunc_GetClassDefaultObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateFacewear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveFacewear_ReturnValue                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateFacewear(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveFacewear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateFacewear");

	Params::UW_HeadwearOverviewSlot_C_UpdateFacewear_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveFacewear_ReturnValue = CallFunc_GetActiveFacewear_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHelmet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveHeadwear_ReturnValue                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateHelmet(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHeadwear_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHelmet");

	Params::UW_HeadwearOverviewSlot_C_UpdateHelmet_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveHeadwear_ReturnValue = CallFunc_GetActiveHeadwear_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateMountItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENVGStyle               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       CallFunc_GetActiveHelmetMount_ReturnValue                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class ENVGStyle               CallFunc_GetActiveNvgStyle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_HelmetMount_None_C*      K2Node_DynamicCast_AsBP_Helmet_Mount_None                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UW_HeadwearOverviewSlot_C::UpdateMountItem(enum class ENVGStyle Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveHelmetMount_ReturnValue, enum class ENVGStyle CallFunc_GetActiveNvgStyle_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class ABP_HelmetMount_None_C* K2Node_DynamicCast_AsBP_Helmet_Mount_None, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateMountItem");

	Params::UW_HeadwearOverviewSlot_C_UpdateMountItem_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveHelmetMount_ReturnValue = CallFunc_GetActiveHelmetMount_ReturnValue;
	Parms.CallFunc_GetActiveNvgStyle_ReturnValue = CallFunc_GetActiveNvgStyle_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Helmet_Mount_None = K2Node_DynamicCast_AsBP_Helmet_Mount_None;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetVisualState
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetEquippedColorByState_ReturnValue                     (None)
// struct FSlateColor                 CallFunc_GetNormalColorByState_ReturnValue                       (None)
// struct FSlateColor                 K2Node_Select_Default_4                                          (None)

void UW_HeadwearOverviewSlot_C::SetVisualState(bool Hovered, bool Pressed, bool Equipped, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector2D& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& CallFunc_GetEquippedColorByState_ReturnValue, const struct FSlateColor& CallFunc_GetNormalColorByState_ReturnValue, const struct FSlateColor& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetVisualState");

	Params::UW_HeadwearOverviewSlot_C_SetVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Equipped = Equipped;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetEquippedColorByState_ReturnValue = CallFunc_GetEquippedColorByState_ReturnValue;
	Parms.CallFunc_GetNormalColorByState_ReturnValue = CallFunc_GetNormalColorByState_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetArmorCoverage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmourCoverage         ArmorCoverage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetArmorCoverageText_CoverageText                       (None)

void UW_HeadwearOverviewSlot_C::SetArmorCoverage(enum class EArmourCoverage ArmorCoverage, class FText CallFunc_GetArmorCoverageText_CoverageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetArmorCoverage");

	Params::UW_HeadwearOverviewSlot_C_SetArmorCoverage_Params Parms{};

	Parms.ArmorCoverage = ArmorCoverage;
	Parms.CallFunc_GetArmorCoverageText_CoverageText = CallFunc_GetArmorCoverageText_CoverageText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UnbindFromButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UnbindFromButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UnbindFromButton");

	Params::UW_HeadwearOverviewSlot_C_UnbindFromButton_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindDoubleClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindDoubleClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindDoubleClick");

	Params::UW_HeadwearOverviewSlot_C_BindDoubleClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindClick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindClick(class UW_Button_C* ParentButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindClick");

	Params::UW_HeadwearOverviewSlot_C_BindClick_Params Parms{};

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindUnhovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindUnhovered(bool CallFunc_GetEquipped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindUnhovered");

	Params::UW_HeadwearOverviewSlot_C_BindUnhovered_Params Parms{};

	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindPressedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindPressedState(bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_IsPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindPressedState");

	Params::UW_HeadwearOverviewSlot_C_BindPressedState_Params Parms{};

	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindHovered(class UW_Button_C* ParentButton, bool CallFunc_GetEquipped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindHovered");

	Params::UW_HeadwearOverviewSlot_C_BindHovered_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindSelectedState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindSelectedState(class UW_Button_C* ParentButton, bool CallFunc_GetSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindSelectedState");

	Params::UW_HeadwearOverviewSlot_C_BindSelectedState_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BindToButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               BindClicks                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BindToButton(class UW_Button_C* ParentButton, bool BindClicks, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BindToButton");

	Params::UW_HeadwearOverviewSlot_C_BindToButton_Params Parms{};

	Parms.ParentButton = ParentButton;
	Parms.BindClicks = BindClicks;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetEquippedColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

struct FSlateColor UW_HeadwearOverviewSlot_C::GetEquippedColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetEquippedColorByState");

	Params::UW_HeadwearOverviewSlot_C_GetEquippedColorByState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateDetailFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_AdjustFontSize_Font                                     (HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_AdjustFontSize_Font_1                                   (HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateDetailFontSize(int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateDetailFontSize");

	Params::UW_HeadwearOverviewSlot_C_UpdateDetailFontSize_Params Parms{};

	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_AdjustFontSize_Font = CallFunc_AdjustFontSize_Font;
	Parms.CallFunc_AdjustFontSize_Font_1 = CallFunc_AdjustFontSize_Font_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateNameFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_AdjustFontSize_Font                                     (HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateNameFontSize(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FSlateFontInfo& CallFunc_AdjustFontSize_Font)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateNameFontSize");

	Params::UW_HeadwearOverviewSlot_C_UpdateNameFontSize_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_AdjustFontSize_Font = CallFunc_AdjustFontSize_Font;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.AdjustFontSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              Font                                                             (Parm, OutParm, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Size_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::AdjustFontSize(class UTextBlock* TextWidget, int32 FontSize, struct FSlateFontInfo* Font, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "AdjustFontSize");

	Params::UW_HeadwearOverviewSlot_C_AdjustFontSize_Params Parms{};

	Parms.TextWidget = TextWidget;
	Parms.FontSize = FontSize;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_Size_ImplicitCast = K2Node_MakeStruct_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Font != nullptr)
		*Font = std::move(Parms.Font);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateStyle");

	Params::UW_HeadwearOverviewSlot_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.GetNormalColorByState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

struct FSlateColor UW_HeadwearOverviewSlot_C::GetNormalColorByState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "GetNormalColorByState");

	Params::UW_HeadwearOverviewSlot_C_GetNormalColorByState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_HeadwearOverviewSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnAddedToFocusPath");

	Params::UW_HeadwearOverviewSlot_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_8_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_9_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetInputMode");

	Params::UW_HeadwearOverviewSlot_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Hide");

	Params::UW_HeadwearOverviewSlot_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "Reveal");

	Params::UW_HeadwearOverviewSlot_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "PreConstruct");

	Params::UW_HeadwearOverviewSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_BndEvt__W_LoadoutSlot_v2_Button_K2Node_ComponentBoundEvent_0_DoubleClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "HeaderSubpageNavigation");

	Params::UW_HeadwearOverviewSlot_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.RefreshItemInfo
// (BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::RefreshItemInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "RefreshItemInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "InputMethodChanged");

	Params::UW_HeadwearOverviewSlot_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetArmorMaterial
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetArmorMaterial(class UArmourMaterial* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetArmorMaterial");

	Params::UW_HeadwearOverviewSlot_C_SetArmorMaterial_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.SetManualDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Subtext                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  ItemImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::SetManualDetails(class FText ItemName, class FText SlotName, class FText Subtext, class UTexture2D* ItemImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "SetManualDetails");

	Params::UW_HeadwearOverviewSlot_C_SetManualDetails_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.SlotName = SlotName;
	Parms.Subtext = Subtext;
	Parms.ItemImage = ItemImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   ArmorItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EArmourCoverage         Coverage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmor(class ABaseItem* ArmorItem, class UArmourMaterial* Material, enum class EArmourCoverage Coverage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmor");

	Params::UW_HeadwearOverviewSlot_C_UpdateArmor_Params Parms{};

	Parms.ArmorItem = ArmorItem;
	Parms.Material = Material;
	Parms.Coverage = Coverage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_HeadwearOverviewSlot_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateCurrentItemMap");

	Params::UW_HeadwearOverviewSlot_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_HeadwearOverviewSlot_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateActiveLoadout");

	Params::UW_HeadwearOverviewSlot_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ChangePage");

	Params::UW_HeadwearOverviewSlot_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ShowSubtext
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ShowSubtext(class FText& Text, bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ShowSubtext");

	Params::UW_HeadwearOverviewSlot_C_ShowSubtext_Params Parms{};

	Parms.Text = Text;
	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmorCoverage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmourCoverage         Coverage                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmorCoverage(enum class EArmourCoverage Coverage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmorCoverage");

	Params::UW_HeadwearOverviewSlot_C_UpdateArmorCoverage_Params Parms{};

	Parms.Coverage = Coverage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateArmorMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::UpdateArmorMaterial(class UArmourMaterial* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateArmorMaterial");

	Params::UW_HeadwearOverviewSlot_C_UpdateArmorMaterial_Params Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.RefreshInfo
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::RefreshInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "RefreshInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.UpdateHeadwear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::UpdateHeadwear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "UpdateHeadwear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.ExecuteUbergraph_W_HeadwearOverviewSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipped_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             K2Node_Event_Item                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ItemName                                      (None)
// class FText                        K2Node_CustomEvent_SlotName                                      (None)
// class FText                        K2Node_CustomEvent_Subtext                                       (None)
// class UTexture2D*                  K2Node_CustomEvent_ItemImage                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class ABaseItem*                   K2Node_CustomEvent_ArmorItem                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             K2Node_CustomEvent_Material_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EArmourCoverage         K2Node_CustomEvent_Coverage_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseBodyArmor_C*            K2Node_DynamicCast_AsBase_Body_Armor                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// bool                               K2Node_Event_Show                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmourCoverage         K2Node_CustomEvent_Coverage                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetArmorCoverageText_CoverageText                       (None)
// class UArmourMaterial*             K2Node_CustomEvent_Material                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::ExecuteUbergraph_W_HeadwearOverviewSlot(int32 EntryPoint, bool CallFunc_GetEquipped_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_1, bool CallFunc_GetEquipped_ReturnValue_2, bool CallFunc_GetEquipped_ReturnValue_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_GetEquipped_ReturnValue_4, bool K2Node_Event_IsGamepad, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FName K2Node_Event_OptionNameID, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetEquipped_ReturnValue_5, class UArmourMaterial* K2Node_Event_Item, class FText K2Node_CustomEvent_ItemName, class FText K2Node_CustomEvent_SlotName, class FText K2Node_CustomEvent_Subtext, class UTexture2D* K2Node_CustomEvent_ItemImage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ABaseItem* K2Node_CustomEvent_ArmorItem, class UArmourMaterial* K2Node_CustomEvent_Material_1, enum class EArmourCoverage K2Node_CustomEvent_Coverage_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABaseBodyArmor_C* K2Node_DynamicCast_AsBase_Body_Armor, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class FText CallFunc_Format_ReturnValue, class FName K2Node_Event_PageName, class FText K2Node_Event_Text, bool K2Node_Event_Show, enum class EArmourCoverage K2Node_CustomEvent_Coverage, class FText CallFunc_GetArmorCoverageText_CoverageText, class UArmourMaterial* K2Node_CustomEvent_Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "ExecuteUbergraph_W_HeadwearOverviewSlot");

	Params::UW_HeadwearOverviewSlot_C_ExecuteUbergraph_W_HeadwearOverviewSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEquipped_ReturnValue = CallFunc_GetEquipped_ReturnValue;
	Parms.CallFunc_GetEquipped_ReturnValue_1 = CallFunc_GetEquipped_ReturnValue_1;
	Parms.CallFunc_GetEquipped_ReturnValue_2 = CallFunc_GetEquipped_ReturnValue_2;
	Parms.CallFunc_GetEquipped_ReturnValue_3 = CallFunc_GetEquipped_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetEquipped_ReturnValue_4 = CallFunc_GetEquipped_ReturnValue_4;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEquipped_ReturnValue_5 = CallFunc_GetEquipped_ReturnValue_5;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_CustomEvent_ItemName = K2Node_CustomEvent_ItemName;
	Parms.K2Node_CustomEvent_SlotName = K2Node_CustomEvent_SlotName;
	Parms.K2Node_CustomEvent_Subtext = K2Node_CustomEvent_Subtext;
	Parms.K2Node_CustomEvent_ItemImage = K2Node_CustomEvent_ItemImage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_ArmorItem = K2Node_CustomEvent_ArmorItem;
	Parms.K2Node_CustomEvent_Material_1 = K2Node_CustomEvent_Material_1;
	Parms.K2Node_CustomEvent_Coverage_1 = K2Node_CustomEvent_Coverage_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Body_Armor = K2Node_DynamicCast_AsBase_Body_Armor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Show = K2Node_Event_Show;
	Parms.K2Node_CustomEvent_Coverage = K2Node_CustomEvent_Coverage;
	Parms.CallFunc_GetArmorCoverageText_CoverageText = CallFunc_GetArmorCoverageText_CoverageText;
	Parms.K2Node_CustomEvent_Material = K2Node_CustomEvent_Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnDoubleClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_HeadwearOverviewSlot_C*   TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::OnDoubleClick__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnDoubleClick__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_OnDoubleClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadwearOverviewSlot_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnUnhover__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_HeadwearOverviewSlot_C*   TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::OnHover__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnHover__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_OnHover__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadwearOverviewSlot.W_HeadwearOverviewSlot_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_HeadwearOverviewSlot_C*   TriggeringSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadwearOverviewSlot_C::OnClick__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadwearOverviewSlot_C", "OnClick__DelegateSignature");

	Params::UW_HeadwearOverviewSlot_C_OnClick__DelegateSignature_Params Parms{};

	Parms.TriggeringSlot = TriggeringSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


