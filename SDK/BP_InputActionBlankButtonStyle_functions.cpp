#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InputActionBlankButtonStyle.BP_InputActionBlankButtonStyle_C
// (None)

class UClass* UBP_InputActionBlankButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InputActionBlankButtonStyle_C");

	return Clss;
}


// BP_InputActionBlankButtonStyle_C BP_InputActionBlankButtonStyle.Default__BP_InputActionBlankButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InputActionBlankButtonStyle_C* UBP_InputActionBlankButtonStyle_C::GetDefaultObj()
{
	static class UBP_InputActionBlankButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InputActionBlankButtonStyle_C*>(UBP_InputActionBlankButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


