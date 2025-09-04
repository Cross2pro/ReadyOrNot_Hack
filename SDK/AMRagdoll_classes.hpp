#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// Class AMRagdoll.AnimNotify_EnableRagdoll
class UAnimNotify_EnableRagdoll : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EnableRagdoll* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AMRagdoll.AnimNotify_EnableRagdollChecks
class UAnimNotify_EnableRagdollChecks : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EnableRagdollChecks* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class AMRagdoll.AnimNotify_TogglePhysAnim
class UAnimNotify_TogglePhysAnim : public UAnimNotify
{
public:
	bool                                         bEnablePhysicalAnimation;                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PhysicalAnimProfileName;                           // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopCurrentMontage;                               // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_TogglePhysAnim* GetDefaultObj();

};

// 0x98 (0x138 - 0xA0)
// Class AMRagdoll.RagdollComponent
class URagdollComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnRagdollStart;                                    // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRagdollBlendStop;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRagdollPhysBodyHit;                              // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStartRunningRagdollChecks;                        // 0xD2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysBodyCollision;                             // 0xD3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCapsuleCollision;                              // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeRagdoll;                                    // 0xD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendingAnim2Ragdoll;                             // 0xD6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C09[0x19];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCapsuleCollisionRagdolled;                        // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPhysBodyCollisionRagdolled;                       // 0xF1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapsuleFloorAngleRagdolled;                       // 0xF2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCapsuleInAirRagdolled;                            // 0xF3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CapsuleCollisionRagdollTriggerThreshold;           // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleFloorAngleRagdollTriggerThreshold;          // 0xF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleFloorAngleRagdollDelayThreshold;            // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleInAirRagdollDelayThreshold;                 // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RagdollVelocityFreezeThreshold;                    // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RagdollBlendTime;                                  // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RagdollFreezeDelay;                                // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRagdollIsFrozen;                                  // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C14[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PelvisBoneName;                                    // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HeadBoneName;                                      // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RagdollCollisionProfileName;                       // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalAnimationComponent*           PhysicalAnimationComponent;                        // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URagdollComponent* GetDefaultObj();

	void RequestAnim2RagdollBlend(float Duration);
	void OnRagdollHitEvent__DelegateSignature(class URagdollComponent* Component, const struct FVector& Impulse, struct FHitResult& Hit);
	void OnRagdollEvent__DelegateSignature(class URagdollComponent* Component);
	void OnPhysBodyHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	bool IsInRagdoll();
};

}


