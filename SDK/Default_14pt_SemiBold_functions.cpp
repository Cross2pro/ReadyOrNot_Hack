#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default_14pt_SemiBold.Default_14pt_SemiBold_C
// (None)

class UClass* UDefault_14pt_SemiBold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default_14pt_SemiBold_C");

	return Clss;
}


// Default_14pt_SemiBold_C Default_14pt_SemiBold.Default__Default_14pt_SemiBold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault_14pt_SemiBold_C* UDefault_14pt_SemiBold_C::GetDefaultObj()
{
	static class UDefault_14pt_SemiBold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault_14pt_SemiBold_C*>(UDefault_14pt_SemiBold_C::StaticClass()->DefaultObject);

	return Default;
}

}


