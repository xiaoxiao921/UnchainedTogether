#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VictoryBPLibrary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "VictoryBPLibrary_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class VictoryBPLibrary.RamaColorPicker
// 0x0030 (0x01B0 - 0x0180)
class URamaColorPicker final : public UWidget
{
public:
	struct FLinearColor                           JoyColor;                                          // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnColorChanged;                                    // 0x0190(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A0[0x10];                                     // 0x01A0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetJoyColor(const struct FLinearColor& NewColor, bool SkipAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RamaColorPicker">();
	}
	static class URamaColorPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<URamaColorPicker>();
	}
};
static_assert(alignof(URamaColorPicker) == 0x000008, "Wrong alignment on URamaColorPicker");
static_assert(sizeof(URamaColorPicker) == 0x0001B0, "Wrong size on URamaColorPicker");
static_assert(offsetof(URamaColorPicker, JoyColor) == 0x000180, "Member 'URamaColorPicker::JoyColor' has a wrong offset!");
static_assert(offsetof(URamaColorPicker, OnColorChanged) == 0x000190, "Member 'URamaColorPicker::OnColorChanged' has a wrong offset!");

// Class VictoryBPLibrary.RamaVictoryPluginCreateProcessPipe
// 0x0010 (0x0038 - 0x0028)
class URamaVictoryPluginCreateProcessPipe final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClosePipe();
	bool CreatePipe();
	bool PipeIsValid();
	bool ReadFromPipe(class FString* PipeContents);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RamaVictoryPluginCreateProcessPipe">();
	}
	static class URamaVictoryPluginCreateProcessPipe* GetDefaultObj()
	{
		return GetDefaultObjImpl<URamaVictoryPluginCreateProcessPipe>();
	}
};
static_assert(alignof(URamaVictoryPluginCreateProcessPipe) == 0x000008, "Wrong alignment on URamaVictoryPluginCreateProcessPipe");
static_assert(sizeof(URamaVictoryPluginCreateProcessPipe) == 0x000038, "Wrong size on URamaVictoryPluginCreateProcessPipe");

