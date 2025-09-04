#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_QuickPlay_Acknowledgement.W_QuickPlay_Acknowledgement_C
// (None)

class UClass* UW_QuickPlay_Acknowledgement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_QuickPlay_Acknowledgement_C");

	return Clss;
}


// W_QuickPlay_Acknowledgement_C W_QuickPlay_Acknowledgement.Default__W_QuickPlay_Acknowledgement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_QuickPlay_Acknowledgement_C* UW_QuickPlay_Acknowledgement_C::GetDefaultObj()
{
	static class UW_QuickPlay_Acknowledgement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_QuickPlay_Acknowledgement_C*>(UW_QuickPlay_Acknowledgement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_QuickPlay_Acknowledgement.W_QuickPlay_Acknowledgement_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_QuickPlay_Acknowledgement_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuickPlay_Acknowledgement_C", "BP_GetDesiredFocusTarget");

	Params::UW_QuickPlay_Acknowledgement_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_QuickPlay_Acknowledgement.W_QuickPlay_Acknowledgement_C.BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_QuickPlay_Acknowledgement_C::BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuickPlay_Acknowledgement_C", "BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UW_QuickPlay_Acknowledgement_C_BndEvt__W_CommanderIntro_IntroButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuickPlay_Acknowledgement.W_QuickPlay_Acknowledgement_C.ExecuteUbergraph_W_QuickPlay_Acknowledgement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_V3_C*            CallFunc_GetFirstWidgetOfClass_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_QuickPlay_Acknowledgement_C::ExecuteUbergraph_W_QuickPlay_Acknowledgement(int32 EntryPoint, class UW_MainMenu_V3_C* CallFunc_GetFirstWidgetOfClass_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuickPlay_Acknowledgement_C", "ExecuteUbergraph_W_QuickPlay_Acknowledgement");

	Params::UW_QuickPlay_Acknowledgement_C_ExecuteUbergraph_W_QuickPlay_Acknowledgement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstWidgetOfClass_ReturnValue = CallFunc_GetFirstWidgetOfClass_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


