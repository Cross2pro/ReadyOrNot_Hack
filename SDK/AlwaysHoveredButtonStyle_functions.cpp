#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlwaysHoveredButtonStyle.AlwaysHoveredButtonStyle_C
// (None)

class UClass* UAlwaysHoveredButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlwaysHoveredButtonStyle_C");

	return Clss;
}


// AlwaysHoveredButtonStyle_C AlwaysHoveredButtonStyle.Default__AlwaysHoveredButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlwaysHoveredButtonStyle_C* UAlwaysHoveredButtonStyle_C::GetDefaultObj()
{
	static class UAlwaysHoveredButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlwaysHoveredButtonStyle_C*>(UAlwaysHoveredButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


