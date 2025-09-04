#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlayersList_Entry.W_PlayersList_Entry_C
// (None)

class UClass* UW_PlayersList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlayersList_Entry_C");

	return Clss;
}


// W_PlayersList_Entry_C W_PlayersList_Entry.Default__W_PlayersList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlayersList_Entry_C* UW_PlayersList_Entry_C::GetDefaultObj()
{
	static class UW_PlayersList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlayersList_Entry_C*>(UW_PlayersList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.SetProfileButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalOnlinePlatformType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::SetProfileButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetLocalOnlinePlatformType_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "SetProfileButtonVisibility");

	Params::UW_PlayersList_Entry_C_SetProfileButtonVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalOnlinePlatformType_ReturnValue = CallFunc_GetLocalOnlinePlatformType_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue = CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.UpdatePlatformIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerState*      CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::UpdatePlatformIcon(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsConsole_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "UpdatePlatformIcon");

	Params::UW_PlayersList_Entry_C_UpdatePlatformIcon_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue = CallFunc_GetPlayerStateFromPlayerProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.RefreshOnlinePlatformType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OnlinePlatformType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalOnlinePlatformType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::RefreshOnlinePlatformType(int32 OnlinePlatformType, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetLocalOnlinePlatformType_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "RefreshOnlinePlatformType");

	Params::UW_PlayersList_Entry_C_RefreshOnlinePlatformType_Params Parms{};

	Parms.OnlinePlatformType = OnlinePlatformType;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalOnlinePlatformType_ReturnValue = CallFunc_GetLocalOnlinePlatformType_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Initialise Popup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        TextFormat                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Show_Cancel_Button                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          OutputPopUp                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        Temp_text_Variable                                               (ConstParm)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::Initialise_Popup(const struct FLobbyPlayer& Player_Name, class FText TextFormat, class FText ButtonText, bool Show_Cancel_Button, class UW_StandardModal_C** OutputPopUp, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Initialise Popup");

	Params::UW_PlayersList_Entry_C_Initialise_Popup_Params Parms{};

	Parms.Player_Name = Player_Name;
	Parms.TextFormat = TextFormat;
	Parms.ButtonText = ButtonText;
	Parms.Show_Cancel_Button = Show_Cancel_Button;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPopUp != nullptr)
		*OutputPopUp = Parms.OutputPopUp;

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.GetColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSlateColor UW_PlayersList_Entry_C::GetColorAndOpacity_0(const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "GetColorAndOpacity_0");

	Params::UW_PlayersList_Entry_C_GetColorAndOpacity_0_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_CommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BaseButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Cancel kick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::Cancel_kick(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Cancel kick");

	Params::UW_PlayersList_Entry_C_Cancel_kick_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.kick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::Kick(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "kick");

	Params::UW_PlayersList_Entry_C_Kick_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.CancelBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::CancelBlock(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "CancelBlock");

	Params::UW_PlayersList_Entry_C_CancelBlock_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.bLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::bLock(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "bLock");

	Params::UW_PlayersList_Entry_C_bLock_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_W_InputActionButton_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButtonGamepad_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButtonGamepad_K2Node_ComponentBoundEvent_24_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButtonGamepad_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButtonGamepad_K2Node_ComponentBoundEvent_26_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButtonGamepad_K2Node_ComponentBoundEvent_27_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_MuteButton_K2Node_ComponentBoundEvent_28_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_KickButton_K2Node_ComponentBoundEvent_29_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_BlockButton_K2Node_ComponentBoundEvent_30_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ReportButton_K2Node_ComponentBoundEvent_31_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_PlayersList_Entry_C_BndEvt__W_PlayersList_Entry_ViewProfileButton_K2Node_ComponentBoundEvent_32_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.RefreshPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLobbyPlayer                Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::RefreshPlayer(const struct FLobbyPlayer& Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "RefreshPlayer");

	Params::UW_PlayersList_Entry_C_RefreshPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.CancelReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::CancelReport(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "CancelReport");

	Params::UW_PlayersList_Entry_C_CancelReport_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.ReportCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasReportSuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::ReportCompleted(bool WasReportSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "ReportCompleted");

	Params::UW_PlayersList_Entry_C_ReportCompleted_Params Parms{};

	Parms.WasReportSuccessful = WasReportSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlayersList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Report Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReportModal_C*            CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::Report_Player(class UW_ReportModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Report Player");

	Params::UW_PlayersList_Entry_C_Report_Player_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.Block and Report Player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_ReportModal_C*            CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_PlayersList_Entry_C::Block_and_Report_Player(class UW_ReportModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "Block and Report Player");

	Params::UW_PlayersList_Entry_C_Block_and_Report_Player_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.OK Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayersList_Entry_C::OK_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "OK Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.OnImageFetched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::OnImageFetched(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "OnImageFetched");

	Params::UW_PlayersList_Entry_C_OnImageFetched_Params Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayersList_Entry.W_PlayersList_Entry_C.ExecuteUbergraph_W_PlayersList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_29                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeMutedState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText_1                   (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueNetIDString_OutString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUniqueNetIDString_OutString_1                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowProfileUI_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_28                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialise_Popup_OutputPopUp                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_27                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_26                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_25                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_24                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_23                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_22                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_21                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_20                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialise_Popup_OutputPopUp_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_6                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_5                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_3                                   (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_30                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_4                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_3                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_2                                   (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_19                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_18                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_17                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_31                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ReportSubmittedModal_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AReadyOrNotGameMode*> CallFunc_GetAllGameModes_ReturnValue                             (ReferenceParm)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetProfileResizedURI_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLobbyPlayer                K2Node_CustomEvent_Player                                        (None)
// class UW_ReportModal_C*            CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FReportPlayerContext        K2Node_MakeStruct_ReportPlayerContext                            (None)
// bool                               CallFunc_IsPlayerBlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerBanned_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerBanned_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasReportSuccessful                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_ReportModal_C*            K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ReportPlayer_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReportModal_C*            K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UTexture2D*                  K2Node_CustomEvent_InTexture                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PlayersList_Entry_C::ExecuteUbergraph_W_PlayersList_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_29, bool CallFunc_CanChangeMutedState_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText_1, bool CallFunc_FindTextInLocalizationTable_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_GetUniqueNetIDString_OutString, const class FString& CallFunc_GetUniqueNetIDString_OutString_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShowProfileUI_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_28, class UW_StandardModal_C* CallFunc_Initialise_Popup_OutputPopUp, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_27, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_26, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_25, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_24, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_23, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_22, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_21, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_20, class UW_StandardModal_C* CallFunc_Initialise_Popup_OutputPopUp_1, class UStandardModal* K2Node_CustomEvent_CallingModal_6, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_5, class FText K2Node_CustomEvent_TextEntry_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_30, class UStandardModal* K2Node_CustomEvent_CallingModal_4, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_3, class FText K2Node_CustomEvent_TextEntry_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_19, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_18, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_17, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_16, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_15, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_31, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UW_ReportSubmittedModal_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class AReadyOrNotGameMode*>& CallFunc_GetAllGameModes_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetProfileResizedURI_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FLobbyPlayer& K2Node_CustomEvent_Player, class UW_ReportModal_C* CallFunc_Create_ReturnValue_1, const struct FReportPlayerContext& K2Node_MakeStruct_ReportPlayerContext, bool CallFunc_IsPlayerBlocked_ReturnValue, bool CallFunc_IsPlayerBanned_ReturnValue, bool CallFunc_IsPlayerBanned_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FText Temp_text_Variable_1, class UStandardModal* K2Node_CustomEvent_CallingModal_2, bool K2Node_CustomEvent_WasReportSuccessful, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UW_ReportModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_ReportPlayer_ReturnValue, class UW_ReportModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText K2Node_Select_Default, class UTexture2D* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayersList_Entry_C", "ExecuteUbergraph_W_PlayersList_Entry");

	Params::UW_PlayersList_Entry_C_ExecuteUbergraph_W_PlayersList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_29 = K2Node_ComponentBoundEvent_Button_29;
	Parms.CallFunc_CanChangeMutedState_ReturnValue = CallFunc_CanChangeMutedState_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText_1 = CallFunc_FindTextInLocalizationTable_OutText_1;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue_1 = CallFunc_FindTextInLocalizationTable_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetUniqueNetIDString_OutString = CallFunc_GetUniqueNetIDString_OutString;
	Parms.CallFunc_GetUniqueNetIDString_OutString_1 = CallFunc_GetUniqueNetIDString_OutString_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ShowProfileUI_ReturnValue = CallFunc_ShowProfileUI_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_28 = K2Node_ComponentBoundEvent_Button_28;
	Parms.CallFunc_Initialise_Popup_OutputPopUp = CallFunc_Initialise_Popup_OutputPopUp;
	Parms.K2Node_ComponentBoundEvent_Button_27 = K2Node_ComponentBoundEvent_Button_27;
	Parms.K2Node_ComponentBoundEvent_Button_26 = K2Node_ComponentBoundEvent_Button_26;
	Parms.K2Node_ComponentBoundEvent_Button_25 = K2Node_ComponentBoundEvent_Button_25;
	Parms.K2Node_ComponentBoundEvent_Button_24 = K2Node_ComponentBoundEvent_Button_24;
	Parms.K2Node_ComponentBoundEvent_Button_23 = K2Node_ComponentBoundEvent_Button_23;
	Parms.K2Node_ComponentBoundEvent_Button_22 = K2Node_ComponentBoundEvent_Button_22;
	Parms.K2Node_ComponentBoundEvent_Button_21 = K2Node_ComponentBoundEvent_Button_21;
	Parms.K2Node_ComponentBoundEvent_Button_20 = K2Node_ComponentBoundEvent_Button_20;
	Parms.CallFunc_Initialise_Popup_OutputPopUp_1 = CallFunc_Initialise_Popup_OutputPopUp_1;
	Parms.K2Node_CustomEvent_CallingModal_6 = K2Node_CustomEvent_CallingModal_6;
	Parms.K2Node_CustomEvent_CallingModal_5 = K2Node_CustomEvent_CallingModal_5;
	Parms.K2Node_CustomEvent_TextEntry_3 = K2Node_CustomEvent_TextEntry_3;
	Parms.K2Node_ComponentBoundEvent_Button_30 = K2Node_ComponentBoundEvent_Button_30;
	Parms.K2Node_CustomEvent_CallingModal_4 = K2Node_CustomEvent_CallingModal_4;
	Parms.K2Node_CustomEvent_CallingModal_3 = K2Node_CustomEvent_CallingModal_3;
	Parms.K2Node_CustomEvent_TextEntry_2 = K2Node_CustomEvent_TextEntry_2;
	Parms.K2Node_ComponentBoundEvent_Button_19 = K2Node_ComponentBoundEvent_Button_19;
	Parms.K2Node_ComponentBoundEvent_Button_18 = K2Node_ComponentBoundEvent_Button_18;
	Parms.K2Node_ComponentBoundEvent_Button_17 = K2Node_ComponentBoundEvent_Button_17;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_31 = K2Node_ComponentBoundEvent_Button_31;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllGameModes_ReturnValue = CallFunc_GetAllGameModes_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetProfileResizedURI_ReturnValue = CallFunc_GetProfileResizedURI_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_MakeStruct_ReportPlayerContext = K2Node_MakeStruct_ReportPlayerContext;
	Parms.CallFunc_IsPlayerBlocked_ReturnValue = CallFunc_IsPlayerBlocked_ReturnValue;
	Parms.CallFunc_IsPlayerBanned_ReturnValue = CallFunc_IsPlayerBanned_ReturnValue;
	Parms.CallFunc_IsPlayerBanned_ReturnValue_1 = CallFunc_IsPlayerBanned_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_WasReportSuccessful = K2Node_CustomEvent_WasReportSuccessful;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ReportPlayer_ReturnValue = CallFunc_ReportPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


