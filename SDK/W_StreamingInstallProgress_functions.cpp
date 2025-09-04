#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StreamingInstallProgress.W_StreamingInstallProgress_C
// (None)

class UClass* UW_StreamingInstallProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StreamingInstallProgress_C");

	return Clss;
}


// W_StreamingInstallProgress_C W_StreamingInstallProgress.Default__W_StreamingInstallProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StreamingInstallProgress_C* UW_StreamingInstallProgress_C::GetDefaultObj()
{
	static class UW_StreamingInstallProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StreamingInstallProgress_C*>(UW_StreamingInstallProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


