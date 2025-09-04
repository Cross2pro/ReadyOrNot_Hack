#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rifle_RK1Grip.Rifle_RK1Grip_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* URifle_RK1Grip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rifle_RK1Grip_C");

	return Clss;
}


// Rifle_RK1Grip_C Rifle_RK1Grip.Default__Rifle_RK1Grip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifle_RK1Grip_C* URifle_RK1Grip_C::GetDefaultObj()
{
	static class URifle_RK1Grip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifle_RK1Grip_C*>(URifle_RK1Grip_C::StaticClass()->DefaultObject);

	return Default;
}

}


