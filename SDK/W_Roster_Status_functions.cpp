#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Roster_Status.W_Roster_Status_C
// (None)

class UClass* UW_Roster_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Roster_Status_C");

	return Clss;
}


// W_Roster_Status_C W_Roster_Status.Default__W_Roster_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Roster_Status_C* UW_Roster_Status_C::GetDefaultObj()
{
	static class UW_Roster_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Roster_Status_C*>(UW_Roster_Status_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Roster_Status.W_Roster_Status_C.GetSwatCardWidgetBySlotIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     CardWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::GetSwatCardWidgetBySlotIndex(int32 Index, class UW_Roster_Status_Card_C** CardWidget, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "GetSwatCardWidgetBySlotIndex");

	Params::UW_Roster_Status_C_GetSwatCardWidgetBySlotIndex_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CardWidget != nullptr)
		*CardWidget = Parms.CardWidget;

}


// Function W_Roster_Status.W_Roster_Status_C.OnRosterCardClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowFriendsUIForInvitation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLobby_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::OnRosterCardClicked(class UW_Roster_PlayerStatus_Card_C* Card, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, bool CallFunc_IsLobby_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "OnRosterCardClicked");

	Params::UW_Roster_Status_C_OnRosterCardClicked_Params Parms{};

	Parms.Card = Card;
	Parms.CallFunc_ShowFriendsUIForInvitation_ReturnValue = CallFunc_ShowFriendsUIForInvitation_ReturnValue;
	Parms.CallFunc_IsLobby_ReturnValue = CallFunc_IsLobby_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.GetCardWidgetBySlotIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CardWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::GetCardWidgetBySlotIndex(int32 Index, class UW_Roster_PlayerStatus_Card_C** CardWidget, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "GetCardWidgetBySlotIndex");

	Params::UW_Roster_Status_C_GetCardWidgetBySlotIndex_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CardWidget != nullptr)
		*CardWidget = Parms.CardWidget;

}


// Function W_Roster_Status.W_Roster_Status_C.InitializePlayerProxyCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CharacterCard                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelfHost_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::InitializePlayerProxyCard(class UCharacterProxy* CharacterProxy, class UW_Roster_PlayerStatus_Card_C* CharacterCard, class UW_Roster_PlayerStatus_Card_C* NewCard, bool CallFunc_GetIsSelfHost_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "InitializePlayerProxyCard");

	Params::UW_Roster_Status_C_InitializePlayerProxyCard_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;
	Parms.CharacterCard = CharacterCard;
	Parms.NewCard = NewCard;
	Parms.CallFunc_GetIsSelfHost_ReturnValue = CallFunc_GetIsSelfHost_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.ClearCards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Roster_PlayerStatus_Card_C*>CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::ClearCards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_Roster_PlayerStatus_Card_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_Roster_PlayerStatus_Card_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "ClearCards");

	Params::UW_Roster_Status_C_ClearCards_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Roster_Status_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BP_GetDesiredFocusTarget");

	Params::UW_Roster_Status_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Status.W_Roster_Status_C.CreateBlankPlayerCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelfHost_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::CreateBlankPlayerCard(class UW_Roster_PlayerStatus_Card_C* NewCard, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetIsSelfHost_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "CreateBlankPlayerCard");

	Params::UW_Roster_Status_C_CreateBlankPlayerCard_Params Parms{};

	Parms.NewCard = NewCard;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIsSelfHost_ReturnValue = CallFunc_GetIsSelfHost_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.SetPlayerCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Total                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Roster_Status_C::SetPlayerCount(int32 PlayerCount, int32 Total, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "SetPlayerCount");

	Params::UW_Roster_Status_C_SetPlayerCount_Params Parms{};

	Parms.PlayerCount = PlayerCount;
	Parms.Total = Total;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.CreatePlayerProxyCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsSelfHost_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::CreatePlayerProxyCard(class UCharacterProxy* CharacterProxy, class UW_Roster_PlayerStatus_Card_C* NewCard, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue, bool CallFunc_GetIsSelfHost_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "CreatePlayerProxyCard");

	Params::UW_Roster_Status_C_CreatePlayerProxyCard_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;
	Parms.NewCard = NewCard;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetIsSelfHost_ReturnValue = CallFunc_GetIsSelfHost_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.CreateCharacterProxyCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsLast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::CreateCharacterProxyCard(class UCharacterProxy* CharacterProxy, bool IsLast, class UW_Roster_Status_Card_C* NewCard, class UW_Roster_Status_Card_C* CallFunc_Create_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_MakeStruct_Right_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "CreateCharacterProxyCard");

	Params::UW_Roster_Status_C_CreateCharacterProxyCard_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;
	Parms.IsLast = IsLast;
	Parms.NewCard = NewCard;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.PopulatePlayersByProxy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerToAdd                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        NewPlayers                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)

