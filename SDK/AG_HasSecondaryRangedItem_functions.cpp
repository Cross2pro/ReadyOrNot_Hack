#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_HasSecondaryRangedItem.AG_HasSecondaryRangedItem_C
// (None)

class UClass* UAG_HasSecondaryRangedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_HasSecondaryRangedItem_C");

	return Clss;
}


// AG_HasSecondaryRangedItem_C AG_HasSecondaryRangedItem.Default__AG_HasSecondaryRangedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_HasSecondaryRangedItem_C* UAG_HasSecondaryRangedItem_C::GetDefaultObj()
{
	static class UAG_HasSecondaryRangedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_HasSecondaryRangedItem_C*>(UAG_HasSecondaryRangedItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


