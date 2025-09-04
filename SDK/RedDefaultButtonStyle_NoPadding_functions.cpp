#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RedDefaultButtonStyle_NoPadding.RedDefaultButtonStyle_NoPadding_C
// (None)

class UClass* URedDefaultButtonStyle_NoPadding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedDefaultButtonStyle_NoPadding_C");

	return Clss;
}


// RedDefaultButtonStyle_NoPadding_C RedDefaultButtonStyle_NoPadding.Default__RedDefaultButtonStyle_NoPadding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedDefaultButtonStyle_NoPadding_C* URedDefaultButtonStyle_NoPadding_C::GetDefaultObj()
{
	static class URedDefaultButtonStyle_NoPadding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedDefaultButtonStyle_NoPadding_C*>(URedDefaultButtonStyle_NoPadding_C::StaticClass()->DefaultObject);

	return Default;
}

}


