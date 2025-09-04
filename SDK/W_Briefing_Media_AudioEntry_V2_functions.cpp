#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C
// (None)

class UClass* UW_Briefing_Media_AudioEntry_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Briefing_Media_AudioEntry_V2_C");

	return Clss;
}


// W_Briefing_Media_AudioEntry_V2_C W_Briefing_Media_AudioEntry_V2.Default__W_Briefing_Media_AudioEntry_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Briefing_Media_AudioEntry_V2_C* UW_Briefing_Media_AudioEntry_V2_C::GetDefaultObj()
{
	static class UW_Briefing_Media_AudioEntry_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Briefing_Media_AudioEntry_V2_C*>(UW_Briefing_Media_AudioEntry_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetBorderColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::GetBorderColor(struct FLinearColor* Color, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "GetBorderColor");

	Params::UW_Briefing_Media_AudioEntry_V2_C_GetBorderColor_Params Parms{};

	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetTextColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 Color                                                            (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_4                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_5                             (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)
// struct FSlateColor                 K2Node_Select_Default_4                                          (None)

void UW_Briefing_Media_AudioEntry_V2_C::GetTextColor(struct FSlateColor* Color, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FSlateColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_5, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_5, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "GetTextColor");

	Params::UW_Briefing_Media_AudioEntry_V2_C_GetTextColor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetColorByName_LinearColor_4 = CallFunc_GetColorByName_LinearColor_4;
	Parms.CallFunc_GetColorByName_SlateColor_4 = CallFunc_GetColorByName_SlateColor_4;
	Parms.CallFunc_GetColorByName_LinearColor_5 = CallFunc_GetColorByName_LinearColor_5;
	Parms.CallFunc_GetColorByName_SlateColor_5 = CallFunc_GetColorByName_SlateColor_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetPressedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::SetPressedState(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "SetPressedState");

	Params::UW_Briefing_Media_AudioEntry_V2_C_SetPressedState_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::SetHoverState(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "SetHoverState");

	Params::UW_Briefing_Media_AudioEntry_V2_C_SetHoverState_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.GetIconColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor                               (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_1                             (None)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_2                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_3                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColorByName_LinearColor_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetColorByName_SlateColor_4                             (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::GetIconColor(struct FLinearColor* Color, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_2, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_3, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_4, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_4, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "GetIconColor");

	Params::UW_Briefing_Media_AudioEntry_V2_C_GetIconColor_Params Parms{};

	Parms.CallFunc_GetColorByName_LinearColor = CallFunc_GetColorByName_LinearColor;
	Parms.CallFunc_GetColorByName_SlateColor = CallFunc_GetColorByName_SlateColor;
	Parms.CallFunc_GetColorByName_LinearColor_1 = CallFunc_GetColorByName_LinearColor_1;
	Parms.CallFunc_GetColorByName_SlateColor_1 = CallFunc_GetColorByName_SlateColor_1;
	Parms.CallFunc_GetColorByName_LinearColor_2 = CallFunc_GetColorByName_LinearColor_2;
	Parms.CallFunc_GetColorByName_SlateColor_2 = CallFunc_GetColorByName_SlateColor_2;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_GetColorByName_LinearColor_3 = CallFunc_GetColorByName_LinearColor_3;
	Parms.CallFunc_GetColorByName_SlateColor_3 = CallFunc_GetColorByName_SlateColor_3;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_GetColorByName_LinearColor_4 = CallFunc_GetColorByName_LinearColor_4;
	Parms.CallFunc_GetColorByName_SlateColor_4 = CallFunc_GetColorByName_SlateColor_4;
	Parms.CallFunc_SelectColor_ReturnValue_3 = CallFunc_SelectColor_ReturnValue_3;
	Parms.CallFunc_SelectColor_ReturnValue_4 = CallFunc_SelectColor_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.UpdateVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Playing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetTextColor_Color                                      (None)
// struct FLinearColor                CallFunc_GetIconColor_Color                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBorderColor_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::UpdateVisualState(bool Hovered, bool Pressed, bool Selected, bool Playing, const struct FSlateColor& CallFunc_GetTextColor_Color, const struct FLinearColor& CallFunc_GetIconColor_Color, const struct FLinearColor& CallFunc_GetBorderColor_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "UpdateVisualState");

	Params::UW_Briefing_Media_AudioEntry_V2_C_UpdateVisualState_Params Parms{};

	Parms.Hovered = Hovered;
	Parms.Pressed = Pressed;
	Parms.Selected = Selected;
	Parms.Playing = Playing;
	Parms.CallFunc_GetTextColor_Color = CallFunc_GetTextColor_Color;
	Parms.CallFunc_GetIconColor_Color = CallFunc_GetIconColor_Color;
	Parms.CallFunc_GetBorderColor_Color = CallFunc_GetBorderColor_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.UpdateText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.SetIsPlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::SetIsPlaying(bool IsPlaying, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "SetIsPlaying");

	Params::UW_Briefing_Media_AudioEntry_V2_C_SetIsPlaying_Params Parms{};

	Parms.IsPlaying = IsPlaying;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "BP_OnPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "BP_OnReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Briefing_Media_AudioEntry_V2_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Briefing_Media_AudioEntry_V2_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "OnAddedToFocusPath");

	Params::UW_Briefing_Media_AudioEntry_V2_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Briefing_Media_AudioEntry_V2_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "OnRemovedFromFocusPath");

	Params::UW_Briefing_Media_AudioEntry_V2_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "PreConstruct");

	Params::UW_Briefing_Media_AudioEntry_V2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2");

	Params::UW_Briefing_Media_AudioEntry_V2_C_ExecuteUbergraph_W_Briefing_Media_AudioEntry_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_V2_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::OnUnfocused__DelegateSignature(class UW_Briefing_Media_AudioEntry_V2_C* AudioEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "OnUnfocused__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_V2_C_OnUnfocused__DelegateSignature_Params Parms{};

	Parms.AudioEntry = AudioEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_V2_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::OnFocused__DelegateSignature(class UW_Briefing_Media_AudioEntry_V2_C* AudioEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "OnFocused__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_V2_C_OnFocused__DelegateSignature_Params Parms{};

	Parms.AudioEntry = AudioEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Briefing_Media_AudioEntry_V2.W_Briefing_Media_AudioEntry_V2_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Briefing_Media_AudioEntry_V2_C*AudioEntry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Briefing_Media_AudioEntry_V2_C::OnClick__DelegateSignature(class UW_Briefing_Media_AudioEntry_V2_C* AudioEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Briefing_Media_AudioEntry_V2_C", "OnClick__DelegateSignature");

	Params::UW_Briefing_Media_AudioEntry_V2_C_OnClick__DelegateSignature_Params Parms{};

	Parms.AudioEntry = AudioEntry;

	UObject::ProcessEvent(Func, &Parms);

}

}


