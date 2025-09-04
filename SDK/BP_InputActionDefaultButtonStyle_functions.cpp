#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InputActionDefaultButtonStyle.BP_InputActionDefaultButtonStyle_C
// (None)

class UClass* UBP_InputActionDefaultButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InputActionDefaultButtonStyle_C");

	return Clss;
}


// BP_InputActionDefaultButtonStyle_C BP_InputActionDefaultButtonStyle.Default__BP_InputActionDefaultButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InputActionDefaultButtonStyle_C* UBP_InputActionDefaultButtonStyle_C::GetDefaultObj()
{
	static class UBP_InputActionDefaultButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InputActionDefaultButtonStyle_C*>(UBP_InputActionDefaultButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


