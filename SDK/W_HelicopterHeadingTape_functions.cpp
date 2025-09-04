#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HelicopterHeadingTape.W_HelicopterHeadingTape_C
// (None)

class UClass* UW_HelicopterHeadingTape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HelicopterHeadingTape_C");

	return Clss;
}


// W_HelicopterHeadingTape_C W_HelicopterHeadingTape.Default__W_HelicopterHeadingTape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HelicopterHeadingTape_C* UW_HelicopterHeadingTape_C::GetDefaultObj()
{
	static class UW_HelicopterHeadingTape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HelicopterHeadingTape_C*>(UW_HelicopterHeadingTape_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HelicopterHeadingTape.W_HelicopterHeadingTape_C.UpdateHeading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Degree                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HelicopterHeadingTape_C::UpdateHeading(double Degree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HelicopterHeadingTape_C", "UpdateHeading");

	Params::UW_HelicopterHeadingTape_C_UpdateHeading_Params Parms{};

	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HelicopterHeadingTape.W_HelicopterHeadingTape_C.ExecuteUbergraph_W_HelicopterHeadingTape
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Degree                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HelicopterHeadingTape_C::ExecuteUbergraph_W_HelicopterHeadingTape(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, double K2Node_CustomEvent_Degree, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HelicopterHeadingTape_C", "ExecuteUbergraph_W_HelicopterHeadingTape");

	Params::UW_HelicopterHeadingTape_C_ExecuteUbergraph_W_HelicopterHeadingTape_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_Degree = K2Node_CustomEvent_Degree;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


