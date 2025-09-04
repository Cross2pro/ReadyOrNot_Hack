#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C
// (None)

class UClass* UW_PreMission_PlanningMap_Line_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_PlanningMap_Line_C");

	return Clss;
}


// W_PreMission_PlanningMap_Line_C W_PreMission_PlanningMap_Line.Default__W_PreMission_PlanningMap_Line_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_PlanningMap_Line_C* UW_PreMission_PlanningMap_Line_C::GetDefaultObj()
{
	static class UW_PreMission_PlanningMap_Line_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_PlanningMap_Line_C*>(UW_PreMission_PlanningMap_Line_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetColor");

	Params::UW_PreMission_PlanningMap_Line_C_SetColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetColorByPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerState*      PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetColorByPlayerState(class AReadyOrNotPlayerState* PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetColorByPlayerState");

	Params::UW_PreMission_PlanningMap_Line_C_SetColorByPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ScaleThickness(double Multiplier, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ScaleThickness");

	Params::UW_PreMission_PlanningMap_Line_C_ScaleThickness_Params Parms{};

	Parms.Multiplier = Multiplier;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             StartOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EndOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Right_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Left_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetOffset(double StartOffset, double EndOffset, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetOffset");

	Params::UW_PreMission_PlanningMap_Line_C_SetOffset_Params Parms{};

	Parms.StartOffset = StartOffset;
	Parms.EndOffset = EndOffset;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Right_ImplicitCast = K2Node_MakeStruct_Right_ImplicitCast;
	Parms.K2Node_MakeStruct_Left_ImplicitCast = K2Node_MakeStruct_Left_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Length                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetLength(double Length, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetLength");

	Params::UW_PreMission_PlanningMap_Line_C_SetLength_Params Parms{};

	Parms.Length = Length;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::SetAngle(double Angle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "SetAngle");

	Params::UW_PreMission_PlanningMap_Line_C_SetAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "PreConstruct");

	Params::UW_PreMission_PlanningMap_Line_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_PlanningMap_Line_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "Tick");

	Params::UW_PreMission_PlanningMap_Line_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ScaleLineWeightByZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentZoom                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ScaleLineWeightByZoom(double CurrentZoom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ScaleLineWeightByZoom");

	Params::UW_PreMission_PlanningMap_Line_C_ScaleLineWeightByZoom_Params Parms{};

	Parms.CurrentZoom = CurrentZoom;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.UpdatePlanningTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlanningLineTeam       Team                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::UpdatePlanningTeam(enum class EPlanningLineTeam Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "UpdatePlanningTeam");

	Params::UW_PreMission_PlanningMap_Line_C_UpdatePlanningTeam_Params Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C.ExecuteUbergraph_W_PreMission_PlanningMap_Line
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_CurrentZoom                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlanningLineTeam       K2Node_CustomEvent_Team                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_PlanningMap_Line_C::ExecuteUbergraph_W_PreMission_PlanningMap_Line(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_Event_CurrentZoom, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, enum class EPlanningLineTeam K2Node_CustomEvent_Team, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_PlanningMap_Line_C", "ExecuteUbergraph_W_PreMission_PlanningMap_Line");

	Params::UW_PreMission_PlanningMap_Line_C_ExecuteUbergraph_W_PreMission_PlanningMap_Line_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_CurrentZoom = K2Node_Event_CurrentZoom;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_Team = K2Node_CustomEvent_Team;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


