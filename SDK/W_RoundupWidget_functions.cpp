#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RoundupWidget.W_RoundupWidget_C
// (None)

class UClass* UW_RoundupWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RoundupWidget_C");

	return Clss;
}


// W_RoundupWidget_C W_RoundupWidget.Default__W_RoundupWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RoundupWidget_C* UW_RoundupWidget_C::GetDefaultObj()
{
	static class UW_RoundupWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RoundupWidget_C*>(UW_RoundupWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RoundupWidget.W_RoundupWidget_C.UpdateFooter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InitializeFooter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RoundupWidget_C::UpdateFooter(bool InitializeFooter, bool CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers, bool CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "UpdateFooter");

	Params::UW_RoundupWidget_C_UpdateFooter_Params Parms{};

	Parms.InitializeFooter = InitializeFooter;
	Parms.CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers = CallFunc_GetGamepadSwitchBumpersTriggersLayout_bSwitchBumpersTriggers;
	Parms.CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue = CallFunc_GetGamepadSwitchBumpersTriggersLayout_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.SetupSampleData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, class FText>           K2Node_MakeMap_Map                                               (ConstParm)
// TMap<int32, class FText>           K2Node_MakeMap_Map_1                                             (ConstParm)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RoundupWidget_C::SetupSampleData(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TMap<int32, class FText> K2Node_MakeMap_Map, TMap<int32, class FText> K2Node_MakeMap_Map_1, int32 Temp_int_Variable_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "SetupSampleData");

	Params::UW_RoundupWidget_C_SetupSampleData_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_MakeMap_Map_1 = K2Node_MakeMap_Map_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.OnAnimationComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::OnAnimationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "OnAnimationComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RoundupWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "PreConstruct");

	Params::UW_RoundupWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.AddRoundupUnlock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Unlock                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_RoundupWidget_C::AddRoundupUnlock(class FText& Unlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "AddRoundupUnlock");

	Params::UW_RoundupWidget_C_AddRoundupUnlock_Params Parms{};

	Parms.Unlock = Unlock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.AddRoundupEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UVerticalBox*                VerticalBox                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_RoundupWidget_C::AddRoundupEntry(class FText Text, class UVerticalBox* VerticalBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "AddRoundupEntry");

	Params::UW_RoundupWidget_C_AddRoundupEntry_Params Parms{};

	Parms.Text = Text;
	Parms.VerticalBox = VerticalBox;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.AddRoundupAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_RoundupWidget_C::AddRoundupAction(class FText& Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "AddRoundupAction");

	Params::UW_RoundupWidget_C_AddRoundupAction_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RoundupWidget.W_RoundupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.HideRoundupUnlocks
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::HideRoundupUnlocks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "HideRoundupUnlocks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.HideRoundupActions
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::HideRoundupActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "HideRoundupActions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.ToggleContent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::ToggleContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "ToggleContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.CollapseContent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::CollapseContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "CollapseContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.ExpandContent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::ExpandContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "ExpandContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.ShowWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::ShowWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "ShowWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.HideWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::HideWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "HideWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.BndEvt__W_RoundupWidget_W_Footer_K2Node_ComponentBoundEvent_0_OnDismissInputAction__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::BndEvt__W_RoundupWidget_W_Footer_K2Node_ComponentBoundEvent_0_OnDismissInputAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "BndEvt__W_RoundupWidget_W_Footer_K2Node_ComponentBoundEvent_0_OnDismissInputAction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "RefreshWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.EmptyWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::EmptyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "EmptyWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.BndEvt__W_RoundupWidget_W_Footer_1_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_RoundupWidget_C::BndEvt__W_RoundupWidget_W_Footer_1_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "BndEvt__W_RoundupWidget_W_Footer_1_K2Node_ComponentBoundEvent_1_OnDismissInputAction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RoundupWidget.W_RoundupWidget_C.ExecuteUbergraph_W_RoundupWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Unlock                                              (ConstParm)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// class UVerticalBox*                K2Node_CustomEvent_VerticalBox                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Action                                              (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsNewCommanderModeSave_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALobbyGM*                    K2Node_DynamicCast_AsLobby_GM                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHumanCharacterHUD_V2*       CallFunc_GetPlayerHUD_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_RoundupWidgetEntry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_RoundupWidget_C::ExecuteUbergraph_W_RoundupWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, class FText K2Node_Event_Unlock, class FText K2Node_CustomEvent_Text, class UVerticalBox* K2Node_CustomEvent_VerticalBox, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText Temp_text_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Event_Action, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_IsNewCommanderModeSave_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess, class UHumanCharacterHUD_V2* CallFunc_GetPlayerHUD_ReturnValue, class UW_RoundupWidgetEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RoundupWidget_C", "ExecuteUbergraph_W_RoundupWidget");

	Params::UW_RoundupWidget_C_ExecuteUbergraph_W_RoundupWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Unlock = K2Node_Event_Unlock;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_VerticalBox = K2Node_CustomEvent_VerticalBox;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_Action = K2Node_Event_Action;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsNewCommanderModeSave_ReturnValue = CallFunc_IsNewCommanderModeSave_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GM = K2Node_DynamicCast_AsLobby_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerHUD_ReturnValue = CallFunc_GetPlayerHUD_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