void UW_Roster_Status_C::PopulatePlayersByProxy(class UW_Roster_PlayerStatus_Card_C* NewCard, int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "PopulatePlayersByProxy");

	Params::UW_Roster_Status_C_PopulatePlayersByProxy_Params Parms{};

	Parms.NewCard = NewCard;
	Parms.Count = Count;
	Parms.PlayerToAdd = PlayerToAdd;
	Parms.NewPlayers = NewPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.IsProxySelf
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterProxy*             Proxy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelf                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::IsProxySelf(class UCharacterProxy* Proxy, bool* IsSelf, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class FText CallFunc_GetName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "IsProxySelf");

	Params::UW_Roster_Status_C_IsProxySelf_Params Parms{};

	Parms.Proxy = Proxy;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelf != nullptr)
		*IsSelf = Parms.IsSelf;

}


// Function W_Roster_Status.W_Roster_Status_C.IsPlayerSelf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSelf                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::IsPlayerSelf(class APlayerState* PlayerState, bool* IsSelf, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "IsPlayerSelf");

	Params::UW_Roster_Status_C_IsPlayerSelf_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSelf != nullptr)
		*IsSelf = Parms.IsSelf;

}


// Function W_Roster_Status.W_Roster_Status_C.PopulatePlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerToAdd                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        NewPlayers                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)

void UW_Roster_Status_C::PopulatePlayers(class UW_Roster_PlayerStatus_Card_C* NewCard, int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "PopulatePlayers");

	Params::UW_Roster_Status_C_PopulatePlayers_Params Parms{};

	Parms.NewCard = NewCard;
	Parms.Count = Count;
	Parms.PlayerToAdd = PlayerToAdd;
	Parms.NewPlayers = NewPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.PopulateTeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WidgetIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCharacterProxy*>     ProxyArray                                                       (Edit, BlueprintVisible)
