#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ServerBrowser.W_ServerBrowser_C
// (None)

class UClass* UW_ServerBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ServerBrowser_C");

	return Clss;
}


// W_ServerBrowser_C W_ServerBrowser.Default__W_ServerBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ServerBrowser_C* UW_ServerBrowser_C::GetDefaultObj()
{
	static class UW_ServerBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ServerBrowser_C*>(UW_ServerBrowser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ServerBrowser.W_ServerBrowser_C.Set Latency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListData*             Server_Item                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UW_ServerBrowser_C::Set_Latency(class UServerListData* Server_Item, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "Set Latency");

	Params::UW_ServerBrowser_C_Set_Latency_Params Parms{};

	Parms.Server_Item = Server_Item;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.Set Host Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListData*             Server_Item                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_ServerBrowser_C::Set_Host_Name(class UServerListData* Server_Item, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "Set Host Name");

	Params::UW_ServerBrowser_C_Set_Host_Name_Params Parms{};

	Parms.Server_Item = Server_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.Set Player Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListData*             Server_Item                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_ServerBrowser_C::Set_Player_Count(class UServerListData* Server_Item, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "Set Player Count");

	Params::UW_ServerBrowser_C_Set_Player_Count_Params Parms{};

	Parms.Server_Item = Server_Item;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.DeselectButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ServerBrowser_C::DeselectButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "DeselectButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ServerBrowser.W_ServerBrowser_C.SetSelectedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Deselect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::SetSelectedState(int32 ID, bool Deselect, class UW_Button_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "SetSelectedState");

	Params::UW_ServerBrowser_C_SetSelectedState_Params Parms{};

	Parms.ID = ID;
	Parms.Deselect = Deselect;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ServerBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_Players_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_Players_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_Players_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_Players_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_HostName_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_HostName_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_HostName_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_HostName_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_Ping_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_Ping_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_Ping_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_Ping_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_MissionBrief_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_MissionBrief_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_MissionBrief_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_MissionBrief_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_Difficulty_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_Difficulty_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_Difficulty_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_Difficulty_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_10_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_10_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_10_OnNavOptionSelected__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_10_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_Prev_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_Prev_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_Prev_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_Prev_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_btn_Next_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_btn_Next_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_btn_Next_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_btn_Next_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_FriendsServerListView_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_FriendsServerListView_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_FriendsServerListView_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_FriendsServerListView_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.BndEvt__W_ServerBrowser_GlobalServerListView_K2Node_ComponentBoundEvent_7_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::BndEvt__W_ServerBrowser_GlobalServerListView_K2Node_ComponentBoundEvent_7_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "BndEvt__W_ServerBrowser_GlobalServerListView_K2Node_ComponentBoundEvent_7_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_ServerBrowser_C_BndEvt__W_ServerBrowser_GlobalServerListView_K2Node_ComponentBoundEvent_7_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.ExecuteUbergraph_W_ServerBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMainMenuGM*                 K2Node_DynamicCast_AsMain_Menu_GM                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowProfileUI_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_Button_C*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerListData*             K2Node_DynamicCast_AsServer_List_Data                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowser_C::ExecuteUbergraph_W_ServerBrowser(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsHovered, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMainMenuGM* K2Node_DynamicCast_AsMain_Menu_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShowProfileUI_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class FName K2Node_ComponentBoundEvent_OptionNameID, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, TArray<class UW_Button_C*>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered_1, class UServerListData* K2Node_DynamicCast_AsServer_List_Data, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "ExecuteUbergraph_W_ServerBrowser");

	Params::UW_ServerBrowser_C_ExecuteUbergraph_W_ServerBrowser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_GM = K2Node_DynamicCast_AsMain_Menu_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShowProfileUI_ReturnValue = CallFunc_ShowProfileUI_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered_1 = K2Node_ComponentBoundEvent_bIsHovered_1;
	Parms.K2Node_DynamicCast_AsServer_List_Data = K2Node_DynamicCast_AsServer_List_Data;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowser.W_ServerBrowser_C.OnCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ServerBrowser_C::OnCancelClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowser_C", "OnCancelClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


