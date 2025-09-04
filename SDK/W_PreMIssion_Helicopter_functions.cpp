#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C
// (None)

class UClass* UW_PreMIssion_Helicopter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMIssion_Helicopter_C");

	return Clss;
}


// W_PreMIssion_Helicopter_C W_PreMIssion_Helicopter.Default__W_PreMIssion_Helicopter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMIssion_Helicopter_C* UW_PreMIssion_Helicopter_C::GetDefaultObj()
{
	static class UW_PreMIssion_Helicopter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMIssion_Helicopter_C*>(UW_PreMIssion_Helicopter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_PreMIssion_Helicopter_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMIssion_Helicopter_C", "BP_GetDesiredFocusTarget");

	Params::UW_PreMIssion_Helicopter_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_PreMIssion_Helicopter_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMIssion_Helicopter_C", "OnKeyDown");

	Params::UW_PreMIssion_Helicopter_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C.OnRenderTargetSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_PreMIssion_Helicopter_C::OnRenderTargetSet(class UTextureRenderTarget2D* InRenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMIssion_Helicopter_C", "OnRenderTargetSet");

	Params::UW_PreMIssion_Helicopter_C_OnRenderTargetSet_Params Parms{};

	Parms.InRenderTarget = InRenderTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMIssion_Helicopter_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMIssion_Helicopter_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMIssion_Helicopter.W_PreMIssion_Helicopter_C.ExecuteUbergraph_W_PreMIssion_Helicopter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      K2Node_Event_InRenderTarget                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHelicopter*                 CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMIssion_Helicopter_C::ExecuteUbergraph_W_PreMIssion_Helicopter(int32 EntryPoint, class UTextureRenderTarget2D* K2Node_Event_InRenderTarget, bool CallFunc_IsValid_ReturnValue, class AHelicopter* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMIssion_Helicopter_C", "ExecuteUbergraph_W_PreMIssion_Helicopter");

	Params::UW_PreMIssion_Helicopter_C_ExecuteUbergraph_W_PreMIssion_Helicopter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InRenderTarget = K2Node_Event_InRenderTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


