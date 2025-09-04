#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mp5SD_Flashlight.Mp5SD_Flashlight_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UMp5SD_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mp5SD_Flashlight_C");

	return Clss;
}


// Mp5SD_Flashlight_C Mp5SD_Flashlight.Default__Mp5SD_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMp5SD_Flashlight_C* UMp5SD_Flashlight_C::GetDefaultObj()
{
	static class UMp5SD_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMp5SD_Flashlight_C*>(UMp5SD_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


