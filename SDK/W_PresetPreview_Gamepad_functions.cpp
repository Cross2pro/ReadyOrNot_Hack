#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C
// (None)

class UClass* UW_PresetPreview_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PresetPreview_Gamepad_C");

	return Clss;
}


// W_PresetPreview_Gamepad_C W_PresetPreview_Gamepad.Default__W_PresetPreview_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PresetPreview_Gamepad_C* UW_PresetPreview_Gamepad_C::GetDefaultObj()
{
	static class UW_PresetPreview_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PresetPreview_Gamepad_C*>(UW_PresetPreview_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "BackPage");

	Params::UW_PresetPreview_Gamepad_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoadoutSlot_V2*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "GetFocusTarget");

	Params::UW_PresetPreview_Gamepad_C_GetFocusTarget_Params Parms{};

	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGamepad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::UpdateStyle(bool bUseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "UpdateStyle");

	Params::UW_PresetPreview_Gamepad_C_UpdateStyle_Params Parms{};

	Parms.bUseGamepad = bUseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.RefreshOverviewSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               Current_Loadout                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UArmourMaterial*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_3                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue_4                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmourMaterial*             K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::RefreshOverviewSlots(const struct FSavedLoadout& Current_Loadout, class UArmourMaterial* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_1, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_2, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_3, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_4, bool Temp_bool_Variable, class UArmourMaterial* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "RefreshOverviewSlots");

	Params::UW_PresetPreview_Gamepad_C_RefreshOverviewSlots_Params Parms{};

	Parms.Current_Loadout = Current_Loadout;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_2 = CallFunc_GetClassDefaultObject_ReturnValue_2;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_3 = CallFunc_GetClassDefaultObject_ReturnValue_3;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_4 = CallFunc_GetClassDefaultObject_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PresetPreview_Gamepad_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "BP_GetDesiredFocusTarget");

	Params::UW_PresetPreview_Gamepad_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.Update Active Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               Current_Loadout                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PresetPreview_Gamepad_C::Update_Active_Character(const struct FSavedLoadout& Current_Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "Update Active Character");

	Params::UW_PresetPreview_Gamepad_C_Update_Active_Character_Params Parms{};

	Parms.Current_Loadout = Current_Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "Reveal");

	Params::UW_PresetPreview_Gamepad_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "Hide");

	Params::UW_PresetPreview_Gamepad_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "SetInputMode");

	Params::UW_PresetPreview_Gamepad_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "ChangePage");

	Params::UW_PresetPreview_Gamepad_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PresetPreview_Gamepad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PresetPreview_Gamepad_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.PresetApplied
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               Loadout                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_PresetPreview_Gamepad_C::PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "PresetApplied");

	Params::UW_PresetPreview_Gamepad_C_PresetApplied_Params Parms{};

	Parms.Name = Name;
	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.ExecuteUbergraph_W_PresetPreview_Gamepad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Name                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_CustomEvent_Loadout                                       (ConstParm)
// class ULoadoutSlot_V2*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ULoadoutSlot_V2*>     CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::ExecuteUbergraph_W_PresetPreview_Gamepad(int32 EntryPoint, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class ULoadoutSlot_V2*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "ExecuteUbergraph_W_PresetPreview_Gamepad");

	Params::UW_PresetPreview_Gamepad_C_ExecuteUbergraph_W_PresetPreview_Gamepad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Loadout = K2Node_CustomEvent_Loadout;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PresetPreview_Gamepad.W_PresetPreview_Gamepad_C.CharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_PresetPreview_Gamepad_C::CharacterChanged__DelegateSignature(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PresetPreview_Gamepad_C", "CharacterChanged__DelegateSignature");

	Params::UW_PresetPreview_Gamepad_C_CharacterChanged__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}

}


