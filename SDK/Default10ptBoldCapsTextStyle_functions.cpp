#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default10ptBoldCapsTextStyle.Default10ptBoldCapsTextStyle_C
// (None)

class UClass* UDefault10ptBoldCapsTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default10ptBoldCapsTextStyle_C");

	return Clss;
}


// Default10ptBoldCapsTextStyle_C Default10ptBoldCapsTextStyle.Default__Default10ptBoldCapsTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault10ptBoldCapsTextStyle_C* UDefault10ptBoldCapsTextStyle_C::GetDefaultObj()
{
	static class UDefault10ptBoldCapsTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault10ptBoldCapsTextStyle_C*>(UDefault10ptBoldCapsTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


