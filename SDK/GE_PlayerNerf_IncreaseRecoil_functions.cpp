#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerNerf_IncreaseRecoil.GE_PlayerNerf_IncreaseRecoil_C
// (None)

class UClass* UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerNerf_IncreaseRecoil_C");

	return Clss;
}


// GE_PlayerNerf_IncreaseRecoil_C GE_PlayerNerf_IncreaseRecoil.Default__GE_PlayerNerf_IncreaseRecoil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerNerf_IncreaseRecoil_C* UGE_PlayerNerf_IncreaseRecoil_C::GetDefaultObj()
{
	static class UGE_PlayerNerf_IncreaseRecoil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerNerf_IncreaseRecoil_C*>(UGE_PlayerNerf_IncreaseRecoil_C::StaticClass()->DefaultObject);

	return Default;
}

}


