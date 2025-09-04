#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleLobbyManager.W_ConsoleLobbyManager_C
// (None)

class UClass* UW_ConsoleLobbyManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleLobbyManager_C");

	return Clss;
}


// W_ConsoleLobbyManager_C W_ConsoleLobbyManager.Default__W_ConsoleLobbyManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleLobbyManager_C* UW_ConsoleLobbyManager_C::GetDefaultObj()
{
	static class UW_ConsoleLobbyManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleLobbyManager_C*>(UW_ConsoleLobbyManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.Set EOS Button Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSMultiplayerSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAccountLinked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::Set_EOS_Button_Visibility(class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsAccountLinked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "Set EOS Button Visibility");

	Params::UW_ConsoleLobbyManager_C_Set_EOS_Button_Visibility_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsAccountLinked_ReturnValue = CallFunc_IsAccountLinked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.OnlyShowBlockList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ConsoleLobbyManager_C::OnlyShowBlockList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "OnlyShowBlockList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.OpenBlockList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::OpenBlockList(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "OpenBlockList");

	Params::UW_ConsoleLobbyManager_C_OpenBlockList_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.OpenSocialSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::OpenSocialSettings(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "OpenSocialSettings");

	Params::UW_ConsoleLobbyManager_C_OpenSocialSettings_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.OpenLobbyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetCurrentNavSelection_SelectedNavOption                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::OpenLobbyList(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "OpenLobbyList");

	Params::UW_ConsoleLobbyManager_C_OpenLobbyList_Params Parms{};

	Parms.CallFunc_GetCurrentNavSelection_SelectedNavOption = CallFunc_GetCurrentNavSelection_SelectedNavOption;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.Initialise Kick Popup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_StandardModal_C*          OutputPopUp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::Initialise_Kick_Popup(const struct FLobbyPlayer& Player_Name, class UW_StandardModal_C** OutputPopUp, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "Initialise Kick Popup");

	Params::UW_ConsoleLobbyManager_C_Initialise_Kick_Popup_Params Parms{};

	Parms.Player_Name = Player_Name;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPopUp != nullptr)
		*OutputPopUp = Parms.OutputPopUp;

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.IsMuteButtonVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               MuteButtonIsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UnMuteButtonIsVisible                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMutedState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueNetIDString_OutString                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::IsMuteButtonVisible(const struct FLobbyPlayer& Player, bool* MuteButtonIsVisible, bool* UnMuteButtonIsVisible, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_GetMutedState_ReturnValue, const class FString& CallFunc_GetUniqueNetIDString_OutString, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "IsMuteButtonVisible");

	Params::UW_ConsoleLobbyManager_C_IsMuteButtonVisible_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetMutedState_ReturnValue = CallFunc_GetMutedState_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDString_OutString = CallFunc_GetUniqueNetIDString_OutString;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (MuteButtonIsVisible != nullptr)
		*MuteButtonIsVisible = Parms.MuteButtonIsVisible;

	if (UnMuteButtonIsVisible != nullptr)
		*UnMuteButtonIsVisible = Parms.UnMuteButtonIsVisible;

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.IsKickButtonVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               KickButtonIsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueNetIDString_OutString                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::IsKickButtonVisible(const struct FLobbyPlayer& Player, bool* KickButtonIsVisible, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetUniqueNetIDString_OutString, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "IsKickButtonVisible");

	Params::UW_ConsoleLobbyManager_C_IsKickButtonVisible_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDString_OutString = CallFunc_GetUniqueNetIDString_OutString;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (KickButtonIsVisible != nullptr)
		*KickButtonIsVisible = Parms.KickButtonIsVisible;

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ConsoleLobbyManager_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "BP_GetDesiredFocusTarget");

	Params::UW_ConsoleLobbyManager_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_ConsoleLobbyManager_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.FocusedPlayerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ConsoleLobbyManager_C::FocusedPlayerChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "FocusedPlayerChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.FooterButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ButtonId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::FooterButtonClicked(const class FString& ButtonId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "FooterButtonClicked");

	Params::UW_ConsoleLobbyManager_C_FooterButtonClicked_Params Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.Cancel kick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::Cancel_kick(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "Cancel kick");

	Params::UW_ConsoleLobbyManager_C_Cancel_kick_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.kick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ConsoleLobbyManager_C::Kick(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "kick");

	Params::UW_ConsoleLobbyManager_C_Kick_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_0_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_0_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_0_OnNavOptionSelected__DelegateSignature");

	Params::UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_0_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ConsoleLobbyManager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.PlayerBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ConsoleLobbyManager_C::PlayerBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "PlayerBlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature");

	Params::UW_ConsoleLobbyManager_C_BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleLobbyManager.W_ConsoleLobbyManager_C.ExecuteUbergraph_W_ConsoleLobbyManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowFriendsUIForInvitation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ButtonID                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialise_Kick_Popup_OutputPopUp                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowProfileUI_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleLobbyManager_C::ExecuteUbergraph_W_ConsoleLobbyManager(int32 EntryPoint, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_CustomEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class UW_StandardModal_C* CallFunc_Initialise_Kick_Popup_OutputPopUp, bool CallFunc_ShowProfileUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleLobbyManager_C", "ExecuteUbergraph_W_ConsoleLobbyManager");

	Params::UW_ConsoleLobbyManager_C_ExecuteUbergraph_W_ConsoleLobbyManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShowFriendsUIForInvitation_ReturnValue = CallFunc_ShowFriendsUIForInvitation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_ButtonID = K2Node_CustomEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Initialise_Kick_Popup_OutputPopUp = CallFunc_Initialise_Kick_Popup_OutputPopUp;
	Parms.CallFunc_ShowProfileUI_ReturnValue = CallFunc_ShowProfileUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


