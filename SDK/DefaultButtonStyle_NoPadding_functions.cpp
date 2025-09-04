#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultButtonStyle_NoPadding.DefaultButtonStyle_NoPadding_C
// (None)

class UClass* UDefaultButtonStyle_NoPadding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultButtonStyle_NoPadding_C");

	return Clss;
}


// DefaultButtonStyle_NoPadding_C DefaultButtonStyle_NoPadding.Default__DefaultButtonStyle_NoPadding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultButtonStyle_NoPadding_C* UDefaultButtonStyle_NoPadding_C::GetDefaultObj()
{
	static class UDefaultButtonStyle_NoPadding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultButtonStyle_NoPadding_C*>(UDefaultButtonStyle_NoPadding_C::StaticClass()->DefaultObject);

	return Default;
}

}


