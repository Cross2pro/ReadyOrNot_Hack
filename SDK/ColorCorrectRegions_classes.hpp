#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B0 (0x648 - 0x298)
// Class ColorCorrectRegions.ColorCorrectRegion
class AColorCorrectRegion : public AActor
{
public:
	enum class EColorCorrectRegionsType          Type;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Inner;                                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Outer;                                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert;                                            // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EColorCorrectRegionTemperatureType TemperatureType;                                   // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature;                                       // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tint;                                              // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColorGradingSettings                 ColorGradingSettings;                              // 0x2C0(0x290)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerActorCC;                                 // 0x551(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EColorCorrectRegionStencilType    PerActorColorCorrection;                           // 0x552(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1313[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftObjectPtr<class AActor>>           AffectedActors;                                    // 0x558(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_131A[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UColorCorrectionInvisibleComponent*    IdentityComponent;                                 // 0x5F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131B[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectRegion* GetDefaultObj();

};

// 0x18 (0x660 - 0x648)
// Class ColorCorrectRegions.ColorCorrectionRegion
class AColorCorrectionRegion : public AColorCorrectRegion
{
public:
	TArray<class UStaticMeshComponent*>          MeshComponents;                                    // 0x648(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_136A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectionRegion* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class ColorCorrectRegions.ColorCorrectionInvisibleComponent
class UColorCorrectionInvisibleComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UColorCorrectionInvisibleComponent* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class ColorCorrectRegions.ColorCorrectRegionsSubsystem
class UColorCorrectRegionsSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_1393[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UColorCorrectRegionsSubsystem* GetDefaultObj();

	void RefreshStenciIdAssignmentForAllCCR();
};

// 0xD8 (0x720 - 0x648)
// Class ColorCorrectRegions.ColorCorrectionWindow
class AColorCorrectionWindow : public AColorCorrectRegion
{
public:
	uint8                                        Pad_15E0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          MeshComponents;                                    // 0x650(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EColorCorrectWindowType           WindowType;                                        // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDisplayClusterPositionalParams       PositionalParams;                                  // 0x668(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            Origin;                                            // 0x6B0(0x60)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15FA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectionWindow* GetDefaultObj();

	void SetYaw(double InValue);
	void SetSpin(double InValue);
	void SetScale(struct FVector2D& InScale);
	void SetRadialOffset(double InValue);
	void SetPositionalParams(struct FDisplayClusterPositionalParams& InParams);
	void SetPitch(double InValue);
	void SetOrigin(struct FTransform& InOrigin);
	void SetLongitude(double InValue);
	void SetLatitude(double InValue);
	void SetDistanceFromCenter(double InValue);
	double GetYaw();
	double GetSpin();
	struct FVector2D GetScale();
	double GetRadialOffset();
	struct FDisplayClusterPositionalParams GetPositionalParams();
	double GetPitch();
	struct FTransform GetOrigin();
	double GetLongitude();
	double GetLatitude();
	double GetDistanceFromCenter();
};

// 0x0 (0x720 - 0x720)
// Class ColorCorrectRegions.ColorCorrectWindow
class AColorCorrectWindow : public AColorCorrectionWindow
{
public:

	static class UClass* StaticClass();
	static class AColorCorrectWindow* GetDefaultObj();

};

}


