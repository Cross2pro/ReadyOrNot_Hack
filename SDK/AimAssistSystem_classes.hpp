#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x268 - 0xA0)
// Class AimAssistSystem.UASAimAssistComponent
class UUASAimAssistComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAimDataAssetChangedDelegate;                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnableStickiness;                                 // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMagnetism;                                  // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableScaling;                                    // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScalingByDPI;                                     // 0xB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAutoAim;                                    // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSnapToTarget;                               // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawCircles;                                      // 0xB6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawCrosshair;                                    // 0xB7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawWeights;                                      // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDebugOverlayBox;                                  // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowValidTargetSockets;                           // 0xBA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDebugTargetTraces;                                // 0xBB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_140[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUASAimAssistConfigDataAsset*          AimAssistDataAsset;                                // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TargetsDetectionProfileName;                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ObstacleCheckProfileName;                          // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldCharactersBlockTrace;                       // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_142[0x18F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUASAimAssistComponent* GetDefaultObj();

	bool ShouldSocketBeConsidered(struct FUASAimAssistTargetData& TargetData);
	void SetWeaponBulletSpawnLocation(const struct FVector& BulletSpawnLocation);
	void SetWeaponAimPoint(const struct FVector2D& AimPoint);
	void SetScopeSizeFactor(float SizeFactor);
	void SetMouseActive(bool Enable);
	void SetEnableZoneScaling(bool Enable);
	void SetEnableStickiness(bool Enable);
	void SetEnableSnapToTarget(bool Enable);
	void SetEnableMagnetism(bool Enable);
	void SetEnableAutoAim(bool Enable);
	void SetDrawWeights(bool Enable);
	void SetDrawSockets(bool Enable);
	void SetDrawCrosshair(bool Enable);
	void SetDrawCircles(bool Enable);
	void SetDrawAimBox(bool Enable);
	void SetAimAssistDataAsset(class UUASAimAssistConfigDataAsset* DataAsset);
	void OnTargetDestroyed(class AActor* DestroyedActor);
	bool IsAnimationBlocking();
	struct FRotator GetRotationToCrosshairDirection(struct FVector& From, class FName TraceProfileName, float MinDistanceToRotateToTarget, float Distance);
	bool GetMouseActive();
	bool GetEnableZoneScaling();
	bool GetEnableStickiness();
	bool GetEnableSnapToTarget();
	bool GetEnableMagnetism();
	bool GetEnableAutoAim();
	bool GetDrawWeights();
	bool GetDrawSockets();
	bool GetDrawCrosshair();
	bool GetDrawCircles();
	bool GetDrawAimBox();
	struct FVector2D GetCrosshairPosition();
	void GetControlMultipliers(float* Pitch, float* Yaw);
	void ExecuteSnapToTarget();
	void CancelSnapToTarget();
	float CalculateSocketWeight(struct FUASAimAssistTargetData& TargetData);
	float CalculateSocketDistance(struct FUASAimAssistTargetData& TargetData);
};

// 0x238 (0x268 - 0x30)
// Class AimAssistSystem.UASAimAssistConfigDataAsset
class UUASAimAssistConfigDataAsset : public UDataAsset
{
public:
	float                                        UpdateTargetsRate;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AimAreaExtents;                                    // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuadraticDistance;                                // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeMoveSpeedWeight;                           // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveSpeedCoefficient;                              // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecentlySeenTargetTrackingDuration;                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStickinessZoneConfig;                             // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUASStickinessZoneConfig              StickinessZoneConfig;                              // 0x60(0x118)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bMagnetismZoneConfig;                              // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUASMagnetismZoneConfig               MagnetismZoneConfig;                               // 0x17C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bScalingZoneConfig;                                // 0x184(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUASZonesScalingConfig                ZonesScalingConfig;                                // 0x188(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAutoAimConfig;                                    // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUASAutoAimConfig                     AutoAimConfig;                                     // 0x214(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetConfig;                               // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUASSnapToTargetConfig                SnapToTargetConfig;                                // 0x234(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             CrosshairOffset;                                   // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableStickiness;                                  // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableMagnetism;                                   // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableZoneScaling;                                 // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutoAim;                                     // 0x263(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSnapToTarget;                                // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUASAimAssistConfigDataAsset* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class AimAssistSystem.ASAimAssistSubsystem
class UASAimAssistSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_163[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UASAimAssistSubsystem* GetDefaultObj();

};

// 0x20 (0xC0 - 0xA0)
// Class AimAssistSystem.UASAimAssistTargetComponent
class UUASAimAssistTargetComponent : public UActorComponent
{
public:
	class UMeshComponent*                        MeshComponent;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAimAssistActive;                                // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AimTargetSocketNames;                              // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UUASAimAssistTargetComponent* GetDefaultObj();

	bool ShouldConsiderWeight();
	bool ShouldAlwaysBlockTrace();
	void Init(class UMeshComponent* Mesh);
	class FString GetWeightLabel();
	float GetWeightByState();
	float GetMoveSpeed();
};

}


