#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DifficultySelect.W_DifficultySelect_C
// (None)

class UClass* UW_DifficultySelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DifficultySelect_C");

	return Clss;
}


// W_DifficultySelect_C W_DifficultySelect.Default__W_DifficultySelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DifficultySelect_C* UW_DifficultySelect_C::GetDefaultObj()
{
	static class UW_DifficultySelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DifficultySelect_C*>(UW_DifficultySelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DifficultySelect.W_DifficultySelect_C.PopulateDifficulties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        UsedDifficulties                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetOrderedDifficulties_ReturnValue                      (ReferenceParm)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDifficultyData             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::PopulateDifficulties(const TArray<struct FGameplayTag>& UsedDifficulties, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, TArray<struct FGameplayTag>& CallFunc_GetOrderedDifficulties_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "PopulateDifficulties");

	Params::UW_DifficultySelect_C_PopulateDifficulties_Params Parms{};

	Parms.UsedDifficulties = UsedDifficulties;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetOrderedDifficulties_ReturnValue = CallFunc_GetOrderedDifficulties_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DifficultySelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DifficultySelect.W_DifficultySelect_C.BndEvt__W_DifficultySelect_w_Dropdown_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::BndEvt__W_DifficultySelect_w_Dropdown_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "BndEvt__W_DifficultySelect_w_Dropdown_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature");

	Params::UW_DifficultySelect_C_BndEvt__W_DifficultySelect_w_Dropdown_K2Node_ComponentBoundEvent_0_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "PreConstruct");

	Params::UW_DifficultySelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGamepad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::OnInputMethodChanged(bool UseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "OnInputMethodChanged");

	Params::UW_DifficultySelect_C_OnInputMethodChanged_Params Parms{};

	Parms.UseGamepad = UseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.BndEvt__W_DifficultySelect_W_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::BndEvt__W_DifficultySelect_W_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(class FName OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "BndEvt__W_DifficultySelect_W_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature");

	Params::UW_DifficultySelect_C_BndEvt__W_DifficultySelect_W_Carousel_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::OnOptionSelected(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "OnOptionSelected");

	Params::UW_DifficultySelect_C_OnOptionSelected_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "InputMethodChanged");

	Params::UW_DifficultySelect_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.Stop Listening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DifficultySelect_C::Stop_Listening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "Stop Listening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DifficultySelect.W_DifficultySelect_C.Start Listening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DifficultySelect_C::Start_Listening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "Start Listening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DifficultySelect.W_DifficultySelect_C.ExecuteUbergraph_W_DifficultySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseGamepad                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OptionID                                      (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_RequestGameplayTagFromString_OutTag                     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequestGameplayTagFromString_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDifficultyData             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDifficultyData             CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::ExecuteUbergraph_W_DifficultySelect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_1, bool Temp_bool_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_UseGamepad, class FName K2Node_ComponentBoundEvent_OptionID, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& K2Node_CustomEvent_OptionID, const struct FGameplayTag& CallFunc_RequestGameplayTagFromString_OutTag, bool CallFunc_RequestGameplayTagFromString_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UWidget* K2Node_Select_Default, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class FName CallFunc_GetTagName_ReturnValue, const struct FDifficultyData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "ExecuteUbergraph_W_DifficultySelect");

	Params::UW_DifficultySelect_C_ExecuteUbergraph_W_DifficultySelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionID_1 = K2Node_ComponentBoundEvent_OptionID_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_UseGamepad = K2Node_CustomEvent_UseGamepad;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_CustomEvent_OptionID = K2Node_CustomEvent_OptionID;
	Parms.CallFunc_RequestGameplayTagFromString_OutTag = CallFunc_RequestGameplayTagFromString_OutTag;
	Parms.CallFunc_RequestGameplayTagFromString_ReturnValue = CallFunc_RequestGameplayTagFromString_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultySelect.W_DifficultySelect_C.OnDifficultySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SelectedDifficulty                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_DifficultySelect_C::OnDifficultySelected__DelegateSignature(const struct FGameplayTag& SelectedDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultySelect_C", "OnDifficultySelected__DelegateSignature");

	Params::UW_DifficultySelect_C_OnDifficultySelected__DelegateSignature_Params Parms{};

	Parms.SelectedDifficulty = SelectedDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}

}


