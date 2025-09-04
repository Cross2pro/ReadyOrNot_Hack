#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CurrentUserVisualization.W_CurrentUserVisualization_C
// (None)

class UClass* UW_CurrentUserVisualization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CurrentUserVisualization_C");

	return Clss;
}


// W_CurrentUserVisualization_C W_CurrentUserVisualization.Default__W_CurrentUserVisualization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CurrentUserVisualization_C* UW_CurrentUserVisualization_C::GetDefaultObj()
{
	static class UW_CurrentUserVisualization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CurrentUserVisualization_C*>(UW_CurrentUserVisualization_C::StaticClass()->DefaultObject);

	return Default;
}

}