// Class VictoryBPLibrary.VictoryBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVictoryBPFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class APlayerController* Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid);
	static bool Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw);
	static bool Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw);
	static bool Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	static bool Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	static bool CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation);
	static bool CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour);
	static bool ClientWindow__GameWindowIsForeGroundInOS();
	static void ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2);
	static bool ClosestPointsOnTwoLines(struct FVector* ClosestPointLine1, struct FVector* ClosestPointLine2, const struct FVector& LinePoint1, const struct FVector& LineVec1, const struct FVector& LinePoint2, const struct FVector& LineVec2);
	static class UStaticMesh* CreateStaticMeshAssetFromDynamicMesh(const class FString& ContentFolderPath, class UDynamicMeshComponent* DynamicMeshComp, class FString* Status, class FString* NewAssetFilePath, bool* Success);
	static bool FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const TArray<class FString>& SaveText, bool AllowOverWriting, bool AllowAppend);
	static bool FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting, bool AllowAppend);
	static void FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32 MaxFlashCount, int32 FlashFrequencyMilliseconds);
	static bool GenerateUniqueContentRelativeFileName(const class FString& ContentRelativeFilePath, class FString* ContentRelativeNewFileName, class FString* AbsolutePath, bool CreateFolderTree);
	static int32 GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, class FName StartingBoneName, TArray<class FName>* BoneNames);
	static class AActor* GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid);
	static class AActor* GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FVector& Center, float Radius, bool* IsValid);
	static class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
	static void GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels);
	static class FName GetObjectPath(class UObject* Obj);
	static bool GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions, int32 LODIndex);
	static int64 GetUnixTimeStamp(const struct FDateTime& UTCTime);
	static void GetUTCFromUnixTimeStamp(int64 UnixTimeStamp, struct FDateTime* UTCTime);
	static class UWidget* GetWidgetFromName(class UUserWidget* ParentUserWidget, const class FName& Name_0);
	static bool HasSubstring(const class FString& SearchIn, const class FString& Substring, ESearchCase SearchCase, ESearchDir SearchDir);
	static bool IsAlphaNumeric(const class FString& String);
	static bool IsWidgetOfClassInViewport(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	static class UObject* LoadObjectFromAssetPath(TSubclassOf<class UObject> ObjectClass, class FName Path, bool* IsValid);
	static bool LoadStringArrayFromFile(TArray<class FString>* StringArray, int32* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines);
	static bool LoadStringFromFile(class FString* Result, const class FString& FullFilePath);
	static void RemoveAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass);
	static void ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers);
	static class FString String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel);
	static class FString String__CombineStrings_Multi(const class FString& A, const class FString& B);
	static float Text_ToFloat(const class FText& Text, bool UseDotForThousands);
	static int32 Text_ToInt(const class FText& Text, bool UseDotForThousands);
	static void UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime);
	static bool Victory_Get_Pixel(const TArray<struct FLinearColor>& Pixels, int32 ImageHeight, int32 X, int32 Y, struct FLinearColor* FoundColor);
	static bool Victory_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	static bool Victory_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext);
	static struct FDateTime Victory_GetFileTimeStamp(const class FString& File);
	static bool Victory_GetPixelFromT2D(class UTexture2D* T2D, int32 X, int32 Y, struct FLinearColor* PixelColor);
	static bool Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32* TextureWidth, int32* TextureHeight, TArray<struct FLinearColor>* PixelArray);
	static void Victory_GetStringFromOSClipboard(class FString* FromClipboard);
	static class UTexture2D* Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, bool* IsValid, int32* Width, int32* Height);
	static class UTexture2D* Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height, TArray<struct FLinearColor>* OutPixels);
	static class UTexture2D* Victory_LoadTexture2D_FromFileByExtension(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32* Width, int32* Height);
	static bool Victory_SavePixels(const class FString& FullFilePath, int32 Width, int32 Height, const TArray<struct FLinearColor>& ImagePixels, bool SaveAsBMP, bool SRGB, class FString* ErrorString);
	static void Victory_SaveStringToOSClipboard(const class FString& ToClipboard);
	static void Victory_SetTimeStamp(const class FString& File, const struct FDateTime& Timestamp);
	static void VictoryCreateProc(int32* ProcessId, const class FString& FullPathOfProgramToRun, const TArray<class FString>& CommandlineArgs, bool Detach, bool Hidden, int32 Priority, const class FString& OptionalWorkingDirectory, class URamaVictoryPluginCreateProcessPipe* ReadPipeObject);
	static void VictoryFloatMinusEquals(float& Float, float Sub, float* FloatOut);
	static void VictoryFloatPlusEquals(float& Float, float Add, float* FloatOut);
	static class FString VictoryGetApplicationName(int32 ProcessId);
	static bool VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static struct FLinearColor VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static float VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static int32 VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static struct FRotator VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static class FString VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static struct FVector VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static struct FVector2D VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid);
	static void VictoryIntMinusEquals(int32& Int, int32 Sub, int32* IntOut);
	static void VictoryIntPlusEquals(int32& Int, int32 Add, int32* IntOut);
	static bool VictoryIsApplicationRunning(int32 ProcessId);
	static void VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value);
	static void VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value);
	static void VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value);
	static void VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32 Value);
	static void VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FRotator& Value);
	static void VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value);
	static void VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FVector& Value);
	static void VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FVector2D& Value);
	static void VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, EInputEvent EventType);
	static void VictorySimulateMouseWheel(const float& Delta);
	static void VictorySortFloatArray(TArray<float>& FloatArray, TArray<float>* FloatArrayRef);
	static void VictorySortIntArray(TArray<int32>& IntArray, TArray<int32>* IntArrayRef);
	static void VictorySortStringArray(TArray<class FString>& StringArray, TArray<class FString>* StringArrayRef);
	static bool Viewport__GetCenterOfViewport(const class APlayerController* ThePC, float* PosX, float* PosY);
	static bool Viewport__GetMousePosition(const class APlayerController* ThePC, float* PosX, float* PosY);
	static bool Viewport__SetMousePosition(const class APlayerController* ThePC, const float& PosX, const float& PosY);
	static bool ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection);
	static void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
	static class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
	static bool WorldType__InEditorWorld(class UObject* WorldContextObject);
	static bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
	static bool WorldType__InPIEWorld(class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryBPFunctionLibrary">();
	}
	static class UVictoryBPFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryBPFunctionLibrary>();
	}
};
static_assert(alignof(UVictoryBPFunctionLibrary) == 0x000008, "Wrong alignment on UVictoryBPFunctionLibrary");
static_assert(sizeof(UVictoryBPFunctionLibrary) == 0x000028, "Wrong size on UVictoryBPFunctionLibrary");

}

