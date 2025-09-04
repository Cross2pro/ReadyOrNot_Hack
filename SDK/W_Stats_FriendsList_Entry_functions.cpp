#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C
// (None)

class UClass* UW_Stats_FriendsList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Stats_FriendsList_Entry_C");

	return Clss;
}


// W_Stats_FriendsList_Entry_C W_Stats_FriendsList_Entry.Default__W_Stats_FriendsList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Stats_FriendsList_Entry_C* UW_Stats_FriendsList_Entry_C::GetDefaultObj()
{
	static class UW_Stats_FriendsList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Stats_FriendsList_Entry_C*>(UW_Stats_FriendsList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.UpdatePlatformIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPlatformIcon_NewParam                                (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_FriendsList_Entry_C::UpdatePlatformIcon(enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetPlatformIcon_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "UpdatePlatformIcon");

	Params::UW_Stats_FriendsList_Entry_C_UpdatePlatformIcon_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetPlatformIcon_NewParam = CallFunc_GetPlatformIcon_NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.UpdateFriend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_Stats_FriendsList_Entry_C::UpdateFriend(const struct FFriend& Friend, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "UpdateFriend");

	Params::UW_Stats_FriendsList_Entry_C_UpdateFriend_Params Parms{};

	Parms.Friend = Friend;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.OnImageFetched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Stats_FriendsList_Entry_C::OnImageFetched(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "OnImageFetched");

	Params::UW_Stats_FriendsList_Entry_C_OnImageFetched_Params Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Stats_FriendsList_Entry_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.UpdateAvatar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_FriendsList_Entry_C::UpdateAvatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "UpdateAvatar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C.ExecuteUbergraph_W_Stats_FriendsList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProfileResizedURI_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_InTexture                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextStyle*            CallFunc_GetCurrentTextStyle_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_OutColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_Stats_FriendsList_Entry_C::ExecuteUbergraph_W_Stats_FriendsList_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_GetProfileResizedURI_ReturnValue, class UTexture2D* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_FriendsList_Entry_C", "ExecuteUbergraph_W_Stats_FriendsList_Entry");

	Params::UW_Stats_FriendsList_Entry_C_ExecuteUbergraph_W_Stats_FriendsList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetProfileResizedURI_ReturnValue = CallFunc_GetProfileResizedURI_ReturnValue;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyle_ReturnValue = CallFunc_GetCurrentTextStyle_ReturnValue;
	Parms.CallFunc_GetColor_OutColor = CallFunc_GetColor_OutColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


