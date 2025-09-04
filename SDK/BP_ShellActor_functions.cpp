#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShellActor.BP_ShellActor_C
// (Actor)

class UClass* ABP_ShellActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShellActor_C");

	return Clss;
}


// BP_ShellActor_C BP_ShellActor.Default__BP_ShellActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShellActor_C* ABP_ShellActor_C::GetDefaultObj()
{
	static class ABP_ShellActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShellActor_C*>(ABP_ShellActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


