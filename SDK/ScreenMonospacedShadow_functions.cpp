#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScreenMonospacedShadow.ScreenMonospacedShadow_C
// (None)

class UClass* UScreenMonospacedShadow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenMonospacedShadow_C");

	return Clss;
}


// ScreenMonospacedShadow_C ScreenMonospacedShadow.Default__ScreenMonospacedShadow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScreenMonospacedShadow_C* UScreenMonospacedShadow_C::GetDefaultObj()
{
	static class UScreenMonospacedShadow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScreenMonospacedShadow_C*>(UScreenMonospacedShadow_C::StaticClass()->DefaultObject);

	return Default;
}

}


