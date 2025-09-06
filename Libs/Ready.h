#pragma once
#include "../SDK.hpp"
namespace ReadyStruct
{
    enum class EPlayerHealthStatus : uint8
    {
        HS_Healthy = 0,
        HS_Injured = 1,
        HS_Downed = 2,
        HS_Incapacitated = 3,
        HS_Dead = 4,
        HS_Arrested = 5,
        HS_NotAvailable = 6,
        HS_MAX = 7,
    };
    // 0x34 (0x34 - 0x0)
    // ScriptStruct ReadyOrNot.LimbHealthData
    struct FLimbHealthData
    {
    public:
        uint8 Pad_5227[0x8];        // Fixing Size After Last Property  [ Dumper-7 ]
        float Health;               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float MaxHealth;            // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float MaxHealthLimit;       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float LowHealthThreshold;   // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float LimbDamageMultiplier; // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        int32 MaxTickets;           // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        int32 Tickets;              // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        int32 MaxLimbHealthHalving; // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float OriginalMaxHealth;    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float LowHealth;            // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
        float PreviousHealth;       // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
    };
    class UCharacterHealthComponent : public SDK::UObject
    {
    public:
        uint8_t Padding_28[0xD0];                    // 填充 0x28 到类结尾
        uint8_t Padding_F8[0x60];                    // 填充 0xF8 到 0x158
        enum class EPlayerHealthStatus HealthStatus; // 0x158(0x1)
        uint8_t Padding_159[0x3];                    // 填充 0x159 到 0x15C
        float IncapacitationHealthMultiplier;        // 0x15C(0x4)
        struct FLimbHealthData RightLeg;             // 0x160(0x34)
        struct FLimbHealthData LeftLeg;              // 0x194(0x34)
        struct FLimbHealthData RightArm;             // 0x1C8(0x34)
        struct FLimbHealthData LeftArm;              // 0x1FC(0x34)
        struct FLimbHealthData Head;                 // 0x230(0x34)
        uint8_t Padding_264[0x4];                    // 填充 0x264 到 0x268
        int32_t MaxRevives;                          // 0x268(0x4)
        float ReviveTime;                            // 0x26C(0x4)
        uint8_t Padding_270[0x18];                   // 填充 0x270 到类结尾
    };

    class AReadyOrNotCharacter : public SDK::UObject
    {
    public:
        uint8_t Padding_28[0x8E0];       // 填充 0x28 到 0x908
        UCharacterHealthComponent *CharacterHealth; // 0x908(0x8)
        uint8_t Padding_910[0x978];      // 填充 0x910 到 0x1288
        bool bIsBeingArrested;           // 0x1288(0x1)
        bool bArrestComplete;            // 0x1289(0x1)
        bool bArrestedAsRagdoll;         // 0x128A(0x1)
        bool bArrestedAsRagdoll_Flipped; // 0x128B(0x1)
        uint8_t Padding_128C[0x83C];     // 填充 0x128C 到类结尾
    };
    enum class ETrapType : uint8
    {
        Alarm = 0,
        Flashbang = 1,
        Explosive = 2,
        Unknown = 3,
        ETrapType_MAX = 4,
    };
    enum class ETrapState : uint8
    {
        TS_Live = 0,
        TS_Activated = 1,
        TS_Disabled = 2,
        TS_MAX = 3,
    };
    class ATrapActor : public SDK::AActor
    {
    public:
        uint8_t Padding_220[0x98];        // 填充 0x298 到 0x330
        enum class ETrapType TrapType;    // 0x330(0x1)
        enum class ETrapState TrapStatus; // 0x331(0x1)
        uint8_t Padding_332[0x3E];        // 填充 0x332 到类结尾
    };

}
namespace Ready
{
    extern SDK::UClass *suspectClass;
    extern SDK::UClass *civilianClass;
    extern SDK::UClass *readyCharactorClass;
    extern SDK::UClass *readyPlayerControllerClass;
    extern SDK::UClass *trapActorAttachedToDoorClass;
    void Init();
} // namespace Ready
