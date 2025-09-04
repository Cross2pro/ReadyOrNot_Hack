#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C
// (None)

class UClass* UANIMBP_Preview_Char_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANIMBP_Preview_Char_Body_C");

	return Clss;
}


// ANIMBP_Preview_Char_Body_C ANIMBP_Preview_Char_Body.Default__ANIMBP_Preview_Char_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANIMBP_Preview_Char_Body_C* UANIMBP_Preview_Char_Body_C::GetDefaultObj()
{
	static class UANIMBP_Preview_Char_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANIMBP_Preview_Char_Body_C*>(UANIMBP_Preview_Char_Body_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UANIMBP_Preview_Char_Body_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Body_C", "AnimGraph");

	Params::UANIMBP_Preview_Char_Body_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Preview_Char_Body_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Body_C", "BlueprintUpdateAnimation");

	Params::UANIMBP_Preview_Char_Body_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C.ExecuteUbergraph_ANIMBP_Preview_Char_Body
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANIMBP_Preview_Char_Body_C::ExecuteUbergraph_ANIMBP_Preview_Char_Body(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSimulatingPhysics_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANIMBP_Preview_Char_Body_C", "ExecuteUbergraph_ANIMBP_Preview_Char_Body");

	Params::UANIMBP_Preview_Char_Body_C_ExecuteUbergraph_ANIMBP_Preview_Char_Body_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPreview_Character_Template = K2Node_DynamicCast_AsPreview_Character_Template;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsSimulatingPhysics_ReturnValue = CallFunc_IsSimulatingPhysics_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


