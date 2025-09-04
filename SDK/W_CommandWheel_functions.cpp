#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CommandWheel.W_CommandWheel_C
// (None)

class UClass* UW_CommandWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CommandWheel_C");

	return Clss;
}


// W_CommandWheel_C W_CommandWheel.Default__W_CommandWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CommandWheel_C* UW_CommandWheel_C::GetDefaultObj()
{
	static class UW_CommandWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CommandWheel_C*>(UW_CommandWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CommandWheel.W_CommandWheel_C.Update Icons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::Update_Icons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UW_WheelIcon_C* CallFunc_Array_Get_Item, class UW_WheelIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_WheelIcon_C* CallFunc_Array_Get_Item_2, class UW_WheelIcon_C* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "Update Icons");

	Params::UW_CommandWheel_C_Update_Icons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.Update Cursor Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::Update_Cursor_Visibility(class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "Update Cursor Visibility");

	Params::UW_CommandWheel_C_Update_Cursor_Visibility_Params Parms{};

	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.UpdateRadialMenu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSwatCommand>        Commands                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUMG_RadialMenu_C*           RadialMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              NewIconWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSwatCommand                CurrentCommand                                                   (Edit, BlueprintVisible)
// class UUMG_RadialMenu_C*           UpdatingRadial                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsInnerWheel                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddChildToRadialMenu_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSwatCommand                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWheelCardinalDirection CallFunc_GetDirectionFromIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommandWheelIconData       CallFunc_GetIconData_ReturnValue                                 (None)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::UpdateRadialMenu(TArray<struct FSwatCommand>& Commands, class UUMG_RadialMenu_C* RadialMenu, int32 SelectedIndex, class UW_WheelIcon_C* NewIconWidget, int32 CurrentIndex, const struct FSwatCommand& CurrentCommand, class UUMG_RadialMenu_C* UpdatingRadial, bool IsInnerWheel, int32 Temp_int_Array_Index_Variable, bool CallFunc_AddChildToRadialMenu_Success, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, const struct FSwatCommand& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, enum class EWheelCardinalDirection CallFunc_GetDirectionFromIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCommandWheelIconData& CallFunc_GetIconData_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_WheelIcon_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "UpdateRadialMenu");

	Params::UW_CommandWheel_C_UpdateRadialMenu_Params Parms{};

	Parms.Commands = Commands;
	Parms.RadialMenu = RadialMenu;
	Parms.SelectedIndex = SelectedIndex;
	Parms.NewIconWidget = NewIconWidget;
	Parms.CurrentIndex = CurrentIndex;
	Parms.CurrentCommand = CurrentCommand;
	Parms.UpdatingRadial = UpdatingRadial;
	Parms.IsInnerWheel = IsInnerWheel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_AddChildToRadialMenu_Success = CallFunc_AddChildToRadialMenu_Success;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetDirectionFromIndex_ReturnValue = CallFunc_GetDirectionFromIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIconData_ReturnValue = CallFunc_GetIconData_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.GetCurentIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentIndex_Valid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::GetCurentIndex(int32* CurrentIndex, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "GetCurentIndex");

	Params::UW_CommandWheel_C_GetCurentIndex_Params Parms{};

	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentIndex_Index = CallFunc_GetCurrentIndex_Index;
	Parms.CallFunc_GetCurrentIndex_Valid = CallFunc_GetCurrentIndex_Valid;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentIndex != nullptr)
		*CurrentIndex = Parms.CurrentIndex;

}


