#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShellActor_Flash.BP_ShellActor_Flash_C
// (Actor)

class UClass* ABP_ShellActor_Flash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShellActor_Flash_C");

	return Clss;
}


// BP_ShellActor_Flash_C BP_ShellActor_Flash.Default__BP_ShellActor_Flash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShellActor_Flash_C* ABP_ShellActor_Flash_C::GetDefaultObj()
{
	static class ABP_ShellActor_Flash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShellActor_Flash_C*>(ABP_ShellActor_Flash_C::StaticClass()->DefaultObject);

	return Default;
}

}


