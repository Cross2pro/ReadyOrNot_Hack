#include "Ready.h"

namespace Ready
{
    SDK::UClass *suspectClass = nullptr;
    SDK::UClass *civilianClass = nullptr;
    SDK::UClass *readyCharactorClass = nullptr;
    SDK::UClass *readyPlayerControllerClass = nullptr;
    SDK::UClass *trapActorAttachedToDoorClass = nullptr;

    void Init()
    {
        suspectClass = SDK::UObject::FindClass("Class ReadyOrNot.SuspectCharacter");
        civilianClass = SDK::UObject::FindClass("Class ReadyOrNot.CivilianCharacter");
        readyCharactorClass = SDK::UObject::FindClass("Class ReadyOrNot.ReadyOrNotCharacter");
        readyPlayerControllerClass = SDK::UObject::FindClass("Class ReadyOrNot.ReadyOrNotPlayerController");
        trapActorAttachedToDoorClass = SDK::UObject::FindClass("Class ReadyOrNot.TrapActorAttachedToDoor");
    }
} // namespace Ready
