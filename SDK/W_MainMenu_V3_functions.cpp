#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_V3.W_MainMenu_V3_C
// (None)

class UClass* UW_MainMenu_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_V3_C");

	return Clss;
}


// W_MainMenu_V3_C W_MainMenu_V3.Default__W_MainMenu_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_V3_C* UW_MainMenu_V3_C::GetDefaultObj()
{
	static class UW_MainMenu_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_V3_C*>(UW_MainMenu_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_V3.W_MainMenu_V3_C.UpdateMultiplayerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::UpdateMultiplayerVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "UpdateMultiplayerVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.EnableCrossplayJoinSession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCrossplayEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::EnableCrossplayJoinSession(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SaveCrossplayEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "EnableCrossplayJoinSession");

	Params::UW_MainMenu_V3_C_EnableCrossplayJoinSession_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SaveCrossplayEnabled_ReturnValue = CallFunc_SaveCrossplayEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BindEnableCrossplayModalEvents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 OnCancelClicked                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 OnOkClicked                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BindEnableCrossplayModalEvents(FDelegateProperty_& OnCancelClicked, FDelegateProperty_& OnOkClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BindEnableCrossplayModalEvents");

	Params::UW_MainMenu_V3_C_BindEnableCrossplayModalEvents_Params Parms{};

	Parms.OnCancelClicked = OnCancelClicked;
	Parms.OnOkClicked = OnOkClicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Show Enable Crossplay Modal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               JoinLobbySuccessful                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     CurrentlyJoiningSession                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Show_Enable_Crossplay_Modal(bool JoinLobbySuccessful, const struct FBlueprintSessionResult& CurrentlyJoiningSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Show Enable Crossplay Modal");

	Params::UW_MainMenu_V3_C_Show_Enable_Crossplay_Modal_Params Parms{};

	Parms.JoinLobbySuccessful = JoinLobbySuccessful;
	Parms.CurrentlyJoiningSession = CurrentlyJoiningSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CreateEnableCrossplayModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UW_CrossplayLobbyModal_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CreateEnableCrossplayModal(const struct FVector2D& Temp_struct_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UW_CrossplayLobbyModal_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CreateEnableCrossplayModal");

	Params::UW_MainMenu_V3_C_CreateEnableCrossplayModal_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CreateLinkAccountModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class UW_CrossplayLobbyModal_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CreateLinkAccountModal(const struct FVector2D& Temp_struct_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UW_CrossplayLobbyModal_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CreateLinkAccountModal");

	Params::UW_MainMenu_V3_C_CreateLinkAccountModal_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Retry Connection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Retry_Connection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Retry Connection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Show Authentication Spinner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNetworkConnected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Show_Authentication_Spinner(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsNetworkConnected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Show Authentication Spinner");

	Params::UW_MainMenu_V3_C_Show_Authentication_Spinner_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsNetworkConnected_ReturnValue = CallFunc_IsNetworkConnected_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.InitializeDifficultySelectModal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHosting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFriendsOnly                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        K2Node_DynamicCast_AsW_Difficulty_Modal                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::InitializeDifficultySelectModal(bool bHosting, bool bFriendsOnly, class UW_DifficultyModal_C** OutPopup, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget, class UW_DifficultyModal_C* K2Node_DynamicCast_AsW_Difficulty_Modal, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "InitializeDifficultySelectModal");

	Params::UW_MainMenu_V3_C_InitializeDifficultySelectModal_Params Parms{};

	Parms.bHosting = bHosting;
	Parms.bFriendsOnly = bFriendsOnly;
	Parms.CallFunc_Create_Overlay_Widget_Widget = CallFunc_Create_Overlay_Widget_Widget;
	Parms.K2Node_DynamicCast_AsW_Difficulty_Modal = K2Node_DynamicCast_AsW_Difficulty_Modal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Show Multiplayer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Show_Multiplayer_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Show Multiplayer Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Hide Multiplayer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Hide_Multiplayer_Options(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Hide Multiplayer Options");

	Params::UW_MainMenu_V3_C_Hide_Multiplayer_Options_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.InitialOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialOptionsSet_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::InitialOptions(class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget, bool CallFunc_IsInitialOptionsSet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "InitialOptions");

	Params::UW_MainMenu_V3_C_InitialOptions_Params Parms{};

	Parms.CallFunc_Create_Overlay_Widget_Widget = CallFunc_Create_Overlay_Widget_Widget;
	Parms.CallFunc_IsInitialOptionsSet_ReturnValue = CallFunc_IsInitialOptionsSet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CreateDlcAcknowledgement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameVersionRestriction UnlockedDLC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DLC_Acknowledgement_C*    AcknowledgementWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DLC_Acknowledgement_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGameVersionBeenAcknowledged_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameVersionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CreateDlcAcknowledgement(enum class EGameVersionRestriction UnlockedDLC, class UW_DLC_Acknowledgement_C** AcknowledgementWidget, class UW_DLC_Acknowledgement_C* CallFunc_Create_ReturnValue, bool CallFunc_HasGameVersionBeenAcknowledged_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsGameVersionEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CreateDlcAcknowledgement");

	Params::UW_MainMenu_V3_C_CreateDlcAcknowledgement_Params Parms{};

	Parms.UnlockedDLC = UnlockedDLC;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_HasGameVersionBeenAcknowledged_ReturnValue = CallFunc_HasGameVersionBeenAcknowledged_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsGameVersionEnabled_ReturnValue = CallFunc_IsGameVersionEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AcknowledgementWidget != nullptr)
		*AcknowledgementWidget = Parms.AcknowledgementWidget;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Update Search Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Update_Search_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Update Search Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CheckForDlcAcknowledgements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAckowledgementsCreated                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_DLC_Acknowledgement_C*>AcknowledgementWidgets                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<enum class EGameVersionRestriction>DlcsToAcknowledge                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EGameVersionRestriction>K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DLC_Acknowledgement_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameVersionRestriction CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DLC_Acknowledgement_C*    CallFunc_CreateDlcAcknowledgement_AcknowledgementWidget          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CheckForDlcAcknowledgements(bool bAckowledgementsCreated, const TArray<class UW_DLC_Acknowledgement_C*>& AcknowledgementWidgets, const TArray<enum class EGameVersionRestriction>& DlcsToAcknowledge, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<enum class EGameVersionRestriction>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, class UW_DLC_Acknowledgement_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EGameVersionRestriction CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UW_DLC_Acknowledgement_C* CallFunc_CreateDlcAcknowledgement_AcknowledgementWidget, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CheckForDlcAcknowledgements");

	Params::UW_MainMenu_V3_C_CheckForDlcAcknowledgements_Params Parms{};

	Parms.bAckowledgementsCreated = bAckowledgementsCreated;
	Parms.AcknowledgementWidgets = AcknowledgementWidgets;
	Parms.DlcsToAcknowledge = DlcsToAcknowledge;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_CreateDlcAcknowledgement_AcknowledgementWidget = CallFunc_CreateDlcAcknowledgement_AcknowledgementWidget;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CommanderClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowCommanderModePopup_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CommanderClicked(class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_ShouldShowCommanderModePopup_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CommanderClicked");

	Params::UW_MainMenu_V3_C_CommanderClicked_Params Parms{};

	Parms.CallFunc_Create_Overlay_Widget_Widget = CallFunc_Create_Overlay_Widget_Widget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_ShouldShowCommanderModePopup_ReturnValue = CallFunc_ShouldShowCommanderModePopup_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.QuickPlayClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowQuickPlayPopup_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::QuickPlayClicked(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldShowQuickPlayPopup_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "QuickPlayClicked");

	Params::UW_MainMenu_V3_C_QuickPlayClicked_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShouldShowQuickPlayPopup_ReturnValue = CallFunc_ShouldShowQuickPlayPopup_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CloseAccordions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           ClickedButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::CloseAccordions(class UCommonButtonBase* ClickedButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CloseAccordions");

	Params::UW_MainMenu_V3_C_CloseAccordions_Params Parms{};

	Parms.ClickedButton = ClickedButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Create Overlay Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget_Class                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Create_Overlay_Widget(class UClass* Widget_Class, class UCommonActivatableWidget** Widget, class UCommonActivatableWidget* CallFunc_BP_AddWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Create Overlay Widget");

	Params::UW_MainMenu_V3_C_Create_Overlay_Widget_Params Parms{};

	Parms.Widget_Class = Widget_Class;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocusedDescendants_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSearchingForSession_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_MainMenu_V3_C::BP_OnHandleBackAction(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasUserFocusedDescendants_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_HasUserFocusedDescendants_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSearchingForSession_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_OnHandleBackAction");

	Params::UW_MainMenu_V3_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue = CallFunc_HasUserFocusedDescendants_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_HasUserFocusedDescendants_ReturnValue_1 = CallFunc_HasUserFocusedDescendants_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSearchingForSession_ReturnValue = CallFunc_IsSearchingForSession_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Mod Installing Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Mod_Installing_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Mod Installing Modal");

	Params::UW_MainMenu_V3_C_Initialize_Mod_Installing_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CancelSessionSearch
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UW_MainMenu_V3_C::CancelSessionSearch(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CancelSessionSearch");

	Params::UW_MainMenu_V3_C_CancelSessionSearch_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Restart Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Restart Modal");

	Params::UW_MainMenu_V3_C_Initialize_Restart_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Initialize Tutorial Modal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          OutPopup                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Initialize_Tutorial_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Initialize Tutorial Modal");

	Params::UW_MainMenu_V3_C_Initialize_Tutorial_Modal_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPopup != nullptr)
		*OutPopup = Parms.OutPopup;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ContinueButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TutorialMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::ContinueButtonClicked(bool TutorialMode, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ContinueButtonClicked");

	Params::UW_MainMenu_V3_C_ContinueButtonClicked_Params Parms{};

	Parms.TutorialMode = TutorialMode;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.SetupContinueButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsDone_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::SetupContinueButton(bool CallFunc_GetIsDone_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanContinueCommanderMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "SetupContinueButton");

	Params::UW_MainMenu_V3_C_SetupContinueButton_Params Parms{};

	Parms.CallFunc_GetIsDone_ReturnValue = CallFunc_GetIsDone_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_MainMenu_V3_C::BP_GetDesiredFocusTarget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_GetDesiredFocusTarget");

	Params::UW_MainMenu_V3_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Get_Replay_Btn_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReplaySystemEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_MainMenu_V3_C::Get_Replay_Btn_Visibility_0(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReplaySystemEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Get_Replay_Btn_Visibility_0");

	Params::UW_MainMenu_V3_C_Get_Replay_Btn_Visibility_0_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsReplaySystemEnabled_ReturnValue = CallFunc_IsReplaySystemEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnMouseButtonDown_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEventReply UW_MainMenu_V3_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnMouseButtonDown_0");

	Params::UW_MainMenu_V3_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.RegainFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::RegainFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "RegainFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_5_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_SinglePlayerButton_K2Node_ComponentBoundEvent_6_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_7_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_TrainingButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PracticeButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ContinueButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_CommanderButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_SettingsButton_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ExitGameButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ReplayButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_FriendsLobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PublicLobbyButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_PublicFindButton_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Clear Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Clear_Focus(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Clear Focus");

	Params::UW_MainMenu_V3_C_Clear_Focus_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.No
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::No(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "No");

	Params::UW_MainMenu_V3_C_No_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Cancel(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Cancel");

	Params::UW_MainMenu_V3_C_Cancel_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Yes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Yes(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Yes");

	Params::UW_MainMenu_V3_C_Yes_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_CreditsButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Restart Game
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Restart_Game(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Restart Game");

	Params::UW_MainMenu_V3_C_Restart_Game_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_FindingGame_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Cancel Restart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Cancel_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Cancel Restart");

	Params::UW_MainMenu_V3_C_Cancel_Restart_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_CommonButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_CommonButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_CommonButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_CommonButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.SetSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::SetSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "SetSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.CancelFind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::CancelFind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "CancelFind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.SessionSearchProgress
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bComplete                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FBlueprintSessionResult>SessionResult                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_MainMenu_V3_C::SessionSearchProgress(bool bComplete, class FText OutMessage, TArray<struct FBlueprintSessionResult>& SessionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "SessionSearchProgress");

	Params::UW_MainMenu_V3_C_SessionSearchProgress_Params Parms{};

	Parms.bComplete = bComplete;
	Parms.OutMessage = OutMessage;
	Parms.SessionResult = SessionResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnUpdateSessionSearch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bComplete                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FBlueprintSessionResult>SessionResult                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_MainMenu_V3_C::OnUpdateSessionSearch(bool bComplete, class FText OutMessage, TArray<struct FBlueprintSessionResult>& SessionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnUpdateSessionSearch");

	Params::UW_MainMenu_V3_C_OnUpdateSessionSearch_Params Parms{};

	Parms.bComplete = bComplete;
	Parms.OutMessage = OutMessage;
	Parms.SessionResult = SessionResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_BlockListButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_BlockListButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_BlockListButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_BlockListButton_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Cancel Restart Modal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Cancel_Restart_Modal(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Cancel Restart Modal");

	Params::UW_MainMenu_V3_C_Cancel_Restart_Modal_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.UpdateStreamingInstallDependentButtons
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnableButtons                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::UpdateStreamingInstallDependentButtons(bool bEnableButtons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "UpdateStreamingInstallDependentButtons");

	Params::UW_MainMenu_V3_C_UpdateStreamingInstallDependentButtons_Params Parms{};

	Parms.bEnableButtons = bEnableButtons;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnLocalLoginCompletedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InWasSuccessful                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnLocalLoginCompletedDelegate(bool InWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnLocalLoginCompletedDelegate");

	Params::UW_MainMenu_V3_C_OnLocalLoginCompletedDelegate_Params Parms{};

	Parms.InWasSuccessful = InWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnLinkEpicAccountCompletedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InWasSuccessful                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnLinkEpicAccountCompletedDelegate(bool InWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnLinkEpicAccountCompletedDelegate");

	Params::UW_MainMenu_V3_C_OnLinkEpicAccountCompletedDelegate_Params Parms{};

	Parms.InWasSuccessful = InWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ModsButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnModioBrowserClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::OnModioBrowserClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnModioBrowserClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.SetFocusToSinglePlayerButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::SetFocusToSinglePlayerButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "SetFocusToSinglePlayerButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_MultiPlayerButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.No Crossplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::No_Crossplay(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "No Crossplay");

	Params::UW_MainMenu_V3_C_No_Crossplay_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Enable Crossplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::Enable_Crossplay(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Enable Crossplay");

	Params::UW_MainMenu_V3_C_Enable_Crossplay_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnCancelHostDifficultySelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnCancelHostDifficultySelect(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnCancelHostDifficultySelect");

	Params::UW_MainMenu_V3_C_OnCancelHostDifficultySelect_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnHostDifficultySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_DifficultyModal_C*        CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECrossplayOverride      Crossplay_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnHostDifficultySelected(class UW_DifficultyModal_C* CallingModal, enum class ECrossplayOverride Crossplay_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnHostDifficultySelected");

	Params::UW_MainMenu_V3_C_OnHostDifficultySelected_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.Crossplay_Override = Crossplay_Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnFindMatchDifficultyCanceled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnFindMatchDifficultyCanceled(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnFindMatchDifficultyCanceled");

	Params::UW_MainMenu_V3_C_OnFindMatchDifficultyCanceled_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.OnFindMatchDifficultiesSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_DifficultyModal_C*        CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECrossplayOverride      Crossplay_Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::OnFindMatchDifficultiesSelected(class UW_DifficultyModal_C* CallingModal, enum class ECrossplayOverride Crossplay_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "OnFindMatchDifficultiesSelected");

	Params::UW_MainMenu_V3_C_OnFindMatchDifficultiesSelected_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.Crossplay_Override = Crossplay_Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_StatsButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_StatsButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_StatsButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_StatsButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_ReconnectButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_ReconnectButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_ReconnectButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_MainMenu_V3_C_BndEvt__W_MainMenu_V3_ReconnectButton_K2Node_ComponentBoundEvent_21_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Connection Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bConnectionLost                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Connection_Changed(bool bConnectionLost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Connection Changed");

	Params::UW_MainMenu_V3_C_Connection_Changed_Params Parms{};

	Parms.bConnectionLost = bConnectionLost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_20_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_20_OnWidgetActivationChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_20_OnWidgetActivationChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_22_HandleBackPress__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_22_HandleBackPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "BndEvt__W_MainMenu_V3_Sub_MultiPlayerAccordion_K2Node_ComponentBoundEvent_22_HandleBackPress__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.JoinLobbyLinkAccount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InWasSuccessful                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MainMenu_V3_C::JoinLobbyLinkAccount(bool InWasSuccessful, const struct FBlueprintSessionResult& Session)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "JoinLobbyLinkAccount");

	Params::UW_MainMenu_V3_C_JoinLobbyLinkAccount_Params Parms{};

	Parms.InWasSuccessful = InWasSuccessful;
	Parms.Session = Session;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Join Crossplay Session
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CrossplayLobbyModal_C*    CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Join_Crossplay_Session(class UW_CrossplayLobbyModal_C* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Join Crossplay Session");

	Params::UW_MainMenu_V3_C_Join_Crossplay_Session_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.Close Modal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::Close_Modal(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "Close Modal");

	Params::UW_MainMenu_V3_C_Close_Modal_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ExecuteUbergraph_W_MainMenu_V3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               Temp_struct_Variable                                             (ConstParm)
// struct FEventReply                 CallFunc_CancelSessionSearch_ReturnValue                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_19                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_18                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_17                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowModsButton_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_13                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_4                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_12                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_11                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_3                                   (None)
// class UW_StandardModal_C*          CallFunc_Initialize_Tutorial_Modal_OutPopup                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedTraining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanContinueCommanderMode_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Initialize_Restart_Modal_OutPopup                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_10                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_2                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_ComponentBoundEvent_InVisibility                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowRestartDialog_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_9                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry_1                                   (None)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfFriends_Count                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Options_UE5_C*            K2Node_DynamicCast_AsW_Options_UE5                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowCommanderModePopup_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UUserWidget*                 CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ServerBrowser_C*          K2Node_DynamicCast_AsW_Server_Browser                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bComplete_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_OutMessage_1                                  (None)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_SessionResult_1                               (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bComplete                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_OutMessage                                    (None)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_SessionResult                                 (ConstParm, ReferenceParm)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget_4                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ConsoleLobbyManager_C*    K2Node_DynamicCast_AsW_Console_Lobby_Manager                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FPlayerBanInfo>CallFunc_GetBannedPlayers_ReturnValue                            (None)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_8                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_IsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnableButtons                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InWasSuccessful_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsDone_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InWasSuccessful_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServerBrowserEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_7                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal_6                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowCrossplayPopup_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_3                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_5                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        K2Node_CustomEvent_CallingModal_4                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECrossplayOverride      K2Node_CustomEvent_Crossplay_Override_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_3                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDifficulty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        CallFunc_InitializeDifficultySelectModal_OutPopup                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        K2Node_CustomEvent_CallingModal_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECrossplayOverride      K2Node_CustomEvent_Crossplay_Override                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditorBuild_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_Create_Overlay_Widget_Widget_5                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_DifficultyModal_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_EOSLoginSuccessful_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModal_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EOSLoginComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_4                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bConnectionLost                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EOSLoginSuccessful_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               CallFunc_GetIsEnabled_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNetworkConnected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UW_DifficultyModal_C*        CallFunc_InitializeDifficultySelectModal_OutPopup_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InWasSuccessful                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_CustomEvent_Session                                       (None)
// class UW_CrossplayLobbyModal_C*    K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCrossplayEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCrossplayEnabled_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_V3_C::ExecuteUbergraph_W_MainMenu_V3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FPointerEvent& Temp_struct_Variable, const struct FEventReply& CallFunc_CancelSessionSearch_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UW_StandardModal_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_19, bool K2Node_ComponentBoundEvent_Selected_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_18, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_17, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_16, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_15, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldShowModsButton_ReturnValue, bool CallFunc_IsActivated_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_13, class FText K2Node_CustomEvent_TextEntry_4, bool K2Node_SwitchEnum_CmpSuccess, class UStandardModal* K2Node_CustomEvent_CallingModal_12, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_11, class FText K2Node_CustomEvent_TextEntry_3, class UW_StandardModal_C* CallFunc_Initialize_Tutorial_Modal_OutPopup, bool CallFunc_HasCompletedTraining_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanContinueCommanderMode_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, bool CallFunc_IsValid_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_10, class FText K2Node_CustomEvent_TextEntry_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ESlateVisibility K2Node_ComponentBoundEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ShouldShowRestartDialog_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_9, class FText K2Node_CustomEvent_TextEntry_1, bool CallFunc_IsConsole_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetNumberOfFriends_Count, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget_1, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget_2, class UW_Options_UE5_C* K2Node_DynamicCast_AsW_Options_UE5, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_ShouldShowCommanderModePopup_ReturnValue, class FText Temp_text_Variable, class UUserWidget* CallFunc_Create_ReturnValue_1, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget_3, class UW_ServerBrowser_C* K2Node_DynamicCast_AsW_Server_Browser, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_CustomEvent_bComplete_1, class FText K2Node_CustomEvent_OutMessage_1, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_SessionResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool K2Node_CustomEvent_bComplete, class FText K2Node_CustomEvent_OutMessage, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_SessionResult, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget_4, class UW_ConsoleLobbyManager_C* K2Node_DynamicCast_AsW_Console_Lobby_Manager, bool K2Node_DynamicCast_bSuccess_5, TMap<class FString, struct FPlayerBanInfo> CallFunc_GetBannedPlayers_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal_8, bool CallFunc_Map_IsEmpty_ReturnValue, bool K2Node_Event_bEnableButtons, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue_3, bool K2Node_CustomEvent_InWasSuccessful_2, bool CallFunc_GetIsDone_ReturnValue, bool K2Node_CustomEvent_InWasSuccessful_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, bool CallFunc_IsServerBrowserEnabled_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UStandardModal* K2Node_CustomEvent_CallingModal_7, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_6, class FText K2Node_CustomEvent_TextEntry, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, bool CallFunc_ShouldShowCrossplayPopup_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_GetSelected_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_3, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_4, bool K2Node_DynamicCast_bSuccess_7, class UStandardModal* K2Node_CustomEvent_CallingModal_5, class UW_DifficultyModal_C* K2Node_CustomEvent_CallingModal_4, enum class ECrossplayOverride K2Node_CustomEvent_Crossplay_Override_1, class UStandardModal* K2Node_CustomEvent_CallingModal_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool CallFunc_SetDifficulty_ReturnValue, class UW_DifficultyModal_C* CallFunc_InitializeDifficultySelectModal_OutPopup, class UW_DifficultyModal_C* K2Node_CustomEvent_CallingModal_2, enum class ECrossplayOverride K2Node_CustomEvent_Crossplay_Override, bool CallFunc_IsEditorBuild_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonActivatableWidget* CallFunc_Create_Overlay_Widget_Widget_5, TArray<class UW_DifficultyModal_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_EOSLoginSuccessful_ReturnValue, class UW_DifficultyModal_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EOSLoginComplete_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText Temp_text_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_4, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM_5, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_CustomEvent_bConnectionLost, bool CallFunc_EOSLoginSuccessful_ReturnValue_1, class FText Temp_text_Variable_2, bool CallFunc_GetIsEnabled_ReturnValue_4, bool CallFunc_IsNetworkConnected_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FText Temp_text_Variable_3, class UW_DifficultyModal_C* CallFunc_InitializeDifficultySelectModal_OutPopup_1, bool K2Node_CustomEvent_InWasSuccessful, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class UW_CrossplayLobbyModal_C* K2Node_CustomEvent_CallingModal_1, class UStandardModal* K2Node_CustomEvent_CallingModal, bool CallFunc_SaveCrossplayEnabled_ReturnValue, bool CallFunc_SaveCrossplayEnabled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ExecuteUbergraph_W_MainMenu_V3");

	Params::UW_MainMenu_V3_C_ExecuteUbergraph_W_MainMenu_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CancelSessionSearch_ReturnValue = CallFunc_CancelSessionSearch_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_ComponentBoundEvent_Button_19 = K2Node_ComponentBoundEvent_Button_19;
	Parms.K2Node_ComponentBoundEvent_Selected_2 = K2Node_ComponentBoundEvent_Selected_2;
	Parms.K2Node_ComponentBoundEvent_Button_18 = K2Node_ComponentBoundEvent_Button_18;
	Parms.K2Node_ComponentBoundEvent_Selected_1 = K2Node_ComponentBoundEvent_Selected_1;
	Parms.K2Node_ComponentBoundEvent_Button_17 = K2Node_ComponentBoundEvent_Button_17;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_1 = K2Node_DynamicCast_AsMain_Menu_GM_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ShouldShowModsButton_ReturnValue = CallFunc_ShouldShowModsButton_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_CustomEvent_CallingModal_13 = K2Node_CustomEvent_CallingModal_13;
	Parms.K2Node_CustomEvent_TextEntry_4 = K2Node_CustomEvent_TextEntry_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_CallingModal_12 = K2Node_CustomEvent_CallingModal_12;
	Parms.K2Node_CustomEvent_CallingModal_11 = K2Node_CustomEvent_CallingModal_11;
	Parms.K2Node_CustomEvent_TextEntry_3 = K2Node_CustomEvent_TextEntry_3;
	Parms.CallFunc_Initialize_Tutorial_Modal_OutPopup = CallFunc_Initialize_Tutorial_Modal_OutPopup;
	Parms.CallFunc_HasCompletedTraining_ReturnValue = CallFunc_HasCompletedTraining_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_2 = K2Node_DynamicCast_AsMain_Menu_GM_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CanContinueCommanderMode_ReturnValue = CallFunc_CanContinueCommanderMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Initialize_Restart_Modal_OutPopup = CallFunc_Initialize_Restart_Modal_OutPopup;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_10 = K2Node_CustomEvent_CallingModal_10;
	Parms.K2Node_CustomEvent_TextEntry_2 = K2Node_CustomEvent_TextEntry_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InVisibility = K2Node_ComponentBoundEvent_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ShouldShowRestartDialog_ReturnValue = CallFunc_ShouldShowRestartDialog_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_9 = K2Node_CustomEvent_CallingModal_9;
	Parms.K2Node_CustomEvent_TextEntry_1 = K2Node_CustomEvent_TextEntry_1;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNumberOfFriends_Count = CallFunc_GetNumberOfFriends_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Overlay_Widget_Widget = CallFunc_Create_Overlay_Widget_Widget;
	Parms.CallFunc_Create_Overlay_Widget_Widget_1 = CallFunc_Create_Overlay_Widget_Widget_1;
	Parms.CallFunc_Create_Overlay_Widget_Widget_2 = CallFunc_Create_Overlay_Widget_Widget_2;
	Parms.K2Node_DynamicCast_AsW_Options_UE5 = K2Node_DynamicCast_AsW_Options_UE5;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ShouldShowCommanderModePopup_ReturnValue = CallFunc_ShouldShowCommanderModePopup_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_Overlay_Widget_Widget_3 = CallFunc_Create_Overlay_Widget_Widget_3;
	Parms.K2Node_DynamicCast_AsW_Server_Browser = K2Node_DynamicCast_AsW_Server_Browser;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_bComplete_1 = K2Node_CustomEvent_bComplete_1;
	Parms.K2Node_CustomEvent_OutMessage_1 = K2Node_CustomEvent_OutMessage_1;
	Parms.K2Node_CustomEvent_SessionResult_1 = K2Node_CustomEvent_SessionResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_bComplete = K2Node_CustomEvent_bComplete;
	Parms.K2Node_CustomEvent_OutMessage = K2Node_CustomEvent_OutMessage;
	Parms.K2Node_CustomEvent_SessionResult = K2Node_CustomEvent_SessionResult;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_Create_Overlay_Widget_Widget_4 = CallFunc_Create_Overlay_Widget_Widget_4;
	Parms.K2Node_DynamicCast_AsW_Console_Lobby_Manager = K2Node_DynamicCast_AsW_Console_Lobby_Manager;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetBannedPlayers_ReturnValue = CallFunc_GetBannedPlayers_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal_8 = K2Node_CustomEvent_CallingModal_8;
	Parms.CallFunc_Map_IsEmpty_ReturnValue = CallFunc_Map_IsEmpty_ReturnValue;
	Parms.K2Node_Event_bEnableButtons = K2Node_Event_bEnableButtons;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue_2 = CallFunc_GetIsEnabled_ReturnValue_2;
	Parms.CallFunc_GetIsEnabled_ReturnValue_3 = CallFunc_GetIsEnabled_ReturnValue_3;
	Parms.K2Node_CustomEvent_InWasSuccessful_2 = K2Node_CustomEvent_InWasSuccessful_2;
	Parms.CallFunc_GetIsDone_ReturnValue = CallFunc_GetIsDone_ReturnValue;
	Parms.K2Node_CustomEvent_InWasSuccessful_1 = K2Node_CustomEvent_InWasSuccessful_1;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_IsServerBrowserEnabled_ReturnValue = CallFunc_IsServerBrowserEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CustomEvent_CallingModal_7 = K2Node_CustomEvent_CallingModal_7;
	Parms.K2Node_CustomEvent_CallingModal_6 = K2Node_CustomEvent_CallingModal_6;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.CallFunc_GetGameMode_ReturnValue_2 = CallFunc_GetGameMode_ReturnValue_2;
	Parms.CallFunc_ShouldShowCrossplayPopup_ReturnValue = CallFunc_ShouldShowCrossplayPopup_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_3 = K2Node_DynamicCast_AsMain_Menu_GM_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_3 = CallFunc_GetGameMode_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_4 = K2Node_DynamicCast_AsMain_Menu_GM_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_CallingModal_5 = K2Node_CustomEvent_CallingModal_5;
	Parms.K2Node_CustomEvent_CallingModal_4 = K2Node_CustomEvent_CallingModal_4;
	Parms.K2Node_CustomEvent_Crossplay_Override_1 = K2Node_CustomEvent_Crossplay_Override_1;
	Parms.K2Node_CustomEvent_CallingModal_3 = K2Node_CustomEvent_CallingModal_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_SetDifficulty_ReturnValue = CallFunc_SetDifficulty_ReturnValue;
	Parms.CallFunc_InitializeDifficultySelectModal_OutPopup = CallFunc_InitializeDifficultySelectModal_OutPopup;
	Parms.K2Node_CustomEvent_CallingModal_2 = K2Node_CustomEvent_CallingModal_2;
	Parms.K2Node_CustomEvent_Crossplay_Override = K2Node_CustomEvent_Crossplay_Override;
	Parms.CallFunc_IsEditorBuild_ReturnValue = CallFunc_IsEditorBuild_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_Create_Overlay_Widget_Widget_5 = CallFunc_Create_Overlay_Widget_Widget_5;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_EOSLoginSuccessful_ReturnValue = CallFunc_EOSLoginSuccessful_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EOSLoginComplete_ReturnValue = CallFunc_EOSLoginComplete_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameMode_ReturnValue_4 = CallFunc_GetGameMode_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM_5 = K2Node_DynamicCast_AsMain_Menu_GM_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_bConnectionLost = K2Node_CustomEvent_bConnectionLost;
	Parms.CallFunc_EOSLoginSuccessful_ReturnValue_1 = CallFunc_EOSLoginSuccessful_ReturnValue_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetIsEnabled_ReturnValue_4 = CallFunc_GetIsEnabled_ReturnValue_4;
	Parms.CallFunc_IsNetworkConnected_ReturnValue = CallFunc_IsNetworkConnected_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_InitializeDifficultySelectModal_OutPopup_1 = CallFunc_InitializeDifficultySelectModal_OutPopup_1;
	Parms.K2Node_CustomEvent_InWasSuccessful = K2Node_CustomEvent_InWasSuccessful;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.CallFunc_SaveCrossplayEnabled_ReturnValue = CallFunc_SaveCrossplayEnabled_ReturnValue;
	Parms.CallFunc_SaveCrossplayEnabled_ReturnValue_1 = CallFunc_SaveCrossplayEnabled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_V3.W_MainMenu_V3_C.ModioClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_V3_C::ModioClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_V3_C", "ModioClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