// Function W_CommandWheel.W_CommandWheel_C.UpdateWheelSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVector                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              NewSelection                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           Radial                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentIndex_Valid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_Index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentIndex_Valid_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_WheelIcon_C*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::UpdateWheelSelection(class UObject* Object, const struct FVector& InVector, class UW_WheelIcon_C* NewSelection, class UUMG_RadialMenu_C* Radial, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, int32 CallFunc_GetCurrentIndex_Index_1, bool CallFunc_GetCurrentIndex_Valid_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, class UW_WheelIcon_C* CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "UpdateWheelSelection");

	Params::UW_CommandWheel_C_UpdateWheelSelection_Params Parms{};

	Parms.Object = Object;
	Parms.InVector = InVector;
	Parms.NewSelection = NewSelection;
	Parms.Radial = Radial;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentIndex_Index = CallFunc_GetCurrentIndex_Index;
	Parms.CallFunc_GetCurrentIndex_Valid = CallFunc_GetCurrentIndex_Valid;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_GetCurrentIndex_Index_1 = CallFunc_GetCurrentIndex_Index_1;
	Parms.CallFunc_GetCurrentIndex_Valid_1 = CallFunc_GetCurrentIndex_Valid_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerSegments
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetInnerSegments(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerSegments");

	Params::UW_CommandWheel_C_SetInnerSegments_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetOuterSegments
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetOuterSegments(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetOuterSegments");

	Params::UW_CommandWheel_C_SetOuterSegments_Params Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerWheelDirection
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::SetInnerWheelDirection(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerWheelDirection");

	Params::UW_CommandWheel_C_SetInnerWheelDirection_Params Parms{};

	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.SetInnerCommands
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FSwatCommand>        Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_CommandWheel_C::SetInnerCommands(TArray<struct FSwatCommand>& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "SetInnerCommands");

	Params::UW_CommandWheel_C_SetInnerCommands_Params Parms{};

	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.UpdateOuterWheel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSwatCommand>        Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SelectedIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::UpdateOuterWheel(const struct FVector& Direction, TArray<struct FSwatCommand>& Options, int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "UpdateOuterWheel");

	Params::UW_CommandWheel_C_UpdateOuterWheel_Params Parms{};

	Parms.Direction = Direction;
	Parms.Options = Options;
	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.DisableOuterWheel
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::DisableOuterWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "DisableOuterWheel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.CommandWheelDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::CommandWheelDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "CommandWheelDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.CommandWheelEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::CommandWheelEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "CommandWheelEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.UpdateIconColors
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::UpdateIconColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "UpdateIconColors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.ForceSetInDeadzone
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInDeadzone                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::ForceSetInDeadzone(bool bInDeadzone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "ForceSetInDeadzone");

	Params::UW_CommandWheel_C_ForceSetInDeadzone_Params Parms{};

	Parms.bInDeadzone = bInDeadzone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.AnimateWheelUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_CommandWheel_C::AnimateWheelUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "AnimateWheelUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CommandWheel.W_CommandWheel_C.OnUpdateWheelColor
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ETeamType               Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::OnUpdateWheelColor(enum class ETeamType Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "OnUpdateWheelColor");

	Params::UW_CommandWheel_C_OnUpdateWheelColor_Params Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CommandWheel.W_CommandWheel_C.ExecuteUbergraph_W_CommandWheel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_num_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_num                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Direction_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSwatCommand>        K2Node_Event_Options_1                                           (ConstParm, ReferenceParm)
// struct FVector                     K2Node_Event_Direction                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSwatCommand>        K2Node_Event_Options                                             (ConstParm, ReferenceParm)
// int32                              K2Node_Event_SelectedIndex                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInDeadzone                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               K2Node_Event_Team                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_3                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_4                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_5                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_6                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_C*           K2Node_DynamicCast_AsUMG_Radial_Menu_7                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_DoubleToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToLinearColor_InDouble_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CommandWheel_C::ExecuteUbergraph_W_CommandWheel(int32 EntryPoint, int32 K2Node_Event_num_1, int32 K2Node_Event_num, const struct FVector& K2Node_Event_Direction_1, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu, bool K2Node_DynamicCast_bSuccess, TArray<struct FSwatCommand>& K2Node_Event_Options_1, const struct FVector& K2Node_Event_Direction, TArray<struct FSwatCommand>& K2Node_Event_Options, int32 K2Node_Event_SelectedIndex, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_bInDeadzone, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, enum class ETeamType K2Node_Event_Team, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_2, bool K2Node_DynamicCast_bSuccess_2, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_3, bool K2Node_DynamicCast_bSuccess_3, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_4, bool K2Node_DynamicCast_bSuccess_4, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_5, bool K2Node_DynamicCast_bSuccess_5, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_6, bool K2Node_DynamicCast_bSuccess_6, class UUMG_RadialMenu_C* K2Node_DynamicCast_AsUMG_Radial_Menu_7, bool K2Node_DynamicCast_bSuccess_7, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, enum class ETeamType Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& CallFunc_Conv_DoubleToLinearColor_ReturnValue, float CallFunc_BreakColor_R_2, float CallFunc_BreakColor_G_2, float CallFunc_BreakColor_B_2, float CallFunc_BreakColor_A_2, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_BreakColor_R_3, float CallFunc_BreakColor_G_3, float CallFunc_BreakColor_B_3, float CallFunc_BreakColor_A_3, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, double CallFunc_Conv_DoubleToLinearColor_InDouble_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CommandWheel_C", "ExecuteUbergraph_W_CommandWheel");

	Params::UW_CommandWheel_C_ExecuteUbergraph_W_CommandWheel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_num_1 = K2Node_Event_num_1;
	Parms.K2Node_Event_num = K2Node_Event_num;
	Parms.K2Node_Event_Direction_1 = K2Node_Event_Direction_1;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu = K2Node_DynamicCast_AsUMG_Radial_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Options_1 = K2Node_Event_Options_1;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_Options = K2Node_Event_Options;
	Parms.K2Node_Event_SelectedIndex = K2Node_Event_SelectedIndex;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_1 = K2Node_DynamicCast_AsUMG_Radial_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Event_bInDeadzone = K2Node_Event_bInDeadzone;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.K2Node_Event_Team = K2Node_Event_Team;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_2 = K2Node_DynamicCast_AsUMG_Radial_Menu_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_3 = K2Node_DynamicCast_AsUMG_Radial_Menu_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_4 = K2Node_DynamicCast_AsUMG_Radial_Menu_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_5 = K2Node_DynamicCast_AsUMG_Radial_Menu_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_6 = K2Node_DynamicCast_AsUMG_Radial_Menu_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsUMG_Radial_Menu_7 = K2Node_DynamicCast_AsUMG_Radial_Menu_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_1 = CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_BreakColor_R_1 = CallFunc_BreakColor_R_1;
	Parms.CallFunc_BreakColor_G_1 = CallFunc_BreakColor_G_1;
	Parms.CallFunc_BreakColor_B_1 = CallFunc_BreakColor_B_1;
	Parms.CallFunc_BreakColor_A_1 = CallFunc_BreakColor_A_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_DoubleToLinearColor_ReturnValue = CallFunc_Conv_DoubleToLinearColor_ReturnValue;
	Parms.CallFunc_BreakColor_R_2 = CallFunc_BreakColor_R_2;
	Parms.CallFunc_BreakColor_G_2 = CallFunc_BreakColor_G_2;
	Parms.CallFunc_BreakColor_B_2 = CallFunc_BreakColor_B_2;
	Parms.CallFunc_BreakColor_A_2 = CallFunc_BreakColor_A_2;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_BreakColor_R_3 = CallFunc_BreakColor_R_3;
	Parms.CallFunc_BreakColor_G_3 = CallFunc_BreakColor_G_3;
	Parms.CallFunc_BreakColor_B_3 = CallFunc_BreakColor_B_3;
	Parms.CallFunc_BreakColor_A_3 = CallFunc_BreakColor_A_3;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1 = CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToLinearColor_InDouble_ImplicitCast = CallFunc_Conv_DoubleToLinearColor_InDouble_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


