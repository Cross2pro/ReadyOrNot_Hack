#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShellActor_Smoke.BP_ShellActor_Smoke_C
// (Actor)

class UClass* ABP_ShellActor_Smoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShellActor_Smoke_C");

	return Clss;
}


// BP_ShellActor_Smoke_C BP_ShellActor_Smoke.Default__BP_ShellActor_Smoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShellActor_Smoke_C* ABP_ShellActor_Smoke_C::GetDefaultObj()
{
	static class ABP_ShellActor_Smoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShellActor_Smoke_C*>(ABP_ShellActor_Smoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


