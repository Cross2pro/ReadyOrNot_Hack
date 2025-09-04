#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PauseMenuHoveredRedStyle.BP_PauseMenuHoveredRedStyle_C
// (None)

class UClass* UBP_PauseMenuHoveredRedStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PauseMenuHoveredRedStyle_C");

	return Clss;
}


// BP_PauseMenuHoveredRedStyle_C BP_PauseMenuHoveredRedStyle.Default__BP_PauseMenuHoveredRedStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PauseMenuHoveredRedStyle_C* UBP_PauseMenuHoveredRedStyle_C::GetDefaultObj()
{
	static class UBP_PauseMenuHoveredRedStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PauseMenuHoveredRedStyle_C*>(UBP_PauseMenuHoveredRedStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


