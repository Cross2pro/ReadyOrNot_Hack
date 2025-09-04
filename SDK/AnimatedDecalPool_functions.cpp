#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimatedDecalPool.AnimatedDecalPool_C
// (None)

class UClass* UAnimatedDecalPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimatedDecalPool_C");

	return Clss;
}


// AnimatedDecalPool_C AnimatedDecalPool.Default__AnimatedDecalPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimatedDecalPool_C* UAnimatedDecalPool_C::GetDefaultObj()
{
	static class UAnimatedDecalPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimatedDecalPool_C*>(UAnimatedDecalPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


