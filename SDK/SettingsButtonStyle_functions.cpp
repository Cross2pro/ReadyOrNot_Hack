#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SettingsButtonStyle.SettingsButtonStyle_C
// (None)

class UClass* USettingsButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsButtonStyle_C");

	return Clss;
}


// SettingsButtonStyle_C SettingsButtonStyle.Default__SettingsButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsButtonStyle_C* USettingsButtonStyle_C::GetDefaultObj()
{
	static class USettingsButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsButtonStyle_C*>(USettingsButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


