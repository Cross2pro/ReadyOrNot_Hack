#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSFramework.RedpointEOSPartyMember
// (Actor)

class UClass* ARedpointEOSPartyMember::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSPartyMember");

	return Clss;
}


// RedpointEOSPartyMember RedpointEOSFramework.Default__RedpointEOSPartyMember
// (Public, ClassDefaultObject, ArchetypeObject)

class ARedpointEOSPartyMember* ARedpointEOSPartyMember::GetDefaultObj()
{
	static class ARedpointEOSPartyMember* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedpointEOSPartyMember*>(ARedpointEOSPartyMember::StaticClass()->DefaultObject);

	return Default;
}


// Function RedpointEOSFramework.RedpointEOSPartyMember.PartyMemberChanged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRedpointEOSPartyMemberInfo PartyMember                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ARedpointEOSPartyMember::PartyMemberChanged(struct FRedpointEOSPartyMemberInfo& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedpointEOSPartyMember", "PartyMemberChanged");

	Params::ARedpointEOSPartyMember_PartyMemberChanged_Params Parms{};

	Parms.PartyMember = PartyMember;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RedpointEOSFramework.RedpointEOSStarterCharacter
// (Actor, Pawn)

class UClass* ARedpointEOSStarterCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterCharacter");

	return Clss;
}


// RedpointEOSStarterCharacter RedpointEOSFramework.Default__RedpointEOSStarterCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ARedpointEOSStarterCharacter* ARedpointEOSStarterCharacter::GetDefaultObj()
{
	static class ARedpointEOSStarterCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedpointEOSStarterCharacter*>(ARedpointEOSStarterCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSFramework.RedpointEOSStarterGameMode
// (Actor)

class UClass* ARedpointEOSStarterGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterGameMode");

	return Clss;
}


// RedpointEOSStarterGameMode RedpointEOSFramework.Default__RedpointEOSStarterGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class ARedpointEOSStarterGameMode* ARedpointEOSStarterGameMode::GetDefaultObj()
{
	static class ARedpointEOSStarterGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedpointEOSStarterGameMode*>(ARedpointEOSStarterGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSFramework.RedpointEOSStarterInputMappingContext
// (None)

class UClass* URedpointEOSStarterInputMappingContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterInputMappingContext");

	return Clss;
}


// RedpointEOSStarterInputMappingContext RedpointEOSFramework.Default__RedpointEOSStarterInputMappingContext
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSStarterInputMappingContext* URedpointEOSStarterInputMappingContext::GetDefaultObj()
{
	static class URedpointEOSStarterInputMappingContext* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSStarterInputMappingContext*>(URedpointEOSStarterInputMappingContext::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSFramework.RedpointEOSStarterJumpAction
// (None)

class UClass* URedpointEOSStarterJumpAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterJumpAction");

	return Clss;
}


// RedpointEOSStarterJumpAction RedpointEOSFramework.Default__RedpointEOSStarterJumpAction
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSStarterJumpAction* URedpointEOSStarterJumpAction::GetDefaultObj()
{
	static class URedpointEOSStarterJumpAction* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSStarterJumpAction*>(URedpointEOSStarterJumpAction::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSFramework.RedpointEOSStarterMoveAction
// (None)

class UClass* URedpointEOSStarterMoveAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterMoveAction");

	return Clss;
}


// RedpointEOSStarterMoveAction RedpointEOSFramework.Default__RedpointEOSStarterMoveAction
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSStarterMoveAction* URedpointEOSStarterMoveAction::GetDefaultObj()
{
	static class URedpointEOSStarterMoveAction* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSStarterMoveAction*>(URedpointEOSStarterMoveAction::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSFramework.RedpointEOSStarterPlayerController
// (Actor, PlayerController)

class UClass* ARedpointEOSStarterPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSStarterPlayerController");

	return Clss;
}


// RedpointEOSStarterPlayerController RedpointEOSFramework.Default__RedpointEOSStarterPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class ARedpointEOSStarterPlayerController* ARedpointEOSStarterPlayerController::GetDefaultObj()
{
	static class ARedpointEOSStarterPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<ARedpointEOSStarterPlayerController*>(ARedpointEOSStarterPlayerController::StaticClass()->DefaultObject);

	return Default;
}

}


