#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BloodPoolPool.BloodPoolPool_C
// (None)

class UClass* UBloodPoolPool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BloodPoolPool_C");

	return Clss;
}


// BloodPoolPool_C BloodPoolPool.Default__BloodPoolPool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBloodPoolPool_C* UBloodPoolPool_C::GetDefaultObj()
{
	static class UBloodPoolPool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBloodPoolPool_C*>(UBloodPoolPool_C::StaticClass()->DefaultObject);

	return Default;
}

}


