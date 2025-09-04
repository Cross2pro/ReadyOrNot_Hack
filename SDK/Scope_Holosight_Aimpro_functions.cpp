#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scope_Holosight_Aimpro.Scope_Holosight_Aimpro_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UScope_Holosight_Aimpro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scope_Holosight_Aimpro_C");

	return Clss;
}


// Scope_Holosight_Aimpro_C Scope_Holosight_Aimpro.Default__Scope_Holosight_Aimpro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScope_Holosight_Aimpro_C* UScope_Holosight_Aimpro_C::GetDefaultObj()
{
	static class UScope_Holosight_Aimpro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScope_Holosight_Aimpro_C*>(UScope_Holosight_Aimpro_C::StaticClass()->DefaultObject);

	return Default;
}

}


