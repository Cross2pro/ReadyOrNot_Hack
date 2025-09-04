#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BlockList.W_BlockList_C
// (None)

class UClass* UW_BlockList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BlockList_C");

	return Clss;
}


// W_BlockList_C W_BlockList.Default__W_BlockList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BlockList_C* UW_BlockList_C::GetDefaultObj()
{
	static class UW_BlockList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BlockList_C*>(UW_BlockList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BlockList.W_BlockList_C.UnbanPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlockListData*              K2Node_DynamicCast_AsBlock_List_Data                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BlockList_C::UnbanPlayer(const class FString& PlayerId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBlockListData* K2Node_DynamicCast_AsBlock_List_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BlockList_C", "UnbanPlayer");

	Params::UW_BlockList_C_UnbanPlayer_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBlock_List_Data = K2Node_DynamicCast_AsBlock_List_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BlockList.W_BlockList_C.UpdateBlockList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BlockList_C::UpdateBlockList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BlockList_C", "UpdateBlockList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BlockList.W_BlockList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_BlockList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BlockList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BlockList.W_BlockList_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_BlockList_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BlockList_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BlockList.W_BlockList_C.ExecuteUbergraph_W_BlockList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BlockList_C::ExecuteUbergraph_W_BlockList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BlockList_C", "ExecuteUbergraph_W_BlockList");

	Params::UW_BlockList_C_ExecuteUbergraph_W_BlockList_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


