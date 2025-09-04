#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenuRedStyleFMOD.PauseMenuRedStyleFMOD_C
// (None)

class UClass* UPauseMenuRedStyleFMOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenuRedStyleFMOD_C");

	return Clss;
}


// PauseMenuRedStyleFMOD_C PauseMenuRedStyleFMOD.Default__PauseMenuRedStyleFMOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPauseMenuRedStyleFMOD_C* UPauseMenuRedStyleFMOD_C::GetDefaultObj()
{
	static class UPauseMenuRedStyleFMOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPauseMenuRedStyleFMOD_C*>(UPauseMenuRedStyleFMOD_C::StaticClass()->DefaultObject);

	return Default;
}

}


