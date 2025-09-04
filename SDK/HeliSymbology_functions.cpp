#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeliSymbology.HeliSymbology_C
// (None)

class UClass* UHeliSymbology_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeliSymbology_C");

	return Clss;
}


// HeliSymbology_C HeliSymbology.Default__HeliSymbology_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeliSymbology_C* UHeliSymbology_C::GetDefaultObj()
{
	static class UHeliSymbology_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeliSymbology_C*>(UHeliSymbology_C::StaticClass()->DefaultObject);

	return Default;
}

}


