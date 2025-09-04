#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class XRBase.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	void UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(class FName& ActionName, FDelegateProperty_& InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_& InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin);
	void SetSpectatorScreenTexture(class UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(struct FXRDeviceId& XRDeviceId);
	bool HasValidTrackingPosition();
	int32 GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject* WorldContext);
	void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	class FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index);
	bool GetTrackingOriginTransform(enum class EHMDTrackingOrigin Origin, struct FTransform* OutTransform);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	bool GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect);
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int32 GetNumOfTrackingSensors();
	void GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData);
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
	void GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	bool GetCurrentInteractionProfile(enum class EControllerHand Hand, class FString* InteractionProfile);
	bool GetControllerTransformForTime2(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FRotator* AngularVelocity, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	bool GetControllerTransformForTime(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityAsAxisAndLength, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(class FName SystemId, enum class EXRTrackedDeviceType DeviceType);
	void EnableLowPersistenceMode(bool bEnable);
	bool EnableHMD(bool bEnable);
	void DisconnectRemoteXRDevice();
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, int32 BitRate);
	bool ConfigureGestures(struct FXRGestureConfig& GestureConfig);
	void ClearXRTimedInputActionDelegate(class FName& ActionPath);
	void CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform);
	void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, enum class EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
};

// 0x0 (0x28 - 0x28)
// Class XRBase.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName);
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	class FName GetActiveTrackingSystemName();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	bool EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	void DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// 0xC0 (0x160 - 0xA0)
// Class XRBase.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVRNotificationsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class XRBase.XRAssetFunctionLibrary
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRAssetFunctionLibrary* GetDefaultObj();

	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform);
};

// 0x30 (0x60 - 0x30)
// Class XRBase.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1957[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
};

// 0x48 (0x670 - 0x628)
// Class XRBase.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x62C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UXRDeviceVisualizationComponent* GetDefaultObj();

	void SetIsVisualizationActive(bool bNewVisualizationState);
	void SetIsRenderingActive(bool bRenderingIsActive);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
};

// 0x0 (0x28 - 0x28)
// Class XRBase.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj();

	void ShowLoadingScreen();
	void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};

}


