#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InputActionLabelTextStyle.InputActionLabelTextStyle_C
// (None)

class UClass* UInputActionLabelTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputActionLabelTextStyle_C");

	return Clss;
}


// InputActionLabelTextStyle_C InputActionLabelTextStyle.Default__InputActionLabelTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputActionLabelTextStyle_C* UInputActionLabelTextStyle_C::GetDefaultObj()
{
	static class UInputActionLabelTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputActionLabelTextStyle_C*>(UInputActionLabelTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


