#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LD_MainMenu.LD_MainMenu_C
// (None)

class UClass* ULD_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LD_MainMenu_C");

	return Clss;
}


// LD_MainMenu_C LD_MainMenu.Default__LD_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULD_MainMenu_C* ULD_MainMenu_C::GetDefaultObj()
{
	static class ULD_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULD_MainMenu_C*>(ULD_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


