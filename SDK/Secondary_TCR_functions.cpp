#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Secondary_TCR.Secondary_TCR_C
// (Actor)

class UClass* ASecondary_TCR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Secondary_TCR_C");

	return Clss;
}


// Secondary_TCR_C Secondary_TCR.Default__Secondary_TCR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASecondary_TCR_C* ASecondary_TCR_C::GetDefaultObj()
{
	static class ASecondary_TCR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASecondary_TCR_C*>(ASecondary_TCR_C::StaticClass()->DefaultObject);

	return Default;
}

}


