#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shotgun_M1014_ShortBarrel.Shotgun_M1014_ShortBarrel_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UShotgun_M1014_ShortBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shotgun_M1014_ShortBarrel_C");

	return Clss;
}


// Shotgun_M1014_ShortBarrel_C Shotgun_M1014_ShortBarrel.Default__Shotgun_M1014_ShortBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShotgun_M1014_ShortBarrel_C* UShotgun_M1014_ShortBarrel_C::GetDefaultObj()
{
	static class UShotgun_M1014_ShortBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShotgun_M1014_ShortBarrel_C*>(UShotgun_M1014_ShortBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


