#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_Overlay.W_MainMenu_Overlay_C
// (None)

class UClass* UW_MainMenu_Overlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_Overlay_C");

	return Clss;
}


// W_MainMenu_Overlay_C W_MainMenu_Overlay.Default__W_MainMenu_Overlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_Overlay_C* UW_MainMenu_Overlay_C::GetDefaultObj()
{
	static class UW_MainMenu_Overlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_Overlay_C*>(UW_MainMenu_Overlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.Switch to Main Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Overlay_C::Switch_to_Main_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "Switch to Main Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.Set EOS Button Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOSMultiplayerSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAccountLinked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Overlay_C::Set_EOS_Button_Visibility(bool CallFunc_Not_PreBool_ReturnValue, class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsAccountLinked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "Set EOS Button Visibility");

	Params::UW_MainMenu_Overlay_C_Set_EOS_Button_Visibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsAccountLinked_ReturnValue = CallFunc_IsAccountLinked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.IsFriendListEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfFriends_Count                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_MainMenu_Overlay_C::IsFriendListEmpty(int32 CallFunc_GetNumberOfFriends_Count, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "IsFriendListEmpty");

	Params::UW_MainMenu_Overlay_C_IsFriendListEmpty_Params Parms{};

	Parms.CallFunc_GetNumberOfFriends_Count = CallFunc_GetNumberOfFriends_Count;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.FooterButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ScreenFooterEntry_C*      FooterEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Overlay_C::FooterButtonClicked(class UW_ScreenFooterEntry_C* FooterEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "FooterButtonClicked");

	Params::UW_MainMenu_Overlay_C_FooterButtonClicked_Params Parms{};

	Parms.FooterEntry = FooterEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.FriendsListUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_of_Friends                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Overlay_C::FriendsListUpdate(int32 Number_of_Friends)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "FriendsListUpdate");

	Params::UW_MainMenu_Overlay_C_FriendsListUpdate_Params Parms{};

	Parms.Number_of_Friends = Number_of_Friends;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.OverlayWidgetActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Overlay_C::OverlayWidgetActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "OverlayWidgetActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_Overlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.OnOverlayWidgetDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Overlay_C::OnOverlayWidgetDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "OnOverlayWidgetDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_Overlay_C::BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature(const struct FFriend& Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature");

	Params::UW_MainMenu_Overlay_C_BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_0_ViewableProfileHovered__DelegateSignature_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_Overlay_C::BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature(const struct FFriend& Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature");

	Params::UW_MainMenu_Overlay_C_BndEvt__W_MainMenu_Overlay_FriendsList_K2Node_ComponentBoundEvent_1_NonViewableProfileHovered__DelegateSignature_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.OnFriendsListConnectionUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Offline                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Overlay_C::OnFriendsListConnectionUpdate(bool Offline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "OnFriendsListConnectionUpdate");

	Params::UW_MainMenu_Overlay_C_OnFriendsListConnectionUpdate_Params Parms{};

	Parms.Offline = Offline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Overlay.W_MainMenu_Overlay_C.ExecuteUbergraph_W_MainMenu_Overlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Number_of_Friends                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfFriends_Count                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ScreenFooterEntry_C*      K2Node_CustomEvent_FooterEntry                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriendListEmpty_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriendListEmpty_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialOptionsSet_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFriend                     K2Node_ComponentBoundEvent_Friend_1                              (None)
// class FText                        CallFunc_FormatViewProfileText_FormattedText                     (None)
// struct FFriend                     K2Node_ComponentBoundEvent_Friend                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHiddenEntry_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowEOSSocialOverlay_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_CustomEvent_Offline                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Overlay_C::ExecuteUbergraph_W_MainMenu_Overlay(int32 EntryPoint, int32 K2Node_CustomEvent_Number_of_Friends, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetNumberOfFriends_Count, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_FooterEntry, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsFriendListEmpty_ReturnValue, bool CallFunc_IsFriendListEmpty_ReturnValue_1, bool CallFunc_IsInitialOptionsSet_ReturnValue, const struct FFriend& K2Node_ComponentBoundEvent_Friend_1, class FText CallFunc_FormatViewProfileText_FormattedText, const struct FFriend& K2Node_ComponentBoundEvent_Friend, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsHiddenEntry_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_ShowEOSSocialOverlay_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Offline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Overlay_C", "ExecuteUbergraph_W_MainMenu_Overlay");

	Params::UW_MainMenu_Overlay_C_ExecuteUbergraph_W_MainMenu_Overlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Number_of_Friends = K2Node_CustomEvent_Number_of_Friends;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNumberOfFriends_Count = CallFunc_GetNumberOfFriends_Count;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_FooterEntry = K2Node_CustomEvent_FooterEntry;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_IsFriendListEmpty_ReturnValue = CallFunc_IsFriendListEmpty_ReturnValue;
	Parms.CallFunc_IsFriendListEmpty_ReturnValue_1 = CallFunc_IsFriendListEmpty_ReturnValue_1;
	Parms.CallFunc_IsInitialOptionsSet_ReturnValue = CallFunc_IsInitialOptionsSet_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Friend_1 = K2Node_ComponentBoundEvent_Friend_1;
	Parms.CallFunc_FormatViewProfileText_FormattedText = CallFunc_FormatViewProfileText_FormattedText;
	Parms.K2Node_ComponentBoundEvent_Friend = K2Node_ComponentBoundEvent_Friend;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsHiddenEntry_ReturnValue = CallFunc_IsHiddenEntry_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_ShowEOSSocialOverlay_ReturnValue = CallFunc_ShowEOSSocialOverlay_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_Offline = K2Node_CustomEvent_Offline;

	UObject::ProcessEvent(Func, &Parms);

}

}


