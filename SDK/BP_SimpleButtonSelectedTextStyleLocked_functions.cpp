#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SimpleButtonSelectedTextStyleLocked.BP_SimpleButtonSelectedTextStyleLocked_C
// (None)

class UClass* UBP_SimpleButtonSelectedTextStyleLocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SimpleButtonSelectedTextStyleLocked_C");

	return Clss;
}


// BP_SimpleButtonSelectedTextStyleLocked_C BP_SimpleButtonSelectedTextStyleLocked.Default__BP_SimpleButtonSelectedTextStyleLocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SimpleButtonSelectedTextStyleLocked_C* UBP_SimpleButtonSelectedTextStyleLocked_C::GetDefaultObj()
{
	static class UBP_SimpleButtonSelectedTextStyleLocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SimpleButtonSelectedTextStyleLocked_C*>(UBP_SimpleButtonSelectedTextStyleLocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


