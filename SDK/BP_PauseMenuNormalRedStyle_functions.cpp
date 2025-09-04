#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PauseMenuNormalRedStyle.BP_PauseMenuNormalRedStyle_C
// (None)

class UClass* UBP_PauseMenuNormalRedStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PauseMenuNormalRedStyle_C");

	return Clss;
}


// BP_PauseMenuNormalRedStyle_C BP_PauseMenuNormalRedStyle.Default__BP_PauseMenuNormalRedStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PauseMenuNormalRedStyle_C* UBP_PauseMenuNormalRedStyle_C::GetDefaultObj()
{
	static class UBP_PauseMenuNormalRedStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PauseMenuNormalRedStyle_C*>(UBP_PauseMenuNormalRedStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


