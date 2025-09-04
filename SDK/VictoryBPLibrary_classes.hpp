#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1B0 - 0x180)
// Class VictoryBPLibrary.RamaColorPicker
class URamaColorPicker : public UWidget
{
public:
	struct FLinearColor                          JoyColor;                                          // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1039[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URamaColorPicker* GetDefaultObj();

	void SetJoyColor(const struct FLinearColor& NewColor, bool SkipAnimation);
};

// 0x10 (0x38 - 0x28)
// Class VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe
class URamaVictoryPluginCreateProcessPipe : public UObject
{
public:
	uint8                                        Pad_105A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URamaVictoryPluginCreateProcessPipe* GetDefaultObj();

	bool ReadFromPipe(class FString* PipeContents);
	bool PipeIsValid();
	bool CreatePipe();
	void ClosePipe();
};

// 0x0 (0x28 - 0x28)
// Class VictoryBPLibrary.VictoryBPFunctionLibrary
class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVictoryBPFunctionLibrary* GetDefaultObj();

	bool WorldType__InPIEWorld(class UObject* WorldContextObject);
	bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
	bool WorldType__InEditorWorld(class UObject* WorldContextObject);
	class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
	void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
	bool ViewportPositionDeproject(class UObject* WorldContextObject, struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
	bool Viewport__SetMousePosition(class APlayerController* ThePC, float& PosX, float& PosY);
	bool Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY);
	bool Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY);
	void VictorySortStringArray(TArray<class FString>& StringArray, TArray<class FString>* StringArrayRef);
	void VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>* IntArrayRef);
	void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>* FloatArrayRef);
	void VictorySimulateMouseWheel(float& Delta);
	void VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, enum class EInputEvent EventType);
	void VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value);
	void VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value);
	void VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value);
	void VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value);
	void VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32 Value);
	void VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value);
	void VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value);
	void VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value);
	bool VictoryIsApplicationRunning(int32 ProcessId);
	void VictoryIntPlusEquals(int32& Int, int32 Add, int32* IntOut);
	void VictoryIntMinusEquals(int32& Int, int32 Sub, int32* IntOut);
	struct FVector2D VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FVector VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	class FString VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FRotator VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	int32 VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	float VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	struct FLinearColor VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	bool VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	class FString VictoryGetApplicationName(int32 ProcessId);
	void VictoryFloatPlusEquals(float& Float, float Add, float* FloatOut);
	void VictoryFloatMinusEquals(float& Float, float Sub, float* FloatOut);
	void VictoryCreateProc(int32* ProcessId, const class FString& FullPathOfProgramToRun, const TArray<class FString>& CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const class FString& OptionalWorkingDirectory, class URamaVictoryPluginCreateProcessPipe* ReadPipeObject);
	void Victory_SetTimeStamp(const class FString& File, struct FDateTime& Timestamp);
	void Victory_SaveStringToOSClipboard(const class FString& ToClipboard);
	bool Victory_SavePixels(const class FString& FullFilePath, int32 Width, int32 Height, TArray<struct FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, class FString* ErrorString);
	class UTexture2D* Victory_LoadTexture2D_FromFileByExtension(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height);
	class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, enum class EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height, TArray<struct FLinearColor>* OutPixels);
	class UTexture2D* Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, bool* IsValid, int32* Width, int32* Height);
	void Victory_GetStringFromOSClipboard(class FString* FromClipboard);
	bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32* TextureWidth, int32* TextureHeight, TArray<struct FLinearColor>* PixelArray);
	bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, struct FLinearColor* PixelColor);
	struct FDateTime Victory_GetFileTimeStamp(const class FString& File);
	bool Victory_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	bool Victory_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	bool Victory_Get_Pixel(TArray<struct FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, struct FLinearColor* FoundColor);
	void UTCToLocal(struct FDateTime& UTCTime, struct FDateTime* LocalTime);
	int32 Text_ToInt(class FText& Text, bool UseDotForThousands);
	float Text_ToFloat(class FText& Text, bool UseDotForThousands);
	class FString String__CombineStrings_Multi(const class FString& A, const class FString& B);
	class FString String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel);
	void ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers);
	void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	float NegateFloat(float A);
	bool LoadStringFromFile(class FString* Result, const class FString& FullFilePath);
	bool LoadStringArrayFromFile(TArray<class FString>* StringArray, int32* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines);
	class UObject* LoadObjectFromAssetPath(TSubclassOf<class UObject> ObjectClass, class FName Path, bool* IsValid);
	bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	bool IsAlphaNumeric(const class FString& String);
	class UPanelSlot* InsertChildAt(class UWidget* Parent, int32 Index, class UWidget* Content);
	bool HasSubstring(const class FString& SearchIn, const class FString& Substring, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir);
	class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, class FName& Name);
	void GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, struct FDateTime* UTCTime);
	int64 GetUnixTimeStamp(struct FDateTime& UTCTime);
	bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions, int32 LODIndex);
	class FName GetObjectPath(class UObject* Obj);
	void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels);
	class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
	class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
	class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
	int32 GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, class FName StartingBoneName, TArray<class FName>* BoneNames);
	bool GenerateUniqueContentRelativeFileName(const class FString& ContentRelativeFilePath, class FString* ContentRelativeNewFileName, class FString* AbsolutePath, bool CreateFolderTree);
	void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds);
	bool FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting, bool AllowAppend);
	bool FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const TArray<class FString>& SaveText, bool AllowOverWriting, bool AllowAppend);
	class UStaticMesh* CreateStaticMeshAssetFromDynamicMesh(const class FString& ContentFolderPath, class UDynamicMeshComponent* DynamicMeshComp, class FString* Status, class FString* NewAssetFilePath, bool* Success);
	bool ClosestPointsOnTwoLines(struct FVector* ClosestPointLine1, struct FVector* ClosestPointLine2, const struct FVector& LinePoint1, const struct FVector& LineVec1, const struct FVector& LinePoint2, const struct FVector& LineVec2);
	void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
	bool ClientWindow__GameWindowIsForeGroundInOS();
	bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	bool Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	bool Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	void Array_Sort(TArray<int32>& TargetArray, bool bAscendingOrder, class FName VariableName);
	class FString AppendMultiple(const class FString& A, const class FString& B);
	bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, struct FRotator& TheRotation, float* Pitch, float* Yaw);
	bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
	class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
};

}


