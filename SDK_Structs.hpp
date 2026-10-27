#pragma once

#include <cstdio>
#include <string>
#include <cstdint>


// Package: CoreUObject
// Structs: 64

// Object: ScriptStruct CoreUObject.JoinabilitySettings
// Size: 0x14 (Inherited: 0x0)
struct FJoinabilitySettings
{
	struct FName SessionName; // 0x0(0x8)
	bool bPublicSearchable; // 0x8(0x1)
	bool bAllowInvites; // 0x9(0x1)
	bool bJoinViaPresence; // 0xA(0x1)
	bool bJoinViaPresenceFriendsOnly; // 0xB(0x1)
	int32_t MaxPlayers; // 0xC(0x4)
	int32_t MaxPartySize; // 0x10(0x4)
};

// Object: ScriptStruct CoreUObject.Default__ScriptStruct
// Size: 0x0 (Inherited: 0x0)
struct FDefault__ScriptStruct
{
};

// Object: ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size: 0x1 (Inherited: 0x0)
struct FUniqueNetIdWrapper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.Guid
// Size: 0x10 (Inherited: 0x0)
struct FGuid
{
	int32_t A; // 0x0(0x4)
	int32_t B; // 0x4(0x4)
	int32_t C; // 0x8(0x4)
	int32_t D; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Vector
// Size: 0xC (Inherited: 0x0)
struct FVector
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x0)
struct FVector4
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Vector2D
// Size: 0x8 (Inherited: 0x0)
struct FVector2D
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FTwoVectors
{
	struct FVector v1; // 0x0(0xC)
	struct FVector v2; // 0xC(0xC)
};

// Object: ScriptStruct CoreUObject.Plane
// Size: 0x10 (Inherited: 0xC)
struct FPlane : FVector
{
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Rotator
// Size: 0xC (Inherited: 0x0)
struct FRotator
{
	float Pitch; // 0x0(0x4)
	float Yaw; // 0x4(0x4)
	float Roll; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Quat
// Size: 0x10 (Inherited: 0x0)
struct FQuat
{
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.PackedNormal
// Size: 0x4 (Inherited: 0x0)
struct FPackedNormal
{
	uint8_t X; // 0x0(0x1)
	uint8_t Y; // 0x1(0x1)
	uint8_t Z; // 0x2(0x1)
	uint8_t W; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.PackedRGB10A2N
// Size: 0x4 (Inherited: 0x0)
struct FPackedRGB10A2N
{
	int32_t Packed; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.PackedRGBA16N
// Size: 0x8 (Inherited: 0x0)
struct FPackedRGBA16N
{
	int32_t XY; // 0x0(0x4)
	int32_t ZW; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntPoint
// Size: 0x8 (Inherited: 0x0)
struct FIntPoint
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.IntVector
// Size: 0xC (Inherited: 0x0)
struct FIntVector
{
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
	int32_t Z; // 0x8(0x4)
};

// Object: ScriptStruct CoreUObject.Color
// Size: 0x4 (Inherited: 0x0)
struct FColor
{
	uint8_t B; // 0x0(0x1)
	uint8_t G; // 0x1(0x1)
	uint8_t R; // 0x2(0x1)
	uint8_t A; // 0x3(0x1)
};

// Object: ScriptStruct CoreUObject.LinearColor
// Size: 0x10 (Inherited: 0x0)
struct FLinearColor
{
	float R; // 0x0(0x4)
	float G; // 0x4(0x4)
	float B; // 0x8(0x4)
	float A; // 0xC(0x4)
};

// Object: ScriptStruct CoreUObject.Box
// Size: 0x1C (Inherited: 0x0)
struct FBox
{
	struct FVector Min; // 0x0(0xC)
	struct FVector Max; // 0xC(0xC)
	uint8_t IsValid; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct CoreUObject.Box2D
// Size: 0x14 (Inherited: 0x0)
struct FBox2D
{
	struct FVector2D Min; // 0x0(0x8)
	struct FVector2D Max; // 0x8(0x8)
	uint8_t bIsValid; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.BoxSphereBounds
// Size: 0x1C (Inherited: 0x0)
struct FBoxSphereBounds
{
	struct FVector Origin; // 0x0(0xC)
	struct FVector BoxExtent; // 0xC(0xC)
	float SphereRadius; // 0x18(0x4)
};

// Object: ScriptStruct CoreUObject.OrientedBox
// Size: 0x3C (Inherited: 0x0)
struct FOrientedBox
{
	struct FVector Center; // 0x0(0xC)
	struct FVector AxisX; // 0xC(0xC)
	struct FVector AxisY; // 0x18(0xC)
	struct FVector AxisZ; // 0x24(0xC)
	float ExtentX; // 0x30(0x4)
	float ExtentY; // 0x34(0x4)
	float ExtentZ; // 0x38(0x4)
};

// Object: ScriptStruct CoreUObject.Matrix
// Size: 0x40 (Inherited: 0x0)
struct FMatrix
{
	struct FPlane XPlane; // 0x0(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointFloat
// Size: 0x14 (Inherited: 0x0)
struct FInterpCurvePointFloat
{
	float InVal; // 0x0(0x4)
	float OutVal; // 0x4(0x4)
	float ArriveTangent; // 0x8(0x4)
	float LeaveTangent; // 0xC(0x4)
	uint8_t InterpMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveFloat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size: 0x20 (Inherited: 0x0)
struct FInterpCurvePointVector2D
{
	float InVal; // 0x0(0x4)
	struct FVector2D OutVal; // 0x4(0x8)
	struct FVector2D ArriveTangent; // 0xC(0x8)
	struct FVector2D LeaveTangent; // 0x14(0x8)
	uint8_t InterpMode; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector2D
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointVector
// Size: 0x2C (Inherited: 0x0)
struct FInterpCurvePointVector
{
	float InVal; // 0x0(0x4)
	struct FVector OutVal; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	uint8_t InterpMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveVector
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointQuat
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointQuat
{
	float InVal; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	uint8_t InterpMode; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)
};

// Object: ScriptStruct CoreUObject.InterpCurveQuat
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size: 0x50 (Inherited: 0x0)
struct FInterpCurvePointTwoVectors
{
	float InVal; // 0x0(0x4)
	struct FTwoVectors OutVal; // 0x4(0x18)
	struct FTwoVectors ArriveTangent; // 0x1C(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	uint8_t InterpMode; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size: 0x38 (Inherited: 0x0)
struct FInterpCurvePointLinearColor
{
	float InVal; // 0x0(0x4)
	struct FLinearColor OutVal; // 0x4(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	uint8_t InterpMode; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CoreUObject.InterpCurveLinearColor
// Size: 0x18 (Inherited: 0x0)
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// Object: ScriptStruct CoreUObject.Transform
// Size: 0x30 (Inherited: 0x0)
struct FTransform
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Translation; // 0x10(0xC)
	struct FVector Scale3D; // 0x1C(0xC)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct CoreUObject.RandomStream
// Size: 0x8 (Inherited: 0x0)
struct FRandomStream
{
	int32_t InitialSeed; // 0x0(0x4)
	int32_t Seed; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.DateTime
// Size: 0x8 (Inherited: 0x0)
struct FDateTime
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.FrameNumber
// Size: 0x4 (Inherited: 0x0)
struct FFrameNumber
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct CoreUObject.FrameRate
// Size: 0x8 (Inherited: 0x0)
struct FFrameRate
{
	int32_t Numerator; // 0x0(0x4)
	int32_t Denominator; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FrameTime
// Size: 0x8 (Inherited: 0x0)
struct FFrameTime
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	float SubFrame; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.QualifiedFrameTime
// Size: 0x10 (Inherited: 0x0)
struct FQualifiedFrameTime
{
	struct FFrameTime Time; // 0x0(0x8)
	struct FFrameRate Rate; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Timecode
// Size: 0x14 (Inherited: 0x0)
struct FTimecode
{
	int32_t Hours; // 0x0(0x4)
	int32_t Minutes; // 0x4(0x4)
	int32_t Seconds; // 0x8(0x4)
	int32_t Frames; // 0xC(0x4)
	bool bDropFrameFormat; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct CoreUObject.Timespan
// Size: 0x8 (Inherited: 0x0)
struct FTimespan
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.SoftObjectPath
// Size: 0x18 (Inherited: 0x0)
struct FSoftObjectPath
{
	struct FName AssetPathName; // 0x0(0x8)
	struct FString SubPathString; // 0x8(0x10)
};

// Object: ScriptStruct CoreUObject.SoftClassPath
// Size: 0x18 (Inherited: 0x18)
struct FSoftClassPath : FSoftObjectPath
{
};

// Object: ScriptStruct CoreUObject.PrimaryAssetType
// Size: 0x8 (Inherited: 0x0)
struct FPrimaryAssetType
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct CoreUObject.PrimaryAssetId
// Size: 0x10 (Inherited: 0x0)
struct FPrimaryAssetId
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FName PrimaryAssetName; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FallbackStruct
// Size: 0x1 (Inherited: 0x0)
struct FFallbackStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct CoreUObject.FloatRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FFloatRangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FloatRange
// Size: 0x10 (Inherited: 0x0)
struct FFloatRange
{
	struct FFloatRangeBound LowerBound; // 0x0(0x8)
	struct FFloatRangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.Int32RangeBound
// Size: 0x8 (Inherited: 0x0)
struct FInt32RangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Range
// Size: 0x10 (Inherited: 0x0)
struct FInt32Range
{
	struct FInt32RangeBound LowerBound; // 0x0(0x8)
	struct FInt32RangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FrameNumberRangeBound
// Size: 0x8 (Inherited: 0x0)
struct FFrameNumberRangeBound
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFrameNumber Value; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.FrameNumberRange
// Size: 0x10 (Inherited: 0x0)
struct FFrameNumberRange
{
	struct FFrameNumberRangeBound LowerBound; // 0x0(0x8)
	struct FFrameNumberRangeBound UpperBound; // 0x8(0x8)
};

// Object: ScriptStruct CoreUObject.FloatInterval
// Size: 0x8 (Inherited: 0x0)
struct FFloatInterval
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.Int32Interval
// Size: 0x8 (Inherited: 0x0)
struct FInt32Interval
{
	int32_t Min; // 0x0(0x4)
	int32_t Max; // 0x4(0x4)
};

// Object: ScriptStruct CoreUObject.PolyglotTextData
// Size: 0xB8 (Inherited: 0x0)
struct FPolyglotTextData
{
	enum class ELocalizedTextSourceCategory Category; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString NativeCulture; // 0x8(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FText CachedText; // 0xA0(0x18)
};

// Object: ScriptStruct CoreUObject.AutomationEvent
// Size: 0x38 (Inherited: 0x0)
struct FAutomationEvent
{
	enum class EAutomationEventType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// Object: ScriptStruct CoreUObject.AutomationExecutionEntry
// Size: 0x58 (Inherited: 0x0)
struct FAutomationExecutionEntry
{
	struct FAutomationEvent Event; // 0x0(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FDateTime Timestamp; // 0x50(0x8)
};

// Object: ScriptStruct CoreUObject.ARFilter
// Size: 0xF0 (Inherited: 0x0)
struct FARFilter
{
	struct TArray<struct FName> PackageNames; // 0x0(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	uint8_t Pad_0x40[0x50]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xE0(0x1)
	bool bRecursiveClasses; // 0xE1(0x1)
	bool bIncludeOnlyOnDiskAssets; // 0xE2(0x1)
	uint8_t Pad_0xE3[0xD]; // 0xE3(0xD)
};

// Object: ScriptStruct CoreUObject.AssetBundleEntry
// Size: 0x28 (Inherited: 0x0)
struct FAssetBundleEntry
{
	struct FPrimaryAssetId BundleScope; // 0x0(0x10)
	struct FName BundleName; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18(0x10)
};

// Object: ScriptStruct CoreUObject.AssetBundleData
// Size: 0x10 (Inherited: 0x0)
struct FAssetBundleData
{
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x0(0x10)
};

// Object: ScriptStruct CoreUObject.AssetData
// Size: 0x50 (Inherited: 0x0)
struct FAssetData
{
	struct FName ObjectPath; // 0x0(0x8)
	struct FName PackageName; // 0x8(0x8)
	struct FName PackagePath; // 0x10(0x8)
	struct FName AssetName; // 0x18(0x8)
	struct FName AssetClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Package: Engine
// Structs: 697

// Object: ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x0)
struct FDistributionLookupTable
{
	float TimeScale; // 0x0(0x4)
	float TimeBias; // 0x4(0x4)
	struct TArray<float> Values; // 0x8(0x10)
	uint8_t Op; // 0x18(0x1)
	uint8_t EntryCount; // 0x19(0x1)
	uint8_t EntryStride; // 0x1A(0x1)
	uint8_t SubEntryStride; // 0x1B(0x1)
	uint8_t LockFlag; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x0)
struct FRawDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x0)
struct FFloatDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x0)
struct FVectorDistribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x0)
struct FVector4Distribution
{
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// Object: ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x8 (Inherited: 0x0)
struct FFloatRK4SpringInterpolator
{
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// Object: ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x8 (Inherited: 0x0)
struct FVectorRK4SpringInterpolator
{
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// Object: ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x0)
struct FFormatArgumentData
{
	struct FString ArgumentName; // 0x0(0x10)
	uint8_t ArgumentValueType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x4)
	float ArgumentValueFloat; // 0x34(0x4)
	enum class ETextGender ArgumentValueGender; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.ExpressionInput
// Size: 0xC (Inherited: 0x0)
struct FExpressionInput
{
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0xC)
struct FMaterialAttributesInput : FExpressionInput
{
	int32_t PropertyConnectedBitmask; // 0xC(0x4)
};

// Object: ScriptStruct Engine.ExpressionOutput
// Size: 0x8 (Inherited: 0x0)
struct FExpressionOutput
{
	struct FName OutputName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.MaterialInput
// Size: 0xC (Inherited: 0x0)
struct FMaterialInput
{
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.ColorMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FColorMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.ScalarMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FScalarMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FShadingModelMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.VectorMaterialInput
// Size: 0xC (Inherited: 0xC)
struct FVectorMaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.Vector2MaterialInput
// Size: 0xC (Inherited: 0xC)
struct FVector2MaterialInput : FMaterialInput
{
};

// Object: ScriptStruct Engine.HitResult
// Size: 0x8C (Inherited: 0x0)
struct FHitResult
{
	uint8_t bBlockingHit : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bStartPenetrating : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t FaceIndex; // 0x4(0x4)
	float Time; // 0x8(0x4)
	float Distance; // 0xC(0x4)
	struct FVector_NetQuantize Location; // 0x10(0xC)
	struct FVector_NetQuantize ImpactPoint; // 0x1C(0xC)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0xC)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0xC)
	struct FVector_NetQuantize TraceStart; // 0x40(0xC)
	struct FVector_NetQuantize TraceEnd; // 0x4C(0xC)
	float PenetrationDepth; // 0x58(0x4)
	int32_t Item; // 0x5C(0x4)
	uint8_t ElementIndex; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x64(0x8)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x6C(0x8)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x74(0x8)
	struct FName BoneName; // 0x7C(0x8)
	struct FName MyBoneName; // 0x84(0x8)
};

// Object: ScriptStruct Engine.Vector_NetQuantize
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize : FVector
{
};

// Object: ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantizeNormal : FVector
{
};

// Object: ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x0)
struct FBranchingPointNotifyPayload
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x0)
struct FSimpleMemberReference
{
	struct UObject* MemberParent; // 0x0(0x8)
	struct FName MemberName; // 0x8(0x8)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x0)
struct FTickFunction
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t TickGroup; // 0x8(0x1)
	uint8_t EndTickGroup; // 0x9(0x1)
	uint8_t bTickEvenWhenPaused : 1; // 0xA(0x1), Mask(0x1)
	uint8_t bCanEverTick : 1; // 0xA(0x1), Mask(0x2)
	uint8_t bStartWithTickEnabled : 1; // 0xA(0x1), Mask(0x4)
	uint8_t bAllowTickOnDedicatedServer : 1; // 0xA(0x1), Mask(0x8)
	uint8_t BitPad_0xA_4 : 4; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
	float TickInterval; // 0xC(0x4)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x0)
struct FSubtitleCue
{
	struct FText Text; // 0x0(0x18)
	float Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InterpControlPoint
// Size: 0x1C (Inherited: 0x0)
struct FInterpControlPoint
{
	struct FVector PositionControlPoint; // 0x0(0xC)
	bool bPositionIsRelative; // 0xC(0x1)
	uint8_t Pad_0xD[0xF]; // 0xD(0xF)
};

// Object: ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x0)
struct FPlatformInterfaceDelegateResult
{
	bool bSuccessful; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FPlatformInterfaceData Data; // 0x8(0x30)
};

// Object: ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x0)
struct FPlatformInterfaceData
{
	struct FName DataName; // 0x0(0x8)
	uint8_t Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t IntValue; // 0xC(0x4)
	float FloatValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x8)
};

// Object: ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x0)
struct FDebugFloatHistory
{
	struct TArray<float> Samples; // 0x0(0x10)
	float MaxSamples; // 0x10(0x4)
	float MinValue; // 0x14(0x4)
	float MaxValue; // 0x18(0x4)
	bool bAutoAdjustMinMax; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x0)
struct FLatentActionInfo
{
	int32_t Linkage; // 0x0(0x4)
	int32_t UUID; // 0x4(0x4)
	struct FName ExecutionFunction; // 0x8(0x8)
	struct UObject* CallbackTarget; // 0x10(0x8)
};

// Object: ScriptStruct Engine.TimerHandle
// Size: 0x8 (Inherited: 0x0)
struct FTimerHandle
{
	uint64_t Handle; // 0x0(0x8)
};

// Object: ScriptStruct Engine.CollisionProfileName
// Size: 0x8 (Inherited: 0x0)
struct FCollisionProfileName
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct Engine.GenericStruct
// Size: 0x4 (Inherited: 0x0)
struct FGenericStruct
{
	int32_t Data; // 0x0(0x4)
};

// Object: ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x0)
struct FUserActivity
{
	struct FString ActionName; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x0)
struct FWalkableSlopeOverride
{
	uint8_t WalkableSlopeBehavior; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float WalkableSlopeAngle; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BodyInstance
// Size: 0x150 (Inherited: 0x18)
struct FBodyInstance : FBodyInstanceCore
{
	uint8_t Pad_0x18[0x2]; // 0x18(0x2)
	uint8_t ObjectType; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	uint8_t CollisionEnabled; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x34]; // 0x1D(0x34)
	enum class ESleepFamily SleepFamily; // 0x51(0x1)
	uint8_t DOFMode; // 0x52(0x1)
	uint8_t bUseCCD : 1; // 0x53(0x1), Mask(0x1)
	uint8_t bIgnoreAnalyticCollisions : 1; // 0x53(0x1), Mask(0x2)
	uint8_t bNotifyRigidBodyCollision : 1; // 0x53(0x1), Mask(0x4)
	uint8_t BitPad_0x53_3 : 1; // 0x53(0x1)
	uint8_t bLockTranslation : 1; // 0x53(0x1), Mask(0x10)
	uint8_t bLockRotation : 1; // 0x53(0x1), Mask(0x20)
	uint8_t bLockXTranslation : 1; // 0x53(0x1), Mask(0x40)
	uint8_t bLockYTranslation : 1; // 0x53(0x1), Mask(0x80)
	uint8_t bLockZTranslation : 1; // 0x54(0x1), Mask(0x1)
	uint8_t bLockXRotation : 1; // 0x54(0x1), Mask(0x2)
	uint8_t bLockYRotation : 1; // 0x54(0x1), Mask(0x4)
	uint8_t bLockZRotation : 1; // 0x54(0x1), Mask(0x8)
	uint8_t bOverrideMaxAngularVelocity : 1; // 0x54(0x1), Mask(0x10)
	uint8_t BitPad_0x54_5 : 2; // 0x54(0x1)
	uint8_t bOverrideMaxDepenetrationVelocity : 1; // 0x54(0x1), Mask(0x80)
	uint8_t bOverrideWalkableSlopeOnInstance : 1; // 0x55(0x1), Mask(0x1)
	uint8_t bInterpolateWhenSubStepping : 1; // 0x55(0x1), Mask(0x2)
	uint8_t BitPad_0x55_2 : 6; // 0x55(0x1)
	uint8_t Pad_0x56[0xE]; // 0x56(0xE)
	struct FName CollisionProfileName; // 0x64(0x8)
	uint8_t PositionSolverIterationCount; // 0x6C(0x1)
	uint8_t VelocitySolverIterationCount; // 0x6D(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
	struct FCollisionResponse CollisionResponses; // 0x70(0x30)
	float MaxDepenetrationVelocity; // 0xA0(0x4)
	float MassInKgOverride; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x8]; // 0xA8(0x8)
	float LinearDamping; // 0xB0(0x4)
	float AngularDamping; // 0xB4(0x4)
	struct FVector CustomDOFPlaneNormal; // 0xB8(0xC)
	struct FVector COMNudge; // 0xC4(0xC)
	float MassScale; // 0xD0(0x4)
	struct FVector InertiaTensorScale; // 0xD4(0xC)
	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xF0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x100(0x8)
	float MaxAngularVelocity; // 0x108(0x4)
	float CustomSleepThresholdMultiplier; // 0x10C(0x4)
	float StabilizationThresholdMultiplier; // 0x110(0x4)
	float PhysicsBlendWeight; // 0x114(0x4)
	uint8_t Pad_0x118[0x38]; // 0x118(0x38)
};

// Object: ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x0)
struct FCollisionResponse
{
	struct FCollisionResponseContainer ResponseToChannels; // 0x0(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ResponseChannel
// Size: 0xC (Inherited: 0x0)
struct FResponseChannel
{
	struct FName Channel; // 0x0(0x8)
	uint8_t Response; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x0)
struct FCollisionResponseContainer
{
	uint8_t WorldStatic; // 0x0(0x1)
	uint8_t WorldDynamic; // 0x1(0x1)
	uint8_t Pawn; // 0x2(0x1)
	uint8_t Visibility; // 0x3(0x1)
	uint8_t Camera; // 0x4(0x1)
	uint8_t PhysicsBody; // 0x5(0x1)
	uint8_t Vehicle; // 0x6(0x1)
	uint8_t Destructible; // 0x7(0x1)
	uint8_t EngineTraceChannel1; // 0x8(0x1)
	uint8_t EngineTraceChannel2; // 0x9(0x1)
	uint8_t EngineTraceChannel3; // 0xA(0x1)
	uint8_t EngineTraceChannel4; // 0xB(0x1)
	uint8_t EngineTraceChannel5; // 0xC(0x1)
	uint8_t EngineTraceChannel6; // 0xD(0x1)
	uint8_t GameTraceChannel1; // 0xE(0x1)
	uint8_t GameTraceChannel2; // 0xF(0x1)
	uint8_t GameTraceChannel3; // 0x10(0x1)
	uint8_t GameTraceChannel4; // 0x11(0x1)
	uint8_t GameTraceChannel5; // 0x12(0x1)
	uint8_t GameTraceChannel6; // 0x13(0x1)
	uint8_t GameTraceChannel7; // 0x14(0x1)
	uint8_t GameTraceChannel8; // 0x15(0x1)
	uint8_t GameTraceChannel9; // 0x16(0x1)
	uint8_t GameTraceChannel10; // 0x17(0x1)
	uint8_t GameTraceChannel11; // 0x18(0x1)
	uint8_t GameTraceChannel12; // 0x19(0x1)
	uint8_t GameTraceChannel13; // 0x1A(0x1)
	uint8_t GameTraceChannel14; // 0x1B(0x1)
	uint8_t GameTraceChannel15; // 0x1C(0x1)
	uint8_t GameTraceChannel16; // 0x1D(0x1)
	uint8_t GameTraceChannel17; // 0x1E(0x1)
	uint8_t GameTraceChannel18; // 0x1F(0x1)
};

// Object: ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x0)
struct FCustomPrimitiveData
{
	struct TArray<float> Data; // 0x0(0x10)
};

// Object: ScriptStruct Engine.LightingChannels
// Size: 0x1 (Inherited: 0x0)
struct FLightingChannels
{
	uint8_t bChannel0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bChannel1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bChannel2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
};

// Object: ScriptStruct Engine.PerPlatformFloat
// Size: 0x4 (Inherited: 0x0)
struct FPerPlatformFloat
{
	float Default; // 0x0(0x4)
};

// Object: ScriptStruct Engine.PerPlatformInt
// Size: 0x4 (Inherited: 0x0)
struct FPerPlatformInt
{
	int32_t Default; // 0x0(0x4)
};

// Object: ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x0)
struct FRuntimeFloatCurve
{
	struct FRichCurve EditorCurveData; // 0x0(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x8)
};

// Object: ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x0)
struct FIndexedCurve
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x8(0x60)
};

// Object: ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x0)
struct FKeyHandleMap
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve
{
	float DefaultValue; // 0x68(0x4)
	uint8_t PreInfinityExtrap; // 0x6C(0x1)
	uint8_t PostInfinityExtrap; // 0x6D(0x1)
	uint8_t Pad_0x6E[0x2]; // 0x6E(0x2)
};

// Object: ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve
{
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// Object: ScriptStruct Engine.RichCurveKey
// Size: 0x1C (Inherited: 0x0)
struct FRichCurveKey
{
	uint8_t InterpMode; // 0x0(0x1)
	uint8_t TangentMode; // 0x1(0x1)
	uint8_t TangentWeightMode; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float Time; // 0x4(0x4)
	float Value; // 0x8(0x4)
	float ArriveTangent; // 0xC(0x4)
	float ArriveTangentWeight; // 0x10(0x4)
	float LeaveTangent; // 0x14(0x4)
	float LeaveTangentWeight; // 0x18(0x4)
};

// Object: ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x0)
struct FKeyHandleLookupTable
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x1)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper
{
	uint8_t Pad_0x1[0x17]; // 0x1(0x17)
	struct TArray<uint8_t> ReplicationBytes; // 0x18(0x10)
};

// Object: ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x0)
struct FAnimNode_Base
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x0)
struct FPoseLinkBase
{
	int32_t LinkID; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
};

// Object: ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase
{
};

// Object: ScriptStruct Engine.AnimInstanceProxy
// Size: 0x760 (Inherited: 0x0)
struct FAnimInstanceProxy
{
	uint8_t Pad_0x0[0x760]; // 0x0(0x760)
};

// Object: ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base
{
	struct FName GroupName; // 0x10(0x8)
	uint8_t GroupRole; // 0x18(0x1)
	enum class EAnimSyncGroupScope GroupScope; // 0x19(0x1)
	bool bIgnoreForRelevancyTest; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	float BlendWeight; // 0x1C(0x4)
	float InternalTimeAccumulator; // 0x20(0x4)
	uint8_t Pad_0x24[0x14]; // 0x24(0x14)
};

// Object: ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x0)
struct FInputScaleBiasClamp
{
	bool bMapRange; // 0x0(0x1)
	bool bClampResult; // 0x1(0x1)
	bool bInterpResult; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FInputRange InRange; // 0x4(0x8)
	struct FInputRange OutRange; // 0xC(0x8)
	float Scale; // 0x14(0x4)
	float Bias; // 0x18(0x4)
	float ClampMin; // 0x1C(0x4)
	float ClampMax; // 0x20(0x4)
	float InterpSpeedIncreasing; // 0x24(0x4)
	float InterpSpeedDecreasing; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.InputRange
// Size: 0x8 (Inherited: 0x0)
struct FInputRange
{
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// Object: ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x0)
struct FInputAlphaBoolBlend
{
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
	enum class EAlphaBlendOption BlendOption; // 0x8(0x1)
	bool bInitialized; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct UCurveFloat* CustomCurve; // 0x10(0x8)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// Object: ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x0)
struct FAlphaBlend
{
	struct UCurveFloat* CustomCurve; // 0x0(0x8)
	float BlendTime; // 0x8(0x4)
	uint8_t Pad_0xC[0x18]; // 0xC(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x1)
	uint8_t Pad_0x25[0xB]; // 0x25(0xB)
};

// Object: ScriptStruct Engine.InputScaleBias
// Size: 0x8 (Inherited: 0x0)
struct FInputScaleBias
{
	float Scale; // 0x0(0x4)
	float Bias; // 0x4(0x4)
};

// Object: ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase
{
};

// Object: ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x0)
struct FBoneReference
{
	struct FName BoneName; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x8 (Inherited: 0x0)
struct FPerBoneBlendWeight
{
	int32_t SourceIndex; // 0x0(0x4)
	float BlendWeight; // 0x4(0x4)
};

// Object: ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x0)
struct FInputBlendPose
{
	struct TArray<struct FBranchFilter> BranchFilters; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BranchFilter
// Size: 0xC (Inherited: 0x0)
struct FBranchFilter
{
	struct FName BoneName; // 0x0(0x8)
	int32_t BlendDepth; // 0x8(0x4)
};

// Object: ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x0)
struct FPoseSnapshot
{
	struct TArray<struct FTransform> LocalTransforms; // 0x0(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x8)
	struct FName SnapshotName; // 0x28(0x8)
	bool bIsValid; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct Engine.AnimNode_Root
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base
{
	struct FPoseLink Result; // 0x10(0x10)
	struct FName Name; // 0x20(0x8)
	struct FName Group; // 0x28(0x8)
};

// Object: ScriptStruct Engine.AnimCurveParam
// Size: 0xC (Inherited: 0x0)
struct FAnimCurveParam
{
	struct FName Name; // 0x0(0x8)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct Engine.TableRowBase
// Size: 0x8 (Inherited: 0x0)
struct FTableRowBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x68 (Inherited: 0x0)
struct FActorComponentInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* SourceComponentTemplate; // 0x8(0x8)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x4)
	struct TArray<uint8_t> SavedProperties; // 0x18(0x10)
	struct FActorComponentDuplicatedObjectData UniqueTransientPackage; // 0x28(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x38(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x48(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x58(0x10)
};

// Object: ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x0)
struct FActorComponentDuplicatedObjectData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xB8 (Inherited: 0x68)
struct FSceneComponentInstanceData : FActorComponentInstanceData
{
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x68(0x50)
};

// Object: ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x0)
struct FRepAttachment
{
	struct AActor* AttachParent; // 0x0(0x8)
	struct FVector_NetQuantize100 LocationOffset; // 0x8(0xC)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0xC)
	struct FRotator RotationOffset; // 0x20(0xC)
	struct FName AttachSocket; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct USceneComponent* AttachComponent; // 0x38(0x8)
};

// Object: ScriptStruct Engine.Vector_NetQuantize100
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize100 : FVector
{
};

// Object: ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x0)
struct FRepMovement
{
	struct FVector LinearVelocity; // 0x0(0xC)
	struct FVector AngularVelocity; // 0xC(0xC)
	struct FVector Location; // 0x18(0xC)
	struct FRotator Rotation; // 0x24(0xC)
	uint8_t bSimulatedPhysicSleep : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bRepPhysics : 1; // 0x30(0x1), Mask(0x2)
	uint8_t BitPad_0x30_2 : 6; // 0x30(0x1)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x31(0x1)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x32(0x1)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x33(0x1)
};

// Object: ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x0)
struct FDirectoryPath
{
	struct FString Path; // 0x0(0x10)
};

// Object: ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x0)
struct FKAggregateGeom
{
	struct TArray<struct FKSphereElem> SphereElems; // 0x0(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x0)
struct FKShapeElem
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	float RestOffset; // 0x8(0x4)
	struct FName Name; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	uint8_t bContributeToMass : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t CollisionEnabled; // 0x19(0x1)
	uint8_t Pad_0x1A[0x16]; // 0x1A(0x16)
};

// Object: ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius0; // 0x48(0x4)
	float Radius1; // 0x4C(0x4)
	float Length; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Engine.KConvexElem
// Size: 0xB0 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem
{
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x1C)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FTransform Transform; // 0x70(0x30)
	uint8_t Pad_0xA0[0x10]; // 0xA0(0x10)
};

// Object: ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius; // 0x48(0x4)
	float Length; // 0x4C(0x4)
};

// Object: ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float X; // 0x48(0x4)
	float Y; // 0x4C(0x4)
	float Z; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem
{
	struct FVector Center; // 0x30(0xC)
	float Radius; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.AnimationGroupReference
// Size: 0xC (Inherited: 0x0)
struct FAnimationGroupReference
{
	struct FName GroupName; // 0x0(0x8)
	uint8_t GroupRole; // 0x8(0x1)
	enum class EAnimSyncGroupScope GroupScope; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x0)
struct FRootMotionMovementParams
{
	bool bHasRootMotion; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float BlendWeight; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x0)
struct FAnimGroupInstance
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x0)
struct FAnimTickRecord
{
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	uint8_t Pad_0x8[0x40]; // 0x8(0x40)
};

// Object: ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x0)
struct FMarkerSyncAnimPosition
{
	struct FName PreviousMarkerName; // 0x0(0x8)
	struct FName NextMarkerName; // 0x8(0x8)
	float PositionBetweenMarkers; // 0x10(0x4)
};

// Object: ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x0)
struct FBlendFilter
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x0)
struct FBlendSampleData
{
	int32_t SampleDataIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UAnimSequence* Animation; // 0x8(0x8)
	float TotalWeight; // 0x10(0x4)
	float Time; // 0x14(0x4)
	float PreviousTime; // 0x18(0x4)
	float SamplePlayRate; // 0x1C(0x4)
	uint8_t Pad_0x20[0x20]; // 0x20(0x20)
};

// Object: ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x14 (Inherited: 0x0)
struct FAnimationRecordingSettings
{
	bool bRecordInWorldSpace; // 0x0(0x1)
	bool bRemoveRootAnimation; // 0x1(0x1)
	bool bAutoSaveAsset; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float SampleRate; // 0x4(0x4)
	float Length; // 0x8(0x4)
	uint8_t InterpMode; // 0xC(0x1)
	uint8_t TangentMode; // 0xD(0x1)
	uint8_t Pad_0xE[0x1]; // 0xE(0x1)
	bool bRecordTransforms; // 0xF(0x1)
	bool bRecordCurves; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x0)
struct FComponentSpacePose
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// Object: ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x0)
struct FLocalSpacePose
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// Object: ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x0)
struct FNamedTransform
{
	struct FTransform Value; // 0x0(0x30)
	struct FName Name; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct Engine.NamedColor
// Size: 0xC (Inherited: 0x0)
struct FNamedColor
{
	struct FColor Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x0)
struct FNamedVector
{
	struct FVector Value; // 0x0(0xC)
	struct FName Name; // 0xC(0x8)
};

// Object: ScriptStruct Engine.NamedFloat
// Size: 0xC (Inherited: 0x0)
struct FNamedFloat
{
	float Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x0)
struct FAnimParentNodeAssetOverride
{
	struct UAnimationAsset* NewAsset; // 0x0(0x8)
	struct FGuid ParentNodeGuid; // 0x8(0x10)
};

// Object: ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x0)
struct FAnimGroupInfo
{
	struct FName Name; // 0x0(0x8)
	struct FLinearColor Color; // 0x8(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x1 (Inherited: 0x0)
struct FAnimBlueprintDebugData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x1 (Inherited: 0x0)
struct FAnimationFrameSnapshot
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.StateMachineDebugData
// Size: 0xB0 (Inherited: 0x0)
struct FStateMachineDebugData
{
	uint8_t Pad_0x0[0xB0]; // 0x0(0xB0)
};

// Object: ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x0)
struct FStateMachineStateDebugData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x0)
struct FAnimBlueprintFunctionData
{
	struct TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0(0x20)
	struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<struct TFieldPath<FProperty>> InputProperties; // 0x30(0x10)
};

// Object: ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x8 (Inherited: 0x0)
struct FAnimGraphBlendOptions
{
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
};

// Object: ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x0)
struct FGraphAssetPlayerInformation
{
	struct TArray<int32_t> PlayerNodeIndices; // 0x0(0x10)
};

// Object: ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x0)
struct FCachedPoseIndices
{
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x0)
struct FAnimBlueprintFunction
{
	struct FName Name; // 0x0(0x8)
	struct FName Group; // 0x8(0x8)
	int32_t OutputPoseNodeIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	uint8_t Pad_0x38[0x28]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x0)
struct FAnimTrack
{
	struct TArray<struct FAnimSegment> AnimSegments; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x0)
struct FAnimSegment
{
	struct UAnimSequenceBase* AnimReference; // 0x0(0x8)
	float StartPos; // 0x8(0x4)
	float AnimStartTime; // 0xC(0x4)
	float AnimEndTime; // 0x10(0x4)
	float AnimPlayRate; // 0x14(0x4)
	int32_t LoopingCount; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x0)
struct FRootMotionExtractionStep
{
	struct UAnimSequence* AnimSequence; // 0x0(0x8)
	float StartPosition; // 0x8(0x4)
	float EndPosition; // 0xC(0x4)
};

// Object: ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x0)
struct FAnimationErrorStats
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x0)
struct FRawCurveTracks
{
	struct TArray<struct FFloatCurve> FloatCurves; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x0)
struct FAnimCurveBase
{
	struct FName LastObservedName; // 0x0(0x8)
	struct FSmartName Name; // 0x8(0xC)
	int32_t CurveTypeFlags; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SmartName
// Size: 0xC (Inherited: 0x0)
struct FSmartName
{
	struct FName DisplayName; // 0x0(0x8)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct Engine.FloatCurve
// Size: 0x98 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase
{
	struct FRichCurve FloatCurve; // 0x18(0x80)
};

// Object: ScriptStruct Engine.TransformCurve
// Size: 0x4E0 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase
{
	struct FVectorCurve TranslationCurve; // 0x18(0x198)
	struct FVectorCurve RotationCurve; // 0x1B0(0x198)
	struct FVectorCurve ScaleCurve; // 0x348(0x198)
};

// Object: ScriptStruct Engine.VectorCurve
// Size: 0x198 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase
{
	struct FRichCurve FloatCurves[0x3]; // 0x18(0x180)
};

// Object: ScriptStruct Engine.SlotEvaluationPose
// Size: 0xE0 (Inherited: 0x0)
struct FSlotEvaluationPose
{
	uint8_t AdditiveType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Weight; // 0x4(0x4)
	uint8_t Pad_0x8[0xD8]; // 0x8(0xD8)
};

// Object: ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x0)
struct FA2Pose
{
	struct TArray<struct FTransform> Bones; // 0x0(0x10)
};

// Object: ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose
{
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct TArray<uint8_t> ComponentSpaceFlags; // 0x18(0x10)
};

// Object: ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x0)
struct FQueuedDrawDebugItem
{
	uint8_t ItemType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector StartLoc; // 0x4(0xC)
	struct FVector EndLoc; // 0x10(0xC)
	struct FVector Center; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	float Radius; // 0x34(0x4)
	float Size; // 0x38(0x4)
	int32_t Segments; // 0x3C(0x4)
	struct FColor Color; // 0x40(0x4)
	bool bPersistentLines; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float Lifetime; // 0x48(0x4)
	float Thickness; // 0x4C(0x4)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x8)
};

// Object: ScriptStruct Engine.AnimInstanceSubsystemData
// Size: 0x1 (Inherited: 0x0)
struct FAnimInstanceSubsystemData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x0)
struct FAnimLinkableElement
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UAnimMontage* LinkedMontage; // 0x8(0x8)
	int32_t SlotIndex; // 0x10(0x4)
	int32_t SegmentIndex; // 0x14(0x4)
	uint8_t LinkMethod; // 0x18(0x1)
	uint8_t CachedLinkMethod; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float SegmentBeginTime; // 0x1C(0x4)
	float SegmentLength; // 0x20(0x4)
	float LinkValue; // 0x24(0x4)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x8)
};

// Object: ScriptStruct Engine.AnimMontageInstance
// Size: 0x1B0 (Inherited: 0x0)
struct FAnimMontageInstance
{
	struct UAnimMontage* Montage; // 0x0(0x8)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
	bool bPlaying; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float DefaultBlendTimeMultiplier; // 0x2C(0x4)
	uint8_t Pad_0x30[0xB8]; // 0x30(0xB8)
	struct TArray<int32_t> NextSections; // 0xE8(0x10)
	struct TArray<int32_t> PrevSections; // 0xF8(0x10)
	uint8_t Pad_0x108[0x10]; // 0x108(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118(0x10)
	float position; // 0x128(0x4)
	float PlayRate; // 0x12C(0x4)
	struct FAlphaBlend Blend; // 0x130(0x30)
	uint8_t Pad_0x160[0x2C]; // 0x160(0x2C)
	int32_t DisableRootMotionCount; // 0x18C(0x4)
	uint8_t Pad_0x190[0x20]; // 0x190(0x20)
};

// Object: ScriptStruct Engine.AnimNotifyEvent
// Size: 0xB8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement
{
	float DisplayTime; // 0x30(0x4)
	float TriggerTimeOffset; // 0x34(0x4)
	float EndTriggerTimeOffset; // 0x38(0x4)
	float TriggerWeightThreshold; // 0x3C(0x4)
	struct FName NotifyName; // 0x40(0x8)
	struct UAnimNotify* Notify; // 0x48(0x8)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x8)
	float Duration; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x1)
	uint8_t MontageTickType; // 0x91(0x1)
	uint8_t Pad_0x92[0x2]; // 0x92(0x2)
	float NotifyTriggerChance; // 0x94(0x4)
	uint8_t NotifyFilterType; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	int32_t NotifyFilterLOD; // 0x9C(0x4)
	bool bTriggerOnDedicatedServer; // 0xA0(0x1)
	bool bTriggerOnFollower; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x2]; // 0xA2(0x2)
	int32_t TrackIndex; // 0xA4(0x4)
	uint8_t Pad_0xA8[0x10]; // 0xA8(0x10)
};

// Object: ScriptStruct Engine.BranchingPointMarker
// Size: 0xC (Inherited: 0x0)
struct FBranchingPointMarker
{
	int32_t NotifyIndex; // 0x0(0x4)
	float TriggerTime; // 0x4(0x4)
	uint8_t NotifyEventType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement
{
	struct FName EventName; // 0x30(0x8)
	float DisplayTime; // 0x38(0x4)
	float TriggerTimeOffset; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x0)
struct FSlotAnimationTrack
{
	struct FName SlotName; // 0x0(0x8)
	struct FAnimTrack AnimTrack; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement
{
	struct FName SectionName; // 0x30(0x8)
	float StartTime; // 0x38(0x4)
	struct FName NextSectionName; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// Object: ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xD0 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float Alpha; // 0x34(0x4)
	uint8_t bAlphaBoolEnabled : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	int32_t LODThreshold; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
};

// Object: ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base
{
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x8)
	uint8_t Pad_0x38[0x20]; // 0x38(0x20)
};

// Object: ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10(0x10)
	uint8_t Pad_0x20[0x50]; // 0x20(0x50)
};

// Object: ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x0)
struct FInertializationPoseDiff
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct Engine.InertializationCurveDiff
// Size: 0x8 (Inherited: 0x0)
struct FInertializationCurveDiff
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3C (Inherited: 0x0)
struct FInertializationBoneDiff
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct Engine.InertializationPose
// Size: 0xA0 (Inherited: 0x0)
struct FInertializationPose
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xA0 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
{
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	struct UAnimInstance* InstanceClass; // 0x78(0x8)
	struct FName Tag; // 0x80(0x8)
	uint8_t Pad_0x88[0x14]; // 0x88(0x14)
	uint8_t bReceiveNotifiesFromLinkedInstances : 1; // 0x9C(0x1), Mask(0x1)
	uint8_t bPropagateNotifiesToLinkedInstances : 1; // 0x9C(0x1), Mask(0x2)
	uint8_t BitPad_0x9C_2 : 6; // 0x9C(0x1)
	uint8_t Pad_0x9D[0x3]; // 0x9D(0x3)
};

// Object: ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xB0 (Inherited: 0xA0)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph
{
	struct IAnimLayerInterface* Interface; // 0xA0(0x8)
	struct FName Layer; // 0xA8(0x8)
};

// Object: ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0x118 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base
{
	struct FName Name; // 0x10(0x8)
	struct FName Graph; // 0x18(0x8)
	struct FPoseLink InputPose; // 0x20(0x10)
	uint8_t Pad_0x30[0xE8]; // 0x30(0xE8)
};

// Object: ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0x158 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base
{
	struct FPoseLink Pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
	uint8_t Pad_0x28[0x130]; // 0x28(0x130)
};

// Object: ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x80 (Inherited: 0x38)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence; // 0x38(0x8)
	float PlayRateBasis; // 0x40(0x4)
	float PlayRate; // 0x44(0x4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48(0x30)
	float StartPosition; // 0x78(0x4)
	bool bLoopAnimation; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xB0 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base
{
	int32_t StateMachineIndexInClass; // 0x10(0x4)
	int32_t MaxTransitionsPerFrame; // 0x14(0x4)
	bool bSkipFirstUpdateTransition; // 0x18(0x1)
	bool bReinitializeOnBecomingRelevant; // 0x19(0x1)
	uint8_t Pad_0x1A[0x96]; // 0x1A(0x96)
};

// Object: ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x0)
struct FAnimationPotentialTransition
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xC8 (Inherited: 0x0)
struct FAnimationActiveTransitionEntry
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
	struct UBlendProfile* BlendProfile; // 0xB8(0x8)
	uint8_t Pad_0xC0[0x8]; // 0xC0(0x8)
};

// Object: ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0xF8 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base
{
	uint8_t Pad_0x10[0xD8]; // 0x10(0xD8)
	int32_t FramesToCachePose; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	uint8_t DataSource; // 0xF0(0x1)
	uint8_t EvaluatorMode; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x6]; // 0xF2(0x6)
};

// Object: ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base
{
	bool bCanEnterTransition; // 0x10(0x1)
	uint8_t Pad_0x11[0x17]; // 0x11(0x17)
};

// Object: ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base
{
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
};

// Object: ScriptStruct Engine.ExposedValueHandler
// Size: 0x50 (Inherited: 0x0)
struct FExposedValueHandler
{
	struct FName BoundFunction; // 0x0(0x8)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x8(0x10)
	struct UFunction* Function; // 0x18(0x8)
	struct TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20(0x20)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x8 (Inherited: 0x0)
struct FExposedValueCopyRecord
{
	int32_t CopyIndex; // 0x0(0x4)
	enum class EPostCopyOperation PostCopyOperation; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base
{
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimNotifyQueue
// Size: 0x70 (Inherited: 0x0)
struct FAnimNotifyQueue
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20(0x50)
};

// Object: ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x0)
struct FAnimNotifyArray
{
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x0)
struct FAnimNotifyEventReference
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* NotifySource; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x0)
struct FCompressedTrack
{
	struct TArray<uint8_t> ByteStream; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0xC)
	float Ranges[0x3]; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x0)
struct FCurveTrack
{
	struct FName CurveName; // 0x0(0x8)
	struct TArray<float> CurveWeights; // 0x8(0x10)
};

// Object: ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x0)
struct FScaleTrack
{
	struct TArray<struct FVector> ScaleKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x0)
struct FRotationTrack
{
	struct TArray<struct FQuat> RotKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x0)
struct FTranslationTrack
{
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x0)
struct FAnimSequenceTrackContainer
{
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x0(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// Object: ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x0)
struct FRawAnimSequenceTrack
{
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x0)
struct FAnimSetMeshLinkup
{
	struct TArray<int32_t> BoneToTrackTable; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x8B0 (Inherited: 0x760)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x760[0x150]; // 0x760(0x150)
};

// Object: ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x0)
struct FBakedAnimationStateMachine
{
	struct FName MachineName; // 0x0(0x8)
	int32_t InitialState; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AnimationStateBase
// Size: 0x8 (Inherited: 0x0)
struct FAnimationStateBase
{
	struct FName StateName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x8)
struct FAnimationTransitionBetweenStates : FAnimationStateBase
{
	int32_t PreviousState; // 0x8(0x4)
	int32_t NextState; // 0xC(0x4)
	float CrossfadeDuration; // 0x10(0x4)
	int32_t StartNotify; // 0x14(0x4)
	int32_t EndNotify; // 0x18(0x4)
	int32_t InterruptNotify; // 0x1C(0x4)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct UCurveFloat* CustomCurve; // 0x28(0x8)
	struct UBlendProfile* BlendProfile; // 0x30(0x8)
	uint8_t LogicType; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x0)
struct FBakedAnimationState
{
	struct FName StateName; // 0x0(0x8)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
	bool bIsAConduit; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t EntryRuleNodeIndex; // 0x2C(0x4)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x0)
struct FBakedStateExitTransition
{
	int32_t CanTakeDelegateIndex; // 0x0(0x4)
	int32_t CustomResultNodeIndex; // 0x4(0x4)
	int32_t TransitionIndex; // 0x8(0x4)
	bool bDesiredTransitionReturnValue; // 0xC(0x1)
	bool bAutomaticRemainingTimeRule; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x8)
struct FAnimationState : FAnimationStateBase
{
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
};

// Object: ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x0)
struct FAnimationTransitionRule
{
	struct FName RuleToExecute; // 0x0(0x8)
	bool TransitionReturnVal; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t TransitionIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x4 (Inherited: 0x0)
struct FTrackToSkeletonMap
{
	int32_t BoneTreeIndex; // 0x0(0x4)
};

// Object: ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x0)
struct FMarkerSyncData
{
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.AnimSyncMarker
// Size: 0xC (Inherited: 0x0)
struct FAnimSyncMarker
{
	struct FName MarkerName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x0)
struct FAnimNotifyTrack
{
	struct FName TrackName; // 0x0(0x8)
	struct FLinearColor TrackColor; // 0x8(0x10)
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x0)
struct FPerBoneBlendWeights
{
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x0(0x10)
};

// Object: ScriptStruct Engine.AssetImportInfo
// Size: 0x1 (Inherited: 0x0)
struct FAssetImportInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x0)
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FDirectoryPath FilterDirectory; // 0x8(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Engine.PrimaryAssetRules
// Size: 0xC (Inherited: 0x0)
struct FPrimaryAssetRules
{
	int32_t Priority; // 0x0(0x4)
	int32_t ChunkId; // 0x4(0x4)
	bool bApplyRecursively; // 0x8(0x1)
	enum class EPrimaryAssetCookRule CookRule; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1C (Inherited: 0x0)
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId PrimaryAssetId; // 0x0(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0xC)
};

// Object: ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x0)
struct FAssetManagerRedirect
{
	struct FString Old; // 0x0(0x10)
	struct FString New; // 0x10(0x10)
};

// Object: ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x0)
struct FPrimaryAssetTypeInfo
{
	struct FName PrimaryAssetType; // 0x0(0x8)
	struct TSoftClassPtr<struct UObject*> AssetBaseClass; // 0x8(0x28)
	struct UObject* AssetBaseClassLoaded; // 0x30(0x8)
	bool bHasBlueprintClasses; // 0x38(0x1)
	bool bIsEditorOnly; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	int32_t NumberOfAssets; // 0x84(0x4)
};

// Object: ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x0)
struct FAssetMapping
{
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	struct UAnimationAsset* TargetAsset; // 0x8(0x8)
};

// Object: ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x160 (Inherited: 0xB8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xB8[0xA8]; // 0xB8(0xA8)
};

// Object: ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2C (Inherited: 0x0)
struct FAtmospherePrecomputeParameters
{
	float DensityHeight; // 0x0(0x4)
	float DecayHeight; // 0x4(0x4)
	int32_t MaxScatteringOrder; // 0x8(0x4)
	int32_t TransmittanceTexWidth; // 0xC(0x4)
	int32_t TransmittanceTexHeight; // 0x10(0x4)
	int32_t IrradianceTexWidth; // 0x14(0x4)
	int32_t IrradianceTexHeight; // 0x18(0x4)
	int32_t InscatterAltitudeSampleNum; // 0x1C(0x4)
	int32_t InscatterMuNum; // 0x20(0x4)
	int32_t InscatterMuSNum; // 0x24(0x4)
	int32_t InscatterNuNum; // 0x28(0x4)
};

// Object: ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xB0 (Inherited: 0x0)
struct FBaseAttenuationSettings
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x8(0x1)
	uint8_t AttenuationShape; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float dBAttenuationAtMax; // 0xC(0x4)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector AttenuationShapeExtents; // 0x14(0xC)
	float ConeOffset; // 0x20(0x4)
	float FalloffDistance; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0x88)
};

// Object: ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x0)
struct FAudioComponentParam
{
	struct FName ParamName; // 0x0(0x8)
	float FloatParam; // 0x8(0x4)
	bool BoolParam; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int32_t IntParam; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct USoundWave* SoundWaveParam; // 0x18(0x8)
};

// Object: ScriptStruct Engine.AudioEffectParameters
// Size: 0x8 (Inherited: 0x0)
struct FAudioEffectParameters
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x8)
struct FAudioReverbEffect : FAudioEffectParameters
{
	uint8_t Pad_0x8[0x40]; // 0x8(0x40)
};

// Object: ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x0)
struct FAudioQualitySettings
{
	struct FText DisplayName; // 0x0(0x18)
	int32_t MaxChannels; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x0)
struct FInteriorSettings
{
	bool bIsWorldSettings; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ExteriorVolume; // 0x4(0x4)
	float ExteriorTime; // 0x8(0x4)
	float ExteriorLPF; // 0xC(0x4)
	float ExteriorLPFTime; // 0x10(0x4)
	float InteriorVolume; // 0x14(0x4)
	float InteriorTime; // 0x18(0x4)
	float InteriorLPF; // 0x1C(0x4)
	float InteriorLPFTime; // 0x20(0x4)
};

// Object: ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
// Size: 0x20 (Inherited: 0x0)
struct FAudioVolumeSubmixOverrideSettings
{
	struct USoundSubmix* Submix; // 0x0(0x8)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8(0x10)
	float CrossfadeTime; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.AudioVolumeSubmixSendSettings
// Size: 0x18 (Inherited: 0x0)
struct FAudioVolumeSubmixSendSettings
{
	enum class EAudioVolumeLocationState ListenerLocationState; // 0x0(0x1)
	enum class EAudioVolumeLocationState SourceLocationState; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FSoundSubmixSendInfo> SubmixSends; // 0x8(0x10)
};

// Object: ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xB0 (Inherited: 0x0)
struct FSoundSubmixSendInfo
{
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x0(0x1)
	enum class ESubmixSendStage SendStage; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct USoundSubmixBase* SoundSubmix; // 0x8(0x8)
	float SendLevel; // 0x10(0x4)
	float MinSendLevel; // 0x14(0x4)
	float MaxSendLevel; // 0x18(0x4)
	float MinSendDistance; // 0x1C(0x4)
	float MaxSendDistance; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// Object: ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x0)
struct FLaunchOnTestSettings
{
	struct FFilePath LaunchOnTestmap; // 0x0(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// Object: ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x0)
struct FFilePath
{
	struct FString FilePath; // 0x0(0x10)
};

// Object: ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x0)
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath PerformanceTestmap; // 0x0(0x18)
	int32_t TestTimer; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1F0 (Inherited: 0x0)
struct FBuildPromotionTestSettings
{
	struct FFilePath DefaultStaticMeshAsset; // 0x0(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1C0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1E0(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x0)
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath NewProjectFolderOverride; // 0x0(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x0)
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath BlueprintAsset; // 0x0(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// Object: ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x0)
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition Diffuse; // 0x0(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xA0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xC0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xE0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// Object: ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x0)
struct FEditorImportWorkflowDefinition
{
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// Object: ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x0)
struct FImportFactorySettingValues
{
	struct FString SettingName; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x0)
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath FirstMeshPath; // 0x0(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x0)
struct FParticleEditorPromotionSettings
{
	struct FFilePath DefaultParticleAsset; // 0x0(0x10)
};

// Object: ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x0)
struct FMaterialEditorPromotionSettings
{
	struct FFilePath DefaultMaterialAsset; // 0x0(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// Object: ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x0)
struct FEditorImportExportTestDefinition
{
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// Object: ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x0)
struct FExternalToolDefinition
{
	struct FString ToolName; // 0x0(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// Object: ScriptStruct Engine.NavAvoidanceData
// Size: 0x3C (Inherited: 0x0)
struct FNavAvoidanceData
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x0)
struct FBandwidthTestGenerator
{
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x0)
struct FBandwidthTestItem
{
	struct TArray<uint8_t> Kilobyte; // 0x0(0x10)
};

// Object: ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x0)
struct FBlendProfileBoneEntry
{
	struct FBoneReference BoneReference; // 0x0(0x10)
	float BlendScale; // 0x10(0x4)
};

// Object: ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x0)
struct FPerBoneInterpolation
{
	struct FBoneReference BoneReference; // 0x0(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x4)
};

// Object: ScriptStruct Engine.GridBlendSample
// Size: 0x1C (Inherited: 0x0)
struct FGridBlendSample
{
	struct FEditorElement GridElement; // 0x0(0x18)
	float BlendWeight; // 0x18(0x4)
};

// Object: ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x0)
struct FEditorElement
{
	int32_t Indices[0x3]; // 0x0(0xC)
	float Weights[0x3]; // 0xC(0xC)
};

// Object: ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x0)
struct FBlendSample
{
	struct UAnimSequence* Animation; // 0x0(0x8)
	struct FVector SampleValue; // 0x8(0xC)
	float RateScale; // 0x14(0x4)
};

// Object: ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x0)
struct FBlendParameter
{
	struct FString DisplayName; // 0x0(0x10)
	float Min; // 0x10(0x4)
	float Max; // 0x14(0x4)
	int32_t GridNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.InterpolationParameter
// Size: 0x8 (Inherited: 0x0)
struct FInterpolationParameter
{
	float InterpolationTime; // 0x0(0x4)
	uint8_t InterpolationType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x0)
struct FBPEditorBookmarkNode
{
	struct FGuid NodeGuid; // 0x0(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// Object: ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x0)
struct FEditedDocumentInfo
{
	struct FSoftObjectPath EditedObjectPath; // 0x0(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x8)
	float SavedZoomAmount; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UObject* EditedObject; // 0x28(0x8)
};

// Object: ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x0)
struct FBPInterfaceDescription
{
	struct IInterface* Interface; // 0x0(0x8)
	struct TArray<struct UEdGraph*> Graphs; // 0x8(0x10)
};

// Object: ScriptStruct Engine.BPVariableDescription
// Size: 0xD0 (Inherited: 0x0)
struct FBPVariableDescription
{
	struct FName VarName; // 0x0(0x8)
	struct FGuid VarGuid; // 0x8(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x8)
	struct FName RepNotifyFunc; // 0xA0(0x8)
	uint8_t ReplicationCondition; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xB0(0x10)
	struct FString DefaultValue; // 0xC0(0x10)
};

// Object: ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x0)
struct FBPVariableMetaDataEntry
{
	struct FName DataKey; // 0x0(0x8)
	struct FString DataValue; // 0x8(0x10)
};

// Object: ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x0)
struct FEdGraphPinType
{
	struct FName PinCategory; // 0x0(0x8)
	struct FName PinSubCategory; // 0x8(0x8)
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x8)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1C)
	enum class EPinContainerType ContainerType; // 0x54(0x1)
	uint8_t bIsArray : 1; // 0x55(0x1), Mask(0x1)
	uint8_t bIsReference : 1; // 0x55(0x1), Mask(0x2)
	uint8_t bIsConst : 1; // 0x55(0x1), Mask(0x4)
	uint8_t bIsWeakPointer : 1; // 0x55(0x1), Mask(0x8)
	uint8_t bIsUObjectWrapper : 1; // 0x55(0x1), Mask(0x10)
	uint8_t BitPad_0x55_5 : 3; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
};

// Object: ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1C (Inherited: 0x0)
struct FEdGraphTerminalType
{
	struct FName TerminalCategory; // 0x0(0x8)
	struct FName TerminalSubCategory; // 0x8(0x8)
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x8)
	bool bTerminalIsConst; // 0x18(0x1)
	bool bTerminalIsWeakPointer; // 0x19(0x1)
	bool bTerminalIsUObjectWrapper; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x1 (Inherited: 0x0)
struct FBlueprintMacroCosmeticInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x0)
struct FCompilerNativizationOptions
{
	struct FName PlatformName; // 0x0(0x8)
	bool ServerOnlyPlatform; // 0x8(0x1)
	bool ClientOnlyPlatform; // 0x9(0x1)
	bool bExcludeMonolithicHeaders; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// Object: ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x0)
struct FBPComponentClassOverride
{
	struct FName ComponentName; // 0x0(0x8)
	struct UObject* ComponentClass; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x0)
struct FBlueprintCookedComponentInstancingData
{
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0(0x10)
	uint8_t Pad_0x10[0x11]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x1)
	uint8_t Pad_0x22[0x26]; // 0x22(0x26)
};

// Object: ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x0)
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName PropertyName; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UStruct* PropertyScope; // 0x10(0x8)
};

// Object: ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x0)
struct FEventGraphFastCallPair
{
	struct UFunction* FunctionToPatch; // 0x0(0x8)
	int32_t EventGraphCallOffset; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Engine.BlueprintDebugData
// Size: 0x1 (Inherited: 0x0)
struct FBlueprintDebugData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x8 (Inherited: 0x0)
struct FPointerToUberGraphFrame
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x0)
struct FDebuggingInfoForSingleFunction
{
	uint8_t Pad_0x0[0x190]; // 0x0(0x190)
};

// Object: ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x0)
struct FNodeToCodeAssociation
{
	uint8_t Pad_0x0[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct Engine.AnimCurveType
// Size: 0x2 (Inherited: 0x0)
struct FAnimCurveType
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x1 (Inherited: 0x0)
struct FBookmarkBaseJumpToSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x1 (Inherited: 0x1)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings
{
};

// Object: ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x1 (Inherited: 0x0)
struct FBookmark2DJumpToSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.GeomSelection
// Size: 0xC (Inherited: 0x0)
struct FGeomSelection
{
	int32_t Type; // 0x0(0x4)
	int32_t Index; // 0x4(0x4)
	int32_t SelectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x0)
struct FBuilderPoly
{
	struct TArray<int32_t> VertexIndices; // 0x0(0x10)
	int32_t Direction; // 0x10(0x4)
	struct FName ItemName; // 0x14(0x8)
	int32_t PolyFlags; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x0)
struct FCachedAnimTransitionData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName FromStateName; // 0x8(0x8)
	struct FName ToStateName; // 0x10(0x8)
	uint8_t Pad_0x18[0xC]; // 0x18(0xC)
};

// Object: ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1C (Inherited: 0x0)
struct FCachedAnimRelevancyData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0xC]; // 0x10(0xC)
};

// Object: ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x0)
struct FCachedAnimAssetPlayerData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x0)
struct FCachedAnimStateArray
{
	struct TArray<struct FCachedAnimStateData> States; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct Engine.CachedAnimStateData
// Size: 0x1C (Inherited: 0x0)
struct FCachedAnimStateData
{
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	uint8_t Pad_0x10[0xC]; // 0x10(0xC)
};

// Object: ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x10 (Inherited: 0x0)
struct FActiveCameraShakeInfo
{
	struct UCameraShakeBase* ShakeInstance; // 0x0(0x8)
	struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x8(0x8)
};

// Object: ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x0)
struct FPooledCameraShakes
{
	struct TArray<struct UCameraShakeBase*> PooledShakes; // 0x0(0x10)
};

// Object: ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x0)
struct FVOscillator
{
	struct FFOscillator X; // 0x0(0xC)
	struct FFOscillator Y; // 0xC(0xC)
	struct FFOscillator Z; // 0x18(0xC)
};

// Object: ScriptStruct Engine.FOscillator
// Size: 0xC (Inherited: 0x0)
struct FFOscillator
{
	float Amplitude; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	uint8_t InitialOffset; // 0x8(0x1)
	enum class EOscillatorWaveform Waveform; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x0)
struct FROscillator
{
	struct FFOscillator Pitch; // 0x0(0xC)
	struct FFOscillator Yaw; // 0xC(0xC)
	struct FFOscillator Roll; // 0x18(0xC)
};

// Object: ScriptStruct Engine.CameraShakeInfo
// Size: 0x10 (Inherited: 0x0)
struct FCameraShakeInfo
{
	struct FCameraShakeDuration Duration; // 0x0(0x8)
	float BlendIn; // 0x8(0x4)
	float BlendOut; // 0xC(0x4)
};

// Object: ScriptStruct Engine.CameraShakeDuration
// Size: 0x8 (Inherited: 0x0)
struct FCameraShakeDuration
{
	float Duration; // 0x0(0x4)
	enum class ECameraShakeDurationType Type; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.CameraShakeUpdateResult
// Size: 0x20 (Inherited: 0x0)
struct FCameraShakeUpdateResult
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct Engine.CameraShakeUpdateParams
// Size: 0x5F0 (Inherited: 0x0)
struct FCameraShakeUpdateParams
{
	uint8_t Pad_0x0[0x5F0]; // 0x0(0x5F0)
};

// Object: ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x1 (Inherited: 0x0)
struct FDummySpacerCameraTypes
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.MinimalViewInfo
// Size: 0x5E0 (Inherited: 0x0)
struct FMinimalViewInfo
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	float FOV; // 0x18(0x4)
	float DesiredFOV; // 0x1C(0x4)
	float OrthoWidth; // 0x20(0x4)
	float OrthoNearClipPlane; // 0x24(0x4)
	float OrthoFarClipPlane; // 0x28(0x4)
	float AspectRatio; // 0x2C(0x4)
	uint8_t bConstrainAspectRatio : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bUseFieldOfViewForLOD : 1; // 0x30(0x1), Mask(0x2)
	uint8_t BitPad_0x30_2 : 6; // 0x30(0x1)
	uint8_t ProjectionMode; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	float PostProcessBlendWeight; // 0x34(0x4)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x550)
	struct FVector2D OffCenterProjectionOffset; // 0x590(0x8)
	uint8_t Pad_0x598[0x48]; // 0x598(0x48)
};

// Object: ScriptStruct Engine.PostProcessSettings
// Size: 0x550 (Inherited: 0x0)
struct FPostProcessSettings
{
	uint8_t bOverride_WhiteTemp : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_WhiteTint : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_ColorSaturation : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_ColorContrast : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_ColorGamma : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_ColorGain : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_ColorOffset : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_ColorSaturationShadows : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bOverride_ColorContrastShadows : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bOverride_ColorGammaShadows : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bOverride_ColorGainShadows : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bOverride_ColorOffsetShadows : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bOverride_ColorSaturationMidtones : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bOverride_ColorContrastMidtones : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bOverride_ColorGammaMidtones : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bOverride_ColorGainMidtones : 1; // 0x1(0x1), Mask(0x80)
	uint8_t bOverride_ColorOffsetMidtones : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bOverride_ColorSaturationHighlights : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bOverride_ColorContrastHighlights : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bOverride_ColorGammaHighlights : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bOverride_ColorGainHighlights : 1; // 0x2(0x1), Mask(0x10)
	uint8_t bOverride_ColorOffsetHighlights : 1; // 0x2(0x1), Mask(0x20)
	uint8_t bOverride_ColorCorrectionShadowsMax : 1; // 0x2(0x1), Mask(0x40)
	uint8_t bOverride_ColorCorrectionHighlightsMin : 1; // 0x2(0x1), Mask(0x80)
	uint8_t bOverride_BlueCorrection : 1; // 0x3(0x1), Mask(0x1)
	uint8_t bOverride_ExpandGamut : 1; // 0x3(0x1), Mask(0x2)
	uint8_t bOverride_ToneCurveAmount : 1; // 0x3(0x1), Mask(0x4)
	uint8_t bOverride_FilmWhitePoint : 1; // 0x3(0x1), Mask(0x8)
	uint8_t bOverride_FilmSaturation : 1; // 0x3(0x1), Mask(0x10)
	uint8_t bOverride_FilmChannelMixerRed : 1; // 0x3(0x1), Mask(0x20)
	uint8_t bOverride_FilmChannelMixerGreen : 1; // 0x3(0x1), Mask(0x40)
	uint8_t bOverride_FilmChannelMixerBlue : 1; // 0x3(0x1), Mask(0x80)
	uint8_t bOverride_FilmContrast : 1; // 0x4(0x1), Mask(0x1)
	uint8_t bOverride_FilmDynamicRange : 1; // 0x4(0x1), Mask(0x2)
	uint8_t bOverride_FilmHealAmount : 1; // 0x4(0x1), Mask(0x4)
	uint8_t bOverride_FilmToeAmount : 1; // 0x4(0x1), Mask(0x8)
	uint8_t bOverride_FilmShadowTint : 1; // 0x4(0x1), Mask(0x10)
	uint8_t bOverride_FilmShadowTintBlend : 1; // 0x4(0x1), Mask(0x20)
	uint8_t bOverride_FilmShadowTintAmount : 1; // 0x4(0x1), Mask(0x40)
	uint8_t bOverride_FilmSlope : 1; // 0x4(0x1), Mask(0x80)
	uint8_t bOverride_FilmToe : 1; // 0x5(0x1), Mask(0x1)
	uint8_t bOverride_FilmShoulder : 1; // 0x5(0x1), Mask(0x2)
	uint8_t bOverride_FilmBlackClip : 1; // 0x5(0x1), Mask(0x4)
	uint8_t bOverride_FilmWhiteClip : 1; // 0x5(0x1), Mask(0x8)
	uint8_t bOverride_SceneColorTint : 1; // 0x5(0x1), Mask(0x10)
	uint8_t bOverride_SceneFringeIntensity : 1; // 0x5(0x1), Mask(0x20)
	uint8_t bOverride_ChromaticAberrationStartOffset : 1; // 0x5(0x1), Mask(0x40)
	uint8_t bOverride_AmbientCubemapTint : 1; // 0x5(0x1), Mask(0x80)
	uint8_t bOverride_AmbientCubemapIntensity : 1; // 0x6(0x1), Mask(0x1)
	uint8_t bOverride_BloomMethod : 1; // 0x6(0x1), Mask(0x2)
	uint8_t bOverride_BloomIntensity : 1; // 0x6(0x1), Mask(0x4)
	uint8_t bOverride_BloomThreshold : 1; // 0x6(0x1), Mask(0x8)
	uint8_t bOverride_Bloom1Tint : 1; // 0x6(0x1), Mask(0x10)
	uint8_t bOverride_Bloom1Size : 1; // 0x6(0x1), Mask(0x20)
	uint8_t bOverride_Bloom2Size : 1; // 0x6(0x1), Mask(0x40)
	uint8_t bOverride_Bloom2Tint : 1; // 0x6(0x1), Mask(0x80)
	uint8_t bOverride_Bloom3Tint : 1; // 0x7(0x1), Mask(0x1)
	uint8_t bOverride_Bloom3Size : 1; // 0x7(0x1), Mask(0x2)
	uint8_t bOverride_Bloom4Tint : 1; // 0x7(0x1), Mask(0x4)
	uint8_t bOverride_Bloom4Size : 1; // 0x7(0x1), Mask(0x8)
	uint8_t bOverride_Bloom5Tint : 1; // 0x7(0x1), Mask(0x10)
	uint8_t bOverride_Bloom5Size : 1; // 0x7(0x1), Mask(0x20)
	uint8_t bOverride_Bloom6Tint : 1; // 0x7(0x1), Mask(0x40)
	uint8_t bOverride_Bloom6Size : 1; // 0x7(0x1), Mask(0x80)
	uint8_t bOverride_BloomSizeScale : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bOverride_BloomConvolutionTexture : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bOverride_BloomConvolutionSize : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bOverride_BloomConvolutionCenterUV : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bOverride_BloomConvolutionPreFilter : 1; // 0x8(0x1), Mask(0x10)
	uint8_t bOverride_BloomConvolutionPreFilterMin : 1; // 0x8(0x1), Mask(0x20)
	uint8_t bOverride_BloomConvolutionPreFilterMax : 1; // 0x8(0x1), Mask(0x40)
	uint8_t bOverride_BloomConvolutionPreFilterMult : 1; // 0x8(0x1), Mask(0x80)
	uint8_t bOverride_BloomConvolutionBufferScale : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bOverride_BloomDirtMaskIntensity : 1; // 0x9(0x1), Mask(0x2)
	uint8_t bOverride_BloomDirtMaskTint : 1; // 0x9(0x1), Mask(0x4)
	uint8_t bOverride_BloomDirtMask : 1; // 0x9(0x1), Mask(0x8)
	uint8_t bOverride_CameraShutterSpeed : 1; // 0x9(0x1), Mask(0x10)
	uint8_t bOverride_CameraISO : 1; // 0x9(0x1), Mask(0x20)
	uint8_t bOverride_AutoExposureMethod : 1; // 0x9(0x1), Mask(0x40)
	uint8_t bOverride_AutoExposureLowPercent : 1; // 0x9(0x1), Mask(0x80)
	uint8_t bOverride_AutoExposureHighPercent : 1; // 0xA(0x1), Mask(0x1)
	uint8_t bOverride_AutoExposureMinBrightness : 1; // 0xA(0x1), Mask(0x2)
	uint8_t bOverride_AutoExposureMaxBrightness : 1; // 0xA(0x1), Mask(0x4)
	uint8_t bOverride_AutoExposureCalibrationConstant : 1; // 0xA(0x1), Mask(0x8)
	uint8_t bOverride_AutoExposureSpeedUp : 1; // 0xA(0x1), Mask(0x10)
	uint8_t bOverride_AutoExposureSpeedDown : 1; // 0xA(0x1), Mask(0x20)
	uint8_t bOverride_AutoExposureBias : 1; // 0xA(0x1), Mask(0x40)
	uint8_t bOverride_AutoExposureBiasCurve : 1; // 0xA(0x1), Mask(0x80)
	uint8_t bOverride_AutoExposureMeterMask : 1; // 0xB(0x1), Mask(0x1)
	uint8_t bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xB(0x1), Mask(0x2)
	uint8_t bOverride_HistogramLogMin : 1; // 0xB(0x1), Mask(0x4)
	uint8_t bOverride_HistogramLogMax : 1; // 0xB(0x1), Mask(0x8)
	uint8_t bOverride_LensFlareIntensity : 1; // 0xB(0x1), Mask(0x10)
	uint8_t bOverride_LensFlareTint : 1; // 0xB(0x1), Mask(0x20)
	uint8_t bOverride_LensFlareTints : 1; // 0xB(0x1), Mask(0x40)
	uint8_t bOverride_LensFlareBokehSize : 1; // 0xB(0x1), Mask(0x80)
	uint8_t bOverride_LensFlareBokehShape : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bOverride_LensFlareThreshold : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bOverride_VignetteIntensity : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bOverride_GrainIntensity : 1; // 0xC(0x1), Mask(0x8)
	uint8_t bOverride_GrainJitter : 1; // 0xC(0x1), Mask(0x10)
	uint8_t bOverride_AmbientOcclusionIntensity : 1; // 0xC(0x1), Mask(0x20)
	uint8_t bOverride_AmbientOcclusionStaticFraction : 1; // 0xC(0x1), Mask(0x40)
	uint8_t bOverride_AmbientOcclusionRadius : 1; // 0xC(0x1), Mask(0x80)
	uint8_t bOverride_AmbientOcclusionFadeDistance : 1; // 0xD(0x1), Mask(0x1)
	uint8_t bOverride_AmbientOcclusionFadeRadius : 1; // 0xD(0x1), Mask(0x2)
	uint8_t bOverride_AmbientOcclusionDistance : 1; // 0xD(0x1), Mask(0x4)
	uint8_t bOverride_AmbientOcclusionRadiusInWS : 1; // 0xD(0x1), Mask(0x8)
	uint8_t bOverride_AmbientOcclusionPower : 1; // 0xD(0x1), Mask(0x10)
	uint8_t bOverride_AmbientOcclusionBias : 1; // 0xD(0x1), Mask(0x20)
	uint8_t bOverride_AmbientOcclusionQuality : 1; // 0xD(0x1), Mask(0x40)
	uint8_t bOverride_AmbientOcclusionMipBlend : 1; // 0xD(0x1), Mask(0x80)
	uint8_t bOverride_AmbientOcclusionMipScale : 1; // 0xE(0x1), Mask(0x1)
	uint8_t bOverride_AmbientOcclusionMipThreshold : 1; // 0xE(0x1), Mask(0x2)
	uint8_t bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xE(0x1), Mask(0x4)
	uint8_t bOverride_RayTracingAO : 1; // 0xE(0x1), Mask(0x8)
	uint8_t bOverride_RayTracingAOSamplesPerPixel : 1; // 0xE(0x1), Mask(0x10)
	uint8_t bOverride_RayTracingAOIntensity : 1; // 0xE(0x1), Mask(0x20)
	uint8_t bOverride_RayTracingAORadius : 1; // 0xE(0x1), Mask(0x40)
	uint8_t bOverride_LPVIntensity : 1; // 0xE(0x1), Mask(0x80)
	uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0xF(0x1), Mask(0x1)
	uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0xF(0x1), Mask(0x2)
	uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0xF(0x1), Mask(0x4)
	uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0xF(0x1), Mask(0x8)
	uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0xF(0x1), Mask(0x10)
	uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0xF(0x1), Mask(0x20)
	uint8_t bOverride_LPVSize : 1; // 0xF(0x1), Mask(0x40)
	uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0xF(0x1), Mask(0x80)
	uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bOverride_LPVVplInjectionBias : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bOverride_LPVFadeRange : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bOverride_IndirectLightingColor : 1; // 0x10(0x1), Mask(0x40)
	uint8_t bOverride_IndirectLightingIntensity : 1; // 0x10(0x1), Mask(0x80)
	uint8_t bOverride_ColorGradingIntensity : 1; // 0x11(0x1), Mask(0x1)
	uint8_t bOverride_ColorGradingLUT : 1; // 0x11(0x1), Mask(0x2)
	uint8_t bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x1), Mask(0x4)
	uint8_t bOverride_DepthOfFieldFstop : 1; // 0x11(0x1), Mask(0x8)
	uint8_t bOverride_DepthOfFieldMinFstop : 1; // 0x11(0x1), Mask(0x10)
	uint8_t bOverride_DepthOfFieldBladeCount : 1; // 0x11(0x1), Mask(0x20)
	uint8_t bOverride_DepthOfFieldSensorWidth : 1; // 0x11(0x1), Mask(0x40)
	uint8_t bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x11(0x1), Mask(0x80)
	uint8_t bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x12(0x1), Mask(0x1)
	uint8_t bOverride_DepthOfFieldFocalRegion : 1; // 0x12(0x1), Mask(0x2)
	uint8_t bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x12(0x1), Mask(0x4)
	uint8_t bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x12(0x1), Mask(0x8)
	uint8_t bOverride_DepthOfFieldScale : 1; // 0x12(0x1), Mask(0x10)
	uint8_t bOverride_DepthOfFieldNearBlurSize : 1; // 0x12(0x1), Mask(0x20)
	uint8_t bOverride_DepthOfFieldFarBlurSize : 1; // 0x12(0x1), Mask(0x40)
	uint8_t bOverride_MobileHQGaussian : 1; // 0x12(0x1), Mask(0x80)
	uint8_t bOverride_DepthOfFieldOcclusion : 1; // 0x13(0x1), Mask(0x1)
	uint8_t bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x13(0x1), Mask(0x2)
	uint8_t bOverride_DepthOfFieldVignetteSize : 1; // 0x13(0x1), Mask(0x4)
	uint8_t bOverride_MotionBlurAmount : 1; // 0x13(0x1), Mask(0x8)
	uint8_t bOverride_MotionBlurMax : 1; // 0x13(0x1), Mask(0x10)
	uint8_t bOverride_MotionBlurTargetFPS : 1; // 0x13(0x1), Mask(0x20)
	uint8_t bOverride_MotionBlurPerObjectSize : 1; // 0x13(0x1), Mask(0x40)
	uint8_t bOverride_ScreenPercentage : 1; // 0x13(0x1), Mask(0x80)
	uint8_t bOverride_ScreenSpaceReflectionIntensity : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bOverride_ScreenSpaceReflectionQuality : 1; // 0x14(0x1), Mask(0x2)
	uint8_t bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x14(0x1), Mask(0x4)
	uint8_t bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x14(0x1), Mask(0x8)
	uint8_t bOverride_ReflectionsType : 1; // 0x14(0x1), Mask(0x10)
	uint8_t bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x14(0x1), Mask(0x20)
	uint8_t bOverride_RayTracingReflectionsMaxBounces : 1; // 0x14(0x1), Mask(0x40)
	uint8_t bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x14(0x1), Mask(0x80)
	uint8_t bOverride_RayTracingReflectionsShadows : 1; // 0x15(0x1), Mask(0x1)
	uint8_t bOverride_RayTracingReflectionsTranslucency : 1; // 0x15(0x1), Mask(0x2)
	uint8_t bOverride_TranslucencyType : 1; // 0x15(0x1), Mask(0x4)
	uint8_t bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x15(0x1), Mask(0x8)
	uint8_t bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x15(0x1), Mask(0x10)
	uint8_t bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x15(0x1), Mask(0x20)
	uint8_t bOverride_RayTracingTranslucencyShadows : 1; // 0x15(0x1), Mask(0x40)
	uint8_t bOverride_RayTracingTranslucencyRefraction : 1; // 0x15(0x1), Mask(0x80)
	uint8_t bOverride_RayTracingGI : 1; // 0x16(0x1), Mask(0x1)
	uint8_t bOverride_RayTracingGIMaxBounces : 1; // 0x16(0x1), Mask(0x2)
	uint8_t bOverride_RayTracingGISamplesPerPixel : 1; // 0x16(0x1), Mask(0x4)
	uint8_t bOverride_PathTracingMaxBounces : 1; // 0x16(0x1), Mask(0x8)
	uint8_t bOverride_PathTracingSamplesPerPixel : 1; // 0x16(0x1), Mask(0x10)
	uint8_t bMobileHQGaussian : 1; // 0x16(0x1), Mask(0x20)
	uint8_t BitPad_0x16_6 : 2; // 0x16(0x1)
	uint8_t BloomMethod; // 0x17(0x1)
	uint8_t AutoExposureMethod; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float WhiteTemp; // 0x1C(0x4)
	float WhiteTint; // 0x20(0x4)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
	struct FVector4 ColorSaturation; // 0x30(0x10)
	struct FVector4 ColorContrast; // 0x40(0x10)
	struct FVector4 ColorGamma; // 0x50(0x10)
	struct FVector4 ColorGain; // 0x60(0x10)
	struct FVector4 ColorOffset; // 0x70(0x10)
	struct FVector4 ColorSaturationShadows; // 0x80(0x10)
	struct FVector4 ColorContrastShadows; // 0x90(0x10)
	struct FVector4 ColorGammaShadows; // 0xA0(0x10)
	struct FVector4 ColorGainShadows; // 0xB0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xC0(0x10)
	struct FVector4 ColorSaturationMidtones; // 0xD0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xE0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xF0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x4)
	float ColorCorrectionShadowsMax; // 0x174(0x4)
	float BlueCorrection; // 0x178(0x4)
	float ExpandGamut; // 0x17C(0x4)
	float ToneCurveAmount; // 0x180(0x4)
	float FilmSlope; // 0x184(0x4)
	float FilmToe; // 0x188(0x4)
	float FilmShoulder; // 0x18C(0x4)
	float FilmBlackClip; // 0x190(0x4)
	float FilmWhiteClip; // 0x194(0x4)
	struct FLinearColor FilmWhitePoint; // 0x198(0x10)
	struct FLinearColor FilmShadowTint; // 0x1A8(0x10)
	float FilmShadowTintBlend; // 0x1B8(0x4)
	float FilmShadowTintAmount; // 0x1BC(0x4)
	float FilmSaturation; // 0x1C0(0x4)
	struct FLinearColor FilmChannelMixerRed; // 0x1C4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1D4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1E4(0x10)
	float FilmContrast; // 0x1F4(0x4)
	float FilmToeAmount; // 0x1F8(0x4)
	float FilmHealAmount; // 0x1FC(0x4)
	float FilmDynamicRange; // 0x200(0x4)
	struct FLinearColor SceneColorTint; // 0x204(0x10)
	float SceneFringeIntensity; // 0x214(0x4)
	float ChromaticAberrationStartOffset; // 0x218(0x4)
	float BloomIntensity; // 0x21C(0x4)
	float BloomThreshold; // 0x220(0x4)
	float BloomSizeScale; // 0x224(0x4)
	float Bloom1Size; // 0x228(0x4)
	float Bloom2Size; // 0x22C(0x4)
	float Bloom3Size; // 0x230(0x4)
	float Bloom4Size; // 0x234(0x4)
	float Bloom5Size; // 0x238(0x4)
	float Bloom6Size; // 0x23C(0x4)
	struct FLinearColor Bloom1Tint; // 0x240(0x10)
	struct FLinearColor Bloom2Tint; // 0x250(0x10)
	struct FLinearColor Bloom3Tint; // 0x260(0x10)
	struct FLinearColor Bloom4Tint; // 0x270(0x10)
	struct FLinearColor Bloom5Tint; // 0x280(0x10)
	struct FLinearColor Bloom6Tint; // 0x290(0x10)
	float BloomConvolutionSize; // 0x2A0(0x4)
	uint8_t Pad_0x2A4[0x4]; // 0x2A4(0x4)
	struct UTexture2D* BloomConvolutionTexture; // 0x2A8(0x8)
	struct FVector2D BloomConvolutionCenterUV; // 0x2B0(0x8)
	float BloomConvolutionPreFilterMin; // 0x2B8(0x4)
	float BloomConvolutionPreFilterMax; // 0x2BC(0x4)
	float BloomConvolutionPreFilterMult; // 0x2C0(0x4)
	float BloomConvolutionBufferScale; // 0x2C4(0x4)
	struct UTexture* BloomDirtMask; // 0x2C8(0x8)
	float BloomDirtMaskIntensity; // 0x2D0(0x4)
	struct FLinearColor BloomDirtMaskTint; // 0x2D4(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x2E4(0x10)
	float AmbientCubemapIntensity; // 0x2F4(0x4)
	struct UTextureCube* AmbientCubemap; // 0x2F8(0x8)
	float CameraShutterSpeed; // 0x300(0x4)
	float CameraISO; // 0x304(0x4)
	float DepthOfFieldFstop; // 0x308(0x4)
	float DepthOfFieldMinFstop; // 0x30C(0x4)
	int32_t DepthOfFieldBladeCount; // 0x310(0x4)
	float AutoExposureBias; // 0x314(0x4)
	float AutoExposureBiasBackup; // 0x318(0x4)
	uint8_t bOverride_AutoExposureBiasBackup : 1; // 0x31C(0x1), Mask(0x1)
	uint8_t AutoExposureApplyPhysicalCameraExposure : 1; // 0x31C(0x1), Mask(0x2)
	uint8_t BitPad_0x31C_2 : 6; // 0x31C(0x1)
	uint8_t Pad_0x31D[0x3]; // 0x31D(0x3)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x320(0x8)
	struct UTexture* AutoExposureMeterMask; // 0x328(0x8)
	float AutoExposureLowPercent; // 0x330(0x4)
	float AutoExposureHighPercent; // 0x334(0x4)
	float AutoExposureMinBrightness; // 0x338(0x4)
	float AutoExposureMaxBrightness; // 0x33C(0x4)
	float AutoExposureSpeedUp; // 0x340(0x4)
	float AutoExposureSpeedDown; // 0x344(0x4)
	float HistogramLogMin; // 0x348(0x4)
	float HistogramLogMax; // 0x34C(0x4)
	float AutoExposureCalibrationConstant; // 0x350(0x4)
	float LensFlareIntensity; // 0x354(0x4)
	struct FLinearColor LensFlareTint; // 0x358(0x10)
	float LensFlareBokehSize; // 0x368(0x4)
	float LensFlareThreshold; // 0x36C(0x4)
	struct UTexture* LensFlareBokehShape; // 0x370(0x8)
	struct FLinearColor LensFlareTints[0x8]; // 0x378(0x80)
	float VignetteIntensity; // 0x3F8(0x4)
	float GrainJitter; // 0x3FC(0x4)
	float GrainIntensity; // 0x400(0x4)
	float AmbientOcclusionIntensity; // 0x404(0x4)
	float AmbientOcclusionStaticFraction; // 0x408(0x4)
	float AmbientOcclusionRadius; // 0x40C(0x4)
	uint8_t AmbientOcclusionRadiusInWS : 1; // 0x410(0x1), Mask(0x1)
	uint8_t BitPad_0x410_1 : 7; // 0x410(0x1)
	uint8_t Pad_0x411[0x3]; // 0x411(0x3)
	float AmbientOcclusionFadeDistance; // 0x414(0x4)
	float AmbientOcclusionFadeRadius; // 0x418(0x4)
	float AmbientOcclusionDistance; // 0x41C(0x4)
	float AmbientOcclusionPower; // 0x420(0x4)
	float AmbientOcclusionBias; // 0x424(0x4)
	float AmbientOcclusionQuality; // 0x428(0x4)
	float AmbientOcclusionMipBlend; // 0x42C(0x4)
	float AmbientOcclusionMipScale; // 0x430(0x4)
	float AmbientOcclusionMipThreshold; // 0x434(0x4)
	float AmbientOcclusionTemporalBlendWeight; // 0x438(0x4)
	uint8_t RayTracingAO : 1; // 0x43C(0x1), Mask(0x1)
	uint8_t BitPad_0x43C_1 : 7; // 0x43C(0x1)
	uint8_t Pad_0x43D[0x3]; // 0x43D(0x3)
	int32_t RayTracingAOSamplesPerPixel; // 0x440(0x4)
	float RayTracingAOIntensity; // 0x444(0x4)
	float RayTracingAORadius; // 0x448(0x4)
	struct FLinearColor IndirectLightingColor; // 0x44C(0x10)
	float IndirectLightingIntensity; // 0x45C(0x4)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x460(0x1)
	uint8_t Pad_0x461[0x3]; // 0x461(0x3)
	int32_t RayTracingGIMaxBounces; // 0x464(0x4)
	int32_t RayTracingGISamplesPerPixel; // 0x468(0x4)
	float ColorGradingIntensity; // 0x46C(0x4)
	struct UTexture* ColorGradingLUT; // 0x470(0x8)
	float DepthOfFieldSensorWidth; // 0x478(0x4)
	float DepthOfFieldFocalDistance; // 0x47C(0x4)
	float DepthOfFieldDepthBlurAmount; // 0x480(0x4)
	float DepthOfFieldDepthBlurRadius; // 0x484(0x4)
	float DepthOfFieldFocalRegion; // 0x488(0x4)
	float DepthOfFieldNearTransitionRegion; // 0x48C(0x4)
	float DepthOfFieldFarTransitionRegion; // 0x490(0x4)
	float DepthOfFieldScale; // 0x494(0x4)
	float DepthOfFieldNearBlurSize; // 0x498(0x4)
	float DepthOfFieldFarBlurSize; // 0x49C(0x4)
	float DepthOfFieldOcclusion; // 0x4A0(0x4)
	float DepthOfFieldSkyFocusDistance; // 0x4A4(0x4)
	float DepthOfFieldVignetteSize; // 0x4A8(0x4)
	float MotionBlurAmount; // 0x4AC(0x4)
	float MotionBlurMax; // 0x4B0(0x4)
	int32_t MotionBlurTargetFPS; // 0x4B4(0x4)
	float MotionBlurPerObjectSize; // 0x4B8(0x4)
	float LPVIntensity; // 0x4BC(0x4)
	float LPVVplInjectionBias; // 0x4C0(0x4)
	float LPVSize; // 0x4C4(0x4)
	float LPVSecondaryOcclusionIntensity; // 0x4C8(0x4)
	float LPVSecondaryBounceIntensity; // 0x4CC(0x4)
	float LPVGeometryVolumeBias; // 0x4D0(0x4)
	float LPVEmissiveInjectionIntensity; // 0x4D4(0x4)
	float LPVDirectionalOcclusionIntensity; // 0x4D8(0x4)
	float LPVDirectionalOcclusionRadius; // 0x4DC(0x4)
	float LPVDiffuseOcclusionExponent; // 0x4E0(0x4)
	float LPVSpecularOcclusionExponent; // 0x4E4(0x4)
	float LPVDiffuseOcclusionIntensity; // 0x4E8(0x4)
	float LPVSpecularOcclusionIntensity; // 0x4EC(0x4)
	enum class EReflectionsType ReflectionsType; // 0x4F0(0x1)
	uint8_t Pad_0x4F1[0x3]; // 0x4F1(0x3)
	float ScreenSpaceReflectionIntensity; // 0x4F4(0x4)
	float ScreenSpaceReflectionQuality; // 0x4F8(0x4)
	float ScreenSpaceReflectionMaxRoughness; // 0x4FC(0x4)
	float RayTracingReflectionsMaxRoughness; // 0x500(0x4)
	int32_t RayTracingReflectionsMaxBounces; // 0x504(0x4)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x508(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x50C(0x1)
	uint8_t RayTracingReflectionsTranslucency : 1; // 0x50D(0x1), Mask(0x1)
	uint8_t BitPad_0x50D_1 : 7; // 0x50D(0x1)
	enum class ETranslucencyType TranslucencyType; // 0x50E(0x1)
	uint8_t Pad_0x50F[0x1]; // 0x50F(0x1)
	float RayTracingTranslucencyMaxRoughness; // 0x510(0x4)
	int32_t RayTracingTranslucencyRefractionRays; // 0x514(0x4)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x518(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x51C(0x1)
	uint8_t RayTracingTranslucencyRefraction : 1; // 0x51D(0x1), Mask(0x1)
	uint8_t BitPad_0x51D_1 : 7; // 0x51D(0x1)
	uint8_t Pad_0x51E[0x2]; // 0x51E(0x2)
	int32_t PathTracingMaxBounces; // 0x520(0x4)
	int32_t PathTracingSamplesPerPixel; // 0x524(0x4)
	float LPVFadeRange; // 0x528(0x4)
	float LPVDirectionalOcclusionFadeRange; // 0x52C(0x4)
	float ScreenPercentage; // 0x530(0x4)
	uint8_t Pad_0x534[0x4]; // 0x534(0x4)
	struct FWeightedBlendables WeightedBlendables; // 0x538(0x10)
	uint8_t Pad_0x548[0x8]; // 0x548(0x8)
};

// Object: ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x0)
struct FWeightedBlendables
{
	struct TArray<struct FWeightedBlendable> Array; // 0x0(0x10)
};

// Object: ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x0)
struct FWeightedBlendable
{
	float Weight; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UObject* Object; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x0)
struct FCanvasIcon
{
	struct UTexture* Texture; // 0x0(0x8)
	float U; // 0x8(0x4)
	float V; // 0xC(0x4)
	float UL; // 0x10(0x4)
	float VL; // 0x14(0x4)
};

// Object: ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x0)
struct FWrappedStringElement
{
	struct FString Value; // 0x0(0x10)
	struct FVector2D LineExtent; // 0x10(0x8)
};

// Object: ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x0)
struct FTextSizingParameters
{
	float DrawX; // 0x0(0x4)
	float DrawY; // 0x4(0x4)
	float DrawXL; // 0x8(0x4)
	float DrawYL; // 0xC(0x4)
	struct FVector2D Scaling; // 0x10(0x8)
	struct UFont* DrawFont; // 0x18(0x8)
	struct FVector2D SpacingAdjust; // 0x20(0x8)
};

// Object: ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x0)
struct FBasedMovementInfo
{
	struct UPrimitiveComponent* MovementBase; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector_NetQuantize100 Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	bool bServerHasBaseComponent; // 0x28(0x1)
	bool bRelativeRotation; // 0x29(0x1)
	bool bServerHasVelocity; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xA0 (Inherited: 0x0)
struct FSimulatedRootMotionReplicatedMove
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FRepRootMotionMontage RootMotion; // 0x8(0x98)
};

// Object: ScriptStruct Engine.RepRootMotionMontage
// Size: 0x98 (Inherited: 0x0)
struct FRepRootMotionMontage
{
	bool bIsActive; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UAnimMontage* AnimMontage; // 0x8(0x8)
	float position; // 0x10(0x4)
	struct FVector_NetQuantize100 Location; // 0x14(0xC)
	struct FRotator Rotation; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x8)
	struct FName MovementBaseBoneName; // 0x38(0x8)
	bool bRelativePosition; // 0x40(0x1)
	bool bRelativeRotation; // 0x41(0x1)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0x38)
	struct FVector_NetQuantize10 Acceleration; // 0x80(0xC)
	struct FVector_NetQuantize10 LinearVelocity; // 0x8C(0xC)
};

// Object: ScriptStruct Engine.Vector_NetQuantize10
// Size: 0xC (Inherited: 0xC)
struct FVector_NetQuantize10 : FVector
{
};

// Object: ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x38 (Inherited: 0x0)
struct FRootMotionSourceGroup
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
	uint8_t bHasAdditiveSources : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bHasOverrideSources : 1; // 0x28(0x1), Mask(0x2)
	uint8_t bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x1), Mask(0x4)
	uint8_t bIsAdditiveVelocityApplied : 1; // 0x28(0x1), Mask(0x8)
	uint8_t BitPad_0x28_4 : 4; // 0x28(0x1)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x1 (Inherited: 0x0)
struct FRootMotionSourceSettings
{
	uint8_t Flags; // 0x0(0x1)
};

// Object: ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.FindFloorResult
// Size: 0x98 (Inherited: 0x0)
struct FFindFloorResult
{
	uint8_t bBlockingHit : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bWalkableFloor : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bLineTrace : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FloorDist; // 0x4(0x4)
	float LineDist; // 0x8(0x4)
	struct FHitResult HitResult; // 0xC(0x8C)
};

// Object: ScriptStruct Engine.CharacterNetworkSerializationPackedBits
// Size: 0x98 (Inherited: 0x0)
struct FCharacterNetworkSerializationPackedBits
{
	uint8_t Pad_0x0[0x98]; // 0x0(0x98)
};

// Object: ScriptStruct Engine.CharacterMoveResponsePackedBits
// Size: 0x98 (Inherited: 0x98)
struct FCharacterMoveResponsePackedBits : FCharacterNetworkSerializationPackedBits
{
};

// Object: ScriptStruct Engine.CharacterServerMovePackedBits
// Size: 0x98 (Inherited: 0x98)
struct FCharacterServerMovePackedBits : FCharacterNetworkSerializationPackedBits
{
};

// Object: ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xE8 (Inherited: 0xB8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData
{
	struct AActor* ChildActorClass; // 0xB8(0x8)
	struct FName ChildActorName; // 0xC0(0x8)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x10]; // 0xD8(0x10)
};

// Object: ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x0)
struct FChildActorAttachedActorInfo
{
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct FName SocketName; // 0x8(0x8)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x0)
struct FCustomProfile
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CustomChannelSetup
// Size: 0xC (Inherited: 0x0)
struct FCustomChannelSetup
{
	uint8_t Channel; // 0x0(0x1)
	uint8_t DefaultResponse; // 0x1(0x1)
	bool bTraceType; // 0x2(0x1)
	bool bStaticObject; // 0x3(0x1)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x0)
struct FCollisionResponseTemplate
{
	struct FName Name; // 0x0(0x8)
	uint8_t CollisionEnabled; // 0x8(0x1)
	uint8_t Pad_0x9[0x1]; // 0x9(0x1)
	bool bCanModify; // 0xA(0x1)
	uint8_t Pad_0xB[0x21]; // 0xB(0x21)
	struct FName ObjectTypeName; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)
};

// Object: ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x0)
struct FBlueprintComponentDelegateBinding
{
	struct FName ComponentPropertyName; // 0x0(0x8)
	struct FName DelegatePropertyName; // 0x8(0x8)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x0)
struct FMeshUVChannelInfo
{
	bool bInitialized; // 0x0(0x1)
	bool bOverrideDensities; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LocalUVDensities[0x4]; // 0x4(0x10)
};

// Object: ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x0)
struct FAutoCompleteNode
{
	int32_t IndexChar; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x8(0x10)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4C (Inherited: 0x0)
struct FAngularDriveConstraint
{
	struct FConstraintDrive TwistDrive; // 0x0(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0xC)
	struct FVector AngularVelocityTarget; // 0x3C(0xC)
	uint8_t AngularDriveMode; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
};

// Object: ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDrive
{
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float MaxForce; // 0x8(0x4)
	uint8_t bEnablePositionDrive : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bEnableVelocityDrive : 1; // 0xC(0x1), Mask(0x2)
	uint8_t BitPad_0xC_2 : 6; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4C (Inherited: 0x0)
struct FLinearDriveConstraint
{
	struct FVector PositionTarget; // 0x0(0xC)
	struct FVector VelocityTarget; // 0xC(0xC)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	uint8_t bEnablePositionDrive : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
};

// Object: ScriptStruct Engine.ConstraintInstanceBase
// Size: 0x18 (Inherited: 0x0)
struct FConstraintInstanceBase
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.ConstraintInstance
// Size: 0x1C8 (Inherited: 0x18)
struct FConstraintInstance : FConstraintInstanceBase
{
	struct FName JointName; // 0x18(0x8)
	struct FName ConstraintBone1; // 0x20(0x8)
	struct FName ConstraintBone2; // 0x28(0x8)
	struct FVector Pos1; // 0x30(0xC)
	struct FVector PriAxis1; // 0x3C(0xC)
	struct FVector SecAxis1; // 0x48(0xC)
	struct FVector Pos2; // 0x54(0xC)
	struct FVector PriAxis2; // 0x60(0xC)
	struct FVector SecAxis2; // 0x6C(0xC)
	struct FRotator AngularRotationOffset; // 0x78(0xC)
	uint8_t bScaleLinearLimits : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x7]; // 0x85(0x7)
	struct FConstraintProfileProperties ProfileInstance; // 0x8C(0x114)
	uint8_t Pad_0x1A0[0x28]; // 0x1A0(0x28)
};

// Object: ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x114 (Inherited: 0x0)
struct FConstraintProfileProperties
{
	float ProjectionLinearTolerance; // 0x0(0x4)
	float ProjectionAngularTolerance; // 0x4(0x4)
	float ProjectionLinearAlpha; // 0x8(0x4)
	float ProjectionAngularAlpha; // 0xC(0x4)
	float LinearBreakThreshold; // 0x10(0x4)
	float LinearPlasticityThreshold; // 0x14(0x4)
	float AngularBreakThreshold; // 0x18(0x4)
	float AngularPlasticityThreshold; // 0x1C(0x4)
	struct FLinearConstraint LinearLimit; // 0x20(0x1C)
	struct FConeConstraint ConeLimit; // 0x3C(0x20)
	struct FTwistConstraint TwistLimit; // 0x5C(0x1C)
	struct FLinearDriveConstraint LinearDrive; // 0x78(0x4C)
	struct FAngularDriveConstraint AngularDrive; // 0xC4(0x4C)
	uint8_t bDisableCollision : 1; // 0x110(0x1), Mask(0x1)
	uint8_t bParentDominates : 1; // 0x110(0x1), Mask(0x2)
	uint8_t bEnableProjection : 1; // 0x110(0x1), Mask(0x4)
	uint8_t bEnableSoftProjection : 1; // 0x110(0x1), Mask(0x8)
	uint8_t bAngularBreakable : 1; // 0x110(0x1), Mask(0x10)
	uint8_t bAngularPlasticity : 1; // 0x110(0x1), Mask(0x20)
	uint8_t bLinearBreakable : 1; // 0x110(0x1), Mask(0x40)
	uint8_t bLinearPlasticity : 1; // 0x110(0x1), Mask(0x80)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
};

// Object: ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x0)
struct FConstraintBaseParams
{
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float Restitution; // 0x8(0x4)
	float ContactDistance; // 0xC(0x4)
	uint8_t bSoftConstraint : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.TwistConstraint
// Size: 0x1C (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams
{
	float TwistLimitDegrees; // 0x14(0x4)
	uint8_t TwistMotion; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams
{
	float Swing1LimitDegrees; // 0x14(0x4)
	float Swing2LimitDegrees; // 0x18(0x4)
	uint8_t Swing1Motion; // 0x1C(0x1)
	uint8_t Swing2Motion; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
};

// Object: ScriptStruct Engine.LinearConstraint
// Size: 0x1C (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams
{
	float Limit; // 0x14(0x4)
	uint8_t XMotion; // 0x18(0x1)
	uint8_t YMotion; // 0x19(0x1)
	uint8_t ZMotion; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct Engine.CullDistanceSizePair
// Size: 0x8 (Inherited: 0x0)
struct FCullDistanceSizePair
{
	float Size; // 0x0(0x4)
	float CullDistance; // 0x4(0x4)
};

// Object: ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x208 (Inherited: 0x0)
struct FRuntimeCurveLinearColor
{
	struct FRichCurve ColorCurves[0x4]; // 0x0(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x8)
};

// Object: ScriptStruct Engine.NamedCurveValue
// Size: 0xC (Inherited: 0x0)
struct FNamedCurveValue
{
	struct FName Name; // 0x0(0x8)
	float Value; // 0x8(0x4)
};

// Object: ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x0)
struct FCurveTableRowHandle
{
	struct UCurveTable* CurveTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BakedCustomAttributePerBoneData
// Size: 0x38 (Inherited: 0x0)
struct FBakedCustomAttributePerBoneData
{
	int32_t BoneTreeIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FBakedStringCustomAttribute> StringAttributes; // 0x8(0x10)
	struct TArray<struct FBakedIntegerCustomAttribute> IntAttributes; // 0x18(0x10)
	struct TArray<struct FBakedFloatCustomAttribute> FloatAttributes; // 0x28(0x10)
};

// Object: ScriptStruct Engine.BakedFloatCustomAttribute
// Size: 0x88 (Inherited: 0x0)
struct FBakedFloatCustomAttribute
{
	struct FName AttributeName; // 0x0(0x8)
	struct FSimpleCurve FloatCurve; // 0x8(0x80)
};

// Object: ScriptStruct Engine.SimpleCurve
// Size: 0x80 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve
{
	uint8_t InterpMode; // 0x6E(0x1)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x70(0x10)
};

// Object: ScriptStruct Engine.SimpleCurveKey
// Size: 0x8 (Inherited: 0x0)
struct FSimpleCurveKey
{
	float Time; // 0x0(0x4)
	float Value; // 0x4(0x4)
};

// Object: ScriptStruct Engine.BakedIntegerCustomAttribute
// Size: 0x88 (Inherited: 0x0)
struct FBakedIntegerCustomAttribute
{
	struct FName AttributeName; // 0x0(0x8)
	struct FIntegralCurve IntCurve; // 0x8(0x80)
};

// Object: ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve
{
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x4)
	bool bUseDefaultValueBeforeFirstKey; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: ScriptStruct Engine.IntegralKey
// Size: 0x8 (Inherited: 0x0)
struct FIntegralKey
{
	float Time; // 0x0(0x4)
	int32_t Value; // 0x4(0x4)
};

// Object: ScriptStruct Engine.BakedStringCustomAttribute
// Size: 0x90 (Inherited: 0x0)
struct FBakedStringCustomAttribute
{
	struct FName AttributeName; // 0x0(0x8)
	struct FStringCurve StringCurve; // 0x8(0x88)
};

// Object: ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve
{
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// Object: ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x0)
struct FStringCurveKey
{
	float Time; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CustomAttributePerBoneData
// Size: 0x18 (Inherited: 0x0)
struct FCustomAttributePerBoneData
{
	int32_t BoneTreeIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FCustomAttribute> Attributes; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CustomAttribute
// Size: 0x30 (Inherited: 0x0)
struct FCustomAttribute
{
	struct FName Name; // 0x0(0x8)
	int32_t VariantType; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<float> Times; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
};

// Object: ScriptStruct Engine.CustomAttributeSetting
// Size: 0x20 (Inherited: 0x0)
struct FCustomAttributeSetting
{
	struct FString Name; // 0x0(0x10)
	struct FString Meaning; // 0x10(0x10)
};

// Object: ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x0)
struct FDataTableCategoryHandle
{
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName ColumnName; // 0x8(0x8)
	struct FName RowContents; // 0x10(0x8)
};

// Object: ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x0)
struct FDataTableRowHandle
{
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x0)
struct FDebugCameraControllerSettingsViewModeIndex
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint8_t ViewModeIndex; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x0)
struct FDebugDisplayProperty
{
	struct UObject* Obj; // 0x0(0x8)
	struct UObject* WithinClass; // 0x8(0x8)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x0)
struct FDebugTextInfo
{
	struct AActor* SrcActor; // 0x0(0x8)
	struct FVector SrcActorOffset; // 0x8(0xC)
	struct FVector SrcActorDesiredOffset; // 0x14(0xC)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x4)
	float Duration; // 0x34(0x4)
	struct FColor TextColor; // 0x38(0x4)
	uint8_t bAbsoluteLocation : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bKeepAttachedToActor : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bDrawShadow : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t BitPad_0x3C_3 : 5; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FVector OrigActorLocation; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct UFont* Font; // 0x50(0x8)
	float FontScale; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x0)
struct FMulticastRecordOptions
{
	struct FString FuncPathName; // 0x0(0x10)
	bool bServerSkip; // 0x10(0x1)
	bool bClientSkip; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xB0 (Inherited: 0x0)
struct FRollbackNetStartupActorInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* Archetype; // 0x8(0x8)
	uint8_t Pad_0x10[0x28]; // 0x10(0x28)
	struct ULevel* Level; // 0x38(0x8)
	uint8_t Pad_0x40[0x60]; // 0x40(0x60)
	struct TArray<struct UObject*> ObjReferences; // 0xA0(0x10)
};

// Object: ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x0)
struct FDialogueWaveParameter
{
	struct UDialogueWave* DialogueWave; // 0x0(0x8)
	struct FDialogueContext Context; // 0x8(0x18)
};

// Object: ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x0)
struct FDialogueContext
{
	struct UDialogueVoice* Speaker; // 0x0(0x8)
	struct TArray<struct UDialogueVoice*> Targets; // 0x8(0x10)
};

// Object: ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x0)
struct FDialogueContextMapping
{
	struct FDialogueContext Context; // 0x0(0x18)
	struct USoundWave* SoundWave; // 0x18(0x8)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x8)
};

// Object: ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution
{
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct UDistributionFloat* Distribution; // 0x28(0x8)
};

// Object: ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution
{
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct FVector MinValueVec; // 0x28(0xC)
	struct FVector MaxValueVec; // 0x34(0xC)
	struct UDistributionVector* Distribution; // 0x40(0x8)
};

// Object: ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x0)
struct FGraphReference
{
	struct UEdGraph* MacroGraph; // 0x0(0x8)
	struct UBlueprint* GraphBlueprint; // 0x8(0x8)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x0)
struct FEdGraphPinReference
{
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x0(0x8)
	struct FGuid PinId; // 0x8(0x10)
};

// Object: ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x0)
struct FEdGraphSchemaAction
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FText MenuDescription; // 0x8(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x4)
	int32_t SectionID; // 0x6C(0x4)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xA0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xB0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xC0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xD0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xE0(0x10)
	struct FString SearchText; // 0xF0(0x10)
};

// Object: ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction
{
	struct UEdGraphNode* NodeTemplate; // 0x100(0x8)
};

// Object: ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x0)
struct FPluginRedirect
{
	struct FString OldPluginName; // 0x0(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// Object: ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x0)
struct FStructRedirect
{
	struct FName OldStructName; // 0x0(0x8)
	struct FName NewStructName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.ClassRedirect
// Size: 0x3C (Inherited: 0x0)
struct FClassRedirect
{
	struct FName ObjectName; // 0x0(0x8)
	struct FName OldClassName; // 0x8(0x8)
	struct FName NewClassName; // 0x10(0x8)
	struct FName OldSubobjName; // 0x18(0x8)
	struct FName NewSubobjName; // 0x20(0x8)
	struct FName NewClassClass; // 0x28(0x8)
	struct FName NewClassPackage; // 0x30(0x8)
	bool InstanceOnly; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
};

// Object: ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x0)
struct FGameNameRedirect
{
	struct FName OldGameName; // 0x0(0x8)
	struct FName NewGameName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x0)
struct FScreenMessageString
{
	uint64_t Key; // 0x0(0x8)
	struct FString ScreenMessage; // 0x8(0x10)
	struct FColor DisplayColor; // 0x18(0x4)
	float TimeToDisplay; // 0x1C(0x4)
	float CurrentTimeDisplayed; // 0x20(0x4)
	struct FVector2D TextScale; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x0)
struct FDropNoteInfo
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FString Comment; // 0x18(0x10)
};

// Object: ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x0)
struct FStatColorMapping
{
	struct FString StatName; // 0x0(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	uint8_t DisableBlend : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.StatColorMapEntry
// Size: 0x8 (Inherited: 0x0)
struct FStatColorMapEntry
{
	float In; // 0x0(0x4)
	struct FColor Out; // 0x4(0x4)
};

// Object: ScriptStruct Engine.WorldContext
// Size: 0x288 (Inherited: 0x0)
struct FWorldContext
{
	uint8_t Pad_0x0[0xD0]; // 0x0(0xD0)
	struct FURL LastURL; // 0xD0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1A0(0x8)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1A8(0x10)
	uint8_t Pad_0x1B8[0x10]; // 0x1B8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1C8(0x10)
	uint8_t Pad_0x1D8[0x18]; // 0x1D8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1F0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x8)
	struct UGameInstance* OwningGameInstance; // 0x218(0x8)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	uint8_t Pad_0x230[0x58]; // 0x230(0x58)
};

// Object: ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x0)
struct FNamedNetDriver
{
	struct UNetDriver* NetDriver; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x0)
struct FLevelStreamingStatus
{
	struct FName PackageName; // 0x0(0x8)
	uint8_t bShouldBeLoaded : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bShouldBeVisible : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	uint32_t LodIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x0)
struct FFullyLoadedPackagesInfo
{
	uint8_t FullyLoadType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Tag; // 0x8(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// Object: ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x0)
struct FURL
{
	struct FString Protocol; // 0x0(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x4)
	int32_t Valid; // 0x24(0x4)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// Object: ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x0)
struct FNetDriverDefinition
{
	struct FName DefName; // 0x0(0x8)
	struct FName DriverClassName; // 0x8(0x8)
	struct FName DriverClassNameFallback; // 0x10(0x8)
};

// Object: ScriptStruct Engine.ExposureSettings
// Size: 0x8 (Inherited: 0x0)
struct FExposureSettings
{
	float FixedEV100; // 0x0(0x4)
	bool bFixed; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x0)
struct FTickPrerequisite
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x0)
struct FCanvasUVTri
{
	struct FVector2D V0_Pos; // 0x0(0x8)
	struct FVector2D V0_UV; // 0x8(0x8)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x8)
	struct FVector2D V1_UV; // 0x28(0x8)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x8)
	struct FVector2D V2_UV; // 0x48(0x8)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// Object: ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x0)
struct FFontRenderInfo
{
	uint8_t bClipText : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEnableShadow : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FDepthFieldGlowInfo GlowInfo; // 0x4(0x24)
};

// Object: ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x0)
struct FDepthFieldGlowInfo
{
	uint8_t bEnableGlow : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FLinearColor GlowColor; // 0x4(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x8)
	struct FVector2D GlowInnerRadius; // 0x1C(0x8)
};

// Object: ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x0)
struct FRedirector
{
	struct FName OldName; // 0x0(0x8)
	struct FName NewName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CollectionReference
// Size: 0x8 (Inherited: 0x0)
struct FCollectionReference
{
	struct FName CollectionName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x0)
struct FComponentReference
{
	struct AActor* OtherActor; // 0x0(0x8)
	struct FName ComponentProperty; // 0x8(0x8)
	struct FString PathToComponent; // 0x10(0x10)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x8 (Inherited: 0x0)
struct FConstrainComponentPropName
{
	struct FName ComponentName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x0)
struct FDamageEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UDamageType* DamageTypeClass; // 0x8(0x8)
};

// Object: ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent
{
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0xC)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
};

// Object: ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x0)
struct FRadialDamageParams
{
	float BaseDamage; // 0x0(0x4)
	float MinimumDamage; // 0x4(0x4)
	float InnerRadius; // 0x8(0x4)
	float OuterRadius; // 0xC(0x4)
	float DamageFalloff; // 0x10(0x4)
};

// Object: ScriptStruct Engine.PointDamageEvent
// Size: 0xB0 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent
{
	float Damage; // 0x10(0x4)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0xC)
	struct FHitResult HitInfo; // 0x20(0x8C)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x14 (Inherited: 0x0)
struct FSkeletalMeshBuildSettings
{
	uint8_t bRecomputeNormals : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bRecomputeTangents : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseMikkTSpace : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bComputeWeightedNormals : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bRemoveDegenerates : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bUseFullPrecisionUVs : 1; // 0x0(0x1), Mask(0x40)
	uint8_t BitPad_0x0_7 : 1; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ThresholdPosition; // 0x4(0x4)
	float ThresholdTangentNormal; // 0x8(0x4)
	float ThresholdUV; // 0xC(0x4)
	float MorphThresholdPosition; // 0x10(0x4)
};

// Object: ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x0)
struct FMeshBuildSettings
{
	uint8_t bUseMikkTSpace : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bRecomputeNormals : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bRecomputeTangents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bComputeWeightedNormals : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bRemoveDegenerates : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bBuildReversedIndexBuffer : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bUseHighPrecisionTangentBasis : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bUseFullPrecisionUVs : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bGenerateLightmapUVs : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bSupportFaceRemap : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	int32_t MinLightmapResolution; // 0x4(0x4)
	int32_t SrcLightmapIndex; // 0x8(0x4)
	int32_t DstLightmapIndex; // 0xC(0x4)
	float BuildScale; // 0x10(0x4)
	struct FVector BuildScale3D; // 0x14(0xC)
	float DistanceFieldResolutionScale; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x8)
};

// Object: ScriptStruct Engine.POV
// Size: 0x1C (Inherited: 0x0)
struct FPOV
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	float FOV; // 0x18(0x4)
};

// Object: ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x88 (Inherited: 0x0)
struct FAnimUpdateRateParameters
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x1(0x1)
	uint8_t bInterpolateSkippedFrames : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bShouldUseLodMap : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bShouldUseMinLod : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bSkipUpdate : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bSkipEvaluation : 1; // 0x2(0x1), Mask(0x10)
	uint8_t BitPad_0x2_5 : 3; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	int32_t UpdateRate; // 0x4(0x4)
	int32_t EvaluationRate; // 0x8(0x4)
	float TickedPoseOffestTime; // 0xC(0x4)
	float AdditionalTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x4)
	int32_t MaxEvalRateForInterpolation; // 0x1C(0x4)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	int32_t SkippedUpdateFrames; // 0x80(0x4)
	int32_t SkippedEvalFrames; // 0x84(0x4)
};

// Object: ScriptStruct Engine.AnimSlotDesc
// Size: 0xC (Inherited: 0x0)
struct FAnimSlotDesc
{
	struct FName SlotName; // 0x0(0x8)
	int32_t NumChannels; // 0x8(0x4)
};

// Object: ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x0)
struct FAnimSlotInfo
{
	struct FName SlotName; // 0x0(0x8)
	struct TArray<float> ChannelWeights; // 0x8(0x10)
};

// Object: ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x0)
struct FMTDResult
{
	struct FVector Direction; // 0x0(0xC)
	float Distance; // 0xC(0x4)
};

// Object: ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x0)
struct FOverlapResult
{
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x8(0x8)
	uint8_t Pad_0x10[0x4]; // 0x10(0x4)
	uint8_t bBlockingHit : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x0)
struct FPrimitiveMaterialRef
{
	struct UPrimitiveComponent* Primitive; // 0x0(0x8)
	struct UDecalComponent* Decal; // 0x8(0x8)
	int32_t ElementIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SwarmDebugOptions
// Size: 0x4 (Inherited: 0x0)
struct FSwarmDebugOptions
{
	uint8_t bDistributionEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bForceContentExport : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bInitialized : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x0)
struct FLightmassDebugOptions
{
	uint8_t bDebugMode : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bStatsEnabled : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float CoplanarTolerance; // 0x4(0x4)
	uint8_t bUseImmediateImport : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bImmediateProcessMappings : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bSortMappings : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bDumpBinaryFiles : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bDebugMaterials : 1; // 0x8(0x1), Mask(0x10)
	uint8_t bPadMappings : 1; // 0x8(0x1), Mask(0x20)
	uint8_t bDebugPaddings : 1; // 0x8(0x1), Mask(0x40)
	uint8_t bOnlyCalcDebugTexelMappings : 1; // 0x8(0x1), Mask(0x80)
	uint8_t bUseRandomColors : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bColorBordersGreen : 1; // 0x9(0x1), Mask(0x2)
	uint8_t bColorByExecutionTime : 1; // 0x9(0x1), Mask(0x4)
	uint8_t BitPad_0x9_3 : 5; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
	float ExecutionTimeDivisor; // 0xC(0x4)
};

// Object: ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x0)
struct FLightmassPrimitiveSettings
{
	uint8_t bUseTwoSidedLighting : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bShadowIndirectOnly : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseEmissiveForStaticLighting : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bUseVertexNormalForHemisphereGather : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float EmissiveLightFalloffExponent; // 0x4(0x4)
	float EmissiveLightExplicitInfluenceRadius; // 0x8(0x4)
	float EmissiveBoost; // 0xC(0x4)
	float DiffuseBoost; // 0x10(0x4)
	float FullyOccludedSamplesFraction; // 0x14(0x4)
};

// Object: ScriptStruct Engine.LightmassLightSettings
// Size: 0xC (Inherited: 0x0)
struct FLightmassLightSettings
{
	float IndirectLightingSaturation; // 0x0(0x4)
	float ShadowExponent; // 0x4(0x4)
	bool bUseAreaShadowsForStationaryLight; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0xC)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float LightSourceAngle; // 0xC(0x4)
};

// Object: ScriptStruct Engine.LightmassPointLightSettings
// Size: 0xC (Inherited: 0xC)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
};

// Object: ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x0)
struct FBasedPosition
{
	struct AActor* Base; // 0x0(0x8)
	struct FVector position; // 0x8(0xC)
	struct FVector CachedBaseLocation; // 0x14(0xC)
	struct FRotator CachedBaseRotation; // 0x20(0xC)
	struct FVector CachedTransPosition; // 0x2C(0xC)
};

// Object: ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x0)
struct FFractureEffect
{
	struct UParticleSystem* ParticleSystem; // 0x0(0x8)
	struct USoundBase* Sound; // 0x8(0x8)
};

// Object: ScriptStruct Engine.CollisionImpactData
// Size: 0x30 (Inherited: 0x0)
struct FCollisionImpactData
{
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x0(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0xC)
	struct FVector TotalFrictionImpulse; // 0x1C(0xC)
	bool bIsVelocityDeltaUnderThreshold; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x0)
struct FRigidBodyContactInfo
{
	struct FVector ContactPosition; // 0x0(0xC)
	struct FVector ContactNormal; // 0xC(0xC)
	float ContactPenetration; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x20(0x10)
};

// Object: ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x0)
struct FRigidBodyErrorCorrection
{
	float PingExtrapolation; // 0x0(0x4)
	float PingLimit; // 0x4(0x4)
	float ErrorPerLinearDifference; // 0x8(0x4)
	float ErrorPerAngularDifference; // 0xC(0x4)
	float MaxRestoredStateError; // 0x10(0x4)
	float MaxLinearHardSnapDistance; // 0x14(0x4)
	float PositionLerp; // 0x18(0x4)
	float AngleLerp; // 0x1C(0x4)
	float LinearVelocityCoefficient; // 0x20(0x4)
	float AngularVelocityCoefficient; // 0x24(0x4)
	float ErrorAccumulationSeconds; // 0x28(0x4)
	float ErrorAccumulationDistanceSq; // 0x2C(0x4)
	float ErrorAccumulationSimilarity; // 0x30(0x4)
};

// Object: ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x0)
struct FRigidBodyState
{
	struct FVector_NetQuantize100 position; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0xC)
	struct FVector_NetQuantize100 AngVel; // 0x2C(0xC)
	uint8_t Flags; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Engine.MaterialShadingModelField
// Size: 0x2 (Inherited: 0x0)
struct FMaterialShadingModelField
{
	uint16_t ShadingModelField; // 0x0(0x2)
};

// Object: ScriptStruct Engine.ExponentialHeightFogData
// Size: 0xC (Inherited: 0x0)
struct FExponentialHeightFogData
{
	float FogDensity; // 0x0(0x4)
	float FogHeightFalloff; // 0x4(0x4)
	float FogHeightOffset; // 0x8(0x4)
};

// Object: ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x0)
struct FFontCharacter
{
	int32_t StartU; // 0x0(0x4)
	int32_t StartV; // 0x4(0x4)
	int32_t USize; // 0x8(0x4)
	int32_t VSize; // 0xC(0x4)
	uint8_t TextureIndex; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t VerticalOffset; // 0x14(0x4)
};

// Object: ScriptStruct Engine.FontImportOptionsData
// Size: 0xA8 (Inherited: 0x0)
struct FFontImportOptionsData
{
	struct FString FontName; // 0x0(0x10)
	float Height; // 0x10(0x4)
	uint8_t bEnableAntialiasing : 1; // 0x14(0x1), Mask(0x1)
	uint8_t bEnableBold : 1; // 0x14(0x1), Mask(0x2)
	uint8_t bEnableItalic : 1; // 0x14(0x1), Mask(0x4)
	uint8_t bEnableUnderline : 1; // 0x14(0x1), Mask(0x8)
	uint8_t bAlphaOnly : 1; // 0x14(0x1), Mask(0x10)
	uint8_t BitPad_0x14_5 : 3; // 0x14(0x1)
	uint8_t CharacterSet; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	struct FString Chars; // 0x18(0x10)
	struct FString UnicodeRange; // 0x28(0x10)
	struct FString CharsFilePath; // 0x38(0x10)
	struct FString CharsFileWildcard; // 0x48(0x10)
	uint8_t bCreatePrintableOnly : 1; // 0x58(0x1), Mask(0x1)
	uint8_t bIncludeASCIIRange : 1; // 0x58(0x1), Mask(0x2)
	uint8_t BitPad_0x58_2 : 6; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	struct FLinearColor ForegroundColor; // 0x5C(0x10)
	uint8_t bEnableDropShadow : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t BitPad_0x6C_1 : 7; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
	int32_t TexturePageWidth; // 0x70(0x4)
	int32_t TexturePageMaxHeight; // 0x74(0x4)
	int32_t XPadding; // 0x78(0x4)
	int32_t YPadding; // 0x7C(0x4)
	int32_t ExtendBoxTop; // 0x80(0x4)
	int32_t ExtendBoxBottom; // 0x84(0x4)
	int32_t ExtendBoxRight; // 0x88(0x4)
	int32_t ExtendBoxLeft; // 0x8C(0x4)
	uint8_t bEnableLegacyMode : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t Kerning; // 0x94(0x4)
	uint8_t bUseDistanceFieldAlpha : 1; // 0x98(0x1), Mask(0x1)
	uint8_t BitPad_0x98_1 : 7; // 0x98(0x1)
	uint8_t Pad_0x99[0x3]; // 0x99(0x3)
	int32_t DistanceFieldScaleFactor; // 0x9C(0x4)
	float DistanceFieldScanRadiusScale; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xB0 (Inherited: 0xB0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings
{
};

// Object: ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x20 (Inherited: 0x0)
struct FActiveForceFeedbackEffect
{
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct Engine.ForceFeedbackParameters
// Size: 0xC (Inherited: 0x0)
struct FForceFeedbackParameters
{
	struct FName Tag; // 0x0(0x8)
	bool bLooping; // 0x8(0x1)
	bool bIgnoreTimeDilation; // 0x9(0x1)
	bool bPlayWhilePaused; // 0xA(0x1)
	uint8_t Pad_0xB[0x1]; // 0xB(0x1)
};

// Object: ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x0)
struct FForceFeedbackChannelDetails
{
	uint8_t bAffectsLeftLarge : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bAffectsLeftSmall : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bAffectsRightLarge : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bAffectsRightSmall : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FRuntimeFloatCurve Curve; // 0x8(0x88)
};

// Object: ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xB8 (Inherited: 0x0)
struct FPredictProjectilePathResult
{
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x0(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1C)
	struct FHitResult HitResult; // 0x2C(0x8C)
};

// Object: ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1C (Inherited: 0x0)
struct FPredictProjectilePathPointData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Time; // 0x18(0x4)
};

// Object: ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x60 (Inherited: 0x0)
struct FPredictProjectilePathParams
{
	struct FVector StartLocation; // 0x0(0xC)
	struct FVector LaunchVelocity; // 0xC(0xC)
	bool bTraceWithCollision; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float ProjectileRadius; // 0x1C(0x4)
	float MaxSimTime; // 0x20(0x4)
	bool bTraceWithChannel; // 0x24(0x1)
	uint8_t TraceChannel; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	struct TArray<uint8_t> ObjectTypes; // 0x28(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
	float SimFrequency; // 0x48(0x4)
	float OverrideGravityZ; // 0x4C(0x4)
	uint8_t DrawDebugType; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	float DrawDebugTime; // 0x54(0x4)
	bool bTraceComplex; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
};

// Object: ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x0)
struct FActiveHapticFeedbackEffect
{
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x0)
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve Frequency; // 0x0(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// Object: ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x0)
struct FClusterNode
{
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
	struct FVector MinInstanceScale; // 0x28(0xC)
	struct FVector MaxInstanceScale; // 0x34(0xC)
};

// Object: ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x0)
struct FClusterNode_DEPRECATED
{
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
};

// Object: ScriptStruct Engine.HLODISMComponentDesc
// Size: 0x20 (Inherited: 0x0)
struct FHLODISMComponentDesc
{
	struct UStaticMesh* StaticMesh; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
	struct TArray<struct FTransform> Instances; // 0x10(0x10)
};

// Object: ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x0)
struct FHLODProxyMesh
{
	struct TLazyObjectPtr<struct ALODActor> LODActor; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UStaticMesh* StaticMesh; // 0x20(0x8)
	struct FName Key; // 0x28(0x8)
};

// Object: ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x0)
struct FImportanceTexture
{
	struct FIntPoint Size; // 0x0(0x8)
	int32_t NumMips; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x8)
	uint8_t Weighting; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x0)
struct FComponentOverrideRecord
{
	struct UObject* ComponentClass; // 0x0(0x8)
	struct UActorComponent* ComponentTemplate; // 0x8(0x8)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
};

// Object: ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x0)
struct FComponentKey
{
	struct UObject* OwnerClass; // 0x0(0x8)
	struct FName SCSVariableName; // 0x8(0x8)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// Object: ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x4 (Inherited: 0x0)
struct FBlueprintInputDelegateBinding
{
	uint8_t bConsumeInput : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bExecuteWhenPaused : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverrideParentBinding : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x4)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding
{
	struct FName InputActionName; // 0x4(0x8)
	uint8_t InputKeyEvent; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// Object: ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x4)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding
{
	struct FName InputAxisName; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
};

// Object: ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x4)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FKey AxisKey; // 0x8(0x18)
	struct FName FunctionNameToBind; // 0x20(0x8)
};

// Object: ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x0)
struct FCachedKeyToActionInfo
{
	struct UPlayerInput* PlayerInput; // 0x0(0x8)
	uint8_t Pad_0x8[0x68]; // 0x8(0x68)
};

// Object: ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x4)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FInputChord InputChord; // 0x8(0x20)
	uint8_t InputKeyEvent; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FName FunctionNameToBind; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0xC (Inherited: 0x4)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding
{
	uint8_t InputKeyEvent; // 0x1(0x1)
	struct FName FunctionNameToBind; // 0x4(0x8)
};

// Object: ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x150 (Inherited: 0xB8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData
{
	struct UStaticMesh* StaticMesh; // 0xB8(0x8)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xC0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x110(0x10)
	uint8_t Pad_0x120[0x20]; // 0x120(0x20)
	int32_t InstancingRandomSeed; // 0x140(0x4)
	uint8_t Pad_0x144[0xC]; // 0x144(0xC)
};

// Object: ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x0)
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix Transform; // 0x0(0x40)
};

// Object: ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x0)
struct FInstancedStaticMeshLightMapInstanceData
{
	struct FTransform Transform; // 0x0(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)
};

// Object: ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x8 (Inherited: 0x0)
struct FInstancedStaticMeshMappingInfo
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x0)
struct FCurveEdTab
{
	struct FString TabName; // 0x0(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x4)
	float ViewEndInput; // 0x24(0x4)
	float ViewStartOutput; // 0x28(0x4)
	float ViewEndOutput; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x0)
struct FCurveEdEntry
{
	struct UObject* CurveObject; // 0x0(0x8)
	struct FColor CurveColor; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x4)
	int32_t bColorCurve; // 0x24(0x4)
	int32_t bFloatingPointColorCurve; // 0x28(0x4)
	int32_t bClamp; // 0x2C(0x4)
	float ClampLow; // 0x30(0x4)
	float ClampHigh; // 0x34(0x4)
};

// Object: ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x0)
struct FInterpEdSelKey
{
	struct UInterpGroup* Group; // 0x0(0x8)
	struct UInterpTrack* Track; // 0x8(0x8)
	int32_t KeyIndex; // 0x10(0x4)
	float UnsnappedPosition; // 0x14(0x4)
};

// Object: ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x0)
struct FCameraPreviewInfo
{
	struct APawn* PawnClass; // 0x0(0x8)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	struct APawn* PawnInst; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x0)
struct FSubTrackGroup
{
	struct FString GroupName; // 0x0(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	uint8_t bIsCollapsed : 1; // 0x20(0x1), Mask(0x1)
	uint8_t bIsSelected : 1; // 0x20(0x1), Mask(0x2)
	uint8_t BitPad_0x20_2 : 6; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x0)
struct FSupportedSubTrackInfo
{
	struct UInterpTrack* SupportedClass; // 0x0(0x8)
	struct FString SubTrackName; // 0x8(0x10)
	int32_t GroupIndex; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x0)
struct FAnimControlTrackKey
{
	float StartTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	float AnimStartOffset; // 0x10(0x4)
	float AnimEndOffset; // 0x14(0x4)
	float AnimPlayRate; // 0x18(0x4)
	uint8_t bLooping : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0x1C(0x1), Mask(0x2)
	uint8_t BitPad_0x1C_2 : 6; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.BoolTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FBoolTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Value : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x0)
struct FDirectorTrackCut
{
	float Time; // 0x0(0x4)
	float TransitionTime; // 0x4(0x4)
	struct FName TargetCamGroup; // 0x8(0x8)
	int32_t ShotNumber; // 0x10(0x4)
};

// Object: ScriptStruct Engine.EventTrackKey
// Size: 0xC (Inherited: 0x0)
struct FEventTrackKey
{
	float Time; // 0x0(0x4)
	struct FName EventName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x0)
struct FInterpLookupTrack
{
	struct TArray<struct FInterpLookupPoint> Points; // 0x0(0x10)
};

// Object: ScriptStruct Engine.InterpLookupPoint
// Size: 0xC (Inherited: 0x0)
struct FInterpLookupPoint
{
	struct FName GroupName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0xC (Inherited: 0x0)
struct FParticleReplayTrackKey
{
	float Time; // 0x0(0x4)
	float Duration; // 0x4(0x4)
	int32_t ClipIDNumber; // 0x8(0x4)
};

// Object: ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x0)
struct FSoundTrackKey
{
	float Time; // 0x0(0x4)
	float Volume; // 0x4(0x4)
	float Pitch; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct USoundBase* Sound; // 0x10(0x8)
};

// Object: ScriptStruct Engine.ToggleTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FToggleTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t ToggleAction; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.VisibilityTrackKey
// Size: 0x8 (Inherited: 0x0)
struct FVisibilityTrackKey
{
	float Time; // 0x0(0x4)
	uint8_t Action; // 0x4(0x1)
	uint8_t ActiveCondition; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
};

// Object: ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x0)
struct FVectorSpringState
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.FloatSpringState
// Size: 0x8 (Inherited: 0x0)
struct FFloatSpringState
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x0)
struct FDrawToRenderTargetContext
{
	struct UTextureRenderTarget2D* RenderTarget; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x0)
struct FLatentActionManager
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x0)
struct FLayerActorStats
{
	struct UObject* Type; // 0x0(0x8)
	int32_t Total; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x0)
struct FReplicatedStaticActorDestructionInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct UObject* ObjClass; // 0x30(0x8)
};

// Object: ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x12C (Inherited: 0x0)
struct FLevelSimplificationDetails
{
	bool bCreatePackagePerAsset; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DetailsPercentage; // 0x4(0x4)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x8(0x88)
	bool bOverrideLandscapeExportLOD; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	int32_t LandscapeExportLOD; // 0x94(0x4)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x98(0x88)
	bool bBakeFoliageToLandscape; // 0x120(0x1)
	bool bBakeGrassToLandscape; // 0x121(0x1)
	bool bGenerateMeshNormalMap; // 0x122(0x1)
	bool bGenerateMeshMetallicMap; // 0x123(0x1)
	bool bGenerateMeshRoughnessMap; // 0x124(0x1)
	bool bGenerateMeshSpecularMap; // 0x125(0x1)
	bool bGenerateLandscapeNormalMap; // 0x126(0x1)
	bool bGenerateLandscapeMetallicMap; // 0x127(0x1)
	bool bGenerateLandscapeRoughnessMap; // 0x128(0x1)
	bool bGenerateLandscapeSpecularMap; // 0x129(0x1)
	uint8_t Pad_0x12A[0x2]; // 0x12A(0x2)
};

// Object: ScriptStruct Engine.MaterialProxySettings
// Size: 0x88 (Inherited: 0x0)
struct FMaterialProxySettings
{
	struct FIntPoint TextureSize; // 0x0(0x8)
	float GutterSpace; // 0x8(0x4)
	float MetallicConstant; // 0xC(0x4)
	float RoughnessConstant; // 0x10(0x4)
	float AnisotropyConstant; // 0x14(0x4)
	float SpecularConstant; // 0x18(0x4)
	float OpacityConstant; // 0x1C(0x4)
	float OpacityMaskConstant; // 0x20(0x4)
	float AmbientOcclusionConstant; // 0x24(0x4)
	uint8_t TextureSizingType; // 0x28(0x1)
	uint8_t MaterialMergeType; // 0x29(0x1)
	uint8_t BlendMode; // 0x2A(0x1)
	uint8_t bAllowTwoSidedMaterial : 1; // 0x2B(0x1), Mask(0x1)
	uint8_t bNormalMap : 1; // 0x2B(0x1), Mask(0x2)
	uint8_t bTangentMap : 1; // 0x2B(0x1), Mask(0x4)
	uint8_t bMetallicMap : 1; // 0x2B(0x1), Mask(0x8)
	uint8_t bRoughnessMap : 1; // 0x2B(0x1), Mask(0x10)
	uint8_t bAnisotropyMap : 1; // 0x2B(0x1), Mask(0x20)
	uint8_t bSpecularMap : 1; // 0x2B(0x1), Mask(0x40)
	uint8_t bEmissiveMap : 1; // 0x2B(0x1), Mask(0x80)
	uint8_t bOpacityMap : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t bOpacityMaskMap : 1; // 0x2C(0x1), Mask(0x2)
	uint8_t bAmbientOcclusionMap : 1; // 0x2C(0x1), Mask(0x4)
	uint8_t BitPad_0x2C_3 : 5; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FIntPoint DiffuseTextureSize; // 0x30(0x8)
	struct FIntPoint NormalTextureSize; // 0x38(0x8)
	struct FIntPoint TangentTextureSize; // 0x40(0x8)
	struct FIntPoint MetallicTextureSize; // 0x48(0x8)
	struct FIntPoint RoughnessTextureSize; // 0x50(0x8)
	struct FIntPoint AnisotropyTextureSize; // 0x58(0x8)
	struct FIntPoint SpecularTextureSize; // 0x60(0x8)
	struct FIntPoint EmissiveTextureSize; // 0x68(0x8)
	struct FIntPoint OpacityTextureSize; // 0x70(0x8)
	struct FIntPoint OpacityMaskTextureSize; // 0x78(0x8)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x8)
};

// Object: ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x0)
struct FStreamableTextureInstance
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance
{
	struct UTexture2D* Texture; // 0x28(0x8)
	bool bAttached; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float OriginalRadius; // 0x34(0x4)
};

// Object: ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x110 (Inherited: 0xB8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FTransform Transform; // 0xC0(0x30)
	struct FGuid LightGuid; // 0xF0(0x10)
	int32_t PreviewShadowMapChannel; // 0x100(0x4)
	uint8_t Pad_0x104[0xC]; // 0x104(0xC)
};

// Object: ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x0)
struct FBatchedPoint
{
	struct FVector position; // 0x0(0xC)
	struct FLinearColor Color; // 0xC(0x10)
	float PointSize; // 0x1C(0x4)
	float RemainingLifeTime; // 0x20(0x4)
	uint8_t DepthPriority; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x0)
struct FBatchedLine
{
	struct FVector Start; // 0x0(0xC)
	struct FVector End; // 0xC(0xC)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float RemainingLifeTime; // 0x2C(0x4)
	uint8_t DepthPriority; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
};

// Object: ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x0)
struct FClientReceiveData
{
	struct APlayerController* LocalPC; // 0x0(0x8)
	struct FName MessageType; // 0x8(0x8)
	int32_t MessageIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_1; // 0x28(0x8)
	struct APlayerState* RelatedPlayerState_2; // 0x30(0x8)
	struct UObject* OptionalObject; // 0x38(0x8)
};

// Object: ScriptStruct Engine.ComponentSync
// Size: 0xC (Inherited: 0x0)
struct FComponentSync
{
	struct FName Name; // 0x0(0x8)
	enum class ESyncOption SyncOption; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.LODMappingData
// Size: 0x20 (Inherited: 0x0)
struct FLODMappingData
{
	struct TArray<int32_t> mapping; // 0x0(0x10)
	struct TArray<int32_t> InverseMapping; // 0x10(0x10)
};

// Object: ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x0)
struct FParameterGroupData
{
	struct FString GroupName; // 0x0(0x10)
	int32_t GroupSortPriority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x0)
struct FMaterialSpriteElement
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x8(0x8)
	uint8_t bSizeIsInScreenSpace : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float BaseSizeX; // 0x14(0x4)
	float BaseSizeY; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x8)
};

// Object: ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x228 (Inherited: 0x0)
struct FMaterialCachedExpressionData
{
	struct FMaterialCachedParameters Parameters; // 0x0(0x1A0)
	struct TArray<struct UObject*> ReferencedTextures; // 0x1A0(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1B0(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1C0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; // 0x1D0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1E0(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x1F0(0x10)
	struct TArray<struct FName> DynamicParameterNames; // 0x200(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x210(0x10)
	uint8_t bHasRuntimeVirtualTextureOutput : 1; // 0x220(0x1), Mask(0x1)
	uint8_t bHasSceneColor : 1; // 0x220(0x1), Mask(0x2)
	uint8_t BitPad_0x220_2 : 6; // 0x220(0x1)
	uint8_t Pad_0x221[0x7]; // 0x221(0x7)
};

// Object: ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x0)
struct FMaterialParameterCollectionInfo
{
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x0)
struct FMaterialFunctionInfo
{
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MaterialCachedParameters
// Size: 0x1A0 (Inherited: 0x0)
struct FMaterialCachedParameters
{
	struct FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0(0x140)
	struct TArray<float> ScalarValues; // 0x140(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x150(0x10)
	struct TArray<struct UTexture*> TextureValues; // 0x160(0x10)
	struct TArray<struct UFont*> FontValues; // 0x170(0x10)
	struct TArray<int32_t> FontPageValues; // 0x180(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190(0x10)
};

// Object: ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x40 (Inherited: 0x0)
struct FMaterialCachedParameterEntry
{
	struct TArray<uint64_t> NameHashes; // 0x0(0x10)
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10(0x10)
	struct TArray<struct FGuid> ExpressionGuids; // 0x20(0x10)
	struct TArray<bool> Overrides; // 0x30(0x10)
};

// Object: ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x0)
struct FMaterialParameterInfo
{
	struct FName Name; // 0x0(0x8)
	uint8_t Association; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t Index; // 0xC(0x4)
};

// Object: ScriptStruct Engine.StaticComponentMaskValue
// Size: 0x4 (Inherited: 0x0)
struct FStaticComponentMaskValue
{
	bool R; // 0x0(0x1)
	bool G; // 0x1(0x1)
	bool B; // 0x2(0x1)
	bool A; // 0x3(0x1)
};

// Object: ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x0)
struct FParameterChannelNames
{
	struct FText R; // 0x0(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// Object: ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x0)
struct FCustomDefine
{
	struct FString DefineName; // 0x0(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// Object: ScriptStruct Engine.CustomOutput
// Size: 0xC (Inherited: 0x0)
struct FCustomOutput
{
	struct FName OutputName; // 0x0(0x8)
	uint8_t OutputType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.CustomInput
// Size: 0x1C (Inherited: 0x0)
struct FCustomInput
{
	struct FName InputName; // 0x0(0x8)
	struct FExpressionInput Input; // 0x8(0xC)
	uint8_t Pad_0x14[0x8]; // 0x14(0x8)
};

// Object: ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x0)
struct FFunctionExpressionOutput
{
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0(0x8)
	struct FGuid ExpressionOutputId; // 0x8(0x10)
	struct FExpressionOutput Output; // 0x18(0x8)
};

// Object: ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x0)
struct FFunctionExpressionInput
{
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x0(0x8)
	struct FGuid ExpressionInputId; // 0x8(0x10)
	struct FExpressionInput Input; // 0x18(0xC)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
};

// Object: ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x0)
struct FFontParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UFont* FontValue; // 0x10(0x8)
	int32_t FontPage; // 0x18(0x4)
	struct FGuid ExpressionGUID; // 0x1C(0x10)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x0)
struct FRuntimeVirtualTextureParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// Object: ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x0)
struct FTextureParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// Object: ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x0)
struct FVectorParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// Object: ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x0)
struct FScalarParameterValue
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	float ParameterValue; // 0x10(0x4)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// Object: ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x0)
struct FScalarParameterAtlasInstanceData
{
	bool bIsUsedAsAtlasPosition; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8(0x28)
	struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30(0x28)
};

// Object: ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x8 (Inherited: 0x0)
struct FMaterialInstanceBasePropertyOverrides
{
	uint8_t bOverride_OpacityMaskClipValue : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_BlendMode : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_ShadingModel : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_DitheredLODTransition : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_CastDynamicShadowAsMasked : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_TwoSided : 1; // 0x0(0x1), Mask(0x20)
	uint8_t TwoSided : 1; // 0x0(0x1), Mask(0x40)
	uint8_t DitheredLODTransition : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bCastDynamicShadowAsMasked : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t BlendMode; // 0x2(0x1)
	uint8_t ShadingModel; // 0x3(0x1)
	float OpacityMaskClipValue; // 0x4(0x4)
};

// Object: ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x0)
struct FMaterialTextureInfo
{
	float SamplingScale; // 0x0(0x4)
	int32_t UVChannelIndex; // 0x4(0x4)
	struct FName TextureName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x0)
struct FLightmassMaterialInterfaceSettings
{
	float EmissiveBoost; // 0x0(0x4)
	float DiffuseBoost; // 0x4(0x4)
	float ExportResolutionScale; // 0x8(0x4)
	uint8_t bCastShadowAsMasked : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bOverrideCastShadowAsMasked : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bOverrideEmissiveBoost : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bOverrideDiffuseBoost : 1; // 0xC(0x1), Mask(0x8)
	uint8_t bOverrideExportResolutionScale : 1; // 0xC(0x1), Mask(0x10)
	uint8_t BitPad_0xC_5 : 3; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x0)
struct FMaterialLayersFunctions
{
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)
};

// Object: ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x0)
struct FCollectionParameterBase
{
	struct FName ParameterName; // 0x0(0x8)
	struct FGuid ID; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase
{
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// Object: ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1C (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase
{
	float DefaultValue; // 0x18(0x4)
};

// Object: ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x0)
struct FInterpGroupActorInfo
{
	struct FName ObjectName; // 0x0(0x8)
	struct TArray<struct AActor*> Actors; // 0x8(0x10)
};

// Object: ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x0)
struct FCameraCutInfo
{
	struct FVector Location; // 0x0(0xC)
	float Timestamp; // 0xC(0x4)
};

// Object: ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x0)
struct FMemberReference
{
	struct UObject* MemberParent; // 0x0(0x8)
	struct FString MemberScope; // 0x8(0x10)
	struct FName MemberName; // 0x18(0x8)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x1)
	bool bWasDeprecated; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
};

// Object: ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x0)
struct FMeshInstancingSettings
{
	struct AActor* ActorClassToUse; // 0x0(0x8)
	int32_t InstanceReplacementThreshold; // 0x8(0x4)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xC(0x1)
	bool bSkipMeshesWithVertexColors; // 0xD(0x1)
	bool bUseHLODVolumes; // 0xE(0x1)
	uint8_t Pad_0xF[0x1]; // 0xF(0x1)
	struct UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x8)
};

// Object: ScriptStruct Engine.MeshMergingSettings
// Size: 0xA0 (Inherited: 0x0)
struct FMeshMergingSettings
{
	int32_t TargetLightMapResolution; // 0x0(0x4)
	enum class EUVOutput OutputUVs[0x8]; // 0x4(0x8)
	struct FMaterialProxySettings MaterialSettings; // 0xC(0x88)
	int32_t GutterSize; // 0x94(0x4)
	int32_t SpecificLOD; // 0x98(0x4)
	enum class EMeshLODSelectionType LODSelectionType; // 0x9C(0x1)
	uint8_t bGenerateLightMapUV : 1; // 0x9D(0x1), Mask(0x1)
	uint8_t bComputedLightMapResolution : 1; // 0x9D(0x1), Mask(0x2)
	uint8_t bPivotPointAtZero : 1; // 0x9D(0x1), Mask(0x4)
	uint8_t bMergePhysicsData : 1; // 0x9D(0x1), Mask(0x8)
	uint8_t bMergeMaterials : 1; // 0x9D(0x1), Mask(0x10)
	uint8_t bCreateMergedMaterial : 1; // 0x9D(0x1), Mask(0x20)
	uint8_t bBakeVertexDataToMesh : 1; // 0x9D(0x1), Mask(0x40)
	uint8_t bUseVertexDataForBakingMaterial : 1; // 0x9D(0x1), Mask(0x80)
	uint8_t bUseTextureBinning : 1; // 0x9E(0x1), Mask(0x1)
	uint8_t bReuseMeshLightmapUVs : 1; // 0x9E(0x1), Mask(0x2)
	uint8_t bMergeEquivalentMaterials : 1; // 0x9E(0x1), Mask(0x4)
	uint8_t bUseLandscapeCulling : 1; // 0x9E(0x1), Mask(0x8)
	uint8_t bIncludeImposters : 1; // 0x9E(0x1), Mask(0x10)
	uint8_t bAllowDistanceField : 1; // 0x9E(0x1), Mask(0x20)
	uint8_t BitPad_0x9E_6 : 2; // 0x9E(0x1)
	uint8_t Pad_0x9F[0x1]; // 0x9F(0x1)
};

// Object: ScriptStruct Engine.MeshProxySettings
// Size: 0xA8 (Inherited: 0x0)
struct FMeshProxySettings
{
	int32_t ScreenSize; // 0x0(0x4)
	float VoxelSize; // 0x4(0x4)
	struct FMaterialProxySettings MaterialSettings; // 0x8(0x88)
	float MergeDistance; // 0x90(0x4)
	struct FColor UnresolvedGeometryColor; // 0x94(0x4)
	float MaxRayCastDist; // 0x98(0x4)
	float HardAngleThreshold; // 0x9C(0x4)
	int32_t LightMapResolution; // 0xA0(0x4)
	uint8_t NormalCalculationMethod; // 0xA4(0x1)
	uint8_t LandscapeCullingPrecision; // 0xA5(0x1)
	uint8_t bCalculateCorrectLODModel : 1; // 0xA6(0x1), Mask(0x1)
	uint8_t bOverrideVoxelSize : 1; // 0xA6(0x1), Mask(0x2)
	uint8_t bOverrideTransferDistance : 1; // 0xA6(0x1), Mask(0x4)
	uint8_t bUseHardAngleThreshold : 1; // 0xA6(0x1), Mask(0x8)
	uint8_t bComputeLightMapResolution : 1; // 0xA6(0x1), Mask(0x10)
	uint8_t bRecalculateNormals : 1; // 0xA6(0x1), Mask(0x20)
	uint8_t bUseLandscapeCulling : 1; // 0xA6(0x1), Mask(0x40)
	uint8_t bAllowDistanceField : 1; // 0xA6(0x1), Mask(0x80)
	uint8_t bReuseMeshLightmapUVs : 1; // 0xA7(0x1), Mask(0x1)
	uint8_t bCreateCollision : 1; // 0xA7(0x1), Mask(0x2)
	uint8_t bAllowVertexColors : 1; // 0xA7(0x1), Mask(0x4)
	uint8_t bGenerateLightmapUVs : 1; // 0xA7(0x1), Mask(0x8)
	uint8_t BitPad_0xA7_4 : 4; // 0xA7(0x1)
};

// Object: ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x0)
struct FMeshReductionSettings
{
	float PercentTriangles; // 0x0(0x4)
	float PercentVertices; // 0x4(0x4)
	float MaxDeviation; // 0x8(0x4)
	float PixelError; // 0xC(0x4)
	float WeldingThreshold; // 0x10(0x4)
	float HardAngleThreshold; // 0x14(0x4)
	int32_t BaseLODModel; // 0x18(0x4)
	uint8_t SilhouetteImportance; // 0x1C(0x1)
	uint8_t TextureImportance; // 0x1D(0x1)
	uint8_t ShadingImportance; // 0x1E(0x1)
	uint8_t bRecalculateNormals : 1; // 0x1F(0x1), Mask(0x1)
	uint8_t bGenerateUniqueLightmapUVs : 1; // 0x1F(0x1), Mask(0x2)
	uint8_t bKeepSymmetry : 1; // 0x1F(0x1), Mask(0x4)
	uint8_t bVisibilityAided : 1; // 0x1F(0x1), Mask(0x8)
	uint8_t bCullOccluded : 1; // 0x1F(0x1), Mask(0x10)
	uint8_t BitPad_0x1F_5 : 3; // 0x1F(0x1)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x1)
	uint8_t VisibilityAggressiveness; // 0x21(0x1)
	uint8_t VertexColorImportance; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x0)
struct FPurchaseInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// Object: ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve
{
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// Object: ScriptStruct Engine.NameCurveKey
// Size: 0xC (Inherited: 0x0)
struct FNameCurveKey
{
	float Time; // 0x0(0x4)
	struct FName Value; // 0x4(0x8)
};

// Object: ScriptStruct Engine.NavAvoidanceMask
// Size: 0x4 (Inherited: 0x0)
struct FNavAvoidanceMask
{
	uint8_t bGroup0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bGroup1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bGroup2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bGroup3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bGroup4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bGroup5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bGroup6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bGroup7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bGroup8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bGroup9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bGroup10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bGroup11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bGroup12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bGroup13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bGroup14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bGroup15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t bGroup16 : 1; // 0x2(0x1), Mask(0x1)
	uint8_t bGroup17 : 1; // 0x2(0x1), Mask(0x2)
	uint8_t bGroup18 : 1; // 0x2(0x1), Mask(0x4)
	uint8_t bGroup19 : 1; // 0x2(0x1), Mask(0x8)
	uint8_t bGroup20 : 1; // 0x2(0x1), Mask(0x10)
	uint8_t bGroup21 : 1; // 0x2(0x1), Mask(0x20)
	uint8_t bGroup22 : 1; // 0x2(0x1), Mask(0x40)
	uint8_t bGroup23 : 1; // 0x2(0x1), Mask(0x80)
	uint8_t bGroup24 : 1; // 0x3(0x1), Mask(0x1)
	uint8_t bGroup25 : 1; // 0x3(0x1), Mask(0x2)
	uint8_t bGroup26 : 1; // 0x3(0x1), Mask(0x4)
	uint8_t bGroup27 : 1; // 0x3(0x1), Mask(0x8)
	uint8_t bGroup28 : 1; // 0x3(0x1), Mask(0x10)
	uint8_t bGroup29 : 1; // 0x3(0x1), Mask(0x20)
	uint8_t bGroup30 : 1; // 0x3(0x1), Mask(0x40)
	uint8_t bGroup31 : 1; // 0x3(0x1), Mask(0x80)
};

// Object: ScriptStruct Engine.MovementProperties
// Size: 0x1 (Inherited: 0x0)
struct FMovementProperties
{
	uint8_t bCanCrouch : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bCanJump : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bCanWalk : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bCanSwim : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bCanFly : 1; // 0x0(0x1), Mask(0x10)
	uint8_t BitPad_0x0_5 : 3; // 0x0(0x1)
};

// Object: ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x1)
struct FNavAgentProperties : FMovementProperties
{
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AgentRadius; // 0x4(0x4)
	float AgentHeight; // 0x8(0x4)
	float AgentStepHeight; // 0xC(0x4)
	float NavWalkingSearchHeightScale; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)
};

// Object: ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties
{
	struct FName Name; // 0x30(0x8)
	struct FColor Color; // 0x38(0x4)
	struct FVector DefaultQueryExtent; // 0x3C(0xC)
	struct AActor* NavigationDataClass; // 0x48(0x8)
	struct TSoftClassPtr<struct AActor*> NavDataClass; // 0x50(0x28)
};

// Object: ScriptStruct Engine.NavAgentSelector
// Size: 0x4 (Inherited: 0x0)
struct FNavAgentSelector
{
	uint8_t bSupportsAgent0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
};

// Object: ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x0)
struct FNavigationLinkBase
{
	float LeftProjectHeight; // 0x0(0x4)
	float MaxFallDownLength; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
	float SnapRadius; // 0xC(0x4)
	float SnapHeight; // 0x10(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x14(0x4)
	uint8_t bSupportsAgent0 : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x18(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x18(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x18(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x18(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x18(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x18(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x18(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x19(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x19(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x19(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x19(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x19(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x19(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x19(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x19(0x1), Mask(0x80)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	uint8_t Direction; // 0x1C(0x1)
	uint8_t bUseSnapHeight : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t bSnapToCheapestArea : 1; // 0x1D(0x1), Mask(0x2)
	uint8_t bCustomFlag0 : 1; // 0x1D(0x1), Mask(0x4)
	uint8_t bCustomFlag1 : 1; // 0x1D(0x1), Mask(0x8)
	uint8_t bCustomFlag2 : 1; // 0x1D(0x1), Mask(0x10)
	uint8_t bCustomFlag3 : 1; // 0x1D(0x1), Mask(0x20)
	uint8_t bCustomFlag4 : 1; // 0x1D(0x1), Mask(0x40)
	uint8_t bCustomFlag5 : 1; // 0x1D(0x1), Mask(0x80)
	uint8_t bCustomFlag6 : 1; // 0x1E(0x1), Mask(0x1)
	uint8_t bCustomFlag7 : 1; // 0x1E(0x1), Mask(0x2)
	uint8_t BitPad_0x1E_2 : 6; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct UNavAreaBase* AreaClass; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase
{
	struct FVector LeftStart; // 0x30(0xC)
	struct FVector LeftEnd; // 0x3C(0xC)
	struct FVector RightStart; // 0x48(0xC)
	struct FVector RightEnd; // 0x54(0xC)
};

// Object: ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase
{
	struct FVector Left; // 0x30(0xC)
	struct FVector Right; // 0x3C(0xC)
};

// Object: ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x0)
struct FChannelDefinition
{
	struct FName ChannelName; // 0x0(0x8)
	struct FName ClassName; // 0x8(0x8)
	struct UObject* ChannelClass; // 0x10(0x8)
	int32_t StaticChannelIndex; // 0x18(0x4)
	bool bTickOnCreate; // 0x1C(0x1)
	bool bServerOpen; // 0x1D(0x1)
	bool bClientOpen; // 0x1E(0x1)
	bool bInitialServer; // 0x1F(0x1)
	bool bInitialClient; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x0)
struct FPacketSimulationSettings
{
	int32_t PktLoss; // 0x0(0x4)
	int32_t PktLossMaxSize; // 0x4(0x4)
	int32_t PktLossMinSize; // 0x8(0x4)
	int32_t PktOrder; // 0xC(0x4)
	int32_t PktDup; // 0x10(0x4)
	int32_t PktLag; // 0x14(0x4)
	int32_t PktLagVariance; // 0x18(0x4)
	int32_t PktLagMin; // 0x1C(0x4)
	int32_t PktLagMax; // 0x20(0x4)
	int32_t PktIncomingLagMin; // 0x24(0x4)
	int32_t PktIncomingLagMax; // 0x28(0x4)
	int32_t PktIncomingLoss; // 0x2C(0x4)
	int32_t PktJitter; // 0x30(0x4)
};

// Object: ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x0)
struct FFastArraySerializer
{
	uint8_t Pad_0x0[0x54]; // 0x0(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x4)
	uint8_t Pad_0x58[0xA8]; // 0x58(0xA8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x1)
	uint8_t Pad_0x101[0x7]; // 0x101(0x7)
};

// Object: ScriptStruct Engine.FastArraySerializerItem
// Size: 0xC (Inherited: 0x0)
struct FFastArraySerializerItem
{
	int32_t ReplicationID; // 0x0(0x4)
	int32_t ReplicationKey; // 0x4(0x4)
	int32_t MostRecentArrayReplicationKey; // 0x8(0x4)
};

// Object: ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x0)
struct FNetworkEmulationProfileDescription
{
	struct FString ProfileName; // 0x0(0x10)
	struct FString Tooltip; // 0x10(0x10)
};

// Object: ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x0)
struct FNodeItem
{
	struct FName ParentName; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
};

// Object: ScriptStruct Engine.ParticleBurst
// Size: 0xC (Inherited: 0x0)
struct FParticleBurst
{
	int32_t Count; // 0x0(0x4)
	int32_t CountLow; // 0x4(0x4)
	float Time; // 0x8(0x4)
};

// Object: ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x0)
struct FParticleRandomSeedInfo
{
	struct FName ParameterName; // 0x0(0x8)
	uint8_t bGetSeedFromInstance : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bInstanceSeedIsIndex : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bResetSeedOnEmitterLooping : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bRandomlySelectSeedArray : 1; // 0x8(0x1), Mask(0x8)
	uint8_t BitPad_0x8_4 : 4; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// Object: ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x0)
struct FParticleCurvePair
{
	struct FString CurveName; // 0x0(0x10)
	struct UObject* CurveObject; // 0x10(0x8)
};

// Object: ScriptStruct Engine.BeamModifierOptions
// Size: 0x4 (Inherited: 0x0)
struct FBeamModifierOptions
{
	uint8_t bModify : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bScale : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bLock : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x0)
struct FParticleEvent_GenerateInfo
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Frequency; // 0x4(0x4)
	int32_t ParticleFrequency; // 0x8(0x4)
	uint8_t FirstTimeOnly : 1; // 0xC(0x1), Mask(0x1)
	uint8_t LastTimeOnly : 1; // 0xC(0x1), Mask(0x2)
	uint8_t UseReflectedImpactVector : 1; // 0xC(0x1), Mask(0x4)
	uint8_t bUseOrbitOffset : 1; // 0xC(0x1), Mask(0x8)
	uint8_t BitPad_0xC_4 : 4; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName CustomName; // 0x10(0x8)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// Object: ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x0)
struct FLocationBoneSocketInfo
{
	struct FName BoneSocketName; // 0x0(0x8)
	struct FVector Offset; // 0x8(0xC)
};

// Object: ScriptStruct Engine.OrbitOptions
// Size: 0x4 (Inherited: 0x0)
struct FOrbitOptions
{
	uint8_t bProcessDuringSpawn : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bProcessDuringUpdate : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bUseEmitterTime : 1; // 0x0(0x1), Mask(0x4)
	uint8_t BitPad_0x0_3 : 5; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x40 (Inherited: 0x0)
struct FEmitterDynamicParameter
{
	struct FName ParamName; // 0x0(0x8)
	uint8_t bUseEmitterTime : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bSpawnTimeOnly : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t ValueMethod; // 0x9(0x1)
	uint8_t bScaleVelocityByParamValue : 1; // 0xA(0x1), Mask(0x1)
	uint8_t BitPad_0xA_1 : 7; // 0xA(0x1)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
	struct FRawDistributionFloat ParamValue; // 0x10(0x30)
};

// Object: ScriptStruct Engine.BeamTargetData
// Size: 0xC (Inherited: 0x0)
struct FBeamTargetData
{
	struct FName TargetName; // 0x0(0x8)
	float TargetPercentage; // 0x8(0x4)
};

// Object: ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x0)
struct FGPUSpriteResourceData
{
	struct TArray<struct FColor> QuantizedColorSamples; // 0x0(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xA0(0x10)
	struct FVector ConstantAcceleration; // 0xB0(0xC)
	struct FVector OrbitOffsetBase; // 0xBC(0xC)
	struct FVector OrbitOffsetRange; // 0xC8(0xC)
	struct FVector OrbitFrequencyBase; // 0xD4(0xC)
	struct FVector OrbitFrequencyRange; // 0xE0(0xC)
	struct FVector OrbitPhaseBase; // 0xEC(0xC)
	struct FVector OrbitPhaseRange; // 0xF8(0xC)
	float GlobalVectorFieldScale; // 0x104(0x4)
	float GlobalVectorFieldTightness; // 0x108(0x4)
	float PerParticleVectorFieldScale; // 0x10C(0x4)
	float PerParticleVectorFieldBias; // 0x110(0x4)
	float DragCoefficientScale; // 0x114(0x4)
	float DragCoefficientBias; // 0x118(0x4)
	float ResilienceScale; // 0x11C(0x4)
	float ResilienceBias; // 0x120(0x4)
	float CollisionRadiusScale; // 0x124(0x4)
	float CollisionRadiusBias; // 0x128(0x4)
	float CollisionTimeBias; // 0x12C(0x4)
	float CollisionRandomSpread; // 0x130(0x4)
	float CollisionRandomDistribution; // 0x134(0x4)
	float OneMinusFriction; // 0x138(0x4)
	float RotationRateScale; // 0x13C(0x4)
	float CameraMotionBlurAmount; // 0x140(0x4)
	uint8_t ScreenAlignment; // 0x144(0x1)
	uint8_t LockAxisFlag; // 0x145(0x1)
	uint8_t Pad_0x146[0x2]; // 0x146(0x2)
	struct FVector2D PivotOffset; // 0x148(0x8)
	uint8_t bRemoveHMDRoll : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	float MinFacingCameraBlendDistance; // 0x154(0x4)
	float MaxFacingCameraBlendDistance; // 0x158(0x4)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
};

// Object: ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x270 (Inherited: 0x0)
struct FGPUSpriteEmitterInfo
{
	struct UParticleModuleRequired* RequiredModule; // 0x0(0x8)
	struct UParticleModuleSpawn* SpawnModule; // 0x8(0x8)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x8)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xA0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xC0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xE0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0xC)
	struct FVector PointAttractorPosition; // 0x12C(0xC)
	float PointAttractorRadiusSq; // 0x138(0x4)
	struct FVector OrbitOffsetBase; // 0x13C(0xC)
	struct FVector OrbitOffsetRange; // 0x148(0xC)
	struct FVector2D InvMaxSize; // 0x154(0x8)
	float InvRotationRateScale; // 0x15C(0x4)
	float MaxLifetime; // 0x160(0x4)
	int32_t MaxParticleCount; // 0x164(0x4)
	uint8_t ScreenAlignment; // 0x168(0x1)
	uint8_t LockAxisFlag; // 0x169(0x1)
	uint8_t bEnableCollision : 1; // 0x16A(0x1), Mask(0x1)
	uint8_t BitPad_0x16A_1 : 7; // 0x16A(0x1)
	uint8_t CollisionMode; // 0x16B(0x1)
	uint8_t bRemoveHMDRoll : 1; // 0x16C(0x1), Mask(0x1)
	uint8_t BitPad_0x16C_1 : 7; // 0x16C(0x1)
	uint8_t Pad_0x16D[0x3]; // 0x16D(0x3)
	float MinFacingCameraBlendDistance; // 0x170(0x4)
	float MaxFacingCameraBlendDistance; // 0x174(0x4)
	struct FRawDistributionVector DynamicColor; // 0x178(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1C0(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1F0(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x238(0x30)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)
};

// Object: ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x0)
struct FGPUSpriteLocalVectorFieldInfo
{
	struct UVectorField* Field; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0xC)
	struct FRotator MaxInitialRotation; // 0x4C(0xC)
	struct FRotator RotationRate; // 0x58(0xC)
	float Intensity; // 0x64(0x4)
	float Tightness; // 0x68(0x4)
	uint8_t bIgnoreComponentTransform : 1; // 0x6C(0x1), Mask(0x1)
	uint8_t bTileX : 1; // 0x6C(0x1), Mask(0x2)
	uint8_t bTileY : 1; // 0x6C(0x1), Mask(0x4)
	uint8_t bTileZ : 1; // 0x6C(0x1), Mask(0x8)
	uint8_t bUseFixDT : 1; // 0x6C(0x1), Mask(0x10)
	uint8_t BitPad_0x6C_5 : 3; // 0x6C(0x1)
	uint8_t Pad_0x6D[0x3]; // 0x6D(0x3)
};

// Object: ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x0)
struct FNamedEmitterMaterial
{
	struct FName Name; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x0)
struct FLODSoloTrack
{
	struct TArray<uint8_t> SoloEnableSetting; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ParticleSystemLOD
// Size: 0x1 (Inherited: 0x0)
struct FParticleSystemLOD
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x0)
struct FParticleSysParam
{
	struct FName Name; // 0x0(0x8)
	uint8_t ParamType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Scalar; // 0xC(0x4)
	float Scalar_Low; // 0x10(0x4)
	struct FVector Vector; // 0x14(0xC)
	struct FVector Vector_Low; // 0x20(0xC)
	struct FColor Color; // 0x2C(0x4)
	struct AActor* Actor; // 0x30(0x8)
	struct UMaterialInterface* Material; // 0x38(0x8)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
};

// Object: ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x0)
struct FParticleSystemReplayFrame
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x0)
struct FParticleEmitterReplayFrame
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PerPlatformBool
// Size: 0x1 (Inherited: 0x0)
struct FPerPlatformBool
{
	bool Default; // 0x0(0x1)
};

// Object: ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x4 (Inherited: 0x0)
struct FFreezablePerPlatformInt
{
	uint8_t Pad_0x0[0x4]; // 0x0(0x4)
};

// Object: ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x0)
struct FPhysicalAnimationData
{
	struct FName BodyName; // 0x0(0x8)
	uint8_t bIsLocalSimulation : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float OrientationStrength; // 0xC(0x4)
	float AngularVelocityStrength; // 0x10(0x4)
	float PositionStrength; // 0x14(0x4)
	float VelocityStrength; // 0x18(0x4)
	float MaxLinearForce; // 0x1C(0x4)
	float MaxAngularForce; // 0x20(0x4)
};

// Object: ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2C (Inherited: 0x0)
struct FPhysicalAnimationProfile
{
	struct FName ProfileName; // 0x0(0x8)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x8(0x24)
};

// Object: ScriptStruct Engine.SolverIterations
// Size: 0x1C (Inherited: 0x0)
struct FSolverIterations
{
	float FixedTimeStep; // 0x0(0x4)
	int32_t SolverIterations; // 0x4(0x4)
	int32_t JointIterations; // 0x8(0x4)
	int32_t CollisionIterations; // 0xC(0x4)
	int32_t SolverPushOutIterations; // 0x10(0x4)
	int32_t JointPushOutIterations; // 0x14(0x4)
	int32_t CollisionPushOutIterations; // 0x18(0x4)
};

// Object: ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x11C (Inherited: 0x0)
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties ProfileProperties; // 0x0(0x114)
	struct FName ProfileName; // 0x114(0x8)
};

// Object: ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x3 (Inherited: 0x0)
struct FChaosPhysicsSettings
{
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x0(0x1)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x1(0x1)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x2(0x1)
};

// Object: ScriptStruct Engine.PhysicalSurfaceName
// Size: 0xC (Inherited: 0x0)
struct FPhysicalSurfaceName
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
};

// Object: ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x0)
struct FDelegateArray
{
	struct TArray<struct FDelegate> Delegates; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x0)
struct FViewTargetTransitionParams
{
	float BlendTime; // 0x0(0x4)
	uint8_t BlendFunction; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float BlendExp; // 0x8(0x4)
	uint8_t bLockOutgoing : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.TViewTarget
// Size: 0x600 (Inherited: 0x0)
struct FTViewTarget
{
	struct AActor* Target; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FMinimalViewInfo POV; // 0x10(0x5E0)
	struct APlayerState* PlayerState; // 0x5F0(0x8)
	uint8_t Pad_0x5F8[0x8]; // 0x5F8(0x8)
};

// Object: ScriptStruct Engine.CameraCacheEntry
// Size: 0x5F0 (Inherited: 0x0)
struct FCameraCacheEntry
{
	float Timestamp; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FMinimalViewInfo POV; // 0x10(0x5E0)
};

// Object: ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x0)
struct FUpdateLevelStreamingLevelStatus
{
	struct FName PackageName; // 0x0(0x8)
	int32_t LodIndex; // 0x8(0x4)
	uint8_t bNewShouldBeLoaded : 1; // 0xC(0x1), Mask(0x1)
	uint8_t bNewShouldBeVisible : 1; // 0xC(0x1), Mask(0x2)
	uint8_t bNewShouldBlockOnLoad : 1; // 0xC(0x1), Mask(0x4)
	uint8_t BitPad_0xC_3 : 5; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x0)
struct FInputActionSpeechMapping
{
	struct FName ActionName; // 0x0(0x8)
	struct FName SpeechKeyword; // 0x8(0x8)
};

// Object: ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x0)
struct FInputAxisKeyMapping
{
	struct FName AxisName; // 0x0(0x8)
	float Scale; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FKey Key; // 0x10(0x18)
};

// Object: ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x0)
struct FInputActionKeyMapping
{
	struct FName ActionName; // 0x0(0x8)
	uint8_t bShift : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bCtrl : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bAlt : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bCmd : 1; // 0x8(0x1), Mask(0x8)
	uint8_t BitPad_0x8_4 : 4; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FKey Key; // 0x10(0x18)
};

// Object: ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x0)
struct FInputAxisConfigEntry
{
	struct FName AxisKeyName; // 0x0(0x8)
	struct FInputAxisProperties AxisProperties; // 0x8(0x10)
};

// Object: ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x0)
struct FInputAxisProperties
{
	float Deadzone; // 0x0(0x4)
	float Sensitivity; // 0x4(0x4)
	float Exponent; // 0x8(0x4)
	uint8_t bInvert : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x0)
struct FKeyBind
{
	struct FKey Key; // 0x0(0x18)
	struct FString Command; // 0x18(0x10)
	uint8_t Control : 1; // 0x28(0x1), Mask(0x1)
	uint8_t Shift : 1; // 0x28(0x1), Mask(0x2)
	uint8_t Alt : 1; // 0x28(0x1), Mask(0x4)
	uint8_t Cmd : 1; // 0x28(0x1), Mask(0x8)
	uint8_t bIgnoreCtrl : 1; // 0x28(0x1), Mask(0x10)
	uint8_t bIgnoreShift : 1; // 0x28(0x1), Mask(0x20)
	uint8_t bIgnoreAlt : 1; // 0x28(0x1), Mask(0x40)
	uint8_t bIgnoreCmd : 1; // 0x28(0x1), Mask(0x80)
	uint8_t bDisabled : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x0)
struct FPlayerMuteList
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t VoiceChannelIdx; // 0x34(0x4)
};

// Object: ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x0)
struct FPoseDataContainer
{
	struct TArray<struct FSmartName> PoseNames; // 0x0(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// Object: ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x0)
struct FPoseData
{
	struct TArray<struct FTransform> LocalSpacePose; // 0x0(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)
};

// Object: ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x0)
struct FPreviewAssetAttachContainer
{
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x0(0x10)
};

// Object: ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x0)
struct FPreviewAttachedObjectPair
{
	struct TSoftObjectPtr<UObject> AttachedObject; // 0x0(0x28)
	struct UObject* Object; // 0x28(0x8)
	struct FName AttachedTo; // 0x30(0x8)
};

// Object: ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x0)
struct FPreviewMeshCollectionEntry
{
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0(0x28)
};

// Object: ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0x100 (Inherited: 0xB8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xB8[0x8]; // 0xB8(0x8)
	struct FTransform ComponentTransform; // 0xC0(0x30)
	int32_t VisibilityId; // 0xF0(0x4)
	uint8_t Pad_0xF4[0x4]; // 0xF4(0x4)
	struct UPrimitiveComponent* LODParent; // 0xF8(0x8)
};

// Object: ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x0)
struct FSpriteCategoryInfo
{
	struct FName Category; // 0x0(0x8)
	struct FText DisplayName; // 0x8(0x18)
	struct FText Description; // 0x20(0x18)
};

// Object: ScriptStruct Engine.QuartzClockSettings
// Size: 0x20 (Inherited: 0x0)
struct FQuartzClockSettings
{
	struct FQuartzTimeSignature TimeSignature; // 0x0(0x18)
	bool bIgnoreLevelChange; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Engine.QuartzTimeSignature
// Size: 0x18 (Inherited: 0x0)
struct FQuartzTimeSignature
{
	int32_t NumBeats; // 0x0(0x4)
	enum class EQuartzTimeSignatureQuantization BeatType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct TArray<struct FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8(0x10)
};

// Object: ScriptStruct Engine.QuartzPulseOverrideStep
// Size: 0x8 (Inherited: 0x0)
struct FQuartzPulseOverrideStep
{
	int32_t NumberOfPulses; // 0x0(0x4)
	enum class EQuartzCommandQuantization PulseDuration; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.QuartzQuantizationBoundary
// Size: 0xC (Inherited: 0x0)
struct FQuartzQuantizationBoundary
{
	enum class EQuartzCommandQuantization Quantization; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Multiplier; // 0x4(0x4)
	enum class EQuarztQuantizationReference CountingReferencePoint; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.QuartzTransportTimeStamp
// Size: 0xC (Inherited: 0x0)
struct FQuartzTransportTimeStamp
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x0)
struct FLevelNameAndTime
{
	struct FString LevelName; // 0x0(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x0)
struct FReverbSettings
{
	bool bApplyReverb; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UReverbEffect* ReverbEffect; // 0x8(0x8)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x8)
	float Volume; // 0x18(0x4)
	float FadeTime; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x0)
struct FCompressedRichCurve
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x0)
struct FTransformBase
{
	struct FName Node; // 0x0(0x8)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x8(0x20)
};

// Object: ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x0)
struct FTransformBaseConstraint
{
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x0(0x10)
};

// Object: ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x0)
struct FRigTransformConstraint
{
	uint8_t TranformType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName ParentSpace; // 0x4(0x8)
	float Weight; // 0xC(0x4)
};

// Object: ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x0)
struct FNode
{
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct Engine.RootMotionSource
// Size: 0x90 (Inherited: 0x0)
struct FRootMotionSource
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	uint16_t Priority; // 0x8(0x2)
	uint16_t LocalID; // 0xA(0x2)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName InstanceName; // 0x10(0x8)
	float StartTime; // 0x18(0x4)
	float CurrentTime; // 0x1C(0x4)
	float PreviousTime; // 0x20(0x4)
	float Duration; // 0x24(0x4)
	struct FRootMotionSourceStatus Status; // 0x28(0x1)
	struct FRootMotionSourceSettings Settings; // 0x29(0x1)
	bool bInLocalSpace; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
	struct FRootMotionMovementParams RootMotionParams; // 0x30(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x70(0x14)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x0)
struct FRootMotionFinishVelocitySettings
{
	enum class ERootMotionFinishVelocityMode Mode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector SetVelocity; // 0x4(0xC)
	float ClampVelocity; // 0x10(0x4)
};

// Object: ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x1 (Inherited: 0x0)
struct FRootMotionSourceStatus
{
	uint8_t Flags; // 0x0(0x1)
};

// Object: ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xC0 (Inherited: 0x90)
struct FRootMotionSource_JumpForce : FRootMotionSource
{
	struct FRotator Rotation; // 0x84(0xC)
	float Distance; // 0x90(0x4)
	float Height; // 0x94(0x4)
	bool bDisableTimeout; // 0x98(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xA0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xA8(0x8)
	uint8_t Pad_0xB5[0xB]; // 0xB5(0xB)
};

// Object: ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xC0 (Inherited: 0x90)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource
{
	struct FVector StartLocation; // 0x84(0xC)
	struct FVector InitialTargetLocation; // 0x90(0xC)
	struct FVector TargetLocation; // 0x9C(0xC)
	bool bRestrictSpeedToExpected; // 0xA8(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xB0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xB8(0x8)
};

// Object: ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xB0 (Inherited: 0x90)
struct FRootMotionSource_MoveToForce : FRootMotionSource
{
	struct FVector StartLocation; // 0x84(0xC)
	struct FVector TargetLocation; // 0x90(0xC)
	bool bRestrictSpeedToExpected; // 0x9C(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xA0(0x8)
};

// Object: ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xD0 (Inherited: 0x90)
struct FRootMotionSource_RadialForce : FRootMotionSource
{
	struct FVector Location; // 0x84(0xC)
	struct AActor* LocationActor; // 0x90(0x8)
	float Radius; // 0x98(0x4)
	float Strength; // 0x9C(0x4)
	bool bIsPush; // 0xA0(0x1)
	bool bNoZForce; // 0xA1(0x1)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xA8(0x8)
	struct UCurveFloat* StrengthOverTime; // 0xB0(0x8)
	bool bUseFixedWorldDirection; // 0xB8(0x1)
	struct FRotator FixedWorldDirection; // 0xBC(0xC)
	uint8_t Pad_0xCB[0x5]; // 0xCB(0x5)
};

// Object: ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xA0 (Inherited: 0x90)
struct FRootMotionSource_ConstantForce : FRootMotionSource
{
	struct FVector Force; // 0x84(0xC)
	struct UCurveFloat* StrengthOverTime; // 0x90(0x8)
};

// Object: ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x0)
struct FCameraExposureSettings
{
	uint8_t Method; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LowPercent; // 0x4(0x4)
	float HighPercent; // 0x8(0x4)
	float MinBrightness; // 0xC(0x4)
	float MaxBrightness; // 0x10(0x4)
	float SpeedUp; // 0x14(0x4)
	float SpeedDown; // 0x18(0x4)
	float Bias; // 0x1C(0x4)
	struct UCurveFloat* BiasCurve; // 0x20(0x8)
	struct UTexture* MeterMask; // 0x28(0x8)
	float HistogramLogMin; // 0x30(0x4)
	float HistogramLogMax; // 0x34(0x4)
	float CalibrationConstant; // 0x38(0x4)
	uint8_t ApplyPhysicalCameraExposure : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct Engine.LensSettings
// Size: 0xE0 (Inherited: 0x0)
struct FLensSettings
{
	struct FLensBloomSettings Bloom; // 0x0(0xB8)
	struct FLensImperfectionSettings Imperfections; // 0xB8(0x20)
	float ChromaticAberration; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x0)
struct FLensImperfectionSettings
{
	struct UTexture* DirtMask; // 0x0(0x8)
	float DirtMaskIntensity; // 0x8(0x4)
	struct FLinearColor DirtMaskTint; // 0xC(0x10)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.LensBloomSettings
// Size: 0xB8 (Inherited: 0x0)
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings GaussianSum; // 0x0(0x84)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	uint8_t Method; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x7]; // 0xB1(0x7)
};

// Object: ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x0)
struct FConvolutionBloomSettings
{
	struct UTexture2D* Texture; // 0x0(0x8)
	float Size; // 0x8(0x4)
	struct FVector2D CenterUV; // 0xC(0x8)
	float PreFilterMin; // 0x14(0x4)
	float PreFilterMax; // 0x18(0x4)
	float PreFilterMult; // 0x1C(0x4)
	float BufferScale; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x0)
struct FGaussianSumBloomSettings
{
	float Intensity; // 0x0(0x4)
	float Threshold; // 0x4(0x4)
	float SizeScale; // 0x8(0x4)
	float Filter1Size; // 0xC(0x4)
	float Filter2Size; // 0x10(0x4)
	float Filter3Size; // 0x14(0x4)
	float Filter4Size; // 0x18(0x4)
	float Filter5Size; // 0x1C(0x4)
	float Filter6Size; // 0x20(0x4)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// Object: ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x0)
struct FFilmStockSettings
{
	float Slope; // 0x0(0x4)
	float Toe; // 0x4(0x4)
	float Shoulder; // 0x8(0x4)
	float BlackClip; // 0xC(0x4)
	float WhiteClip; // 0x10(0x4)
};

// Object: ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 (Inherited: 0x0)
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings Global; // 0x0(0x50)
	struct FColorGradePerRangeSettings Shadows; // 0x50(0x50)
	struct FColorGradePerRangeSettings Midtones; // 0xA0(0x50)
	struct FColorGradePerRangeSettings Highlights; // 0xF0(0x50)
	float ShadowsMax; // 0x140(0x4)
	float HighlightsMin; // 0x144(0x4)
	uint8_t Pad_0x148[0x8]; // 0x148(0x8)
};

// Object: ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 (Inherited: 0x0)
struct FColorGradePerRangeSettings
{
	struct FVector4 Saturation; // 0x0(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 Offset; // 0x40(0x10)
};

// Object: ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x0)
struct FEngineShowFlagsSetting
{
	struct FString ShowFlagName; // 0x0(0x10)
	bool Enabled; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
// Size: 0x50 (Inherited: 0x0)
struct FSceneViewExtensionIsActiveFunctor
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x0)
struct FSingleAnimationPlayData
{
	struct UAnimationAsset* AnimToPlay; // 0x0(0x8)
	uint8_t bSavedLooping : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bSavedPlaying : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float SavedPosition; // 0xC(0x4)
	float SavedPlayRate; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x0)
struct FSkeletalMaterial
{
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x70 (Inherited: 0x0)
struct FClothingAssetData_Legacy
{
	struct FName AssetName; // 0x0(0x8)
	struct FString ApexFileName; // 0x8(0x10)
	bool bClothPropertiesChanged; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1C(0x50)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x0)
struct FClothPhysicsProperties_Legacy
{
	float VerticalResistance; // 0x0(0x4)
	float HorizontalResistance; // 0x4(0x4)
	float BendResistance; // 0x8(0x4)
	float ShearResistance; // 0xC(0x4)
	float Friction; // 0x10(0x4)
	float Damping; // 0x14(0x4)
	float TetherStiffness; // 0x18(0x4)
	float TetherLimit; // 0x1C(0x4)
	float Drag; // 0x20(0x4)
	float StiffnessFrequency; // 0x24(0x4)
	float GravityScale; // 0x28(0x4)
	float MassScale; // 0x2C(0x4)
	float InertiaBlend; // 0x30(0x4)
	float SelfCollisionThickness; // 0x34(0x4)
	float SelfCollisionSquashScale; // 0x38(0x4)
	float SelfCollisionStiffness; // 0x3C(0x4)
	float SolverFrequency; // 0x40(0x4)
	float FiberCompression; // 0x44(0x4)
	float FiberExpansion; // 0x48(0x4)
	float FiberResistance; // 0x4C(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xB8 (Inherited: 0x0)
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	struct TArray<int32_t> LODMaterialMap; // 0x8(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2C(0x3C)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct UAnimSequence* BakePose; // 0x90(0x8)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x8)
	struct FString SourceImportFilename; // 0xA0(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xB0(0x1)
	uint8_t bHasBeenSimplified : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t bHasPerLODVertexColors : 1; // 0xB1(0x1), Mask(0x2)
	uint8_t bAllowCPUAccess : 1; // 0xB1(0x1), Mask(0x4)
	uint8_t bSupportUniformlyDistributedSampling : 1; // 0xB1(0x1), Mask(0x8)
	uint8_t BitPad_0xB1_4 : 4; // 0xB1(0x1)
	uint8_t Pad_0xB2[0x6]; // 0xB2(0x6)
};

// Object: ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3C (Inherited: 0x0)
struct FSkeletalMeshOptimizationSettings
{
	uint8_t TerminationCriterion; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float NumOfVertPercentage; // 0x8(0x4)
	uint32_t MaxNumOfTriangles; // 0xC(0x4)
	uint32_t MaxNumOfVerts; // 0x10(0x4)
	float MaxDeviationPercentage; // 0x14(0x4)
	uint8_t ReductionMethod; // 0x18(0x1)
	uint8_t SilhouetteImportance; // 0x19(0x1)
	uint8_t TextureImportance; // 0x1A(0x1)
	uint8_t ShadingImportance; // 0x1B(0x1)
	uint8_t SkinningImportance; // 0x1C(0x1)
	uint8_t bRemapMorphTargets : 1; // 0x1D(0x1), Mask(0x1)
	uint8_t bRecalcNormals : 1; // 0x1D(0x1), Mask(0x2)
	uint8_t BitPad_0x1D_2 : 6; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	float WeldingThreshold; // 0x20(0x4)
	float NormalsThreshold; // 0x24(0x4)
	int32_t MaxBonesPerVertex; // 0x28(0x4)
	uint8_t bEnforceBoneBoundaries : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	float VolumeImportance; // 0x30(0x4)
	uint8_t bLockEdges : 1; // 0x34(0x1), Mask(0x1)
	uint8_t bLockColorBounaries : 1; // 0x34(0x1), Mask(0x2)
	uint8_t BitPad_0x34_2 : 6; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	int32_t BaseLOD; // 0x38(0x4)
};

// Object: ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x0)
struct FSkeletalMeshClothBuildParams
{
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x0(0x8)
	int32_t TargetLod; // 0x8(0x4)
	bool bRemapParameters; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FString AssetName; // 0x10(0x10)
	int32_t LodIndex; // 0x20(0x4)
	int32_t SourceSection; // 0x24(0x4)
	bool bRemoveFromMesh; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30(0x28)
};

// Object: ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x0)
struct FBoneMirrorExport
{
	struct FName BoneName; // 0x0(0x8)
	struct FName SourceBoneName; // 0x8(0x8)
	uint8_t BoneFlipAxis; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.BoneMirrorInfo
// Size: 0x8 (Inherited: 0x0)
struct FBoneMirrorInfo
{
	int32_t SourceIndex; // 0x0(0x4)
	uint8_t BoneFlipAxis; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x0)
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UAnimSequence* BakePose; // 0x38(0x8)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3C)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct Engine.BoneFilter
// Size: 0xC (Inherited: 0x0)
struct FBoneFilter
{
	bool bExcludeSelf; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName BoneName; // 0x4(0x8)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x0)
struct FSkeletalMeshSamplingInfo
{
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x0(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x0)
struct FSkeletalMeshSamplingBuiltData
{
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionBuiltData
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x0)
struct FSkeletalMeshSamplingLODBuiltData
{
	uint8_t Pad_0x0[0x48]; // 0x0(0x48)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegion
{
	struct FName Name; // 0x0(0x8)
	int32_t LodIndex; // 0x8(0x4)
	uint8_t bSupportUniformlyDistributedSampling : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0xC (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName BoneName; // 0x0(0x8)
	uint8_t bIncludeOrExclude : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bApplyToChildren : 1; // 0x8(0x1), Mask(0x2)
	uint8_t BitPad_0x8_2 : 6; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x8 (Inherited: 0x0)
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName MaterialName; // 0x0(0x8)
};

// Object: ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x0)
struct FVirtualBone
{
	struct FName SourceBoneName; // 0x0(0x8)
	struct FName TargetBoneName; // 0x8(0x8)
	struct FName VirtualBoneName; // 0x10(0x8)
};

// Object: ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x0)
struct FAnimSlotGroup
{
	struct FName GroupName; // 0x0(0x8)
	struct TArray<struct FName> SlotNames; // 0x8(0x10)
};

// Object: ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x0)
struct FRigConfiguration
{
	struct URig* Rig; // 0x0(0x8)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x8(0x10)
};

// Object: ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x0)
struct FNameMapping
{
	struct FName nodeName; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x0)
struct FBoneReductionSetting
{
	struct TArray<struct FName> BonesToRemove; // 0x0(0x10)
};

// Object: ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x0)
struct FReferencePose
{
	struct FName PoseName; // 0x0(0x8)
	struct TArray<struct FTransform> ReferencePose; // 0x8(0x10)
};

// Object: ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x0)
struct FBoneNode
{
	struct FName Name; // 0x0(0x8)
	int32_t ParentIndex; // 0x8(0x4)
	uint8_t TranslationRetargetingMode; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x0)
struct FSkeletonToMeshLinkup
{
	struct TArray<int32_t> SkeletonToMeshTable; // 0x0(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// Object: ScriptStruct Engine.VertexOffsetUsage
// Size: 0x4 (Inherited: 0x0)
struct FVertexOffsetUsage
{
	int32_t Usage; // 0x0(0x4)
};

// Object: ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x48 (Inherited: 0x0)
struct FSkelMeshComponentLODInfo
{
	struct TArray<bool> HiddenMaterials; // 0x0(0x10)
	uint8_t Pad_0x10[0x38]; // 0x10(0x38)
};

// Object: ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3C (Inherited: 0x0)
struct FSkelMeshSkinWeightInfo
{
	int32_t Bones[0xC]; // 0x0(0x30)
	uint8_t Weights[0xC]; // 0x30(0xC)
};

// Object: ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x0)
struct FSkinWeightProfileInfo
{
	struct FName Name; // 0x0(0x8)
	struct FPerPlatformBool DefaultProfile; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SkinWeightProfileManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkinWeightProfileManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.TentDistribution
// Size: 0xC (Inherited: 0x0)
struct FTentDistribution
{
	float TipAltitude; // 0x0(0x4)
	float TipValue; // 0x4(0x4)
	float Width; // 0x8(0x4)
};

// Object: ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x170 (Inherited: 0xB8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData
{
	struct FGuid LightGuid; // 0xB8(0x10)
	float AverageBrightness; // 0xC8(0x4)
	uint8_t Pad_0xCC[0xA4]; // 0xCC(0xA4)
};

// Object: ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x0)
struct FSmartNameContainer
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x0)
struct FSmartNameMapping
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct Engine.CurveMetaData
// Size: 0x18 (Inherited: 0x0)
struct FCurveMetaData
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3A0 (Inherited: 0xB0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings
{
	uint8_t bAttenuate : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t bSpatialize : 1; // 0xB0(0x1), Mask(0x2)
	uint8_t bAttenuateWithLPF : 1; // 0xB0(0x1), Mask(0x4)
	uint8_t bEnableListenerFocus : 1; // 0xB0(0x1), Mask(0x8)
	uint8_t bEnableFocusInterpolation : 1; // 0xB0(0x1), Mask(0x10)
	uint8_t bEnableOcclusion : 1; // 0xB0(0x1), Mask(0x20)
	uint8_t bUseComplexCollisionForOcclusion : 1; // 0xB0(0x1), Mask(0x40)
	uint8_t bEnableReverbSend : 1; // 0xB0(0x1), Mask(0x80)
	uint8_t bEnablePriorityAttenuation : 1; // 0xB1(0x1), Mask(0x1)
	uint8_t bApplyNormalizationToStereoSounds : 1; // 0xB1(0x1), Mask(0x2)
	uint8_t bEnableLogFrequencyScaling : 1; // 0xB1(0x1), Mask(0x4)
	uint8_t bEnableSubmixSends : 1; // 0xB1(0x1), Mask(0x8)
	uint8_t BitPad_0xB1_4 : 4; // 0xB1(0x1)
	uint8_t SpatializationAlgorithm; // 0xB2(0x1)
	uint8_t Pad_0xB3[0x1]; // 0xB3(0x1)
	float BinauralRadius; // 0xB4(0x4)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xB8(0x1)
	uint8_t OcclusionTraceChannel; // 0xB9(0x1)
	enum class EReverbSendMethod ReverbSendMethod; // 0xBA(0x1)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xBB(0x1)
	float OmniRadius; // 0xBC(0x4)
	float StereoSpread; // 0xC0(0x4)
	float LPFRadiusMin; // 0xC4(0x4)
	float LPFRadiusMax; // 0xC8(0x4)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xD0(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158(0x88)
	float LPFFrequencyAtMin; // 0x1E0(0x4)
	float LPFFrequencyAtMax; // 0x1E4(0x4)
	float HPFFrequencyAtMin; // 0x1E8(0x4)
	float HPFFrequencyAtMax; // 0x1EC(0x4)
	float FocusAzimuth; // 0x1F0(0x4)
	float NonFocusAzimuth; // 0x1F4(0x4)
	float FocusDistanceScale; // 0x1F8(0x4)
	float NonFocusDistanceScale; // 0x1FC(0x4)
	float FocusPriorityScale; // 0x200(0x4)
	float NonFocusPriorityScale; // 0x204(0x4)
	float FocusVolumeAttenuation; // 0x208(0x4)
	float NonFocusVolumeAttenuation; // 0x20C(0x4)
	float FocusAttackInterpSpeed; // 0x210(0x4)
	float FocusReleaseInterpSpeed; // 0x214(0x4)
	float OcclusionLowPassFilterFrequency; // 0x218(0x4)
	float OcclusionVolumeAttenuation; // 0x21C(0x4)
	float OcclusionInterpolationTime; // 0x220(0x4)
	float ReverbWetLevelMin; // 0x224(0x4)
	float ReverbWetLevelMax; // 0x228(0x4)
	float ReverbDistanceMin; // 0x22C(0x4)
	float ReverbDistanceMax; // 0x230(0x4)
	float ManualReverbSendLevel; // 0x234(0x4)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2C0(0x10)
	float PriorityAttenuationMin; // 0x2D0(0x4)
	float PriorityAttenuationMax; // 0x2D4(0x4)
	float PriorityAttenuationDistanceMin; // 0x2D8(0x4)
	float PriorityAttenuationDistanceMax; // 0x2DC(0x4)
	float ManualPriorityAttenuation; // 0x2E0(0x4)
	uint8_t Pad_0x2E4[0x4]; // 0x2E4(0x4)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2E8(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x370(0x30)
};

// Object: ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x0)
struct FSoundAttenuationPluginSettings
{
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
};

// Object: ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xA8 (Inherited: 0x0)
struct FAttenuationSubmixSendSettings
{
	struct USoundSubmixBase* Submix; // 0x0(0x8)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float SubmixSendLevelMin; // 0xC(0x4)
	float SubmixSendLevelMax; // 0x10(0x4)
	float SubmixSendDistanceMin; // 0x14(0x4)
	float SubmixSendDistanceMax; // 0x18(0x4)
	float ManualSubmixSendLevel; // 0x1C(0x4)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// Object: ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x0)
struct FPassiveSoundMixModifier
{
	struct USoundMix* SoundMix; // 0x0(0x8)
	float MinVolumeThreshold; // 0x8(0x4)
	float MaxVolumeThreshold; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SoundClassProperties
// Size: 0x80 (Inherited: 0x0)
struct FSoundClassProperties
{
	float Volume; // 0x0(0x4)
	float Pitch; // 0x4(0x4)
	float LowPassFilterFrequency; // 0x8(0x4)
	float AttenuationDistanceScale; // 0xC(0x4)
	float StereoBleed; // 0x10(0x4)
	float LFEBleed; // 0x14(0x4)
	float VoiceCenterChannelVolume; // 0x18(0x4)
	float RadioFilterVolume; // 0x1C(0x4)
	float RadioFilterVolumeThreshold; // 0x20(0x4)
	uint8_t bApplyEffects : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bAlwaysPlay : 1; // 0x24(0x1), Mask(0x2)
	uint8_t bIsUISound : 1; // 0x24(0x1), Mask(0x4)
	uint8_t bIsMusic : 1; // 0x24(0x1), Mask(0x8)
	uint8_t bCenterChannelOnly : 1; // 0x24(0x1), Mask(0x10)
	uint8_t bApplyAmbientVolumes : 1; // 0x24(0x1), Mask(0x20)
	uint8_t bReverb : 1; // 0x24(0x1), Mask(0x40)
	uint8_t BitPad_0x24_7 : 1; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	float Default2DReverbSendAmount; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FSoundModulationDefaultSettings ModulationSettings; // 0x30(0x40)
	uint8_t OutputTarget; // 0x70(0x1)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x71(0x1)
	uint8_t Pad_0x72[0x6]; // 0x72(0x6)
	struct USoundSubmix* DefaultSubmix; // 0x78(0x8)
};

// Object: ScriptStruct Engine.SoundModulationDefaultSettings
// Size: 0x40 (Inherited: 0x0)
struct FSoundModulationDefaultSettings
{
	struct FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0(0x10)
	struct FSoundModulationDestinationSettings PitchModulationDestination; // 0x10(0x10)
	struct FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20(0x10)
	struct FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30(0x10)
};

// Object: ScriptStruct Engine.SoundModulationDestinationSettings
// Size: 0x10 (Inherited: 0x0)
struct FSoundModulationDestinationSettings
{
	float Value; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct USoundModulatorBase* Modulator; // 0x8(0x8)
};

// Object: ScriptStruct Engine.SoundClassEditorData
// Size: 0x8 (Inherited: 0x0)
struct FSoundClassEditorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x24 (Inherited: 0x0)
struct FSoundConcurrencySettings
{
	int32_t MaxCount; // 0x0(0x4)
	uint8_t bLimitToOwner : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t ResolutionRule; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	float RetriggerTime; // 0x8(0x4)
	float VolumeScale; // 0xC(0x4)
	enum class EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x10(0x4)
	float VolumeScaleAttackTime; // 0x14(0x4)
	uint8_t bVolumeScaleCanRelease : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float VolumeScaleReleaseTime; // 0x1C(0x4)
	float VoiceStealReleaseTime; // 0x20(0x4)
};

// Object: ScriptStruct Engine.SoundNodeEditorData
// Size: 0x8 (Inherited: 0x0)
struct FSoundNodeEditorData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x0)
struct FSourceEffectChainEntry
{
	struct USoundEffectSourcePreset* Preset; // 0x0(0x8)
	uint8_t bBypass : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x0)
struct FSoundGroup
{
	uint8_t SoundGroup; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString DisplayName; // 0x8(0x10)
	uint8_t bAlwaysDecompressOnLoad : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float DecompressedDuration; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x0)
struct FSoundClassAdjuster
{
	struct USoundClass* SoundClassObject; // 0x0(0x8)
	float VolumeAdjuster; // 0x8(0x4)
	float PitchAdjuster; // 0xC(0x4)
	float LowPassFilterFrequency; // 0x10(0x4)
	uint8_t bApplyToChildren : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x8)
struct FAudioEQEffect : FAudioEffectParameters
{
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	float FrequencyCenter0; // 0x10(0x4)
	float Gain0; // 0x14(0x4)
	float Bandwidth0; // 0x18(0x4)
	float FrequencyCenter1; // 0x1C(0x4)
	float Gain1; // 0x20(0x4)
	float Bandwidth1; // 0x24(0x4)
	float FrequencyCenter2; // 0x28(0x4)
	float Gain2; // 0x2C(0x4)
	float Bandwidth2; // 0x30(0x4)
	float FrequencyCenter3; // 0x34(0x4)
	float Gain3; // 0x38(0x4)
	float Bandwidth3; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.SoundModulationDefaultRoutingSettings
// Size: 0x48 (Inherited: 0x40)
struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings
{
	enum class EModulationRouting VolumeRouting; // 0x40(0x1)
	enum class EModulationRouting PitchRouting; // 0x41(0x1)
	enum class EModulationRouting HighpassRouting; // 0x42(0x1)
	enum class EModulationRouting LowpassRouting; // 0x43(0x1)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x0)
struct FDistanceDatum
{
	float FadeInDistanceStart; // 0x0(0x4)
	float FadeInDistanceEnd; // 0x4(0x4)
	float FadeOutDistanceStart; // 0x8(0x4)
	float FadeOutDistanceEnd; // 0xC(0x4)
	float Volume; // 0x10(0x4)
};

// Object: ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x0)
struct FModulatorContinuousParams
{
	struct FName ParameterName; // 0x0(0x8)
	float Default; // 0x8(0x4)
	float MinInput; // 0xC(0x4)
	float MaxInput; // 0x10(0x4)
	float MinOutput; // 0x14(0x4)
	float MaxOutput; // 0x18(0x4)
	uint8_t ParamMode; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xB8 (Inherited: 0x0)
struct FSoundSourceBusSendInfo
{
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct USoundSourceBus* SoundSourceBus; // 0x8(0x8)
	struct UAudioBus* AudioBus; // 0x10(0x8)
	float SendLevel; // 0x18(0x4)
	float MinSendLevel; // 0x1C(0x4)
	float MaxSendLevel; // 0x20(0x4)
	float MinSendDistance; // 0x24(0x4)
	float MaxSendDistance; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x30(0x88)
};

// Object: ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
// Size: 0x10 (Inherited: 0x0)
struct FSoundSubmixSpectralAnalysisBandSettings
{
	float BandFrequency; // 0x0(0x4)
	int32_t AttackTimeMsec; // 0x4(0x4)
	int32_t ReleaseTimeMsec; // 0x8(0x4)
	float QFactor; // 0xC(0x4)
};

// Object: ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x8 (Inherited: 0x0)
struct FSoundWaveEnvelopeTimeData
{
	float Amplitude; // 0x0(0x4)
	float TimeSec; // 0x4(0x4)
};

// Object: ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x0)
struct FSoundWaveSpectralTimeData
{
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x0(0x10)
	float TimeSec; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x8 (Inherited: 0x0)
struct FSoundWaveSpectralDataEntry
{
	float Magnitude; // 0x0(0x4)
	float NormalizedMagnitude; // 0x4(0x4)
};

// Object: ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x0)
struct FSoundWaveEnvelopeDataPerSound
{
	float Envelope; // 0x0(0x4)
	float PlaybackTime; // 0x4(0x4)
	struct USoundWave* SoundWave; // 0x8(0x8)
};

// Object: ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x0)
struct FSoundWaveSpectralDataPerSound
{
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x0(0x10)
	float PlaybackTime; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct USoundWave* SoundWave; // 0x18(0x8)
};

// Object: ScriptStruct Engine.SoundWaveSpectralData
// Size: 0xC (Inherited: 0x0)
struct FSoundWaveSpectralData
{
	float FrequencyHz; // 0x0(0x4)
	float Magnitude; // 0x4(0x4)
	float NormalizedMagnitude; // 0x8(0x4)
};

// Object: ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x40 (Inherited: 0x0)
struct FStreamedAudioPlatformData
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct Engine.SplineInstanceData
// Size: 0x1A0 (Inherited: 0xB8)
struct FSplineInstanceData : FSceneComponentInstanceData
{
	bool bSplineHasBeenEdited; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct FSplineCurves SplineCurves; // 0xC0(0x70)
	struct FSplineCurves SplineCurvesPreUCS; // 0x130(0x70)
};

// Object: ScriptStruct Engine.SplineCurves
// Size: 0x70 (Inherited: 0x0)
struct FSplineCurves
{
	struct FInterpCurveVector position; // 0x0(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x8)
	uint32_t Version; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x0)
struct FSplinePoint
{
	float InputKey; // 0x0(0x4)
	struct FVector position; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	struct FVector Scale; // 0x34(0xC)
	uint8_t Type; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
};

// Object: ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xE8 (Inherited: 0xB8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData
{
	struct FVector StartPos; // 0xB8(0xC)
	struct FVector EndPos; // 0xC4(0xC)
	struct FVector StartTangent; // 0xD0(0xC)
	struct FVector EndTangent; // 0xDC(0xC)
};

// Object: ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x0)
struct FSplineMeshParams
{
	struct FVector StartPos; // 0x0(0xC)
	struct FVector StartTangent; // 0xC(0xC)
	struct FVector2D StartScale; // 0x18(0x8)
	float StartRoll; // 0x20(0x4)
	struct FVector2D StartOffset; // 0x24(0x8)
	struct FVector EndPos; // 0x2C(0xC)
	struct FVector2D EndScale; // 0x38(0x8)
	struct FVector EndTangent; // 0x40(0xC)
	float EndRoll; // 0x4C(0x4)
	struct FVector2D EndOffset; // 0x50(0x8)
};

// Object: ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x0)
struct FMaterialRemapIndex
{
	uint32_t ImportVersionKey; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<int32_t> MaterialRemap; // 0x8(0x10)
};

// Object: ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x0)
struct FStaticMaterial
{
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FName ImportedMaterialSlotName; // 0x10(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x0)
struct FAssetEditorOrbitCameraPosition
{
	bool bIsSet; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector CamOrbitPoint; // 0x4(0xC)
	struct FVector CamOrbitZoom; // 0x10(0xC)
	struct FRotator CamOrbitRotation; // 0x1C(0xC)
};

// Object: ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x0)
struct FMeshSectionInfoMap
{
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x0(0x50)
};

// Object: ScriptStruct Engine.MeshSectionInfo
// Size: 0x8 (Inherited: 0x0)
struct FMeshSectionInfo
{
	int32_t materialIndex; // 0x0(0x4)
	bool bEnableCollision; // 0x4(0x1)
	bool bCastShadow; // 0x5(0x1)
	bool bVisibleInRayTracing; // 0x6(0x1)
	bool bForceOpaque; // 0x7(0x1)
};

// Object: ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x70 (Inherited: 0x0)
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings BuildSettings; // 0x0(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	float LODDistance; // 0x54(0x4)
	struct FPerPlatformFloat ScreenSize; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString SourceImportFilename; // 0x60(0x10)
};

// Object: ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1C (Inherited: 0x0)
struct FStaticMeshOptimizationSettings
{
	uint8_t ReductionMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float MaxDeviationPercentage; // 0x8(0x4)
	float WeldingThreshold; // 0xC(0x4)
	bool bRecalcNormals; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float NormalsThreshold; // 0x14(0x4)
	uint8_t SilhouetteImportance; // 0x18(0x1)
	uint8_t TextureImportance; // 0x19(0x1)
	uint8_t ShadingImportance; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0x100)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
{
	struct UStaticMesh* StaticMesh; // 0x100(0x8)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x118(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x128(0x10)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0xC (Inherited: 0x0)
struct FStreamingTextureBuildInfo
{
	uint32_t PackedRelativeBox; // 0x0(0x4)
	int32_t TextureLevelIndex; // 0x4(0x4)
	float TexelFactor; // 0x8(0x4)
};

// Object: ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x0)
struct FStaticMeshVertexColorLODData
{
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x0(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LodIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x0)
struct FPaintedVertex
{
	struct FVector position; // 0x0(0xC)
	struct FColor Color; // 0xC(0x4)
	struct FVector4 Normal; // 0x10(0x10)
};

// Object: ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0xA0 (Inherited: 0x0)
struct FStaticMeshComponentLODInfo
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x0)
struct FStaticParameterSet
{
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x0(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)
};

// Object: ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x0)
struct FStaticParameterBase
{
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	bool bOverride; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// Object: ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase
{
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)
};

// Object: ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2C (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase
{
	int32_t WeightmapIndex; // 0x24(0x4)
	bool bWeightBasedBlend; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
};

// Object: ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase
{
	bool R; // 0x24(0x1)
	bool G; // 0x25(0x1)
	bool B; // 0x26(0x1)
	bool A; // 0x27(0x1)
};

// Object: ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : FStaticParameterBase
{
	bool Value; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x0)
struct FEquirectProps
{
	struct FBox2D LeftUVRect; // 0x0(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x8)
	struct FVector2D RightScale; // 0x30(0x8)
	struct FVector2D LeftBias; // 0x38(0x8)
	struct FVector2D RightBias; // 0x40(0x8)
};

// Object: ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8C (Inherited: 0x0)
struct FSubsurfaceProfileStruct
{
	struct FLinearColor SurfaceAlbedo; // 0x0(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x4)
	float WorldUnitScale; // 0x24(0x4)
	bool bEnableBurley; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float ScatterRadius; // 0x2C(0x4)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x4)
	float NormalScale; // 0x64(0x4)
	float ScatteringDistribution; // 0x68(0x4)
	float IOR; // 0x6C(0x4)
	float Roughness0; // 0x70(0x4)
	float Roughness1; // 0x74(0x4)
	float LobeMix; // 0x78(0x4)
	struct FLinearColor TransmissionTintColor; // 0x7C(0x10)
};

// Object: ScriptStruct Engine.TextureFormatSettings
// Size: 0x2 (Inherited: 0x0)
struct FTextureFormatSettings
{
	uint8_t CompressionSettings; // 0x0(0x1)
	uint8_t CompressionNoAlpha : 1; // 0x1(0x1), Mask(0x1)
	uint8_t CompressionNone : 1; // 0x1(0x1), Mask(0x2)
	uint8_t CompressionYCoCg : 1; // 0x1(0x1), Mask(0x4)
	uint8_t SRGB : 1; // 0x1(0x1), Mask(0x8)
	uint8_t BitPad_0x1_4 : 4; // 0x1(0x1)
};

// Object: ScriptStruct Engine.TexturePlatformData
// Size: 0x30 (Inherited: 0x0)
struct FTexturePlatformData
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct Engine.TextureSource
// Size: 0x38 (Inherited: 0x0)
struct FTextureSource
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x0)
struct FTextureSourceBlock
{
	int32_t BlockX; // 0x0(0x4)
	int32_t BlockY; // 0x4(0x4)
	int32_t SizeX; // 0x8(0x4)
	int32_t SizeY; // 0xC(0x4)
	int32_t NumSlices; // 0x10(0x4)
	int32_t NumMips; // 0x14(0x4)
};

// Object: ScriptStruct Engine.TextureLODGroup
// Size: 0x64 (Inherited: 0x0)
struct FTextureLODGroup
{
	uint8_t Group; // 0x0(0x1)
	uint8_t Pad_0x1[0xB]; // 0x1(0xB)
	int32_t LODBias; // 0xC(0x4)
	int32_t LODBias_Smaller; // 0x10(0x4)
	int32_t LODBias_Smallest; // 0x14(0x4)
	uint8_t Pad_0x18[0x4]; // 0x18(0x4)
	int32_t NumStreamedMips; // 0x1C(0x4)
	uint8_t MipGenSettings; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t MinLODSize; // 0x24(0x4)
	int32_t MaxLODSize; // 0x28(0x4)
	int32_t MaxLODSize_Smaller; // 0x2C(0x4)
	int32_t MaxLODSize_Smallest; // 0x30(0x4)
	int32_t OptionalLODBias; // 0x34(0x4)
	int32_t OptionalMaxLODSize; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FName MinMagFilter; // 0x40(0x8)
	struct FName MipFilter; // 0x48(0x8)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x50(0x1)
	bool DuplicateNonOptionalMips; // 0x51(0x1)
	uint8_t Pad_0x52[0x2]; // 0x52(0x2)
	float Downscale; // 0x54(0x4)
	enum class ETextureDownscaleOptions DownscaleOptions; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	int32_t VirtualTextureTileCountBias; // 0x5C(0x4)
	int32_t VirtualTextureTileSizeBias; // 0x60(0x4)
};

// Object: ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x0)
struct FStreamingRenderAssetPrimitiveInfo
{
	struct UStreamableRenderAsset* RenderAsset; // 0x0(0x8)
	struct FBoxSphereBounds Bounds; // 0x8(0x1C)
	float TexelFactor; // 0x24(0x4)
	uint32_t PackedRelativeBox; // 0x28(0x4)
	uint8_t bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2C(0x1), Mask(0x1)
	uint8_t BitPad_0x2C_1 : 7; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x0)
struct FTimeline
{
	uint8_t LengthMode; // 0x0(0x1)
	uint8_t bLooping : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bReversePlayback : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bPlaying : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float Length; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float position; // 0xC(0x4)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50(0x10)
	struct FDelegate TimelineFinishedFunc; // 0x60(0x10)
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x8)
	struct FName DirectionPropertyName; // 0x78(0x8)
	uint8_t Pad_0x80[0x18]; // 0x80(0x18)
};

// Object: ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineLinearColorTrack
{
	struct UCurveLinearColor* LinearColorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName LinearColorPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineFloatTrack
{
	struct UCurveFloat* FloatCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName FloatPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x0)
struct FTimelineVectorTrack
{
	struct UCurveVector* VectorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName VectorPropertyName; // 0x20(0x8)
	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x0)
struct FTimelineEventEntry
{
	float Time; // 0x0(0x4)
	struct FDelegate EventFunc; // 0x4(0x10)
};

// Object: ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x0)
struct FTTTrackBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	bool bIsExternalCurve; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase
{
	struct FName PropertyName; // 0x14(0x8)
};

// Object: ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack
{
	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : FTTPropertyTrack
{
	struct UCurveVector* CurveVector; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : FTTPropertyTrack
{
	struct UCurveFloat* CurveFloat; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase
{
	struct FName FunctionName; // 0x14(0x8)
	struct UCurveFloat* CurveKeys; // 0x20(0x8)
};

// Object: ScriptStruct Engine.TTTrackId
// Size: 0x8 (Inherited: 0x0)
struct FTTTrackId
{
	int32_t TrackType; // 0x0(0x4)
	int32_t TrackIndex; // 0x4(0x4)
};

// Object: ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x0)
struct FTimeStretchCurveInstance
{
	bool bHasValidData; // 0x0(0x1)
	uint8_t Pad_0x1[0x2F]; // 0x1(0x2F)
};

// Object: ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x0)
struct FTimeStretchCurve
{
	float SamplingRate; // 0x0(0x4)
	float CurveValueMinPrecision; // 0x4(0x4)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x8(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0xC)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x0)
struct FTimeStretchCurveMarker
{
	float Time[0x3]; // 0x0(0xC)
	float Alpha; // 0xC(0x4)
};

// Object: ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x0)
struct FTouchInputControl
{
	struct UTexture2D* Image1; // 0x0(0x8)
	struct UTexture2D* Image2; // 0x8(0x8)
	struct FVector2D Center; // 0x10(0x8)
	struct FVector2D VisualSize; // 0x18(0x8)
	struct FVector2D ThumbSize; // 0x20(0x8)
	struct FVector2D InteractionSize; // 0x28(0x8)
	struct FVector2D InputScale; // 0x30(0x8)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)
};

// Object: ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x0)
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName PackageName; // 0x0(0x8)
	struct FName Filename; // 0x8(0x8)
	uint8_t bIsVisible : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x0)
struct FHardwareCursorReference
{
	struct FName CursorPath; // 0x0(0x8)
	struct FVector2D HotSpot; // 0x8(0x8)
};

// Object: ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0xC (Inherited: 0x0)
struct FVirtualTextureBuildSettings
{
	int32_t TileSize; // 0x0(0x4)
	int32_t TileBorderSize; // 0x4(0x4)
	bool bEnableCompressCrunch; // 0x8(0x1)
	bool bEnableCompressZlib; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x28 (Inherited: 0x0)
struct FVirtualTextureSpacePoolConfig
{
	int32_t MinTileSize; // 0x0(0x4)
	int32_t MaxTileSize; // 0x4(0x4)
	struct TArray<uint8_t> Formats; // 0x8(0x10)
	int32_t SizeInMegabyte; // 0x18(0x4)
	bool bAllowSizeScale; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	uint32_t ScalabilityGroup; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x0)
struct FVoiceSettings
{
	struct USceneComponent* ComponentToAttachTo; // 0x0(0x8)
	struct USoundAttenuation* AttenuationSettings; // 0x8(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x8)
};

// Object: ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x28 (Inherited: 0x0)
struct FStreamingLevelsToConsider
{
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0x0(0x10)
	uint8_t Pad_0x10[0x18]; // 0x10(0x18)
};

// Object: ScriptStruct Engine.LevelCollection
// Size: 0x78 (Inherited: 0x0)
struct FLevelCollection
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct AGameStateBase* GameState; // 0x8(0x8)
	struct UNetDriver* NetDriver; // 0x10(0x8)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x8)
	struct ULevel* PersistentLevel; // 0x20(0x8)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
};

// Object: ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x0)
struct FLevelViewportInfo
{
	struct FVector CamPosition; // 0x0(0xC)
	struct FRotator CamRotation; // 0xC(0xC)
	float CamOrthoZoom; // 0x18(0x4)
	bool CamUpdated; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x0)
struct FWorldPSCPool
{
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x0(0x50)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct Engine.PSCPool
// Size: 0x38 (Inherited: 0x0)
struct FPSCPool
{
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x0(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Manual; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x0)
struct FPSCPoolElem
{
	struct UParticleSystemComponent* PSC; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x0)
struct FBroadphaseSettings
{
	bool bUseMBPOnClient; // 0x0(0x1)
	bool bUseMBPOnServer; // 0x1(0x1)
	bool bUseMBPOuterBounds; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FBox MBPBounds; // 0x4(0x1C)
	struct FBox MBPOuterBounds; // 0x20(0x1C)
	uint32_t MBPNumSubdivs; // 0x3C(0x4)
};

// Object: ScriptStruct Engine.HierarchicalSimplification
// Size: 0x160 (Inherited: 0x0)
struct FHierarchicalSimplification
{
	float TransitionScreenSize; // 0x0(0x4)
	float OverrideDrawDistance; // 0x4(0x4)
	uint8_t bUseOverrideDrawDistance : 1; // 0x8(0x1), Mask(0x1)
	uint8_t bAllowSpecificExclusion : 1; // 0x8(0x1), Mask(0x2)
	uint8_t bSimplifyMesh : 1; // 0x8(0x1), Mask(0x4)
	uint8_t bOnlyGenerateClustersForVolumes : 1; // 0x8(0x1), Mask(0x8)
	uint8_t bReusePreviousLevelClusters : 1; // 0x8(0x1), Mask(0x10)
	uint8_t BitPad_0x8_5 : 3; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FMeshProxySettings ProxySetting; // 0xC(0xA8)
	struct FMeshMergingSettings MergeSetting; // 0xB4(0xA0)
	float DesiredBoundRadius; // 0x154(0x4)
	float DesiredFillingPercentage; // 0x158(0x4)
	int32_t MinNumberOfActorsToBuild; // 0x15C(0x4)
};

// Object: ScriptStruct Engine.NetViewer
// Size: 0x30 (Inherited: 0x0)
struct FNetViewer
{
	struct UNetConnection* Connection; // 0x0(0x8)
	struct AActor* InViewer; // 0x8(0x8)
	struct AActor* ViewTarget; // 0x10(0x8)
	struct FVector ViewLocation; // 0x18(0xC)
	struct FVector ViewDir; // 0x24(0xC)
};

// Object: ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x5C (Inherited: 0x0)
struct FLightmassWorldInfoSettings
{
	float StaticLightingLevelScale; // 0x0(0x4)
	int32_t NumIndirectLightingBounces; // 0x4(0x4)
	int32_t NumSkyLightingBounces; // 0x8(0x4)
	float IndirectLightingQuality; // 0xC(0x4)
	float IndirectLightingSmoothness; // 0x10(0x4)
	struct FColor EnvironmentColor; // 0x14(0x4)
	float EnvironmentIntensity; // 0x18(0x4)
	float EmissiveBoost; // 0x1C(0x4)
	float DiffuseBoost; // 0x20(0x4)
	uint8_t VolumeLightingMethod; // 0x24(0x1)
	uint8_t bUseAmbientOcclusion : 1; // 0x25(0x1), Mask(0x1)
	uint8_t bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x1), Mask(0x2)
	uint8_t bVisualizeMaterialDiffuse : 1; // 0x25(0x1), Mask(0x4)
	uint8_t bVisualizeAmbientOcclusion : 1; // 0x25(0x1), Mask(0x8)
	uint8_t bCompressLightmaps : 1; // 0x25(0x1), Mask(0x10)
	uint8_t BitPad_0x25_5 : 3; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	float VolumetricLightmapDetailCellSize; // 0x28(0x4)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2C(0x4)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30(0x4)
	float VolumeLightSamplePlacementScale; // 0x34(0x4)
	float DirectIlluminationOcclusionFraction; // 0x38(0x4)
	float IndirectIlluminationOcclusionFraction; // 0x3C(0x4)
	float OcclusionExponent; // 0x40(0x4)
	float FullyOccludedSamplesFraction; // 0x44(0x4)
	float MaxOcclusionDistance; // 0x48(0x4)
	struct FLinearColor DynamicAmbientBoost; // 0x4C(0x10)
};

// Object: UserDefinedStruct Engine.Default__UserDefinedStruct
// Size: 0x0 (Inherited: 0x0)
struct FDefault__UserDefinedStruct
{
};

// Package: GTABase
// Structs: 152

// Object: ScriptStruct GTABase.GTAModelData
// Size: 0xA0 (Inherited: 0x0)
struct FGTAModelData
{
	struct FString gtaModelName; // 0x0(0x10)
	int32_t modelIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TSoftObjectPtr<UObject> Asset; // 0x18(0x28)
	struct TSoftClassPtr<struct AActor*> Blueprint; // 0x40(0x28)
	struct TArray<struct FDFF2DEffect> FXDatas; // 0x68(0x10)
	struct TArray<uint8_t> CollisionData; // 0x78(0x10)
	struct TArray<struct FDFFFrameData> Frames; // 0x88(0x10)
	float ExtraStreamDistance; // 0x98(0x4)
	bool bClassReferenceIsUnique; // 0x9C(0x1)
	bool bHasFrameRotations; // 0x9D(0x1)
	bool bCanCollapseMesh; // 0x9E(0x1)
	uint8_t Pad_0x9F[0x1]; // 0x9F(0x1)
};

// Object: ScriptStruct GTABase.DFFFrameData
// Size: 0x20 (Inherited: 0x0)
struct FDFFFrameData
{
	struct FName BoneName; // 0x0(0x8)
	int32_t BoneTag; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat BoneRotation; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.DFF2DEffect
// Size: 0x20 (Inherited: 0x0)
struct FDFF2DEffect
{
	struct FString nodeName; // 0x0(0x10)
	struct TArray<uint8_t> Data; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.DistantMeshSubstitution
// Size: 0x20 (Inherited: 0x0)
struct FDistantMeshSubstitution
{
	struct UStaticMesh* MeshToSubstitute; // 0x0(0x8)
	struct UMaterialInstanceConstant* WithOverriddenMaterial; // 0x8(0x8)
	struct UStaticMesh* UseAtlasMesh; // 0x10(0x8)
	struct FDistantMeshData Data; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GTABase.DistantMeshData
// Size: 0x1 (Inherited: 0x0)
struct FDistantMeshData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GTABase.EntityLink
// Size: 0x28 (Inherited: 0x0)
struct FEntityLink
{
	struct ADynamicIPLMapActor* Actor; // 0x0(0x8)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
};

// Object: ScriptStruct GTABase.SCAchive
// Size: 0x50 (Inherited: 0x0)
struct FSCAchive
{
	struct FString AchivementName; // 0x0(0x10)
	struct FText LocalizedAchivementName; // 0x10(0x18)
	struct FText LocalizedDescription; // 0x28(0x18)
	struct UTexture2D* Icon; // 0x40(0x8)
	bool isUnlocked; // 0x48(0x1)
	bool invisibleWhenLocked; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: ScriptStruct GTABase.ReflectionMaterialSetup
// Size: 0x58 (Inherited: 0x0)
struct FReflectionMaterialSetup
{
	struct UMaterialInterface* Base; // 0x0(0x8)
	struct UMaterialInterface* SSR; // 0x8(0x8)
	struct UMaterialInterface* Planar; // 0x10(0x8)
	struct UMaterialInterface* Cube; // 0x18(0x8)
	struct TArray<struct FName> TextureParams; // 0x20(0x10)
	struct TArray<struct FName> ScalarParams; // 0x30(0x10)
	struct TArray<struct FName> VectorParams; // 0x40(0x10)
	bool bUseReflectionPower; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct GTABase.HelpTextOverrides
// Size: 0xF0 (Inherited: 0x0)
struct FHelpTextOverrides
{
	struct FString originalKey; // 0x0(0x10)
	struct FString gamepadKey; // 0x10(0x10)
	struct FString gamepadModernKey; // 0x20(0x10)
	struct FString gamepadTapToSprintKey; // 0x30(0x10)
	struct FString gamepadFreeAimKey; // 0x40(0x10)
	struct FString touchKey; // 0x50(0x10)
	struct FString touchSliderKey; // 0x60(0x10)
	struct FString touchDigitalKey; // 0x70(0x10)
	struct FString keyboardKey; // 0x80(0x10)
	struct FString SwitchKey; // 0x90(0x10)
	struct FString PlaystationKey; // 0xA0(0x10)
	struct FString PS4Key; // 0xB0(0x10)
	struct FString PS5Key; // 0xC0(0x10)
	struct FString XBoxKey; // 0xD0(0x10)
	struct FString PCKey; // 0xE0(0x10)
};

// Object: ScriptStruct GTABase.SpecialCutsceneMapping
// Size: 0x60 (Inherited: 0x0)
struct FSpecialCutsceneMapping
{
	struct TMap<struct FString, struct FString> SpecialToRealName; // 0x0(0x50)
	struct FString AppendName; // 0x50(0x10)
};

// Object: ScriptStruct GTABase.KeyboardDisplayStrings
// Size: 0x28 (Inherited: 0x0)
struct FKeyboardDisplayStrings
{
	struct FString theEvent; // 0x0(0x10)
	struct FString theMapping; // 0x10(0x10)
	int32_t mapping; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct GTABase.VehicleAudioSettings
// Size: 0x150 (Inherited: 0x0)
struct FVehicleAudioSettings
{
	struct FVehicleEngineSoundSettings DummyOff; // 0x0(0x1C)
	struct FVehicleEngineSoundSettings DummyReverse; // 0x1C(0x1C)
	struct FVehicleEngineSoundSettings DummyIdle; // 0x38(0x1C)
	struct FVehicleEngineSoundSettings PlayerCruise; // 0x54(0x1C)
	struct FVehicleEngineSoundSettings PlayerAccelerate; // 0x70(0x1C)
	struct FVehicleEngineSoundSettings PlayerOff; // 0x8C(0x1C)
	struct FVehicleEngineSoundSettings PlayerReverse; // 0xA8(0x1C)
	struct FVehicleEngineSoundSettings Nitro1; // 0xC4(0x1C)
	struct FVehicleEngineSoundSettings Nitro2; // 0xE0(0x1C)
	struct FVehicleEngineSoundSettings STEAM; // 0xFC(0x1C)
	struct FVehicleEngineSoundSettings Destroyed; // 0x118(0x1C)
	struct FVehicleEngineSoundSettings MovingParts; // 0x134(0x1C)
};

// Object: ScriptStruct GTABase.VehicleEngineSoundSettings
// Size: 0x1C (Inherited: 0x0)
struct FVehicleEngineSoundSettings
{
	float FrequencySeekSpeed; // 0x0(0x4)
	float FadeInTime; // 0x4(0x4)
	float FadeOutTime; // 0x8(0x4)
	float FadeInExponent; // 0xC(0x4)
	float FadeOutExponent; // 0x10(0x4)
	float VolumeMultiplier; // 0x14(0x4)
	float Enabled; // 0x18(0x4)
};

// Object: ScriptStruct GTABase.GTAFidelitySettings
// Size: 0x20 (Inherited: 0x0)
struct FGTAFidelitySettings
{
	struct FName Platform; // 0x0(0x8)
	bool b4kOrGreater; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<struct UGTAFidelityOption*> FidelityOptions; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.GTAFidelityChanges
// Size: 0x44 (Inherited: 0x0)
struct FGTAFidelityChanges
{
	int32_t Visuals; // 0x0(0x4)
	int32_t SimulationScale; // 0x4(0x4)
	int32_t Streetlights; // 0x8(0x4)
	int32_t headlights; // 0xC(0x4)
	float ResolutionPercent; // 0x10(0x4)
	int32_t Shadows; // 0x14(0x4)
	int32_t FrameRate; // 0x18(0x4)
	int32_t AntiAlias; // 0x1C(0x4)
	int32_t AnisotropicFiltering; // 0x20(0x4)
	int32_t DistanceScale; // 0x24(0x4)
	int32_t TextureQuality; // 0x28(0x4)
	int32_t ReflectionQuality; // 0x2C(0x4)
	int32_t CarReflectionMethod; // 0x30(0x4)
	int32_t AmbientOcclusion; // 0x34(0x4)
	int32_t Tessellation; // 0x38(0x4)
	int32_t CityGlowEffect; // 0x3C(0x4)
	int32_t CloudQuality; // 0x40(0x4)
};

// Object: ScriptStruct GTABase.GTASettings_Language
// Size: 0x1C (Inherited: 0x0)
struct FGTASettings_Language
{
	int32_t Language; // 0x0(0x4)
	bool Subtitles; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float SubtitleSize; // 0x8(0x4)
	float HelpTextSize; // 0xC(0x4)
	bool InvincibleMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t ColorBlindMode; // 0x14(0x4)
	bool ReducedFOV; // 0x18(0x1)
	bool SubtitleBackground; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
};

// Object: ScriptStruct GTABase.GTASettings_Audio
// Size: 0x20 (Inherited: 0x0)
struct FGTASettings_Audio
{
	float SFXVolume; // 0x0(0x4)
	float MusicVolume; // 0x4(0x4)
	float DialogueVolume; // 0x8(0x4)
	bool Autotune; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int32_t DefaultRadioStationSA; // 0x10(0x4)
	int32_t DefaultRadioStationVC; // 0x14(0x4)
	int32_t DefaultRadioStationIII; // 0x18(0x4)
	bool HRTF; // 0x1C(0x1)
	bool ReplayKit; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
};

// Object: ScriptStruct GTABase.GTASettings_Gameplay
// Size: 0x1C (Inherited: 0x0)
struct FGTASettings_Gameplay
{
	int32_t Traffic; // 0x0(0x4)
	int32_t Targeting; // 0x4(0x4)
	float AimAssistSensitivity; // 0x8(0x4)
	int32_t VehicleCameraHeight; // 0xC(0x4)
	float SimulationSpeed; // 0x10(0x4)
	bool FrameLimiter; // 0x14(0x1)
	bool DisableAutoSleepInCutscenes; // 0x15(0x1)
	bool PauseOnFocusLoss; // 0x16(0x1)
	bool DisableTargetOutline; // 0x17(0x1)
	bool ClassicRadar; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct GTABase.GTASettings_Controls
// Size: 0x60 (Inherited: 0x0)
struct FGTASettings_Controls
{
	float Deadzone; // 0x0(0x4)
	float SteeringSensitivity; // 0x4(0x4)
	int32_t Smoothing; // 0x8(0x4)
	int32_t SteeringCurve; // 0xC(0x4)
	int32_t SteerType; // 0x10(0x4)
	int32_t Accelerometer; // 0x14(0x4)
	int32_t TouchLayout; // 0x18(0x4)
	int32_t Movement; // 0x1C(0x4)
	bool LeftHanded; // 0x20(0x1)
	bool InvertLook; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	int32_t BikeControl; // 0x24(0x4)
	float ButtonOpacity; // 0x28(0x4)
	float JoypadLookSensitivity; // 0x2C(0x4)
	float JoypadFirstPersonAimingSensitivity; // 0x30(0x4)
	float JoypadThirdPersonAimingSensitivity; // 0x34(0x4)
	bool VibrationFeedback; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float MouseSensitivityX; // 0x3C(0x4)
	float MouseSensitivityY; // 0x40(0x4)
	bool TapToShoot; // 0x44(0x1)
	bool GyroControls; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	float GyroSensitivity; // 0x48(0x4)
	bool InvertGyroX; // 0x4C(0x1)
	bool InvertGyroY; // 0x4D(0x1)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	int32_t ControlScheme; // 0x50(0x4)
	bool AutoClimb; // 0x54(0x1)
	bool ModernKeyboardDriveBy; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	float TouchSensitivity; // 0x58(0x4)
	bool TapToSprint; // 0x5C(0x1)
	bool ModernMeleeAttacks; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
};

// Object: ScriptStruct GTABase.GTASettings_Graphics
// Size: 0x80 (Inherited: 0x0)
struct FGTASettings_Graphics
{
	int32_t Visuals; // 0x0(0x4)
	int32_t SimulationScale; // 0x4(0x4)
	int32_t Streetlights; // 0x8(0x4)
	int32_t headlights; // 0xC(0x4)
	float ResolutionPercent; // 0x10(0x4)
	int32_t Shadows; // 0x14(0x4)
	float Brightness; // 0x18(0x4)
	float Contrast; // 0x1C(0x4)
	float Sharpening; // 0x20(0x4)
	int32_t Renderer; // 0x24(0x4)
	int32_t DisplayMode; // 0x28(0x4)
	int32_t FrameRate; // 0x2C(0x4)
	int32_t FrameRatePC; // 0x30(0x4)
	int32_t ResolutionSize; // 0x34(0x4)
	int32_t OutputMonitor; // 0x38(0x4)
	bool VSync; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	int32_t AntiAlias; // 0x40(0x4)
	int32_t AnisotropicFiltering; // 0x44(0x4)
	int32_t DistanceScale; // 0x48(0x4)
	int32_t TextureQuality; // 0x4C(0x4)
	int32_t ReflectionQuality; // 0x50(0x4)
	int32_t CarReflectionMethod; // 0x54(0x4)
	int32_t RTX; // 0x58(0x4)
	int32_t AmbientOcclusion; // 0x5C(0x4)
	int32_t Tessellation; // 0x60(0x4)
	int32_t CityGlowEffect; // 0x64(0x4)
	int32_t CloudQuality; // 0x68(0x4)
	bool Bloom; // 0x6C(0x1)
	bool LensFlare; // 0x6D(0x1)
	bool MotionBlur; // 0x6E(0x1)
	bool ClassicAtmosphere; // 0x6F(0x1)
	bool DepthOfField; // 0x70(0x1)
	bool HDR; // 0x71(0x1)
	uint8_t Pad_0x72[0x2]; // 0x72(0x2)
	int32_t DLSS; // 0x74(0x4)
	int32_t AspectRatio; // 0x78(0x4)
	bool GroundHaze; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
};

// Object: ScriptStruct GTABase.GTAOptionsItemTemplate
// Size: 0x90 (Inherited: 0x0)
struct FGTAOptionsItemTemplate
{
	struct FName PropertyName; // 0x0(0x8)
	struct FText DisplayName; // 0x8(0x18)
	bool bIsDisplayNameKeyed; // 0x20(0x1)
	uint8_t Style; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
	struct TArray<struct FText> SelectionOptions; // 0x28(0x10)
	int32_t SelectionOffset; // 0x38(0x4)
	bool IsBackwardsSelection; // 0x3C(0x1)
	bool UseSlider; // 0x3D(0x1)
	bool UseText; // 0x3E(0x1)
	uint8_t Pad_0x3F[0x1]; // 0x3F(0x1)
	float MinSlider; // 0x40(0x4)
	float MaxSlider; // 0x44(0x4)
	float StepSizeOverride; // 0x48(0x4)
	int32_t PlatformBitMask; // 0x4C(0x4)
	int32_t GameBitMask; // 0x50(0x4)
	int32_t InputType; // 0x54(0x4)
	struct TArray<struct FGTASelectionOptionSpecifier> RequiresOtherSelectionValue; // 0x58(0x10)
	bool RequireListRefreshOnChange; // 0x68(0x1)
	bool RequireConfirmationOnChange; // 0x69(0x1)
	bool ConfirmationMessageOnChangeOnlyForTrue; // 0x6A(0x1)
	uint8_t Pad_0x6B[0x5]; // 0x6B(0x5)
	struct FText ConfirmationMessageOnChangeOverride; // 0x70(0x18)
	bool RequireConfirmationPostChange; // 0x88(0x1)
	bool RequiresSpecialEnabledCheck; // 0x89(0x1)
	bool VisiblyDisabled; // 0x8A(0x1)
	uint8_t Pad_0x8B[0x5]; // 0x8B(0x5)
};

// Object: ScriptStruct GTABase.GTASelectionOptionSpecifier
// Size: 0x20 (Inherited: 0x0)
struct FGTASelectionOptionSpecifier
{
	struct FName ForPropertyName; // 0x0(0x8)
	bool isBool; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<int32_t> ForPropertyValue; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.SKBoneSituation
// Size: 0x18 (Inherited: 0x0)
struct FSKBoneSituation
{
	struct TArray<struct FQuat> FrameData; // 0x0(0x10)
	float Weight; // 0x10(0x4)
	bool bStale; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GTABase.SkeletonToSkeletonMap
// Size: 0x13B0 (Inherited: 0x0)
struct FSkeletonToSkeletonMap
{
	uint8_t Pad_0x0[0x13B0]; // 0x0(0x13B0)
};

// Object: ScriptStruct GTABase.SkelProxyBoneTweak
// Size: 0x40 (Inherited: 0x0)
struct FSkelProxyBoneTweak
{
	struct FName BoneName; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Trx; // 0x10(0x30)
};

// Object: ScriptStruct GTABase.GTACarRecordingFile
// Size: 0x20 (Inherited: 0x0)
struct FGTACarRecordingFile
{
	struct FString OriginalFileLocation; // 0x0(0x10)
	struct TArray<struct FGTACarRecordingData> Keyframes; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.GTACarRecordingData
// Size: 0x38 (Inherited: 0x0)
struct FGTACarRecordingData
{
	uint32_t Time; // 0x0(0x4)
	struct FVector Speed; // 0x4(0xC)
	struct FVector MatrixX; // 0x10(0xC)
	struct FVector MatrixY; // 0x1C(0xC)
	int8_t SteerAngle; // 0x28(0x1)
	int8_t Gas; // 0x29(0x1)
	int8_t Brake; // 0x2A(0x1)
	int8_t HandBrake; // 0x2B(0x1)
	struct FVector Coords; // 0x2C(0xC)
};

// Object: ScriptStruct GTABase.GTACinematicData
// Size: 0x48 (Inherited: 0x0)
struct FGTACinematicData
{
	struct FName Name; // 0x0(0x8)
	struct TSoftObjectPtr<ULevelSequence> Sequence; // 0x8(0x28)
	struct TArray<struct FGTACinematicLevelLoad> LevelLoads; // 0x30(0x10)
	int32_t ForceArea; // 0x40(0x4)
	bool bUsePlayerForReflectionPosition; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
};

// Object: ScriptStruct GTABase.GTACinematicLevelLoad
// Size: 0x18 (Inherited: 0x0)
struct FGTACinematicLevelLoad
{
	float TimeNeeded; // 0x0(0x4)
	float TimeNotNeeded; // 0x4(0x4)
	float TimeToLoad; // 0x8(0x4)
	struct FName LevelToLoad; // 0xC(0x8)
	bool bForceVisible; // 0x14(0x1)
	bool bCurrentlyLoaded; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct GTABase.GTAIplAccelItem
// Size: 0x14 (Inherited: 0x0)
struct FGTAIplAccelItem
{
	int32_t IplIndex; // 0x0(0x4)
	int32_t LodIndex; // 0x4(0x4)
	int32_t modelIndex; // 0x8(0x4)
	int32_t LodModelIndex; // 0xC(0x4)
	int32_t Actions; // 0x10(0x4)
};

// Object: ScriptStruct GTABase.GTAColAccelItem
// Size: 0x30 (Inherited: 0x0)
struct FGTAColAccelItem
{
	struct FGTABoundingBox Bounds; // 0x0(0x28)
	int32_t modelIndex; // 0x28(0x4)
	uint8_t Level; // 0x2C(0x1)
	uint8_t HasCollisionVols; // 0x2D(0x1)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct GTABase.GTABoundingBox
// Size: 0x28 (Inherited: 0x0)
struct FGTABoundingBox
{
	struct FVector BoxMin; // 0x0(0xC)
	struct FVector BoxMax; // 0xC(0xC)
	struct FVector SphereCentre; // 0x18(0xC)
	float SphereRadius; // 0x24(0x4)
};

// Object: ScriptStruct GTABase.GTAColDefAccelItem
// Size: 0x18 (Inherited: 0x0)
struct FGTAColDefAccelItem
{
	struct FGTARect BoundingBox; // 0x0(0x10)
	int16_t FirstModel; // 0x10(0x2)
	int16_t LastModel; // 0x12(0x2)
	bool InMemoryAlways; // 0x14(0x1)
	bool Interior; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct GTABase.GTARect
// Size: 0x10 (Inherited: 0x0)
struct FGTARect
{
	float Left; // 0x0(0x4)
	float Top; // 0x4(0x4)
	float Right; // 0x8(0x4)
	float Bottom; // 0xC(0x4)
};

// Object: ScriptStruct GTABase.GTAIplDef
// Size: 0x34 (Inherited: 0x0)
struct FGTAIplDef
{
	struct FGTARect BoundingBox; // 0x0(0x10)
	uint8_t Name[0x12]; // 0x10(0x12)
	int16_t FirstBuilding; // 0x22(0x2)
	int16_t LastBuilding; // 0x24(0x2)
	int16_t FirstDummy; // 0x26(0x2)
	int16_t LastDummy; // 0x28(0x2)
	int16_t StaticIplIndex; // 0x2A(0x2)
	bool Interior; // 0x2C(0x1)
	bool Loaded; // 0x2D(0x1)
	bool Required; // 0x2E(0x1)
	bool Ignore; // 0x2F(0x1)
	bool IgnoreWhenDeleted; // 0x30(0x1)
	bool LargeIpl; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
};

// Object: ScriptStruct GTABase.CollisionMeshSection
// Size: 0x10 (Inherited: 0x0)
struct FCollisionMeshSection
{
	struct TArray<struct FCollisionMeshGroup> Groups; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.CollisionMeshGroup
// Size: 0x1C (Inherited: 0x0)
struct FCollisionMeshGroup
{
	struct FVector Min; // 0x0(0xC)
	struct FVector Max; // 0xC(0xC)
	uint16_t StartFace; // 0x18(0x2)
	uint16_t EndFace; // 0x1A(0x2)
};

// Object: ScriptStruct GTABase.GTACollisionDataWrapper
// Size: 0x38 (Inherited: 0x0)
struct FGTACollisionDataWrapper
{
	struct FString OriginalCollisionModelNameMirror; // 0x0(0x10)
	struct TSoftObjectPtr<UGTACollisionData> CollisionRef; // 0x10(0x28)
};

// Object: ScriptStruct GTABase.GTAColTriData
// Size: 0x28 (Inherited: 0x0)
struct FGTAColTriData
{
	uint32_t Dummy; // 0x0(0x4)
	uint8_t Pad_0x4[0x24]; // 0x4(0x24)
};

// Object: ScriptStruct GTABase.GTAColBoundingBox
// Size: 0x2C (Inherited: 0x0)
struct FGTAColBoundingBox
{
	struct FGTAColSphere BoundingSphere; // 0x0(0x10)
	struct FBox BoundingBox; // 0x10(0x1C)
};

// Object: ScriptStruct GTABase.GTAColSphere
// Size: 0x10 (Inherited: 0x0)
struct FGTAColSphere
{
	float Radius; // 0x0(0x4)
	struct FVector Origin; // 0x4(0xC)
};

// Object: ScriptStruct GTABase.GTAColTriIndex
// Size: 0x10 (Inherited: 0x0)
struct FGTAColTriIndex
{
	int32_t TriIndex[0x3]; // 0x0(0xC)
	uint8_t SurfaceType; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct GTABase.GTAColTriVertex
// Size: 0xC (Inherited: 0x0)
struct FGTAColTriVertex
{
	struct FVector Vertex; // 0x0(0xC)
};

// Object: ScriptStruct GTABase.GTAColBox
// Size: 0x50 (Inherited: 0x0)
struct FGTAColBox
{
	struct FTransform InternalTransform; // 0x0(0x30)
	struct FBox Box; // 0x30(0x1C)
	uint8_t SurfaceType; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct GTABase.GTAColCapsule
// Size: 0x24 (Inherited: 0x0)
struct FGTAColCapsule
{
	uint8_t SpheresAlongLine; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector position; // 0x4(0xC)
	struct FVector Rotation; // 0x10(0xC)
	float Length; // 0x1C(0x4)
	float Radius; // 0x20(0x4)
};

// Object: ScriptStruct GTABase.PostDecalSettings
// Size: 0x60 (Inherited: 0x0)
struct FPostDecalSettings
{
	struct UMaterialInterface* MI; // 0x0(0x8)
	int32_t GridSize; // 0x8(0x4)
	float SizeX; // 0xC(0x4)
	float SizeY; // 0x10(0x4)
	float Rotation; // 0x14(0x4)
	float MaxDistance; // 0x18(0x4)
	float MeshOffset; // 0x1C(0x4)
	bool bGroundOnly; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t MinVisualSetting; // 0x24(0x4)
	float TimeTilFade; // 0x28(0x4)
	float TimeSpentFading; // 0x2C(0x4)
	struct FLinearColor VertexColor; // 0x30(0x10)
	float MinDirDeviation; // 0x40(0x4)
	int32_t MaxEntriesPerBatch; // 0x44(0x4)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct FVector4 UVScaleOffset; // 0x50(0x10)
};

// Object: ScriptStruct GTABase.Text3DEntry
// Size: 0x20 (Inherited: 0x0)
struct FText3DEntry
{
	struct UText3DComponent* Component; // 0x0(0x8)
	struct FString CachedString; // 0x8(0x10)
	bool bHasMIDs; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct GTABase.DecalEntry
// Size: 0x18 (Inherited: 0x0)
struct FDecalEntry
{
	struct UProceduralMeshComponent* DecalComponent; // 0x0(0x8)
	float FadeStart; // 0x8(0x4)
	float FadeEnd; // 0xC(0x4)
	int32_t NumEntries; // 0x10(0x4)
	int32_t MaxEntries; // 0x14(0x4)
};

// Object: ScriptStruct GTABase.BulletImpactInfo
// Size: 0xA8 (Inherited: 0x0)
struct FBulletImpactInfo
{
	struct FName Name; // 0x0(0x8)
	struct TSet<uint8_t> SurfaceTypes; // 0x8(0x50)
	struct UMaterialInstanceConstant* HoleMIC; // 0x58(0x8)
	struct FFloatRange BulletHoleSize; // 0x60(0x10)
	struct FLinearColor BulletHoleVertexColor; // 0x70(0x10)
	int32_t DebrisCount; // 0x80(0x4)
	float DebrisSize; // 0x84(0x4)
	float DebrisVelocity; // 0x88(0x4)
	struct FLinearColor DebrisColor; // 0x8C(0x10)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
	struct UParticleSystem* ImpactSystem; // 0xA0(0x8)
};

// Object: ScriptStruct GTABase.GTAEffectData
// Size: 0x30 (Inherited: 0x0)
struct FGTAEffectData
{
	struct FName LookupName; // 0x0(0x8)
	struct UParticleSystem* System; // 0x8(0x8)
	struct UParticleSystem* System_VC; // 0x10(0x8)
	struct UParticleSystem* System_GTA3; // 0x18(0x8)
	struct USoundCue* Sound; // 0x20(0x8)
	int32_t TransparencyPriority; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct GTABase.AOGridInfo
// Size: 0x28 (Inherited: 0x0)
struct FAOGridInfo
{
	int32_t NumCells; // 0x0(0x4)
	int32_t NumSkyCells; // 0x4(0x4)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
};

// Object: ScriptStruct GTABase.GTAFootprint
// Size: 0xB0 (Inherited: 0x0)
struct FGTAFootprint
{
	struct FTransform Transform; // 0x0(0x30)
	float Lifetime; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UDecalComponent* Component; // 0x38(0x8)
	float InitialAlpha; // 0x40(0x4)
	uint8_t Pad_0x44[0x6C]; // 0x44(0x6C)
};

// Object: ScriptStruct GTABase.GrassMovement
// Size: 0x20 (Inherited: 0x0)
struct FGrassMovement
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct GTABase.GTAPatchDefinition
// Size: 0x78 (Inherited: 0x0)
struct FGTAPatchDefinition
{
	struct UGTAClutterGrassType* Grasses; // 0x0(0x8)
	int32_t ListingIndex; // 0x8(0x4)
	int32_t SizeOnDisk; // 0xC(0x4)
	struct FBox Bounds; // 0x10(0x1C)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<int32_t> GroupIndices; // 0x30(0x10)
	struct FVector BaseLocation; // 0x40(0xC)
	struct FVector LocationDelta; // 0x4C(0xC)
	uint8_t Pad_0x58[0x20]; // 0x58(0x20)
};

// Object: ScriptStruct GTABase.GTAGrassPatch
// Size: 0xC (Inherited: 0x0)
struct FGTAGrassPatch
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct GTABase.GTAGrassListing
// Size: 0x88 (Inherited: 0x0)
struct FGTAGrassListing
{
	struct FName Name; // 0x0(0x8)
	float ScaleMultiplier; // 0x8(0x4)
	float DensityMultiplier; // 0xC(0x4)
	float ProceduralHeightMultiplier; // 0x10(0x4)
	float BoundsExpand; // 0x14(0x4)
	float MinPatchSize; // 0x18(0x4)
	float MaxPatchSize; // 0x1C(0x4)
	float MaxJoin2DPercent; // 0x20(0x4)
	float MaxJoinZError; // 0x24(0x4)
	float MinAllowedZ; // 0x28(0x4)
	float MinWorldZ; // 0x2C(0x4)
	float MaxWorldZ; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TMap<struct TSoftObjectPtr<UMaterialInstanceConstant>, struct FGrassMaterialSetup> MaterialDictionary; // 0x38(0x50)
};

// Object: ScriptStruct GTABase.GrassMaterialSetup
// Size: 0x18 (Inherited: 0x0)
struct FGrassMaterialSetup
{
	bool bOverrideMaterialBlending; // 0x0(0x1)
	bool bEdgesRequireWalls; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TArray<struct FVector4> ValidUVCoords; // 0x8(0x10)
};

// Object: ScriptStruct GTABase.GTAWorldOverlayTexture
// Size: 0x48 (Inherited: 0x0)
struct FGTAWorldOverlayTexture
{
	struct FVector MinCoordinates; // 0x0(0xC)
	struct FVector MaxCoordinates; // 0xC(0xC)
	bool bAllowWrap; // 0x18(0x1)
	bool bInvertMask; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TSoftObjectPtr<UTexture2D> Texture; // 0x20(0x28)
};

// Object: ScriptStruct GTABase.GTAGrassVariety
// Size: 0xE0 (Inherited: 0x0)
struct FGTAGrassVariety
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FGTAMeshVariation> Meshes; // 0x8(0x10)
	struct AGTAClutterActor* SlowBlueprint; // 0x18(0x8)
	bool bConstructProcedurally; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
	struct FGTAGrassProcGeneration Procedural; // 0x28(0x58)
	struct FGTAGrassSpawn Spawn; // 0x80(0x38)
	struct FGTAGrassPlacement Place; // 0xB8(0x24)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
};

// Object: ScriptStruct GTABase.GTAGrassPlacement
// Size: 0x24 (Inherited: 0x0)
struct FGTAGrassPlacement
{
	struct FPerPlatformFloat GrassDensity; // 0x0(0x4)
	float PlacementJitter; // 0x4(0x4)
	float EdgeMinDistance; // 0x8(0x4)
	float EdgeMaxDistance; // 0xC(0x4)
	float KeepApartDistance; // 0x10(0x4)
	struct FGTANoiseSettings Noise; // 0x14(0xC)
	uint8_t bEdgeAllowCreeping : 1; // 0x20(0x1), Mask(0x1)
	uint8_t bDoNotHugWalls : 1; // 0x20(0x1), Mask(0x2)
	uint8_t bEdgeTapering : 1; // 0x20(0x1), Mask(0x4)
	uint8_t bChangeOverTime : 1; // 0x20(0x1), Mask(0x8)
	uint8_t bMaskWithNoise : 1; // 0x20(0x1), Mask(0x10)
	uint8_t BitPad_0x20_5 : 3; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct GTABase.GTANoiseSettings
// Size: 0xC (Inherited: 0x0)
struct FGTANoiseSettings
{
	float Scale; // 0x0(0x4)
	struct FFloatInterval Range; // 0x4(0x8)
};

// Object: ScriptStruct GTABase.GTAGrassSpawn
// Size: 0x38 (Inherited: 0x0)
struct FGTAGrassSpawn
{
	struct FPerPlatformInt StartCullDistance; // 0x0(0x4)
	struct FPerPlatformInt EndCullDistance; // 0x4(0x4)
	int32_t MinLOD; // 0x8(0x4)
	enum class EGTAGrassScaling Scaling; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	float ScalePower; // 0x10(0x4)
	struct FFloatInterval ScaleX; // 0x14(0x8)
	struct FFloatInterval ScaleY; // 0x1C(0x8)
	struct FFloatInterval ScaleZ; // 0x24(0x8)
	struct FFloatInterval ZOffset; // 0x2C(0x8)
	uint8_t RandomRotation : 1; // 0x34(0x1), Mask(0x1)
	uint8_t AlignToSurface : 1; // 0x34(0x1), Mask(0x2)
	uint8_t bCastDynamicShadow : 1; // 0x34(0x1), Mask(0x4)
	uint8_t bIncludeOnMobile : 1; // 0x34(0x1), Mask(0x8)
	uint8_t BitPad_0x34_4 : 4; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct GTABase.GTAGrassProcGeneration
// Size: 0x58 (Inherited: 0x0)
struct FGTAGrassProcGeneration
{
	struct UMaterialInstanceConstant* Material; // 0x0(0x8)
	struct TArray<struct FVector4> UVSets; // 0x8(0x10)
	struct FFloatInterval CardHeight; // 0x18(0x8)
	struct FFloatInterval CardWidth; // 0x20(0x8)
	float CardFlattening; // 0x28(0x4)
	float NormalRandomization; // 0x2C(0x4)
	float GroundNormalBottom; // 0x30(0x4)
	float GroundNormalTop; // 0x34(0x4)
	float EdgeBiasedScalingDistance; // 0x38(0x4)
	struct FGTANoiseModSettings HeightNoiseMap; // 0x3C(0x8)
	struct FGTANoiseModSettings AONoiseMap; // 0x44(0x8)
	struct FGTANoiseModSettings UVNoiseMap; // 0x4C(0x8)
	uint8_t bNonUniformHeight : 1; // 0x54(0x1), Mask(0x1)
	uint8_t BitPad_0x54_1 : 7; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

// Object: ScriptStruct GTABase.GTANoiseModSettings
// Size: 0x8 (Inherited: 0x0)
struct FGTANoiseModSettings
{
	float Scale; // 0x0(0x4)
	float Strength; // 0x4(0x4)
};

// Object: ScriptStruct GTABase.GTAMeshVariation
// Size: 0x10 (Inherited: 0x0)
struct FGTAMeshVariation
{
	struct UStaticMesh* Mesh; // 0x0(0x8)
	struct UMaterialInstanceConstant* MIC; // 0x8(0x8)
};

// Object: ScriptStruct GTABase.GTAForceFeedback
// Size: 0x10 (Inherited: 0x0)
struct FGTAForceFeedback
{
	struct UForceFeedbackEffect* FFE; // 0x0(0x8)
	int32_t Priority; // 0x8(0x4)
	bool attenuated; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct GTABase.HUDItem
// Size: 0xA0 (Inherited: 0x0)
struct FHUDItem
{
	uint8_t Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x9F]; // 0x1(0x9F)
};

// Object: ScriptStruct GTABase.HUDText
// Size: 0x40 (Inherited: 0x0)
struct FHUDText
{
	struct FHudString HudString; // 0x0(0x40)
};

// Object: ScriptStruct GTABase.HudString
// Size: 0x40 (Inherited: 0x0)
struct FHudString
{
	struct FString Text; // 0x0(0x10)
	struct FVector2D position; // 0x10(0x8)
	struct FColor Color; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UFont* Font; // 0x20(0x8)
	struct FVector2D Scale; // 0x28(0x8)
	uint8_t justify; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t DisplayTime; // 0x34(0x4)
	bool UseShadow; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct GTABase.HUDQuad
// Size: 0x58 (Inherited: 0x0)
struct FHUDQuad
{
	struct TWeakObjectPtr<struct UObject> drawable; // 0x0(0x8)
	uint8_t Pad_0x8[0x50]; // 0x8(0x50)
};

// Object: ScriptStruct GTABase.GTAIFPFile
// Size: 0x20 (Inherited: 0x0)
struct FGTAIFPFile
{
	bool bEnableOverridesForThisAnimation; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t GroupId; // 0x4(0x4)
	int32_t AnimId; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FGTAIFPKeyframe> Keyframes; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.GTAIFPKeyframe
// Size: 0x14 (Inherited: 0x0)
struct FGTAIFPKeyframe
{
	int32_t KeyframeIndex; // 0x0(0x4)
	struct FVector ExtractedDistance; // 0x4(0xC)
	float ExtractedTime; // 0x10(0x4)
};

// Object: ScriptStruct GTABase.BevelInfo
// Size: 0xC (Inherited: 0x0)
struct FBevelInfo
{
	float BevelDistance; // 0x0(0x4)
	float HardBevelAngle; // 0x4(0x4)
	float WeldDistance; // 0x8(0x4)
};

// Object: ScriptStruct GTABase.ConstructPath
// Size: 0x10 (Inherited: 0x0)
struct FConstructPath
{
	struct TArray<struct FConstructNode> Path; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.ConstructNode
// Size: 0x34 (Inherited: 0x0)
struct FConstructNode
{
	struct FVector position; // 0x0(0xC)
	struct FVector Direction; // 0xC(0xC)
	float Width; // 0x18(0x4)
	float MedianWidth; // 0x1C(0x4)
	float UVDist; // 0x20(0x4)
	bool bBacktracking; // 0x24(0x1)
	bool bBidirectional; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
	int32_t MeshRef; // 0x28(0x4)
	struct FName MapName; // 0x2C(0x8)
};

// Object: ScriptStruct GTABase.RawNodesContainer
// Size: 0x10 (Inherited: 0x0)
struct FRawNodesContainer
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.SimpleEditNode
// Size: 0x28 (Inherited: 0x0)
struct FSimpleEditNode
{
	struct FVector position; // 0x0(0xC)
	bool bConsideredExternal; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRawSelectedNode InternalLink; // 0x10(0xC)
	struct FRawSelectedNode ExternalLink; // 0x1C(0xC)
};

// Object: ScriptStruct GTABase.RawSelectedNode
// Size: 0xC (Inherited: 0x0)
struct FRawSelectedNode
{
	int32_t Index; // 0x0(0x4)
	int32_t IndexInGroup; // 0x4(0x4)
	bool bEdit; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct GTABase.FloodTweak
// Size: 0x14 (Inherited: 0x0)
struct FFloodTweak
{
	struct FNodeAddr Addr; // 0x0(0x8)
	struct FVector Direction; // 0x8(0xC)
};

// Object: ScriptStruct GTABase.NodeAddr
// Size: 0x8 (Inherited: 0x0)
struct FNodeAddr
{
	int32_t NodeIndex; // 0x0(0x4)
	int32_t RegionIndex; // 0x4(0x4)
};

// Object: ScriptStruct GTABase.GTASelectedNode
// Size: 0x80 (Inherited: 0x0)
struct FGTASelectedNode
{
	int32_t Region; // 0x0(0x4)
	int32_t NodeIndex; // 0x4(0x4)
	struct FPathNode Node; // 0x8(0x24)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FPathNode> AdjacentNodes; // 0x30(0x10)
	struct TArray<struct FPathLinkAssoc> Links; // 0x40(0x10)
	struct TArray<struct FPathLinkAssoc> LinksBackup; // 0x50(0x10)
	struct TArray<struct FPathAdjacent> AdjacentsBackup; // 0x60(0x10)
	uint8_t Pad_0x70[0x8]; // 0x70(0x8)
	bool bNeedsNewPosition; // 0x78(0x1)
	bool bNewNode; // 0x79(0x1)
	uint8_t Pad_0x7A[0x6]; // 0x7A(0x6)
};

// Object: ScriptStruct GTABase.PathAdjacent
// Size: 0x10 (Inherited: 0x0)
struct FPathAdjacent
{
	int32_t AdjNodeIndex; // 0x0(0x4)
	int32_t AdjNodeRegion; // 0x4(0x4)
	int16_t LinkIndex; // 0x8(0x2)
	int16_t LinkRegion; // 0xA(0x2)
	uint8_t Length; // 0xC(0x1)
	uint8_t Flags; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
};

// Object: ScriptStruct GTABase.PathLink
// Size: 0x28 (Inherited: 0x0)
struct FPathLink
{
	struct FVector position; // 0x0(0xC)
	int32_t Node1Region; // 0xC(0x4)
	int32_t Node1Index; // 0x10(0x4)
	struct FVector Direction; // 0x14(0xC)
	uint8_t Width; // 0x20(0x1)
	uint8_t LanesTo; // 0x21(0x1)
	uint8_t LanesFrom; // 0x22(0x1)
	uint8_t Node1HasMoreTrafficLightNeighbors; // 0x23(0x1)
	uint8_t TrafficLightsCycle; // 0x24(0x1)
	uint8_t BridgeOrRailwayLights; // 0x25(0x1)
	uint8_t Pad_0x26[0x2]; // 0x26(0x2)
};

// Object: ScriptStruct GTABase.PathLinkAssoc
// Size: 0x38 (Inherited: 0x28)
struct FPathLinkAssoc : FPathLink
{
	int32_t Node2Region; // 0x28(0x4)
	int32_t Node2Index; // 0x2C(0x4)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct GTABase.PathNode
// Size: 0x24 (Inherited: 0x0)
struct FPathNode
{
	uint32_t PreviousLink; // 0x0(0x4)
	uint32_t NextLink; // 0x4(0x4)
	struct FVector position; // 0x8(0xC)
	int32_t IndexAdjacentNodes; // 0x14(0x4)
	int32_t NodeIndex; // 0x18(0x4)
	uint8_t PathWidth; // 0x1C(0x1)
	uint8_t Group; // 0x1D(0x1)
	uint8_t NumAdjacentNodes; // 0x1E(0x1)
	uint8_t bDeadEnd : 1; // 0x1F(0x1), Mask(0x1)
	uint8_t bSwitchedOff : 1; // 0x1F(0x1), Mask(0x2)
	uint8_t bRoadBlock : 1; // 0x1F(0x1), Mask(0x4)
	uint8_t bWaterNode : 1; // 0x1F(0x1), Mask(0x8)
	uint8_t bSwitchedOffOriginal : 1; // 0x1F(0x1), Mask(0x10)
	uint8_t bAlreadyFound : 1; // 0x1F(0x1), Mask(0x20)
	uint8_t bDontWanderHere : 1; // 0x1F(0x1), Mask(0x40)
	uint8_t bInteriorNode : 1; // 0x1F(0x1), Mask(0x80)
	uint8_t Speed; // 0x20(0x1)
	uint8_t Density; // 0x21(0x1)
	uint8_t SpecialFunction; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct GTABase.GTARegionMetadata
// Size: 0x18 (Inherited: 0x0)
struct FGTARegionMetadata
{
	struct TArray<struct FBox> RegionBounds; // 0x0(0x10)
	uint8_t ColorGroups[0x2]; // 0x10(0x2)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct GTABase.BoneHackTweak
// Size: 0x20 (Inherited: 0x0)
struct FBoneHackTweak
{
	int32_t BoneTag; // 0x0(0x4)
	struct FVector Axis; // 0x4(0xC)
	struct FVector Offset; // 0x10(0xC)
	float Rotation; // 0x1C(0x4)
};

// Object: ScriptStruct GTABase.GTAClothingMaterialType
// Size: 0x18 (Inherited: 0x0)
struct FGTAClothingMaterialType
{
	struct FName MaterialTypeName; // 0x0(0x8)
	struct TArray<struct FGTAClothingMaterial> Materials; // 0x8(0x10)
};

// Object: ScriptStruct GTABase.GTAClothingMaterial
// Size: 0x18 (Inherited: 0x0)
struct FGTAClothingMaterial
{
	struct FName MaterialName; // 0x0(0x8)
	struct TArray<struct FGTAClothingMaterialPair> MaterialSwaps; // 0x8(0x10)
};

// Object: ScriptStruct GTABase.GTAClothingMaterialPair
// Size: 0x88 (Inherited: 0x0)
struct FGTAClothingMaterialPair
{
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x0(0x28)
	struct TSoftObjectPtr<UMaterialInterface> replacesMaterial; // 0x28(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x50(0x28)
	struct FString SocketName; // 0x78(0x10)
};

// Object: ScriptStruct GTABase.GTAClothingModelType
// Size: 0x18 (Inherited: 0x0)
struct FGTAClothingModelType
{
	struct FName ModelTypeName; // 0x0(0x8)
	struct TArray<struct FGTAClothingModel> Models; // 0x8(0x10)
};

// Object: ScriptStruct GTABase.GTAClothingModel
// Size: 0x58 (Inherited: 0x0)
struct FGTAClothingModel
{
	struct FName ModelName; // 0x0(0x8)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x8(0x28)
	struct TSoftObjectPtr<UTexture2D> maskTexture; // 0x30(0x28)
};

// Object: ScriptStruct GTABase.UGTAClothingEntry
// Size: 0xC8 (Inherited: 0x0)
struct FUGTAClothingEntry
{
	struct FString DisplayName; // 0x0(0x10)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x10(0x28)
	struct TSoftObjectPtr<UMaterialInterface> Material; // 0x38(0x28)
	struct TSoftObjectPtr<UTexture> maskTexture; // 0x60(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x88(0x28)
	struct FString SocketName; // 0xB0(0x10)
	int32_t materialIndex; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
};

// Object: ScriptStruct GTABase.GTAPoseableComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FGTAPoseableComponentClothTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct GTABase.RadarEdgeSprite
// Size: 0x58 (Inherited: 0x0)
struct FRadarEdgeSprite
{
	struct UTexture2D* Texture; // 0x0(0x8)
	struct FBox2D UVs; // 0x8(0x14)
	struct FMargin Offsets; // 0x1C(0x10)
	struct FAnchors Anchors; // 0x2C(0x10)
	struct FLinearColor Color; // 0x3C(0x10)
	float Priority; // 0x4C(0x4)
	float ZOrderOverride; // 0x50(0x4)
	float DistanceFromPlayer; // 0x54(0x4)
};

// Object: ScriptStruct GTABase.GTARadarSprite
// Size: 0x60 (Inherited: 0x0)
struct FGTARadarSprite
{
	struct FName Name; // 0x0(0x8)
	struct FText LegendText; // 0x8(0x18)
	int32_t LegendCategory; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UTexture2D* Texture; // 0x28(0x8)
	struct FVector4 UVCoords; // 0x30(0x10)
	bool bIsFlat; // 0x40(0x1)
	bool bIsDisplayedOnEdge; // 0x41(0x1)
	bool bCameraAligned; // 0x42(0x1)
	bool bPlayerAligned; // 0x43(0x1)
	bool bNeverDistanceScale; // 0x44(0x1)
	uint8_t Pad_0x45[0x3]; // 0x45(0x3)
	float Scale; // 0x48(0x4)
	bool bShouldAnimateInMap; // 0x4C(0x1)
	bool bShouldAnimateInRadar; // 0x4D(0x1)
	uint8_t AnimationStyle; // 0x4E(0x1)
	uint8_t Pad_0x4F[0x1]; // 0x4F(0x1)
	float ZOrderOverride; // 0x50(0x4)
	uint8_t Pad_0x54[0xC]; // 0x54(0xC)
};

// Object: ScriptStruct GTABase.CachedSoundWaveAsset
// Size: 0x40 (Inherited: 0x0)
struct FCachedSoundWaveAsset
{
	float Duration; // 0x0(0x4)
	float ActualStartTime; // 0x4(0x4)
	uint32_t TotalNumFrames; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TSoftObjectPtr<USoundWave> SoundAsset; // 0x10(0x28)
	struct USoundWave* PreloadedSoundWave; // 0x38(0x8)
};

// Object: ScriptStruct GTABase.ProcQueuedPayload
// Size: 0x28 (Inherited: 0x0)
struct FProcQueuedPayload
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct USoundWave* Sound; // 0x10(0x8)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Object: ScriptStruct GTABase.GTARadioStation
// Size: 0x10 (Inherited: 0x0)
struct FGTARadioStation
{
	uint8_t Station; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct USoundCue* RadioAudio; // 0x8(0x8)
};

// Object: ScriptStruct GTABase.GTAHeadlightSetting
// Size: 0x14 (Inherited: 0x0)
struct FGTAHeadlightSetting
{
	bool bCastShadows; // 0x0(0x1)
	bool bDynamicTailLights; // 0x1(0x1)
	bool bLowCostLights; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float ShadowResolutionScale; // 0x4(0x4)
	float ShadowDistance; // 0x8(0x4)
	float LightDrawDistance; // 0xC(0x4)
	float AttenuationRadius; // 0x10(0x4)
};

// Object: ScriptStruct GTABase.GTAStreetlightSetting
// Size: 0x18 (Inherited: 0x0)
struct FGTAStreetlightSetting
{
	int32_t DecalDistance; // 0x0(0x4)
	int32_t VisibleDistance; // 0x4(0x4)
	float SpotLightShadowDistance; // 0x8(0x4)
	float PointLightShadowDistance; // 0xC(0x4)
	float ShadowResolutionScale; // 0x10(0x4)
	bool bCastSpotlightShadows; // 0x14(0x1)
	bool bCastPointlightShadows; // 0x15(0x1)
	bool bLowCostLights; // 0x16(0x1)
	uint8_t Pad_0x17[0x1]; // 0x17(0x1)
};

// Object: ScriptStruct GTABase.GTACVarListSetting
// Size: 0x10 (Inherited: 0x0)
struct FGTACVarListSetting
{
	struct TArray<struct FGTAVisualOption> CVars; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.GTAVisualOption
// Size: 0x20 (Inherited: 0x0)
struct FGTAVisualOption
{
	struct FString CVar; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.GTAShadowSetting
// Size: 0x1C (Inherited: 0x0)
struct FGTAShadowSetting
{
	float DynamicShadowDistance; // 0x0(0x4)
	int32_t DynamicShadowCascades; // 0x4(0x4)
	float FarShadowDistance; // 0x8(0x4)
	int32_t FarShadowCascades; // 0xC(0x4)
	bool bTreesCastFarShadows; // 0x10(0x1)
	bool bEnableMoonShadows; // 0x11(0x1)
	bool bEnableMorningSunShadows; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	float DistributionExponent; // 0x14(0x4)
	int32_t MaxShadowCasters; // 0x18(0x4)
};

// Object: ScriptStruct GTABase.GTASimulationScaleSetting
// Size: 0x10 (Inherited: 0x0)
struct FGTASimulationScaleSetting
{
	float PedDensityMult; // 0x0(0x4)
	float PedDistanceMult; // 0x4(0x4)
	float CarDensityMult; // 0x8(0x4)
	float CarDistanceMult; // 0xC(0x4)
};

// Object: ScriptStruct GTABase.GTAVisualsSetting
// Size: 0x38 (Inherited: 0x0)
struct FGTAVisualsSetting
{
	struct TArray<struct FGTAVisualOption> CVars; // 0x0(0x10)
	struct TArray<struct FGTAVisualOption> ExtraCVars; // 0x10(0x10)
	int32_t WindowLights_Quality; // 0x20(0x4)
	float WindowLights_Distance; // 0x24(0x4)
	float WindowLights_FadeInDistance; // 0x28(0x4)
	int32_t MaxInteriorShadowedLights; // 0x2C(0x4)
	int32_t MaxInteriorActiveLights; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct GTABase.GTASceneProbe
// Size: 0x78 (Inherited: 0x0)
struct FGTASceneProbe
{
	struct FString ProbeName; // 0x0(0x10)
	struct FVector PlayerPosition; // 0x10(0xC)
	struct FVector CameraPosition; // 0x1C(0xC)
	struct FRotator CameraRotation; // 0x28(0xC)
	float CameraFOV; // 0x34(0x4)
	float TimeOfDay; // 0x38(0x4)
	float CapturedPedMult; // 0x3C(0x4)
	float CapturedCarMult; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FGTAProbeSpawn> SpawnData; // 0x48(0x10)
	struct TArray<struct AGTAActor*> SpawnedActors; // 0x58(0x10)
	uint8_t Pad_0x68[0x10]; // 0x68(0x10)
};

// Object: ScriptStruct GTABase.GTAProbeSpawn
// Size: 0x68 (Inherited: 0x0)
struct FGTAProbeSpawn
{
	struct TSoftClassPtr<struct AActor*> BPClass; // 0x0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> SkelMesh; // 0x28(0x28)
	struct FVector Location; // 0x50(0xC)
	struct FRotator Rotation; // 0x5C(0xC)
};

// Object: ScriptStruct GTABase.GTASceneExperiment
// Size: 0x40 (Inherited: 0x0)
struct FGTASceneExperiment
{
	struct FString ExperimentName; // 0x0(0x10)
	bool bDevelopmentOnly; // 0x10(0x1)
	bool bDiffFromBaseline; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
	struct TArray<struct FString> EnableCommands; // 0x18(0x10)
	struct TArray<struct FString> DisableCommands; // 0x28(0x10)
	float ScreenPercentageOverride; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct GTABase.NextVariationData
// Size: 0xB8 (Inherited: 0x0)
struct FNextVariationData
{
	struct TArray<struct UTexture2D*> SkinBaseColors; // 0x0(0x10)
	struct TArray<struct UTexture2D*> SkinAdditionalBaseColors; // 0x10(0x10)
	struct TArray<struct UTexture2D*> ClothingBaseColors; // 0x20(0x10)
	struct TArray<struct UMaterialInterface*> EyeMaterials; // 0x30(0x10)
	struct TArray<struct FLinearColor> HairColors; // 0x40(0x10)
	struct TArray<struct UMaterialInterface*> AccessoryMaterials; // 0x50(0x10)
	struct TArray<struct FVariationAttachment> Attachments; // 0x60(0x10)
	struct FName SkinSlotName; // 0x70(0x8)
	struct FName AdditionalSkinSlotName; // 0x78(0x8)
	struct FName ClothingSlotName; // 0x80(0x8)
	struct FName EyeSlotName; // 0x88(0x8)
	struct FName HairSlotName; // 0x90(0x8)
	struct FName AccessorySlotName; // 0x98(0x8)
	int32_t SkinSlotIndex; // 0xA0(0x4)
	int32_t AdditionalSkinSlotIndex; // 0xA4(0x4)
	int32_t ClothingSlotIndex; // 0xA8(0x4)
	int32_t EyeSlotIndex; // 0xAC(0x4)
	int32_t HairSlotIndex; // 0xB0(0x4)
	int32_t AccessorySlotIndex; // 0xB4(0x4)
};

// Object: ScriptStruct GTABase.VariationAttachment
// Size: 0x10 (Inherited: 0x0)
struct FVariationAttachment
{
	struct UStaticMesh* Mesh; // 0x0(0x8)
	float Weight; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct GTABase.RequestedSoundStruct
// Size: 0x2 (Inherited: 0x0)
struct FRequestedSoundStruct
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: ScriptStruct GTABase.GTAStreamRequest
// Size: 0x48 (Inherited: 0x0)
struct FGTAStreamRequest
{
	struct TArray<struct UObject*> resultObjects; // 0x0(0x10)
	struct TScriptInterface<IGTAAssetProcessor> processor; // 0x10(0x10)
	uint8_t Pad_0x20[0x28]; // 0x20(0x28)
};

// Object: ScriptStruct GTABase.TargetHaloInfo
// Size: 0xB8 (Inherited: 0x0)
struct FTargetHaloInfo
{
	struct AActor* TargetActor; // 0x0(0x8)
	bool bDeactivating; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	uint8_t Type; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Alpha; // 0x14(0x4)
	struct TMap<struct UStaticMeshComponent*, struct UStaticMeshComponent*> StaticMap; // 0x18(0x50)
	struct TMap<struct USkinnedMeshComponent*, struct UPoseableMeshComponent*> SkinnedMap; // 0x68(0x50)
};

// Object: ScriptStruct GTABase.TerrainBlendEntry
// Size: 0xA0 (Inherited: 0x0)
struct FTerrainBlendEntry
{
	struct TSoftObjectPtr<UMaterialInstanceConstant> TargetMaterial; // 0x0(0x28)
	struct TSoftObjectPtr<UMaterialInstanceConstant> Material0; // 0x28(0x28)
	struct TSoftObjectPtr<UMaterialInstanceConstant> Material1; // 0x50(0x28)
	struct TSoftObjectPtr<UTexture2D> BlendTexture; // 0x78(0x28)
};

// Object: ScriptStruct GTABase.TerrainOverlayEntry
// Size: 0x78 (Inherited: 0x0)
struct FTerrainOverlayEntry
{
	struct TSoftObjectPtr<UMaterialInstanceConstant> TargetMaterial; // 0x0(0x28)
	struct TSoftObjectPtr<UMaterialInstanceConstant> OverlayMaterial; // 0x28(0x28)
	struct TSoftObjectPtr<UTexture2D> BlendTexture; // 0x50(0x28)
};

// Object: ScriptStruct GTABase.VGDOverrides
// Size: 0x2420 (Inherited: 0x0)
struct FVGDOverrides
{
	float FogStartDistance; // 0x0(0x4)
	float FogExtinctionScale; // 0x4(0x4)
	struct UTexture* CloudsLayer1; // 0x8(0x8)
	struct UTexture* CloudsLayer2; // 0x10(0x8)
	float StarsBrightness; // 0x18(0x4)
	float MoonBrightness; // 0x1C(0x4)
	float MoonClouds; // 0x20(0x4)
	float UVScale; // 0x24(0x4)
	float Saturation; // 0x28(0x4)
	float SunSaturation; // 0x2C(0x4)
	float WorldLayerDepth; // 0x30(0x4)
	float WorldLayerFog; // 0x34(0x4)
	float UVHorizon; // 0x38(0x4)
	struct FVector2D WindForce; // 0x3C(0x8)
	struct FGTAWeatherData GTAWeatherSettings; // 0x44(0x68)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	struct FSkySettings BaseSettings; // 0xB0(0x150)
	struct FSkySettings ExtraSunnySettings; // 0x200(0x150)
	struct FSkySettings SmogSettings; // 0x350(0x150)
	struct FSkySettings CloudySettings; // 0x4A0(0x150)
	struct FSkySettings RainySettings; // 0x5F0(0x150)
	struct FSkySettings FoggySettings; // 0x740(0x150)
	struct FSkySettings SandstormSettings; // 0x890(0x150)
	struct FSkySettings UnderwaterSettings; // 0x9E0(0x150)
	struct FSkySettings Misc1Settings; // 0xB30(0x150)
	struct FSkySettings Misc2Settings; // 0xC80(0x150)
	struct FSkySettings RiotSettings; // 0xDD0(0x150)
	struct FSkySettings LaBaseSettings; // 0xF20(0x150)
	struct FSkySettings LaExtraSunnySettings; // 0x1070(0x150)
	struct FSkySettings LaCloudySettings; // 0x11C0(0x150)
	struct FSkySettings LaRainySettings; // 0x1310(0x150)
	struct FSkySettings SfBaseSettings; // 0x1460(0x150)
	struct FSkySettings SfExtraSunnySettings; // 0x15B0(0x150)
	struct FSkySettings SfCloudySettings; // 0x1700(0x150)
	struct FSkySettings SfRainySettings; // 0x1850(0x150)
	struct FSkySettings VegasBaseSettings; // 0x19A0(0x150)
	struct FSkySettings VegasExtraSunnySettings; // 0x1AF0(0x150)
	struct FSkySettings VegasCloudySettings; // 0x1C40(0x150)
	uint8_t Pad_0x1D90[0x150]; // 0x1D90(0x150)
	struct FSkySettings DesertBaseSettings; // 0x1EE0(0x150)
	struct FSkySettings DesertExtraSunnySettings; // 0x2030(0x150)
	uint8_t Pad_0x2180[0x2A0]; // 0x2180(0x2A0)
};

// Object: ScriptStruct GTABase.SkySettings
// Size: 0x150 (Inherited: 0x0)
struct FSkySettings
{
	struct FName Name; // 0x0(0x8)
	float CloudDensityVariation; // 0x8(0x4)
	float CloudBaseDensity; // 0xC(0x4)
	float CloudVariationSpeed; // 0x10(0x4)
	float CloudWindSpeed; // 0x14(0x4)
	struct UCurveLinearColor* SkylightColor; // 0x18(0x8)
	struct UCurveLinearColor* SkyLowerColor; // 0x20(0x8)
	struct UCurveLinearColor* SkyUpperColor; // 0x28(0x8)
	struct UCurveLinearColor* SkyReflectionColor; // 0x30(0x8)
	struct UCurveLinearColor* CameraParameters; // 0x38(0x8)
	struct UCurveLinearColor* CloudParams; // 0x40(0x8)
	struct UCurveLinearColor* CloudBackgroundColor; // 0x48(0x8)
	struct UCurveLinearColor* CloudLowerColor; // 0x50(0x8)
	struct UCurveLinearColor* CloudUpperColor; // 0x58(0x8)
	struct UCurveLinearColor* CloudSecondaryColor; // 0x60(0x8)
	struct UCurveLinearColor* VolumetricCloudColor; // 0x68(0x8)
	struct UCurveLinearColor* VolumetricCloudExtinction; // 0x70(0x8)
	struct UCurveLinearColor* VolumetricCloudEmission; // 0x78(0x8)
	struct UCurveLinearColor* FogColor; // 0x80(0x8)
	struct UCurveLinearColor* FogParameters; // 0x88(0x8)
	struct UCurveLinearColor* MoonColor; // 0x90(0x8)
	struct UCurveLinearColor* StarsColor; // 0x98(0x8)
	struct UCurveLinearColor* SunColor; // 0xA0(0x8)
	struct UCurveFloat* SunshineAmount; // 0xA8(0x8)
	struct UCurveLinearColor* UplightingColor; // 0xB0(0x8)
	struct UCurveLinearColor* PostSettings; // 0xB8(0x8)
	struct UCurveFloat* CityGlowAmount; // 0xC0(0x8)
	struct UCurveLinearColor* GTAFogColor_Override; // 0xC8(0x8)
	struct UCurveLinearColor* GTAFogParam_Override; // 0xD0(0x8)
	struct UCurveFloat* GTAFogParam_Blend; // 0xD8(0x8)
	struct UCurveLinearColor* VGDPostSettings_Override; // 0xE0(0x8)
	struct UCurveFloat* VGDPostSettings_Blend; // 0xE8(0x8)
	struct TArray<struct UMaterialInstanceDynamic*> ActiveMaterials; // 0xF0(0x10)
	struct TArray<struct UMaterialInterface*> PostProcessMaterials; // 0x100(0x10)
	struct TArray<struct UMaterialInterface*> DLSSPostProcessMaterials; // 0x110(0x10)
	bool bUseRainCulling; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct UParticleSystem* CameraFX; // 0x128(0x8)
	struct UParticleSystemComponent* CameraFXComponent; // 0x130(0x8)
	float RepressSkyAmt; // 0x138(0x4)
	struct FLinearColor LerpSkyColor; // 0x13C(0x10)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
};

// Object: ScriptStruct GTABase.GTAWeatherData
// Size: 0x68 (Inherited: 0x0)
struct FGTAWeatherData
{
	float CloudsScale; // 0x0(0x4)
	float CloudsDensity; // 0x4(0x4)
	float CloudsVertexDensity; // 0x8(0x4)
	float CloudsHarness; // 0xC(0x4)
	float CloudsTranslucent; // 0x10(0x4)
	float CloudsBlend; // 0x14(0x4)
	float CloudsDistotion; // 0x18(0x4)
	float CloudsScattering; // 0x1C(0x4)
	float CloudsUpperBrightness; // 0x20(0x4)
	float CloudsLowerBrightness; // 0x24(0x4)
	float CloudsAmbient; // 0x28(0x4)
	float CloudsShadowSize; // 0x2C(0x4)
	float CloudsShadowSoft; // 0x30(0x4)
	float CloudsBackground; // 0x34(0x4)
	float CloudsHorizonDensity; // 0x38(0x4)
	float CloudsHorizonAlpha; // 0x3C(0x4)
	float CloudsHorizonScattering; // 0x40(0x4)
	float HorizonFalloff; // 0x44(0x4)
	float WindForceScale; // 0x48(0x4)
	float WindDynamic; // 0x4C(0x4)
	float WindDispersing; // 0x50(0x4)
	float SkylightBrightness; // 0x54(0x4)
	float SecondLayerColor; // 0x58(0x4)
	float SecondLayerAlpha; // 0x5C(0x4)
	float SecondLayerScale; // 0x60(0x4)
	float SecondLayerWind; // 0x64(0x4)
};

// Object: ScriptStruct GTABase.GTATrafficLight
// Size: 0x24 (Inherited: 0x0)
struct FGTATrafficLight
{
	struct FVector Coor1; // 0x0(0xC)
	struct FVector Coor2; // 0xC(0xC)
	float EntityOrientation; // 0x18(0x4)
	float EntityX; // 0x1C(0x4)
	float EntityY; // 0x20(0x4)
};

// Object: ScriptStruct GTABase.SlotImageStruct
// Size: 0x30 (Inherited: 0x0)
struct FSlotImageStruct
{
	struct UObject* Image; // 0x0(0x8)
	bool Enabled; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FString string; // 0x10(0x10)
	struct FString extraString; // 0x20(0x10)
};

// Object: ScriptStruct GTABase.ScrollListStyle
// Size: 0x158 (Inherited: 0x0)
struct FScrollListStyle
{
	struct FSlateColor SlotTextColor; // 0x0(0x28)
	struct FSlateColor SlotTextColorSelected; // 0x28(0x28)
	struct FSlateColor SlotColor1; // 0x50(0x28)
	struct FSlateColor SlotColor2; // 0x78(0x28)
	struct FSlateColor SlotColorSelected; // 0xA0(0x28)
	struct FSlateColor SlotColorDisabled; // 0xC8(0x28)
	struct FSlateColor SlotColorSelectedDisabled; // 0xF0(0x28)
	struct FSlateColor SlotTextColorDisabled; // 0x118(0x28)
	float SlotHeight; // 0x140(0x4)
	int32_t MinimumEntryNumber; // 0x144(0x4)
	struct USoundWave* HoverSound; // 0x148(0x8)
	bool UseHoverSoundWithMouse; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
};

// Object: ScriptStruct GTABase.TabbedMenuStyle
// Size: 0x70 (Inherited: 0x0)
struct FTabbedMenuStyle
{
	float VerticalTabPercentage; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UUserWidget* TabTypeClass; // 0x8(0x8)
	struct UUserWidget* TabConfirmationDialog; // 0x10(0x8)
	struct TArray<struct FText> TabNames; // 0x18(0x10)
	struct TArray<struct UUserWidget*> TabContent; // 0x28(0x10)
	struct TArray<struct FString> CustomFunctionStrings; // 0x38(0x10)
	struct FMargin SelectedTabMargin; // 0x48(0x10)
	struct FMargin RegularTabMargin; // 0x58(0x10)
	int32_t StartingTab; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct GTABase.ConfirmationMenuStyle
// Size: 0xF0 (Inherited: 0x0)
struct FConfirmationMenuStyle
{
	struct FSlateColor ConfirmButtonColor; // 0x0(0x28)
	struct FSlateColor ConfirmTextColor; // 0x28(0x28)
	struct FSlateColor CancelButtonColor; // 0x50(0x28)
	struct FSlateColor CancelTextColor; // 0x78(0x28)
	struct FSlateColor ConfirmMessageTextColor; // 0xA0(0x28)
	struct FSlateColor ConfirmBGColor; // 0xC8(0x28)
};

// Object: ScriptStruct GTABase.BackgroundImage
// Size: 0x110 (Inherited: 0x0)
struct FBackgroundImage
{
	struct FSlateBrush BackgroundImages; // 0x0(0x88)
	struct FSlateBrush ForegroundImages; // 0x88(0x88)
};

// Object: ScriptStruct GTABase.GTAUpgradeMaterial
// Size: 0x28 (Inherited: 0x0)
struct FGTAUpgradeMaterial
{
	struct TArray<struct UMaterialInstanceDynamic*> DynMatRefs; // 0x0(0x10)
	int32_t UpgradeID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct UMeshComponent* MeshComponentRef; // 0x18(0x8)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct GTABase.DamageInfoContainer
// Size: 0x20 (Inherited: 0x0)
struct FDamageInfoContainer
{
	struct TArray<int32_t> NumTrianglesOk; // 0x0(0x10)
	struct TArray<int32_t> NumTriangles; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.WindowSectionInfoContainer
// Size: 0x10 (Inherited: 0x0)
struct FWindowSectionInfoContainer
{
	struct TArray<struct FWindowSectionInfo> Sections; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.WindowSectionInfo
// Size: 0x20 (Inherited: 0x0)
struct FWindowSectionInfo
{
	int32_t SectionIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FVector4 SectionSphere; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.DynamicMaterials
// Size: 0x10 (Inherited: 0x0)
struct FDynamicMaterials
{
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.GTAColorEntry
// Size: 0x34 (Inherited: 0x0)
struct FGTAColorEntry
{
	struct FName Name; // 0x0(0x8)
	int32_t ColorIndex; // 0x8(0x4)
	struct FName VehicleOverrideName; // 0xC(0x8)
	struct FLinearColor Color; // 0x14(0x10)
	struct FLinearColor AltColor; // 0x24(0x10)
};

// Object: ScriptStruct GTABase.WindowLightCollection
// Size: 0x20 (Inherited: 0x0)
struct FWindowLightCollection
{
	int32_t Channel; // 0x0(0x4)
	int32_t NumWindows; // 0x4(0x4)
	int32_t SizeOnDisk; // 0x8(0x4)
	uint8_t Pad_0xC[0x14]; // 0xC(0x14)
};

// Object: ScriptStruct GTABase.WindowLightCollectionParameters
// Size: 0x58 (Inherited: 0x0)
struct FWindowLightCollectionParameters
{
	struct UTexture2D* EmissiveBase; // 0x0(0x8)
	struct FLinearColor BaseColorMult; // 0x8(0x10)
	struct UTexture2D* EmissiveMask; // 0x18(0x8)
	struct UTexture2D* WindowMask; // 0x20(0x8)
	struct FVector2D WindowUVOffset; // 0x28(0x8)
	struct FVector2D WindowUVMult; // 0x30(0x8)
	struct FVector WindowComponentMult; // 0x38(0xC)
	float WindowMinMask; // 0x44(0x4)
	struct FVector2D BaseUVScale; // 0x48(0x8)
	float EnableRandomization; // 0x50(0x4)
	bool bUseInverseAlphaModulation; // 0x54(0x1)
	bool bUseVertexColor; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
};

// Object: ScriptStruct GTABase.DynamicWindowLightInfo
// Size: 0x10 (Inherited: 0x0)
struct FDynamicWindowLightInfo
{
	struct ULightComponent* Component; // 0x0(0x8)
	uint32_t LastRenderedFrame; // 0x8(0x4)
	float OriginalIntensity; // 0xC(0x4)
};

// Object: ScriptStruct GTABase.WindowLight
// Size: 0x18 (Inherited: 0x0)
struct FWindowLight
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GTABase.RibbonMaterialMap
// Size: 0x60 (Inherited: 0x0)
struct FRibbonMaterialMap
{
	struct TSoftObjectPtr<UMaterialInstanceConstant> HeadlightMIC; // 0x0(0x28)
	struct TSoftObjectPtr<UMaterialInstanceConstant> HeadlightEmissiveMIC; // 0x28(0x28)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> ForMeshes; // 0x50(0x10)
};

// Object: ScriptStruct GTABase.GTAInteriorArea
// Size: 0x10 (Inherited: 0x0)
struct FGTAInteriorArea
{
	struct TArray<struct FGTAInteriorMap> maps; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.GTAInteriorMap
// Size: 0x30 (Inherited: 0x0)
struct FGTAInteriorMap
{
	struct FName MapName; // 0x0(0x8)
	struct FBox Bounds; // 0x8(0x1C)
	bool bHasLightSetup; // 0x24(0x1)
	bool bMapLoaded; // 0x25(0x1)
	uint8_t Pad_0x26[0xA]; // 0x26(0xA)
};

// Object: ScriptStruct GTABase.GTAMapSection
// Size: 0xB0 (Inherited: 0x0)
struct FGTAMapSection
{
	struct FName SectionName; // 0x0(0x8)
	struct UStaticMesh* MeshProxy; // 0x8(0x8)
	struct UStaticMesh* DistantHLODProxy; // 0x10(0x8)
	bool bIncludeQuadrantStreetlights; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FSuperBounds Bounds; // 0x20(0x30)
	struct FRuntimeProxyComponent SectionProxyComponent; // 0x50(0x28)
	struct FRuntimeProxyComponent SectionHLODComponent; // 0x78(0x28)
	struct TArray<struct FGTAQuadrant> Quadrants; // 0xA0(0x10)
};

// Object: ScriptStruct GTABase.GTAQuadrant
// Size: 0x1A8 (Inherited: 0x0)
struct FGTAQuadrant
{
	struct FName QuadrantName; // 0x0(0x8)
	struct FName HLODMap; // 0x8(0x8)
	struct TSoftObjectPtr<UStaticMesh> MeshProxy; // 0x10(0x28)
	struct TSoftObjectPtr<UStaticMesh> HLODProxy; // 0x38(0x28)
	struct TSoftObjectPtr<UStaticMesh> StreetDecalProxy; // 0x60(0x28)
	struct TSoftObjectPtr<UStaticMesh> HeadlightRibbonProxy; // 0x88(0x28)
	struct TArray<struct FGTASubMap> maps; // 0xB0(0x10)
	bool bNeverLoadMaps; // 0xC0(0x1)
	bool bContainsCinematicForceLoadMap; // 0xC1(0x1)
	bool bMarkForReadahead; // 0xC2(0x1)
	uint8_t Pad_0xC3[0x5]; // 0xC3(0x5)
	struct FSuperBounds Bounds; // 0xC8(0x30)
	struct FRuntimeProxyComponent QuadrantProxyComponent; // 0xF8(0x28)
	struct FRuntimeProxyComponent QuadrantHLODComponent; // 0x120(0x28)
	struct FRuntimeProxyComponent QuadrantStreetlightComponent; // 0x148(0x28)
	struct FRuntimeProxyComponent QuadrantHeadlightRibbonComponent; // 0x170(0x28)
	uint8_t Pad_0x198[0x10]; // 0x198(0x10)
};

// Object: ScriptStruct GTABase.RuntimeProxyComponent
// Size: 0x28 (Inherited: 0x0)
struct FRuntimeProxyComponent
{
	struct UStaticMeshComponent* Component; // 0x0(0x8)
	float Alpha; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct GTABase.SuperBounds
// Size: 0x30 (Inherited: 0x0)
struct FSuperBounds
{
	struct FBox FullBounds; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FBox> DiscreteBounds; // 0x20(0x10)
};

// Object: ScriptStruct GTABase.GTASubMap
// Size: 0x110 (Inherited: 0x0)
struct FGTASubMap
{
	struct FName MapName; // 0x0(0x8)
	struct TSoftObjectPtr<UStaticMesh> MeshProxy; // 0x8(0x28)
	struct TSoftObjectPtr<UStaticMesh> StreetDecalProxy; // 0x30(0x28)
	struct FSuperBounds Bounds; // 0x58(0x30)
	struct FRuntimeProxyComponent MapProxyComponent; // 0x88(0x28)
	struct FRuntimeProxyComponent MapStreetlightComponent; // 0xB0(0x28)
	struct UStreetDecalComponent* MapStreetDecalsComponent; // 0xD8(0x8)
	bool bSubMapLoading; // 0xE0(0x1)
	bool bSubMapLoaded; // 0xE1(0x1)
	uint8_t Pad_0xE2[0x6]; // 0xE2(0x6)
	double LastLoadRequest; // 0xE8(0x8)
	double LastPreloadRequest; // 0xF0(0x8)
	double LastUnloadRequest; // 0xF8(0x8)
	float StreamingDistanceMultiplier; // 0x100(0x4)
	uint8_t Pad_0x104[0xC]; // 0x104(0xC)
};

// Object: ScriptStruct GTABase.MappingStruct
// Size: 0x38 (Inherited: 0x0)
struct FMappingStruct
{
	struct FString Tag; // 0x0(0x10)
	struct FString helpTag; // 0x10(0x10)
	uint8_t mapping; // 0x20(0x1)
	uint8_t Pad_0x21[0x17]; // 0x21(0x17)
};

// Object: ScriptStruct GTABase.UE4CachedMap
// Size: 0x28 (Inherited: 0x0)
struct FUE4CachedMap
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
	struct TArray<struct FUE4CachedMapAsset> Cache; // 0x18(0x10)
};

// Object: ScriptStruct GTABase.UE4CachedMapAsset
// Size: 0x90 (Inherited: 0x0)
struct FUE4CachedMapAsset
{
	struct FVector position; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FVector Scale; // 0x18(0xC)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
	struct FTransform NonInstancedTransform; // 0x30(0x30)
	int32_t modelIndex; // 0x60(0x4)
	uint8_t Pad_0x64[0x2C]; // 0x64(0x2C)
};

// Object: ScriptStruct GTABase.IMGFileEntry
// Size: 0x20 (Inherited: 0x0)
struct FIMGFileEntry
{
	struct FString Filename; // 0x0(0x10)
	struct TArray<uint8_t> contents; // 0x10(0x10)
};

// Object: ScriptStruct GTABase.BevelVertInfluences
// Size: 0x28 (Inherited: 0x0)
struct FBevelVertInfluences
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct GTABase.StreetDecalData
// Size: 0x10 (Inherited: 0x0)
struct FStreetDecalData
{
	struct TArray<struct FVector> Points; // 0x0(0x10)
};

// Object: ScriptStruct GTABase.StreetLightLowQualitySetting
// Size: 0x18 (Inherited: 0x0)
struct FStreetLightLowQualitySetting
{
	float ZOffset; // 0x0(0x4)
	float NewRadius; // 0x4(0x4)
	float NewIntensity; // 0x8(0x4)
	float NewInnerConeAngle; // 0xC(0x4)
	float NewOuterConeAngle; // 0x10(0x4)
	float NewExponent; // 0x14(0x4)
};

// Object: ScriptStruct GTABase.UplightGenSettings
// Size: 0x48 (Inherited: 0x0)
struct FUplightGenSettings
{
	float attenuation_threshold; // 0x0(0x4)
	float angle_power; // 0x4(0x4)
	float absorption; // 0x8(0x4)
	float point_scale; // 0xC(0x4)
	float spot_scale; // 0x10(0x4)
	float rect_scale; // 0x14(0x4)
	float window_scale; // 0x18(0x4)
	float Intensity; // 0x1C(0x4)
	struct FLinearColor additive; // 0x20(0x10)
	float origin_power; // 0x30(0x4)
	float color_power; // 0x34(0x4)
	float ao_percent_applied; // 0x38(0x4)
	float scattering_amount; // 0x3C(0x4)
	float upscattering; // 0x40(0x4)
	float directionality; // 0x44(0x4)
};

// Object: ScriptStruct GTABase.AOGenSettings
// Size: 0x1C (Inherited: 0x0)
struct FAOGenSettings
{
	float ray_distance_degrees; // 0x0(0x4)
	float face_distance; // 0x4(0x4)
	float power; // 0x8(0x4)
	float weld_distance; // 0xC(0x4)
	float projection_distance; // 0x10(0x4)
	float penetration_check_distance; // 0x14(0x4)
	float extrusion_step_distance; // 0x18(0x4)
};

// Package: ProceduralMeshComponent
// Structs: 2

// Object: ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40 (Inherited: 0x0)
struct FProcMeshSection
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	struct FBox SectionLocalBox; // 0x20(0x1C)
	bool bEnableCollision; // 0x3C(0x1)
	bool bSectionVisible; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10 (Inherited: 0x0)
struct FProcMeshTangent
{
	struct FVector TangentX; // 0x0(0xC)
	bool bFlipTangentY; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Package: UMG
// Structs: 22

// Object: ScriptStruct UMG.EventReply
// Size: 0xB8 (Inherited: 0x0)
struct FEventReply
{
	uint8_t Pad_0x0[0xB8]; // 0x0(0xB8)
};

// Object: ScriptStruct UMG.WidgetTransform
// Size: 0x1C (Inherited: 0x0)
struct FWidgetTransform
{
	struct FVector2D Translation; // 0x0(0x8)
	struct FVector2D Scale; // 0x8(0x8)
	struct FVector2D Shear; // 0x10(0x8)
	float Angle; // 0x18(0x4)
};

// Object: ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x0)
struct FPaintContext
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct UMG.ShapedTextOptions
// Size: 0x3 (Inherited: 0x0)
struct FShapedTextOptions
{
	uint8_t bOverride_TextShapingMethod : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_TextFlowDirection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	enum class ETextShapingMethod TextShapingMethod; // 0x1(0x1)
	enum class ETextFlowDirection TextFlowDirection; // 0x2(0x1)
};

// Object: ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x0)
struct FAnchorData
{
	struct FMargin Offsets; // 0x0(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x8)
};

// Object: ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath
{
};

// Object: ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieScene2DTransformMask
{
	uint32_t Mask; // 0x0(0x4)
};

// Object: ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel TopCurve; // 0x30(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xD0(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x170(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x210(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x7]; // 0x2B1(0x7)
};

// Object: ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x88 (Inherited: 0x78)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FName> BrushPropertyNamePath; // 0x78(0x10)
};

// Object: ScriptStruct UMG.RadialBoxSettings
// Size: 0xC (Inherited: 0x0)
struct FRadialBoxSettings
{
	bool bDistributeItemsEvenly; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float AngleBetweenItems; // 0x4(0x4)
	float StartingAngle; // 0x8(0x4)
};

// Object: ScriptStruct UMG.RichTextStyleRow
// Size: 0x278 (Inherited: 0x8)
struct FRichTextStyleRow : FTableRowBase
{
	struct FTextBlockStyle TextStyle; // 0x8(0x270)
};

// Object: ScriptStruct UMG.RichImageRow
// Size: 0x90 (Inherited: 0x8)
struct FRichImageRow : FTableRowBase
{
	struct FSlateBrush Brush; // 0x8(0x88)
};

// Object: ScriptStruct UMG.SlateMeshVertex
// Size: 0x3C (Inherited: 0x0)
struct FSlateMeshVertex
{
	struct FVector2D position; // 0x0(0x8)
	struct FColor Color; // 0x8(0x4)
	struct FVector2D UV0; // 0xC(0x8)
	struct FVector2D UV1; // 0x14(0x8)
	struct FVector2D UV2; // 0x1C(0x8)
	struct FVector2D UV3; // 0x24(0x8)
	struct FVector2D UV4; // 0x2C(0x8)
	struct FVector2D UV5; // 0x34(0x8)
};

// Object: ScriptStruct UMG.SlateChildSize
// Size: 0x8 (Inherited: 0x0)
struct FSlateChildSize
{
	float Value; // 0x0(0x4)
	uint8_t SizeRule; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x0)
struct FNamedSlotBinding
{
	struct FName Name; // 0x0(0x8)
	struct UWidget* Content; // 0x8(0x8)
};

// Object: ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x0)
struct FAnimationEventBinding
{
	struct UWidgetAnimation* Animation; // 0x0(0x8)
	struct FDelegate Delegate; // 0x8(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName UserTag; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x0)
struct FUserWidgetPool
{
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	uint8_t Pad_0x20[0x60]; // 0x20(0x60)
};

// Object: ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x0)
struct FWidgetAnimationBinding
{
	struct FName WidgetName; // 0x0(0x8)
	struct FName SlotWidgetName; // 0x8(0x8)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1C (Inherited: 0x0)
struct FBlueprintWidgetAnimationDelegateBinding
{
	enum class EWidgetAnimationEvent Action; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName AnimationToBind; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
	struct FName UserTag; // 0x14(0x8)
};

// Object: ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x0)
struct FDelegateRuntimeBinding
{
	struct FString ObjectName; // 0x0(0x10)
	struct FName PropertyName; // 0x10(0x8)
	struct FName FunctionName; // 0x18(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xC8 (Inherited: 0xB8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
};

// Object: ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x0)
struct FWidgetNavigationData
{
	enum class EUINavigationRule Rule; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName WidgetToFocus; // 0x4(0x8)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0xC(0x8)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

// Package: OnlineSubsystem
// Structs: 5

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// Size: 0xA8 (Inherited: 0x0)
struct FInAppPurchaseProductInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
};

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseRestoreInfo
{
	struct FString Identifier; // 0x0(0x10)
	struct FString ReceiptData; // 0x10(0x10)
	struct FString TransactionIdentifier; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x18 (Inherited: 0x0)
struct FNamedInterfaceDef
{
	struct FName InterfaceName; // 0x0(0x8)
	struct FString InterfaceClassName; // 0x8(0x10)
};

// Object: ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x10 (Inherited: 0x0)
struct FNamedInterface
{
	struct FName InterfaceName; // 0x0(0x8)
	struct UObject* InterfaceObject; // 0x8(0x8)
};

// Object: ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// Size: 0x18 (Inherited: 0x0)
struct FInAppPurchaseProductRequest
{
	struct FString ProductIdentifier; // 0x0(0x10)
	bool bIsConsumable; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Package: Text3D
// Structs: 2

// Object: ScriptStruct Text3D.CachedFontData
// Size: 0xE8 (Inherited: 0x0)
struct FCachedFontData
{
	struct UFont* Font; // 0x0(0x8)
	struct TMap<uint32_t, struct FCachedFontMeshes> Meshes; // 0x8(0x50)
	uint8_t Pad_0x58[0x90]; // 0x58(0x90)
};

// Object: ScriptStruct Text3D.CachedFontMeshes
// Size: 0x60 (Inherited: 0x0)
struct FCachedFontMeshes
{
	struct TMap<uint32_t, struct UStaticMesh*> Glyphs; // 0x0(0x50)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Package: HairStrandsCore
// Structs: 34

// Object: ScriptStruct HairStrandsCore.HairGroupInfo
// Size: 0x14 (Inherited: 0x0)
struct FHairGroupInfo
{
	int32_t GroupId; // 0x0(0x4)
	int32_t NumCurves; // 0x4(0x4)
	int32_t NumGuides; // 0x8(0x4)
	int32_t NumCurveVertices; // 0xC(0x4)
	int32_t NumGuideVertices; // 0x10(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// Size: 0x18 (Inherited: 0x14)
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{
	bool bIsVisible; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsMaterial
// Size: 0x10 (Inherited: 0x0)
struct FHairGroupsMaterial
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName SlotName; // 0x8(0x8)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// Size: 0xC0 (Inherited: 0x0)
struct FHairGroupsCardsSourceDescription
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	enum class EHairCardsSourceType SourceType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UStaticMesh* ProceduralMesh; // 0x18(0x8)
	struct FString ProceduralMeshKey; // 0x20(0x10)
	struct UStaticMesh* ImportedMesh; // 0x30(0x8)
	struct FHairGroupsProceduralCards ProceduralSettings; // 0x38(0x38)
	struct FHairGroupCardsTextures Textures; // 0x70(0x30)
	int32_t GroupIndex; // 0xA0(0x4)
	int32_t LodIndex; // 0xA4(0x4)
	struct FHairGroupCardsInfo CardsInfo; // 0xA8(0x8)
	struct FString ImportedMeshKey; // 0xB0(0x10)
};

// Object: ScriptStruct HairStrandsCore.HairGroupCardsInfo
// Size: 0x8 (Inherited: 0x0)
struct FHairGroupCardsInfo
{
	int32_t NumCards; // 0x0(0x4)
	int32_t NumCardVertices; // 0x4(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupCardsTextures
// Size: 0x30 (Inherited: 0x0)
struct FHairGroupCardsTextures
{
	struct UTexture2D* DepthTexture; // 0x0(0x8)
	struct UTexture2D* CoverageTexture; // 0x8(0x8)
	struct UTexture2D* TangentTexture; // 0x10(0x8)
	struct UTexture2D* AttributeTexture; // 0x18(0x8)
	struct UTexture2D* AuxilaryDataTexture; // 0x20(0x8)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// Size: 0x38 (Inherited: 0x0)
struct FHairGroupsProceduralCards
{
	struct FHairCardsClusterSettings ClusterSettings; // 0x0(0x8)
	struct FHairCardsGeometrySettings GeometrySettings; // 0x8(0x1C)
	struct FHairCardsTextureSettings TextureSettings; // 0x24(0x10)
	int32_t Version; // 0x34(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairCardsTextureSettings
// Size: 0x10 (Inherited: 0x0)
struct FHairCardsTextureSettings
{
	int32_t AtlasMaxResolution; // 0x0(0x4)
	int32_t PixelPerCentimeters; // 0x4(0x4)
	int32_t LengthTextureCount; // 0x8(0x4)
	int32_t DensityTextureCount; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// Size: 0x1C (Inherited: 0x0)
struct FHairCardsGeometrySettings
{
	enum class EHairCardsGenerationType GenerationType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t CardsCount; // 0x4(0x4)
	enum class EHairCardsClusterType ClusterType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MinSegmentLength; // 0xC(0x4)
	float AngularThreshold; // 0x10(0x4)
	float MinCardsLength; // 0x14(0x4)
	float MaxCardsLength; // 0x18(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairCardsClusterSettings
// Size: 0x8 (Inherited: 0x0)
struct FHairCardsClusterSettings
{
	float ClusterDecimation; // 0x0(0x4)
	enum class EHairCardsClusterType Type; // 0x4(0x1)
	bool bUseGuide; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsLOD
// Size: 0x18 (Inherited: 0x0)
struct FHairGroupsLOD
{
	struct TArray<struct FHairLODSettings> LODs; // 0x0(0x10)
	float ClusterWorldSize; // 0x10(0x4)
	float ClusterScreenSizeScale; // 0x14(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairLODSettings
// Size: 0x18 (Inherited: 0x0)
struct FHairLODSettings
{
	float CurveDecimation; // 0x0(0x4)
	float VertexDecimation; // 0x4(0x4)
	float AngularThreshold; // 0x8(0x4)
	float ScreenSize; // 0xC(0x4)
	float ThicknessScale; // 0x10(0x4)
	bool bVisible; // 0x14(0x1)
	enum class EGroomGeometryType GeometryType; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsInterpolation
// Size: 0x14 (Inherited: 0x0)
struct FHairGroupsInterpolation
{
	struct FHairDecimationSettings DecimationSettings; // 0x0(0x8)
	struct FHairInterpolationSettings InterpolationSettings; // 0x8(0xC)
};

// Object: ScriptStruct HairStrandsCore.HairInterpolationSettings
// Size: 0xC (Inherited: 0x0)
struct FHairInterpolationSettings
{
	bool bOverrideGuides; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HairToGuideDensity; // 0x4(0x4)
	enum class EHairInterpolationQuality InterpolationQuality; // 0x8(0x1)
	enum class EHairInterpolationWeight InterpolationDistance; // 0x9(0x1)
	bool bRandomizeGuide; // 0xA(0x1)
	bool bUseUniqueGuide; // 0xB(0x1)
};

// Object: ScriptStruct HairStrandsCore.HairDecimationSettings
// Size: 0x8 (Inherited: 0x0)
struct FHairDecimationSettings
{
	float CurveDecimation; // 0x0(0x4)
	float VertexDecimation; // 0x4(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// Size: 0x60 (Inherited: 0x0)
struct FHairGroupsMeshesSourceDescription
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct UStaticMesh* ImportedMesh; // 0x10(0x8)
	struct FHairGroupCardsTextures Textures; // 0x18(0x30)
	int32_t GroupIndex; // 0x48(0x4)
	int32_t LodIndex; // 0x4C(0x4)
	struct FString ImportedMeshKey; // 0x50(0x10)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsPhysics
// Size: 0x2C8 (Inherited: 0x0)
struct FHairGroupsPhysics
{
	struct FHairSolverSettings SolverSettings; // 0x0(0x38)
	struct FHairExternalForces ExternalForces; // 0x38(0x1C)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FHairMaterialConstraints MaterialConstraints; // 0x58(0x1D8)
	struct FHairStrandsParameters StrandsParameters; // 0x230(0x98)
};

// Object: ScriptStruct HairStrandsCore.HairStrandsParameters
// Size: 0x98 (Inherited: 0x0)
struct FHairStrandsParameters
{
	enum class EGroomStrandsSize StrandsSize; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float StrandsDensity; // 0x4(0x4)
	float StrandsSmoothing; // 0x8(0x4)
	float StrandsThickness; // 0xC(0x4)
	struct FRuntimeFloatCurve ThicknessScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairMaterialConstraints
// Size: 0x1D8 (Inherited: 0x0)
struct FHairMaterialConstraints
{
	struct FHairBendConstraint BendConstraint; // 0x0(0x98)
	struct FHairStretchConstraint StretchConstraint; // 0x98(0x98)
	struct FHairCollisionConstraint CollisionConstraint; // 0x130(0xA8)
};

// Object: ScriptStruct HairStrandsCore.HairCollisionConstraint
// Size: 0xA8 (Inherited: 0x0)
struct FHairCollisionConstraint
{
	bool SolveCollision; // 0x0(0x1)
	bool ProjectCollision; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float StaticFriction; // 0x4(0x4)
	float KineticFriction; // 0x8(0x4)
	float StrandsViscosity; // 0xC(0x4)
	struct FIntVector GridDimension; // 0x10(0xC)
	float CollisionRadius; // 0x1C(0x4)
	struct FRuntimeFloatCurve RadiusScale; // 0x20(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairStretchConstraint
// Size: 0x98 (Inherited: 0x0)
struct FHairStretchConstraint
{
	bool SolveStretch; // 0x0(0x1)
	bool ProjectStretch; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float StretchDamping; // 0x4(0x4)
	float StretchStiffness; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve StretchScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairBendConstraint
// Size: 0x98 (Inherited: 0x0)
struct FHairBendConstraint
{
	bool SolveBend; // 0x0(0x1)
	bool ProjectBend; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float BendDamping; // 0x4(0x4)
	float BendStiffness; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FRuntimeFloatCurve BendScale; // 0x10(0x88)
};

// Object: ScriptStruct HairStrandsCore.HairExternalForces
// Size: 0x1C (Inherited: 0x0)
struct FHairExternalForces
{
	struct FVector GravityVector; // 0x0(0xC)
	float AirDrag; // 0xC(0x4)
	struct FVector AirVelocity; // 0x10(0xC)
};

// Object: ScriptStruct HairStrandsCore.HairSolverSettings
// Size: 0x38 (Inherited: 0x0)
struct FHairSolverSettings
{
	bool EnableSimulation; // 0x0(0x1)
	enum class EGroomNiagaraSolvers NiagaraSolver; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x8(0x28)
	int32_t SubSteps; // 0x30(0x4)
	int32_t IterationCount; // 0x34(0x4)
};

// Object: ScriptStruct HairStrandsCore.HairGroupsRendering
// Size: 0x30 (Inherited: 0x0)
struct FHairGroupsRendering
{
	struct FName MaterialSlotName; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
	struct FHairGeometrySettings GeometrySettings; // 0x10(0x10)
	struct FHairShadowSettings ShadowSettings; // 0x20(0xC)
	struct FHairAdvancedRenderingSettings AdvancedSettings; // 0x2C(0x2)
	uint8_t Pad_0x2E[0x2]; // 0x2E(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// Size: 0x2 (Inherited: 0x0)
struct FHairAdvancedRenderingSettings
{
	bool bUseStableRasterization; // 0x0(0x1)
	bool bScatterSceneLighting; // 0x1(0x1)
};

// Object: ScriptStruct HairStrandsCore.HairShadowSettings
// Size: 0xC (Inherited: 0x0)
struct FHairShadowSettings
{
	float HairShadowDensity; // 0x0(0x4)
	float HairRaytracingRadiusScale; // 0x4(0x4)
	bool bUseHairRaytracingGeometry; // 0x8(0x1)
	bool bVoxelize; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct HairStrandsCore.HairGeometrySettings
// Size: 0x10 (Inherited: 0x0)
struct FHairGeometrySettings
{
	float HairWidth; // 0x0(0x4)
	float HairRootScale; // 0x4(0x4)
	float HairTipScale; // 0x8(0x4)
	float HairClipScale; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// Size: 0x10 (Inherited: 0x0)
struct FGoomBindingGroupInfo
{
	int32_t RenRootCount; // 0x0(0x4)
	int32_t RenLODCount; // 0x4(0x4)
	int32_t SimRootCount; // 0x8(0x4)
	int32_t SimLODCount; // 0xC(0x4)
};

// Object: ScriptStruct HairStrandsCore.FollicleMaskOptions
// Size: 0x10 (Inherited: 0x0)
struct FFollicleMaskOptions
{
	struct UGroomAsset* Groom; // 0x0(0x8)
	enum class EFollicleMaskChannel Channel; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct HairStrandsCore.HairGroupDesc
// Size: 0x4C (Inherited: 0x0)
struct FHairGroupDesc
{
	int32_t HairCount; // 0x0(0x4)
	int32_t GuideCount; // 0x4(0x4)
	float HairLength; // 0x8(0x4)
	float HairWidth; // 0xC(0x4)
	bool HairWidth_Override; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float HairRootScale; // 0x14(0x4)
	bool HairRootScale_Override; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	float HairTipScale; // 0x1C(0x4)
	bool HairTipScale_Override; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float HairClipLength; // 0x24(0x4)
	bool HairClipLength_Override; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float HairShadowDensity; // 0x2C(0x4)
	bool HairShadowDensity_Override; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float HairRaytracingRadiusScale; // 0x34(0x4)
	bool HairRaytracingRadiusScale_Override; // 0x38(0x1)
	bool bUseHairRaytracingGeometry; // 0x39(0x1)
	bool bUseHairRaytracingGeometry_Override; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x1]; // 0x3B(0x1)
	float LODBias; // 0x3C(0x4)
	bool bUseStableRasterization; // 0x40(0x1)
	bool bUseStableRasterization_Override; // 0x41(0x1)
	bool bScatterSceneLighting; // 0x42(0x1)
	bool bScatterSceneLighting_Override; // 0x43(0x1)
	bool bSupportVoxelization; // 0x44(0x1)
	bool bSupportVoxelization_Override; // 0x45(0x1)
	uint8_t Pad_0x46[0x2]; // 0x46(0x2)
	int32_t LODForcedIndex; // 0x48(0x4)
};

// Object: ScriptStruct HairStrandsCore.GroomHairGroupPreview
// Size: 0x20 (Inherited: 0x0)
struct FGroomHairGroupPreview
{
	int32_t GroupId; // 0x0(0x4)
	int32_t CurveCount; // 0x4(0x4)
	int32_t GuideCount; // 0x8(0x4)
	struct FHairGroupsInterpolation InterpolationSettings; // 0xC(0x14)
};

// Object: ScriptStruct HairStrandsCore.GroomBuildSettings
// Size: 0xC (Inherited: 0x0)
struct FGroomBuildSettings
{
	bool bOverrideGuides; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float HairToGuideDensity; // 0x4(0x4)
	enum class EGroomInterpolationQuality InterpolationQuality; // 0x8(0x1)
	enum class EGroomInterpolationWeight InterpolationDistance; // 0x9(0x1)
	bool bRandomizeGuide; // 0xA(0x1)
	bool bUseUniqueGuide; // 0xB(0x1)
};

// Object: ScriptStruct HairStrandsCore.GroomConversionSettings
// Size: 0x18 (Inherited: 0x0)
struct FGroomConversionSettings
{
	struct FVector Rotation; // 0x0(0xC)
	struct FVector Scale; // 0xC(0xC)
};

// Package: NiagaraCore
// Structs: 1

// Object: ScriptStruct NiagaraCore.NiagaraCompileHash
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraCompileHash
{
	struct TArray<uint8_t> DataHash; // 0x0(0x10)
};

// Package: Niagara
// Structs: 102

// Object: ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct FNiagaraVariable Parameter; // 0x18(0x20)
};

// Object: ScriptStruct Niagara.NiagaraVariableBase
// Size: 0xC (Inherited: 0x0)
struct FNiagaraVariableBase
{
	struct FName Name; // 0x0(0x8)
	struct FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraTypeDefinitionHandle
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraTypeDefinitionHandle
{
	int32_t RegisteredTypeIndex; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraVariable
// Size: 0x20 (Inherited: 0xC)
struct FNiagaraVariable : FNiagaraVariableBase
{
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<uint8_t> VarData; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size: 0xC8 (Inherited: 0x38)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel BoolChannel; // 0x38(0x90)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size: 0x2B8 (Inherited: 0x38)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel RedChannel; // 0x38(0xA0)
	struct FMovieSceneFloatChannel GreenChannel; // 0xD8(0xA0)
	struct FMovieSceneFloatChannel BlueChannel; // 0x178(0xA0)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x218(0xA0)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size: 0xD8 (Inherited: 0x38)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel FloatChannel; // 0x38(0xA0)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size: 0xC8 (Inherited: 0x38)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x38(0x90)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28 (Inherited: 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{
	struct FFrameNumber SpawnSectionStartFrame; // 0xC(0x4)
	struct FFrameNumber SpawnSectionEndFrame; // 0x10(0x4)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x14(0x4)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x18(0x4)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x1C(0x4)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x20(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size: 0x2C0 (Inherited: 0x38)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel VectorChannels[0x4]; // 0x38(0x280)
	int32_t ChannelsUsed; // 0x2B8(0x4)
	uint8_t Pad_0x2BC[0x4]; // 0x2BC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraRandInfo
// Size: 0xC (Inherited: 0x0)
struct FNiagaraRandInfo
{
	int32_t Seed1; // 0x0(0x4)
	int32_t Seed2; // 0x4(0x4)
	int32_t Seed3; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraUserParameterBinding
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable Parameter; // 0x0(0x20)
};

// Object: ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraScriptVariableBinding
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable BoundVariable; // 0x0(0x20)
};

// Object: ScriptStruct Niagara.NiagaraMaterialAttributeBinding
// Size: 0x2C (Inherited: 0x0)
struct FNiagaraMaterialAttributeBinding
{
	struct FName MaterialParameterName; // 0x0(0x8)
	struct FNiagaraVariableBase NiagaraVariable; // 0x8(0xC)
	struct FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14(0xC)
	struct FNiagaraVariableBase NiagaraChildVariable; // 0x20(0xC)
};

// Object: ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size: 0x58 (Inherited: 0x0)
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariableBase ParamMapVariable; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraVariable DataSetVariable; // 0x10(0x20)
	struct FNiagaraVariable RootVariable; // 0x30(0x20)
	uint8_t BindingSourceMode; // 0x50(0x1)
	uint8_t bBindingExistsOnSource : 1; // 0x51(0x1), Mask(0x1)
	uint8_t bIsCachedParticleValue : 1; // 0x51(0x1), Mask(0x2)
	uint8_t BitPad_0x51_2 : 6; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
};

// Object: ScriptStruct Niagara.NiagaraVariableInfo
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable Variable; // 0x0(0x20)
	struct FText Definition; // 0x20(0x18)
	struct UNiagaraDataInterface* DataInterface; // 0x38(0x8)
};

// Object: ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraSystemUpdateContext
{
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size: 0x38 (Inherited: 0x0)
struct FVMExternalFunctionBindingInfo
{
	struct FName Name; // 0x0(0x8)
	struct FName OwnerName; // 0x8(0x8)
	struct TArray<bool> InputParamLocations; // 0x10(0x10)
	int32_t NumOutputs; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28(0x10)
};

// Object: ScriptStruct Niagara.VMFunctionSpecifier
// Size: 0x10 (Inherited: 0x0)
struct FVMFunctionSpecifier
{
	struct FName Key; // 0x0(0x8)
	struct FName Value; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraStatScope
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraStatScope
{
	struct FName FullName; // 0x0(0x8)
	struct FName FriendlyName; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName Name; // 0x0(0x8)
	int32_t UserPtrIdx; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraTypeDefinition Type; // 0x10(0x10)
	struct FName RegisteredParameterMapRead; // 0x20(0x8)
	struct FName RegisteredParameterMapWrite; // 0x28(0x8)
	bool bIsPlaceholder; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct Niagara.NiagaraTypeDefinition
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraTypeDefinition
{
	struct UObject* ClassStructOrEnum; // 0x0(0x8)
	uint16_t UnderlyingType; // 0x8(0x2)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraScriptDataInterfaceInfo
{
	struct UNiagaraDataInterface* DataInterface; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	int32_t UserPtrIdx; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FNiagaraTypeDefinition Type; // 0x18(0x10)
	struct FName RegisteredParameterMapRead; // 0x28(0x8)
	struct FName RegisteredParameterMapWrite; // 0x30(0x8)
};

// Object: ScriptStruct Niagara.NiagaraFunctionSignature
// Size: 0x90 (Inherited: 0x0)
struct FNiagaraFunctionSignature
{
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x8(0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18(0x10)
	struct FName OwnerName; // 0x28(0x8)
	uint8_t bRequiresContext : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bRequiresExecPin : 1; // 0x30(0x1), Mask(0x2)
	uint8_t bMemberFunction : 1; // 0x30(0x1), Mask(0x4)
	uint8_t bExperimental : 1; // 0x30(0x1), Mask(0x8)
	uint8_t bSupportsCPU : 1; // 0x30(0x1), Mask(0x10)
	uint8_t bSupportsGPU : 1; // 0x30(0x1), Mask(0x20)
	uint8_t bWriteFunction : 1; // 0x30(0x1), Mask(0x40)
	uint8_t bSoftDeprecatedFunction : 1; // 0x30(0x1), Mask(0x80)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ModuleUsageBitmask; // 0x34(0x4)
	int32_t ContextStageMinIndex; // 0x38(0x4)
	int32_t ContextStageMaxIndex; // 0x3C(0x4)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x40(0x50)
};

// Object: ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraScriptDataUsageInfo
{
	bool bReadsAttributeData; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraDataSetProperties
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID ID; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FNiagaraVariable> Variables; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.NiagaraDataSetID
// Size: 0xC (Inherited: 0x0)
struct FNiagaraDataSetID
{
	struct FName Name; // 0x0(0x8)
	enum class ENiagaraDataSetType Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Niagara.NiagaraMaterialOverride
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraMaterialOverride
{
	struct UMaterialInterface* Material; // 0x0(0x8)
	uint32_t MaterialSubIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UNiagaraRendererProperties* EmitterRendererProperty; // 0x10(0x8)
};

// Object: ScriptStruct Niagara.NCPool
// Size: 0x38 (Inherited: 0x0)
struct FNCPool
{
	struct TArray<struct FNCPoolElement> FreeElements; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Manual; // 0x20(0x10)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct Niagara.NCPoolElement
// Size: 0x10 (Inherited: 0x0)
struct FNCPoolElement
{
	struct UNiagaraComponent* Component; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct Niagara.NiagaraComponentPropertyBinding
// Size: 0xA0 (Inherited: 0x0)
struct FNiagaraComponentPropertyBinding
{
	struct FNiagaraVariableAttributeBinding AttributeBinding; // 0x0(0x58)
	struct FName PropertyName; // 0x58(0x8)
	struct FNiagaraTypeDefinition PropertyType; // 0x60(0x10)
	struct FName MetadataSetterName; // 0x70(0x8)
	struct FNiagaraVariable WritableValue; // 0x78(0x20)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)
};

// Object: ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraEmitterNameSettingsRef
{
	struct FName SystemName; // 0x0(0x8)
	struct FString EmitterName; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.BasicParticleData
// Size: 0x1C (Inherited: 0x0)
struct FBasicParticleData
{
	struct FVector position; // 0x0(0xC)
	float Size; // 0xC(0x4)
	struct FVector Velocity; // 0x10(0xC)
};

// Object: ScriptStruct Niagara.MeshTriCoordinate
// Size: 0x10 (Inherited: 0x0)
struct FMeshTriCoordinate
{
	int32_t Tri; // 0x0(0x4)
	struct FVector BaryCoord; // 0x4(0xC)
};

// Object: ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size: 0x10 (Inherited: 0x0)
struct FNDIStaticMeshSectionFilter
{
	struct TArray<int32_t> AllowedMaterialSlots; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraDataSetCompiledData
{
	struct TArray<struct FNiagaraVariable> Variables; // 0x0(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10(0x10)
	struct FNiagaraDataSetID ID; // 0x20(0xC)
	uint32_t TotalFloatComponents; // 0x2C(0x4)
	uint32_t TotalInt32Components; // 0x30(0x4)
	uint32_t TotalHalfComponents; // 0x34(0x4)
	uint8_t bRequiresPersistentIDs : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	enum class ENiagaraSimTarget SimTarget; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size: 0x70 (Inherited: 0x0)
struct FNiagaraVariableLayoutInfo
{
	uint32_t FloatComponentStart; // 0x0(0x4)
	uint32_t Int32ComponentStart; // 0x4(0x4)
	uint32_t HalfComponentStart; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x10(0x60)
};

// Object: ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size: 0x60 (Inherited: 0x0)
struct FNiagaraTypeLayoutInfo
{
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30(0x10)
	struct TArray<uint32_t> HalfComponentByteOffsets; // 0x40(0x10)
	struct TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50(0x10)
};

// Object: ScriptStruct Niagara.NiagaraGraphViewSettings
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraGraphViewSettings
{
	struct FVector2D Location; // 0x0(0x8)
	float Zoom; // 0x8(0x4)
	bool bIsValid; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraEmitterScalabilityOverrides
{
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size: 0x38 (Inherited: 0x0)
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms; // 0x0(0x30)
	uint8_t bScaleSpawnCount : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float SpawnCountScale; // 0x34(0x4)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSet
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraPlatformSet
{
	int32_t QualityLevelMask; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8(0x10)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraPlatformSetCVarCondition
{
	struct FName CVarName; // 0x0(0x8)
	bool Value; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t MinInt; // 0xC(0x4)
	int32_t MaxInt; // 0x10(0x4)
	float MinFloat; // 0x14(0x4)
	float MaxFloat; // 0x18(0x4)
	uint8_t bUseMinInt : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t bUseMaxInt : 1; // 0x1C(0x1), Mask(0x2)
	uint8_t bUseMinFloat : 1; // 0x1C(0x1), Mask(0x4)
	uint8_t bUseMaxFloat : 1; // 0x1C(0x1), Mask(0x8)
	uint8_t BitPad_0x1C_4 : 4; // 0x1C(0x1)
	uint8_t Pad_0x1D[0xB]; // 0x1D(0xB)
};

// Object: ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraDeviceProfileStateEntry
{
	struct FName ProfileName; // 0x0(0x8)
	uint32_t QualityLevelMask; // 0x8(0x4)
	uint32_t SetQualityLevelMask; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size: 0x40 (Inherited: 0x38)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{
	uint8_t bOverrideSpawnCountScale : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraEmitterScalabilitySettingsArray
{
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSystemScalabilityOverrides
{
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet Platforms; // 0x0(0x30)
	uint8_t bCullByDistance : 1; // 0x30(0x1), Mask(0x1)
	uint8_t bCullMaxInstanceCount : 1; // 0x30(0x1), Mask(0x2)
	uint8_t bCullPerSystemMaxInstanceCount : 1; // 0x30(0x1), Mask(0x4)
	uint8_t bCullByMaxTimeWithoutRender : 1; // 0x30(0x1), Mask(0x8)
	uint8_t BitPad_0x30_4 : 4; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float MaxDistance; // 0x34(0x4)
	int32_t MaxInstances; // 0x38(0x4)
	int32_t MaxSystemInstances; // 0x3C(0x4)
	float MaxTimeWithoutRender; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size: 0x48 (Inherited: 0x48)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{
	uint8_t bOverrideDistanceSettings : 1; // 0x44(0x1), Mask(0x1)
	uint8_t bOverrideInstanceCountSettings : 1; // 0x44(0x1), Mask(0x2)
	uint8_t bOverridePerSystemInstanceCountSettings : 1; // 0x44(0x1), Mask(0x4)
	uint8_t bOverrideTimeSinceRendererSettings : 1; // 0x44(0x1), Mask(0x8)
};

// Object: ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSystemScalabilitySettingsArray
{
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size: 0x14 (Inherited: 0x0)
struct FNiagaraDetailsLevelScaleOverrides
{
	float Low; // 0x0(0x4)
	float Medium; // 0x4(0x4)
	float High; // 0x8(0x4)
	float Epic; // 0xC(0x4)
	float Cine; // 0x10(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraEmitterScriptProperties
{
	struct UNiagaraScript* Script; // 0x0(0x8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18(0x10)
};

// Object: ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size: 0x50 (Inherited: 0x0)
struct FNiagaraEventGeneratorProperties
{
	int32_t MaxEventsPerFrame; // 0x0(0x4)
	struct FName ID; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10(0x40)
};

// Object: ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraEventReceiverProperties
{
	struct FName Name; // 0x0(0x8)
	struct FName SourceEventGenerator; // 0x8(0x8)
	struct FName SourceEmitter; // 0x10(0x8)
};

// Object: ScriptStruct Niagara.NiagaraEventScriptProperties
// Size: 0x58 (Inherited: 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{
	enum class EScriptExecutionMode ExecutionMode; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	uint32_t SpawnNumber; // 0x2C(0x4)
	uint32_t MaxEventsPerFrame; // 0x30(0x4)
	struct FGuid SourceEmitterID; // 0x34(0x10)
	struct FName SourceEventName; // 0x44(0x8)
	bool bRandomSpawnNumber; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	uint32_t MinSpawnNumber; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterHandle
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraEmitterHandle
{
	struct FGuid ID; // 0x0(0x10)
	struct FName IdName; // 0x10(0x8)
	bool bIsEnabled; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName Name; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct UNiagaraEmitter* Instance; // 0x28(0x8)
};

// Object: ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size: 0x2C (Inherited: 0x0)
struct FNiagaraCollisionEventPayload
{
	struct FVector CollisionPos; // 0x0(0xC)
	struct FVector CollisionNormal; // 0xC(0xC)
	struct FVector CollisionVelocity; // 0x18(0xC)
	int32_t ParticleIndex; // 0x24(0x4)
	int32_t PhysicalMaterialIndex; // 0x28(0x4)
};

// Object: ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraMeshMaterialOverride
{
	struct UMaterialInterface* ExplicitMat; // 0x0(0x8)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x8(0x20)
};

// Object: ScriptStruct Niagara.NiagaraParameters
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraParameters
{
	struct TArray<struct FNiagaraVariable> Parameters; // 0x0(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterStore
// Size: 0x78 (Inherited: 0x0)
struct FNiagaraParameterStore
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10(0x10)
	struct TArray<uint8_t> ParameterData; // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // 0x30(0x10)
	struct TArray<struct UObject*> UObjects; // 0x40(0x10)
	uint8_t Pad_0x50[0x28]; // 0x50(0x28)
};

// Object: ScriptStruct Niagara.NiagaraVariableWithOffset
// Size: 0x10 (Inherited: 0xC)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{
	int32_t Offset; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraBoundParameter
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable Parameter; // 0x0(0x20)
	int32_t SrcOffset; // 0x20(0x4)
	int32_t DestOffset; // 0x24(0x4)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraPlatformSetConflictInfo
{
	int32_t SetAIndex; // 0x0(0x4)
	int32_t SetBIndex; // 0x4(0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size: 0xC (Inherited: 0x0)
struct FNiagaraPlatformSetConflictEntry
{
	struct FName ProfileName; // 0x0(0x8)
	int32_t QualityLevelMask; // 0x8(0x4)
};

// Object: ScriptStruct Niagara.NiagaraRibbonUVSettings
// Size: 0x24 (Inherited: 0x0)
struct FNiagaraRibbonUVSettings
{
	enum class ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x0(0x4)
	enum class ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x4(0x4)
	enum class ENiagaraRibbonUVDistributionMode DistributionMode; // 0x8(0x4)
	float TilingLength; // 0xC(0x4)
	struct FVector2D Offset; // 0x10(0x8)
	struct FVector2D Scale; // 0x18(0x8)
	bool bEnablePerParticleUOverride; // 0x20(0x1)
	bool bEnablePerParticleVRangeOverride; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
};

// Object: ScriptStruct Niagara.NiagaraScalabilityManager
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraScalabilityManager
{
	struct UNiagaraEffectType* EffectType; // 0x0(0x8)
	struct TArray<struct UNiagaraComponent*> ManagedComponents; // 0x8(0x10)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
};

// Object: ScriptStruct Niagara.NiagaraVMExecutableData
// Size: 0xE0 (Inherited: 0x0)
struct FNiagaraVMExecutableData
{
	struct TArray<uint8_t> ByteCode; // 0x0(0x10)
	struct TArray<uint8_t> OptimizedByteCode; // 0x10(0x10)
	int32_t NumTempRegisters; // 0x20(0x4)
	int32_t NumUserPtrs; // 0x24(0x4)
	struct TArray<uint8_t> ScriptLiterals; // 0x28(0x10)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x38(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x50(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x60(0x10)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0x80(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0x90(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xA0(0x10)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xB0(0x10)
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0xC8(0x10)
	uint8_t bReadsSignificanceIndex : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x7]; // 0xD9(0x7)
};

// Object: ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraVMExecutableDataId
{
	struct FGuid CompilerVersionID; // 0x0(0x10)
	enum class ENiagaraScriptUsage ScriptUsageType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FGuid ScriptUsageTypeID; // 0x14(0x10)
	uint8_t bUsesRapidIterationParams : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bInterpolatedSpawn : 1; // 0x24(0x1), Mask(0x2)
	uint8_t bRequiresPersistentIDs : 1; // 0x24(0x1), Mask(0x4)
	uint8_t BitPad_0x24_3 : 5; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FGuid BaseScriptID; // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
};

// Object: ScriptStruct Niagara.NiagaraModuleDependency
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraModuleDependency
{
	struct FName ID; // 0x0(0x8)
	enum class ENiagaraModuleDependencyType Type; // 0x8(0x1)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct FText Description; // 0x10(0x18)
};

// Object: ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
// Size: 0x88 (Inherited: 0x78)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{
	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size: 0x98 (Inherited: 0x78)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{
	int32_t ParameterSize; // 0x78(0x4)
	uint32_t PaddedParameterSize; // 0x7C(0x4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80(0x10)
	uint8_t bInitialized : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_1 : 7; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
};

// Object: ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t SrcOffset; // 0x0(0x2)
	uint16_t DestOffset; // 0x2(0x2)
	uint16_t SrcSize; // 0x4(0x2)
	uint16_t DestSize; // 0x6(0x2)
};

// Object: ScriptStruct Niagara.NiagaraScriptHighlight
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraScriptHighlight
{
	struct FLinearColor Color; // 0x0(0x10)
	struct FText DisplayName; // 0x10(0x18)
};

// Object: ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size: 0x80 (Inherited: 0x0)
struct FNiagaraSystemCompileRequest
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct UObject*> RootObjects; // 0x8(0x10)
	uint8_t Pad_0x18[0x68]; // 0x18(0x68)
};

// Object: ScriptStruct Niagara.EmitterCompiledScriptPair
// Size: 0x78 (Inherited: 0x0)
struct FEmitterCompiledScriptPair
{
	uint8_t Pad_0x0[0x78]; // 0x0(0x78)
};

// Object: ScriptStruct Niagara.NiagaraSystemCompiledData
// Size: 0x218 (Inherited: 0x0)
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore InstanceParamStore; // 0x0(0x78)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x78(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xB8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0xF8(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x138(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x158(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x178(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x198(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1A8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1C8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1E8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x208(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size: 0x20 (Inherited: 0x0)
struct FNiagaraParameterDataSetBindingCollection
{
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraParameterDataSetBinding
{
	int32_t ParameterOffset; // 0x0(0x4)
	int32_t DataSetComponentOffset; // 0x4(0x4)
};

// Object: ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size: 0x130 (Inherited: 0x0)
struct FNiagaraEmitterCompiledData
{
	struct TArray<struct FName> SpawnAttributes; // 0x0(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x20)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x30(0x20)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x50(0x20)
	struct FNiagaraVariable EmitterAgeVar; // 0x70(0x20)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0x90(0x20)
	struct FNiagaraVariable EmitterInstanceSeedVar; // 0xB0(0x20)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xD0(0x20)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xF0(0x40)
};

// Object: ScriptStruct Niagara.NiagaraVariableMetaData
// Size: 0xF0 (Inherited: 0x0)
struct FNiagaraVariableMetaData
{
	struct FText Description; // 0x0(0x18)
	struct FText CategoryName; // 0x18(0x18)
	bool bAdvancedDisplay; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t EditorSortPriority; // 0x34(0x4)
	bool bInlineEditConditionToggle; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x40(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70(0x50)
	struct FName ParentAttribute; // 0xC0(0x8)
	struct FName ScopeName; // 0xC8(0x8)
	enum class ENiagaraScriptParameterUsage Usage; // 0xD0(0x4)
	bool bIsStaticSwitch; // 0xD4(0x1)
	uint8_t Pad_0xD5[0x3]; // 0xD5(0x3)
	int32_t StaticSwitchDefaultValue; // 0xD8(0x4)
	bool bAddedToNodeGraphDeepCopy; // 0xDC(0x1)
	bool bOutputIsPersistent; // 0xDD(0x1)
	uint8_t Pad_0xDE[0x2]; // 0xDE(0x2)
	struct FName CachedNamespacelessVariableName; // 0xE0(0x8)
	bool bCreatedInSystemEditor; // 0xE8(0x1)
	bool bUseLegacyNameString; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x6]; // 0xEA(0x6)
};

// Object: ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraInputConditionMetadata
{
	struct FName InputName; // 0x0(0x8)
	struct TArray<struct FString> TargetValues; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterScopeInfo
// Size: 0x18 (Inherited: 0x0)
struct FNiagaraParameterScopeInfo
{
	enum class ENiagaraParameterScope Scope; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString NamespaceString; // 0x8(0x10)
};

// Object: ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString Object; // 0x0(0x10)
	struct TArray<struct FString> PropertyKeys; // 0x10(0x10)
	struct TArray<struct FString> PropertyValues; // 0x20(0x10)
};

// Object: ScriptStruct Niagara.NiagaraID
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraID
{
	int32_t Index; // 0x0(0x4)
	int32_t AcquireTag; // 0x4(0x4)
};

// Object: ScriptStruct Niagara.NiagaraSpawnInfo
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraSpawnInfo
{
	int32_t Count; // 0x0(0x4)
	float InterpStartDt; // 0x4(0x4)
	float IntervalDt; // 0x8(0x4)
	int32_t SpawnGroup; // 0xC(0x4)
};

// Object: ScriptStruct Niagara.NiagaraAssetVersion
// Size: 0x1C (Inherited: 0x0)
struct FNiagaraAssetVersion
{
	int32_t MajorVersion; // 0x0(0x4)
	int32_t MinorVersion; // 0x4(0x4)
	struct FGuid VersionGuid; // 0x8(0x10)
	bool bIsVisibleInVersionSelector; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct Niagara.NiagaraMatrix
// Size: 0x40 (Inherited: 0x0)
struct FNiagaraMatrix
{
	struct FVector4 Row0; // 0x0(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// Object: ScriptStruct Niagara.NiagaraParameterMap
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraParameterMap
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraNumeric
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraNumeric
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector4
// Size: 0x8 (Inherited: 0x0)
struct FNiagaraHalfVector4
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
	uint16_t Z; // 0x4(0x2)
	uint16_t W; // 0x6(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector3
// Size: 0x6 (Inherited: 0x0)
struct FNiagaraHalfVector3
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
	uint16_t Z; // 0x4(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalfVector2
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraHalfVector2
{
	uint16_t X; // 0x0(0x2)
	uint16_t Y; // 0x2(0x2)
};

// Object: ScriptStruct Niagara.NiagaraHalf
// Size: 0x2 (Inherited: 0x0)
struct FNiagaraHalf
{
	uint16_t Value; // 0x0(0x2)
};

// Object: ScriptStruct Niagara.NiagaraBool
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraBool
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraInt32
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraInt32
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraFloat
// Size: 0x4 (Inherited: 0x0)
struct FNiagaraFloat
{
	float Value; // 0x0(0x4)
};

// Object: ScriptStruct Niagara.NiagaraWildcard
// Size: 0x1 (Inherited: 0x0)
struct FNiagaraWildcard
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size: 0xC8 (Inherited: 0x78)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0x78(0x50)
};

// Object: ScriptStruct Niagara.NiagaraVariant
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraVariant
{
	struct UObject* Object; // 0x0(0x8)
	struct UNiagaraDataInterface* DataInterface; // 0x8(0x8)
	struct TArray<uint8_t> Bytes; // 0x10(0x10)
	enum class ENiagaraVariantMode CurrentMode; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Package: MovieScene
// Structs: 97

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvalTemplateBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	enum class EMovieSceneCompletionMode CompletionMode; // 0x9(0x1)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneChannel
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	bool DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<bool> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneFloatChannel : FMovieSceneChannel
{
	uint8_t PreInfinityExtrap; // 0x8(0x1)
	uint8_t PostInfinityExtrap; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x4)
	bool bHasDefaultValue; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	struct FFrameRate TickResolution; // 0x98(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable
{
};

// Object: ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneFloatValue
{
	float Value; // 0x0(0x4)
	struct FMovieSceneTangentData Tangent; // 0x4(0x14)
	uint8_t InterpMode; // 0x18(0x1)
	uint8_t TangentMode; // 0x19(0x1)
	uint8_t PaddingByte; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneTangentData
{
	float ArriveTangent; // 0x0(0x4)
	float LeaveTangent; // 0x4(0x4)
	float ArriveTangentWeight; // 0x8(0x4)
	float LeaveTangentWeight; // 0xC(0x4)
	uint8_t TangentWeightMode; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90 (Inherited: 0x8)
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	int32_t DefaultValue; // 0x18(0x4)
	bool bHasDefaultValue; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct TArray<int32_t> Values; // 0x20(0x10)
	uint8_t Pad_0x30[0x60]; // 0x30(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
{
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x30 (Inherited: 0x18)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x18)
};

// Object: ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x18 (Inherited: 0x0)
struct FMovieScenePropertySectionData
{
	struct FName PropertyName; // 0x0(0x8)
	struct FString PropertyPath; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98 (Inherited: 0x8)
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	uint8_t DefaultValue; // 0x18(0x1)
	bool bHasDefaultValue; // 0x19(0x1)
	uint8_t Pad_0x1A[0x6]; // 0x1A(0x6)
	struct TArray<uint8_t> Values; // 0x20(0x10)
	struct UEnum* Enum; // 0x30(0x8)
	uint8_t Pad_0x38[0x60]; // 0x38(0x60)
};

// Object: ScriptStruct MovieScene.TrackInstanceInputComponent
// Size: 0x10 (Inherited: 0x0)
struct FTrackInstanceInputComponent
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	int32_t OutputIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceComponent
{
	struct UMovieSceneSection* Owner; // 0x0(0x8)
	struct UMovieSceneTrackInstance* TrackInstanceClass; // 0x8(0x8)
};

// Object: ScriptStruct MovieScene.EasingComponentData
// Size: 0x8 (Inherited: 0x0)
struct FEasingComponentData
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieScenePropertyBinding
// Size: 0x14 (Inherited: 0x0)
struct FMovieScenePropertyBinding
{
	struct FName PropertyName; // 0x0(0x8)
	struct FName PropertyPath; // 0x8(0x8)
	bool bCanUseClassLookup; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSectionGroup
{
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneObjectBindingIDs
{
	struct TArray<struct FMovieSceneObjectBindingID> IDs; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneObjectBindingID
{
	int32_t SequenceID; // 0x0(0x4)
	enum class EMovieSceneObjectBindingSpace Space; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FGuid Guid; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackLabels
{
	struct TArray<struct FString> Strings; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xF0 (Inherited: 0x0)
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x8)
	double ViewEnd; // 0x68(0x8)
	double WorkStart; // 0x70(0x8)
	double WorkEnd; // 0x78(0x8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xD0(0x10)
	struct FFloatRange ViewRange; // 0xE0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneExpansionState
{
	bool bExpanded; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Label; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneTimecodeSource
{
	struct FTimecode Timecode; // 0x0(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneBinding
{
	struct FGuid ObjectGuid; // 0x0(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingId; // 0x0(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x8)
	bool bOverridesDefault; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x2 (Inherited: 0x0)
struct FOptionalMovieSceneBlendType
{
	enum class EMovieSceneBlendType BlendType; // 0x0(0x1)
	bool bIsValid; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneSequenceCompilerMaskStruct
{
	uint8_t bHierarchy : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEvaluationTemplate : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bEvaluationTemplateField : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bEntityComponentField : 1; // 0x0(0x1), Mask(0x8)
	uint8_t BitPad_0x0_4 : 4; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraph
// Size: 0x138 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraph
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
	struct FMovieSceneEntitySystemGraphNodes Nodes; // 0x80(0x38)
	uint8_t Pad_0xB8[0x80]; // 0xB8(0x80)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraphNodes
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEntitySystemGraphNode
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct UMovieSceneEntitySystem* System; // 0x20(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x0)
struct FMovieSceneEvalTemplatePtr
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x1 (Inherited: 0x0)
struct FMovieSceneEmptyStruct
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneEvaluationField
{
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneEvaluationMetaData
{
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey Key; // 0x0(0xC)
	uint16_t SetupIndex; // 0xC(0x2)
	uint16_t TearDownIndex; // 0xE(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
	uint32_t SectionIndex; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackIdentifier
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceID
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0(0x10)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10(0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneFieldEntry_ChildTemplate
{
	uint16_t ChildIndex; // 0x0(0x2)
	enum class ESectionEvaluationFlags Flags; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneFieldEntry_EvaluationTrack
{
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0(0x8)
	uint16_t NumChildren; // 0x8(0x2)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID SequenceID; // 0x0(0x4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneEvaluationGroupLUTIndex
{
	int32_t NumInitPtrs; // 0x0(0x4)
	int32_t NumEvalPtrs; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneFrameRange
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0xC (Inherited: 0x8)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSegmentIdentifier
{
	int32_t IdentifierIndex; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEntityComponentField
// Size: 0xF0 (Inherited: 0x0)
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0(0x60)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60(0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities; // 0xC0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xD0(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xE0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
	struct FGuid ObjectBindingId; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FFrameNumber ForcedTime; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	enum class ESectionEvaluationFlags Flags; // 0x8(0x1)
	uint8_t bEvaluateInSequencePreRoll : 1; // 0x9(0x1), Mask(0x1)
	uint8_t bEvaluateInSequencePostRoll : 1; // 0x9(0x1), Mask(0x2)
	uint8_t BitPad_0x9_2 : 6; // 0x9(0x1)
	uint8_t Pad_0xA[0x2]; // 0xA(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntity
{
	struct FMovieSceneEvaluationFieldEntityKey Key; // 0x0(0xC)
	int32_t SharedMetaDataIndex; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityKey
{
	struct TWeakObjectPtr<struct UObject> EntityOwner; // 0x0(0x8)
	uint32_t EntityID; // 0x8(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneEvaluationFieldEntityTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneEvaluationOperand
{
	struct FGuid ObjectBindingId; // 0x0(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x160 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0(0x50)
	uint8_t Pad_0x50[0x50]; // 0x50(0x50)
	struct FGuid SequenceSignature; // 0xA0(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xB8(0xA8)
};

// Object: ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xA8 (Inherited: 0x0)
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0x78 (Inherited: 0x0)
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingId; // 0x0(0x10)
	uint16_t EvaluationPriority; // 0x10(0x2)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	struct TWeakObjectPtr<struct UMovieSceneTrack> SourceTrack; // 0x14(0x8)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30(0x38)
	struct FName EvaluationGroup; // 0x68(0x8)
	uint8_t bEvaluateInPreroll : 1; // 0x70(0x1), Mask(0x1)
	uint8_t bEvaluateInPostroll : 1; // 0x70(0x1), Mask(0x2)
	uint8_t bTearDownPriority : 1; // 0x70(0x1), Mask(0x4)
	uint8_t BitPad_0x70_3 : 5; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneTrackImplementationPtr
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1C (Inherited: 0x0)
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0(0x8)
	struct FGuid ObjectBindingId; // 0x8(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0xE8 (Inherited: 0x0)
struct FMovieSceneRootEvaluationTemplateInstance
{
	struct TWeakObjectPtr<struct UMovieSceneSequence> WeakRootSequence; // 0x0(0x8)
	struct UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18(0x8)
	uint8_t Pad_0x20[0x70]; // 0x20(0x70)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x90(0x50)
	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x0)
struct FGeneratedMovieSceneKeyStruct
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xC0 (Inherited: 0x8)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	struct UObject* PropertyClass; // 0x8(0x8)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x30)
	uint8_t Pad_0x60[0x60]; // 0x60(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneObjectPathChannelKeyValue
{
	struct TSoftObjectPtr<UObject> SoftPtr; // 0x0(0x28)
	struct UObject* HardPtr; // 0x28(0x8)
};

// Object: ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x0)
struct FMovieScenePossessable
{
	struct TArray<struct FName> Tags; // 0x0(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct UObject* PossessedObjectClass; // 0x30(0x8)
	struct FGuid ParentGuid; // 0x38(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 (Inherited: 0x0)
struct FMovieSceneEasingSettings
{
	int32_t AutoEaseInDuration; // 0x0(0x4)
	int32_t AutoEaseOutDuration; // 0x4(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8(0x10)
	bool bManualEaseIn; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	int32_t ManualEaseInDuration; // 0x1C(0x4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ManualEaseOutDuration; // 0x34(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x2 (Inherited: 0x0)
struct FMovieSceneSectionEvalOptions
{
	bool bCanEditCompletionMode; // 0x0(0x1)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x1(0x1)
};

// Object: ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24 (Inherited: 0x0)
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset; // 0x0(0x4)
	bool bCanLoop; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	struct FFrameNumber EndFrameOffset; // 0x8(0x4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xC(0x4)
	float TimeScale; // 0x10(0x4)
	int32_t HierarchicalBias; // 0x14(0x4)
	float StartOffset; // 0x18(0x4)
	float PrerollTime; // 0x1C(0x4)
	float PostrollTime; // 0x20(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x0)
struct FMovieSceneSegment
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct MovieScene.SectionEvaluationData
// Size: 0xC (Inherited: 0x0)
struct FSectionEvaluationData
{
	int32_t ImplIndex; // 0x0(0x4)
	struct FFrameNumber ForcedTime; // 0x4(0x4)
	enum class ESectionEvaluationFlags Flags; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0x118 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode RootNode; // 0x0(0x18)
	struct FMovieSceneSubSequenceTree Tree; // 0x18(0x60)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x78(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xC8(0x50)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID ParentID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xE8 (Inherited: 0x0)
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence; // 0x0(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x20)
	struct FFrameRate TickResolution; // 0x38(0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40(0x4)
	struct FMovieSceneFrameRange PlayRange; // 0x44(0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x54(0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x74(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x84(0x10)
	int16_t HierarchicalBias; // 0x94(0x2)
	bool bHasHierarchicalEasing; // 0x96(0x1)
	uint8_t Pad_0x97[0x1]; // 0x97(0x1)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98(0x18)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
	struct FGuid SubSectionSignature; // 0xB8(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xC8(0x20)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneNestedSequenceTransform
{
	struct FMovieSceneTimeTransform LinearTransform; // 0x0(0xC)
	struct FMovieSceneTimeWarping Warping; // 0xC(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneTimeWarping
{
	struct FFrameNumber Start; // 0x0(0x4)
	struct FFrameNumber End; // 0x4(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0xC (Inherited: 0x0)
struct FMovieSceneTimeTransform
{
	float TimeScale; // 0x0(0x4)
	struct FFrameTime Offset; // 0x4(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceDataPtr
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceTree
// Size: 0x60 (Inherited: 0x0)
struct FMovieSceneSubSequenceTree
{
	uint8_t Pad_0x0[0x60]; // 0x0(0x60)
};

// Object: ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSubSequenceTreeEntry
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x8 (Inherited: 0x0)
struct FMovieSceneSequenceInstanceData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime Frame; // 0x0(0x8)
	float Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString MarkedFrame; // 0x10(0x10)
	enum class EMovieScenePositionType PositionType; // 0x20(0x1)
	enum class EUpdatePositionMethod UpdateMethod; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x0)
struct FMovieSceneSequencePlaybackSettings
{
	uint8_t bAutoPlay : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float StartTime; // 0xC(0x4)
	uint8_t bRandomStartTime : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bRestoreState : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bDisableMovementInput : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bDisableLookAtInput : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bHidePlayer : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bHideHud : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bDisableCameraCuts : 1; // 0x10(0x1), Mask(0x40)
	uint8_t bPauseAtEnd : 1; // 0x10(0x1), Mask(0x80)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneSequenceLoopCount
{
	int32_t Value; // 0x0(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime LastKnownPosition; // 0x0(0x8)
	uint8_t LastKnownStatus; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	int32_t LastKnownNumLoops; // 0xC(0x4)
};

// Object: ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneWarpCounter
{
	struct TArray<uint32_t> WarpCounts; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x0)
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform; // 0x0(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x1)
	bool bEvaluateTracksWhenNotSpawned; // 0x41(0x1)
	uint8_t Pad_0x42[0x2]; // 0x42(0x2)
	struct FGuid Guid; // 0x44(0x10)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x8)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	struct FName LevelName; // 0x84(0x8)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x18 (Inherited: 0x18)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackDisplayOptions
{
	uint8_t bShowVerticalFrames : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTrackEvalOptions
{
	uint8_t bCanEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEvalNearestSection : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bEvaluateInPreroll : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bEvaluateInPostroll : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bEvaluateNearestSection : 1; // 0x0(0x1), Mask(0x10)
	uint8_t BitPad_0x0_5 : 3; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvaluationField
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackEvaluationField
{
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0(0x10)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneTrackEvaluationFieldEntry
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	struct FFrameNumberRange Range; // 0x8(0x10)
	struct FFrameNumber ForcedTime; // 0x18(0x4)
	enum class ESectionEvaluationFlags Flags; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x1]; // 0x1D(0x1)
	int16_t LegacySortOrder; // 0x1E(0x2)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceInput
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceInput
{
	struct UMovieSceneSection* Section; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneTrackInstanceEntry
{
	struct UObject* BoundObject; // 0x0(0x8)
	struct UMovieSceneTrackInstance* TrackInstance; // 0x8(0x8)
};

// Package: NiagaraShader
// Structs: 4

// Object: ScriptStruct NiagaraShader.SimulationStageMetaData
// Size: 0x30 (Inherited: 0x0)
struct FSimulationStageMetaData
{
	struct FName SimulationStageName; // 0x0(0x8)
	struct FName IterationSource; // 0x8(0x8)
	uint8_t bSpawnOnly : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bWritesParticles : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bPartialParticleUpdate : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FName> OutputDestinations; // 0x18(0x10)
	int32_t MinStage; // 0x28(0x4)
	int32_t MaxStage; // 0x2C(0x4)
};

// Object: ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString DataInterfaceHLSLSymbol; // 0x0(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// Object: ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraDataInterfaceGeneratedFunction
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraCompileEvent
{
	enum class EFNiagaraCompileEventSeverity Severity; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
};

// Package: OnlineSubsystemUtils
// Structs: 11

// Object: ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// Size: 0x108 (Inherited: 0x0)
struct FBlueprintSessionResult
{
	uint8_t Pad_0x0[0x108]; // 0x0(0x108)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseReceiptInfo2
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// Size: 0x110 (Inherited: 0x0)
struct FOnlineProxyStoreOffer
{
	struct FString OfferId; // 0x0(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText RegularPriceText; // 0x58(0x18)
	int32_t RegularPrice; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FText PriceText; // 0x78(0x18)
	int32_t NumericPrice; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString CurrencyCode; // 0x98(0x10)
	struct FDateTime ReleaseDate; // 0xA8(0x8)
	struct FDateTime ExpirationDate; // 0xB0(0x8)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xC0(0x50)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseRestoreInfo2
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// Size: 0x30 (Inherited: 0x0)
struct FInAppPurchaseReceiptInfo
{
	struct FString ItemName; // 0x0(0x10)
	struct FString ItemId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Size: 0xF8 (Inherited: 0x0)
struct FInAppPurchaseProductInfo2
{
	struct FString Identifier; // 0x0(0x10)
	struct FString TransactionIdentifier; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString DisplayDescription; // 0x30(0x10)
	struct FString DisplayPrice; // 0x40(0x10)
	float RawPrice; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString CurrencyCode; // 0x58(0x10)
	struct FString CurrencySymbol; // 0x68(0x10)
	struct FString DecimalSeparator; // 0x78(0x10)
	struct FString GroupingSeparator; // 0x88(0x10)
	struct FString ReceiptData; // 0x98(0x10)
	struct TMap<struct FString, struct FString> DynamicFields; // 0xA8(0x50)
};

// Object: ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Size: 0x18 (Inherited: 0x0)
struct FInAppPurchaseProductRequest2
{
	struct FString ProductIdentifier; // 0x0(0x10)
	bool bIsConsumable; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct OnlineSubsystemUtils.PlayerReservation
// Size: 0x50 (Inherited: 0x0)
struct FPlayerReservation
{
	struct FUniqueNetIdRepl UniqueId; // 0x0(0x28)
	struct FString ValidationStr; // 0x28(0x10)
	struct FString Platform; // 0x38(0x10)
	bool bAllowCrossplay; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float ElapsedTime; // 0x4C(0x4)
};

// Object: ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// Size: 0x40 (Inherited: 0x0)
struct FPIELoginSettingsInternal
{
	struct FString ID; // 0x0(0x10)
	struct FString Token; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct TArray<uint8_t> TokenBytes; // 0x30(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.PartyReservation
// Size: 0x50 (Inherited: 0x0)
struct FPartyReservation
{
	int32_t TeamNum; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FUniqueNetIdRepl PartyLeader; // 0x8(0x28)
	struct TArray<struct FPlayerReservation> PartyMembers; // 0x30(0x10)
	struct TArray<struct FPlayerReservation> RemovedPartyMembers; // 0x40(0x10)
};

// Object: ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// Size: 0x78 (Inherited: 0x0)
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl SpectatorId; // 0x0(0x28)
	struct FPlayerReservation Spectator; // 0x28(0x50)
};

// Package: AudioMixer
// Structs: 5

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x50 (Inherited: 0x0)
struct FSubmixEffectDynamicsProcessorSettings
{
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float InputGainDb; // 0x4(0x4)
	float ThresholdDb; // 0x8(0x4)
	float Ratio; // 0xC(0x4)
	float KneeBandwidthDb; // 0x10(0x4)
	float LookAheadMsec; // 0x14(0x4)
	float AttackTimeMsec; // 0x18(0x4)
	float ReleaseTimeMsec; // 0x1C(0x4)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x8)
	uint8_t bChannelLinked : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bAnalogMode : 1; // 0x28(0x1), Mask(0x2)
	uint8_t bKeyAudition : 1; // 0x28(0x1), Mask(0x4)
	uint8_t BitPad_0x28_3 : 5; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float KeyGainDb; // 0x2C(0x4)
	float OutputGainDb; // 0x30(0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0xC)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0xC (Inherited: 0x0)
struct FSubmixEffectDynamicProcessorFilterSettings
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Cutoff; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectSubmixEQSettings
{
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0(0x10)
};

// Object: ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectEQBand
{
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	uint8_t bEnabled : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x40 (Inherited: 0x0)
struct FSubmixEffectReverbSettings
{
	bool bBypassEarlyReflections; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ReflectionsDelay; // 0x4(0x4)
	float GainHF; // 0x8(0x4)
	float ReflectionsGain; // 0xC(0x4)
	bool bBypassLateReflections; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LateDelay; // 0x14(0x4)
	float DecayTime; // 0x18(0x4)
	float Density; // 0x1C(0x4)
	float Diffusion; // 0x20(0x4)
	float AirAbsorptionGainHF; // 0x24(0x4)
	float DecayHFRatio; // 0x28(0x4)
	float LateGain; // 0x2C(0x4)
	float Gain; // 0x30(0x4)
	float WetLevel; // 0x34(0x4)
	float DryLevel; // 0x38(0x4)
	bool bBypass; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Package: MotoSynth
// Structs: 2

// Object: ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size: 0x68 (Inherited: 0x0)
struct FMotoSynthRuntimeSettings
{
	bool bSynthToneEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float SynthToneVolume; // 0x4(0x4)
	float SynthToneFilterFrequency; // 0x8(0x4)
	int32_t SynthOctaveShift; // 0xC(0x4)
	bool bGranularEngineEnabled; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float GranularEngineVolume; // 0x14(0x4)
	float GranularEnginePitchScale; // 0x18(0x4)
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1C(0x4)
	int32_t NumGrainTableEntriesPerGrain; // 0x20(0x4)
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24(0x4)
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UMotoSynthSource* AccelerationSource; // 0x30(0x8)
	struct UMotoSynthSource* DecelerationSource; // 0x38(0x8)
	bool bStereoWidenerEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float StereoDelayMsec; // 0x44(0x4)
	float StereoFeedback; // 0x48(0x4)
	float StereoWidenerWetlevel; // 0x4C(0x4)
	float StereoWidenerDryLevel; // 0x50(0x4)
	float StereoWidenerDelayRatio; // 0x54(0x4)
	bool bStereoWidenerFilterEnabled; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float StereoWidenerFilterFrequency; // 0x5C(0x4)
	float StereoWidenerFilterQ; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct MotoSynth.GrainTableEntry
// Size: 0x8 (Inherited: 0x0)
struct FGrainTableEntry
{
	int32_t SampleIndex; // 0x0(0x4)
	float RPM; // 0x4(0x4)
};

// Package: UdpMessaging
// Structs: 1

// Object: ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x0)
struct FUdpMockMessage
{
	struct TArray<uint8_t> Data; // 0x0(0x10)
};

// Package: ActorSequence
// Structs: 3

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x0)
struct FActorSequenceObjectReferenceMap
{
	struct TArray<struct FGuid> BindingIds; // 0x0(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x0)
struct FActorSequenceObjectReferences
{
	struct TArray<struct FActorSequenceObjectReference> Array; // 0x0(0x10)
};

// Object: ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x0)
struct FActorSequenceObjectReference
{
	enum class EActorSequenceObjectReferenceType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FGuid ActorId; // 0x4(0x10)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString PathToComponent; // 0x18(0x10)
};

// Package: ActorLayerUtilities
// Structs: 1

// Object: ScriptStruct ActorLayerUtilities.ActorLayer
// Size: 0x8 (Inherited: 0x0)
struct FActorLayer
{
	struct FName Name; // 0x0(0x8)
};

// Package: AppleImageUtils
// Structs: 1

// Object: ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x0)
struct FAppleImageUtilsImageConversionResult
{
	struct FString Error; // 0x0(0x10)
	struct TArray<uint8_t> ImageData; // 0x10(0x10)
};

// Package: CustomMeshComponent
// Structs: 1

// Object: ScriptStruct CustomMeshComponent.CustomMeshTriangle
// Size: 0x24 (Inherited: 0x0)
struct FCustomMeshTriangle
{
	struct FVector Vertex0; // 0x0(0xC)
	struct FVector Vertex1; // 0xC(0xC)
	struct FVector Vertex2; // 0x18(0xC)
};

// Package: EditableMesh
// Structs: 31

// Object: ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x0)
struct FAdaptorPolygon2Group
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t materialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x0)
struct FAdaptorPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x4 (Inherited: 0x4)
struct FAdaptorTriangleID : FElementID
{
};

// Object: ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x8 (Inherited: 0x0)
struct FPolygonGroupForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	struct FPolygonGroupID PolygonGroupID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x0)
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x0(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x0)
struct FMeshElementAttributeList
{
	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x0)
struct FMeshElementAttributeData
{
	struct FName AttributeName; // 0x0(0x8)
	int32_t AttributeIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FMeshElementAttributeValue AttributeValue; // 0x10(0x50)
};

// Object: ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x0)
struct FMeshElementAttributeValue
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x0)
struct FVertexToMove
{
	struct FVertexID VertexID; // 0x0(0x4)
	struct FVector NewVertexPosition; // 0x4(0xC)
};

// Object: ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexInstancesForPolygonHole
{
	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x8 (Inherited: 0x0)
struct FVertexIndexAndInstanceID
{
	int32_t ContourIndex; // 0x0(0x4)
	struct FVertexInstanceID VertexInstanceID; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x0)
struct FVertexAttributesForPolygon
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)
};

// Object: ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x0)
struct FVertexAttributesForPolygonHole
{
	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForEdge
{
	struct FEdgeID EdgeID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x0)
struct FAttributesForVertex
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x0)
struct FPolygonToSplit
{
	struct FPolygonID PolygonID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.VertexPair
// Size: 0x8 (Inherited: 0x0)
struct FVertexPair
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
};

// Object: ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x0)
struct FPolygonToCreate
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x8(0x10)
	struct FPolygonID OriginalPolygonID; // 0x18(0x4)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x0)
struct FVertexAndAttributes
{
	struct FVertexInstanceID VertexInstanceID; // 0x0(0x4)
	struct FVertexID VertexID; // 0x4(0x4)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x8(0x10)
};

// Object: ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x0)
struct FEdgeToCreate
{
	struct FVertexID VertexID0; // 0x0(0x4)
	struct FVertexID VertexID1; // 0x4(0x4)
	struct FMeshElementAttributeList EdgeAttributes; // 0x8(0x10)
	struct FEdgeID OriginalEdgeID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x0)
struct FVertexInstanceToCreate
{
	struct FVertexID VertexID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x8(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x0)
struct FVertexToCreate
{
	struct FMeshElementAttributeList VertexAttributes; // 0x0(0x10)
	struct FVertexID OriginalVertexID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x0)
struct FSubdivisionLimitData
{
	struct TArray<struct FVector> VertexPositions; // 0x0(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0xC (Inherited: 0x0)
struct FSubdividedWireEdge
{
	int32_t EdgeVertex0PositionIndex; // 0x0(0x4)
	int32_t EdgeVertex1PositionIndex; // 0x4(0x4)
	uint8_t Pad_0x8[0x4]; // 0x8(0x4)
};

// Object: ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x0)
struct FSubdivisionLimitSection
{
	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x0(0x10)
};

// Object: ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xD0 (Inherited: 0x0)
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex QuadVertex0; // 0x0(0x34)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9C(0x34)
};

// Object: ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x0)
struct FSubdividedQuadVertex
{
	int32_t VertexPositionIndex; // 0x0(0x4)
	struct FVector2D TextureCoordinate0; // 0x4(0x8)
	struct FVector2D TextureCoordinate1; // 0xC(0x8)
	struct FColor VertexColor; // 0x14(0x4)
	struct FVector VertexNormal; // 0x18(0xC)
	struct FVector VertexTangent; // 0x24(0xC)
	float VertexBinormalSign; // 0x30(0x4)
};

// Object: ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x0)
struct FRenderingPolygonGroup
{
	uint32_t RenderingSectionIndex; // 0x0(0x4)
	int32_t materialIndex; // 0x4(0x4)
	int32_t MaxTriangles; // 0x8(0x4)
	uint8_t Pad_0xC[0x3C]; // 0xC(0x3C)
};

// Object: ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x0)
struct FRenderingPolygon
{
	struct FPolygonGroupID PolygonGroupID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8(0x10)
};

// Package: LiveLinkInterface
// Structs: 39

// Object: ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size: 0x8 (Inherited: 0x0)
struct FLiveLinkSubjectName
{
	struct FName Name; // 0x0(0x8)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38 (Inherited: 0x0)
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey Key; // 0x0(0x18)
	struct ULiveLinkRole* Role; // 0x18(0x8)
	struct ULiveLinkSubjectSettings* Settings; // 0x20(0x8)
	struct ULiveLinkVirtualSubject* VirtualSubject; // 0x28(0x8)
	bool bEnabled; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size: 0x18 (Inherited: 0x0)
struct FLiveLinkSubjectKey
{
	struct FGuid Source; // 0x0(0x10)
	struct FLiveLinkSubjectName SubjectName; // 0x10(0x8)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size: 0x18 (Inherited: 0x0)
struct FLiveLinkSourceHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size: 0x8 (Inherited: 0x0)
struct FLiveLinkBaseBlueprintData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size: 0x18 (Inherited: 0x8)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData
{
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size: 0x20 (Inherited: 0x0)
struct FLiveLinkTransform
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size: 0x160 (Inherited: 0x0)
struct FCachedSubjectFrame
{
	uint8_t Pad_0x0[0x160]; // 0x0(0x160)
};

// Object: ScriptStruct LiveLinkInterface.SubjectMetadata
// Size: 0x70 (Inherited: 0x0)
struct FSubjectMetadata
{
	struct TMap<struct FName, struct FString> StringMetadata; // 0x0(0x50)
	struct FTimecode SceneTimecode; // 0x50(0x14)
	struct FFrameRate SceneFramerate; // 0x64(0x8)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size: 0xA0 (Inherited: 0x0)
struct FLiveLinkBaseFrameData
{
	struct FLiveLinkWorldTime WorldTime; // 0x0(0x10)
	struct FLiveLinkMetaData MetaData; // 0x10(0x60)
	struct TArray<float> PropertyValues; // 0x70(0x10)
	uint8_t Pad_0x80[0x20]; // 0x80(0x20)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size: 0x60 (Inherited: 0x0)
struct FLiveLinkMetaData
{
	struct TMap<struct FName, struct FString> StringMetadata; // 0x0(0x50)
	struct FQualifiedFrameTime SceneTime; // 0x50(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkWorldTime
{
	double Time; // 0x0(0x8)
	double Offset; // 0x8(0x8)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size: 0xB0 (Inherited: 0xA0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData
{
	struct TArray<struct FTransform> Transforms; // 0xA0(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkBaseStaticData
{
	struct TArray<struct FName> PropertyNames; // 0x0(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size: 0x30 (Inherited: 0x10)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
{
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct TArray<int32_t> BoneParents; // 0x20(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size: 0xB8 (Inherited: 0x8)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData
{
	struct FLiveLinkBaseStaticData StaticData; // 0x8(0x10)
	struct FLiveLinkBaseFrameData FrameData; // 0x18(0xA0)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size: 0x120 (Inherited: 0x8)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData
{
	struct FLiveLinkCameraStaticData StaticData; // 0x8(0x20)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FLiveLinkCameraFrameData FrameData; // 0x30(0xF0)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size: 0xD0 (Inherited: 0xA0)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData
{
	struct FTransform Transform; // 0xA0(0x30)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size: 0xF0 (Inherited: 0xD0)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
{
	float FieldOfView; // 0xD0(0x4)
	float AspectRatio; // 0xD4(0x4)
	float FocalLength; // 0xD8(0x4)
	float Aperture; // 0xDC(0x4)
	float FocusDistance; // 0xE0(0x4)
	enum class ELiveLinkCameraProjectionMode ProjectionMode; // 0xE4(0x1)
	uint8_t Pad_0xE5[0xB]; // 0xE5(0xB)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
{
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
{
	bool bIsFieldOfViewSupported; // 0x10(0x1)
	bool bIsAspectRatioSupported; // 0x11(0x1)
	bool bIsFocalLengthSupported; // 0x12(0x1)
	bool bIsProjectionModeSupported; // 0x13(0x1)
	float FilmBackWidth; // 0x14(0x4)
	float FilmBackHeight; // 0x18(0x4)
	bool bIsApertureSupported; // 0x1C(0x1)
	bool bIsFocusDistanceSupported; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size: 0x50 (Inherited: 0x0)
struct FLiveLinkCurveConversionSettings
{
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; // 0x0(0x50)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size: 0x130 (Inherited: 0x8)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData
{
	struct FLiveLinkLightStaticData StaticData; // 0x8(0x20)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FLiveLinkLightFrameData FrameData; // 0x30(0x100)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size: 0x100 (Inherited: 0xD0)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData
{
	float Temperature; // 0xD0(0x4)
	float Intensity; // 0xD4(0x4)
	struct FColor LightColor; // 0xD8(0x4)
	float InnerConeAngle; // 0xDC(0x4)
	float OuterConeAngle; // 0xE0(0x4)
	float AttenuationRadius; // 0xE4(0x4)
	float SourceRadius; // 0xE8(0x4)
	float SoftSourceRadius; // 0xEC(0x4)
	float SourceLength; // 0xF0(0x4)
	uint8_t Pad_0xF4[0xC]; // 0xF4(0xC)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x20 (Inherited: 0x10)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData
{
	bool bIsTemperatureSupported; // 0x10(0x1)
	bool bIsIntensitySupported; // 0x11(0x1)
	bool bIsLightColorSupported; // 0x12(0x1)
	bool bIsInnerConeAngleSupported; // 0x13(0x1)
	bool bIsOuterConeAngleSupported; // 0x14(0x1)
	bool bIsAttenuationRadiusSupported; // 0x15(0x1)
	bool bIsSourceLenghtSupported; // 0x16(0x1)
	bool bIsSourceRadiusSupported; // 0x17(0x1)
	bool bIsSoftSourceRadiusSupported; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size: 0x30 (Inherited: 0x0)
struct FLiveLinkSourcePreset
{
	struct FGuid Guid; // 0x0(0x10)
	struct ULiveLinkSourceSettings* Settings; // 0x10(0x8)
	struct FText SourceType; // 0x18(0x18)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size: 0x20 (Inherited: 0x0)
struct FLiveLinkRefSkeleton
{
	struct TArray<struct FName> BoneNames; // 0x0(0x10)
	struct TArray<int32_t> BoneParents; // 0x10(0x10)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkSubjectRepresentation
{
	struct FLiveLinkSubjectName Subject; // 0x0(0x8)
	struct ULiveLinkRole* Role; // 0x8(0x8)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size: 0x8 (Inherited: 0x0)
struct FLiveLinkInterpolationSettings
{
	bool bUseInterpolation; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float InterpolationOffset; // 0x4(0x4)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size: 0xC (Inherited: 0x0)
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate FrameRate; // 0x0(0x8)
	struct FFrameNumber FrameOffset; // 0x8(0x4)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkSourceDebugInfo
{
	struct FLiveLinkSubjectName SubjectName; // 0x0(0x8)
	int32_t SnapshotIndex; // 0x8(0x4)
	int32_t NumberOfBufferAtSnapshot; // 0xC(0x4)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size: 0x58 (Inherited: 0x0)
struct FLiveLinkSourceBufferManagementSettings
{
	bool bValidEngineTimeEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ValidEngineTime; // 0x4(0x4)
	float EngineTimeOffset; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	double EngineTimeClockOffset; // 0x10(0x8)
	bool bGenerateSubFrame; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FFrameRate DetectedFrameRate; // 0x1C(0x8)
	bool bUseTimecodeSmoothLatest; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FFrameRate SourceTimecodeFrameRate; // 0x28(0x8)
	bool bValidTimecodeFrameEnabled; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	int32_t ValidTimecodeFrame; // 0x34(0x4)
	float TimecodeFrameOffset; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	double TimecodeClockOffset; // 0x40(0x8)
	int32_t LatestOffset; // 0x48(0x4)
	int32_t MaxNumberOfFrameToBuffered; // 0x4C(0x4)
	bool bKeepAtLeastOneFrame; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size: 0xF0 (Inherited: 0x8)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData
{
	struct FLiveLinkTransformStaticData StaticData; // 0x8(0x10)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FLiveLinkTransformFrameData FrameData; // 0x20(0xD0)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size: 0x90 (Inherited: 0x0)
struct FLiveLinkFrameData
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FLiveLinkCurveElement> CurveElements; // 0x10(0x10)
	struct FLiveLinkWorldTime WorldTime; // 0x20(0x10)
	struct FLiveLinkMetaData MetaData; // 0x30(0x60)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size: 0xC (Inherited: 0x0)
struct FLiveLinkCurveElement
{
	struct FName CurveName; // 0x0(0x8)
	float CurveValue; // 0x8(0x4)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int32_t Seconds; // 0x0(0x4)
	int32_t Frames; // 0x4(0x4)
	struct FLiveLinkFrameRate FrameRate; // 0x8(0x8)
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size: 0x8 (Inherited: 0x8)
struct FLiveLinkFrameRate : FFrameRate
{
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size: 0x10 (Inherited: 0x10)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED
{
};

// Object: ScriptStruct LiveLinkInterface.LiveLinkTime
// Size: 0x18 (Inherited: 0x0)
struct FLiveLinkTime
{
	double WorldTime; // 0x0(0x8)
	struct FQualifiedFrameTime SceneTime; // 0x8(0x10)
};

// Package: LiveLink
// Structs: 5

// Object: ScriptStruct LiveLink.AnimNode_LiveLinkPose
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10(0x10)
	struct FLiveLinkSubjectName LiveLinkSubjectName; // 0x20(0x8)
	struct ULiveLinkRetargetAsset* RetargetAsset; // 0x28(0x8)
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Object: ScriptStruct LiveLink.LiveLinkInstanceProxy
// Size: 0x7B0 (Inherited: 0x760)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{
	struct FAnimNode_LiveLinkPose PoseNode; // 0x760(0x50)
};

// Object: ScriptStruct LiveLink.ProviderPollResult
// Size: 0x38 (Inherited: 0x0)
struct FProviderPollResult
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString MachineName; // 0x20(0x10)
	double MachineTimeOffset; // 0x30(0x8)
};

// Object: ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// Size: 0x1 (Inherited: 0x0)
struct FLiveLinkRetargetAssetReference
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// Size: 0x28 (Inherited: 0x0)
struct FLiveLinkRoleProjectSetting
{
	struct ULiveLinkRole* Role; // 0x0(0x8)
	struct ULiveLinkSubjectSettings* SettingClass; // 0x8(0x8)
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10(0x8)
	struct TArray<struct ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18(0x10)
};

// Package: TimeManagement
// Structs: 2

// Object: ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x8 (Inherited: 0x0)
struct FTimedDataInputEvaluationData
{
	float DistanceToNewestSampleSeconds; // 0x0(0x4)
	float DistanceToOldestSampleSeconds; // 0x4(0x4)
};

// Object: ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x18 (Inherited: 0x0)
struct FTimedDataChannelSampleTime
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Package: LiveLinkComponents
// Structs: 1

// Object: ScriptStruct LiveLinkComponents.LiveLinkTransformControllerData
// Size: 0x4 (Inherited: 0x0)
struct FLiveLinkTransformControllerData
{
	bool bWorldTransform; // 0x0(0x1)
	bool bUseScale; // 0x1(0x1)
	bool bSweep; // 0x2(0x1)
	bool bTeleport; // 0x3(0x1)
};

// Package: LiveLinkMovieScene
// Structs: 3

// Object: ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// Size: 0xB0 (Inherited: 0x30)
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FLiveLinkSubjectPreset SubjectPreset; // 0x30(0x38)
	struct TArray<bool> ChannelMask; // 0x68(0x10)
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData; // 0x78(0x10)
	uint8_t Pad_0x88[0x28]; // 0x88(0x28)
};

// Object: ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// Size: 0x10 (Inherited: 0x0)
struct FLiveLinkSubSectionData
{
	struct TArray<struct FLiveLinkPropertyData> Properties; // 0x0(0x10)
};

// Object: ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// Size: 0x58 (Inherited: 0x0)
struct FLiveLinkPropertyData
{
	struct FName PropertyName; // 0x0(0x8)
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel; // 0x8(0x10)
	struct TArray<struct FMovieSceneStringChannel> StringChannel; // 0x18(0x10)
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel; // 0x28(0x10)
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel; // 0x38(0x10)
	struct TArray<struct FMovieSceneByteChannel> ByteChannel; // 0x48(0x10)
};

// Package: MovieSceneTracks
// Structs: 64

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xA0 (Inherited: 0x8)
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FString> Values; // 0x18(0x10)
	struct FString DefaultValue; // 0x28(0x10)
	bool bHasDefaultValue; // 0x38(0x1)
	uint8_t Pad_0x39[0x67]; // 0x39(0x67)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID; // 0x14(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x30(0xA0)
	enum class EMovieScene3DPathSection_Axis FrontAxisEnum; // 0xD0(0x1)
	enum class EMovieScene3DPathSection_Axis UpAxisEnum; // 0xD1(0x1)
	uint8_t bFollow : 1; // 0xD2(0x1), Mask(0x1)
	uint8_t bReverse : 1; // 0xD2(0x1), Mask(0x2)
	uint8_t bForceUpright : 1; // 0xD2(0x1), Mask(0x4)
	uint8_t BitPad_0xD2_3 : 5; // 0xD2(0x1)
	uint8_t Pad_0xD3[0x5]; // 0xD3(0x5)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x4 (Inherited: 0x0)
struct FMovieSceneTransformMask
{
	uint32_t Mask; // 0x0(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x8)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FRotator Rotation; // 0x14(0xC)
	struct FVector Scale; // 0x20(0xC)
	struct FFrameNumber Time; // 0x2C(0x4)
	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Scale; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{
	struct FRotator Rotation; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x8)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8(0xC)
	struct FFrameNumber Time; // 0x14(0x4)
	uint8_t Pad_0x18[0x18]; // 0x18(0x18)
};

// Object: ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x650 (Inherited: 0x0)
struct FMovieScene3DTransformTemplateData
{
	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0(0x1E0)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1E0(0x1E0)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3C0(0x1E0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5A0(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x640(0x1)
	uint8_t Pad_0x641[0x3]; // 0x641(0x3)
	struct FMovieSceneTransformMask Mask; // 0x644(0x4)
	bool bUseQuaternionInterpolation; // 0x648(0x1)
	uint8_t Pad_0x649[0x7]; // 0x649(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xB0 (Inherited: 0x8)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	uint8_t Pad_0x18[0x28]; // 0x18(0x28)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x40(0x10)
	uint8_t Pad_0x50[0x60]; // 0x50(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID Object; // 0x0(0x18)
	struct FName ComponentName; // 0x18(0x8)
	struct FName SocketName; // 0x20(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xE0 (Inherited: 0x18)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData PropertyData; // 0x18(0x18)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x30(0xB0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x20 (Inherited: 0x18)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{
	struct UMovieSceneAudioSection* AudioSection; // 0x18(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraAnimSectionData
{
	struct UCameraAnim* CameraAnim; // 0x0(0x8)
	float PlayRate; // 0x8(0x4)
	float PlayScale; // 0xC(0x4)
	float BlendInTime; // 0x10(0x4)
	float BlendOutTime; // 0x14(0x4)
	bool bLooping; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x18 (Inherited: 0x18)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraShakeSectionData
{
	struct UMatineeCameraShake* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	enum class ECameraShakePlaySpace PlaySpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x40 (Inherited: 0x18)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x18(0x20)
	struct FFrameNumber SectionStartTime; // 0x38(0x4)
	struct FFrameNumber SectionEndTime; // 0x3C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size: 0x20 (Inherited: 0x0)
struct FMovieSceneCameraShakeSourceTrigger
{
	struct UCameraShakeBase* ShakeClass; // 0x0(0x8)
	float PlayScale; // 0x8(0x4)
	enum class ECameraShakePlaySpace PlaySpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRotator UserDefinedPlaySpace; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x38 (Inherited: 0x18)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FFrameNumber> TriggerTimes; // 0x18(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x28(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x8)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{
	struct FLinearColor Color; // 0x8(0x10)
	struct FFrameNumber Time; // 0x18(0x4)
	uint8_t Pad_0x1C[0x1C]; // 0x1C(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x30(0x280)
	enum class EMovieSceneBlendType BlendType; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x7]; // 0x2B1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEvent
{
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventPtrs
{
	struct UFunction* Function; // 0x0(0x8)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x8(0x20)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x0)
struct FMovieSceneEventPayloadVariable
{
	struct FString Value; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x8(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x88 (Inherited: 0x8)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x8(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x18(0x10)
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)
};

// Object: ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x0)
struct FEventPayload
{
	struct FName EventName; // 0x0(0x8)
	struct FMovieSceneEventParameters Parameters; // 0x8(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x0)
struct FMovieSceneEventParameters
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size: 0x48 (Inherited: 0x0)
struct FMovieSceneEventTriggerData
{
	struct FMovieSceneEventPtrs Ptrs; // 0x0(0x28)
	struct FGuid ObjectBindingId; // 0x28(0x10)
	uint8_t Pad_0x38[0x10]; // 0x38(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xA8 (Inherited: 0x18)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData EventData; // 0x18(0x88)
	uint8_t bFireEventsWhenForwards : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t bFireEventsWhenBackwards : 1; // 0xA0(0x1), Mask(0x2)
	uint8_t BitPad_0xA0_2 : 6; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xD0 (Inherited: 0x18)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel FadeCurve; // 0x18(0xA0)
	struct FLinearColor FadeColor; // 0xB8(0x10)
	uint8_t bFadeAudio : 1; // 0xC8(0x1), Mask(0x1)
	uint8_t BitPad_0xC8_1 : 7; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x78 (Inherited: 0x18)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x18(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x28(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x38(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x48(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x58(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x68(0x10)
};

// Object: ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5A8 (Inherited: 0x0)
struct FTransformParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x8(0x1E0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x1E8(0x1E0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3C8(0x1E0)
};

// Object: ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x288 (Inherited: 0x0)
struct FColorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel RedCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel GreenCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x148(0xA0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x1E8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x1E8 (Inherited: 0x0)
struct FVectorParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
	struct FMovieSceneFloatChannel ZCurve; // 0x148(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x148 (Inherited: 0x0)
struct FVector2DParameterNameAndCurves
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel XCurve; // 0x8(0xA0)
	struct FMovieSceneFloatChannel YCurve; // 0xA8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x98 (Inherited: 0x0)
struct FBoolParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x8(0x90)
};

// Object: ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xA8 (Inherited: 0x0)
struct FScalarParameterNameAndCurve
{
	struct FName ParameterName; // 0x0(0x8)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x8(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{
	struct UMaterialParameterCollection* MPC; // 0x78(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0xF0 (Inherited: 0x30)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x30(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x80 (Inherited: 0x78)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{
	int32_t materialIndex; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x78 (Inherited: 0x78)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x98 (Inherited: 0x98)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xB0 (Inherited: 0x18)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneParticleChannel ParticleKeys; // 0x18(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0xD8 (Inherited: 0x18)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{
	int32_t materialIndex; // 0x14(0x4)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x18(0xC0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2B8 (Inherited: 0x30)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x30(0x280)
	int32_t NumChannelsUsed; // 0x2B0(0x4)
	enum class EMovieSceneBlendType BlendType; // 0x2B4(0x1)
	uint8_t Pad_0x2B5[0x3]; // 0x2B5(0x3)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xD0 (Inherited: 0x30)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel StringCurve; // 0x30(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x30(0x90)
	enum class EMovieSceneBlendType BlendType; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel EnumCurve; // 0x30(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xC8 (Inherited: 0x30)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneByteChannel ByteCurve; // 0x30(0x98)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xC0 (Inherited: 0x30)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FMovieSceneBoolChannel BoolCurve; // 0x30(0x90)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xD8 (Inherited: 0x0)
struct FMovieSceneSkeletalAnimationParams
{
	struct UAnimSequenceBase* Animation; // 0x0(0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
	struct FFrameNumber StartFrameOffset; // 0xC(0x4)
	struct FFrameNumber EndFrameOffset; // 0x10(0x4)
	float PlayRate; // 0x14(0x4)
	uint8_t bReverse : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FName SlotName; // 0x1C(0x8)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xA0)
	bool bSkipAnimNotifiers; // 0xC8(0x1)
	bool bForceCustomMode; // 0xC9(0x1)
	uint8_t Pad_0xCA[0x2]; // 0xCA(0x2)
	float StartOffset; // 0xCC(0x4)
	float EndOffset; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0xF8 (Inherited: 0x18)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18(0xE0)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xE0 (Inherited: 0xD8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{
	struct FFrameNumber SectionStartTime; // 0xD4(0x4)
	struct FFrameNumber SectionEndTime; // 0xD8(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size: 0x30 (Inherited: 0x0)
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xB8 (Inherited: 0x18)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel SlomoCurve; // 0x18(0xA0)
};

// Object: ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size: 0x8 (Inherited: 0x0)
struct FLevelVisibilityComponentData
{
	struct UMovieSceneLevelVisibilitySection* Section; // 0x0(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x8)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{
	struct FFrameNumber Time; // 0x8(0x4)
	uint8_t Pad_0xC[0x1C]; // 0xC(0x1C)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct FVector4 Vector; // 0x30(0x10)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector Vector; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{
	struct FVector2D Vector; // 0x28(0x8)
};

// Object: ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xC0 (Inherited: 0xC0)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{
};

// Package: InputCore
// Structs: 1

// Object: ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x0)
struct FKey
{
	struct FName KeyName; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Package: SlateCore
// Structs: 48

// Object: ScriptStruct SlateCore.Geometry
// Size: 0x38 (Inherited: 0x0)
struct FGeometry
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct SlateCore.SlateBrush
// Size: 0x88 (Inherited: 0x0)
struct FSlateBrush
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FVector2D ImageSize; // 0x8(0x8)
	struct FMargin Margin; // 0x10(0x10)
	struct FSlateColor TintColor; // 0x20(0x28)
	struct UObject* ResourceObject; // 0x48(0x8)
	struct FName ResourceName; // 0x50(0x8)
	struct FBox2D UVRegion; // 0x58(0x14)
	uint8_t DrawAs; // 0x6C(0x1)
	uint8_t Tiling; // 0x6D(0x1)
	uint8_t Mirroring; // 0x6E(0x1)
	uint8_t ImageType; // 0x6F(0x1)
	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	uint8_t bIsDynamicallyLoaded : 1; // 0x80(0x1), Mask(0x1)
	uint8_t bHasUObject : 1; // 0x80(0x1), Mask(0x2)
	uint8_t BitPad_0x80_2 : 6; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)
};

// Object: ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x0)
struct FSlateColor
{
	struct FLinearColor SpecifiedColor; // 0x0(0x10)
	uint8_t ColorUseRule; // 0x10(0x1)
	uint8_t Pad_0x11[0x17]; // 0x11(0x17)
};

// Object: ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x0)
struct FMargin
{
	float Left; // 0x0(0x4)
	float Top; // 0x4(0x4)
	float Right; // 0x8(0x4)
	float Bottom; // 0xC(0x4)
};

// Object: ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x0)
struct FInputEvent
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : FInputEvent
{
	uint8_t Pad_0x18[0x58]; // 0x18(0x58)
};

// Object: ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : FInputEvent
{
	uint8_t Pad_0x18[0x20]; // 0x18(0x20)
};

// Object: ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : FInputEvent
{
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : FKeyEvent
{
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct SlateCore.SlateFontInfo
// Size: 0x58 (Inherited: 0x0)
struct FSlateFontInfo
{
	struct UObject* FontObject; // 0x0(0x8)
	struct UObject* FontMaterial; // 0x8(0x8)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FName TypefaceFontName; // 0x40(0x8)
	int32_t Size; // 0x48(0x4)
	int32_t LetterSpacing; // 0x4C(0x4)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x0)
struct FFontOutlineSettings
{
	int32_t OutlineSize; // 0x0(0x4)
	bool bSeparateFillAlpha; // 0x4(0x1)
	bool bApplyOutlineToDropShadows; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	struct UObject* OutlineMaterial; // 0x8(0x8)
	struct FLinearColor OutlineColor; // 0x10(0x10)
};

// Object: ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x8 (Inherited: 0x0)
struct FSlateWidgetStyle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.TableRowStyle
// Size: 0x7C8 (Inherited: 0x8)
struct FTableRowStyle : FSlateWidgetStyle
{
	struct FSlateBrush SelectorFocusedBrush; // 0x8(0x88)
	struct FSlateBrush ActiveHoveredBrush; // 0x90(0x88)
	struct FSlateBrush ActiveBrush; // 0x118(0x88)
	struct FSlateBrush InactiveHoveredBrush; // 0x1A0(0x88)
	struct FSlateBrush InactiveBrush; // 0x228(0x88)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2B0(0x88)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x338(0x88)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3C0(0x88)
	struct FSlateBrush OddRowBackgroundBrush; // 0x448(0x88)
	struct FSlateColor TextColor; // 0x4D0(0x28)
	struct FSlateColor SelectedTextColor; // 0x4F8(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x520(0x88)
	struct FSlateBrush DropIndicator_Onto; // 0x5A8(0x88)
	struct FSlateBrush DropIndicator_Below; // 0x630(0x88)
	struct FSlateBrush ActiveHighlightedBrush; // 0x6B8(0x88)
	struct FSlateBrush InactiveHighlightedBrush; // 0x740(0x88)
};

// Object: ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x3F0 (Inherited: 0x8)
struct FComboBoxStyle : FSlateWidgetStyle
{
	struct FComboButtonStyle ComboButtonStyle; // 0x8(0x3B8)
	struct FSlateSound PressedSlateSound; // 0x3C0(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x3D8(0x18)
};

// Object: ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x0)
struct FSlateSound
{
	struct UObject* ResourceObject; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3B8 (Inherited: 0x8)
struct FComboButtonStyle : FSlateWidgetStyle
{
	struct FButtonStyle ButtonStyle; // 0x8(0x278)
	struct FSlateBrush DownArrowImage; // 0x280(0x88)
	struct FVector2D ShadowOffset; // 0x308(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x310(0x10)
	struct FSlateBrush MenuBorderBrush; // 0x320(0x88)
	struct FMargin MenuBorderPadding; // 0x3A8(0x10)
};

// Object: ScriptStruct SlateCore.ButtonStyle
// Size: 0x278 (Inherited: 0x8)
struct FButtonStyle : FSlateWidgetStyle
{
	struct FSlateBrush Normal; // 0x8(0x88)
	struct FSlateBrush Hovered; // 0x90(0x88)
	struct FSlateBrush Pressed; // 0x118(0x88)
	struct FSlateBrush Disabled; // 0x1A0(0x88)
	struct FMargin NormalPadding; // 0x228(0x10)
	struct FMargin PressedPadding; // 0x238(0x10)
	struct FSlateSound PressedSlateSound; // 0x248(0x18)
	struct FSlateSound HoveredSlateSound; // 0x260(0x18)
};

// Object: ScriptStruct SlateCore.EditableTextStyle
// Size: 0x220 (Inherited: 0x8)
struct FEditableTextStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x88(0x88)
	struct FSlateBrush BackgroundImageComposing; // 0x110(0x88)
	struct FSlateBrush CaretImage; // 0x198(0x88)
};

// Object: ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x7F8 (Inherited: 0x8)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImageNormal; // 0x8(0x88)
	struct FSlateBrush BackgroundImageHovered; // 0x90(0x88)
	struct FSlateBrush BackgroundImageFocused; // 0x118(0x88)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1A0(0x88)
	struct FMargin Padding; // 0x228(0x10)
	struct FSlateFontInfo Font; // 0x238(0x58)
	struct FSlateColor ForegroundColor; // 0x290(0x28)
	struct FSlateColor BackgroundColor; // 0x2B8(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x2E0(0x28)
	struct FMargin HScrollBarPadding; // 0x308(0x10)
	struct FMargin VScrollBarPadding; // 0x318(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x328(0x4D0)
};

// Object: ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x4D0 (Inherited: 0x8)
struct FScrollBarStyle : FSlateWidgetStyle
{
	struct FSlateBrush HorizontalBackgroundImage; // 0x8(0x88)
	struct FSlateBrush VerticalBackgroundImage; // 0x90(0x88)
	struct FSlateBrush VerticalTopSlotImage; // 0x118(0x88)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1A0(0x88)
	struct FSlateBrush VerticalBottomSlotImage; // 0x228(0x88)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2B0(0x88)
	struct FSlateBrush NormalThumbImage; // 0x338(0x88)
	struct FSlateBrush HoveredThumbImage; // 0x3C0(0x88)
	struct FSlateBrush DraggedThumbImage; // 0x448(0x88)
};

// Object: ScriptStruct SlateCore.TextBlockStyle
// Size: 0x270 (Inherited: 0x8)
struct FTextBlockStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font; // 0x8(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x28)
	struct FVector2D ShadowOffset; // 0x88(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x90(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xA0(0x28)
	struct FLinearColor HighlightColor; // 0xC8(0x10)
	struct FSlateBrush HighlightShape; // 0xD8(0x88)
	struct FSlateBrush StrikeBrush; // 0x160(0x88)
	struct FSlateBrush UnderlineBrush; // 0x1E8(0x88)
};

// Object: ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x2E8 (Inherited: 0x8)
struct FSpinBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundBrush; // 0x8(0x88)
	struct FSlateBrush HoveredBackgroundBrush; // 0x90(0x88)
	struct FSlateBrush ActiveFillBrush; // 0x118(0x88)
	struct FSlateBrush InactiveFillBrush; // 0x1A0(0x88)
	struct FSlateBrush ArrowsImage; // 0x228(0x88)
	struct FSlateColor ForegroundColor; // 0x2B0(0x28)
	struct FMargin TextPadding; // 0x2D8(0x10)
};

// Object: ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x0)
struct FCompositeFont
{
	struct FTypeface DefaultTypeface; // 0x0(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x0)
struct FCompositeFallbackFont
{
	struct FTypeface Typeface; // 0x0(0x10)
	float ScalingFactor; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x0)
struct FTypeface
{
	struct TArray<struct FTypefaceEntry> Fonts; // 0x0(0x10)
};

// Object: ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 (Inherited: 0x0)
struct FTypefaceEntry
{
	struct FName Name; // 0x0(0x8)
	struct FFontData Font; // 0x8(0x20)
};

// Object: ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x0)
struct FFontData
{
	struct FString FontFilename; // 0x0(0x10)
	enum class EFontHinting Hinting; // 0x10(0x1)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	int32_t SubFaceIndex; // 0x14(0x4)
	struct UObject* FontFaceAsset; // 0x18(0x8)
};

// Object: ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont
{
	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)
};

// Object: ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : FInputEvent
{
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
};

// Object: ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x8 (Inherited: 0x0)
struct FCaptureLostEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.FocusEvent
// Size: 0x8 (Inherited: 0x0)
struct FFocusEvent
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct SlateCore.WindowStyle
// Size: 0x1060 (Inherited: 0x8)
struct FWindowStyle : FSlateWidgetStyle
{
	struct FButtonStyle MinimizeButtonStyle; // 0x8(0x278)
	struct FButtonStyle MaximizeButtonStyle; // 0x280(0x278)
	struct FButtonStyle RestoreButtonStyle; // 0x4F8(0x278)
	struct FButtonStyle CloseButtonStyle; // 0x770(0x278)
	struct FTextBlockStyle TitleTextStyle; // 0x9E8(0x270)
	struct FSlateBrush ActiveTitleBrush; // 0xC58(0x88)
	struct FSlateBrush InactiveTitleBrush; // 0xCE0(0x88)
	struct FSlateBrush FlashTitleBrush; // 0xD68(0x88)
	struct FSlateColor BackgroundColor; // 0xDF0(0x28)
	struct FSlateBrush OutlineBrush; // 0xE18(0x88)
	struct FSlateColor OutlineColor; // 0xEA0(0x28)
	struct FSlateBrush BorderBrush; // 0xEC8(0x88)
	struct FSlateBrush BackgroundBrush; // 0xF50(0x88)
	struct FSlateBrush ChildBackgroundBrush; // 0xFD8(0x88)
};

// Object: ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x118 (Inherited: 0x8)
struct FScrollBorderStyle : FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush; // 0x8(0x88)
	struct FSlateBrush BottomShadowBrush; // 0x90(0x88)
};

// Object: ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x228 (Inherited: 0x8)
struct FScrollBoxStyle : FSlateWidgetStyle
{
	struct FSlateBrush TopShadowBrush; // 0x8(0x88)
	struct FSlateBrush BottomShadowBrush; // 0x90(0x88)
	struct FSlateBrush LeftShadowBrush; // 0x118(0x88)
	struct FSlateBrush RightShadowBrush; // 0x1A0(0x88)
};

// Object: ScriptStruct SlateCore.DockTabStyle
// Size: 0x700 (Inherited: 0x8)
struct FDockTabStyle : FSlateWidgetStyle
{
	struct FButtonStyle CloseButtonStyle; // 0x8(0x278)
	struct FSlateBrush NormalBrush; // 0x280(0x88)
	struct FSlateBrush ActiveBrush; // 0x308(0x88)
	struct FSlateBrush ColorOverlayTabBrush; // 0x390(0x88)
	struct FSlateBrush ColorOverlayIconBrush; // 0x418(0x88)
	struct FSlateBrush ForegroundBrush; // 0x4A0(0x88)
	struct FSlateBrush HoveredBrush; // 0x528(0x88)
	struct FSlateBrush ContentAreaBrush; // 0x5B0(0x88)
	struct FSlateBrush TabWellBrush; // 0x638(0x88)
	struct FMargin TabPadding; // 0x6C0(0x10)
	float OverlapWidth; // 0x6D0(0x4)
	uint8_t Pad_0x6D4[0x4]; // 0x6D4(0x4)
	struct FSlateColor FlashColor; // 0x6D8(0x28)
};

// Object: ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xB70 (Inherited: 0x8)
struct FHeaderRowStyle : FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle ColumnStyle; // 0x8(0x4D0)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x4D8(0x4D0)
	struct FSplitterStyle ColumnSplitterStyle; // 0x9A8(0x118)
	struct FSlateBrush BackgroundBrush; // 0xAC0(0x88)
	struct FSlateColor ForegroundColor; // 0xB48(0x28)
};

// Object: ScriptStruct SlateCore.SplitterStyle
// Size: 0x118 (Inherited: 0x8)
struct FSplitterStyle : FSlateWidgetStyle
{
	struct FSlateBrush HandleNormalBrush; // 0x8(0x88)
	struct FSlateBrush HandleHighlightBrush; // 0x90(0x88)
};

// Object: ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x4D0 (Inherited: 0x8)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{
	struct FSlateBrush SortPrimaryAscendingImage; // 0x8(0x88)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x90(0x88)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x118(0x88)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1A0(0x88)
	struct FSlateBrush NormalBrush; // 0x228(0x88)
	struct FSlateBrush HoveredBrush; // 0x2B0(0x88)
	struct FSlateBrush MenuDropdownImage; // 0x338(0x88)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3C0(0x88)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448(0x88)
};

// Object: ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0x98 (Inherited: 0x8)
struct FInlineTextImageStyle : FSlateWidgetStyle
{
	struct FSlateBrush Image; // 0x8(0x88)
	int16_t Baseline; // 0x90(0x2)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)
};

// Object: ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x5F0 (Inherited: 0x8)
struct FVolumeControlStyle : FSlateWidgetStyle
{
	struct FSliderStyle SliderStyle; // 0x8(0x340)
	struct FSlateBrush HighVolumeImage; // 0x348(0x88)
	struct FSlateBrush MidVolumeImage; // 0x3D0(0x88)
	struct FSlateBrush LowVolumeImage; // 0x458(0x88)
	struct FSlateBrush NoVolumeImage; // 0x4E0(0x88)
	struct FSlateBrush MutedImage; // 0x568(0x88)
};

// Object: ScriptStruct SlateCore.SliderStyle
// Size: 0x340 (Inherited: 0x8)
struct FSliderStyle : FSlateWidgetStyle
{
	struct FSlateBrush NormalBarImage; // 0x8(0x88)
	struct FSlateBrush HoveredBarImage; // 0x90(0x88)
	struct FSlateBrush DisabledBarImage; // 0x118(0x88)
	struct FSlateBrush NormalThumbImage; // 0x1A0(0x88)
	struct FSlateBrush HoveredThumbImage; // 0x228(0x88)
	struct FSlateBrush DisabledThumbImage; // 0x2B0(0x88)
	float BarThickness; // 0x338(0x4)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
};

// Object: ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xA90 (Inherited: 0x8)
struct FSearchBoxStyle : FSlateWidgetStyle
{
	struct FEditableTextBoxStyle TextBoxStyle; // 0x8(0x7F8)
	struct FSlateFontInfo ActiveFontInfo; // 0x800(0x58)
	struct FSlateBrush UpArrowImage; // 0x858(0x88)
	struct FSlateBrush DownArrowImage; // 0x8E0(0x88)
	struct FSlateBrush GlassImage; // 0x968(0x88)
	struct FSlateBrush ClearImage; // 0x9F0(0x88)
	struct FMargin ImagePadding; // 0xA78(0x10)
	bool bLeftAlignButtons; // 0xA88(0x1)
	uint8_t Pad_0xA89[0x7]; // 0xA89(0x7)
};

// Object: ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x120 (Inherited: 0x8)
struct FExpandableAreaStyle : FSlateWidgetStyle
{
	struct FSlateBrush CollapsedImage; // 0x8(0x88)
	struct FSlateBrush ExpandedImage; // 0x90(0x88)
	float RolloutAnimationSeconds; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1A0 (Inherited: 0x8)
struct FProgressBarStyle : FSlateWidgetStyle
{
	struct FSlateBrush BackgroundImage; // 0x8(0x88)
	struct FSlateBrush FillImage; // 0x90(0x88)
	struct FSlateBrush MarqueeImage; // 0x118(0x88)
};

// Object: ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xA70 (Inherited: 0x8)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x8(0x7F8)
	struct FTextBlockStyle TextStyle; // 0x800(0x270)
};

// Object: ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x500 (Inherited: 0x8)
struct FHyperlinkStyle : FSlateWidgetStyle
{
	struct FButtonStyle UnderlineStyle; // 0x8(0x278)
	struct FTextBlockStyle TextStyle; // 0x280(0x270)
	struct FMargin Padding; // 0x4F0(0x10)
};

// Object: ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x580 (Inherited: 0x8)
struct FCheckBoxStyle : FSlateWidgetStyle
{
	uint8_t CheckBoxType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FSlateBrush UncheckedImage; // 0x10(0x88)
	struct FSlateBrush UncheckedHoveredImage; // 0x98(0x88)
	struct FSlateBrush UncheckedPressedImage; // 0x120(0x88)
	struct FSlateBrush CheckedImage; // 0x1A8(0x88)
	struct FSlateBrush CheckedHoveredImage; // 0x230(0x88)
	struct FSlateBrush CheckedPressedImage; // 0x2B8(0x88)
	struct FSlateBrush UndeterminedImage; // 0x340(0x88)
	struct FSlateBrush UndeterminedHoveredImage; // 0x3C8(0x88)
	struct FSlateBrush UndeterminedPressedImage; // 0x450(0x88)
	struct FMargin Padding; // 0x4D8(0x10)
	struct FSlateColor ForegroundColor; // 0x4E8(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x510(0x28)
	struct FSlateSound CheckedSlateSound; // 0x538(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x550(0x18)
	struct FSlateSound HoveredSlateSound; // 0x568(0x18)
};

// Package: Slate
// Structs: 7

// Object: ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x1 (Inherited: 0x0)
struct FVirtualKeyboardOptions
{
	bool bEnableAutocorrect; // 0x0(0x1)
};

// Object: ScriptStruct Slate.InputChord
// Size: 0x20 (Inherited: 0x0)
struct FInputChord
{
	struct FKey Key; // 0x0(0x18)
	uint8_t bShift : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bCtrl : 1; // 0x18(0x1), Mask(0x2)
	uint8_t bAlt : 1; // 0x18(0x1), Mask(0x4)
	uint8_t bCmd : 1; // 0x18(0x1), Mask(0x8)
	uint8_t BitPad_0x18_4 : 4; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct Slate.Anchors
// Size: 0x10 (Inherited: 0x0)
struct FAnchors
{
	struct FVector2D Minimum; // 0x0(0x8)
	struct FVector2D Maximum; // 0x8(0x8)
};

// Object: ScriptStruct Slate.CustomizedToolMenu
// Size: 0x1E8 (Inherited: 0x0)
struct FCustomizedToolMenu
{
	struct FName Name; // 0x0(0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xA8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xF8(0x10)
	uint8_t Pad_0x108[0xE0]; // 0x108(0xE0)
};

// Object: ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x0)
struct FCustomizedToolMenuNameArray
{
	struct TArray<struct FName> Names; // 0x0(0x10)
};

// Object: ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuSection
{
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// Object: ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x4 (Inherited: 0x0)
struct FCustomizedToolMenuEntry
{
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// Package: ImageWriteQueue
// Structs: 1

// Object: ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x0)
struct FImageWriteOptions
{
	enum class EDesiredImageFormat Format; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FDelegate OnComplete; // 0x4(0x10)
	int32_t CompressionQuality; // 0x14(0x4)
	bool bOverwriteFile; // 0x18(0x1)
	bool bAsync; // 0x19(0x1)
	uint8_t Pad_0x1A[0x46]; // 0x1A(0x46)
};

// Package: MaterialShaderQualitySettings
// Structs: 1

// Object: ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x9 (Inherited: 0x0)
struct FMaterialQualityOverrides
{
	bool bDiscardQualityDuringCook; // 0x0(0x1)
	bool bEnableOverride; // 0x1(0x1)
	bool bForceFullyRough; // 0x2(0x1)
	bool bForceNonMetal; // 0x3(0x1)
	bool bForceDisableLMDirectionality; // 0x4(0x1)
	bool bForceLQReflections; // 0x5(0x1)
	bool bForceDisablePreintegratedGF; // 0x6(0x1)
	bool bDisableMaterialNormalCalculation; // 0x7(0x1)
	enum class EMobileShadowQuality MobileShadowQuality; // 0x8(0x1)
};

// Package: EngineSettings
// Structs: 2

// Object: ScriptStruct EngineSettings.AutoCompleteCommand
// Size: 0x28 (Inherited: 0x0)
struct FAutoCompleteCommand
{
	struct FString Command; // 0x0(0x10)
	struct FString Desc; // 0x10(0x10)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct EngineSettings.GameModeName
// Size: 0x28 (Inherited: 0x0)
struct FGameModeName
{
	struct FString Name; // 0x0(0x10)
	struct FSoftClassPath GameMode; // 0x10(0x18)
};

// Package: PhysicsCore
// Structs: 1

// Object: ScriptStruct PhysicsCore.BodyInstanceCore
// Size: 0x18 (Inherited: 0x0)
struct FBodyInstanceCore
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	uint8_t bSimulatePhysics : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverrideMass : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bEnableGravity : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bAutoWeld : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bStartAwake : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bGenerateWakeEvents : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bUpdateMassWhenScaleChanges : 1; // 0x10(0x1), Mask(0x40)
	uint8_t BitPad_0x10_7 : 1; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Package: MRMesh
// Structs: 1

// Object: ScriptStruct MRMesh.MRMeshConfiguration
// Size: 0x1 (Inherited: 0x0)
struct FMRMeshConfiguration
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Package: AugmentedReality
// Structs: 20

// Object: ScriptStruct AugmentedReality.TrackedGeometryGroup
// Size: 0x18 (Inherited: 0x0)
struct FTrackedGeometryGroup
{
	struct AARActor* ARActor; // 0x0(0x8)
	struct UARComponent* ARComponent; // 0x8(0x8)
	struct UARTrackedGeometry* TrackedGeometry; // 0x10(0x8)
};

// Object: ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// Size: 0x70 (Inherited: 0x0)
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	float Longitude; // 0x50(0x4)
	float Latitude; // 0x54(0x4)
	float AltitudeMeters; // 0x58(0x4)
	enum class EARAltitudeSource AltitudeSource; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct FString AnchorName; // 0x60(0x10)
};

// Object: ScriptStruct AugmentedReality.ARSessionPayload
// Size: 0x18 (Inherited: 0x0)
struct FARSessionPayload
{
	int32_t ConfigFlags; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* DefaultMeshMaterial; // 0x8(0x8)
	struct UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10(0x8)
};

// Object: ScriptStruct AugmentedReality.ARMeshUpdatePayload
// Size: 0x60 (Inherited: 0x0)
struct FARMeshUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	enum class EARObjectClassification ObjectClassification; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct AugmentedReality.ARObjectUpdatePayload
// Size: 0x30 (Inherited: 0x0)
struct FARObjectUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
};

// Object: ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// Size: 0x30 (Inherited: 0x0)
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
};

// Object: ScriptStruct AugmentedReality.ARPoseUpdatePayload
// Size: 0x40 (Inherited: 0x0)
struct FARPoseUpdatePayload
{
	struct FTransform WorldTransform; // 0x0(0x30)
	struct TArray<struct FTransform> JointTransforms; // 0x30(0x10)
};

// Object: ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// Size: 0x70 (Inherited: 0x0)
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Extents; // 0x50(0xC)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString QRCode; // 0x60(0x10)
};

// Object: ScriptStruct AugmentedReality.ARImageUpdatePayload
// Size: 0x60 (Inherited: 0x0)
struct FARImageUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct UARCandidateImage* DetectedImage; // 0x50(0x8)
	struct FVector2D EstimatedSize; // 0x58(0x8)
};

// Object: ScriptStruct AugmentedReality.ARFaceUpdatePayload
// Size: 0x40 (Inherited: 0x0)
struct FARFaceUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	struct FVector LeftEyePosition; // 0x18(0xC)
	struct FVector RightEyePosition; // 0x24(0xC)
	struct FVector LookAtTarget; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct AugmentedReality.ARPointUpdatePayload
// Size: 0x1 (Inherited: 0x0)
struct FARPointUpdatePayload
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// Size: 0x80 (Inherited: 0x0)
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform WorldTransform; // 0x20(0x30)
	struct FVector Center; // 0x50(0xC)
	struct FVector Extents; // 0x5C(0xC)
	struct TArray<struct FVector> BoundaryVertices; // 0x68(0x10)
	enum class EARObjectClassification ObjectClassification; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
};

// Object: ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size: 0x8 (Inherited: 0x0)
struct FARSharedWorldReplicationState
{
	int32_t PreviewImageOffset; // 0x0(0x4)
	int32_t ARWorldOffset; // 0x4(0x4)
};

// Object: ScriptStruct AugmentedReality.ARTraceResult
// Size: 0x60 (Inherited: 0x0)
struct FARTraceResult
{
	float DistanceFromCamera; // 0x0(0x4)
	enum class EARLineTraceChannels TraceChannel; // 0x4(0x1)
	uint8_t Pad_0x5[0xB]; // 0x5(0xB)
	struct FTransform LocalTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x8)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)
};

// Object: ScriptStruct AugmentedReality.ARCameraIntrinsics
// Size: 0x18 (Inherited: 0x0)
struct FARCameraIntrinsics
{
	struct FIntPoint ImageResolution; // 0x0(0x8)
	struct FVector2D FocalLength; // 0x8(0x8)
	struct FVector2D PrincipalPoint; // 0x10(0x8)
};

// Object: ScriptStruct AugmentedReality.ARPose3D
// Size: 0x50 (Inherited: 0x0)
struct FARPose3D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size: 0x28 (Inherited: 0x0)
struct FARSkeletonDefinition
{
	int32_t NumJoints; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FName> JointNames; // 0x8(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// Object: ScriptStruct AugmentedReality.ARPose2D
// Size: 0x48 (Inherited: 0x0)
struct FARPose2D
{
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
};

// Object: ScriptStruct AugmentedReality.ARVideoFormat
// Size: 0xC (Inherited: 0x0)
struct FARVideoFormat
{
	int32_t FPS; // 0x0(0x4)
	int32_t Width; // 0x4(0x4)
	int32_t Height; // 0x8(0x4)
};

// Object: ScriptStruct AugmentedReality.ARSessionStatus
// Size: 0x18 (Inherited: 0x0)
struct FARSessionStatus
{
	struct FString AdditionalInfo; // 0x0(0x10)
	enum class EARSessionStatus Status; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Package: HeadMountedDisplay
// Structs: 4

// Object: ScriptStruct HeadMountedDisplay.XRMotionControllerData
// Size: 0xA0 (Inherited: 0x0)
struct FXRMotionControllerData
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName DeviceName; // 0x4(0x8)
	struct FGuid ApplicationInstanceID; // 0xC(0x10)
	enum class EXRVisualType DeviceVisualType; // 0x1C(0x1)
	enum class EControllerHand HandIndex; // 0x1D(0x1)
	enum class ETrackingStatus TrackingStatus; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct FVector GripPosition; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat GripRotation; // 0x30(0x10)
	struct FVector AimPosition; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FQuat AimRotation; // 0x50(0x10)
	struct TArray<struct FVector> HandKeyPositions; // 0x60(0x10)
	struct TArray<struct FQuat> HandKeyRotations; // 0x70(0x10)
	struct TArray<float> HandKeyRadii; // 0x80(0x10)
	bool bIsGrasped; // 0x90(0x1)
	uint8_t Pad_0x91[0xF]; // 0x91(0xF)
};

// Object: ScriptStruct HeadMountedDisplay.XRHMDData
// Size: 0x40 (Inherited: 0x0)
struct FXRHMDData
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName DeviceName; // 0x4(0x8)
	struct FGuid ApplicationInstanceID; // 0xC(0x10)
	enum class ETrackingStatus TrackingStatus; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FVector position; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Rotation; // 0x30(0x10)
};

// Object: ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0xC (Inherited: 0x0)
struct FXRDeviceId
{
	struct FName SystemName; // 0x0(0x8)
	int32_t DeviceID; // 0x8(0x4)
};

// Object: ScriptStruct HeadMountedDisplay.XRGestureConfig
// Size: 0x6 (Inherited: 0x0)
struct FXRGestureConfig
{
	bool bTap; // 0x0(0x1)
	bool bHold; // 0x1(0x1)
	enum class ESpatialInputGestureAxis AxisGesture; // 0x2(0x1)
	bool bNavigationAxisX; // 0x3(0x1)
	bool bNavigationAxisY; // 0x4(0x1)
	bool bNavigationAxisZ; // 0x5(0x1)
};

// Package: Foliage
// Structs: 3

// Object: ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size: 0xC (Inherited: 0x0)
struct FFoliageVertexColorChannelMask
{
	uint8_t UseMask : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MaskThreshold; // 0x4(0x4)
	uint8_t InvertMask : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct Foliage.FoliageTypeObject
// Size: 0x20 (Inherited: 0x0)
struct FFoliageTypeObject
{
	struct UObject* FoliageTypeObject; // 0x0(0x8)
	struct UFoliageType* TypeInstance; // 0x8(0x8)
	bool bIsAsset; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UFoliageType_InstancedStaticMesh* Type; // 0x18(0x8)
};

// Object: ScriptStruct Foliage.ProceduralFoliageInstance
// Size: 0x50 (Inherited: 0x0)
struct FProceduralFoliageInstance
{
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Location; // 0x10(0xC)
	float Age; // 0x1C(0x4)
	struct FVector Normal; // 0x20(0xC)
	float Scale; // 0x2C(0x4)
	struct UFoliageType* Type; // 0x30(0x8)
	uint8_t Pad_0x38[0x18]; // 0x38(0x18)
};

// Package: Landscape
// Structs: 26

// Object: ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x0)
struct FLandscapeLayer
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	bool bVisible; // 0x18(0x1)
	bool bLocked; // 0x19(0x1)
	uint8_t Pad_0x1A[0x2]; // 0x1A(0x2)
	float HeightmapAlpha; // 0x1C(0x4)
	float WeightmapAlpha; // 0x20(0x4)
	uint8_t BlendMode; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// Object: ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeLayerBrush
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeLayerComponentData
{
	struct FHeightmapData HeightmapData; // 0x0(0x8)
	struct FWeightmapData WeightmapData; // 0x8(0x30)
};

// Object: ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x0)
struct FWeightmapData
{
	struct TArray<struct UTexture2D*> Textures; // 0x0(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// Object: ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x0)
struct FWeightmapLayerAllocationInfo
{
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x0(0x8)
	uint8_t WeightmapTextureIndex; // 0x8(0x1)
	uint8_t WeightmapTextureChannel; // 0x9(0x1)
	uint8_t Pad_0xA[0x6]; // 0xA(0x6)
};

// Object: ScriptStruct Landscape.HeightmapData
// Size: 0x8 (Inherited: 0x0)
struct FHeightmapData
{
	struct UTexture2D* Texture; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt LodIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeEditToolRenderData
{
	struct UMaterialInterface* ToolMaterial; // 0x0(0x8)
	struct UMaterialInterface* GizmoMaterial; // 0x8(0x8)
	int32_t SelectedType; // 0x10(0x4)
	int32_t DebugChannelR; // 0x14(0x4)
	int32_t DebugChannelG; // 0x18(0x4)
	int32_t DebugChannelB; // 0x1C(0x4)
	struct UTexture2D* DataTexture; // 0x20(0x8)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x8)
	struct UTexture2D* DirtyTexture; // 0x30(0x8)
};

// Object: ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x0)
struct FGizmoSelectData
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct Landscape.GrassVariety
// Size: 0x58 (Inherited: 0x0)
struct FGrassVariety
{
	struct UStaticMesh* GrassMesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x8(0x10)
	struct FPerPlatformFloat GrassDensity; // 0x18(0x4)
	bool bUseGrid; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float PlacementJitter; // 0x20(0x4)
	struct FPerPlatformInt StartCullDistance; // 0x24(0x4)
	struct FPerPlatformInt EndCullDistance; // 0x28(0x4)
	int32_t MinLOD; // 0x2C(0x4)
	enum class EGrassScaling Scaling; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	struct FFloatInterval ScaleX; // 0x34(0x8)
	struct FFloatInterval ScaleY; // 0x3C(0x8)
	struct FFloatInterval ScaleZ; // 0x44(0x8)
	bool RandomRotation; // 0x4C(0x1)
	bool AlignToSurface; // 0x4D(0x1)
	bool bUseLandscapeLightmap; // 0x4E(0x1)
	struct FLightingChannels LightingChannels; // 0x4F(0x1)
	bool bReceivesDecals; // 0x50(0x1)
	bool bCastDynamicShadow; // 0x51(0x1)
	bool bKeepInstanceBufferCPUCopy; // 0x52(0x1)
	uint8_t Pad_0x53[0x5]; // 0x53(0x5)
};

// Object: ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeInfoLayerSettings
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
	struct FName LayerName; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0xC (Inherited: 0x0)
struct FLandscapeMaterialTextureStreamingInfo
{
	struct FName TextureName; // 0x0(0x8)
	float TexelFactor; // 0x8(0x4)
};

// Object: ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt LodIndex; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// Object: ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeImportLayerInfo
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x8 (Inherited: 0x0)
struct FLandscapeLayerStruct
{
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
};

// Object: ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x1 (Inherited: 0x0)
struct FLandscapeEditorLayerSettings
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x0)
struct FLandscapeSplineConnection
{
	struct ULandscapeSplineSegment* Segment; // 0x0(0x8)
	uint8_t End : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x1 (Inherited: 0x0)
struct FForeignWorldSplineData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x1 (Inherited: 0x0)
struct FForeignSplineSegmentData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.ForeignControlPointData
// Size: 0x1 (Inherited: 0x0)
struct FForeignControlPointData
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x0)
struct FLandscapeSplineMeshEntry
{
	struct UStaticMesh* Mesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x8(0x10)
	uint8_t bCenterH : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
	struct FVector2D CenterAdjust; // 0x1C(0x8)
	uint8_t bScaleToWidth : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
	struct FVector Scale; // 0x28(0xC)
	uint8_t Orientation; // 0x34(0x1)
	uint8_t ForwardAxis; // 0x35(0x1)
	uint8_t UpAxis; // 0x36(0x1)
	uint8_t Pad_0x37[0x1]; // 0x37(0x1)
};

// Object: ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x0)
struct FLandscapeSplineSegmentConnection
{
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x0(0x8)
	float TangentLen; // 0x8(0x4)
	struct FName SocketName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x0)
struct FLandscapeSplineInterpPoint
{
	struct FVector Center; // 0x0(0xC)
	struct FVector Left; // 0xC(0xC)
	struct FVector Right; // 0x18(0xC)
	struct FVector FalloffLeft; // 0x24(0xC)
	struct FVector FalloffRight; // 0x30(0xC)
	struct FVector LayerLeft; // 0x3C(0xC)
	struct FVector LayerRight; // 0x48(0xC)
	struct FVector LayerFalloffLeft; // 0x54(0xC)
	struct FVector LayerFalloffRight; // 0x60(0xC)
	float StartEndFalloff; // 0x6C(0x4)
};

// Object: ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x0)
struct FGrassInput
{
	struct FName Name; // 0x0(0x8)
	struct ULandscapeGrassType* GrassType; // 0x8(0x8)
	struct FExpressionInput Input; // 0x10(0xC)
	uint8_t Pad_0x1C[0xC]; // 0x1C(0xC)
};

// Object: ScriptStruct Landscape.LayerBlendInput
// Size: 0x48 (Inherited: 0x0)
struct FLayerBlendInput
{
	struct FName LayerName; // 0x0(0x8)
	uint8_t BlendType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FExpressionInput LayerInput; // 0xC(0xC)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FExpressionInput HeightInput; // 0x20(0xC)
	uint8_t Pad_0x2C[0x8]; // 0x2C(0x8)
	float PreviewWeight; // 0x34(0x4)
	struct FVector ConstLayerInput; // 0x38(0xC)
	float ConstHeightInput; // 0x44(0x4)
};

// Object: ScriptStruct Landscape.PhysicalMaterialInput
// Size: 0x20 (Inherited: 0x0)
struct FPhysicalMaterialInput
{
	struct UPhysicalMaterial* PhysicalMaterial; // 0x0(0x8)
	struct FExpressionInput Input; // 0x8(0xC)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Package: AnimationCore
// Structs: 19

// Object: ScriptStruct AnimationCore.CCDIKChainLink
// Size: 0x80 (Inherited: 0x0)
struct FCCDIKChainLink
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
};

// Object: ScriptStruct AnimationCore.Axis
// Size: 0x10 (Inherited: 0x0)
struct FAxis
{
	struct FVector Axis; // 0x0(0xC)
	bool bInLocalSpace; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AnimationCore.ConstraintData
// Size: 0x80 (Inherited: 0x0)
struct FConstraintData
{
	struct FConstraintDescriptor Constraint; // 0x0(0x10)
	float Weight; // 0x10(0x4)
	bool bMaintainOffset; // 0x14(0x1)
	uint8_t Pad_0x15[0xB]; // 0x15(0xB)
	struct FTransform Offset; // 0x20(0x30)
	struct FTransform CurrentTransform; // 0x50(0x30)
};

// Object: ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDescriptor
{
	enum class EConstraintType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
};

// Object: ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDescriptionEx
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FFilterOptionPerAxis AxesFilterOption; // 0x8(0x3)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x3 (Inherited: 0x0)
struct FFilterOptionPerAxis
{
	bool bX; // 0x0(0x1)
	bool bY; // 0x1(0x1)
	bool bZ; // 0x2(0x1)
};

// Object: ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x40 (Inherited: 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx
{
	struct FAxis LookAt_Axis; // 0xC(0x10)
	struct FAxis LookUp_Axis; // 0x1C(0x10)
	bool bUseLookUp; // 0x2C(0x1)
	struct FVector LookUpTarget; // 0x30(0xC)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x10 (Inherited: 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx
{
	enum class ETransformConstraintType TransformType; // 0xB(0x1)
};

// Object: ScriptStruct AnimationCore.TransformConstraint
// Size: 0x28 (Inherited: 0x0)
struct FTransformConstraint
{
	struct FConstraintDescription Operator; // 0x0(0xD)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName SourceNode; // 0x10(0x8)
	struct FName TargetNode; // 0x18(0x8)
	float Weight; // 0x20(0x4)
	bool bMaintainOffset; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct AnimationCore.ConstraintDescription
// Size: 0xD (Inherited: 0x0)
struct FConstraintDescription
{
	bool bTranslation; // 0x0(0x1)
	bool bRotation; // 0x1(0x1)
	bool bScale; // 0x2(0x1)
	bool bParent; // 0x3(0x1)
	struct FFilterOptionPerAxis TranslationAxes; // 0x4(0x3)
	struct FFilterOptionPerAxis RotationAxes; // 0x7(0x3)
	struct FFilterOptionPerAxis ScaleAxes; // 0xA(0x3)
};

// Object: ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60 (Inherited: 0x0)
struct FConstraintOffset
{
	struct FVector Translation; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Parent; // 0x30(0x30)
};

// Object: ScriptStruct AnimationCore.TransformFilter
// Size: 0x9 (Inherited: 0x0)
struct FTransformFilter
{
	struct FFilterOptionPerAxis TranslationFilter; // 0x0(0x3)
	struct FFilterOptionPerAxis RotationFilter; // 0x3(0x3)
	struct FFilterOptionPerAxis ScaleFilter; // 0x6(0x3)
};

// Object: ScriptStruct AnimationCore.EulerTransform
// Size: 0x24 (Inherited: 0x0)
struct FEulerTransform
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FVector Scale; // 0x18(0xC)
};

// Object: ScriptStruct AnimationCore.FABRIKChainLink
// Size: 0x38 (Inherited: 0x0)
struct FFABRIKChainLink
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct AnimationCore.NodeChain
// Size: 0x10 (Inherited: 0x0)
struct FNodeChain
{
	struct TArray<struct FName> Nodes; // 0x0(0x10)
};

// Object: ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78 (Inherited: 0x0)
struct FNodeHierarchyWithUserData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FNodeHierarchyData Hierarchy; // 0x8(0x70)
};

// Object: ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70 (Inherited: 0x0)
struct FNodeHierarchyData
{
	struct TArray<struct FNodeObject> Nodes; // 0x0(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
};

// Object: ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x0)
struct FNodeObject
{
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
};

// Object: ScriptStruct AnimationCore.TransformNoScale
// Size: 0x20 (Inherited: 0x0)
struct FTransformNoScale
{
	struct FVector Location; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
};

// Package: AnimGraphRuntime
// Structs: 77

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xE8 (Inherited: 0x38)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{
	float X; // 0x34(0x4)
	float Y; // 0x38(0x4)
	float Z; // 0x3C(0x4)
	float PlayRate; // 0x40(0x4)
	bool bLoop; // 0x44(0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x45(0x1)
	float StartPosition; // 0x48(0x4)
	uint8_t Pad_0x4E[0x2]; // 0x4E(0x2)
	struct UBlendSpaceBase* BlendSpace; // 0x50(0x8)
	uint8_t Pad_0x58[0x88]; // 0x58(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xE0(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1C0 (Inherited: 0xE8)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	uint8_t Pad_0xE8[0x68]; // 0xE8(0x68)
	struct FPoseLink BasePose; // 0x150(0x10)
	int32_t LODThreshold; // 0x160(0x4)
	struct FName SourceSocketName; // 0x164(0x8)
	struct FName PivotSocketName; // 0x16C(0x8)
	struct FVector LookAtLocation; // 0x174(0xC)
	struct FVector SocketAxis; // 0x180(0xC)
	float Alpha; // 0x18C(0x4)
	uint8_t Pad_0x190[0x30]; // 0x190(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xC8 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x4)
	float ActualAlpha; // 0x24(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x1)
	bool bAlphaBoolEnabled; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	float Alpha; // 0x2C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x440 (Inherited: 0xC8)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride; // 0xC8(0x4)
	float AngularDampingOverride; // 0xCC(0x4)
	uint8_t Pad_0xD0[0x60]; // 0xD0(0x60)
	struct FBoneReference RelativeSpaceBone; // 0x130(0x10)
	struct FBoneReference BoundBone; // 0x140(0x10)
	struct FBoneReference ChainEnd; // 0x150(0x10)
	struct FVector BoxExtents; // 0x160(0xC)
	struct FVector LocalJointOffset; // 0x16C(0xC)
	float GravityScale; // 0x178(0x4)
	struct FVector GravityOverride; // 0x17C(0xC)
	float LinearSpringConstant; // 0x188(0x4)
	float AngularSpringConstant; // 0x18C(0x4)
	float WindScale; // 0x190(0x4)
	struct FVector ComponentLinearAccScale; // 0x194(0xC)
	struct FVector ComponentLinearVelScale; // 0x1A0(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1AC(0xC)
	float AngularBiasOverride; // 0x1B8(0x4)
	int32_t NumSolverIterationsPreUpdate; // 0x1BC(0x4)
	int32_t NumSolverIterationsPostUpdate; // 0x1C0(0x4)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1C4(0x48)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x210(0x10)
	float SphereCollisionRadius; // 0x220(0x4)
	struct FVector ExternalForce; // 0x224(0xC)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x230(0x10)
	enum class EAnimPhysCollisionType CollisionType; // 0x240(0x1)
	enum class EAnimPhysSimSpaceType SimulationSpace; // 0x241(0x1)
	uint8_t Pad_0x242[0x2]; // 0x242(0x2)
	uint8_t bUseSphericalLimits : 1; // 0x244(0x1), Mask(0x1)
	uint8_t bUsePlanarLimit : 1; // 0x244(0x1), Mask(0x2)
	uint8_t bDoUpdate : 1; // 0x244(0x1), Mask(0x4)
	uint8_t bDoEval : 1; // 0x244(0x1), Mask(0x8)
	uint8_t bOverrideLinearDamping : 1; // 0x244(0x1), Mask(0x10)
	uint8_t bOverrideAngularBias : 1; // 0x244(0x1), Mask(0x20)
	uint8_t bOverrideAngularDamping : 1; // 0x244(0x1), Mask(0x40)
	uint8_t bEnableWind : 1; // 0x244(0x1), Mask(0x80)
	uint8_t BitPad_0x245_0 : 1; // 0x245(0x1)
	uint8_t bUseGravityOverride : 1; // 0x245(0x1), Mask(0x2)
	uint8_t bLinearSpring : 1; // 0x245(0x1), Mask(0x4)
	uint8_t bAngularSpring : 1; // 0x245(0x1), Mask(0x8)
	uint8_t bChain : 1; // 0x245(0x1), Mask(0x10)
	uint8_t BitPad_0x245_5 : 3; // 0x245(0x1)
	uint8_t Pad_0x246[0xA]; // 0x246(0xA)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x250(0x130)
	uint8_t Pad_0x380[0xC0]; // 0x380(0xC0)
};

// Object: ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x130 (Inherited: 0x0)
struct FRotationRetargetingInfo
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	struct FVector TwistAxis; // 0x74(0xC)
	bool bUseAbsoluteAngle; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float SourceMinimum; // 0x84(0x4)
	float SourceMaximum; // 0x88(0x4)
	float TargetMinimum; // 0x8C(0x4)
	float TargetMaximum; // 0x90(0x4)
	enum class EEasingFuncType EasingType; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x1)
	uint8_t Pad_0x121[0x3]; // 0x121(0x3)
	float EasingWeight; // 0x124(0x4)
	bool bClamp; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x0)
struct FAnimPhysPlanarLimit
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x0)
struct FAnimPhysSphericalLimit
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FVector SphereLocalOffset; // 0x10(0xC)
	float LimitRadius; // 0x1C(0x4)
	enum class ESphericalLimitType LimitType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x0)
struct FAnimPhysConstraintSetup
{
	enum class EAnimPhysLinearConstraintType LinearXLimitType; // 0x0(0x1)
	enum class EAnimPhysLinearConstraintType LinearYLimitType; // 0x1(0x1)
	enum class EAnimPhysLinearConstraintType LinearZLimitType; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	struct FVector LinearAxesMin; // 0x4(0xC)
	struct FVector LinearAxesMax; // 0x10(0xC)
	enum class EAnimPhysAngularConstraintType AngularConstraintType; // 0x1C(0x1)
	enum class EAnimPhysTwistAxis TwistAxis; // 0x1D(0x1)
	enum class EAnimPhysTwistAxis AngularTargetAxis; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	float ConeAngle; // 0x20(0x4)
	struct FVector AngularLimitsMin; // 0x24(0xC)
	struct FVector AngularLimitsMax; // 0x30(0xC)
	struct FVector AngularTarget; // 0x3C(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xC8 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink additive; // 0x20(0x10)
	float Alpha; // 0x30(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x8)
	int32_t LODThreshold; // 0x3C(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	uint8_t Pad_0xC0[0x4]; // 0xC0(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0xC4(0x1)
	bool bAlphaBoolEnabled; // 0xC5(0x1)
	uint8_t Pad_0xC6[0x2]; // 0xC6(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xE8 (Inherited: 0xC8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xC8(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xD8(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x0)
struct FAngularRangeLimit
{
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
	struct FBoneReference Bone; // 0x18(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	uint8_t TransformsSpace; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x0)
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone; // 0x0(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x1)
	bool bBlendRotation; // 0x21(0x1)
	bool bBlendScale; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base
{
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x1)
	enum class EAlphaBlendOption BlendType; // 0x31(0x1)
	bool bResetChildOnActivation; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x8)
	struct UBlendProfile* BlendProfile; // 0x40(0x8)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xA0 (Inherited: 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
	bool bActiveValue; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xB0 (Inherited: 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	uint8_t ActiveEnumValue; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xA0 (Inherited: 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
	int32_t ActiveChildIndex; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xF0 (Inherited: 0xE8)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	float NormalizedTime; // 0xE8(0x4)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x118 (Inherited: 0xC8)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct UCurveFloat* DrivingCurve; // 0xD8(0x8)
	float Multiplier; // 0xE0(0x4)
	float RangeMin; // 0xE4(0x4)
	float RangeMax; // 0xE8(0x4)
	float RemappedMin; // 0xEC(0x4)
	float RemappedMax; // 0xF0(0x4)
	struct FName ParameterName; // 0xF4(0x8)
	struct FBoneReference TargetBone; // 0xFC(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x10C(0x1)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x10D(0x1)
	uint8_t SourceComponent; // 0x10E(0x1)
	uint8_t bUseRange : 1; // 0x10F(0x1), Mask(0x1)
	uint8_t bAffectTargetTranslationX : 1; // 0x10F(0x1), Mask(0x2)
	uint8_t bAffectTargetTranslationY : 1; // 0x10F(0x1), Mask(0x4)
	uint8_t bAffectTargetTranslationZ : 1; // 0x10F(0x1), Mask(0x8)
	uint8_t bAffectTargetRotationX : 1; // 0x10F(0x1), Mask(0x10)
	uint8_t bAffectTargetRotationY : 1; // 0x10F(0x1), Mask(0x20)
	uint8_t bAffectTargetRotationZ : 1; // 0x10F(0x1), Mask(0x40)
	uint8_t bAffectTargetScaleX : 1; // 0x10F(0x1), Mask(0x80)
	uint8_t bAffectTargetScaleY : 1; // 0x110(0x1), Mask(0x1)
	uint8_t bAffectTargetScaleZ : 1; // 0x110(0x1), Mask(0x2)
	uint8_t BitPad_0x110_2 : 6; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180 (Inherited: 0xC8)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation; // 0xC8(0xC)
	uint8_t EffectorLocationSpace; // 0xD4(0x1)
	uint8_t Pad_0xD5[0xB]; // 0xD5(0xB)
	struct FBoneSocketTarget EffectorTarget; // 0xE0(0x60)
	struct FBoneReference TipBone; // 0x140(0x10)
	struct FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x4)
	int32_t MaxIterations; // 0x164(0x4)
	bool bStartFromTail; // 0x168(0x1)
	bool bEnableRotationLimit; // 0x169(0x1)
	uint8_t Pad_0x16A[0x6]; // 0x16A(0x6)
	struct TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x0)
struct FBoneSocketTarget
{
	bool bUseSocket; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FBoneReference BoneReference; // 0x4(0x10)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x0)
struct FSocketReference
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x108 (Inherited: 0xC8)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xD8(0x10)
	struct TArray<float> ConstraintWeights; // 0xE8(0x10)
	uint8_t Pad_0xF8[0x10]; // 0xF8(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1C (Inherited: 0x0)
struct FConstraint
{
	struct FBoneReference TargetBone; // 0x0(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x1)
	enum class ETransformConstraintType TransformType; // 0x11(0x1)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x3)
	uint8_t Pad_0x15[0x7]; // 0x15(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xF0 (Inherited: 0xC8)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct FBoneReference TargetBone; // 0xD8(0x10)
	bool bCopyTranslation; // 0xE8(0x1)
	bool bCopyRotation; // 0xE9(0x1)
	bool bCopyScale; // 0xEA(0x1)
	uint8_t ControlSpace; // 0xEB(0x1)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xF8 (Inherited: 0xC8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct FBoneReference TargetBone; // 0xD8(0x10)
	bool bCopyTranslation; // 0xE8(0x1)
	bool bCopyRotation; // 0xE9(0x1)
	bool bCopyScale; // 0xEA(0x1)
	enum class ECopyBoneDeltaMode CopyMode; // 0xEB(0x1)
	float TranslationMultiplier; // 0xEC(0x4)
	float RotationMultiplier; // 0xF0(0x4)
	float ScaleMultiplier; // 0xF4(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1D8 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x8)
	uint8_t bUseAttachedParent : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bCopyCurves : 1; // 0x18(0x1), Mask(0x2)
	uint8_t BitPad_0x18_2 : 6; // 0x18(0x1)
	bool bCopyCustomAttributes; // 0x19(0x1)
	uint8_t bUseMeshPose : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	struct FName RootBoneToCopy; // 0x1C(0x8)
	uint8_t Pad_0x24[0x1B4]; // 0x24(0x1B4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x8)
	float Alpha; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190 (Inherited: 0xC8)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xC8[0x8]; // 0xC8(0x8)
	struct FTransform EffectorTransform; // 0xD0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FBoneReference TipBone; // 0x160(0x10)
	struct FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x4)
	int32_t MaxIterations; // 0x184(0x4)
	uint8_t EffectorTransformSpace; // 0x188(0x1)
	uint8_t EffectorRotationSource; // 0x189(0x1)
	uint8_t Pad_0x18A[0x6]; // 0x18A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x120 (Inherited: 0xC8)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK; // 0xC8(0x10)
	struct FBoneReference LeftHandFK; // 0xD8(0x10)
	struct FBoneReference RightHandIK; // 0xE8(0x10)
	struct FBoneReference LeftHandIK; // 0xF8(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x108(0x10)
	float HandFKWeight; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xC0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x1)
	bool bMeshSpaceScaleBlend; // 0x51(0x1)
	uint8_t CurveBlendOption; // 0x52(0x1)
	bool bBlendRootMotionBasedOnRootBone; // 0x53(0x1)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	int32_t LODThreshold; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
	uint8_t Pad_0x90[0x30]; // 0x90(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xF8 (Inherited: 0xC8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision; // 0xC8(0x4)
	int32_t MaxIterations; // 0xCC(0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x18]; // 0xE0(0x18)
};

// Object: ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2C (Inherited: 0x0)
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float MinRotationAngle; // 0x24(0x4)
	uint8_t FootBoneForwardAxis; // 0x28(0x1)
	uint8_t HingeRotationAxis; // 0x29(0x1)
	bool bEnableRotationLimit; // 0x2A(0x1)
	bool bEnableKneeTwistCorrection; // 0x2B(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xA0 (Inherited: 0x0)
struct FAnimLegIKData
{
	uint8_t Pad_0x0[0xA0]; // 0x0(0xA0)
};

// Object: ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x0)
struct FIKChain
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3C (Inherited: 0x0)
struct FIKChainLink
{
	uint8_t Pad_0x0[0x3C]; // 0x0(0x3C)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1B0 (Inherited: 0xC8)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	struct FBoneSocketTarget LookAtTarget; // 0xE0(0x60)
	struct FVector LookAtLocation; // 0x140(0xC)
	struct FAxis LookAt_Axis; // 0x14C(0x10)
	bool bUseLookUpAxis; // 0x15C(0x1)
	uint8_t InterpolationType; // 0x15D(0x1)
	uint8_t Pad_0x15E[0x2]; // 0x15E(0x2)
	struct FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x4)
	float InterpolationTime; // 0x174(0x4)
	float InterpolationTriggerThreashold; // 0x178(0x4)
	uint8_t Pad_0x17C[0x34]; // 0x17C(0x34)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x108 (Inherited: 0xC8)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	struct FVector Translation; // 0xD8(0xC)
	struct FRotator Rotation; // 0xE4(0xC)
	struct FVector Scale; // 0xF0(0xC)
	uint8_t TranslationMode; // 0xFC(0x1)
	uint8_t RotationMode; // 0xFD(0x1)
	uint8_t ScaleMode; // 0xFE(0x1)
	uint8_t TranslationSpace; // 0xFF(0x1)
	uint8_t RotationSpace; // 0x100(0x1)
	uint8_t ScaleSpace; // 0x101(0x1)
	uint8_t Pad_0x102[0x6]; // 0x102(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x8)
	bool bAdditiveNode; // 0x48(0x1)
	bool bNormalizeAlpha; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x100 (Inherited: 0xC8)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve; // 0xC8(0x10)
	uint8_t DisplaySpace; // 0xD8(0x1)
	bool bRelativeToRefPose; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x2]; // 0xDA(0x2)
	struct FVector Translation; // 0xDC(0xC)
	struct FRotator Rotation; // 0xE8(0xC)
	struct FVector Scale; // 0xF4(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x80 (Inherited: 0x38)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
	struct UPoseAsset* PoseAsset; // 0x38(0x8)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xA0 (Inherited: 0x80)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0x80(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct UCurveFloat* CustomCurve; // 0x98(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x98 (Inherited: 0x80)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{
	struct FName PoseName; // 0x80(0x8)
	float PoseWeight; // 0x88(0x4)
	uint8_t Pad_0x8C[0xC]; // 0x8C(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x138 (Inherited: 0x80)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0x80(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x90(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xA0(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xB0(0x10)
	uint8_t Pad_0xC0[0x30]; // 0xC0(0x30)
	struct FBoneReference EvalSpaceBone; // 0xF0(0x10)
	struct FRBFParams RBFParams; // 0x100(0x2C)
	enum class EPoseDriverSource DriveSource; // 0x12C(0x1)
	enum class EPoseDriverOutput DriveOutput; // 0x12D(0x1)
	uint8_t bOnlyDriveSelectedBones : 1; // 0x12E(0x1), Mask(0x1)
	uint8_t BitPad_0x12E_1 : 7; // 0x12E(0x1)
	uint8_t Pad_0x12F[0x1]; // 0x12F(0x1)
	int32_t LODThreshold; // 0x130(0x4)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2C (Inherited: 0x0)
struct FRBFParams
{
	int32_t TargetDimensions; // 0x0(0x4)
	enum class ERBFSolverType SolverType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float Radius; // 0x8(0x4)
	bool bAutomaticRadius; // 0xC(0x1)
	enum class ERBFFunctionType Function; // 0xD(0x1)
	enum class ERBFDistanceMethod DistanceMethod; // 0xE(0x1)
	uint8_t TwistAxis; // 0xF(0x1)
	float WeightThreshold; // 0x10(0x4)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FVector MedianReference; // 0x18(0xC)
	float MedianMin; // 0x24(0x4)
	float MedianMax; // 0x28(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xC0 (Inherited: 0x0)
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0(0x10)
	struct FRotator TargetRotation; // 0x10(0xC)
	float TargetScale; // 0x1C(0x4)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x1)
	enum class ERBFFunctionType FunctionType; // 0x21(0x1)
	bool bApplyCustomCurve; // 0x22(0x1)
	uint8_t Pad_0x23[0x5]; // 0x23(0x5)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
	bool bIsHidden; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x0)
struct FPoseDriverTransform
{
	struct FVector TargetTranslation; // 0x0(0xC)
	struct FRotator TargetRotation; // 0xC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{
	struct FName SnapshotName; // 0x10(0x8)
	struct FPoseSnapshot Snapshot; // 0x18(0x38)
	enum class ESnapshotSourceMode Mode; // 0x50(0x1)
	uint8_t Pad_0x51[0x3F]; // 0x51(0x3F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base
{
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	uint8_t Pad_0x20[0x50]; // 0x20(0x50)
	bool bShuffleMode; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x0)
struct FRandomPlayerSequenceEntry
{
	struct UAnimSequence* Sequence; // 0x0(0x8)
	float ChanceToPlay; // 0x8(0x4)
	int32_t MinLoopCount; // 0xC(0x4)
	int32_t MaxLoopCount; // 0x10(0x4)
	float MinPlayRate; // 0x14(0x4)
	float MaxPlayRate; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base
{
	uint8_t RefPoseType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xD8 (Inherited: 0xC8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x650 (Inherited: 0xC8)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xC8(0x8)
	uint8_t Pad_0xD0[0x98]; // 0xD0(0x98)
	struct FVector OverrideWorldGravity; // 0x168(0xC)
	struct FVector ExternalForce; // 0x174(0xC)
	struct FVector ComponentLinearAccScale; // 0x180(0xC)
	struct FVector ComponentLinearVelScale; // 0x18C(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x198(0xC)
	struct FSimSpaceSettings SimSpaceSettings; // 0x1A4(0x40)
	float CachedBoundsScale; // 0x1E4(0x4)
	struct FBoneReference BaseBoneRef; // 0x1E8(0x10)
	uint8_t OverlapChannel; // 0x1F8(0x1)
	enum class ESimulationSpace SimulationSpace; // 0x1F9(0x1)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1FA(0x1)
	uint8_t Pad_0x1FB[0x1]; // 0x1FB(0x1)
	uint8_t bEnableWorldGeometry : 1; // 0x1FC(0x1), Mask(0x1)
	uint8_t bOverrideWorldGravity : 1; // 0x1FC(0x1), Mask(0x2)
	uint8_t bTransferBoneVelocities : 1; // 0x1FC(0x1), Mask(0x4)
	uint8_t bFreezeIncomingPoseOnStart : 1; // 0x1FC(0x1), Mask(0x8)
	uint8_t bClampLinearTranslationLimitToRefPose : 1; // 0x1FC(0x1), Mask(0x10)
	uint8_t BitPad_0x1FC_5 : 3; // 0x1FC(0x1)
	uint8_t Pad_0x1FD[0x3]; // 0x1FD(0x3)
	float WorldSpaceMinimumScale; // 0x200(0x4)
	float EvaluationResetTime; // 0x204(0x4)
	uint8_t Pad_0x208[0x448]; // 0x208(0x448)
};

// Object: ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size: 0x40 (Inherited: 0x0)
struct FSimSpaceSettings
{
	float MasterAlpha; // 0x0(0x4)
	float VelocityScaleZ; // 0x4(0x4)
	float MaxLinearVelocity; // 0x8(0x4)
	float MaxAngularVelocity; // 0xC(0x4)
	float MaxLinearAcceleration; // 0x10(0x4)
	float MaxAngularAcceleration; // 0x14(0x4)
	float ExternalLinearDrag; // 0x18(0x4)
	struct FVector ExternalLinearDragV; // 0x1C(0xC)
	struct FVector ExternalLinearVelocity; // 0x28(0xC)
	struct FVector ExternalAngularVelocity; // 0x34(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xA0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x4)
	float Yaw; // 0x24(0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0xC)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xF0 (Inherited: 0xC8)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0xC8(0x10)
	struct FBoneReference SourceBone; // 0xD8(0x10)
	float Multiplier; // 0xE8(0x4)
	uint8_t RotationAxisToRefer; // 0xEC(0x1)
	bool bIsAdditive; // 0xED(0x1)
	uint8_t Pad_0xEE[0x2]; // 0xEE(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x190 (Inherited: 0xE8)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose; // 0xE8(0x10)
	int32_t LODThreshold; // 0xF8(0x4)
	float Alpha; // 0xFC(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x100(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x108(0x48)
	struct FName AlphaCurveName; // 0x150(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x158(0x30)
	uint8_t Pad_0x188[0x4]; // 0x188(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0x18C(0x1)
	bool bAlphaBoolEnabled; // 0x18D(0x1)
	uint8_t Pad_0x18E[0x2]; // 0x18E(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x4)
	struct FBoneReference ChainStartBone; // 0x24(0x10)
	struct FBoneReference ChainEndBone; // 0x34(0x10)
	struct FVector TargetLocation; // 0x44(0xC)
	float Alpha; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x60(0x1)
	uint8_t Pad_0x61[0x17]; // 0x61(0x17)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x50 (Inherited: 0x38)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence; // 0x38(0x8)
	float ExplicitTime; // 0x40(0x4)
	bool bShouldLoop; // 0x44(0x1)
	bool bTeleportToExplicitTime; // 0x45(0x1)
	uint8_t ReinitializationBehavior; // 0x46(0x1)
	uint8_t Pad_0x47[0x1]; // 0x47(0x1)
	float StartPosition; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x8)
	bool bAlwaysUpdateSourcePose; // 0x28(0x1)
	uint8_t Pad_0x29[0x1F]; // 0x29(0x1F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x270 (Inherited: 0xC8)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone; // 0xC8(0x10)
	struct FBoneReference EndBone; // 0xD8(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0xE8(0x1)
	bool bAutoCalculateSpline; // 0xE9(0x1)
	uint8_t Pad_0xEA[0x2]; // 0xEA(0x2)
	int32_t PointCount; // 0xEC(0x4)
	struct TArray<struct FTransform> ControlPoints; // 0xF0(0x10)
	float Roll; // 0x100(0x4)
	float TwistStart; // 0x104(0x4)
	float TwistEnd; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct FAlphaBlend TwistBlend; // 0x110(0x30)
	float Stretch; // 0x140(0x4)
	float Offset; // 0x144(0x4)
	uint8_t Pad_0x148[0x128]; // 0x148(0x128)
};

// Object: ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x0)
struct FSplineIKCachedBoneData
{
	struct FBoneReference Bone; // 0x0(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x128 (Inherited: 0xC8)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone; // 0xC8(0x10)
	float MaxDisplacement; // 0xD8(0x4)
	float SpringStiffness; // 0xDC(0x4)
	float SpringDamping; // 0xE0(0x4)
	float ErrorResetThresh; // 0xE4(0x4)
	uint8_t Pad_0xE8[0x3C]; // 0xE8(0x3C)
	uint8_t bLimitDisplacement : 1; // 0x124(0x1), Mask(0x1)
	uint8_t bTranslateX : 1; // 0x124(0x1), Mask(0x2)
	uint8_t bTranslateY : 1; // 0x124(0x1), Mask(0x4)
	uint8_t bTranslateZ : 1; // 0x124(0x1), Mask(0x8)
	uint8_t bRotateX : 1; // 0x124(0x1), Mask(0x10)
	uint8_t bRotateY : 1; // 0x124(0x1), Mask(0x20)
	uint8_t bRotateZ : 1; // 0x124(0x1), Mask(0x40)
	uint8_t BitPad_0x124_7 : 1; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_StateResult : FAnimNode_Root
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260 (Inherited: 0xC8)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xC8[0x38]; // 0xC8(0x38)
	struct FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x4)
	uint8_t ChainBoneAxis; // 0x114(0x1)
	uint8_t bInvertChainBoneAxis : 1; // 0x115(0x1), Mask(0x1)
	uint8_t bLimitStretch : 1; // 0x115(0x1), Mask(0x2)
	uint8_t bLimitRotation : 1; // 0x115(0x1), Mask(0x4)
	uint8_t bUsePlanarLimit : 1; // 0x115(0x1), Mask(0x8)
	uint8_t bActorSpaceFakeVel : 1; // 0x115(0x1), Mask(0x10)
	uint8_t bReorientParentToChild : 1; // 0x115(0x1), Mask(0x20)
	uint8_t BitPad_0x115_6 : 2; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
	float MaxDeltaTime; // 0x118(0x4)
	float RelaxationSpeedScale; // 0x11C(0x4)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1A8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1D8(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1E8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1F8(0x10)
	float StretchLimit; // 0x208(0x4)
	struct FVector FakeVelocity; // 0x20C(0xC)
	struct FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x4)
	uint8_t Pad_0x22C[0x34]; // 0x22C(0x34)
};

// Object: ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x0)
struct FRotationLimit
{
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x138 (Inherited: 0xC8)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame; // 0xC8(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0xE8(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x108(0x10)
	float RangeMax; // 0x118(0x4)
	float RemappedMin; // 0x11C(0x4)
	float RemappedMax; // 0x120(0x4)
	struct FAnimCurveParam Curve; // 0x124(0xC)
	uint8_t Pad_0x130[0x8]; // 0x130(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x0)
struct FReferenceBoneFrame
{
	struct FBoneReference Bone; // 0x0(0x10)
	struct FAxis Axis; // 0x10(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1E0 (Inherited: 0xC8)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone; // 0xC8(0x10)
	float StartStretchRatio; // 0xD8(0x4)
	float MaxStretchScale; // 0xDC(0x4)
	struct FVector EffectorLocation; // 0xE0(0xC)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	struct FBoneSocketTarget EffectorTarget; // 0xF0(0x60)
	struct FVector JointTargetLocation; // 0x150(0xC)
	uint8_t Pad_0x15C[0x4]; // 0x15C(0x4)
	struct FBoneSocketTarget JointTarget; // 0x160(0x60)
	struct FAxis TwistAxis; // 0x1C0(0x10)
	uint8_t EffectorLocationSpace; // 0x1D0(0x1)
	uint8_t JointTargetLocationSpace; // 0x1D1(0x1)
	uint8_t bAllowStretching : 1; // 0x1D2(0x1), Mask(0x1)
	uint8_t bTakeRotationFromEffectorSpace : 1; // 0x1D2(0x1), Mask(0x2)
	uint8_t bMaintainEffectorRelRot : 1; // 0x1D2(0x1), Mask(0x4)
	uint8_t bAllowTwist : 1; // 0x1D2(0x1), Mask(0x8)
	uint8_t BitPad_0x1D2_4 : 4; // 0x1D2(0x1)
	uint8_t Pad_0x1D3[0xD]; // 0x1D3(0xD)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xC8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 2; // 0x31(0x1)
	uint8_t bResetChildOnActivation : 1; // 0x31(0x1), Mask(0x8)
	uint8_t BitPad_0x31_4 : 4; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	float Alpha; // 0x34(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	uint8_t Pad_0xC0[0x8]; // 0xC0(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xA00 (Inherited: 0x760)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x760[0x2A0]; // 0x760(0x2A0)
};

// Object: ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x0)
struct FPositionHistory
{
	struct TArray<struct FVector> Positions; // 0x0(0x10)
	float Range; // 0x10(0x4)
	uint8_t Pad_0x14[0x1C]; // 0x14(0x1C)
};

// Object: ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x0)
struct FRBFEntry
{
	struct TArray<float> Values; // 0x0(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xA0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry
{
	float ScaleFactor; // 0x10(0x4)
	bool bApplyCustomCurve; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x1)
	enum class ERBFFunctionType FunctionType; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
};

// Package: CinematicCamera
// Structs: 7

// Object: ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50 (Inherited: 0x0)
struct FCameraLookatTrackingSettings
{
	uint8_t bEnableLookAtTracking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bDrawDebugLookAtTrackingPosition : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LookAtTrackingInterpSpeed; // 0x4(0x4)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x18(0x28)
	struct FVector RelativeOffset; // 0x40(0xC)
	uint8_t bAllowRoll : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58 (Inherited: 0x0)
struct FCameraFocusSettings
{
	enum class ECameraFocusMethod FocusMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8(0x38)
	uint8_t bDrawDebugFocusPlane : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FColor DebugFocusPlaneColor; // 0x44(0x4)
	uint8_t bSmoothFocusChanges : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float FocusSmoothingInterpSpeed; // 0x4C(0x4)
	float FocusOffset; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38 (Inherited: 0x0)
struct FCameraTrackingFocusSettings
{
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x0(0x28)
	struct FVector RelativeOffset; // 0x28(0xC)
	uint8_t bDrawDebugTrackingFocusPoint : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x0)
struct FNamedLensPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

// Object: ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18 (Inherited: 0x0)
struct FCameraLensSettings
{
	float MinFocalLength; // 0x0(0x4)
	float MaxFocalLength; // 0x4(0x4)
	float MinFStop; // 0x8(0x4)
	float MaxFStop; // 0xC(0x4)
	float MinimumFocusDistance; // 0x10(0x4)
	int32_t DiaphragmBladeCount; // 0x14(0x4)
};

// Object: ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 (Inherited: 0x0)
struct FNamedFilmbackPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0xC (Inherited: 0x0)
struct FCameraFilmbackSettings
{
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
	float SensorAspectRatio; // 0x8(0x4)
};

// Package: NetCore
// Structs: 1

// Object: ScriptStruct NetCore.NetAnalyticsDataConfig
// Size: 0xC (Inherited: 0x0)
struct FNetAnalyticsDataConfig
{
	struct FName DataName; // 0x0(0x8)
	bool bEnabled; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Package: AssetRegistry
// Structs: 2

// Object: ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 (Inherited: 0x0)
struct FTagAndValue
{
	struct FName Tag; // 0x0(0x8)
	struct FString Value; // 0x8(0x10)
};

// Object: ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x5 (Inherited: 0x0)
struct FAssetRegistryDependencyOptions
{
	bool bIncludeSoftPackageReferences; // 0x0(0x1)
	bool bIncludeHardPackageReferences; // 0x1(0x1)
	bool bIncludeSearchableNames; // 0x2(0x1)
	bool bIncludeSoftManagementReferences; // 0x3(0x1)
	bool bIncludeHardManagementReferences; // 0x4(0x1)
};

// Package: GameplayTags
// Structs: 12

// Object: ScriptStruct GameplayTags.GameplayTagQuery
// Size: 0x48 (Inherited: 0x0)
struct FGameplayTagQuery
{
	int32_t TokenStreamVersion; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8(0x10)
	struct TArray<uint8_t> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTag
// Size: 0x8 (Inherited: 0x0)
struct FGameplayTag
{
	struct FName TagName; // 0x0(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size: 0x1 (Inherited: 0x0)
struct FGameplayTagCreationWidgetHelper
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagReferenceHelper
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagContainer
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagContainer
{
	struct TArray<struct FGameplayTag> GameplayTags; // 0x0(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagNode
// Size: 0x50 (Inherited: 0x0)
struct FGameplayTagNode
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct GameplayTags.GameplayTagSource
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagSource
{
	struct FName SourceName; // 0x0(0x8)
	enum class EGameplayTagSourceType SourceType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// Object: ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20 (Inherited: 0x8)
struct FGameplayTagTableRow : FTableRowBase
{
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28 (Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{
	bool bAllowNonRestrictedChildren; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct GameplayTags.RestrictedConfigInfo
// Size: 0x20 (Inherited: 0x0)
struct FRestrictedConfigInfo
{
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size: 0x20 (Inherited: 0x0)
struct FGameplayTagCategoryRemap
{
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// Object: ScriptStruct GameplayTags.GameplayTagRedirect
// Size: 0x10 (Inherited: 0x0)
struct FGameplayTagRedirect
{
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

// Package: MeshDescription
// Structs: 7

// Object: ScriptStruct MeshDescription.ElementID
// Size: 0x4 (Inherited: 0x0)
struct FElementID
{
	int32_t IDValue; // 0x0(0x4)
};

// Object: ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonGroupID : FElementID
{
};

// Object: ScriptStruct MeshDescription.PolygonID
// Size: 0x4 (Inherited: 0x4)
struct FPolygonID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexID
// Size: 0x4 (Inherited: 0x4)
struct FVertexID : FElementID
{
};

// Object: ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x4 (Inherited: 0x4)
struct FVertexInstanceID : FElementID
{
};

// Object: ScriptStruct MeshDescription.EdgeID
// Size: 0x4 (Inherited: 0x4)
struct FEdgeID : FElementID
{
};

// Object: ScriptStruct MeshDescription.TriangleID
// Size: 0x4 (Inherited: 0x4)
struct FTriangleID : FElementID
{
};

// Package: StaticMeshDescription
// Structs: 1

// Object: ScriptStruct StaticMeshDescription.UVMapSettings
// Size: 0x38 (Inherited: 0x0)
struct FUVMapSettings
{
	struct FVector Size; // 0x0(0xC)
	struct FVector2D UVTile; // 0xC(0x8)
	struct FVector position; // 0x14(0xC)
	struct FRotator Rotation; // 0x20(0xC)
	struct FVector Scale; // 0x2C(0xC)
};

// Package: PropertyAccess
// Structs: 7

// Object: ScriptStruct PropertyAccess.PropertyAccessLibrary
// Size: 0xC8 (Inherited: 0x0)
struct FPropertyAccessLibrary
{
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x0(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths; // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths; // 0x20(0x10)
	struct FPropertyAccessCopyBatch CopyBatches[0x4]; // 0x30(0x40)
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses; // 0x70(0x10)
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses; // 0x80(0x10)
	struct TArray<struct FPropertyAccessIndirection> Indirections; // 0x90(0x10)
	struct TArray<int32_t> EventAccessIndices; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x18]; // 0xB0(0x18)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessIndirection
// Size: 0x40 (Inherited: 0x0)
struct FPropertyAccessIndirection
{
	struct TFieldPath<FArrayProperty> ArrayProperty; // 0x0(0x20)
	struct UFunction* Function; // 0x20(0x8)
	int32_t ReturnBufferSize; // 0x28(0x4)
	int32_t ReturnBufferAlignment; // 0x2C(0x4)
	int32_t ArrayIndex; // 0x30(0x4)
	uint32_t Offset; // 0x34(0x4)
	enum class EPropertyAccessObjectType ObjectType; // 0x38(0x1)
	enum class EPropertyAccessIndirectionType Type; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// Size: 0x30 (Inherited: 0x0)
struct FPropertyAccessIndirectionChain
{
	struct TFieldPath<FProperty> Property; // 0x0(0x20)
	int32_t IndirectionStartIndex; // 0x20(0x4)
	int32_t IndirectionEndIndex; // 0x24(0x4)
	int32_t EventId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// Size: 0x10 (Inherited: 0x0)
struct FPropertyAccessCopyBatch
{
	struct TArray<struct FPropertyAccessCopy> Copies; // 0x0(0x10)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessCopy
// Size: 0x10 (Inherited: 0x0)
struct FPropertyAccessCopy
{
	int32_t AccessIndex; // 0x0(0x4)
	int32_t DestAccessStartIndex; // 0x4(0x4)
	int32_t DestAccessEndIndex; // 0x8(0x4)
	enum class EPropertyAccessCopyType Type; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessPath
// Size: 0xC (Inherited: 0x0)
struct FPropertyAccessPath
{
	int32_t PathSegmentStartIndex; // 0x0(0x4)
	int32_t PathSegmentCount; // 0x4(0x4)
	uint8_t bHasEvents : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessSegment
// Size: 0x40 (Inherited: 0x0)
struct FPropertyAccessSegment
{
	struct FName Name; // 0x0(0x8)
	struct UStruct* Struct; // 0x8(0x8)
	struct TFieldPath<FProperty> Property; // 0x10(0x20)
	struct UFunction* Function; // 0x30(0x8)
	int32_t ArrayIndex; // 0x38(0x4)
	uint16_t Flags; // 0x3C(0x2)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Package: ClothingSystemRuntimeInterface
// Structs: 7

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40 (Inherited: 0x0)
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x30 (Inherited: 0x0)
struct FClothCollisionPrim_Box
{
	struct FVector LocalPosition; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat LocalRotation; // 0x10(0x10)
	struct FVector HalfExtents; // 0x20(0xC)
	int32_t BoneIndex; // 0x2C(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28 (Inherited: 0x0)
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FPlane> Planes; // 0x0(0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10(0x10)
	int32_t BoneIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x8 (Inherited: 0x0)
struct FClothCollisionPrim_SphereConnection
{
	int32_t SphereIndices[0x2]; // 0x0(0x8)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 (Inherited: 0x0)
struct FClothCollisionPrim_Sphere
{
	int32_t BoneIndex; // 0x0(0x4)
	float Radius; // 0x4(0x4)
	struct FVector LocalPosition; // 0x8(0xC)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
// Size: 0x20 (Inherited: 0x0)
struct FClothCollisionPrim_ConvexFace
{
	struct FPlane Plane; // 0x0(0x10)
	struct TArray<int32_t> Indices; // 0x10(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x4C (Inherited: 0x0)
struct FClothVertBoneData
{
	int32_t NumInfluences; // 0x0(0x4)
	uint16_t BoneIndices[0xC]; // 0x4(0x18)
	float BoneWeights[0xC]; // 0x1C(0x30)
};

// Package: EyeTracker
// Structs: 2

// Object: ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40 (Inherited: 0x0)
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin; // 0x0(0xC)
	struct FVector LeftEyeDirection; // 0xC(0xC)
	struct FVector RightEyeOrigin; // 0x18(0xC)
	struct FVector RightEyeDirection; // 0x24(0xC)
	struct FVector FixationPoint; // 0x30(0xC)
	float ConfidenceValue; // 0x3C(0x4)
};

// Object: ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x28 (Inherited: 0x0)
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin; // 0x0(0xC)
	struct FVector GazeDirection; // 0xC(0xC)
	struct FVector FixationPoint; // 0x18(0xC)
	float ConfidenceValue; // 0x24(0x4)
};

// Package: JsonUtilities
// Structs: 1

// Object: ScriptStruct JsonUtilities.JsonObjectWrapper
// Size: 0x20 (Inherited: 0x0)
struct FJsonObjectWrapper
{
	struct FString JsonString; // 0x0(0x10)
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Package: MediaAssets
// Structs: 2

// Object: ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28 (Inherited: 0x0)
struct FMediaCaptureDevice
{
	struct FText DisplayName; // 0x0(0x18)
	struct FString URL; // 0x18(0x10)
};

// Object: ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x8 (Inherited: 0x0)
struct FMediaSoundComponentSpectralData
{
	float FrequencyHz; // 0x0(0x4)
	float Magnitude; // 0x4(0x4)
};

// Package: LevelSequence
// Structs: 11

// Object: ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x2 (Inherited: 0x0)
struct FLevelSequenceCameraSettings
{
	bool bOverrideAspectRatioAxisConstraint; // 0x0(0x1)
	uint8_t AspectRatioAxisConstraint; // 0x1(0x1)
};

// Object: ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x1 (Inherited: 0x0)
struct FBoundActorProxy
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// Size: 0x30 (Inherited: 0x0)
struct FLevelSequenceAnimSequenceLinkItem
{
	struct FGuid SkelTrackGuid; // 0x0(0x10)
	struct FSoftObjectPath PathToAnimSequence; // 0x10(0x18)
	bool bExportTransforms; // 0x28(0x1)
	bool bExportCurves; // 0x29(0x1)
	bool bRecordInWorldSpace; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xA0 (Inherited: 0x0)
struct FLevelSequenceBindingReferences
{
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x0)
struct FLevelSequenceBindingReferenceArray
{
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x0(0x10)
};

// Object: ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38 (Inherited: 0x0)
struct FLevelSequenceBindingReference
{
	struct FString PackageName; // 0x0(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x0)
struct FLevelSequenceObjectReferenceMap
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x0)
struct FLevelSequenceLegacyObjectReference
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x0)
struct FLevelSequenceObject
{
	struct TLazyObjectPtr<struct UObject> ObjectOrOwner; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ComponentName; // 0x20(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x8)
};

// Object: ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xB8 (Inherited: 0x0)
struct FLevelSequencePlayerSnapshot
{
	struct FString MasterName; // 0x0(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0xC)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
	struct ULevelSequence* ActiveShot; // 0xA8(0x8)
	struct FMovieSceneSequenceID ShotID; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0xC (Inherited: 0x0)
struct FLevelSequenceSnapshotSettings
{
	uint8_t ZeroPadAmount; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FFrameRate FrameRate; // 0x4(0x8)
};

// Package: MovieSceneCapture
// Structs: 6

// Object: ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size: 0x10 (Inherited: 0x0)
struct FCompositionGraphCapturePasses
{
	struct TArray<struct FString> Value; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneCapture.FrameMetrics
// Size: 0x10 (Inherited: 0x0)
struct FFrameMetrics
{
	float TotalElapsedTime; // 0x0(0x4)
	float FrameDelta; // 0x4(0x4)
	int32_t FrameNumber; // 0x8(0x4)
	int32_t NumDroppedFrames; // 0xC(0x4)
};

// Object: ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size: 0x70 (Inherited: 0x0)
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath OutputDirectory; // 0x0(0x10)
	struct AGameModeBase* GameModeOverride; // 0x10(0x8)
	struct FString OutputFormat; // 0x18(0x10)
	bool bOverwriteExisting; // 0x28(0x1)
	bool bUseRelativeFrameNumbers; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t HandleFrames; // 0x2C(0x4)
	struct FString MovieExtension; // 0x30(0x10)
	uint8_t ZeroPadFrameNumbers; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FFrameRate FrameRate; // 0x44(0x8)
	bool bUseCustomFrameRate; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	struct FFrameRate CustomFrameRate; // 0x50(0x8)
	struct FCaptureResolution Resolution; // 0x58(0x8)
	bool bEnableTextureStreaming; // 0x60(0x1)
	bool bCinematicEngineScalability; // 0x61(0x1)
	bool bCinematicMode; // 0x62(0x1)
	bool bAllowMovement; // 0x63(0x1)
	bool bAllowTurning; // 0x64(0x1)
	bool bShowPlayer; // 0x65(0x1)
	bool bShowHUD; // 0x66(0x1)
	bool bUsePathTracer; // 0x67(0x1)
	int32_t PathTracerSamplePerPixel; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct MovieSceneCapture.CaptureResolution
// Size: 0x8 (Inherited: 0x0)
struct FCaptureResolution
{
	int32_t ResX; // 0x0(0x4)
	int32_t ResY; // 0x4(0x4)
};

// Object: ScriptStruct MovieSceneCapture.CapturedPixels
// Size: 0x10 (Inherited: 0x0)
struct FCapturedPixels
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MovieSceneCapture.CapturedPixelsID
// Size: 0x50 (Inherited: 0x0)
struct FCapturedPixelsID
{
	struct TMap<struct FName, struct FName> Identifiers; // 0x0(0x50)
};

// Package: Overlay
// Structs: 1

// Object: ScriptStruct Overlay.OverlayItem
// Size: 0x28 (Inherited: 0x0)
struct FOverlayItem
{
	struct FTimespan StartTime; // 0x0(0x8)
	struct FTimespan EndTime; // 0x8(0x8)
	struct FString Text; // 0x10(0x10)
	struct FVector2D position; // 0x20(0x8)
};

// Package: BuildPatchServices
// Structs: 5

// Object: ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68 (Inherited: 0x0)
struct FFileManifestData
{
	struct FString Filename; // 0x0(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x1)
	bool bIsCompressed; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
};

// Object: ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18 (Inherited: 0x0)
struct FChunkPartData
{
	struct FGuid Guid; // 0x0(0x10)
	uint32_t Offset; // 0x10(0x4)
	uint32_t Size; // 0x14(0x4)
};

// Object: ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14 (Inherited: 0x0)
struct FSHAHashData
{
	uint8_t Hash[0x14]; // 0x0(0x14)
};

// Object: ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40 (Inherited: 0x0)
struct FChunkInfoData
{
	struct FGuid Guid; // 0x0(0x10)
	uint64_t Hash; // 0x10(0x8)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	int64_t FileSize; // 0x30(0x8)
	uint8_t GroupNumber; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20 (Inherited: 0x0)
struct FCustomFieldData
{
	struct FString Key; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// Package: ClothingSystemRuntimeCommon
// Structs: 6

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Size: 0xD4 (Inherited: 0x0)
struct FClothConfig_Legacy
{
	enum class EClothingWindMethod_Legacy WindMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34(0x10)
	float SelfCollisionRadius; // 0x44(0x4)
	float SelfCollisionStiffness; // 0x48(0x4)
	float SelfCollisionCullScale; // 0x4C(0x4)
	struct FVector Damping; // 0x50(0xC)
	float Friction; // 0x5C(0x4)
	float WindDragCoefficient; // 0x60(0x4)
	float WindLiftCoefficient; // 0x64(0x4)
	struct FVector LinearDrag; // 0x68(0xC)
	struct FVector AngularDrag; // 0x74(0xC)
	struct FVector LinearInertiaScale; // 0x80(0xC)
	struct FVector AngularInertiaScale; // 0x8C(0xC)
	struct FVector CentrifugalInertiaScale; // 0x98(0xC)
	float SolverFrequency; // 0xA4(0x4)
	float StiffnessFrequency; // 0xA8(0x4)
	float GravityScale; // 0xAC(0x4)
	struct FVector GravityOverride; // 0xB0(0xC)
	bool bUseGravityOverride; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float TetherStiffness; // 0xC0(0x4)
	float TetherLimit; // 0xC4(0x4)
	float CollisionThickness; // 0xC8(0x4)
	float AnimDriveSpringStiffness; // 0xCC(0x4)
	float AnimDriveDamperStiffness; // 0xD0(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Size: 0x10 (Inherited: 0x0)
struct FClothConstraintSetup_Legacy
{
	float Stiffness; // 0x0(0x4)
	float StiffnessMultiplier; // 0x4(0x4)
	float StretchLimit; // 0x8(0x4)
	float CompressionLimit; // 0xC(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x160 (Inherited: 0x0)
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData PhysicalMeshData; // 0x0(0xF8)
	struct FClothCollisionData CollisionData; // 0xF8(0x40)
	bool bUseMultipleInfluences; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	float SkinningKernelRadius; // 0x13C(0x4)
	uint8_t Pad_0x140[0x20]; // 0x140(0x20)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xF8 (Inherited: 0x0)
struct FClothPhysicalMeshData
{
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32_t> Indices; // 0x20(0x10)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30(0x50)
	struct TArray<float> InverseMasses; // 0x80(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x90(0x10)
	int32_t MaxBoneWeights; // 0xA0(0x4)
	int32_t NumFixedVerts; // 0xA4(0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0xA8(0x10)
	struct TArray<float> MaxDistances; // 0xB8(0x10)
	struct TArray<float> BackstopDistances; // 0xC8(0x10)
	struct TArray<float> BackstopRadiuses; // 0xD8(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0xE8(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// Size: 0x10 (Inherited: 0x0)
struct FPointWeightMap
{
	struct TArray<float> Values; // 0x0(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x30 (Inherited: 0x0)
struct FClothParameterMask_Legacy
{
	struct FName MaskName; // 0x0(0x8)
	enum class EWeightMapTargetCommon CurrentTarget; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MaxValue; // 0xC(0x4)
	float MinValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<float> Values; // 0x18(0x10)
	bool bEnabled; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Package: ClothingSystemRuntimeNv
// Structs: 1

// Object: ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Size: 0x10 (Inherited: 0x0)
struct FClothConstraintSetupNv
{
	float Stiffness; // 0x0(0x4)
	float StiffnessMultiplier; // 0x4(0x4)
	float StretchLimit; // 0x8(0x4)
	float CompressionLimit; // 0xC(0x4)
};

// Package: AndroidRuntimeSettings
// Structs: 2

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayLeaderboardMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayLeaderboardMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString LeaderboardID; // 0x10(0x10)
};

// Object: ScriptStruct AndroidRuntimeSettings.GooglePlayAchievementMapping
// Size: 0x20 (Inherited: 0x0)
struct FGooglePlayAchievementMapping
{
	struct FString Name; // 0x0(0x10)
	struct FString AchievementID; // 0x10(0x10)
};

// Package: InteractiveToolsFramework
// Structs: 6

// Object: ScriptStruct InteractiveToolsFramework.BrushStampData
// Size: 0xAC (Inherited: 0x0)
struct FBrushStampData
{
	uint8_t Pad_0x0[0xAC]; // 0x0(0xAC)
};

// Object: ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size: 0x20 (Inherited: 0x0)
struct FBehaviorInfo
{
	struct UInputBehavior* Behavior; // 0x0(0x8)
	uint8_t Pad_0x8[0x18]; // 0x8(0x18)
};

// Object: ScriptStruct InteractiveToolsFramework.InputRayHit
// Size: 0x28 (Inherited: 0x0)
struct FInputRayHit
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size: 0x30 (Inherited: 0x0)
struct FActiveGizmo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size: 0x8 (Inherited: 0x0)
struct FGizmoFloatParameterChange
{
	float InitialValue; // 0x0(0x4)
	float CurrentValue; // 0x4(0x4)
};

// Object: ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size: 0x10 (Inherited: 0x0)
struct FGizmoVec2ParameterChange
{
	struct FVector2D InitialValue; // 0x0(0x8)
	struct FVector2D CurrentValue; // 0x8(0x8)
};

// Package: AndroidDeviceProfileSelector
// Structs: 3

// Object: ScriptStruct AndroidDeviceProfileSelector.JavaSurfaceViewDevice
// Size: 0x20 (Inherited: 0x0)
struct FJavaSurfaceViewDevice
{
	struct FString Manufacturer; // 0x0(0x10)
	struct FString Model; // 0x10(0x10)
};

// Object: ScriptStruct AndroidDeviceProfileSelector.ProfileMatch
// Size: 0x20 (Inherited: 0x0)
struct FProfileMatch
{
	struct FString Profile; // 0x0(0x10)
	struct TArray<struct FProfileMatchItem> Match; // 0x10(0x10)
};

// Object: ScriptStruct AndroidDeviceProfileSelector.ProfileMatchItem
// Size: 0x18 (Inherited: 0x0)
struct FProfileMatchItem
{
	uint8_t SourceType; // 0x0(0x1)
	uint8_t CompareType; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct FString MatchString; // 0x8(0x10)
};

// Package: ChaosSolverEngine
// Structs: 5

// Object: ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0x70 (Inherited: 0x0)
struct FChaosPhysicsCollisionInfo
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct UPrimitiveComponent* OtherComponent; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FVector Normal; // 0x1C(0xC)
	struct FVector AccumulatedImpulse; // 0x28(0xC)
	struct FVector Velocity; // 0x34(0xC)
	struct FVector OtherVelocity; // 0x40(0xC)
	struct FVector AngularVelocity; // 0x4C(0xC)
	struct FVector OtherAngularVelocity; // 0x58(0xC)
	float Mass; // 0x64(0x4)
	float OtherMass; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// Size: 0x30 (Inherited: 0x0)
struct FChaosBreakEvent
{
	struct UPrimitiveComponent* Component; // 0x0(0x8)
	struct FVector Location; // 0x8(0xC)
	struct FVector Velocity; // 0x14(0xC)
	struct FVector AngularVelocity; // 0x20(0xC)
	float Mass; // 0x2C(0x4)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// Size: 0x58 (Inherited: 0x0)
struct FChaosHandlerSet
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TSet<struct UObject*> ChaosHandlers; // 0x8(0x50)
};

// Object: ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// Size: 0x40 (Inherited: 0x0)
struct FBreakEventCallbackWrapper
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// Size: 0x3 (Inherited: 0x0)
struct FChaosDebugSubstepControl
{
	bool bPause; // 0x0(0x1)
	bool bSubstep; // 0x1(0x1)
	bool bStep; // 0x2(0x1)
};

// Package: GeometryCollectionEngine
// Structs: 12

// Object: ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58 (Inherited: 0x0)
struct FChaosCollisionEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FVector Velocity1; // 0x18(0xC)
	struct FVector Velocity2; // 0x24(0xC)
	float Mass1; // 0x30(0x4)
	float Mass2; // 0x34(0x4)
	struct FVector Impulse; // 0x38(0xC)
	uint8_t Pad_0x44[0x14]; // 0x44(0x14)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x1C (Inherited: 0x0)
struct FChaosBreakingEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Mass; // 0x18(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2C (Inherited: 0x0)
struct FChaosTrailingEventData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
// Size: 0x18 (Inherited: 0x0)
struct FGeometryCollectionRepData
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50 (Inherited: 0x0)
struct FGeomComponentCacheParameters
{
	enum class EGeometryCollectionCacheType CacheMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGeometryCollectionCache* TargetCache; // 0x8(0x8)
	float ReverseCacheBeginTime; // 0x10(0x4)
	bool SaveCollisionData; // 0x14(0x1)
	bool DoGenerateCollisionData; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
	int32_t CollisionDataSizeMax; // 0x18(0x4)
	bool DoCollisionDataSpatialHash; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float CollisionDataSpatialHashRadius; // 0x20(0x4)
	int32_t MaxCollisionPerCell; // 0x24(0x4)
	bool SaveBreakingData; // 0x28(0x1)
	bool DoGenerateBreakingData; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t BreakingDataSizeMax; // 0x2C(0x4)
	bool DoBreakingDataSpatialHash; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float BreakingDataSpatialHashRadius; // 0x34(0x4)
	int32_t MaxBreakingPerCell; // 0x38(0x4)
	bool SaveTrailingData; // 0x3C(0x1)
	bool DoGenerateTrailingData; // 0x3D(0x1)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
	int32_t TrailingDataSizeMax; // 0x40(0x4)
	float TrailingMinSpeedThreshold; // 0x44(0x4)
	float TrailingMinVolumeThreshold; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosBreakingEventRequestSettings
{
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinRadius; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinMass; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosCollisionEventRequestSettings
{
	int32_t MaxNumberResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18 (Inherited: 0x0)
struct FChaosTrailingEventRequestSettings
{
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinAngularSpeed; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18 (Inherited: 0x0)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int32_t ID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct AChaosSolverActor* Solver; // 0x8(0x8)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x8)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x1 (Inherited: 0x0)
struct FGeometryCollectionDebugDrawWarningMessage
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x24 (Inherited: 0x0)
struct FGeometryCollectionSizeSpecificData
{
	float MaxSize; // 0x0(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0x4(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0x5(0x1)
	uint8_t Pad_0x6[0x2]; // 0x6(0x2)
	int32_t MinLevelSetResolution; // 0x8(0x4)
	int32_t MaxLevelSetResolution; // 0xC(0x4)
	int32_t MinClusterLevelSetResolution; // 0x10(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x14(0x4)
	int32_t CollisionObjectReductionPercentage; // 0x18(0x4)
	float CollisionParticlesFraction; // 0x1C(0x4)
	int32_t MaximumCollisionParticles; // 0x20(0x4)
};

// Object: ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
// Size: 0x60 (Inherited: 0x0)
struct FGeometryCollectionSource
{
	struct FSoftObjectPath SourceGeometryObject; // 0x0(0x18)
	uint8_t Pad_0x18[0x8]; // 0x18(0x8)
	struct FTransform LocalTransform; // 0x20(0x30)
	struct TArray<struct UMaterialInterface*> SourceMaterial; // 0x50(0x10)
};

// Package: Landmass
// Structs: 9

// Object: ScriptStruct Landmass.LandmassBrushEffectsList
// Size: 0x60 (Inherited: 0x0)
struct FLandmassBrushEffectsList
{
	struct FBrushEffectBlurring Blurring; // 0x0(0x8)
	struct FBrushEffectCurlNoise CurlNoise; // 0x8(0x10)
	struct FBrushEffectDisplacement Displacement; // 0x18(0x28)
	struct FBrushEffectSmoothBlending SmoothBlending; // 0x40(0x8)
	struct FBrushEffectTerracing Terracing; // 0x48(0x14)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectTerracing
// Size: 0x14 (Inherited: 0x0)
struct FBrushEffectTerracing
{
	float TerraceAlpha; // 0x0(0x4)
	float TerraceSpacing; // 0x4(0x4)
	float TerraceSmoothness; // 0x8(0x4)
	float MaskLength; // 0xC(0x4)
	float MaskStartOffset; // 0x10(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectSmoothBlending
// Size: 0x8 (Inherited: 0x0)
struct FBrushEffectSmoothBlending
{
	float InnerSmoothDistance; // 0x0(0x4)
	float OuterSmoothDistance; // 0x4(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectDisplacement
// Size: 0x28 (Inherited: 0x0)
struct FBrushEffectDisplacement
{
	float DisplacementHeight; // 0x0(0x4)
	float DisplacementTiling; // 0x4(0x4)
	struct UTexture2D* Texture; // 0x8(0x8)
	float Midpoint; // 0x10(0x4)
	struct FLinearColor Channel; // 0x14(0x10)
	float WeightmapInfluence; // 0x24(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectCurlNoise
// Size: 0x10 (Inherited: 0x0)
struct FBrushEffectCurlNoise
{
	float Curl1Amount; // 0x0(0x4)
	float Curl2Amount; // 0x4(0x4)
	float Curl1Tiling; // 0x8(0x4)
	float Curl2Tiling; // 0xC(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectBlurring
// Size: 0x8 (Inherited: 0x0)
struct FBrushEffectBlurring
{
	bool bBlurShape; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	int32_t Radius; // 0x4(0x4)
};

// Object: ScriptStruct Landmass.BrushEffectCurves
// Size: 0x20 (Inherited: 0x0)
struct FBrushEffectCurves
{
	bool bUseCurveChannel; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UCurveFloat* ElevationCurveAsset; // 0x8(0x8)
	float ChannelEdgeOffset; // 0x10(0x4)
	float ChannelDepth; // 0x14(0x4)
	float CurveRampWidth; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct Landmass.LandmassFalloffSettings
// Size: 0x14 (Inherited: 0x0)
struct FLandmassFalloffSettings
{
	enum class EBrushFalloffMode FalloffMode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float FalloffAngle; // 0x4(0x4)
	float FalloffWidth; // 0x8(0x4)
	float EdgeOffset; // 0xC(0x4)
	float ZOffset; // 0x10(0x4)
};

// Object: ScriptStruct Landmass.LandmassTerrainCarvingSettings
// Size: 0x80 (Inherited: 0x0)
struct FLandmassTerrainCarvingSettings
{
	enum class EBrushBlendType BlendMode; // 0x0(0x1)
	bool bInvertShape; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FLandmassFalloffSettings FalloffSettings; // 0x4(0x14)
	struct FLandmassBrushEffectsList Effects; // 0x18(0x60)
	int32_t Priority; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Package: Chaos
// Structs: 9

// Object: ScriptStruct Chaos.ChaosSolverConfiguration
// Size: 0x68 (Inherited: 0x0)
struct FChaosSolverConfiguration
{
	int32_t Iterations; // 0x0(0x4)
	int32_t CollisionPairIterations; // 0x4(0x4)
	int32_t PushOutIterations; // 0x8(0x4)
	int32_t CollisionPushOutPairIterations; // 0xC(0x4)
	float CollisionMarginFraction; // 0x10(0x4)
	float CollisionMarginMax; // 0x14(0x4)
	float CollisionCullDistance; // 0x18(0x4)
	int32_t JointPairIterations; // 0x1C(0x4)
	int32_t JointPushOutPairIterations; // 0x20(0x4)
	float ClusterConnectionFactor; // 0x24(0x4)
	enum class EClusterUnionMethod ClusterUnionConnectionType; // 0x28(0x1)
	bool bGenerateCollisionData; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2C(0x10)
	bool bGenerateBreakData; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40(0x10)
	bool bGenerateTrailingData; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54(0x10)
	bool bGenerateContactGraph; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
};

// Object: ScriptStruct Chaos.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverTrailingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverBreakingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverCollisionFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.RecordedTransformTrack
// Size: 0x10 (Inherited: 0x0)
struct FRecordedTransformTrack
{
	struct TArray<struct FRecordedFrame> Records; // 0x0(0x10)
};

// Object: ScriptStruct Chaos.RecordedFrame
// Size: 0xB8 (Inherited: 0x0)
struct FRecordedFrame
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct Chaos.SolverTrailingData
// Size: 0x30 (Inherited: 0x0)
struct FSolverTrailingData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// Object: ScriptStruct Chaos.SolverBreakingData
// Size: 0x30 (Inherited: 0x0)
struct FSolverBreakingData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// Object: ScriptStruct Chaos.SolverCollisionData
// Size: 0x6C (Inherited: 0x0)
struct FSolverCollisionData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector AccumulatedImpulse; // 0xC(0xC)
	struct FVector Normal; // 0x18(0xC)
	struct FVector Velocity1; // 0x24(0xC)
	struct FVector Velocity2; // 0x30(0xC)
	struct FVector AngularVelocity1; // 0x3C(0xC)
	struct FVector AngularVelocity2; // 0x48(0xC)
	float Mass1; // 0x54(0x4)
	float Mass2; // 0x58(0x4)
	int32_t ParticleIndex; // 0x5C(0x4)
	int32_t LevelsetIndex; // 0x60(0x4)
	int32_t ParticleIndexMesh; // 0x64(0x4)
	int32_t LevelsetIndexMesh; // 0x68(0x4)
};

// Package: AudioPlatformConfiguration
// Structs: 1

// Object: ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// Size: 0x10 (Inherited: 0x0)
struct FPlatformRuntimeAudioCompressionOverrides
{
	bool bOverrideCompressionTimes; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DurationThreshold; // 0x4(0x4)
	int32_t MaxNumRandomBranches; // 0x8(0x4)
	int32_t SoundCueQualityIndex; // 0xC(0x4)
};

// Package: MediaUtils
// Structs: 2

// Object: ScriptStruct MediaUtils.MediaPlayerOptions
// Size: 0x30 (Inherited: 0x0)
struct FMediaPlayerOptions
{
	struct FMediaPlayerTrackOptions Tracks; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FTimespan SeekTime; // 0x20(0x8)
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28(0x1)
	enum class EMediaPlayerOptionBooleanOverride Loop; // 0x29(0x1)
	uint8_t Pad_0x2A[0x6]; // 0x2A(0x6)
};

// Object: ScriptStruct MediaUtils.MediaPlayerTrackOptions
// Size: 0x1C (Inherited: 0x0)
struct FMediaPlayerTrackOptions
{
	int32_t Audio; // 0x0(0x4)
	int32_t Caption; // 0x4(0x4)
	int32_t MetaData; // 0x8(0x4)
	int32_t Script; // 0xC(0x4)
	int32_t Subtitle; // 0x10(0x4)
	int32_t Text; // 0x14(0x4)
	int32_t Video; // 0x18(0x4)
};

// Package: Renderer
// Structs: 1

// Object: ScriptStruct Renderer.LightPropagationVolumeSettings
// Size: 0x40 (Inherited: 0x0)
struct FLightPropagationVolumeSettings
{
	uint8_t bOverride_LPVIntensity : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bOverride_LPVSpecularOcclusionExponent : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bOverride_LPVSize : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bOverride_LPVSecondaryBounceIntensity : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bOverride_LPVGeometryVolumeBias : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bOverride_LPVVplInjectionBias : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bOverride_LPVEmissiveInjectionIntensity : 1; // 0x1(0x1), Mask(0x10)
	uint8_t BitPad_0x1_5 : 3; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LPVIntensity; // 0x4(0x4)
	float LPVVplInjectionBias; // 0x8(0x4)
	float LPVSize; // 0xC(0x4)
	float LPVSecondaryOcclusionIntensity; // 0x10(0x4)
	float LPVSecondaryBounceIntensity; // 0x14(0x4)
	float LPVGeometryVolumeBias; // 0x18(0x4)
	float LPVEmissiveInjectionIntensity; // 0x1C(0x4)
	float LPVDirectionalOcclusionIntensity; // 0x20(0x4)
	float LPVDirectionalOcclusionRadius; // 0x24(0x4)
	float LPVDiffuseOcclusionExponent; // 0x28(0x4)
	float LPVSpecularOcclusionExponent; // 0x2C(0x4)
	float LPVDiffuseOcclusionIntensity; // 0x30(0x4)
	float LPVSpecularOcclusionIntensity; // 0x34(0x4)
	float LPVFadeRange; // 0x38(0x4)
	float LPVDirectionalOcclusionFadeRange; // 0x3C(0x4)
};

// Package: PropertyPath
// Structs: 2

// Object: ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x0)
struct FCachedPropertyPath
{
	struct TArray<struct FPropertyPathSegment> Segments; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
	struct UFunction* CachedFunction; // 0x18(0x8)
	uint8_t Pad_0x20[0x8]; // 0x20(0x8)
};

// Object: ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x28 (Inherited: 0x0)
struct FPropertyPathSegment
{
	struct FName Name; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UStruct* Struct; // 0x10(0x8)
	uint8_t Pad_0x18[0x10]; // 0x18(0x10)
};

// Package: EngineMessages
// Structs: 7

// Object: ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x18 (Inherited: 0x0)
struct FEngineServiceNotification
{
	struct FString Text; // 0x0(0x10)
	double TimeSeconds; // 0x10(0x8)
};

// Object: ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x10 (Inherited: 0x0)
struct FEngineServiceTerminate
{
	struct FString UserName; // 0x0(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceExecuteCommand
{
	struct FString Command; // 0x0(0x10)
	struct FString UserName; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceAuthGrant
{
	struct FString UserName; // 0x0(0x10)
	struct FString UserToGrant; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceAuthDeny
{
	struct FString UserName; // 0x0(0x10)
	struct FString UserToDeny; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServicePong
// Size: 0x50 (Inherited: 0x0)
struct FEngineServicePong
{
	struct FString CurrentLevel; // 0x0(0x10)
	int32_t EngineVersion; // 0x10(0x4)
	bool HasBegunPlay; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FGuid InstanceId; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct EngineMessages.EngineServicePing
// Size: 0x1 (Inherited: 0x0)
struct FEngineServicePing
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Package: Serialization
// Structs: 9

// Object: ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x450 (Inherited: 0x0)
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct Numerics; // 0x0(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x3)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0xA0)
	uint8_t Pad_0xD8[0x8]; // 0xD8(0x8)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0xE0(0x90)
	struct FStructSerializerArrayTestStruct Arrays; // 0x170(0x60)
	struct FStructSerializerMapTestStruct maps; // 0x1D0(0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x310(0x140)
};

// Object: ScriptStruct Serialization.StructSerializerSetTestStruct
// Size: 0x140 (Inherited: 0x0)
struct FStructSerializerSetTestStruct
{
	struct TSet<struct FString> StrSet; // 0x0(0x50)
	struct TSet<int32_t> IntSet; // 0x50(0x50)
	struct TSet<struct FName> NameSet; // 0xA0(0x50)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xF0(0x50)
};

// Object: ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0x90 (Inherited: 0x0)
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	struct FString string; // 0x18(0x10)
	struct FText Text; // 0x28(0x18)
	struct FVector Vector; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FVector4 Vector4; // 0x50(0x10)
	struct FRotator Rotator; // 0x60(0xC)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FQuat Quat; // 0x70(0x10)
	struct FColor Color; // 0x80(0x4)
	uint8_t Pad_0x84[0xC]; // 0x84(0xC)
};

// Object: ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0x140 (Inherited: 0x0)
struct FStructSerializerMapTestStruct
{
	struct TMap<int32_t, struct FString> IntToStr; // 0x0(0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xA0(0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xF0(0x50)
};

// Object: ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x60 (Inherited: 0x0)
struct FStructSerializerArrayTestStruct
{
	struct TArray<int32_t> Int32Array; // 0x0(0x10)
	struct TArray<uint8_t> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x4)
	int32_t StaticInt32Array[0x3]; // 0x24(0xC)
	float StaticFloatArray[0x3]; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FVector> VectorArray; // 0x40(0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)
};

// Object: ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0xA0 (Inherited: 0x0)
struct FStructSerializerObjectTestStruct
{
	struct UObject* Class; // 0x0(0x8)
	struct UMetaData* SubClass; // 0x8(0x8)
	struct TSoftClassPtr<struct UMetaData*> SoftClass; // 0x10(0x28)
	struct UObject* Object; // 0x38(0x8)
	struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x40(0x8)
	struct TSoftObjectPtr<UMetaData> SoftObject; // 0x48(0x28)
	struct FSoftClassPath ClassPath; // 0x70(0x18)
	struct FSoftObjectPath ObjectPath; // 0x88(0x18)
};

// Object: ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x3 (Inherited: 0x0)
struct FStructSerializerBooleanTestStruct
{
	bool BoolFalse; // 0x0(0x1)
	bool BoolTrue; // 0x1(0x1)
	uint8_t Bitfield0 : 1; // 0x2(0x1), Mask(0x1)
	uint8_t Bitfield1 : 1; // 0x2(0x1), Mask(0x2)
	uint8_t Bitfield2Set : 1; // 0x2(0x1), Mask(0x4)
	uint8_t Bitfield3 : 1; // 0x2(0x1), Mask(0x8)
	uint8_t Bitfield4Set : 1; // 0x2(0x1), Mask(0x10)
	uint8_t Bitfield5Set : 1; // 0x2(0x1), Mask(0x20)
	uint8_t Bitfield6 : 1; // 0x2(0x1), Mask(0x40)
	uint8_t Bitfield7Set : 1; // 0x2(0x1), Mask(0x80)
};

// Object: ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x0)
struct FStructSerializerNumericTestStruct
{
	int8_t Int8; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	int16_t Int16; // 0x2(0x2)
	int32_t Int32; // 0x4(0x4)
	int64_t Int64; // 0x8(0x8)
	uint8_t UInt8; // 0x10(0x1)
	uint8_t Pad_0x11[0x1]; // 0x11(0x1)
	uint16_t UInt16; // 0x12(0x2)
	uint32_t UInt32; // 0x14(0x4)
	uint64_t UInt64; // 0x18(0x8)
	float Float; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	double Double; // 0x28(0x8)
};

// Object: ScriptStruct Serialization.StructSerializerByteArray
// Size: 0x38 (Inherited: 0x0)
struct FStructSerializerByteArray
{
	int32_t Dummy1; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<uint8_t> ByteArray; // 0x8(0x10)
	int32_t Dummy2; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Package: SessionMessages
// Structs: 5

// Object: ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x1 (Inherited: 0x0)
struct FSessionServiceLogUnsubscribe
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x1 (Inherited: 0x0)
struct FSessionServiceLogSubscribe
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x0)
struct FSessionServiceLog
{
	struct FName Category; // 0x0(0x8)
	struct FString Data; // 0x8(0x10)
	struct FGuid InstanceId; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x8)
	uint8_t Verbosity; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x0)
struct FSessionServicePong
{
	bool Authorized; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString BuildDate; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid InstanceId; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	bool Standalone; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x0)
struct FSessionServicePing
{
	struct FString UserName; // 0x0(0x10)
};

// Package: LiveLinkMessageBusFramework
// Structs: 7

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// Size: 0x90 (Inherited: 0x0)
struct FLiveLinkSubjectFrameMessage
{
	struct FName SubjectName; // 0x0(0x8)
	struct TArray<struct FTransform> Transforms; // 0x8(0x10)
	struct TArray<struct FLiveLinkCurveElement> Curves; // 0x18(0x10)
	struct FLiveLinkMetaData MetaData; // 0x28(0x60)
	double Time; // 0x88(0x8)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// Size: 0x28 (Inherited: 0x0)
struct FLiveLinkSubjectDataMessage
{
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x0(0x20)
	struct FName SubjectName; // 0x20(0x8)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// Size: 0x8 (Inherited: 0x0)
struct FLiveLinkClearSubject
{
	struct FName SubjectName; // 0x0(0x8)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// Size: 0x1 (Inherited: 0x0)
struct FLiveLinkHeartbeatMessage
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// Size: 0x4 (Inherited: 0x0)
struct FLiveLinkConnectMessage
{
	int32_t LiveLinkVersion; // 0x0(0x4)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// Size: 0x40 (Inherited: 0x0)
struct FLiveLinkPongMessage
{
	struct FString ProviderName; // 0x0(0x10)
	struct FString MachineName; // 0x10(0x10)
	struct FGuid PollRequest; // 0x20(0x10)
	int32_t LiveLinkVersion; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	double CreationPlatformTime; // 0x38(0x8)
};

// Object: ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// Size: 0x14 (Inherited: 0x0)
struct FLiveLinkPingMessage
{
	struct FGuid PollRequest; // 0x0(0x10)
	int32_t LiveLinkVersion; // 0x10(0x4)
};

// Package: BPS_PickupData
// Structs: 1

// Object: UserDefinedStruct BPS_PickupData.BPS_PickupData
// Size: 0x10 (Inherited: 0x0)
struct FBPS_PickupData
{
	struct UStaticMesh* Mesh_2_18357F1A4CE55F4CDFC095B78C2F8014; // 0x0(0x8)
	float LightAttenuationRadius_5_BB1FBA01401BD19257D437AD070B42E8; // 0x8(0x4)
	struct FColor LightColor_8_A7C193414BACFE2F31A95F871CCCDF40; // 0xC(0x4)
};

// Package: RadioWheelColors
// Structs: 1

// Object: UserDefinedStruct RadioWheelColors.RadioWheelColors
// Size: 0xF0 (Inherited: 0x0)
struct FRadioWheelColors
{
	struct FSlateColor NormalBackgroundColor_2_238B11E04ACB5B5719D06CA860C12A3C; // 0x0(0x28)
	struct FSlateColor SelectedBackgroundColor_4_10F2BABC475AE623F69FA691D74D8566; // 0x28(0x28)
	struct FSlateColor NormalRingBackgroundColor_9_4327A0DA4948BD70B7BF61A14FDE4817; // 0x50(0x28)
	struct FSlateColor SelectedRingBackgroundColor_10_2D0F785E4645FBC63950329649CEA436; // 0x78(0x28)
	struct FSlateColor NormalTintColor_11_B6E6272B46BEEAEAB56ABDA1D026C5D7; // 0xA0(0x28)
	struct FSlateColor SelectedTintColor_12_F5C68A7A4414489FA65DA18B49DA61D0; // 0xC8(0x28)
};

// Package: ControllerButtonLayout
// Structs: 1

// Object: UserDefinedStruct ControllerButtonLayout.ControllerButtonLayout
// Size: 0x26 (Inherited: 0x0)
struct FControllerButtonLayout
{
	uint8_t ButtonValue_19_9CAB8B674C518A083C0DDB817F4719F9; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FAnchors Anchor_6_4E3712EF4D5999008732DEA68DF48625; // 0x4(0x10)
	struct FMargin Margin_9_5714A3E84480593CEE24ACB0FD45FBBC; // 0x14(0x10)
	uint8_t HorizontalAlignment_15_A54405BA469CE19091984EBD011E6FED; // 0x24(0x1)
	uint8_t VerticalAlignment_18_A3065697449FCE7AED59C7B6D4DDBCDD; // 0x25(0x1)
};

// Package: ButtonTemplateCombo
// Structs: 1

// Object: UserDefinedStruct ButtonTemplateCombo.ButtonTemplateCombo
// Size: 0x348 (Inherited: 0x0)
struct FButtonTemplateCombo
{
	struct FButtonTemplateModifiers NormalTemplate_2_30B698304CAC11C61FE490AB6E647E82; // 0x0(0x118)
	struct FButtonTemplateModifiers HoveredTemplate_4_86BCABDF40F6EA3B6D6F81A2E7B60D4C; // 0x118(0x118)
	struct FButtonTemplateModifiers SelectedTemplate_6_8D6368DF419117ED0876CF823D7FEED0; // 0x230(0x118)
};

// Package: ConfirmationDialogStyle
// Structs: 1

// Object: UserDefinedStruct ConfirmationDialogStyle.ConfirmationDialogStyle
// Size: 0x830 (Inherited: 0x0)
struct FConfirmationDialogStyle
{
	struct FJoinedButtonTemplateModifiers CancelButtonStyle_4_9F5478264AA3E5E98BEB60AD98233BC1; // 0x0(0x360)
	struct FJoinedButtonTemplateModifiers AcceptButtonStyle_6_040658794D6E9870F2A860ACA2767F64; // 0x360(0x360)
	struct FSlateBrush BackgroundBrush_13_4BE2702D4019F782F561DFAC893C686D; // 0x6C0(0x88)
	struct TSoftClassPtr<struct UUserWidget*> BackgroundWidget_25_631981C94738665382B593A4D7A4F09C; // 0x748(0x28)
	struct FAnchors MainBoxAnchor_16_7D7EB4A4490A60D7D4D264A82ABBEF19; // 0x770(0x10)
	struct FText DefaultMessageText_9_B213E5EF459CAE05FA1476947443884D; // 0x780(0x18)
	struct FSlateFontInfo MessageFont_19_17032EA7499133BE31670285543A7690; // 0x798(0x58)
	struct FSlateColor MessageColor_22_A7B9E63A495F0F95ADDE68BDA84960A7; // 0x7F0(0x28)
	struct USoundBase* AcceptSound_28_F46CF9884D5E24256CF0F8A1ED6310BA; // 0x818(0x8)
	struct USoundBase* CancelSound_31_359043AF4CCE14831EA188ABB7F8B9D1; // 0x820(0x8)
	struct USoundBase* HoveredSound_32_02B7EB2E454D5B14BFC24CBA55B35303; // 0x828(0x8)
};

// Package: JoinedButtonTemplateModifiers
// Structs: 1

// Object: UserDefinedStruct JoinedButtonTemplateModifiers.JoinedButtonTemplateModifiers
// Size: 0x360 (Inherited: 0x0)
struct FJoinedButtonTemplateModifiers
{
	struct FText ButtonTextValue_9_9FE5D8904013DDDA10120BBC559DE894; // 0x0(0x18)
	struct FButtonTemplateModifiers NormalTemplate_4_D481CDC24C95D1DA54CD16B5E3926A46; // 0x18(0x118)
	struct FButtonTemplateModifiers HoveredTemplate_6_EDFC4F3240BC68BF7F32079C51EDDE06; // 0x130(0x118)
	struct FButtonTemplateModifiers SelectedTemplate_8_1F80D9A94B64D7C09694628E03F1C935; // 0x248(0x118)
};

// Package: SlotListSlotClasses
// Structs: 1

// Object: UserDefinedStruct SlotListSlotClasses.SlotListSlotClasses
// Size: 0x28 (Inherited: 0x0)
struct FSlotListSlotClasses
{
	struct UUserWidget* SelectionSlot_16_21334F67445D0915174B259D0A6A418E; // 0x0(0x8)
	struct UUserWidget* BoolSlot_17_DDD4E7444C403BF8D69D27817B5EEBF0; // 0x8(0x8)
	struct UUserWidget* SliderSlot_15_629C09C842D281F9A001D0BFC582C856; // 0x10(0x8)
	struct UUserWidget* MessageSlot_19_775D88024FE142D95137A3818A5608DA; // 0x18(0x8)
	struct UUserWidget* SaveGameSlot_23_34D036924576630F561F99B29F3EB481; // 0x20(0x8)
};

// Package: ButtonTemplateModifiers
// Structs: 1

// Object: UserDefinedStruct ButtonTemplateModifiers.ButtonTemplateModifiers
// Size: 0x118 (Inherited: 0x0)
struct FButtonTemplateModifiers
{
	struct UTexture2D* Image_2_594B49694C671B303DE0699A36A15EA3; // 0x0(0x8)
	struct FBox2D ImageUVs_42_DCD3F6ED459814AD9D7D15A1466850CE; // 0x8(0x14)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FSlateColor Color_5_D8CDC0374EFFE84369CA1591BBA8F975; // 0x20(0x28)
	struct FVector2D ImageSheer_8_77C7B5484CC455D7262BB58DC3C7A74B; // 0x48(0x8)
	struct FSlateColor TextColor_11_959524B14EF4F9B95D70A7A176DB93F2; // 0x50(0x28)
	struct FSlateFontInfo Font_14_80D8C4A049BBB745A376DE9CC8862093; // 0x78(0x58)
	uint8_t TextHorizontalAlignment_17_79B0FCF84D38A71C205D1DB4356E1EDD; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x3]; // 0xD1(0x3)
	struct FMargin TextMargin_20_431C4E994A2898ED811F29B812FD6AB5; // 0xD4(0x10)
	struct FLinearColor ShadowColor_24_DA06C65047AA5DB5F4F779B1DCB2FD00; // 0xE4(0x10)
	struct FVector2D ShadowOffset_26_86238E16497318448263DBBAC5BF6EEA; // 0xF4(0x8)
	struct FButtonShadowModifiers ImageShadow_45_CEA254E2462FCB9DD02CDDB00DD3DD7B; // 0xFC(0x1C)
};

// Package: ButtonShadowModifiers
// Structs: 1

// Object: UserDefinedStruct ButtonShadowModifiers.ButtonShadowModifiers
// Size: 0x1C (Inherited: 0x0)
struct FButtonShadowModifiers
{
	bool UseShadow_5_F54A428D4B468314608EAB8FCCC48C23; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector2D Offset_8_21B1C641427C5BE7D99D668B5138305C; // 0x4(0x8)
	struct FLinearColor Tint_11_EFB014E9409A3928738549B93AAFBB59; // 0xC(0x10)
};

