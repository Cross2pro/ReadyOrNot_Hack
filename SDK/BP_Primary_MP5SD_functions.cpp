#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Primary_MP5SD.BP_Primary_MP5SD_C
// (Actor)

class UClass* ABP_Primary_MP5SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Primary_MP5SD_C");

	return Clss;
}


// BP_Primary_MP5SD_C BP_Primary_MP5SD.Default__BP_Primary_MP5SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Primary_MP5SD_C* ABP_Primary_MP5SD_C::GetDefaultObj()
{
	static class ABP_Primary_MP5SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Primary_MP5SD_C*>(ABP_Primary_MP5SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


