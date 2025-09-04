#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleHotkeys.W_ConsoleHotkeys_C
// (None)

class UClass* UW_ConsoleHotkeys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleHotkeys_C");

	return Clss;
}


// W_ConsoleHotkeys_C W_ConsoleHotkeys.Default__W_ConsoleHotkeys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleHotkeys_C* UW_ConsoleHotkeys_C::GetDefaultObj()
{
	static class UW_ConsoleHotkeys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleHotkeys_C*>(UW_ConsoleHotkeys_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.DpadPressedChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      DpadImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_BoolToVisibility_Visibility                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::DpadPressedChange(bool Visible, class UImage* DpadImage, enum class ESlateVisibility CallFunc_BoolToVisibility_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "DpadPressedChange");

	Params::UW_ConsoleHotkeys_C_DpadPressedChange_Params Parms{};

	Parms.Visible = Visible;
	Parms.DpadImage = DpadImage;
	Parms.CallFunc_BoolToVisibility_Visibility = CallFunc_BoolToVisibility_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.BoolToVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::BoolToVisibility(bool Visible, enum class ESlateVisibility* Visibility, bool NewLocalVar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "BoolToVisibility");

	Params::UW_ConsoleHotkeys_C_BoolToVisibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.NewLocalVar = NewLocalVar;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.DPadRightPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::DPadRightPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "DPadRightPressed");

	Params::UW_ConsoleHotkeys_C_DPadRightPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.DPadUpPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::DPadUpPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "DPadUpPressed");

	Params::UW_ConsoleHotkeys_C_DPadUpPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.DPadDownPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::DPadDownPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "DPadDownPressed");

	Params::UW_ConsoleHotkeys_C_DPadDownPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.DPadLeftPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::DPadLeftPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "DPadLeftPressed");

	Params::UW_ConsoleHotkeys_C_DPadLeftPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.SetIconActive
// (Event, Public, BlueprintEvent)
// Parameters:
// class UImage*                      Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::SetIconActive(class UImage* Icon, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "SetIconActive");

	Params::UW_ConsoleHotkeys_C_SetIconActive_Params Parms{};

	Parms.Icon = Icon;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ConsoleHotkeys_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleHotkeys.W_ConsoleHotkeys_C.ExecuteUbergraph_W_ConsoleHotkeys
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Event_Icon                                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Active                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkeys_C::ExecuteUbergraph_W_ConsoleHotkeys(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool K2Node_Event_Pressed_3, bool K2Node_Event_Pressed_2, bool K2Node_Event_Pressed_1, bool K2Node_Event_Pressed, class UImage* K2Node_Event_Icon, bool K2Node_Event_Active, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UImage* K2Node_Select_Default, class UImage* K2Node_Select_Default_1, class UImage* K2Node_Select_Default_2, class UImage* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkeys_C", "ExecuteUbergraph_W_ConsoleHotkeys");

	Params::UW_ConsoleHotkeys_C_ExecuteUbergraph_W_ConsoleHotkeys_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Event_Pressed_3 = K2Node_Event_Pressed_3;
	Parms.K2Node_Event_Pressed_2 = K2Node_Event_Pressed_2;
	Parms.K2Node_Event_Pressed_1 = K2Node_Event_Pressed_1;
	Parms.K2Node_Event_Pressed = K2Node_Event_Pressed;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;
	Parms.K2Node_Event_Active = K2Node_Event_Active;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


