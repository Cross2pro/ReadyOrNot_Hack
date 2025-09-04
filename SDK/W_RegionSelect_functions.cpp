#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RegionSelect.W_RegionSelect_C
// (None)

class UClass* UW_RegionSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RegionSelect_C");

	return Clss;
}


// W_RegionSelect_C W_RegionSelect.Default__W_RegionSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RegionSelect_C* UW_RegionSelect_C::GetDefaultObj()
{
	static class UW_RegionSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RegionSelect_C*>(UW_RegionSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RegionSelect.W_RegionSelect_C.UpdateWorldwideButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::UpdateWorldwideButtonState(int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "UpdateWorldwideButtonState");

	Params::UW_RegionSelect_C_UpdateWorldwideButtonState_Params Parms{};

	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.ApplySelectedRegions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetHostRegion_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer       (None)
// bool                               CallFunc_SetPreferredRegions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPreferredRegions_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags_1                (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetHostRegion_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::ApplySelectedRegions(bool CallFunc_SetHostRegion_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer, bool CallFunc_SetPreferredRegions_ReturnValue, bool CallFunc_SetPreferredRegions_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_SetHostRegion_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "ApplySelectedRegions");

	Params::UW_RegionSelect_C_ApplySelectedRegions_Params Parms{};

	Parms.CallFunc_SetHostRegion_ReturnValue = CallFunc_SetHostRegion_ReturnValue;
	Parms.CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer = CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer;
	Parms.CallFunc_SetPreferredRegions_ReturnValue = CallFunc_SetPreferredRegions_ReturnValue;
	Parms.CallFunc_SetPreferredRegions_ReturnValue_1 = CallFunc_SetPreferredRegions_ReturnValue_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags_1 = CallFunc_BreakGameplayTagContainer_GameplayTags_1;
	Parms.CallFunc_Array_IsEmpty_ReturnValue_1 = CallFunc_Array_IsEmpty_ReturnValue_1;
	Parms.CallFunc_SetHostRegion_ReturnValue_1 = CallFunc_SetHostRegion_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.GetAllRegionButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UW_DifficultyModalEntry_C*>RegionButtons                                                    (Parm, OutParm, ContainsInstancedReference)
// TArray<class UW_DifficultyModalEntry_C*>ButtonArray                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModalEntry_C*   K2Node_DynamicCast_AsW_Difficulty_Modal_Entry                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::GetAllRegionButtons(TArray<class UW_DifficultyModalEntry_C*>* RegionButtons, const TArray<class UW_DifficultyModalEntry_C*>& ButtonArray, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UW_DifficultyModalEntry_C* K2Node_DynamicCast_AsW_Difficulty_Modal_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "GetAllRegionButtons");

	Params::UW_RegionSelect_C_GetAllRegionButtons_Params Parms{};

	Parms.ButtonArray = ButtonArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Difficulty_Modal_Entry = K2Node_DynamicCast_AsW_Difficulty_Modal_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RegionButtons != nullptr)
		*RegionButtons = std::move(Parms.RegionButtons);

}


