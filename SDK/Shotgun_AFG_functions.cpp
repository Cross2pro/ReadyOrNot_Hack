#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_AFG.Shotgun_AFG_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_AFG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_AFG_C");

	return Clss;
}


// Shotgun_AFG_C Shotgun_AFG.Default__Shotgun_AFG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_AFG_C* UShotgun_AFG_C::GetDefaultObj()
{
	static class UShotgun_AFG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_AFG_C*>(UShotgun_AFG_C::StaticClass()->DefaultObject);

	return Default;
}

}


