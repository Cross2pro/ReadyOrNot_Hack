#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FMODStudioNiagara.FMODNiagaraEventPlayer
// (None)

class UClass* UFMODNiagaraEventPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMODNiagaraEventPlayer");

	return Clss;
}


// FMODNiagaraEventPlayer FMODStudioNiagara.Default__FMODNiagaraEventPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFMODNiagaraEventPlayer* UFMODNiagaraEventPlayer::GetDefaultObj()
{
	static class UFMODNiagaraEventPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMODNiagaraEventPlayer*>(UFMODNiagaraEventPlayer::StaticClass()->DefaultObject);

	return Default;
}

}


