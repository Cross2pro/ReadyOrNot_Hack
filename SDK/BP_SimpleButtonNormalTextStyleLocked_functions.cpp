#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SimpleButtonNormalTextStyleLocked.BP_SimpleButtonNormalTextStyleLocked_C
// (None)

class UClass* UBP_SimpleButtonNormalTextStyleLocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SimpleButtonNormalTextStyleLocked_C");

	return Clss;
}


// BP_SimpleButtonNormalTextStyleLocked_C BP_SimpleButtonNormalTextStyleLocked.Default__BP_SimpleButtonNormalTextStyleLocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SimpleButtonNormalTextStyleLocked_C* UBP_SimpleButtonNormalTextStyleLocked_C::GetDefaultObj()
{
	static class UBP_SimpleButtonNormalTextStyleLocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SimpleButtonNormalTextStyleLocked_C*>(UBP_SimpleButtonNormalTextStyleLocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


