#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C
// (None)

class UClass* UW_Stats_Missions_Favorite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Stats_Missions_Favorite_C");

	return Clss;
}


// W_Stats_Missions_Favorite_C W_Stats_Missions_Favorite.Default__W_Stats_Missions_Favorite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Stats_Missions_Favorite_C* UW_Stats_Missions_Favorite_C::GetDefaultObj()
{
	static class UW_Stats_Missions_Favorite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Stats_Missions_Favorite_C*>(UW_Stats_Missions_Favorite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "GetFocusTarget");

	Params::UW_Stats_Missions_Favorite_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "BackPage");

	Params::UW_Stats_Missions_Favorite_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.GetLevelContent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      LevelProgressionTagPrefix                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        LevelName                                                        (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   LevelPicture                                                     (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Picture                                                          (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Name                                                             (Edit, BlueprintVisible)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLevelDataLookupTable>CallFunc_GetLevels_ReturnValue                                   (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::GetLevelContent(const class FString& LevelProgressionTagPrefix, class FText* LevelName, TSoftObjectPtr<class UTexture2D>* LevelPicture, TSoftObjectPtr<class UTexture2D> Picture, class FText Name, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLevelDataLookupTable>& CallFunc_GetLevels_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLevelDataLookupTable& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "GetLevelContent");

	Params::UW_Stats_Missions_Favorite_C_GetLevelContent_Params Parms{};

	Parms.LevelProgressionTagPrefix = LevelProgressionTagPrefix;
	Parms.Picture = Picture;
	Parms.Name = Name;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLevels_ReturnValue = CallFunc_GetLevels_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = Parms.LevelName;

	if (LevelPicture != nullptr)
		*LevelPicture = Parms.LevelPicture;

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_Missions_Favorite_C::UpdateStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "UpdateStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StatID                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ERONStatType            Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              Temp_int64_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFriendStatString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelContent_LevelName                               (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLevelContent_LevelPicture                            (UObjectWrapper, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStatString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelContent_LevelName_1                             (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLevelContent_LevelPicture_1                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatDefinition             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)

void UW_Stats_Missions_Favorite_C::UpdateStats(const class FString& StatID, class FText Temp_text_Variable, const class FString& Temp_string_Variable, enum class ERONStatType Temp_wildcard_Variable, int64 Temp_int64_Variable, const class FString& Temp_string_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, const class FString& CallFunc_GetFriendStatString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_GetLevelContent_LevelName, TSoftObjectPtr<class UTexture2D> CallFunc_GetLevelContent_LevelPicture, class FText K2Node_Select_Default, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, const class FString& CallFunc_GetStatString_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, class FText CallFunc_GetLevelContent_LevelName_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetLevelContent_LevelPicture_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "UpdateStats");

	Params::UW_Stats_Missions_Favorite_C_UpdateStats_Params Parms{};

	Parms.StatID = StatID;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_int64_Variable = Temp_int64_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_GetFriendStatString_ReturnValue = CallFunc_GetFriendStatString_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetLevelContent_LevelName = CallFunc_GetLevelContent_LevelName;
	Parms.CallFunc_GetLevelContent_LevelPicture = CallFunc_GetLevelContent_LevelPicture;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_GetStatString_ReturnValue = CallFunc_GetStatString_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_GetLevelContent_LevelName_1 = CallFunc_GetLevelContent_LevelName_1;
	Parms.CallFunc_GetLevelContent_LevelPicture_1 = CallFunc_GetLevelContent_LevelPicture_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "Reveal");

	Params::UW_Stats_Missions_Favorite_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "Hide");

	Params::UW_Stats_Missions_Favorite_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "SetInputMode");

	Params::UW_Stats_Missions_Favorite_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "ChangePage");

	Params::UW_Stats_Missions_Favorite_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Stats_Missions_Favorite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.CompareWithFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Stats_Missions_Favorite_C::CompareWithFriend(const struct FFriend& Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "CompareWithFriend");

	Params::UW_Stats_Missions_Favorite_C_CompareWithFriend_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.CancelCompare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_Missions_Favorite_C::CancelCompare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "CancelCompare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.OnStatsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_Missions_Favorite_C::OnStatsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "OnStatsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Stats_Missions_Favorite_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.OnStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::OnStatChanged(const class FString& StatID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "OnStatChanged");

	Params::UW_Stats_Missions_Favorite_C_OnStatChanged_Params Parms{};

	Parms.StatID = StatID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_Missions_Favorite.W_Stats_Missions_Favorite_C.ExecuteUbergraph_W_Stats_Missions_Favorite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFriend                     K2Node_Event_Friend                                              (None)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_StatID                                              (ZeroConstructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_Missions_Favorite_C::ExecuteUbergraph_W_Stats_Missions_Favorite(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FFriend& K2Node_Event_Friend, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Event_StatID, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInitialized_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_Missions_Favorite_C", "ExecuteUbergraph_W_Stats_Missions_Favorite");

	Params::UW_Stats_Missions_Favorite_C_ExecuteUbergraph_W_Stats_Missions_Favorite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_Friend = K2Node_Event_Friend;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_StatID = K2Node_Event_StatID;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInitialized_ReturnValue = CallFunc_IsInitialized_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


