#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SettingsButtonStyleLocked.BP_SettingsButtonStyleLocked_C
// (None)

class UClass* UBP_SettingsButtonStyleLocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SettingsButtonStyleLocked_C");

	return Clss;
}


// BP_SettingsButtonStyleLocked_C BP_SettingsButtonStyleLocked.Default__BP_SettingsButtonStyleLocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SettingsButtonStyleLocked_C* UBP_SettingsButtonStyleLocked_C::GetDefaultObj()
{
	static class UBP_SettingsButtonStyleLocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SettingsButtonStyleLocked_C*>(UBP_SettingsButtonStyleLocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


