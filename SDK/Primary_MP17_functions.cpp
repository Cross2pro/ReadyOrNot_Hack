#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_MP17.Primary_MP17_C
// (Actor)

class UClass* APrimary_MP17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_MP17_C");

	return Clss;
}


// Primary_MP17_C Primary_MP17.Default__Primary_MP17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_MP17_C* APrimary_MP17_C::GetDefaultObj()
{
	static class APrimary_MP17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_MP17_C*>(APrimary_MP17_C::StaticClass()->DefaultObject);

	return Default;
}

}