// int32                              LastIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     NewCard                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterProxy*             NewProxy                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     CallFunc_GetSwatCardWidgetBySlotIndex_CardWidget                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*CallFunc_GetCardWidgetBySlotIndex_CardWidget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCharacterProxy*>     CallFunc_GetCharacterProxies_ReturnValue                         (ConstParm, ReferenceParm)
// class UCharacterProxy*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCharacterProxy*>     CallFunc_GetCharacterProxies_ReturnValue_1                       (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::PopulateTeam(int32 WidgetIndex, int32 CurrentIndex, const TArray<class UCharacterProxy*>& ProxyArray, int32 LastIndex, class UW_Roster_Status_Card_C* NewCard, int32 Count, class UCharacterProxy* NewProxy, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Roster_Status_Card_C* CallFunc_GetSwatCardWidgetBySlotIndex_CardWidget, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class UW_Roster_PlayerStatus_Card_C* CallFunc_GetCardWidgetBySlotIndex_CardWidget, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLocalPlayer_ReturnValue, int32 Temp_int_Variable_1, TArray<class UCharacterProxy*>& CallFunc_GetCharacterProxies_ReturnValue, class UCharacterProxy* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UCharacterProxy*>& CallFunc_GetCharacterProxies_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "PopulateTeam");

	Params::UW_Roster_Status_C_PopulateTeam_Params Parms{};

	Parms.WidgetIndex = WidgetIndex;
	Parms.CurrentIndex = CurrentIndex;
	Parms.ProxyArray = ProxyArray;
	Parms.LastIndex = LastIndex;
	Parms.NewCard = NewCard;
	Parms.Count = Count;
	Parms.NewProxy = NewProxy;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSwatCardWidgetBySlotIndex_CardWidget = CallFunc_GetSwatCardWidgetBySlotIndex_CardWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCardWidgetBySlotIndex_CardWidget = CallFunc_GetCardWidgetBySlotIndex_CardWidget;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsLocalPlayer_ReturnValue = CallFunc_IsLocalPlayer_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetCharacterProxies_ReturnValue = CallFunc_GetCharacterProxies_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCharacterProxies_ReturnValue_1 = CallFunc_GetCharacterProxies_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.GetIsSelfHost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        K2Node_DynamicCast_AsReady_or_Not_Game_State                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAdminPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Roster_Status_C::GetIsSelfHost(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAdminPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "GetIsSelfHost");

	Params::UW_Roster_Status_C_GetIsSelfHost_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_State = K2Node_DynamicCast_AsReady_or_Not_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAdminPlayerController_ReturnValue = CallFunc_IsAdminPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Roster_Status.W_Roster_Status_C.SetVisualTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseDarkTheme                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::SetVisualTheme(bool UseDarkTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "SetVisualTheme");

	Params::UW_Roster_Status_C_SetVisualTheme_Params Parms{};

	Parms.UseDarkTheme = UseDarkTheme;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.AudioPlayerVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_AudioPlayer_C*            PlayerWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "AudioPlayerVisible");

	Params::UW_Roster_Status_C_AudioPlayerVisible_Params Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.PlayerVisible = PlayerVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Roster_Status_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_Status.W_Roster_Status_C.UpdateTeamList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::UpdateTeamList(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "UpdateTeamList");

	Params::UW_Roster_Status_C_UpdateTeamList_Params Parms{};

	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.PlayerCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::PlayerCardClicked(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "PlayerCardClicked");

	Params::UW_Roster_Status_C_PlayerCardClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.EmptyPlayerCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::EmptyPlayerCardClicked(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "EmptyPlayerCardClicked");

	Params::UW_Roster_Status_C_EmptyPlayerCardClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.CharacterCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Roster_Status_Card_C*     Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::CharacterCardClicked(class UW_Roster_Status_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "CharacterCardClicked");

	Params::UW_Roster_Status_C_CharacterCardClicked_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Roster_Status_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Roster_Status.W_Roster_Status_C.OnCharacterAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::OnCharacterAdded(class UCharacterProxy* CharacterProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "OnCharacterAdded");

	Params::UW_Roster_Status_C_OnCharacterAdded_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.OnCharacterRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCharacterProxy*             CharacterProxy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::OnCharacterRemoved(class UCharacterProxy* CharacterProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "OnCharacterRemoved");

	Params::UW_Roster_Status_C_OnCharacterRemoved_Params Parms{};

	Parms.CharacterProxy = CharacterProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "Tick");

	Params::UW_Roster_Status_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.SetTabletState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAwake                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::SetTabletState(bool IsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "SetTabletState");

	Params::UW_Roster_Status_C_SetTabletState_Params Parms{};

	Parms.IsAwake = IsAwake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_btn_ChangeTeam_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_btn_ChangeTeam_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_btn_ChangeTeam_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_btn_ChangeTeam_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_W_RosterPlayer_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_W_RosterPlayer_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_W_RosterPlayer_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_W_RosterPlayer_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_W_RosterPlayer_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_W_RosterPlayer_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_W_RosterPlayer_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_W_RosterPlayer_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_W_RosterPlayer_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_W_RosterPlayer_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_W_RosterPlayer_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_W_RosterPlayer_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_W_RosterPlayer_4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Roster_PlayerStatus_Card_C*Card                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_W_RosterPlayer_4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_W_RosterPlayer_4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_W_RosterPlayer_4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.BndEvt__W_Roster_Status_btn_ChangeTeam_Gamepad_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::BndEvt__W_Roster_Status_btn_ChangeTeam_Gamepad_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "BndEvt__W_Roster_Status_btn_ChangeTeam_Gamepad_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_Roster_Status_C_BndEvt__W_Roster_Status_btn_ChangeTeam_Gamepad_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.Input Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::Input_Changed(enum class ECommonInputType NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "Input Changed");

	Params::UW_Roster_Status_C_Input_Changed_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Roster_Status.W_Roster_Status_C.ExecuteUbergraph_W_Roster_Status
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRefreshNeeded_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseDarkTheme                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_AudioPlayer_C*            K2Node_Event_PlayerWidget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_PlayerVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bForce                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_CustomEvent_Card_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetId_ReturnValue                              (None)
// class UW_Roster_PlayerStatus_Card_C*K2Node_CustomEvent_Card_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidBPUniqueNetID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BPUniqueNetIDToString_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowProfileUI_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_Status_Card_C*     K2Node_CustomEvent_Card                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCharacterProxy*             K2Node_Event_CharacterProxy_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacterProxy*             K2Node_Event_CharacterProxy                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsAwake                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSwapTeams_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Roster_C>K2Node_DynamicCast_AsBPI_Roster                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_ComponentBoundEvent_Card_3                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_ComponentBoundEvent_Card_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_ComponentBoundEvent_Card_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Roster_PlayerStatus_Card_C*K2Node_ComponentBoundEvent_Card                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidUniqueNetID_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowFriendsUIForInvitation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Roster_Status_C::ExecuteUbergraph_W_Roster_Status(int32 EntryPoint, bool CallFunc_IsRefreshNeeded_ReturnValue, bool K2Node_Event_UseDarkTheme, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, bool K2Node_CustomEvent_bForce, class UW_Roster_PlayerStatus_Card_C* K2Node_CustomEvent_Card_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetId_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_CustomEvent_Card_1, bool CallFunc_IsValidBPUniqueNetID_ReturnValue, const class FString& CallFunc_BPUniqueNetIDToString_ReturnValue, bool CallFunc_ShowProfileUI_ReturnValue, class UW_Roster_Status_Card_C* K2Node_CustomEvent_Card, class UCharacterProxy* K2Node_Event_CharacterProxy_1, class UCharacterProxy* K2Node_Event_CharacterProxy, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsAwake, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_CanSwapTeams_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_Roster_C> K2Node_DynamicCast_AsBPI_Roster, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsStandalone_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_3, bool CallFunc_Not_PreBool_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_2, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_1, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValidUniqueNetID_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_NewParam, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Roster_Status_C", "ExecuteUbergraph_W_Roster_Status");

	Params::UW_Roster_Status_C_ExecuteUbergraph_W_Roster_Status_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsRefreshNeeded_ReturnValue = CallFunc_IsRefreshNeeded_ReturnValue;
	Parms.K2Node_Event_UseDarkTheme = K2Node_Event_UseDarkTheme;
	Parms.K2Node_Event_PlayerWidget = K2Node_Event_PlayerWidget;
	Parms.K2Node_Event_PlayerVisible = K2Node_Event_PlayerVisible;
	Parms.K2Node_CustomEvent_bForce = K2Node_CustomEvent_bForce;
	Parms.K2Node_CustomEvent_Card_2 = K2Node_CustomEvent_Card_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUniqueNetId_ReturnValue = CallFunc_GetUniqueNetId_ReturnValue;
	Parms.K2Node_CustomEvent_Card_1 = K2Node_CustomEvent_Card_1;
	Parms.CallFunc_IsValidBPUniqueNetID_ReturnValue = CallFunc_IsValidBPUniqueNetID_ReturnValue;
	Parms.CallFunc_BPUniqueNetIDToString_ReturnValue = CallFunc_BPUniqueNetIDToString_ReturnValue;
	Parms.CallFunc_ShowProfileUI_ReturnValue = CallFunc_ShowProfileUI_ReturnValue;
	Parms.K2Node_CustomEvent_Card = K2Node_CustomEvent_Card;
	Parms.K2Node_Event_CharacterProxy_1 = K2Node_Event_CharacterProxy_1;
	Parms.K2Node_Event_CharacterProxy = K2Node_Event_CharacterProxy;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsAwake = K2Node_Event_IsAwake;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CanSwapTeams_ReturnValue = CallFunc_CanSwapTeams_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Roster = K2Node_DynamicCast_AsBPI_Roster;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Card_3 = K2Node_ComponentBoundEvent_Card_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Card_2 = K2Node_ComponentBoundEvent_Card_2;
	Parms.K2Node_ComponentBoundEvent_Card_1 = K2Node_ComponentBoundEvent_Card_1;
	Parms.K2Node_ComponentBoundEvent_Card = K2Node_ComponentBoundEvent_Card;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValidUniqueNetID_ReturnValue = CallFunc_IsValidUniqueNetID_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_ShowFriendsUIForInvitation_ReturnValue = CallFunc_ShowFriendsUIForInvitation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


