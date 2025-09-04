#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Tutorial.W_Tutorial_C
// (None)

class UClass* UW_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Tutorial_C");

	return Clss;
}


// W_Tutorial_C W_Tutorial.Default__W_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Tutorial_C* UW_Tutorial_C::GetDefaultObj()
{
	static class UW_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Tutorial_C*>(UW_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Tutorial.W_Tutorial_C.UpdatePlatformFonts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_GetDefaultTextStyleOverride_TextBlockStyle              (HasGetValueTypeHash)
// bool                               CallFunc_IsPcPlatform_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::UpdatePlatformFonts(bool Temp_bool_Variable, const struct FSlateFontInfo& CallFunc_GetDefaultTextStyleOverride_TextBlockStyle, bool CallFunc_IsPcPlatform_ReturnValue, class UDataTable* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "UpdatePlatformFonts");

	Params::UW_Tutorial_C_UpdatePlatformFonts_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDefaultTextStyleOverride_TextBlockStyle = CallFunc_GetDefaultTextStyleOverride_TextBlockStyle;
	Parms.CallFunc_IsPcPlatform_ReturnValue = CallFunc_IsPcPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tutorial.W_Tutorial_C.GetDefaultTextStyleOverride
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateFontInfo              TextBlockStyle                                                   (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPcPlatform_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonTextStyle*            CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              CallFunc_GetFont_OutFont                                         (HasGetValueTypeHash)

void UW_Tutorial_C::GetDefaultTextStyleOverride(struct FSlateFontInfo* TextBlockStyle, bool Temp_bool_Variable, bool CallFunc_IsPcPlatform_ReturnValue, class UClass* K2Node_Select_Default, class UCommonTextStyle* CallFunc_GetClassDefaultObject_ReturnValue, const struct FSlateFontInfo& CallFunc_GetFont_OutFont)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "GetDefaultTextStyleOverride");

	Params::UW_Tutorial_C_GetDefaultTextStyleOverride_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsPcPlatform_ReturnValue = CallFunc_IsPcPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetFont_OutFont = CallFunc_GetFont_OutFont;

	UObject::ProcessEvent(Func, &Parms);

	if (TextBlockStyle != nullptr)
		*TextBlockStyle = std::move(Parms.TextBlockStyle);

}


// Function W_Tutorial.W_Tutorial_C.UpdateFooterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFooter_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::UpdateFooterVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetShowFooter_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "UpdateFooterVisibility");

	Params::UW_Tutorial_C_UpdateFooterVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetShowFooter_ReturnValue = CallFunc_GetShowFooter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tutorial.W_Tutorial_C.HideMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::HideMainWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "HideMainWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.ShowMainWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::ShowMainWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "ShowMainWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.Hide Widget End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::Hide_Widget_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "Hide Widget End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::RefreshWidget(enum class ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "RefreshWidget");

	Params::UW_Tutorial_C_RefreshWidget_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tutorial.W_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Tutorial_C::BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "BndEvt__W_Tutorial_W_Footer_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.RefreshText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Tutorial.W_Tutorial_C.ExecuteUbergraph_W_Tutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_InputType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFooter_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFooter_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Tutorial_C::ExecuteUbergraph_W_Tutorial(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ECommonInputType K2Node_Event_InputType, class FText CallFunc_GetDescription_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_GetShowFooter_ReturnValue, bool CallFunc_GetShowFooter_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "ExecuteUbergraph_W_Tutorial");

	Params::UW_Tutorial_C_ExecuteUbergraph_W_Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_InputType = K2Node_Event_InputType;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetShowFooter_ReturnValue = CallFunc_GetShowFooter_ReturnValue;
	Parms.CallFunc_GetShowFooter_ReturnValue_1 = CallFunc_GetShowFooter_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Tutorial.W_Tutorial_C.OnTutorialWidgetRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Tutorial_C::OnTutorialWidgetRemoved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Tutorial_C", "OnTutorialWidgetRemoved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


