#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavHoverTextStyle.SubnavHoverTextStyle_C
// (None)

class UClass* USubnavHoverTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavHoverTextStyle_C");

	return Clss;
}


// SubnavHoverTextStyle_C SubnavHoverTextStyle.Default__SubnavHoverTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavHoverTextStyle_C* USubnavHoverTextStyle_C::GetDefaultObj()
{
	static class USubnavHoverTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavHoverTextStyle_C*>(USubnavHoverTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