// Function W_RegionSelect.W_RegionSelect_C.SetupTextAndRegions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHosting                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UW_RegionSelect_C::SetupTextAndRegions(bool bIsHosting, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "SetupTextAndRegions");

	Params::UW_RegionSelect_C_SetupTextAndRegions_Params Parms{};

	Parms.bIsHosting = bIsHosting;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "PreConstruct");

	Params::UW_RegionSelect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_RegionSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RegionSelect.W_RegionSelect_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "InputMethodChanged");

	Params::UW_RegionSelect_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGamepad                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::OnInputMethodChanged(bool UseGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "OnInputMethodChanged");

	Params::UW_RegionSelect_C_OnInputMethodChanged_Params Parms{};

	Parms.UseGamepad = UseGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.PopulateSearchRegions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RegionSelect_C::PopulateSearchRegions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "PopulateSearchRegions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RegionSelect.W_RegionSelect_C.BndEvt__W_RegionSelect_btn_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::BndEvt__W_RegionSelect_btn_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "BndEvt__W_RegionSelect_btn_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_RegionSelect_C_BndEvt__W_RegionSelect_btn_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.BndEvt__W_RegionSelect_btn_Ok_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::BndEvt__W_RegionSelect_btn_Ok_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "BndEvt__W_RegionSelect_btn_Ok_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_RegionSelect_C_BndEvt__W_RegionSelect_btn_Ok_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.BndEvt__W_RegionSelect_W_DifficultyModalEntry_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EntryTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::BndEvt__W_RegionSelect_W_DifficultyModalEntry_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(bool bEnabled, const struct FGameplayTag& EntryTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "BndEvt__W_RegionSelect_W_DifficultyModalEntry_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");

	Params::UW_RegionSelect_C_BndEvt__W_RegionSelect_W_DifficultyModalEntry_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.EntryTag = EntryTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.OnRegionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EntryTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::OnRegionSelected(bool bEnabled, const struct FGameplayTag& EntryTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "OnRegionSelected");

	Params::UW_RegionSelect_C_OnRegionSelected_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.EntryTag = EntryTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.ExecuteUbergraph_W_RegionSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPreferredRegions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseGamepad                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer       (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextFromStringTable_ReturnValue                         (None)
// bool                               K2Node_ComponentBoundEvent_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_ComponentBoundEvent_EntryTag                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetPreferredRegions_RegionsTagContainer                 (None)
// bool                               CallFunc_GetPreferredRegions_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetHostRegion_RegionTag                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHostRegion_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               K2Node_CustomEvent_bEnabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EntryTag                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_DifficultyModalEntry_C*>CallFunc_GetAllRegionButtons_RegionButtons                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UW_DifficultyModalEntry_C*>CallFunc_GetAllRegionButtons_RegionButtons_1                     (ReferenceParm, ContainsInstancedReference)
// class UW_DifficultyModalEntry_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModalEntry_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags_1                (ReferenceParm)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags_2                (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer_1     (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModalEntry_C*   K2Node_DynamicCast_AsW_Difficulty_Modal_Entry                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetHostRegion_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DifficultyModalEntry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_RegionSelect_C::ExecuteUbergraph_W_RegionSelect(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_SetPreferredRegions_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_UseGamepad, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_TextFromStringTable_ReturnValue, bool K2Node_ComponentBoundEvent_bEnabled, const struct FGameplayTag& K2Node_ComponentBoundEvent_EntryTag, const struct FGameplayTagContainer& CallFunc_GetPreferredRegions_RegionsTagContainer, bool CallFunc_GetPreferredRegions_ReturnValue, const struct FGameplayTag& CallFunc_GetHostRegion_RegionTag, bool CallFunc_GetHostRegion_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool K2Node_CustomEvent_bEnabled, const struct FGameplayTag& K2Node_CustomEvent_EntryTag, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_RemoveGameplayTag_ReturnValue, TArray<class UW_DifficultyModalEntry_C*>& CallFunc_GetAllRegionButtons_RegionButtons, TArray<class UW_DifficultyModalEntry_C*>& CallFunc_GetAllRegionButtons_RegionButtons_1, class UW_DifficultyModalEntry_C* CallFunc_Array_Get_Item_1, class UW_DifficultyModalEntry_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_2, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_DifficultyModalEntry_C* K2Node_DynamicCast_AsW_Difficulty_Modal_Entry, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_SetHostRegion_ReturnValue, class UW_DifficultyModalEntry_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "ExecuteUbergraph_W_RegionSelect");

	Params::UW_RegionSelect_C_ExecuteUbergraph_W_RegionSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_SetPreferredRegions_ReturnValue = CallFunc_SetPreferredRegions_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UseGamepad = K2Node_CustomEvent_UseGamepad;
	Parms.CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer = CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_TextFromStringTable_ReturnValue = CallFunc_TextFromStringTable_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bEnabled = K2Node_ComponentBoundEvent_bEnabled;
	Parms.K2Node_ComponentBoundEvent_EntryTag = K2Node_ComponentBoundEvent_EntryTag;
	Parms.CallFunc_GetPreferredRegions_RegionsTagContainer = CallFunc_GetPreferredRegions_RegionsTagContainer;
	Parms.CallFunc_GetPreferredRegions_ReturnValue = CallFunc_GetPreferredRegions_ReturnValue;
	Parms.CallFunc_GetHostRegion_RegionTag = CallFunc_GetHostRegion_RegionTag;
	Parms.CallFunc_GetHostRegion_ReturnValue = CallFunc_GetHostRegion_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.K2Node_CustomEvent_bEnabled = K2Node_CustomEvent_bEnabled;
	Parms.K2Node_CustomEvent_EntryTag = K2Node_CustomEvent_EntryTag;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_GetAllRegionButtons_RegionButtons = CallFunc_GetAllRegionButtons_RegionButtons;
	Parms.CallFunc_GetAllRegionButtons_RegionButtons_1 = CallFunc_GetAllRegionButtons_RegionButtons_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags_1 = CallFunc_BreakGameplayTagContainer_GameplayTags_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags_2 = CallFunc_BreakGameplayTagContainer_GameplayTags_2;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue_1 = CallFunc_Array_IsEmpty_ReturnValue_1;
	Parms.CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer_1 = CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Difficulty_Modal_Entry = K2Node_DynamicCast_AsW_Difficulty_Modal_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_SetHostRegion_ReturnValue = CallFunc_SetHostRegion_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RegionSelect.W_RegionSelect_C.wtf__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RegionSelect_C::Wtf__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "wtf__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RegionSelect.W_RegionSelect_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RegionSelect_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RegionSelect_C", "OnCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


