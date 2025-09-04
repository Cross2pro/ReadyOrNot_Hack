#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadingScreen.W_LoadingScreen_C
// (None)

class UClass* UW_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadingScreen_C");

	return Clss;
}


// W_LoadingScreen_C W_LoadingScreen.Default__W_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadingScreen_C* UW_LoadingScreen_C::GetDefaultObj()
{
	static class UW_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadingScreen_C*>(UW_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadingScreen.W_LoadingScreen_C.SetLoadingScreenConsole
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadingScreen_C::SetLoadingScreenConsole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "SetLoadingScreenConsole");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadingScreen.W_LoadingScreen_C.GetLoadingProgressText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UW_LoadingScreen_C::GetLoadingProgressText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "GetLoadingProgressText");

	Params::UW_LoadingScreen_C_GetLoadingProgressText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UW_LoadingScreen_C::UpdateHeaderText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateHeaderText");

	Params::UW_LoadingScreen_C_UpdateHeaderText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::GetText_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "GetText_0");

	Params::UW_LoadingScreen_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.Get_TextLoading_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::Get_TextLoading_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Get_TextLoading_Text_0");

	Params::UW_LoadingScreen_C_Get_TextLoading_Text_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.Get_ServerName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_LoadingScreen_C::Get_ServerName_Text_0(const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Get_ServerName_Text_0");

	Params::UW_LoadingScreen_C_Get_ServerName_Text_0_Params Parms{};

	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateLoadingScreenPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewPercentage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadingScreen_C::UpdateLoadingScreenPercentage(double NewPercentage, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateLoadingScreenPercentage");

	Params::UW_LoadingScreen_C_UpdateLoadingScreenPercentage_Params Parms{};

	Parms.NewPercentage = NewPercentage;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadingScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Tick");

	Params::UW_LoadingScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.UpdateTips
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadingScreen_C::UpdateTips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "UpdateTips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadingScreen.W_LoadingScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadingScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "PreConstruct");

	Params::UW_LoadingScreen_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadingScreen.W_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadingScreen.W_LoadingScreen_C.ExecuteUbergraph_W_LoadingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLoadingPercentage_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMap                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutMode                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLoadingScreenDetails_OutSessionName                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLoadingProgressText_ReturnValue                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadingScreen_C::ExecuteUbergraph_W_LoadingScreen(int32 EntryPoint, bool CallFunc_ShouldShowLoadingPercentage_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetLoadingScreenDetails_OutMap, const class FString& CallFunc_GetLoadingScreenDetails_OutMode, const class FString& CallFunc_GetLoadingScreenDetails_OutSessionName, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetLoadingProgressText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadingScreen_C", "ExecuteUbergraph_W_LoadingScreen");

	Params::UW_LoadingScreen_C_ExecuteUbergraph_W_LoadingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldShowLoadingPercentage_ReturnValue = CallFunc_ShouldShowLoadingPercentage_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLoadingScreenDetails_OutMap = CallFunc_GetLoadingScreenDetails_OutMap;
	Parms.CallFunc_GetLoadingScreenDetails_OutMode = CallFunc_GetLoadingScreenDetails_OutMode;
	Parms.CallFunc_GetLoadingScreenDetails_OutSessionName = CallFunc_GetLoadingScreenDetails_OutSessionName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetLoadingProgressText_ReturnValue = CallFunc_GetLoadingProgressText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


