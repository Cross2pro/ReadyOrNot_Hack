#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuActor.MainMenuActor_C
// (Actor)

class UClass* AMainMenuActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuActor_C");

	return Clss;
}


// MainMenuActor_C MainMenuActor.Default__MainMenuActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuActor_C* AMainMenuActor_C::GetDefaultObj()
{
	static class AMainMenuActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuActor_C*>(AMainMenuActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuActor.MainMenuActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenuActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuActor.MainMenuActor_C.ExecuteUbergraph_MainMenuActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_Overlay_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_V3_C*            K2Node_DynamicCast_AsW_Main_Menu_V3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuActor_C::ExecuteUbergraph_MainMenuActor(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_MainMenu_Overlay_C* CallFunc_Create_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_MainMenu_V3_C* K2Node_DynamicCast_AsW_Main_Menu_V3, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor_C", "ExecuteUbergraph_MainMenuActor");

	Params::AMainMenuActor_C_ExecuteUbergraph_MainMenuActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Main_Menu_V3 = K2Node_DynamicCast_AsW_Main_Menu_V3;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


