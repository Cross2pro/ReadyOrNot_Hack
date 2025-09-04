#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavDisabledTextStyle.SubnavDisabledTextStyle_C
// (None)

class UClass* USubnavDisabledTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavDisabledTextStyle_C");

	return Clss;
}


// SubnavDisabledTextStyle_C SubnavDisabledTextStyle.Default__SubnavDisabledTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavDisabledTextStyle_C* USubnavDisabledTextStyle_C::GetDefaultObj()
{
	static class USubnavDisabledTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavDisabledTextStyle_C*>(USubnavDisabledTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


