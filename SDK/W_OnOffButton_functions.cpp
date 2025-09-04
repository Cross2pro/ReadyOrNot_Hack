#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_OnOffButton.W_OnOffButton_C
// (None)

class UClass* UW_OnOffButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_OnOffButton_C");

	return Clss;
}


// W_OnOffButton_C W_OnOffButton.Default__W_OnOffButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_OnOffButton_C* UW_OnOffButton_C::GetDefaultObj()
{
	static class UW_OnOffButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_OnOffButton_C*>(UW_OnOffButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_OnOffButton.W_OnOffButton_C.IsPS5TextValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InputString                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_OnOffButton_C::IsPS5TextValid(class FText InputString, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "IsPS5TextValid");

	Params::UW_OnOffButton_C_IsPS5TextValid_Params Parms{};

	Parms.InputString = InputString;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_OnOffButton.W_OnOffButton_C.SetDisabledText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EnabledText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_OnOffButton_C::SetDisabledText(class FText EnabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "SetDisabledText");

	Params::UW_OnOffButton_C_SetDisabledText_Params Parms{};

	Parms.EnabledText = EnabledText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.SetEnabledText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EnabledText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_OnOffButton_C::SetEnabledText(class FText EnabledText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "SetEnabledText");

	Params::UW_OnOffButton_C_SetEnabledText_Params Parms{};

	Parms.EnabledText = EnabledText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.SetupDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Options_UE5_C*            CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::SetupDescription(class UW_Options_UE5_C* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "SetupDescription");

	Params::UW_OnOffButton_C_SetupDescription_Params Parms{};

	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.SetCheckedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::SetCheckedState(bool NewChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "SetCheckedState");

	Params::UW_OnOffButton_C_SetCheckedState_Params Parms{};

	Parms.NewChecked = NewChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "PreConstruct");

	Params::UW_OnOffButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_OnOffButton_C_BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature");

	Params::UW_OnOffButton_C_BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_5_Selected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature");

	Params::UW_OnOffButton_C_BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_6_Deselected__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UW_OnOffButton_C_BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_OnOffButton_C::BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "BndEvt__W_OnOffButton_btn_Toggle_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OnOffButton.W_OnOffButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_OnOffButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OnOffButton.W_OnOffButton_C.ExecuteUbergraph_W_OnOffButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsNotEmpty_NotEmpty                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS5TextValid_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS5TextValid_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS5TextValid_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::ExecuteUbergraph_W_OnOffButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsNotEmpty_NotEmpty, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPS5TextValid_ReturnValue, bool CallFunc_IsPS5TextValid_ReturnValue_1, bool CallFunc_IsPS5TextValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "ExecuteUbergraph_W_OnOffButton");

	Params::UW_OnOffButton_C_ExecuteUbergraph_W_OnOffButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsNotEmpty_NotEmpty = CallFunc_TextIsNotEmpty_NotEmpty;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsPS5TextValid_ReturnValue = CallFunc_IsPS5TextValid_ReturnValue;
	Parms.CallFunc_IsPS5TextValid_ReturnValue_1 = CallFunc_IsPS5TextValid_ReturnValue_1;
	Parms.CallFunc_IsPS5TextValid_ReturnValue_2 = CallFunc_IsPS5TextValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OnOffButton.W_OnOffButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OnOffButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OnOffButton.W_OnOffButton_C.OnValueStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OnOffButton_C::OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OnOffButton_C", "OnValueStateChange__DelegateSignature");

	Params::UW_OnOffButton_C_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}

}


