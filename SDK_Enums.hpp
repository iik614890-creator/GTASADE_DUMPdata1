#pragma once

#include <cstdio>
#include <string>
#include <cstdint>


// Package: CoreUObject
// Enums: 16

// Object: Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear = 0,
	CIM_CurveAuto = 1,
	CIM_Constant = 2,
	CIM_CurveUser = 3,
	CIM_CurveBreak = 4,
	CIM_CurveAutoClamped = 5,
	CIM_MAX = 6
};

// Object: Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	Open = 2,
	ERangeBoundTypes_MAX = 3
};

// Object: Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	Game = 0,
	Engine = 1,
	Editor = 2,
	ELocalizedTextSourceCategory_MAX = 3
};

// Object: Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info = 0,
	Warning = 1,
	Error = 2,
	EAutomationEventType_MAX = 3
};

// Object: Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_Max = 16
};

// Object: Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	Invalid = 0,
	Valid = 1,
	NotValidated = 2,
	EDataValidationResult_MAX = 3
};

// Object: Enum CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
	Ok = 0,
	YesNo = 1,
	OkCancel = 2,
	YesNoCancel = 3,
	CancelRetryContinue = 4,
	YesNoYesAllNoAll = 5,
	YesNoYesAllNoAllCancel = 6,
	YesNoYesAll = 7,
	EAppMsgType_MAX = 8
};

// Object: Enum CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
	No = 0,
	Yes = 1,
	YesAll = 2,
	NoAll = 3,
	Cancel = 4,
	Ok = 5,
	Retry = 6,
	Continue = 7,
	EAppReturnType_MAX = 8
};

// Object: Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	Default = 0,
	Never = 1,
	Always = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};

// Object: Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers = 0,
	Millimeters = 1,
	Centimeters = 2,
	Meters = 3,
	Kilometers = 4,
	Inches = 5,
	Feet = 6,
	Yards = 7,
	Miles = 8,
	Lightyears = 9,
	Degrees = 10,
	Radians = 11,
	MetersPerSecond = 12,
	KilometersPerHour = 13,
	MilesPerHour = 14,
	Celsius = 15,
	Farenheit = 16,
	Kelvin = 17,
	Micrograms = 18,
	Milligrams = 19,
	Grams = 20,
	Kilograms = 21,
	MetricTons = 22,
	Ounces = 23,
	Pounds = 24,
	Stones = 25,
	Newtons = 26,
	PoundsForce = 27,
	KilogramsForce = 28,
	Hertz = 29,
	Kilohertz = 30,
	Megahertz = 31,
	Gigahertz = 32,
	RevolutionsPerMinute = 33,
	Bytes = 34,
	Kilobytes = 35,
	Megabytes = 36,
	Gigabytes = 37,
	Terabytes = 38,
	Lumens = 39,
	Milliseconds = 40,
	Seconds = 41,
	Minutes = 42,
	Hours = 43,
	Days = 44,
	Months = 45,
	Years = 46,
	Multiplier = 47,
	Percentage = 48,
	Unspecified = 49,
	EUnit_MAX = 50
};

// Object: Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None = 0,
	Default = 1,
	TextEditBeam = 2,
	ResizeLeftRight = 3,
	ResizeUpDown = 4,
	ResizeSouthEast = 5,
	ResizeSouthWest = 6,
	CardinalCross = 7,
	Crosshairs = 8,
	Hand = 9,
	GrabHand = 10,
	GrabHandClosed = 11,
	SlashedCircle = 12,
	EyeDropper = 13,
	EMouseCursor_MAX = 14
};

// Object: Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown = 0,
	PF_A32B32G32R32F = 1,
	PF_B8G8R8A8 = 2,
	PF_G8 = 3,
	PF_G16 = 4,
	PF_DXT1 = 5,
	PF_DXT3 = 6,
	PF_DXT5 = 7,
	PF_UYVY = 8,
	PF_FloatRGB = 9,
	PF_FloatRGBA = 10,
	PF_DepthStencil = 11,
	PF_ShadowDepth = 12,
	PF_R32_FLOAT = 13,
	PF_G16R16 = 14,
	PF_G16R16F = 15,
	PF_G16R16F_FILTER = 16,
	PF_G32R32F = 17,
	PF_A2B10G10R10 = 18,
	PF_A16B16G16R16 = 19,
	PF_D24 = 20,
	PF_R16F = 21,
	PF_R16F_FILTER = 22,
	PF_BC5 = 23,
	PF_V8U8 = 24,
	PF_A1 = 25,
	PF_FloatR11G11B10 = 26,
	PF_A8 = 27,
	PF_R32_UINT = 28,
	PF_R32_SINT = 29,
	PF_PVRTC2 = 30,
	PF_PVRTC4 = 31,
	PF_R16_UINT = 32,
	PF_R16_SINT = 33,
	PF_R16G16B16A16_UINT = 34,
	PF_R16G16B16A16_SINT = 35,
	PF_R5G6B5_UNORM = 36,
	PF_R8G8B8A8 = 37,
	PF_A8R8G8B8 = 38,
	PF_BC4 = 39,
	PF_R8G8 = 40,
	PF_ATC_RGB = 41,
	PF_ATC_RGBA_E = 42,
	PF_ATC_RGBA_I = 43,
	PF_X24_G8 = 44,
	PF_ETC1 = 45,
	PF_ETC2_RGB = 46,
	PF_ETC2_RGBA = 47,
	PF_R32G32B32A32_UINT = 48,
	PF_R16G16_UINT = 49,
	PF_ASTC_4x4 = 50,
	PF_ASTC_6x6 = 51,
	PF_ASTC_8x8 = 52,
	PF_ASTC_10x10 = 53,
	PF_ASTC_12x12 = 54,
	PF_BC6H = 55,
	PF_BC7 = 56,
	PF_R8_UINT = 57,
	PF_L8 = 58,
	PF_XGXR8 = 59,
	PF_R8G8B8A8_UINT = 60,
	PF_R8G8B8A8_SNORM = 61,
	PF_R16G16B16A16_UNORM = 62,
	PF_R16G16B16A16_SNORM = 63,
	PF_PLATFORM_HDR_0 = 64,
	PF_PLATFORM_HDR_1 = 65,
	PF_PLATFORM_HDR_2 = 66,
	PF_NV12 = 67,
	PF_R32G32_UINT = 68,
	PF_ETC2_R11_EAC = 69,
	PF_ETC2_RG11_EAC = 70,
	PF_MAX = 72
};

// Object: Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EAxis_MAX = 4
};

// Object: Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None = 0,
	UTC = 1,
	SinceGStartTime = 2,
	Local = 3,
	ELogTimes_MAX = 4
};

// Object: Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart = 0,
	FromEnd = 1,
	ESearchDir_MAX = 2
};

// Object: Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCase_MAX = 2
};

// Package: Engine
// Enums: 426

// Object: Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Object: Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Object: Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Object: Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics = 0,
	TG_StartPhysics = 1,
	TG_DuringPhysics = 2,
	TG_EndPhysics = 3,
	TG_PostPhysics = 4,
	TG_PostUpdateWork = 5,
	TG_LastDemotable = 6,
	TG_NewlySpawned = 7,
	TG_MAX = 8
};

// Object: Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Object: Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Object: Enum Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
	Bar = 0,
	Beat = 1,
	ThirtySecondNote = 2,
	SixteenthNote = 3,
	EighthNote = 4,
	QuarterNote = 5,
	HalfNote = 6,
	WholeNote = 7,
	DottedSixteenthNote = 8,
	DottedEighthNote = 9,
	DottedQuarterNote = 10,
	DottedHalfNote = 11,
	DottedWholeNote = 12,
	SixteenthNoteTriplet = 13,
	EighthNoteTriplet = 14,
	QuarterNoteTriplet = 15,
	HalfNoteTriplet = 16,
	Tick = 17,
	Count = 18,
	EQuartzCommandQuantization_MAX = 19
};

// Object: Enum Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6
};

// Object: Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Object: Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Object: Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Object: Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Object: Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Object: Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Object: Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists = 0,
	NetDriverCreateFailure = 1,
	NetDriverListenFailure = 2,
	ConnectionLost = 3,
	ConnectionTimeout = 4,
	FailureReceived = 5,
	OutdatedClient = 6,
	OutdatedServer = 7,
	PendingConnectionFailure = 8,
	NetGuidMismatch = 9,
	NetChecksumMismatch = 10,
	ENetworkFailure_MAX = 11
};

// Object: Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Object: Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	EScreenOrientation_MAX = 7
};

// Object: Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Object: Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Object: Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Object: Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Object: Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Object: Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Object: Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Object: Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Object: Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Object: Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Object: Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Object: Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_MAX = 3
};

// Object: Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Object: Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Object: Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Object: Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Object: Enum Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2
};

// Object: Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Object: Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Object: Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Object: Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Object: Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Object: Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Object: Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_MAX = 4
};

// Object: Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Object: Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Object: Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Object: Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	EDrawDebugItemType_MAX = 5
};

// Object: Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Object: Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Object: Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Object: Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Object: Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Object: Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Object: Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Object: Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Object: Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Object: Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Object: Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Object: Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Object: Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Object: Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Object: Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Object: Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Object: Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Object: Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Object: Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Object: Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Object: Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Object: Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Object: Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Object: Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Object: Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Object: Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown = 0,
	NeverCook = 1,
	DevelopmentCook = 2,
	DevelopmentAlwaysCook = 3,
	AlwaysCook = 4,
	EPrimaryAssetCookRule_MAX = 5
};

// Object: Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Object: Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Object: Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Object: Enum Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	EAudioBusChannels_MAX = 2
};

// Object: Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Object: Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Object: Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Object: Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Object: Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint16_t
{
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Object: Enum Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2
};

// Object: Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Object: Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Object: Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_Max = 3
};

// Object: Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Object: Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Object: Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Object: Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Object: Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Object: Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Object: Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Object: Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Object: Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Object: Enum Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3
};

// Object: Enum Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
	ApplyAsAbsolute = 0,
	SkipAutoScale = 1,
	SkipAutoPlaySpace = 2,
	Default = 3,
	ECameraShakeUpdateResultFlags_MAX = 4
};

// Object: Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Object: Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Object: Enum Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3
};

// Object: Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Object: Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Object: Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Object: Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Object: Enum Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2
};

// Object: Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Object: Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Object: Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Object: Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Object: Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Object: Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Object: Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	ENodeEnabledState_MAX = 3
};

// Object: Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Object: Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Object: Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Object: Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Object: Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Object: Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX = 6
};

// Object: Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Object: Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Object: Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Object: Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_Max = 29,
	VMI_Unknown = 255
};

// Object: Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Object: Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Object: Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Object: Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Object: Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_MAX = 5
};

// Object: Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Object: Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Object: Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Object: Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Object: Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Object: Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4
};

// Object: Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Object: Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Object: Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Object: Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Object: Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Object: Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Object: Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Object: Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Object: Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Object: Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ECollisionEnabled_MAX = 4
};

// Object: Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Object: Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_MAX = 3
};

// Object: Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Object: Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Object: Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Object: Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	Replay = 3,
	ENetworkSmoothingMode_MAX = 4
};

// Object: Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Object: Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Object: Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Object: Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Object: Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_NUM = 12,
	MSM_FromMaterialExpression = 13,
	MSM_MAX = 14
};

// Object: Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Object: Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Object: Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Object: Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Object: Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_MAX = 10
};

// Object: Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Object: Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1
};

// Object: Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Object: Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_MAX = 3
};

// Object: Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_ModulateSpecial = 7,
	BLEND_MAX = 8
};

// Object: Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Object: Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Object: Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Object: Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Object: Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Object: Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Object: Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Object: Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Object: Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Object: Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Object: Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Object: Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Object: Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Object: Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Object: Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Object: Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always = 0,
	ETAC_GoreEnabled = 1,
	ETAC_GoreDisabled = 2,
	ETAC_MAX = 3
};

// Object: Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed = 0,
	IMR_LookAtGroup = 1,
	IMR_Ignore = 2,
	IMR_MAX = 3
};

// Object: Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX = 0,
	AXIS_TranslationY = 1,
	AXIS_TranslationZ = 2,
	AXIS_RotationX = 3,
	AXIS_RotationY = 4,
	AXIS_RotationZ = 5,
	AXIS_MAX = 6
};

// Object: Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off = 0,
	ETTA_On = 1,
	ETTA_Toggle = 2,
	ETTA_Trigger = 3,
	ETTA_MAX = 4
};

// Object: Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always = 0,
	EVTC_GoreEnabled = 1,
	EVTC_GoreDisabled = 2,
	EVTC_MAX = 3
};

// Object: Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide = 0,
	EVTA_Show = 1,
	EVTA_Toggle = 2,
	EVTA_MAX = 3
};

// Object: Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Object: Enum Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2
};

// Object: Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Object: Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Object: Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Object: Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Object: Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Object: Enum Engine.ESyncOption
enum class ESyncOption : uint8_t
{
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3
};

// Object: Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Object: Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_MAX = 17
};

// Object: Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Object: Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Object: Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Object: Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Object: Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Object: Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Object: Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_MAX = 11
};

// Object: Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Object: Enum Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2
};

// Object: Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_MAX = 3
};

// Object: Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Object: Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Object: Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Object: Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Object: Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Object: Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Object: Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_MAX = 6
};

// Object: Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_MAX = 6
};

// Object: Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_MAX = 6
};

// Object: Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Object: Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_MAX = 14
};

// Object: Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Object: Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Object: Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_MAX = 18
};

// Object: Enum Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4
};

// Object: Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Object: Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Object: Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX = 4
};

// Object: Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_MAX = 31
};

// Object: Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

// Object: Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	RemoveOriginalActors = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};

// Object: Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Object: Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Object: Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Object: Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Object: Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Object: Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Object: Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Object: Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Object: Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Object: Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Object: Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	InferFromWorldMode = 5,
	FNavigationSystemRunMode_MAX = 6
};

// Object: Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Object: Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Object: Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Object: Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Object: Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Object: Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Object: Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	None = 0,
	HasBeenSerialized = 1,
	HasDeltaBeenRequested = 2,
	IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags_MAX = 5
};

// Object: Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Object: Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Object: Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Object: Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Object: Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Object: Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_MAX = 3
};

// Object: Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Object: Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Object: Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Object: Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Object: Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_MAX = 5
};

// Object: Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Object: Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Object: Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Object: Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Object: Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Object: Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Object: Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Object: Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Object: Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Object: Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Object: Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Object: Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Object: Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_LockedUp = 3,
	ENM_MAX = 4
};

// Object: Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Object: Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Object: Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Object: Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Object: Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Object: Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Object: Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Object: Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Object: Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Object: Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Object: Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Object: Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Object: Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Object: Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Object: Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Object: Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Object: Enum Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8_t
{
	RBAN = 0,
	World = 1,
	EPhysicsAssetSolverType_MAX = 2
};

// Object: Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Object: Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Object: Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_MAX = 5
};

// Object: Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Object: Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default = 0,
	ERSM_255 = 1,
	ERSM_1 = 2,
	ERSM_2 = 3,
	ERSM_4 = 4,
	ERSM_8 = 5,
	ERSM_16 = 6,
	ERSM_32 = 7,
	ERSM_64 = 8,
	ERSM_128 = 9,
	ERSM_MAX = 10
};

// Object: Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Object: Enum Engine.EMobileRenderBucket
enum class EMobileRenderBucket : uint8_t
{
	BasePass = 0,
	ProxyPass = 1,
	LightDecals = 2,
	DynamicPass = 3,
	UnusedPass0 = 4,
	UnusedPass1 = 5,
	UnusedPass2 = 6,
	Skybox = 7,
	EMobileRenderBucket_MAX = 8
};

// Object: Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Object: Enum Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4
};

// Object: Enum Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3
};

// Object: Enum Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
	HalfNote = 0,
	QuarterNote = 1,
	EighthNote = 2,
	SixteenthNote = 3,
	ThirtySecondNote = 4,
	Count = 5,
	EQuartzTimeSignatureQuantization_MAX = 6
};

// Object: Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Object: Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Object: Enum Engine.EMobileReflectionCompression
enum class EMobileReflectionCompression : uint8_t
{
	Default = 0,
	On = 1,
	Off = 2,
	EMobileReflectionCompression_MAX = 3
};

// Object: Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Object: Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Object: Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Object: Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Object: Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Object: Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	EMobileMSAASampleCount_MAX = 9
};

// Object: Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Object: Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Object: Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Object: Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Object: Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Object: Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Object: Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Object: Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Object: Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_Weighted = 5,
	RCCF_MAX = 6
};

// Object: Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Object: Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_MAX = 4
};

// Object: Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Object: Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Object: Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Object: Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Object: Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Object: Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Object: Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Specular = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight = 5,
	Count = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7
};

// Object: Enum Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4
};

// Object: Enum Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8_t
{
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3
};

// Object: Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Object: Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Object: Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2
};

// Object: Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Object: Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	ELightUnits_MAX = 3
};

// Object: Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Object: Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Object: Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_MAX = 4
};

// Object: Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Object: Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Object: Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement_DEPRECATED = 13,
	MP_TessellationMultiplier_DEPRECATED = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_MaterialAttributes = 30,
	MP_CustomOutput = 31,
	MP_MAX = 32
};

// Object: Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Object: Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	Auto = 0,
	Disabled = 1,
	Enabled = 2,
	ESkinCacheUsage_MAX = 3
};

// Object: Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Object: Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Object: Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Object: Enum Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3
};

// Object: Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
	UniformMass = 0,
	TotalMass = 1,
	Density = 2,
	MaxClothMassMode = 3,
	EClothMassMode_MAX = 4
};

// Object: Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Object: Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4
};

// Object: Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	Before_Versionning = 0,
	SkeletalMeshBuildRefactor = 1,
	VersionPlusOne = 2,
	LatestVersion = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4
};

// Object: Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Object: Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Object: Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Object: Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Object: Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Object: Enum Engine.EVertexOffsetUsageType
enum class EVertexOffsetUsageType : uint8_t
{
	None = 0,
	PreSkinningOffset = 1,
	PostSkinningOffset = 2,
	EVertexOffsetUsageType_MAX = 3
};

// Object: Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Object: Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Object: Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Object: Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Object: Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Object: Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Object: Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Object: Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3
};

// Object: Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Object: Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Object: Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Object: Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Object: Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Object: Enum Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3
};

// Object: Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Object: Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Object: Enum Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
	Disable = 0,
	Inherit = 1,
	Override = 2,
	EModulationRouting_MAX = 3
};

// Object: Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Object: Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Object: Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2
};

// Object: Enum Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3
};

// Object: Enum Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Object: Enum Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4
};

// Object: Enum Engine.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	Max = 6
};

// Object: Enum Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2
};

// Object: Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Object: Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Object: Enum Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4
};

// Object: Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3,
	VeryLarge_2048 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Object: Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Object: Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint16_t
{
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Object: Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Object: Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Object: Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Object: Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Object: Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Object: Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Object: Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Object: Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Object: Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Object: Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Object: Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Object: Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Object: Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Object: Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Object: Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7,
	TSF_G16 = 8,
	TSF_MAX = 9
};

// Object: Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed = 0,
	TSAT_PNGCompressed = 1,
	TSAT_DDSFile = 2,
	TSAT_MAX = 3
};

// Object: Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Object: Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Object: Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Object: Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Object: Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_HalfFloat = 12,
	TC_ReflectionCapture = 13,
	TC_MAX = 14
};

// Object: Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
	Default = 0,
	Unfiltered = 1,
	SimpleAverage = 2,
	Sharpen0 = 3,
	Sharpen1 = 4,
	Sharpen2 = 5,
	Sharpen3 = 6,
	Sharpen4 = 7,
	Sharpen5 = 8,
	Sharpen6 = 9,
	Sharpen7 = 10,
	Sharpen8 = 11,
	Sharpen9 = 12,
	Sharpen10 = 13,
	ETextureDownscaleOptions_MAX = 14
};

// Object: Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Object: Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Object: Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Object: Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_MAX = 21
};

// Object: Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_MAX = 49
};

// Object: Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Object: Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Object: Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Object: Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Object: Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Object: Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Object: Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Object: Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Object: Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6
};

// Object: Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Object: Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Object: Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Object: Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Object: Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Object: Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3
};

// Package: GTABase
// Enums: 45

// Object: Enum GTABase.Achievements
enum class EAchievements : uint8_t
{
	GETTING_STARTED = 0,
	WITH_EXTRA_DIP = 1,
	THE_END_OF_THE_LINE = 2,
	HOOPIN_IT_UP = 3,
	A_LEGITIMATE_BUSINESS = 4,
	ILL_HAVE_TWO_NUMBER_9S = 5,
	THE_AMERICAN_DREAM = 6,
	PAY_N_SPRAY = 7,
	BIKE_OR_BIKER = 8,
	WHO_NEEDS_DIRECTIONS = 9,
	LIBERTY_CITY_STATE_OF_MIND = 10,
	SWISS_ARMY_STRIFE = 11,
	SCHOOLS_OUT = 12,
	HORROR_OF_THE_SANTA_MARIA = 13,
	THEY_CANT_STOP_ALL_OF_US = 14,
	SMOOTH_MOVES = 15,
	WHAT_THE_CITY_NEEDS = 16,
	SAVIOR = 17,
	RESCUE_A_KITTEN_TOO = 18,
	YES_I_SPEAK_ENGLISH = 19,
	LUCKY_SPIN = 20,
	WHAT_HAPPENS_IN_LAS_VENTURAS = 21,
	ALL_DRESSED_UP_FOR_SAN_FIERRO = 22,
	NOT_A_PLAYER = 23,
	WHAT_ARE_THE_ODDS = 24,
	DOUBLE_OR_NOTHIN = 25,
	ASSASSIN = 26,
	ORIGINAL_GANGSTER = 27,
	TODAY_WAS_A_GOOD_DAY = 28,
	PUBLIC_ENEMY_NO_1 = 29,
	CHICK_MAGNET = 30,
	AINT_NOTHING_BUT_A_G_THING = 31,
	REMASTERED = 32,
	HERE_WE_GO_AGAIN = 33,
	I_AINT_NO_BUSTER = 34,
	STICKY_FINGERS = 35,
	_81_YEARS_TOO_LATE = 36,
	GET_A_PUMP = 37,
	BEAT_THE_COCK = 38,
	METROSEXUAL = 39,
	WHERED_HE_GO = 40,
	HIGH_AS_A_KITE = 41,
	REPRESENT = 42,
	ASSERT_YOURSELF_NEXT_TIME = 43,
	SERIAL_OFFENDER = 44,
	FREIGHT_DATE = 45,
	TIME_TO_KILL = 46,
	LOTS_OF_GUNS = 47,
	BORN_IN_THE_80S = 48,
	RUNNING_RAMPANT = 49,
	IRON_Y = 50,
	NOT_MY_FIRST_TIME = 51,
	ONE_IS_BETTER_THAN_TWO = 52,
	POINT_A_TO_POINT_B = 53,
	HIGH_QUALITY_H2O = 54,
	PIE_GUY = 55,
	BULL_IN_A_CHINA_SHOP = 56,
	VICE_CITY_MOGUL = 57,
	SAY_SALUTATIONS_TO_MY_LITTLE_FRIEND = 58,
	CATCH_ME_IF_YOU_CAN = 59,
	DID_SOMEBODY_CALL_THE_WAMBULANCE = 60,
	GREASY_PALMS = 61,
	JUST_LIKE_THE_REAL_THING = 62,
	KEEPIE_UPPY_OKIE_DOKIE = 63,
	GUN_FOR_HIRE = 64,
	IM_FAMOUS = 65,
	DONT_NEED_ROADS = 66,
	DAREDEVIL = 67,
	LEGAL_COUNSEL = 68,
	LIFE_OF_THE_PARTY = 69,
	SOUTH_AMERICAN_CONNECTION = 70,
	BIG_HEAT_FROM_LITTLE_HAVANA = 71,
	CHAUFFEUR = 72,
	TOMMY_TWO_WHEELS = 73,
	GRAND_THEFT_AUTO = 74,
	BLOODSTAINED_HANDS = 75,
	TAKE_THE_CANNOLI = 76,
	MISCHIEF_MANAGED = 77,
	CHOPPERD_UP = 78,
	CITY_SLEUTH = 79,
	DONE_IT_ALL = 80,
	KINGPIN = 81,
	PUT_EM_UP = 82,
	OFFENDER = 83,
	RETRO_LEWK = 84,
	SCOURING_THE_CITY = 85,
	BREAK_IT_UP = 86,
	TARGET_PRACTICE = 87,
	PRIME_REAL_ESTATE = 88,
	VICE_VICE_BABY = 89,
	BAKED_DISTRACTIONS = 90,
	FIRST_DAY_ON_THE_JOB = 91,
	WITHOUT_A_SCRATCH = 92,
	ESCAPE_ARTIST = 93,
	DISPOSING_OF_THE_EVIDENCE = 94,
	MOB_BOSS = 95,
	STREET_SWEEPER = 96,
	PLANNED_AHEAD = 97,
	GOT_THIS_FIGURED_OUT = 98,
	BY_A_MILE = 99,
	WRECKLESS_DRIVING = 100,
	WHEELS_UP = 101,
	COME_OUT_TO_PLAY = 102,
	WHERE_TO = 103,
	LIBERTY_CITY_MINUTE = 104,
	FULL_ARTILLERY = 105,
	A_MARKED_MAN = 106,
	OFFSHORE_DELIVERY = 107,
	NOT_SO_FAST = 108,
	A_GIFT_FROM_THE_KING = 109,
	MAN_TOYZ = 110,
	SPLISH_SPLASH = 111,
	PLAYING_DOCTOR = 112,
	GOING_ROGUE = 113,
	DIRTY_MONEY = 114,
	RIGHT_HAND_MAN = 115,
	FAST_FURIOUS_FIRST_RESPONDER = 116,
	LIBERTY_CITY_SECRETS = 117,
	IS_THAT_ALL_YOUVE_GOT = 118,
	KING_OF_LIBERTY_CITY = 119,
	GOT_ANY_STORIES_OLD_MAN = 120,
	TALKS_A_LOT = 121,
	BLOOD_IN_THE_STREETS = 122,
	INSTIGATOR = 123,
	CHASING_PAPER = 124,
	AM_WALKIN_HERE = 125,
	HUNTING_SEASON = 126,
	REPEAT_OFFENDER = 127,
	IF_YOU_AINT_CHEATIN_YOU_AINT_TRYIN = 128,
	PLAY_FETCH = 129,
	PEST_CONTROL = 130,
	RELIEF_PITCHER = 131,
	LIKE_A_BOSS = 132,
	FARE_GAME = 133,
	RECYCLER = 134,
	NUM_ACHIEVEMENTS = 135,
	Achievements_MAX = 136
};

// Object: Enum GTABase.EColPointSurfaceType
enum class EColPointSurfaceType : uint8_t
{
	COLPOINT_SURFACETYPE_DEFAULT = 0,
	COLPOINT_SURFACETYPE_TARMAC = 1,
	COLPOINT_SURFACETYPE_GRASS = 2,
	COLPOINT_SURFACETYPE_GRAVEL = 3,
	COLPOINT_SURFACETYPE_MUD = 4,
	COLPOINT_SURFACETYPE_PAVEMENT = 5,
	COLPOINT_SURFACETYPE_CAR = 6,
	COLPOINT_SURFACETYPE_GLASS = 7,
	COLPOINT_SURFACETYPE_TRANSPARENT_CLOTH = 8,
	COLPOINT_SURFACETYPE_GARAGE_DOOR = 9,
	COLPOINT_SURFACETYPE_CAR_PANEL = 10,
	COLPOINT_SURFACETYPE_THICK_METAL_PLATE = 11,
	COLPOINT_SURFACETYPE_SCAFFOLD_POLE = 12,
	COLPOINT_SURFACETYPE_LAMP_POST = 13,
	COLPOINT_SURFACETYPE_FIRE_HYDRANT = 14,
	COLPOINT_SURFACETYPE_GIRDER = 15,
	COLPOINT_SURFACETYPE_METAL_CHAIN_FENCE = 16,
	COLPOINT_SURFACETYPE_PED = 17,
	COLPOINT_SURFACETYPE_SAND = 18,
	COLPOINT_SURFACETYPE_SHALLOW_WATER = 19,
	COLPOINT_SURFACETYPE_WOOD_CRATES = 20,
	COLPOINT_SURFACETYPE_WOOD_BENCH = 21,
	COLPOINT_SURFACETYPE_WOOD_SOLID = 22,
	COLPOINT_SURFACETYPE_RUBBER = 23,
	COLPOINT_SURFACETYPE_PLASTIC = 24,
	COLPOINT_SURFACETYPE_VEGETATION = 25,
	COLPOINT_SURFACETYPE_STEEPHILL = 26,
	COLPOINT_SURFACETYPE_CONTAINER = 27,
	COLPOINT_SURFACETYPE_NEWS_VENDOR = 28,
	COLPOINT_SURFACETYPE_WHEELBASE = 29,
	COLPOINT_SURFACETYPE_CARDBOARDBOX = 30,
	COLPOINT_SURFACETYPE_TRANSPARENT_STONE = 31,
	COLPOINT_SURFACETYPE_METAL_GATE = 32,
	COLPOINT_SURFACETYPE_SAND_NOTBEACH = 33,
	COLPOINT_SURFACETYPE_CONCRETE_BEACH = 34,
	COLPOINT_SURFACETYPE_ROCK = 35,
	COLPOINT_SURFACETYPE_CARPET = 36,
	COLPOINT_SURFACETYPE_HAY = 37,
	COLPOINT_SURFACETYPE_GENERIC_FLOOR = 38,
	COLPOINT_SURFACETYPE_LAST = 39,
	COLPOINT_SURFACETYPE_MAX = 40
};

// Object: Enum GTABase.EVehicleEngineSoundType
enum class EVehicleEngineSoundType : uint8_t
{
	VEST_DummyOff = 0,
	VEST_DummyReverse = 1,
	VEST_DummyIdle = 2,
	VEST_PlayerCruise = 3,
	VEST_PlayerAccelerate = 4,
	VEST_PlayerOff = 5,
	VEST_PlayerReverse = 6,
	VEST_Nitro1 = 7,
	VEST_Nitro2 = 8,
	VEST_Steam = 9,
	VEST_Destroyed = 10,
	VEST_MovingParts = 11,
	VEST_MAX = 12
};

// Object: Enum GTABase.EPlatformType
enum class EPlatformType : uint8_t
{
	PT_Unknown = 0,
	PT_XboxOneGDK = 1,
	PT_XboxOneGDK_S = 2,
	PT_XboxOneGDK_Scorpio = 3,
	PT_XSX = 4,
	PT_XSX_Anaconda = 5,
	PT_XSX_Lockhart = 6,
	PT_PS4 = 7,
	PT_PS4_Neo = 8,
	PT_PS4_Neo_4k = 9,
	PT_PS5 = 10,
	PT_IOS = 11,
	PT_Android = 12,
	PT_Default = 13,
	PT_MAX = 14
};

// Object: Enum GTABase.EHapticEffectType
enum class EHapticEffectType : uint8_t
{
	HET_SmallArms = 0,
	HET_Rifle = 1,
	HET_Explosion = 2,
	HET_MenuTick = 3,
	HET_MenuSelection = 4,
	HET_CarDoor = 5,
	HET_VehicleImpactLow = 6,
	HET_VehicleImpactHigh = 7,
	HET_Rocket = 8,
	HET_RoughTerrain = 9,
	HET_PedImpactLow = 10,
	HET_PedImpactHigh = 11,
	HET_Jetpack = 12,
	HET_Pickup = 13,
	HET_TargetAcquired = 14,
	HET_Flamethrower = 15,
	HET_ChainsawStart = 16,
	HET_ChainsawBuzz = 17,
	HET_MAX = 18
};

// Object: Enum GTABase.EGTAExplosionSurface
enum class EGTAExplosionSurface : uint8_t
{
	GES_Default = 0,
	GES_Sand = 1,
	GES_Water = 2,
	GES_Dirt = 3,
	GES_Grass = 4,
	GES_MAX = 5
};

// Object: Enum GTABase.EGTAExplosionType
enum class EGTAExplosionType : uint8_t
{
	GET_Inferno = 0,
	GET_TinyBlast = 1,
	GET_SmallBlast = 2,
	GET_MediumBlast = 3,
	GET_LargeBlast = 4,
	GET_MAX = 5
};

// Object: Enum GTABase.EIOSPlatformType
enum class EIOSPlatformType : uint8_t
{
	IOSPT_Unknown = 0,
	IOSPT_iPadAir = 1,
	IOSPT_iPadAir2 = 2,
	IOSPT_iPadAir3 = 3,
	IOSPT_iPadAir4 = 4,
	IOSPT_iPadMini2 = 5,
	IOSPT_iPadMini3 = 6,
	IOSPT_iPadMini4 = 7,
	IOSPT_iPadMini5 = 8,
	IOSPT_iPodTouch6 = 9,
	IOSPT_iPodTouch7 = 10,
	IOSPT_iPhone5S = 11,
	IOSPT_iPhone6 = 12,
	IOSPT_iPhone6Plus = 13,
	IOSPT_iPhone6S = 14,
	IOSPT_iPhone6SPlus = 15,
	IOSPT_iPhone7 = 16,
	IOSPT_iPhone7Plus = 17,
	IOSPT_iPhoneSE = 18,
	IOSPT_iPhone8 = 19,
	IOSPT_iPhone8Plus = 20,
	IOSPT_iPhoneX = 21,
	IOSPT_iPhoneXS = 22,
	IOSPT_iPhoneXSMax = 23,
	IOSPT_iPhoneXR = 24,
	IOSPT_iPhone11 = 25,
	IOSPT_iPhone11Pro = 26,
	IOSPT_iPhone11ProMax = 27,
	IOSPT_iPhoneSE2 = 28,
	IOSPT_iPhone12Mini = 29,
	IOSPT_iPhone12 = 30,
	IOSPT_iPhone12Pro = 31,
	IOSPT_iPhone12ProMax = 32,
	IOSPT_iPhone13Mini = 33,
	IOSPT_iPhone13 = 34,
	IOSPT_iPhone13Pro = 35,
	IOSPT_iPhone13ProMax = 36,
	IOSPT_iPhone14 = 37,
	IOSPT_iPhone14Plus = 38,
	IOSPT_iPhone14Pro = 39,
	IOSPT_iPhone14ProMax = 40,
	IOSPT_iPhone15 = 41,
	IOSPT_iPhone15Plus = 42,
	IOSPT_iPhone15Pro = 43,
	IOSPT_iPhone15ProMax = 44,
	IOSPT_iPad5 = 45,
	IOSPT_iPad6 = 46,
	IOSPT_iPad7 = 47,
	IOSPT_iPad8 = 48,
	IOSPT_iPadPro = 49,
	IOSPT_iPadPro2 = 50,
	IOSPT_iPadPro3 = 51,
	IOSPT_iPadPro4 = 52,
	IOSPT_DefaultPhone = 53,
	IOSPT_DefaultTablet = 54,
	IOSPT_Default = 55,
	IOSPT_MAX = 56
};

// Object: Enum GTABase.EBP_LANGUAGE
enum class EBP_LANGUAGE : uint8_t
{
	LANGUAGE_ENGLISH = 0,
	LANGUAGE_FRENCH = 1,
	LANGUAGE_GERMAN = 2,
	LANGUAGE_ITALIAN = 3,
	LANGUAGE_SPANISH = 4,
	LANGUAGE_RUSSIAN = 5,
	LANGUAGE_JAPANESE = 6,
	LANGUAGE_KOREAN = 7,
	LANGUAGE_CHINESE_SIMPLE = 8,
	LANGUAGE_CHINESE_TRADITIONAL = 9,
	LANGUAGE_BRAZILIAN = 10,
	LANGUAGE_MEXICAN = 11,
	LANGUAGE_POLISH = 12,
	LANGUAGE_UNSUPPORTED = 13,
	LANGUAGE_MAX = 14
};

// Object: Enum GTABase.EGTAActivities
enum class EGTAActivities : uint8_t
{
	GTA3_STORY_COMPLETE = 0,
	GTA3_100_PERCENT = 1,
	GTAVC_STORY_COMPLETE = 2,
	GTAVC_100_PERCENT = 3,
	GTASA_STORY_COMPLETE = 4,
	GTASA_100_PERCENT = 5,
	EGA_MAX = 6,
	EGTAActivities_MAX = 7
};

// Object: Enum GTABase.EFrameSpace
enum class EFrameSpace : uint8_t
{
	Bone = 0,
	Mesh = 1,
	Actor = 2,
	World = 3,
	EFrameSpace_MAX = 4
};

// Object: Enum GTABase.EGTA3Material
enum class EGTA3Material : uint8_t
{
	GTA3_SURFACETYPE_DEFAULT = 0,
	GTA3_SURFACETYPE_TARMAC = 1,
	GTA3_SURFACETYPE_GRASS = 2,
	GTA3_SURFACETYPE_GRAVEL = 3,
	GTA3_SURFACETYPE_MUD = 4,
	GTA3_SURFACETYPE_PAVEMENT = 5,
	GTA3_SURFACETYPE_CAR = 6,
	GTA3_SURFACETYPE_GLASS = 7,
	GTA3_SURFACETYPE_TRANSPARENT_CLOTH = 8,
	GTA3_SURFACETYPE_GARAGE_DOOR = 9,
	GTA3_SURFACETYPE_CAR_PANEL = 10,
	GTA3_SURFACETYPE_THICK_METAL_PLATE = 11,
	GTA3_SURFACETYPE_SCAFFOLD_POLE = 12,
	GTA3_SURFACETYPE_LAMP_POST = 13,
	GTA3_SURFACETYPE_FIRE_HYDRANT = 14,
	GTA3_SURFACETYPE_GIRDER = 15,
	GTA3_SURFACETYPE_METAL_CHAIN_FENCE = 16,
	GTA3_SURFACETYPE_PED = 17,
	GTA3_SURFACETYPE_SAND = 18,
	GTA3_SURFACETYPE_SHALLOW_WATER = 19,
	GTA3_SURFACETYPE_WOOD_CRATES = 20,
	GTA3_SURFACETYPE_WOOD_BENCH = 21,
	GTA3_SURFACETYPE_WOOD_SOLID = 22,
	GTA3_SURFACETYPE_RUBBER = 23,
	GTA3_SURFACETYPE_PLASTIC = 24,
	GTA3_SURFACETYPE_VEGETATION = 25,
	GTA3_SURFACETYPE_STEEPHILL = 26,
	GTA3_SURFACETYPE_CONTAINER = 27,
	GTA3_SURFACETYPE_NEWS_VENDOR = 28,
	GTA3_SURFACETYPE_WHEELBASE = 29,
	GTA3_SURFACETYPE_CARDBOARDBOX = 30,
	GTA3_SURFACETYPE_TRANSPARENT_STONE = 31,
	GTA3_SURFACETYPE_METAL_GATE = 32,
	GTA3_NUM_SURFACE_TYPES = 33,
	GTA3_MAX = 34
};

// Object: Enum GTABase.ESanAndreasMaterial
enum class ESanAndreasMaterial : uint8_t
{
	SA_SURFACE_TYPE_DEFAULT = 0,
	SA_SURFACE_TYPE_TARMAC = 1,
	SA_SURFACE_TYPE_TARMAC_FUCKED = 2,
	SA_SURFACE_TYPE_TARMAC_REALLYFUCKED = 3,
	SA_SURFACE_TYPE_PAVEMENT = 4,
	SA_SURFACE_TYPE_PAVEMENT_FUCKED = 5,
	SA_SURFACE_TYPE_GRAVEL = 6,
	SA_SURFACE_TYPE_FUCKED_CONCRETE = 7,
	SA_SURFACE_TYPE_PAINTED_GROUND = 8,
	SA_SURFACE_TYPE_GRASS_SHORT_LUSH = 9,
	SA_SURFACE_TYPE_GRASS_MEDIUM_LUSH = 10,
	SA_SURFACE_TYPE_GRASS_LONG_LUSH = 11,
	SA_SURFACE_TYPE_GRASS_SHORT_DRY = 12,
	SA_SURFACE_TYPE_GRASS_MEDIUM_DRY = 13,
	SA_SURFACE_TYPE_GRASS_LONG_DRY = 14,
	SA_SURFACE_TYPE_GOLFGRASS_ROUGH = 15,
	SA_SURFACE_TYPE_GOLFGRASS_SMOOTH = 16,
	SA_SURFACE_TYPE_STEEP_SLIDYGRASS = 17,
	SA_SURFACE_TYPE_STEEP_CLIFF = 18,
	SA_SURFACE_TYPE_FLOWERBED = 19,
	SA_SURFACE_TYPE_MEADOW = 20,
	SA_SURFACE_TYPE_WASTEGROUND = 21,
	SA_SURFACE_TYPE_WOODLANDGROUND = 22,
	SA_SURFACE_TYPE_VEGETATION = 23,
	SA_SURFACE_TYPE_MUD_WET = 24,
	SA_SURFACE_TYPE_MUD_DRY = 25,
	SA_SURFACE_TYPE_DIRT = 26,
	SA_SURFACE_TYPE_DIRTTRACK = 27,
	SA_SURFACE_TYPE_SAND_DEEP = 28,
	SA_SURFACE_TYPE_SAND_MEDIUM = 29,
	SA_SURFACE_TYPE_SAND_COMPACT = 30,
	SA_SURFACE_TYPE_SAND_ARID = 31,
	SA_SURFACE_TYPE_SAND_MORE = 32,
	SA_SURFACE_TYPE_SAND_BEACH = 33,
	SA_SURFACE_TYPE_CONCRETE_BEACH = 34,
	SA_SURFACE_TYPE_ROCK_DRY = 35,
	SA_SURFACE_TYPE_ROCK_WET = 36,
	SA_SURFACE_TYPE_ROCK_CLIFF = 37,
	SA_SURFACE_TYPE_WATER_RIVERBED = 38,
	SA_SURFACE_TYPE_WATER_SHALLOW = 39,
	SA_SURFACE_TYPE_CORNFIELD = 40,
	SA_SURFACE_TYPE_HEDGE = 41,
	SA_SURFACE_TYPE_WOOD_CRATES = 42,
	SA_SURFACE_TYPE_WOOD_SOLID = 43,
	SA_SURFACE_TYPE_WOOD_THIN = 44,
	SA_SURFACE_TYPE_GLASS = 45,
	SA_SURFACE_TYPE_GLASS_WINDOWS_LARGE = 46,
	SA_SURFACE_TYPE_GLASS_WINDOWS_SMALL = 47,
	SA_SURFACE_TYPE_EMPTY1 = 48,
	SA_SURFACE_TYPE_EMPTY2 = 49,
	SA_SURFACE_TYPE_GARAGE_DOOR = 50,
	SA_SURFACE_TYPE_THICK_METAL_PLATE = 51,
	SA_SURFACE_TYPE_SCAFFOLD_POLE = 52,
	SA_SURFACE_TYPE_LAMP_POST = 53,
	SA_SURFACE_TYPE_METAL_GATE = 54,
	SA_SURFACE_TYPE_METAL_CHAIN_FENCE = 55,
	SA_SURFACE_TYPE_GIRDER = 56,
	SA_SURFACE_TYPE_FIRE_HYDRANT = 57,
	SA_SURFACE_TYPE_CONTAINER = 58,
	SA_SURFACE_TYPE_NEWS_VENDOR = 59,
	SA_SURFACE_TYPE_WHEELBASE = 60,
	SA_SURFACE_TYPE_CARDBOARDBOX = 61,
	SA_SURFACE_TYPE_PED = 62,
	SA_SURFACE_TYPE_CAR = 63,
	SA_SURFACE_TYPE_CAR_PANEL = 64,
	SA_SURFACE_TYPE_CAR_MOVINGCOMPONENT = 65,
	SA_SURFACE_TYPE_TRANSPARENT_CLOTH = 66,
	SA_SURFACE_TYPE_RUBBER = 67,
	SA_SURFACE_TYPE_PLASTIC = 68,
	SA_SURFACE_TYPE_TRANSPARENT_STONE = 69,
	SA_SURFACE_TYPE_WOOD_BENCH = 70,
	SA_SURFACE_TYPE_CARPET = 71,
	SA_SURFACE_TYPE_FLOORBOARD = 72,
	SA_SURFACE_TYPE_STAIRSWOOD = 73,
	SA_SURFACE_TYPE_P_SAND = 74,
	SA_SURFACE_TYPE_P_SAND_DENSE = 75,
	SA_SURFACE_TYPE_P_SAND_ARID = 76,
	SA_SURFACE_TYPE_P_SAND_COMPACT = 77,
	SA_SURFACE_TYPE_P_SAND_ROCKY = 78,
	SA_SURFACE_TYPE_P_SANDBEACH = 79,
	SA_SURFACE_TYPE_P_GRASS_SHORT = 80,
	SA_SURFACE_TYPE_P_GRASS_MEADOW = 81,
	SA_SURFACE_TYPE_P_GRASS_DRY = 82,
	SA_SURFACE_TYPE_P_WOODLAND = 83,
	SA_SURFACE_TYPE_P_WOODDENSE = 84,
	SA_SURFACE_TYPE_P_ROADSIDE = 85,
	SA_SURFACE_TYPE_P_ROADSIDEDES = 86,
	SA_SURFACE_TYPE_P_FLOWERBED = 87,
	SA_SURFACE_TYPE_P_WASTEGROUND = 88,
	SA_SURFACE_TYPE_P_CONCRETE = 89,
	SA_SURFACE_TYPE_P_OFFICEDESK = 90,
	SA_SURFACE_TYPE_P_711SHELF1 = 91,
	SA_SURFACE_TYPE_P_711SHELF2 = 92,
	SA_SURFACE_TYPE_P_711SHELF3 = 93,
	SA_SURFACE_TYPE_P_RESTUARANTTABLE = 94,
	SA_SURFACE_TYPE_P_BARTABLE = 95,
	SA_SURFACE_TYPE_P_UNDERWATERLUSH = 96,
	SA_SURFACE_TYPE_P_UNDERWATERBARREN = 97,
	SA_SURFACE_TYPE_P_UNDERWATERCORAL = 98,
	SA_SURFACE_TYPE_P_UNDERWATERDEEP = 99,
	SA_SURFACE_TYPE_P_RIVERBED = 100,
	SA_SURFACE_TYPE_P_RUBBLE = 101,
	SA_SURFACE_TYPE_P_BEDROOMFLOOR = 102,
	SA_SURFACE_TYPE_P_KIRCHENFLOOR = 103,
	SA_SURFACE_TYPE_P_LIVINGRMFLOOR = 104,
	SA_SURFACE_TYPE_P_CORRIDORFLOOR = 105,
	SA_SURFACE_TYPE_P_711FLOOR = 106,
	SA_SURFACE_TYPE_P_FASTFOODFLOOR = 107,
	SA_SURFACE_TYPE_P_SKANKYFLOOR = 108,
	SA_SURFACE_TYPE_P_MOUNTAIN = 109,
	SA_SURFACE_TYPE_P_MARSH = 110,
	SA_SURFACE_TYPE_P_BUSHY = 111,
	SA_SURFACE_TYPE_P_BUSHYMIX = 112,
	SA_SURFACE_TYPE_P_BUSHYDRY = 113,
	SA_SURFACE_TYPE_P_BUSHYMID = 114,
	SA_SURFACE_TYPE_P_GRASSWEEFLOWERS = 115,
	SA_SURFACE_TYPE_P_GRASSDRYTALL = 116,
	SA_SURFACE_TYPE_P_GRASSLUSHTALL = 117,
	SA_SURFACE_TYPE_P_GRASSGRNMIX = 118,
	SA_SURFACE_TYPE_P_GRASSBRNMIX = 119,
	SA_SURFACE_TYPE_P_GRASSLOW = 120,
	SA_SURFACE_TYPE_P_GRASSROCKY = 121,
	SA_SURFACE_TYPE_P_GRASSSMALLTREES = 122,
	SA_SURFACE_TYPE_P_DIRTROCKY = 123,
	SA_SURFACE_TYPE_P_DIRTWEEDS = 124,
	SA_SURFACE_TYPE_P_GRASSWEEDS = 125,
	SA_SURFACE_TYPE_P_RIVEREDGE = 126,
	SA_SURFACE_TYPE_P_POOLSIDE = 127,
	SA_SURFACE_TYPE_P_FORESTSTUMPS = 128,
	SA_SURFACE_TYPE_P_FORESTSTICKS = 129,
	SA_SURFACE_TYPE_P_FORRESTLEAVES = 130,
	SA_SURFACE_TYPE_P_DESERTROCKS = 131,
	SA_SURFACE_TYPE_P_FORRESTDRY = 132,
	SA_SURFACE_TYPE_P_SPARSEFLOWERS = 133,
	SA_SURFACE_TYPE_P_BUILDINGSITE = 134,
	SA_SURFACE_TYPE_P_DOCKLANDS = 135,
	SA_SURFACE_TYPE_P_INDUSTRIAL = 136,
	SA_SURFACE_TYPE_P_INDUSTJETTY = 137,
	SA_SURFACE_TYPE_P_CONCRETELITTER = 138,
	SA_SURFACE_TYPE_P_ALLEYRUBISH = 139,
	SA_SURFACE_TYPE_P_JUNKYARDPILES = 140,
	SA_SURFACE_TYPE_P_JUNKYARDGRND = 141,
	SA_SURFACE_TYPE_P_DUMP = 142,
	SA_SURFACE_TYPE_P_CACTUSDENSE = 143,
	SA_SURFACE_TYPE_P_AIRPORTGRND = 144,
	SA_SURFACE_TYPE_P_CORNFIELD = 145,
	SA_SURFACE_TYPE_P_GRASSLIGHT = 146,
	SA_SURFACE_TYPE_P_GRASSLIGHTER = 147,
	SA_SURFACE_TYPE_P_GRASSLIGHTER2 = 148,
	SA_SURFACE_TYPE_P_GRASSMID1 = 149,
	SA_SURFACE_TYPE_P_GRASSMID2 = 150,
	SA_SURFACE_TYPE_P_GRASSDARK = 151,
	SA_SURFACE_TYPE_P_GRASSDARK2 = 152,
	SA_SURFACE_TYPE_P_GRASSDIRTMIX = 153,
	SA_SURFACE_TYPE_P_RIVERBEDSTONE = 154,
	SA_SURFACE_TYPE_P_RIVERBEDSHALLOW = 155,
	SA_SURFACE_TYPE_P_RIVERBEDWEEDS = 156,
	SA_SURFACE_TYPE_P_SEAWEED = 157,
	SA_SURFACE_TYPE_DOOR = 158,
	SA_SURFACE_TYPE_PLASTICBARRIER = 159,
	SA_SURFACE_TYPE_PARKGRASS = 160,
	SA_SURFACE_TYPE_STAIRSSTONE = 161,
	SA_SURFACE_TYPE_STAIRSMETAL = 162,
	SA_SURFACE_TYPE_STAIRSCARPET = 163,
	SA_SURFACE_TYPE_FLOORMETAL = 164,
	SA_SURFACE_TYPE_FLOORCONCRETE = 165,
	SA_SURFACE_TYPE_BIN_BAG = 166,
	SA_SURFACE_TYPE_THIN_METAL_SHEET = 167,
	SA_SURFACE_TYPE_METAL_BARREL = 168,
	SA_SURFACE_TYPE_PLASTIC_CONE = 169,
	SA_SURFACE_TYPE_PLASTIC_DUMPSTER = 170,
	SA_SURFACE_TYPE_METAL_DUMPSTER = 171,
	SA_SURFACE_TYPE_WOOD_PICKET_FENCE = 172,
	SA_SURFACE_TYPE_WOOD_SLATTED_FENCE = 173,
	SA_SURFACE_TYPE_WOOD_RANCH_FENCE = 174,
	SA_SURFACE_TYPE_UNBREAKABLE_GLASS = 175,
	SA_SURFACE_TYPE_HAY_BALE = 176,
	SA_SURFACE_TYPE_GORE = 177,
	SA_SURFACE_TYPE_RAILTRACK = 178,
	SA_NUM_SURFACE_TYPES = 179,
	SA_MAX = 180
};

// Object: Enum GTABase.EGTASanAndreasColSurfaceType
enum class EGTASanAndreasColSurfaceType : uint8_t
{
	GTA_SA_SURFACE_TYPE_DEFAULT = 0,
	GTA_SA_SURFACE_TYPE_TARMAC = 1,
	GTA_SA_SURFACE_TYPE_TARMAC_DAMAGED = 2,
	GTA_SA_SURFACE_TYPE_TARMAC_REALLYDAMAGED = 3,
	GTA_SA_SURFACE_TYPE_PAVEMENT = 4,
	GTA_SA_SURFACE_TYPE_PAVEMENT_DAMAGED = 5,
	GTA_SA_SURFACE_TYPE_GRAVEL = 6,
	GTA_SA_SURFACE_TYPE_DAMAGED_CONCRETE = 7,
	GTA_SA_SURFACE_TYPE_PAINTED_GROUND = 8,
	GTA_SA_SURFACE_TYPE_GRASS_SHORT_LUSH = 9,
	GTA_SA_SURFACE_TYPE_GRASS_MEDIUM_LUSH = 10,
	GTA_SA_SURFACE_TYPE_GRASS_LONG_LUSH = 11,
	GTA_SA_SURFACE_TYPE_GRASS_SHORT_DRY = 12,
	GTA_SA_SURFACE_TYPE_GRASS_MEDIUM_DRY = 13,
	GTA_SA_SURFACE_TYPE_GRASS_LONG_DRY = 14,
	GTA_SA_SURFACE_TYPE_GOLFGRASS_ROUGH = 15,
	GTA_SA_SURFACE_TYPE_GOLFGRASS_SMOOTH = 16,
	GTA_SA_SURFACE_TYPE_STEEP_SLIDYGRASS = 17,
	GTA_SA_SURFACE_TYPE_STEEP_CLIFF = 18,
	GTA_SA_SURFACE_TYPE_FLOWERBED = 19,
	GTA_SA_SURFACE_TYPE_MEADOW = 20,
	GTA_SA_SURFACE_TYPE_WASTEGROUND = 21,
	GTA_SA_SURFACE_TYPE_WOODLANDGROUND = 22,
	GTA_SA_SURFACE_TYPE_VEGETATION = 23,
	GTA_SA_SURFACE_TYPE_MUD_WET = 24,
	GTA_SA_SURFACE_TYPE_MUD_DRY = 25,
	GTA_SA_SURFACE_TYPE_DIRT = 26,
	GTA_SA_SURFACE_TYPE_DIRTTRACK = 27,
	GTA_SA_SURFACE_TYPE_SAND_DEEP = 28,
	GTA_SA_SURFACE_TYPE_SAND_MEDIUM = 29,
	GTA_SA_SURFACE_TYPE_SAND_COMPACT = 30,
	GTA_SA_SURFACE_TYPE_SAND_ARID = 31,
	GTA_SA_SURFACE_TYPE_SAND_MORE = 32,
	GTA_SA_SURFACE_TYPE_SAND_BEACH = 33,
	GTA_SA_SURFACE_TYPE_CONCRETE_BEACH = 34,
	GTA_SA_SURFACE_TYPE_ROCK_DRY = 35,
	GTA_SA_SURFACE_TYPE_ROCK_WET = 36,
	GTA_SA_SURFACE_TYPE_ROCK_CLIFF = 37,
	GTA_SA_SURFACE_TYPE_WATER_RIVERBED = 38,
	GTA_SA_SURFACE_TYPE_WATER_SHALLOW = 39,
	GTA_SA_SURFACE_TYPE_CORNFIELD = 40,
	GTA_SA_SURFACE_TYPE_HEDGE = 41,
	GTA_SA_SURFACE_TYPE_WOOD_CRATES = 42,
	GTA_SA_SURFACE_TYPE_WOOD_SOLID = 43,
	GTA_SA_SURFACE_TYPE_WOOD_THIN = 44,
	GTA_SA_SURFACE_TYPE_GLASS = 45,
	GTA_SA_SURFACE_TYPE_GLASS_WINDOWS_LARGE = 46,
	GTA_SA_SURFACE_TYPE_GLASS_WINDOWS_SMALL = 47,
	GTA_SA_SURFACE_TYPE_EMPTY1 = 48,
	GTA_SA_SURFACE_TYPE_EMPTY2 = 49,
	GTA_SA_SURFACE_TYPE_GARAGE_DOOR = 50,
	GTA_SA_SURFACE_TYPE_THICK_METAL_PLATE = 51,
	GTA_SA_SURFACE_TYPE_SCAFFOLD_POLE = 52,
	GTA_SA_SURFACE_TYPE_LAMP_POST = 53,
	GTA_SA_SURFACE_TYPE_METAL_GATE = 54,
	GTA_SA_SURFACE_TYPE_METAL_CHAIN_FENCE = 55,
	GTA_SA_SURFACE_TYPE_GIRDER = 56,
	GTA_SA_SURFACE_TYPE_FIRE_HYDRANT = 57,
	GTA_SA_SURFACE_TYPE_CONTAINER = 58,
	GTA_SA_SURFACE_TYPE_NEWS_VENDOR = 59,
	GTA_SA_SURFACE_TYPE_WHEELBASE = 60,
	GTA_SA_SURFACE_TYPE_CARDBOARDBOX = 61,
	GTA_SA_SURFACE_TYPE_PED = 62,
	GTA_SA_SURFACE_TYPE_CAR = 63,
	GTA_SA_SURFACE_TYPE_CAR_PANEL = 64,
	GTA_SA_SURFACE_TYPE_CAR_MOVINGCOMPONENT = 65,
	GTA_SA_SURFACE_TYPE_TRANSPARENT_CLOTH = 66,
	GTA_SA_SURFACE_TYPE_RUBBER = 67,
	GTA_SA_SURFACE_TYPE_PLASTIC = 68,
	GTA_SA_SURFACE_TYPE_TRANSPARENT_STONE = 69,
	GTA_SA_SURFACE_TYPE_WOOD_BENCH = 70,
	GTA_SA_SURFACE_TYPE_CARPET = 71,
	GTA_SA_SURFACE_TYPE_FLOORBOARD = 72,
	GTA_SA_SURFACE_TYPE_STAIRSWOOD = 73,
	GTA_SA_SURFACE_TYPE_P_SAND = 74,
	GTA_SA_SURFACE_TYPE_P_SAND_DENSE = 75,
	GTA_SA_SURFACE_TYPE_P_SAND_ARID = 76,
	GTA_SA_SURFACE_TYPE_P_SAND_COMPACT = 77,
	GTA_SA_SURFACE_TYPE_P_SAND_ROCKY = 78,
	GTA_SA_SURFACE_TYPE_P_SANDBEACH = 79,
	GTA_SA_SURFACE_TYPE_P_GRASS_SHORT = 80,
	GTA_SA_SURFACE_TYPE_P_GRASS_MEADOW = 81,
	GTA_SA_SURFACE_TYPE_P_GRASS_DRY = 82,
	GTA_SA_SURFACE_TYPE_P_WOODLAND = 83,
	GTA_SA_SURFACE_TYPE_P_WOODDENSE = 84,
	GTA_SA_SURFACE_TYPE_P_ROADSIDE = 85,
	GTA_SA_SURFACE_TYPE_P_ROADSIDEDES = 86,
	GTA_SA_SURFACE_TYPE_P_FLOWERBED = 87,
	GTA_SA_SURFACE_TYPE_P_WASTEGROUND = 88,
	GTA_SA_SURFACE_TYPE_P_CONCRETE = 89,
	GTA_SA_SURFACE_TYPE_P_OFFICEDESK = 90,
	GTA_SA_SURFACE_TYPE_P_711SHELF1 = 91,
	GTA_SA_SURFACE_TYPE_P_711SHELF2 = 92,
	GTA_SA_SURFACE_TYPE_P_711SHELF3 = 93,
	GTA_SA_SURFACE_TYPE_P_RESTUARANTTABLE = 94,
	GTA_SA_SURFACE_TYPE_P_BARTABLE = 95,
	GTA_SA_SURFACE_TYPE_P_UNDERWATERLUSH = 96,
	GTA_SA_SURFACE_TYPE_P_UNDERWATERBARREN = 97,
	GTA_SA_SURFACE_TYPE_P_UNDERWATERCORAL = 98,
	GTA_SA_SURFACE_TYPE_P_UNDERWATERDEEP = 99,
	GTA_SA_SURFACE_TYPE_P_RIVERBED = 100,
	GTA_SA_SURFACE_TYPE_P_RUBBLE = 101,
	GTA_SA_SURFACE_TYPE_P_BEDROOMFLOOR = 102,
	GTA_SA_SURFACE_TYPE_P_KIRCHENFLOOR = 103,
	GTA_SA_SURFACE_TYPE_P_LIVINGRMFLOOR = 104,
	GTA_SA_SURFACE_TYPE_P_CORRIDORFLOOR = 105,
	GTA_SA_SURFACE_TYPE_P_711FLOOR = 106,
	GTA_SA_SURFACE_TYPE_P_FASTFOODFLOOR = 107,
	GTA_SA_SURFACE_TYPE_P_SKANKYFLOOR = 108,
	GTA_SA_SURFACE_TYPE_P_MOUNTAIN = 109,
	GTA_SA_SURFACE_TYPE_P_MARSH = 110,
	GTA_SA_SURFACE_TYPE_P_BUSHY = 111,
	GTA_SA_SURFACE_TYPE_P_BUSHYMIX = 112,
	GTA_SA_SURFACE_TYPE_P_BUSHYDRY = 113,
	GTA_SA_SURFACE_TYPE_P_BUSHYMID = 114,
	GTA_SA_SURFACE_TYPE_P_GRASSWEEFLOWERS = 115,
	GTA_SA_SURFACE_TYPE_P_GRASSDRYTALL = 116,
	GTA_SA_SURFACE_TYPE_P_GRASSLUSHTALL = 117,
	GTA_SA_SURFACE_TYPE_P_GRASSGRNMIX = 118,
	GTA_SA_SURFACE_TYPE_P_GRASSBRNMIX = 119,
	GTA_SA_SURFACE_TYPE_P_GRASSLOW = 120,
	GTA_SA_SURFACE_TYPE_P_GRASSROCKY = 121,
	GTA_SA_SURFACE_TYPE_P_GRASSSMALLTREES = 122,
	GTA_SA_SURFACE_TYPE_P_DIRTROCKY = 123,
	GTA_SA_SURFACE_TYPE_P_DIRTWEEDS = 124,
	GTA_SA_SURFACE_TYPE_P_GRASSWEEDS = 125,
	GTA_SA_SURFACE_TYPE_P_RIVEREDGE = 126,
	GTA_SA_SURFACE_TYPE_P_POOLSIDE = 127,
	GTA_SA_SURFACE_TYPE_P_FORESTSTUMPS = 128,
	GTA_SA_SURFACE_TYPE_P_FORESTSTICKS = 129,
	GTA_SA_SURFACE_TYPE_P_FORRESTLEAVES = 130,
	GTA_SA_SURFACE_TYPE_P_DESERTROCKS = 131,
	GTA_SA_SURFACE_TYPE_P_FORRESTDRY = 132,
	GTA_SA_SURFACE_TYPE_P_SPARSEFLOWERS = 133,
	GTA_SA_SURFACE_TYPE_P_BUILDINGSITE = 134,
	GTA_SA_SURFACE_TYPE_P_DOCKLANDS = 135,
	GTA_SA_SURFACE_TYPE_P_INDUSTRIAL = 136,
	GTA_SA_SURFACE_TYPE_P_INDUSTJETTY = 137,
	GTA_SA_SURFACE_TYPE_P_CONCRETELITTER = 138,
	GTA_SA_SURFACE_TYPE_P_ALLEYRUBISH = 139,
	GTA_SA_SURFACE_TYPE_P_JUNKYARDPILES = 140,
	GTA_SA_SURFACE_TYPE_P_JUNKYARDGRND = 141,
	GTA_SA_SURFACE_TYPE_P_DUMP = 142,
	GTA_SA_SURFACE_TYPE_P_CACTUSDENSE = 143,
	GTA_SA_SURFACE_TYPE_P_AIRPORTGRND = 144,
	GTA_SA_SURFACE_TYPE_P_CORNFIELD = 145,
	GTA_SA_SURFACE_TYPE_P_GRASSLIGHT = 146,
	GTA_SA_SURFACE_TYPE_P_GRASSLIGHTER = 147,
	GTA_SA_SURFACE_TYPE_P_GRASSLIGHTER2 = 148,
	GTA_SA_SURFACE_TYPE_P_GRASSMID1 = 149,
	GTA_SA_SURFACE_TYPE_P_GRASSMID2 = 150,
	GTA_SA_SURFACE_TYPE_P_GRASSDARK = 151,
	GTA_SA_SURFACE_TYPE_P_GRASSDARK2 = 152,
	GTA_SA_SURFACE_TYPE_P_GRASSDIRTMIX = 153,
	GTA_SA_SURFACE_TYPE_P_RIVERBEDSTONE = 154,
	GTA_SA_SURFACE_TYPE_P_RIVERBEDSHALLOW = 155,
	GTA_SA_SURFACE_TYPE_P_RIVERBEDWEEDS = 156,
	GTA_SA_SURFACE_TYPE_P_SEAWEED = 157,
	GTA_SA_SURFACE_TYPE_DOOR = 158,
	GTA_SA_SURFACE_TYPE_PLASTICBARRIER = 159,
	GTA_SA_SURFACE_TYPE_PARKGRASS = 160,
	GTA_SA_SURFACE_TYPE_STAIRSSTONE = 161,
	GTA_SA_SURFACE_TYPE_STAIRSMETAL = 162,
	GTA_SA_SURFACE_TYPE_STAIRSCARPET = 163,
	GTA_SA_SURFACE_TYPE_FLOORMETAL = 164,
	GTA_SA_SURFACE_TYPE_FLOORCONCRETE = 165,
	GTA_SA_SURFACE_TYPE_BIN_BAG = 166,
	GTA_SA_SURFACE_TYPE_THIN_METAL_SHEET = 167,
	GTA_SA_SURFACE_TYPE_METAL_BARREL = 168,
	GTA_SA_SURFACE_TYPE_PLASTIC_CONE = 169,
	GTA_SA_SURFACE_TYPE_PLASTIC_DUMPSTER = 170,
	GTA_SA_SURFACE_TYPE_METAL_DUMPSTER = 171,
	GTA_SA_SURFACE_TYPE_WOOD_PICKET_FENCE = 172,
	GTA_SA_SURFACE_TYPE_WOOD_SLATTED_FENCE = 173,
	GTA_SA_SURFACE_TYPE_WOOD_RANCH_FENCE = 174,
	GTA_SA_SURFACE_TYPE_UNBREAKABLE_GLASS = 175,
	GTA_SA_SURFACE_TYPE_HAY_BALE = 176,
	GTA_SA_SURFACE_TYPE_GORE = 177,
	GTA_SA_SURFACE_TYPE_RAILTRACK = 178,
	GTA_SA_SURFACE_TYPE_MAX = 179
};

// Object: Enum GTABase.EGTAColSurfaceType
enum class EGTAColSurfaceType : uint8_t
{
	GTA_SURFACE_TYPE_DEFAULT = 0,
	GTA_SURFACE_TYPE_TARMAC = 1,
	GTA_SURFACE_TYPE_GRASS = 2,
	GTA_SURFACE_TYPE_GRAVEL = 3,
	GTA_SURFACE_TYPE_MUD = 4,
	GTA_SURFACE_TYPE_PAVEMENT = 5,
	GTA_SURFACE_TYPE_CAR = 6,
	GTA_SURFACE_TYPE_GLASS = 7,
	GTA_SURFACE_TYPE_TRANSPARENT_CLOTH = 8,
	GTA_SURFACE_TYPE_GARAGE_DOOR = 9,
	GTA_SURFACE_TYPE_CAR_PANEL = 10,
	GTA_SURFACE_TYPE_THICK_METAL_PLATE = 11,
	GTA_SURFACE_TYPE_SCAFFOLD_POLE = 12,
	GTA_SURFACE_TYPE_LAMP_POST = 13,
	GTA_SURFACE_TYPE_FIRE_HYDRANT = 14,
	GTA_SURFACE_TYPE_GIRDER = 15,
	GTA_SURFACE_TYPE_METAL_CHAIN_FENCE = 16,
	GTA_SURFACE_TYPE_PED = 17,
	GTA_SURFACE_TYPE_SAND = 18,
	GTA_SURFACE_TYPE_SHALLOW_WATER = 19,
	GTA_SURFACE_TYPE_WOOD_CRATES = 20,
	GTA_SURFACE_TYPE_WOOD_BENCH = 21,
	GTA_SURFACE_TYPE_WOOD_SOLID = 22,
	GTA_SURFACE_TYPE_RUBBER = 23,
	GTA_SURFACE_TYPE_PLASTIC = 24,
	GTA_SURFACE_TYPE_VEGETATION = 25,
	GTA_SURFACE_TYPE_STEEPHILL = 26,
	GTA_SURFACE_TYPE_CONTAINER = 27,
	GTA_SURFACE_TYPE_NEWS_VENDOR = 28,
	GTA_SURFACE_TYPE_WHEELBASE = 29,
	GTA_SURFACE_TYPE_CARDBOARDBOX = 30,
	GTA_SURFACE_TYPE_TRANSPARENT_STONE = 31,
	GTA_SURFACE_TYPE_METAL_GATE = 32,
	GTA_SURFACE_TYPE_MAX = 33
};

// Object: Enum GTABase.EGTATransitionState
enum class EGTATransitionState : uint8_t
{
	GTRAN_INITIAL_FADE_IN = 0,
	GTRAN_FADED_IN = 1,
	GTRAN_FADE_IN_2 = 2,
	GTRAN_FADED_IN_2 = 3,
	GTRAN_FINAL_FADE_OUT = 4,
	GTRAN_FINAL_FADED_OUT = 5,
	GTRANS_MAX = 6,
	EGTATransitionState_MAX = 7
};

// Object: Enum GTABase.EGTASettingsCategory
enum class EGTASettingsCategory : uint8_t
{
	SC_Graphics = 0,
	SC_Controls = 1,
	SC_Gameplay = 2,
	SC_Audio = 3,
	SC_Language = 4,
	SC_MAX = 5
};

// Object: Enum GTABase.EGTAWeatherRegion
enum class EGTAWeatherRegion : uint8_t
{
	LA = 0,
	SF = 1,
	Vegas = 2,
	Country = 3,
	Desert = 4,
	Unused = 5,
	EGTAWeatherRegion_MAX = 6
};

// Object: Enum GTABase.EGTAWeather
enum class EGTAWeather : uint8_t
{
	ExtraSunny = 0,
	Sunny = 1,
	ExtraSunny_Smog = 2,
	Sunny_Smog = 3,
	Cloudy = 4,
	Rainy = 5,
	Foggy = 6,
	Sandstorm = 7,
	Underwater = 8,
	Misc1 = 9,
	Misc2 = 10,
	Riots = 11,
	EGTAWeather_MAX = 12
};

// Object: Enum GTABase.EGTASaveTabState
enum class EGTASaveTabState : uint8_t
{
	STS_None = 0,
	STS_Load = 1,
	STS_Save = 2,
	STS_NewGame = 3,
	STS_Delete = 4,
	STS_MAX = 5
};

// Object: Enum GTABase.EGTAGameType
enum class EGTAGameType : uint8_t
{
	GT_ALL = 0,
	GT_GTA3 = 1,
	GT_SA = 2,
	GT_VC = 3,
	GT_INV = 4,
	GT_MAX = 5
};

// Object: Enum GTABase.EGTAOptionItemStyle
enum class EGTAOptionItemStyle : uint8_t
{
	OISSelection = 0,
	OISBool = 1,
	OISSlider = 2,
	OISFunctionButton = 3,
	EGTAOptionItemStyle_MAX = 4
};

// Object: Enum GTABase.EGTAPlatforms
enum class EGTAPlatforms : uint8_t
{
	PLAT_ALL = 0,
	PLAT_PC = 1,
	PLAT_IOS = 2,
	PLAT_Android = 3,
	PLAT_PS4 = 4,
	PLAT_XB1 = 5,
	PLAT_Switch = 6,
	PLAT_PS5 = 7,
	PLAT_XSX = 8,
	PLAT_Inv = 9,
	PLAT_MAX = 10
};

// Object: Enum GTABase.EGTAInputType
enum class EGTAInputType : uint8_t
{
	InputType_Touch = 0,
	InputType_Keyboard = 1,
	InputType_Joystick = 2,
	InputType_MAX = 3
};

// Object: Enum GTABase.EVolumetricVizType
enum class EVolumetricVizType : uint8_t
{
	Viz_None = 0,
	Viz_SmallGrid_AO = 1,
	Viz_LargeGrid_AO = 2,
	Viz_BothGrids_AO = 3,
	Viz_SmallGrid_Uplighting = 4,
	Viz_LargeGrid_Uplighting = 5,
	Viz_BothGrids_Uplighting = 6,
	Viz_SkyOcclusion = 7,
	Viz_MAX = 8
};

// Object: Enum GTABase.EGTAGrassScaling
enum class EGTAGrassScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGTAGrassScaling_MAX = 3
};

// Object: Enum GTABase.EHUDType
enum class EHUDType : uint8_t
{
	eQuad = 0,
	eText = 1,
	EHUDType_MAX = 2
};

// Object: Enum GTABase.EHUDTextJustify
enum class EHUDTextJustify : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	EHUDTextJustify_MAX = 3
};

// Object: Enum GTABase.EGTAMiscLightType
enum class EGTAMiscLightType : uint8_t
{
	LT_AlwaysOn = 0,
	LT_StreetLight = 1,
	LT_DeepNight = 2,
	LT_NotDeepNight = 3,
	LT_Random = 4,
	LT_MAX = 5
};

// Object: Enum GTABase.ECheckpointType
enum class ECheckpointType : uint8_t
{
	ECT_CHECKPOINT_TUBE = 0,
	ECT_CHECKPOINT_ENDTUBE = 1,
	ECT_CHECKPOINT_EMPTYTUBE = 2,
	ECT_CHECKPOINT_TORUS = 3,
	ECT_CHECKPOINT_TORUS_NOFADE = 4,
	ECT_CHECKPOINT_TORUSROT = 5,
	ECT_CHECKPOINT_TORUSTHROUGH = 6,
	ECT_CHECKPOINT_TORUS_UPDOWN = 7,
	ECT_CHECKPOINT_TORUS_DOWN = 8,
	ECT_CHECKPOINT_NUM = 9,
	ECT_CHECKPOINT_MAX = 10
};

// Object: Enum GTABase.EGTAVizGame
enum class EGTAVizGame : uint8_t
{
	GTA_VIZ_3 = 0,
	GTA_VIZ_VC = 1,
	GTA_VIZ_SA = 2,
	GTA_VIZ_MAX = 3
};

// Object: Enum GTABase.EGTANodeType
enum class EGTANodeType : uint8_t
{
	CarNode = 0,
	PedNode = 1,
	RadarNode = 2,
	EGTANodeType_MAX = 3
};

// Object: Enum GTABase.ERadarMode
enum class ERadarMode : uint8_t
{
	RM_NORMAL = 0,
	RM_STOPATSTREET = 1,
	RM_DISABLESWITCHEDOFF = 2,
	RM_PAYNSPRAY = 4,
	RM_IGNORETRAFFICFLOW = 8,
	RM_ENABLEOUTSIDEMISSION = 16,
	RM_MAX = 17
};

// Object: Enum GTABase.ERadarState
enum class ERadarState : uint8_t
{
	RS_NORMAL = 0,
	RS_INTERIOR = 1,
	RS_MAX = 2
};

// Object: Enum GTABase.ERadarBlipAnimaStyle
enum class ERadarBlipAnimaStyle : uint8_t
{
	RAS_ForcePulse = 0,
	RAS_HeartBeat = 1,
	RAS_MAX = 2
};

// Object: Enum GTABase.EGTARadioStations
enum class EGTARadioStations : uint8_t
{
	GTA3_RADIO_HEAD = 0,
	GTA3_RADIO_CLASS = 1,
	GTA3_RADIO_JAH = 2,
	GTA3_RADIO_RISE = 3,
	GTA3_RADIO_LIPS = 4,
	GTA3_RADIO_GAME = 5,
	GTA3_RADIO_MSX = 6,
	GTA3_RADIO_FLASH = 7,
	GTA3_RADIO_CHAT = 8,
	GTA3_MAX_STATIONS = 9,
	GTAVC_RADIO_WILD = 10,
	GTAVC_RADIO_FLASH = 11,
	GTAVC_RADIO_KCHAT = 12,
	GTAVC_RADIO_FEVER = 13,
	GTAVC_RADIO_VROCK = 14,
	GTAVC_RADIO_VCPR = 15,
	GTAVC_RADIO_ESP = 16,
	GTAVC_RADIO_EMO = 17,
	GTAVC_RADIO_WAVE = 18,
	GTAVC_MAX_STATIONS = 19,
	GTASA_RADIO_PLAYBACKFM = 20,
	GTASA_RADIO_ROSEFM = 21,
	GTASA_RADIO_KDST = 22,
	GTASA_RADIO_BOUNCE = 23,
	GTASA_RADIO_SFUR = 24,
	GTASA_RADIO_LOSSANTOS = 25,
	GTASA_RADIO_RADIOX = 26,
	GTASA_RADIO_CSR = 27,
	GTASA_RADIO_KJAH = 28,
	GTASA_RADIO_MASTER = 29,
	GTASA_RADIO_WCTR = 30,
	GTASA_RADIO_ADVERTS = 31,
	EGTARadioStations_MAX = 32
};

// Object: Enum GTABase.EGTARadioGame
enum class EGTARadioGame : uint8_t
{
	GTA_RADIO_3 = 0,
	GTA_RADIO_VC = 1,
	GTA_RADIO_SA = 2,
	GTA_RADIO_MAX = 3
};

// Object: Enum GTABase.EGTAReverbPreset
enum class EGTAReverbPreset : uint8_t
{
	GTA_REVERB_GENERIC = 0,
	GTA_REVERB_PADDEDCELL = 1,
	GTA_REVERB_ROOM = 2,
	GTA_REVERB_BATHROOM = 3,
	GTA_REVERB_LIVINGROOM = 4,
	GTA_REVERB_STONEROOM = 5,
	GTA_REVERB_AUDITORIUM = 6,
	GTA_REVERB_CONCERTHALL = 7,
	GTA_REVERB_CAVE = 8,
	GTA_REVERB_ARENA = 9,
	GTA_REVERB_HANGAR = 10,
	GTA_REVERB_CARPETEDHALLWAY = 11,
	GTA_REVERB_HALLWAY = 12,
	GTA_REVERB_STONECORRIDOR = 13,
	GTA_REVERB_ALLEY = 14,
	GTA_REVERB_FOREST = 15,
	GTA_REVERB_CITY = 16,
	GTA_REVERB_MOUNTAINS = 17,
	GTA_REVERB_QUARRY = 18,
	GTA_REVERB_PLAIN = 19,
	GTA_REVERB_PARKINGLOT = 20,
	GTA_REVERB_SEWERPIPE = 21,
	GTA_REVERB_UNDERWATER = 22,
	GTA_REVERB_NOREVERB = 23,
	GTA_REVERB_MAX = 24
};

// Object: Enum GTABase.ETargetHighlightType
enum class ETargetHighlightType : uint8_t
{
	THT_Friendly = 0,
	THT_Aggro = 1,
	THT_Subtle = 2,
	THT_Num = 3,
	THT_MAX = 4
};

// Object: Enum GTABase.EButtonID
enum class EButtonID : uint8_t
{
	SteeringLeft = 0,
	SteeringRight = 1,
	MovementLeft = 2,
	MovementRight = 3,
	Confirm = 4,
	EButtonID_MAX = 5
};

// Object: Enum GTABase.GTAVehicleType
enum class EGTAVehicleType : uint8_t
{
	VT_UNSET = 0,
	VT_CAR = 1,
	VT_MONSTERTRUCK = 2,
	VT_QUADBIKE = 3,
	VT_HELI = 4,
	VT_PLANE = 5,
	VT_BOAT = 6,
	VT_TRAIN = 7,
	VT_FAKE_PLANE = 8,
	VT_BIKE = 9,
	VT_BMX = 10,
	VT_TRAILER = 11,
	VT_MAX = 12
};

// Object: Enum GTABase.FSpecialLightType
enum class EFSpecialLightType : uint8_t
{
	SLT_Dashlight = 0,
	SLT_Domelight = 1,
	SLT_SirenLeft = 2,
	SLT_SirenRight = 3,
	SLT_NUM = 4,
	SLT_MAX = 5
};

// Object: Enum GTABase.HIDMapping
enum class EHIDMapping : uint8_t
{
	HID_MAPPING_UNKNOWN = 0,
	HID_MAPPING_ATTACK = 1,
	HID_MAPPING_SPRINT = 2,
	HID_MAPPING_JUMP = 3,
	HID_MAPPING_CROUCH = 4,
	HID_MAPPING_ENTER_CAR = 5,
	HID_MAPPING_BRAKE = 6,
	HID_MAPPING_HANDBRAKE = 7,
	HID_MAPPING_ACCELERATE = 8,
	HID_MAPPING_CAMERA_CLOSER = 9,
	HID_MAPPING_CAMERA_FARTHER = 10,
	HID_MAPPING_HORN = 11,
	HID_MAPPING_RADIO_PREV_STATION = 12,
	HID_MAPPING_RADIO_NEXT_STATION = 13,
	HID_MAPPING_VITAL_STATS = 14,
	HID_MAPPING_NEXT_WEAPON = 15,
	HID_MAPPING_PREV_WEAPON = 16,
	HID_MAPPING_RADAR = 17,
	HID_MAPPING_PED_LOOK_BACK = 18,
	HID_MAPPING_VEHICLE_LOOK_LEFT = 19,
	HID_MAPPING_VEHICLE_LOOK_RIGHT = 20,
	HID_MAPPING_VEHICLE_LOOK_BACK = 21,
	HID_MAPPING_MISSION_START_AND_CANCEL = 22,
	HID_MAPPING_VIGILANTE_AND_MISC_VEHICLE = 23,
	HID_MAPPING_VEHICLE_STEER_X = 24,
	HID_MAPPING_VEHICLE_STEER_Y = 25,
	HID_MAPPING_VEHICLE_STEER_LEFT = 26,
	HID_MAPPING_VEHICLE_STEER_RIGHT = 27,
	HID_MAPPING_LOOK_X = 28,
	HID_MAPPING_LOOK_Y = 29,
	HID_MAPPING_PED_MOVE_X = 30,
	HID_MAPPING_PED_MOVE_Y = 31,
	HID_MAPPING_SWAP_WEAPONS_PURCHASE_AND_PHONE = 32,
	HID_MAPPING_WEAPON_ZOOM_IN = 33,
	HID_MAPPING_WEAPON_ZOOM_OUT = 34,
	HID_MAPPING_ENTER_AND_EXIT_TARGETING = 35,
	HID_MAPPING_VEHICLE_BOMB = 36,
	HID_MAPPING_TURRET_LEFT = 37,
	HID_MAPPING_TURRET_RIGHT = 38,
	HID_MAPPING_SKIP_CUTSCENE = 39,
	HID_MAPPING_GANG_RECRUIT_FOLLOW = 40,
	HID_MAPPING_GANG_IGNORE_HOLD_POSITION = 41,
	HID_MAPPING_RHYTHM_UP = 42,
	HID_MAPPING_RHYTHM_DOWN = 43,
	HID_MAPPING_RHYTHM_LEFT = 44,
	HID_MAPPING_RHYTHM_RIGHT = 45,
	HID_MAPPING_NITRO = 46,
	HID_MAPPING_CRANE_UP = 47,
	HID_MAPPING_CRANE_DOWN = 48,
	HID_MAPPING_ACCEPT = 49,
	HID_MAPPING_CANCEL = 50,
	HID_MAPPING_MENU_DOWN = 51,
	HID_MAPPING_MENU_UP = 52,
	HID_MAPPING_MENU_LEFT = 53,
	HID_MAPPING_MENU_RIGHT = 54,
	HID_MAPPING_MENU_ACCEPT = 55,
	HID_MAPPING_MENU_BACK = 56,
	HID_MAPPING_ARCADE_BUTTON = 57,
	HID_MAPPING_ARCADE_POWER_OFF = 58,
	HID_MAPPING_ARCADE_RESET = 59,
	HID_MAPPING_ARCADE_JOYSTICK = 60,
	HID_MAPPING_GYM_ACTION = 61,
	HID_MAPPING_GYM_EASIER_LEVEL = 62,
	HID_MAPPING_GYM_HARDER_LEVEL = 63,
	HID_MAPPING_BLACK_JACK_SPLIT = 64,
	HID_MAPPING_BLACK_JACK_DOUBLE = 65,
	HID_MAPPING_BLACK_JACK_HIT = 66,
	HID_MAPPING_BLACK_JACK_STAND = 67,
	HID_MAPPING_PLACE_BET = 68,
	HID_MAPPING_REMOVE_BET = 69,
	HID_MAPPING_NEXT_TARGET = 70,
	HID_MAPPING_PREV_TARGET = 71,
	HID_MAPPING_WAYPOINT_BLIP = 72,
	HID_MAPPING_HELICOPTER_MAGNET_UP = 73,
	HID_MAPPING_HELICOPTER_MAGNET_DOWN = 74,
	HID_MAPPING_LOCK_HYDRAULICS = 75,
	HID_MAPPING_FLIGHT_ASCEND = 76,
	HID_MAPPING_FLIGHT_DESCEND = 77,
	HID_MAPPING_FLIGHT_PRIMARY_ATTACK = 78,
	HID_MAPPING_FLIGHT_SECONDARY_ATTACK = 79,
	HID_MAPPING_FLIGHT_ALT_LEFT = 80,
	HID_MAPPING_FLIGHT_ALT_RIGHT = 81,
	HID_MAPPING_FLIGHT_ALT_UP = 82,
	HID_MAPPING_FLIGHT_ALT_DOWN = 83,
	HID_MAPPING_BUNNY_HOP = 84,
	HID_MAPPING_MAP_ZOOM_IN = 85,
	HID_MAPPING_MAP_ZOOM_OUT = 86,
	HID_MAPPING_TAKE_COVER_LEFT = 87,
	HID_MAPPING_TAKE_COVER_RIGHT = 88,
	HID_MAPPING_REPLAY = 89,
	HID_MAPPING_TOGGLE_CHEAT_MENU_ONE = 90,
	HID_MAPPING_TOGGLE_CHEAT_MENU_TWO = 91,
	HID_MAPPING_MENU_PREV_TAB = 92,
	HID_MAPPING_MENU_NEXT_TAB = 93,
	HID_MAPPING_VEHICLE_GUNS = 94,
	HID_MAPPING_RADAR_ZOOM_OUT = 95,
	HID_MAPPING_BMX_ACCELERATE = 96,
	HID_MAPPING_BMX_BRAKE = 97,
	HID_MAPPING_VEHICLE_BMX_LOOK_LEFT = 98,
	HID_MAPPING_VEHICLE_BMX_LOOK_RIGHT = 99,
	HID_MAPPING_BMX_HANDBRAKE = 100,
	HID_MAPPING_BMX_ATTACK = 101,
	HID_MAPPING_PLANE_RUDDER_LEFT = 102,
	HID_MAPPING_PLANE_RUDDER_RIGHT = 103,
	HID_MAPPING_MELEE_ATTACK = 104,
	HID_MAPPING_JETPACK_ASCEND = 105,
	HID_MAPPING_JETPACK_DESCEND = 106,
	HID_MAPPING_JETPACK_FIRE = 107,
	HID_MAPPING_WEAPON_WHEEL = 108,
	HID_MAPPING_PED_STEALTH = 109,
	HID_MAPPING_QUICK_SLOT_1 = 110,
	HID_MAPPING_QUICK_SLOT_2 = 111,
	HID_MAPPING_QUICK_SLOT_3 = 112,
	HID_MAPPING_RESET_HYDRAULICS = 113,
	HID_MAPPING_PREV_TARGET_WITH_STICK = 114,
	HID_MAPPING_NEXT_TARGET_WITH_STICK = 115,
	HID_MAPPING_MARKETING_TELEPORT = 116,
	HID_MAPPING_MARKETING_TOGGLE_ACCELERATION = 117,
	HID_MAPPING_MAP_ADD_WAYPOINT = 118,
	HID_MAPPING_MAP_REMOVE_WAYPOINT = 119,
	HID_MAPPING_MAP_KEY = 120,
	HID_MAPPING_FLIGHT_MOUSE_CONTROL = 121,
	HID_MAPPING_MENU_SHOWGANGS = 122,
	HID_MAPPING_MENU_CONFIRM_OPTION = 123,
	HID_MAPPING_WHEELIE = 124,
	HID_MAPPING_STOPPIE = 125,
	HID_MAPPING_MENU_UP_LEGEND = 126,
	HID_MAPPING_MENU_DOWN_LEGEND = 127,
	HID_MAPPING_GRAB_PACKAGE = 128,
	HID_MAPPING_MENU_ACCOUNTPICKER = 129,
	HID_MAPPING_CINEMATIC_CAM_NEXT = 130,
	HID_MAPPING_JETPACK_LEFT = 131,
	HID_MAPPING_JETPACK_RIGHT = 132,
	NUM_HID_MAPPINGS = 133,
	HIDMapping_MAX = 134
};

// Object: Enum GTABase.EGTAIMGGame
enum class EGTAIMGGame : uint8_t
{
	GTA_IMG_3 = 0,
	GTA_IMG_VC = 1,
	GTA_IMG_SA = 2,
	GTA_IMG_MAX = 3
};

// Object: Enum GTABase.WidgetPositionIDs
enum class EWidgetPositionIDs : uint8_t
{
	WIDGET_POSITION_ENTER_CAR = 0,
	WIDGET_POSITION_CAR_SHOOT = 1,
	WIDGET_POSITION_ACCELERATE = 2,
	WIDGET_POSITION_BUTTON_SPRINT_AND_SWIM = 3,
	WIDGET_POSITION_BRAKE = 4,
	WIDGET_POSITION_VEHICLE_STEER_LEFT = 5,
	WIDGET_POSITION_VEHICLE_STEER_RIGHT = 6,
	WIDGET_POSITION_HORN = 7,
	WIDGET_POSITION_HORN_ALT = 8,
	WIDGET_POSITION_PHONE = 9,
	WIDGET_POSITION_VEHICLE_SHOOT_LEFT = 10,
	WIDGET_POSITION_VEHICLE_SHOOT_RIGHT = 11,
	WIDGET_POSITION_HANDBRAKE_AND_AIR_SHOOT = 12,
	WIDGET_POSITION_CAM_TOGGLE = 13,
	WIDGET_POSITION_TARGETING_AND_ATTACK = 14,
	WIDGET_POSITION_VC_SHOOT = 15,
	WIDGET_POSITION_VC_SHOOT_ALT = 16,
	WIDGET_POSITION_PLACE_BET = 17,
	WIDGET_POSITION_REMOVE_BET = 18,
	WIDGET_POSITION_NEGATIVE = 19,
	WIDGET_POSITION_POSITIVE = 20,
	WIDGET_POSITION_POOL_ENGLISH = 21,
	WIDGET_POSITION_ARCADE_BUTTON = 22,
	WIDGET_POSITION_ARCADE_POWER_OFF = 23,
	WIDGET_POSITION_ARCADE_RESET = 24,
	WIDGET_POSITION_ARCADE_JOYSTICK = 25,
	WIDGET_POSITION_SKIP_CUTSCENE = 26,
	WIDGET_POSITION_RESUME_CUTSCENE = 27,
	WIDGET_POSITION_RACE_LEFT = 28,
	WIDGET_POSITION_RACE_RIGHT = 29,
	WIDGET_POSITION_STORE_ACCEPT = 30,
	WIDGET_POSITION_STORE_CANCEL = 31,
	WIDGET_POSITION_STORE_BUY = 32,
	WIDGET_POSITION_STEERING_SELECTION = 33,
	WIDGET_POSITION_TOUCH_LAYOUT_SELECTION = 34,
	WIDGET_POSITION_THUMB_CIRCLE = 35,
	WIDGET_POSITION_TAP_METER = 36,
	WIDGET_POSITION_TAP_METER_BUTTON = 37,
	WIDGET_POSITION_MISSION_START_AND_MISSION_CANCEL = 38,
	WIDGET_POSITION_MISSION_CANCEL_ALT = 39,
	WIDGET_POSITION_SCHOOL_EXIT = 40,
	WIDGET_POSITION_SCHOOL_LEFT = 41,
	WIDGET_POSITION_SCHOOL_RIGHT = 42,
	WIDGET_POSITION_SCHOOL_START = 43,
	WIDGET_POSITION_SCHOOL_CONTINUE = 44,
	WIDGET_POSITION_SCHOOL_TITLE_BACKGROUND = 45,
	WIDGET_POSITION_SCHOOL_AWARD = 46,
	WIDGET_POSITION_SCHOOL_RESULTS = 47,
	WIDGET_POSITION_SCHOOL_FRAME_ONE = 48,
	WIDGET_POSITION_SCHOOL_FRAME_TWO = 49,
	WIDGET_POSITION_SCHOOL_FRAME_THREE = 50,
	WIDGET_POSITION_SCHOOL_FRAME_FOUR = 51,
	WIDGET_POSITION_BASKETBALL_SHOOT = 52,
	WIDGET_POSITION_BASKETBALL_TRICK = 53,
	WIDGET_POSITION_GAMBLING_CONTINUE = 54,
	WIDGET_POSITION_BLACK_JACK_SPLIT = 55,
	WIDGET_POSITION_BLACK_JACK_DOUBLE = 56,
	WIDGET_POSITION_BLACK_JACK_HIT = 57,
	WIDGET_POSITION_BLACK_JACK_STAND = 58,
	WIDGET_POSITION_BLACK_JACK_REGION = 59,
	WIDGET_POSITION_BLACK_JACK_SLIDER = 60,
	WIDGET_POSITION_RHYTHM_UP = 61,
	WIDGET_POSITION_RHYTHM_DOWN = 62,
	WIDGET_POSITION_RHYTHM_LEFT = 63,
	WIDGET_POSITION_RHYTHM_RIGHT = 64,
	WIDGET_POSITION_RHYTHM_SELECT = 65,
	WIDGET_POSITION_RHYTHM_EXIT = 66,
	WIDGET_POSITION_PLAYER_SCORE = 67,
	WIDGET_POSITION_OPPOSITION_SCORE = 68,
	WIDGET_POSITION_GANG_REGION = 69,
	WIDGET_POSITION_COLOR_PICKER = 70,
	WIDGET_POSITION_WOF_FIRST_BET = 71,
	WIDGET_POSITION_WOF_SECOND_BET = 72,
	WIDGET_POSITION_WOF_THIRD_BET = 73,
	WIDGET_POSITION_WOF_FOURTH_BET = 74,
	WIDGET_POSITION_WOF_FIFTH_BET = 75,
	WIDGET_POSITION_WOF_SIXTH_BET = 76,
	WIDGET_POSITION_VIDEO_POKER_ADD_COIN = 77,
	WIDGET_POSITION_VIDEO_POKER_REMOVE_COIN = 78,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FIRST_CARD = 79,
	WIDGET_POSITION_VIDEO_POKER_HOLD_SECOND_CARD = 80,
	WIDGET_POSITION_VIDEO_POKER_HOLD_THIRD_CARD = 81,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FOURTH_CARD = 82,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FIFTH_CARD = 83,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FIRST_CARD_REGION = 84,
	WIDGET_POSITION_VIDEO_POKER_HOLD_SECOND_CARD_REGION = 85,
	WIDGET_POSITION_VIDEO_POKER_HOLD_THIRD_CARD_REGION = 86,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FOURTH_CARD_REGION = 87,
	WIDGET_POSITION_VIDEO_POKER_HOLD_FIFTH_CARD_REGION = 88,
	WIDGET_POSITION_VIDEO_POKER_EXIT = 89,
	WIDGET_POSITION_VIDEO_POKER_DEAL = 90,
	WIDGET_POSITION_ITB_FIRST_HORSE = 91,
	WIDGET_POSITION_ITB_SECOND_HORSE = 92,
	WIDGET_POSITION_ITB_THIRD_HORSE = 93,
	WIDGET_POSITION_ITB_FOURTH_HORSE = 94,
	WIDGET_POSITION_ITB_FIFTH_HORSE = 95,
	WIDGET_POSITION_ITB_FIRST_BET = 96,
	WIDGET_POSITION_ITB_SECOND_BET = 97,
	WIDGET_POSITION_ITB_THIRD_BET = 98,
	WIDGET_POSITION_ITB_FOURTH_BET = 99,
	WIDGET_POSITION_ITB_FIFTH_BET = 100,
	WIDGET_POSITION_ITB_SIXTH_BET = 101,
	WIDGET_POSITION_ITB_SEVENTH_BET = 102,
	WIDGET_POSITION_ITB_EIGHTH_BET = 103,
	WIDGET_POSITION_ITB_PLACE_BET = 104,
	WIDGET_POSITION_ITB_EXIT = 105,
	WIDGET_POSITION_MAP = 106,
	WIDGET_POSITION_HYDRAULICS = 107,
	WIDGET_POSITION_ADAPTED_DRIVE = 108,
	WIDGET_POSITION_PLAYER_INFO = 109,
	WIDGET_POSITION_RADAR = 110,
	WIDGET_POSITION_HELP_TEXT = 111,
	WIDGET_POSITION_HELP_TEXT_ALT_SHOPS = 112,
	WIDGET_POSITION_SWIPE_RADIO = 113,
	WIDGET_POSITION_PED_MOVE = 114,
	WIDGET_POSITION_VEHICLE_FLICK = 115,
	WIDGET_POSITION_LOOK = 116,
	WIDGET_POSITION_MISSION_TIMERS = 117,
	WIDGET_POSITION_RACING = 118,
	WIDGET_POSITION_RACE_RESULTS = 119,
	WIDGET_POSITION_HORSE_RESULTS = 120,
	WIDGET_POSITION_WAGER = 121,
	WIDGET_POSITION_POOL = 122,
	WIDGET_POSITION_POKER_PAYOUT = 123,
	WIDGET_POSITION_VITAL_STATS = 124,
	WIDGET_POSITION_MINIGAME_CANCEL = 125,
	WIDGET_POSITION_AIRPORT_LEFT = 126,
	WIDGET_POSITION_AIRPORT_RIGHT = 127,
	WIDGET_POSITION_TATTOO_PREVIEW = 128,
	WIDGET_POSITION_SAVE_NOTIFICATION = 129,
	WIDGET_POSITION_REPLAY = 130,
	WIDGET_POSITION_PAGER = 131,
	WIDGET_POSITION_ACCELERATE_BRAKE = 132,
	WIDGET_POSITION_CYCLE_LAYOUT = 133,
	WIDGET_POSITION_COMBINED_HANDBRAKE = 134,
	WIDGET_POSITION_STEERING_WHEEL = 135,
	WIDGET_POSITION_ACCELERATE_BRAKE_SLIDER = 136,
	WIDGET_POSITION_RESUME_TEXT = 137,
	WIDGET_POSITION_ROUND2_HANDBRAKE = 138,
	WIDGET_POSITION_ROUND2_RIGHT_HAND_ACCEL = 139,
	WIDGET_POSITION_SWIPE_DIRECTION = 140,
	WIDGET_POSITION_OPEN_WEAPON_WHEEL = 141,
	WIDGET_POSITION_OPEN_RADIO_WHEEL = 142,
	WIDGET_POSITION_HORN_REGION = 143,
	NUM_WIDGET_POSITIONS = 144,
	WidgetPositionIDs_MAX = 145
};

// Package: ProceduralMeshComponent
// Enums: 1

// Object: Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// Package: UMG
// Enums: 18

// Object: Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Object: Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5
};

// Object: Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Object: Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Object: Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	VerticalWrap = 3,
	Radial = 4,
	Overlay = 5,
	EDynamicBoxType_MAX = 6
};

// Object: Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Object: Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Object: Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Object: Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Object: Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5
};

// Object: Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Object: Enum UMG.ETickMode
enum class ETickMode : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Automatic = 2,
	ETickMode_MAX = 3
};

// Object: Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Object: Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Object: Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Object: Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Object: Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Object: Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// Package: OnlineSubsystem
// Enums: 2

// Object: Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Object: Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// Package: Text3D
// Enums: 4

// Object: Enum Text3D.EText3DBevelType
enum class EText3DBevelType : uint8_t
{
	Linear = 0,
	HalfCircle = 1,
	Convex = 2,
	Concave = 3,
	OneStep = 4,
	TwoSteps = 5,
	Engraved = 6,
	EText3DBevelType_MAX = 7
};

// Object: Enum Text3D.EText3DCharacterEffectOrder
enum class EText3DCharacterEffectOrder : uint8_t
{
	Normal = 0,
	FromCenter = 1,
	ToCenter = 2,
	Opposite = 3,
	EText3DCharacterEffectOrder_MAX = 4
};

// Object: Enum Text3D.EText3DHorizontalTextAlignment
enum class EText3DHorizontalTextAlignment : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	EText3DHorizontalTextAlignment_MAX = 3
};

// Object: Enum Text3D.EText3DVerticalTextAlignment
enum class EText3DVerticalTextAlignment : uint8_t
{
	FirstLine = 0,
	Top = 1,
	Center = 2,
	Bottom = 3,
	EText3DVerticalTextAlignment_MAX = 4
};

// Package: GooglePAD
// Enums: 4

// Object: Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	AssetPack_CONFIRM_UNKNOWN = 0,
	AssetPack_CONFIRM_PENDING = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
	AssetPack_STORAGE_FILES = 0,
	AssetPack_STORAGE_APK = 1,
	AssetPack_STORAGE_UNKNOWN = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX = 4
};

// Object: Enum GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
	AssetPack_UNKNOWN = 0,
	AssetPack_DOWNLOAD_PENDING = 1,
	AssetPack_DOWNLOADING = 2,
	AssetPack_TRANSFERRING = 3,
	AssetPack_DOWNLOAD_COMPLETED = 4,
	AssetPack_DOWNLOAD_FAILED = 5,
	AssetPack_DOWNLOAD_CANCELED = 6,
	AssetPack_WAITING_FOR_WIFI = 7,
	AssetPack_NOT_INSTALLED = 8,
	AssetPack_INFO_PENDING = 9,
	AssetPack_INFO_FAILED = 10,
	AssetPack_REMOVAL_PENDING = 11,
	AssetPack_REMOVAL_FAILED = 12,
	AssetPack_MAX = 13
};

// Object: Enum GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
	AssetPack_NO_ERROR = 0,
	AssetPack_APP_UNAVAILABLE = 1,
	AssetPack_UNAVAILABLE = 2,
	AssetPack_INVALID_REQUEST = 3,
	AssetPack_DOWNLOAD_NOT_FOUND = 4,
	AssetPack_API_NOT_AVAILABLE = 5,
	AssetPack_NETWORK_ERROR = 6,
	AssetPack_ACCESS_DENIED = 7,
	AssetPack_INSUFFICIENT_STORAGE = 8,
	AssetPack_PLAY_STORE_NOT_FOUND = 9,
	AssetPack_NETWORK_UNRESTRICTED = 10,
	AssetPack_INTERNAL_ERROR = 11,
	AssetPack_INITIALIZATION_NEEDED = 12,
	AssetPack_INITIALIZATION_FAILED = 13,
	AssetPack_MAX = 14
};

// Package: HairStrandsCore
// Enums: 15

// Object: Enum HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
	Procedural = 0,
	Imported = 1,
	EHairCardsSourceType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8_t
{
	CardsCount = 0,
	UseGuides = 1,
	EHairCardsGenerationType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8_t
{
	Low = 0,
	High = 1,
	EHairCardsClusterType_MAX = 2
};

// Object: Enum HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
	Strands = 0,
	Cards = 1,
	Meshes = 2,
	EGroomGeometryType_MAX = 3
};

// Object: Enum HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8_t
{
	Cpu = 0,
	Gpu = 1,
	EHairLODSelectionType_MAX = 2
};

// Object: Enum HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EHairInterpolationWeight_MAX = 4
};

// Object: Enum HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EHairInterpolationQuality_MAX = 4
};

// Object: Enum HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
	None = 0,
	RigidTransform = 2,
	OffsetTransform = 4,
	SmoothTransform = 8,
	EGroomInterpolationType_MAX = 9
};

// Object: Enum HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
	None = 0,
	Size2 = 2,
	Size4 = 4,
	Size8 = 8,
	Size16 = 16,
	Size32 = 32,
	EGroomStrandsSize_MAX = 33
};

// Object: Enum HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
	None = 0,
	CosseratRods = 2,
	AngularSprings = 4,
	CustomSolver = 8,
	EGroomNiagaraSolvers_MAX = 9
};

// Object: Enum HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	EFollicleMaskChannel_MAX = 4
};

// Object: Enum HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
	Static = 0,
	Skeletal = 1,
	EStrandsTexturesMeshType_MAX = 2
};

// Object: Enum HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
	TraceInside = 0,
	TraceOuside = 1,
	TraceBidirectional = 2,
	EStrandsTexturesTraceType_MAX = 3
};

// Object: Enum HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
	Parametric = 0,
	Root = 1,
	Index = 2,
	Unknown = 3,
	EGroomInterpolationWeight_MAX = 4
};

// Object: Enum HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	Unknown = 3,
	EGroomInterpolationQuality_MAX = 4
};

// Package: Niagara
// Enums: 61

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive = 0,
	Deactivate = 1,
	None = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive = 0,
	None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

// Object: Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

// Object: Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None = 0,
	SceneGeometry = 1,
	DepthBuffer = 2,
	DistanceField = 3,
	ENiagaraCollisionMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre = 0,
	FromFirst = 1,
	FromSecond = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	Particles = 0,
	Emitter = 1,
	ENiagaraRendererSourceDataMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource = 0,
	ExplicitParticles = 1,
	ExplicitEmitter = 2,
	ExplicitSystem = 3,
	ExplicitUser = 4,
	MaxBindingSource = 5,
	ENiagaraBindingSource_MAX = 6
};

// Object: Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles = 0,
	DataInterface = 1,
	ENiagaraIterationSource_MAX = 2
};

// Object: Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle = 0,
	Emitter = 1,
	System = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	System = 0,
	Emitter = 1,
	Particle = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3
};

// Object: Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	Spawn = 0,
	Update = 1,
	Event = 2,
	SimulationStage = 3,
	Default = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5
};

// Object: Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function = 0,
	Module = 1,
	DynamicInput = 2,
	ParticleSpawnScript = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript = 5,
	ParticleEventScript = 6,
	ParticleSimulationStageScript = 7,
	ParticleGPUComputeScript = 8,
	EmitterSpawnScript = 9,
	EmitterUpdateScript = 10,
	SystemSpawnScript = 11,
	SystemUpdateScript = 12,
	ENiagaraScriptUsage_MAX = 13
};

// Object: Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown = 0,
	NCS_Dirty = 1,
	NCS_Error = 2,
	NCS_UpToDate = 3,
	NCS_BeingCreated = 4,
	NCS_UpToDateWithWarnings = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX = 7
};

// Object: Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined = 0,
	Parameter = 1,
	Attribute = 2,
	SystemConstant = 3,
	TranslatorConstant = 4,
	RapidIterationParameter = 5,
	ENiagaraInputNodeUsage_MAX = 6
};

// Object: Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData = 0,
	Shared = 1,
	Event = 2,
	ENiagaraDataSetType_MAX = 3
};

// Object: Enum Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
	Percent = 0,
	Absolute = 1,
	ENiagaraStatDisplayMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
	Average = 0,
	Maximum = 1,
	ENiagaraStatEvaluationType_MAX = 2
};

// Object: Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime = 0,
	DesiredAge = 1,
	DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim = 0,
	GPUComputeSim = 1,
	ENiagaraSimTarget_MAX = 2
};

// Object: Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value = 0,
	Binding = 1,
	Custom = 2,
	ENiagaraDefaultMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
	Float = 0,
	HalfFloat = 1,
	UnsignedNormalizedByte = 2,
	Max = 3
};

// Object: Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs = 0,
	UseComponentTickGroup = 1,
	ForceTickFirst = 2,
	ForceTickLast = 3,
	ENiagaraTickBehavior_MAX = 4
};

// Object: Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	ENCPoolMethod_MAX = 5
};

// Object: Enum Niagara.ENDIExport_GPUAllocationMode
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	FixedSize = 0,
	PerParticle = 1,
	ENDIExport_MAX = 2
};

// Object: Enum Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
	Independent = 0,
	MaxAxis = 1,
	CellSize = 2,
	ESetResolutionMethod_MAX = 3
};

// Object: Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid = 0,
	None = 1,
	SkinOnTheFly = 2,
	PreSkin = 3,
	ENDISkeletalMesh_MAX = 4
};

// Object: Enum Niagara.ENDISkeletalMesh_SourceMode
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	ENDISkeletalMesh_MAX = 3
};

// Object: Enum Niagara.ENDIStaticMesh_SourceMode
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	Default = 0,
	Source = 1,
	AttachParent = 2,
	DefaultMeshOnly = 3,
	ENDIStaticMesh_MAX = 4
};

// Object: Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Continuous = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};

// Object: Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate = 0,
	DeactivateImmediate = 1,
	DeactivateResume = 2,
	DeactivateImmediateResume = 3,
	ENiagaraCullReaction_MAX = 4
};

// Object: Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate = 0,
	ManualEstimate = 1,
	EParticleAllocationMode_MAX = 2
};

// Object: Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle = 0,
	SpawnedParticles = 1,
	SingleParticle = 2,
	EScriptExecutionMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None = 0,
	ViewDepth = 1,
	ViewDistance = 2,
	CustomAscending = 3,
	CustomDecending = 4,
	ENiagaraSortMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};

// Object: Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	Mesh = 0,
	Simulation = 1,
	World = 2,
	Local = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4
};

// Object: Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default = 0,
	Velocity = 1,
	CameraPosition = 2,
	CameraPlane = 3,
	ENiagaraMeshFacingMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled = 0,
	Enabled = 1,
	Active = 2,
	Unknown = 3,
	ENiagaraPlatformSetState_MAX = 4
};

// Object: Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default = 0,
	Enabled = 1,
	Disabled = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};

// Object: Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never = 0,
	Individual = 1,
	All = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ScaledUniformly = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	SmoothTransition = 0,
	Locked = 1,
	ENiagaraRibbonUVEdgeMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic = 0,
	Custom = 1,
	Disabled = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack = 0,
	BackToFront = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale = 0,
	Clip = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};

// Object: Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen = 0,
	Custom = 1,
	CustomSideVector = 2,
	ENiagaraRibbonFacingMode_MAX = 3
};

// Object: Enum Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	Invalid = 0,
	Unexposed = 1,
	Library = 2,
	Hidden = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4
};

// Object: Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript = 0,
	AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

// Object: Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency = 0,
	PostDependency = 1,
	ENiagaraModuleDependencyType_MAX = 2
};

// Object: Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy = 0,
	Zero = 1,
	None = 2,
	MarkInvalid = 3,
	PassThrough = 4,
	EUnusedAttributeBehaviour_MAX = 5
};

// Object: Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera = 0,
	FaceCameraPlane = 1,
	CustomFacingVector = 2,
	FaceCameraPosition = 3,
	FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode_MAX = 5
};

// Object: Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned = 0,
	VelocityAligned = 1,
	CustomAlignment = 2,
	ENiagaraSpriteAlignment_MAX = 3
};

// Object: Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	Input = 0,
	Attributes = 1,
	Output = 2,
	Local = 3,
	User = 4,
	Engine = 5,
	Owner = 6,
	System = 7,
	Emitter = 8,
	Particles = 9,
	ScriptTransient = 10,
	StaticSwitch = 11,
	None = 12,
	Num = 13,
	ENiagaraParameterPanelCategory_MAX = 14
};

// Object: Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	Input = 0,
	Output = 1,
	Local = 2,
	InputOutput = 3,
	InitialValueInput = 4,
	None = 5,
	Num = 6,
	ENiagaraScriptParameterUsage_MAX = 7
};

// Object: Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	Input = 0,
	User = 1,
	Engine = 2,
	Owner = 3,
	System = 4,
	Emitter = 5,
	Particles = 6,
	ScriptPersistent = 7,
	ScriptTransient = 8,
	Local = 9,
	Custom = 10,
	DISPLAY_ONLY_StaticSwitch = 11,
	Output = 12,
	None = 13,
	Num = 14,
	ENiagaraParameterScope_MAX = 15
};

// Object: Enum Niagara.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ENiagaraOrientationAxis_MAX = 3
};

// Object: Enum Niagara.ENiagaraPythonUpdateScriptReference
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	None = 0,
	ScriptAsset = 1,
	DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3
};

// Object: Enum Niagara.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
	Simulation = 0,
	World = 1,
	Local = 2,
	ENiagaraCoordinateSpace_MAX = 3
};

// Object: Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active = 0,
	Inactive = 1,
	InactiveClear = 2,
	Complete = 3,
	Disabled = 4,
	Num = 5,
	ENiagaraExecutionState_MAX = 6
};

// Object: Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability = 0,
	Internal = 1,
	Owner = 2,
	InternalCompletion = 3,
	ENiagaraExecutionStateSource_MAX = 4
};

// Object: Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None = 0,
	Largest = 1,
	Smallest = 2,
	Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

// Object: Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None = 0,
	Object = 1,
	DataInterface = 2,
	Bytes = 3,
	ENiagaraVariantMode_MAX = 4
};

// Package: MovieScene
// Enums: 14

// Object: Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Object: Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	AdditiveFromBase = 8,
	EMovieSceneBlendType_MAX = 9
};

// Object: Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Object: Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Object: Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Object: Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
	None = 0,
	Volatile = 1,
	BlockingEvaluation = 2,
	InheritedFlags = 3,
	EMovieSceneSequenceFlags_MAX = 4
};

// Object: Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
};

// Object: Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Object: Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Object: Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Object: Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Object: Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
	Frame = 0,
	Time = 1,
	MarkedFrame = 2,
	EMovieScenePositionType_MAX = 3
};

// Object: Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Object: Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// Package: NiagaraShader
// Enums: 1

// Object: Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// Package: OnlineSubsystemUtils
// Enums: 7

// Object: Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	Invalid = 0,
	Failed = 1,
	Deferred = 2,
	Canceled = 3,
	Purchased = 4,
	Restored = 5,
	EInAppPurchaseStatus_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	NotOnSale = 0,
	Percentage = 1,
	DiscountAmount = 2,
	PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid = 0,
	Closed = 1,
	Pending = 2,
	Open = 3,
	EBeaconConnectionState_MAX = 4
};

// Object: Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ReservationRemoveMembers = 6,
	EClientRequestType_MAX = 7
};

// Object: Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	PartyLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX = 16
};

// Object: Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	NonePending = 0,
	ExistingSessionReservation = 1,
	ReservationUpdate = 2,
	EmptyServerReservation = 3,
	Reconnect = 4,
	Abandon = 5,
	ESpectatorClientRequestType_MAX = 6
};

// Object: Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	NoResult = 0,
	RequestPending = 1,
	GeneralError = 2,
	SpectatorLimitReached = 3,
	IncorrectPlayerCount = 4,
	RequestTimedOut = 5,
	ReservationDuplicate = 6,
	ReservationNotFound = 7,
	ReservationAccepted = 8,
	ReservationDenied = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned = 11,
	ReservationRequestCanceled = 12,
	ReservationInvalid = 13,
	BadSessionId = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};

// Package: AudioMixer
// Enums: 4

// Object: Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// Package: UdpMessaging
// Enums: 1

// Object: Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// Package: ActorSequence
// Enums: 1

// Object: Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// Package: AppleImageUtils
// Enums: 2

// Object: Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Object: Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	LeftMirrored = 4,
	RightMirrored = 5,
	DownMirrored = 6,
	UpMirrored = 7,
	ETextureRotationDirection_MAX = 8
};

// Package: AssetTags
// Enums: 1

// Object: Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3
};

// Package: EditableMesh
// Enums: 6

// Object: Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Object: Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Object: Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Object: Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Object: Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Object: Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// Package: LiveLinkInterface
// Enums: 2

// Object: Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	Perspective = 0,
	Orthographic = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};

// Object: Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Latest = 0,
	EngineTime = 1,
	Timecode = 2,
	ELiveLinkSourceMode_MAX = 3
};

// Package: OpenXRHandTracking
// Enums: 1

// Object: Enum OpenXRHandTracking.EQuatSwizzleAxisB
enum class EQuatSwizzleAxisB : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	W = 3,
	MinusX = 4,
	MinusY = 5,
	MinusZ = 6,
	MinusW = 7,
	EQuatSwizzleAxisB_MAX = 8
};

// Package: LiveLink
// Enums: 2

// Object: Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	XNeg = 3,
	YNeg = 4,
	ZNeg = 5,
	ELiveLinkAxis_MAX = 6
};

// Object: Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	Lerp = 0,
	Nearest = 1,
	Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};

// Package: TimeManagement
// Enums: 3

// Object: Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5
};

// Object: Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3
};

// Object: Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3
};

// Package: MovieSceneTracks
// Enums: 4

// Object: Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Object: Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Object: Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Object: Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// Package: InputCore
// Enums: 4

// Object: Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6,
	ETouchType_MAX = 7
};

// Object: Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3
};

// Object: Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12
};

// Object: Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	Special_1 = 6,
	Special_2 = 7,
	Special_3 = 8,
	Special_4 = 9,
	Special_5 = 10,
	Special_6 = 11,
	Special_7 = 12,
	Special_8 = 13,
	Special_9 = 14,
	Special_10 = 15,
	Special_11 = 16,
	ControllerHand_Count = 17,
	EControllerHand_MAX = 18
};

// Package: SlateCore
// Enums: 36

// Object: Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Object: Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Object: Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Object: Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Object: Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Object: Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Object: Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Object: Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Object: Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Object: Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Object: Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Object: Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Object: Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Object: Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Object: Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Object: Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Object: Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Object: Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Object: Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Object: Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Object: Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Object: Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Object: Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Object: Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Object: Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Object: Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Object: Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Object: Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Object: Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Object: Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Object: Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Object: Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Object: Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Package: Slate
// Enums: 19

// Object: Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Object: Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Object: Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Object: Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Object: Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	EMultiBlockType_MAX = 9
};

// Object: Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	EMultiBoxType_MAX = 6
};

// Object: Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5
};

// Object: Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Object: Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Object: Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3
};

// Object: Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	EDescendantScrollDestination_MAX = 3
};

// Object: Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Object: Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Object: Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Object: Enum Slate.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3
};

// Object: Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Object: Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Object: Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Object: Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// Package: ImageWriteQueue
// Enums: 1

// Object: Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// Package: MaterialShaderQualitySettings
// Enums: 1

// Object: Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4
};

// Package: EngineSettings
// Enums: 4

// Object: Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass = 0,
	IsChildOf = 1,
	ESubLevelStripMode_MAX = 2
};

// Object: Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid = 0,
	Vertical = 1,
	Horizontal = 2,
	EFourPlayerSplitScreenType_MAX = 3
};

// Object: Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop = 0,
	FavorBottom = 1,
	Vertical = 2,
	Horizontal = 3,
	EThreePlayerSplitScreenType_MAX = 4
};

// Object: Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	ETwoPlayerSplitScreenType_MAX = 2
};

// Package: PhysicsCore
// Enums: 10

// Object: Enum PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Object: Enum PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Object: Enum PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Object: Enum PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Object: Enum PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Object: Enum PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Object: Enum PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Object: Enum PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Object: Enum PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Object: Enum PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Package: MRMesh
// Enums: 1

// Object: Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3
};

// Package: AugmentedReality
// Enums: 42

// Object: Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown = 0,
	Tracking = 1,
	NotTracking = 2,
	StoppedTracking = 3,
	EARTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	None = 0,
	ShowGeoData = 1,
	EGeoAnchorComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
	None = 0,
	ShowSkeleton = 1,
	EPoseComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
	None = 0,
	ShowQRCode = 1,
	EQRCodeComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
	None = 0,
	ShowDetectedImage = 1,
	EImageComponentDebugMode_MAX = 2
};

// Object: Enum AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
	ComponentOnly = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked = 2,
	TrackingOnly = 3,
	EARFaceTransformMixing_MAX = 4
};

// Object: Enum AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
	None = 0,
	ShowEyeVectors = 1,
	ShowFaceMesh = 2,
	EFaceComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
	None = 0,
	ShowNetworkRole = 1,
	ShowClassification = 2,
	EPlaneComponentDebugMode_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
	None = 0,
	GenerateMeshData = 1,
	RenderMeshDataInWireframe = 2,
	GenerateCollisionForMeshData = 4,
	GenerateNavMeshForMeshData = 8,
	UseMeshDataForOcclusion = 16,
	EARSessionConfigFlags_MAX = 17
};

// Object: Enum AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
	Granted = 0,
	Denied = 1,
	EARServicePermissionRequestResult_MAX = 2
};

// Object: Enum AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
	Installed = 0,
	DeviceNotCompatible = 1,
	UserDeclinedInstallation = 2,
	FatalError = 3,
	EARServiceInstallRequestResult_MAX = 4
};

// Object: Enum AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
	UnknownError = 0,
	UnknownChecking = 1,
	UnknownTimedOut = 2,
	UnsupportedDeviceNotCapable = 3,
	SupportedNotInstalled = 4,
	SupportedVersionTooOld = 5,
	SupportedInstalled = 6,
	EARServiceAvailability_MAX = 7
};

// Object: Enum AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
	Undetermined = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EARGeoTrackingAccuracy_MAX = 4
};

// Object: Enum AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
	None = 0,
	NotAvailableAtLocation = 1,
	NeedLocationPermissions = 2,
	DevicePointedTooLow = 3,
	WorldTrackingUnstable = 4,
	WaitingForLocation = 5,
	GeoDataNotLoaded = 6,
	VisualLocalizationFailed = 7,
	WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason_MAX = 9
};

// Object: Enum AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
	Initializing = 0,
	Localized = 1,
	Localizing = 2,
	NotAvailable = 3,
	EARGeoTrackingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
	None = 0,
	MeshOnly = 1,
	MeshWithClassification = 2,
	EARSceneReconstruction_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None = 0,
	PoseDetection2D = 1,
	PersonSegmentation = 2,
	PersonSegmentationWithDepth = 3,
	SceneDepth = 4,
	SmoothedSceneDepth = 5,
	EARSessionTrackingFeature_MAX = 6
};

// Object: Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo = 0,
	CurvesOnly = 1,
	EARFaceTrackingUpdate_MAX = 2
};

// Object: Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None = 0,
	Manual = 1,
	Automatic = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};

// Object: Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage = 0,
	SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode_MAX = 2
};

// Object: Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None = 0,
	AmbientLightEstimate = 1,
	DirectionalLightEstimate = 2,
	EARLightEstimationMode_MAX = 3
};

// Object: Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None = 0,
	HorizontalPlaneDetection = 1,
	VerticalPlaneDetection = 2,
	EARPlaneDetectionMode_MAX = 3
};

// Object: Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None = 0,
	Orientation = 1,
	World = 2,
	Face = 3,
	Image = 4,
	ObjectScanning = 5,
	PoseTracking = 6,
	GeoTracking = 7,
	EARSessionType_MAX = 8
};

// Object: Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity = 0,
	GravityAndHeading = 1,
	Camera = 2,
	EARWorldAlignment_MAX = 3
};

// Object: Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown = 0,
	Approximate = 1,
	Accurate = 2,
	EARDepthAccuracy_MAX = 3
};

// Object: Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown = 0,
	Low = 1,
	High = 2,
	EARDepthQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	Unknown = 0,
	CameraImage = 1,
	CameraDepth = 2,
	EnvironmentCapture = 3,
	PersonSegmentationImage = 4,
	PersonSegmentationDepth = 5,
	SceneDepthMap = 6,
	SceneDepthConfidenceMap = 7,
	EARTextureType_MAX = 8
};

// Object: Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye = 0,
	RightEye = 1,
	EAREye_MAX = 2
};

// Object: Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft = 0,
	EyeLookDownLeft = 1,
	EyeLookInLeft = 2,
	EyeLookOutLeft = 3,
	EyeLookUpLeft = 4,
	EyeSquintLeft = 5,
	EyeWideLeft = 6,
	EyeBlinkRight = 7,
	EyeLookDownRight = 8,
	EyeLookInRight = 9,
	EyeLookOutRight = 10,
	EyeLookUpRight = 11,
	EyeSquintRight = 12,
	EyeWideRight = 13,
	JawForward = 14,
	JawLeft = 15,
	JawRight = 16,
	JawOpen = 17,
	MouthClose = 18,
	MouthFunnel = 19,
	MouthPucker = 20,
	MouthLeft = 21,
	MouthRight = 22,
	MouthSmileLeft = 23,
	MouthSmileRight = 24,
	MouthFrownLeft = 25,
	MouthFrownRight = 26,
	MouthDimpleLeft = 27,
	MouthDimpleRight = 28,
	MouthStretchLeft = 29,
	MouthStretchRight = 30,
	MouthRollLower = 31,
	MouthRollUpper = 32,
	MouthShrugLower = 33,
	MouthShrugUpper = 34,
	MouthPressLeft = 35,
	MouthPressRight = 36,
	MouthLowerDownLeft = 37,
	MouthLowerDownRight = 38,
	MouthUpperUpLeft = 39,
	MouthUpperUpRight = 40,
	BrowDownLeft = 41,
	BrowDownRight = 42,
	BrowInnerUp = 43,
	BrowOuterUpLeft = 44,
	BrowOuterUpRight = 45,
	CheekPuff = 46,
	CheekSquintLeft = 47,
	CheekSquintRight = 48,
	NoseSneerLeft = 49,
	NoseSneerRight = 50,
	TongueOut = 51,
	HeadYaw = 52,
	HeadPitch = 53,
	HeadRoll = 54,
	LeftEyeYaw = 55,
	LeftEyePitch = 56,
	LeftEyeRoll = 57,
	RightEyeYaw = 58,
	RightEyePitch = 59,
	RightEyeRoll = 60,
	MAX = 61
};

// Object: Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative = 0,
	FaceMirrored = 1,
	EARFaceTrackingDirection_MAX = 2
};

// Object: Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape = 0,
	Portrait = 1,
	EARCandidateImageOrientation_MAX = 2
};

// Object: Enum AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
	Precise = 0,
	Coarse = 1,
	UserDefined = 2,
	Unknown = 3,
	EARAltitudeSource_MAX = 4
};

// Object: Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	Model = 0,
	ParentJoint = 1,
	EARJointTransformSpace_MAX = 2
};

// Object: Enum AugmentedReality.EARSpatialMeshUsageFlags
enum class EARSpatialMeshUsageFlags : uint8_t
{
	NotApplicable = 0,
	Visible = 1,
	Collision = 2,
	EARSpatialMeshUsageFlags_MAX = 3
};

// Object: Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	NotApplicable = 0,
	Unknown = 1,
	Wall = 2,
	Ceiling = 3,
	Floor = 4,
	Table = 5,
	Seat = 6,
	Face = 7,
	Image = 8,
	World = 9,
	SceneObject = 10,
	HandMesh = 11,
	Door = 12,
	Window = 13,
	EARObjectClassification_MAX = 14
};

// Object: Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	Horizontal = 0,
	Vertical = 1,
	Diagonal = 2,
	EARPlaneOrientation_MAX = 3
};

// Object: Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable = 0,
	StillMappingNotRelocalizable = 1,
	StillMappingRelocalizable = 2,
	Mapped = 3,
	EARWorldMappingState_MAX = 4
};

// Object: Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted = 0,
	Running = 1,
	NotSupported = 2,
	FatalError = 3,
	PermissionNotGranted = 4,
	UnsupportedConfiguration = 5,
	Other = 6,
	EARSessionStatus_MAX = 7
};

// Object: Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	None = 0,
	Initializing = 1,
	Relocalizing = 2,
	ExcessiveMotion = 3,
	InsufficientFeatures = 4,
	InsufficientLight = 5,
	BadState = 6,
	EARTrackingQualityReason_MAX = 7
};

// Object: Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking = 0,
	OrientationOnly = 1,
	OrientationAndPosition = 2,
	EARTrackingQuality_MAX = 3
};

// Object: Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None = 0,
	FeaturePoint = 1,
	GroundPlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels_MAX = 9
};

// Object: Enum AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
	Camera = 0,
	QRCode = 1,
	SpatialMapping = 2,
	SceneUnderstanding = 3,
	HandMesh = 4,
	EARCaptureType_MAX = 5
};

// Package: HeadMountedDisplay
// Enums: 11

// Object: Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2
};

// Object: Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26
};

// Object: Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint16_t
{
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256
};

// Object: Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Object: Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 4,
	SupportsHandTracking = 8,
	EXRSystemFlags_MAX = 9
};

// Object: Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5
};

// Object: Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Object: Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3
};

// Object: Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Object: Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// Object: Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4
};

// Package: Foliage
// Enums: 5

// Object: Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5
};

// Object: Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5
};

// Object: Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5
};

// Object: Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4
};

// Object: Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3
};

// Package: Landscape
// Enums: 14

// Object: Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Object: Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Object: Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Object: Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Object: Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Object: Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Object: Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Object: Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Object: Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Object: Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Object: Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Object: Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Object: Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Package: AnimationCore
// Enums: 2

// Object: Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Object: Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// Package: AnimGraphRuntime
// Enums: 27

// Object: Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Object: Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Object: Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Object: Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Object: Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Object: Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Object: Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Object: Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Object: Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Object: Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Object: Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Object: Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Object: Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Object: Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Object: Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Object: Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Object: Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Object: Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// Package: CinematicCamera
// Enums: 1

// Object: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// Package: GameplayTags
// Enums: 5

// Object: Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined = 0,
	AnyTagsMatch = 1,
	AllTagsMatch = 2,
	NoTagsMatch = 3,
	AnyExprMatch = 4,
	AllExprMatch = 5,
	NoExprMatch = 6,
	EGameplayTagQueryExprType_MAX = 7
};

// Object: Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any = 0,
	All = 1,
	EGameplayContainerMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit = 0,
	IncludeParentTags = 1,
	EGameplayTagMatchType_MAX = 2
};

// Object: Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	None = 0,
	NonRestrictedOnly = 1,
	RestrictedOnly = 2,
	All = 3,
	EGameplayTagSelectionType_MAX = 4
};

// Object: Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native = 0,
	DefaultTagList = 1,
	TagList = 2,
	RestrictedTagList = 3,
	DataTable = 4,
	Invalid = 5,
	EGameplayTagSourceType_MAX = 6
};

// Package: MeshDescription
// Enums: 1

// Object: Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 4,
	EComputeNTBsOptions_MAX = 5
};

// Package: PropertyAccess
// Enums: 4

// Object: Enum PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Object: Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteByteToInt32 = 12,
	PromoteByteToInt64 = 13,
	PromoteByteToFloat = 14,
	PromoteInt32ToInt64 = 15,
	PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType_MAX = 17
};

// Object: Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Object: Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// Package: EyeTracker
// Enums: 1

// Object: Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// Package: MediaAssets
// Enums: 8

// Object: Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9
};

// Object: Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7
};

// Object: Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min_64 = 0,
	Small_256 = 1,
	Medium_512 = 2,
	Large_1024 = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};

// Object: Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3
};

// Object: Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original = 0,
	MTORI_CW90 = 1,
	MTORI_CW180 = 2,
	MTORI_CW270 = 3,
	MTORI_MAX = 4
};

// Object: Enum MediaAssets.MediaTextureOutputFormat
enum class EMediaTextureOutputFormat : uint8_t
{
	MTOF_Default = 0,
	MTOF_SRGB_LINOUT = 1,
	MTOF_MAX = 2
};

// Package: MovieSceneCapture
// Enums: 2

// Object: Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6
};

// Object: Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};

// Package: MoviePlayer
// Enums: 1

// Object: Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal = 0,
	MT_Looped = 1,
	MT_LoadingLoop = 2,
	MT_MAX = 3
};

// Package: ClothingSystemRuntimeCommon
// Enums: 2

// Object: Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Object: Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5
};

// Package: ClothingSystemRuntimeNv
// Enums: 1

// Object: Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2
};

// Package: AndroidRuntimeSettings
// Enums: 8

// Object: Enum AndroidRuntimeSettings.EAndroidGraphicsDebugger
enum class EAndroidGraphicsDebugger : uint8_t
{
	None = 0,
	Mali = 1,
	Adreno = 2,
	EAndroidGraphicsDebugger_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRCaps
enum class EGoogleVRCaps : uint8_t
{
	Cardboard = 0,
	Daydream33 = 1,
	Daydream63 = 2,
	Daydream66 = 3,
	EGoogleVRCaps_MAX = 4
};

// Object: Enum AndroidRuntimeSettings.EGoogleVRMode
enum class EGoogleVRMode : uint8_t
{
	Cardboard = 0,
	Daydream = 1,
	DaydreamAndCardboard = 2,
	EGoogleVRMode_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidAudio
enum class EAndroidAudio : uint8_t
{
	Default = 0,
	OGG = 1,
	ADPCM = 2,
	EAndroidAudio_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EOculusMobileDevice
enum class EOculusMobileDevice : uint8_t
{
	Quest = 1,
	Quest2 = 2,
	EOculusMobileDevice_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidInstallLocation
enum class EAndroidInstallLocation : uint8_t
{
	InternalOnly = 0,
	PreferExternal = 1,
	Auto = 2,
	EAndroidInstallLocation_MAX = 3
};

// Object: Enum AndroidRuntimeSettings.EAndroidDepthBufferPreference
enum class EAndroidDepthBufferPreference : uint8_t
{
	Default = 0,
	Bits16 = 16,
	Bits24 = 24,
	Bits32 = 32,
	EAndroidDepthBufferPreference_MAX = 33
};

// Object: Enum AndroidRuntimeSettings.EAndroidScreenOrientation
enum class EAndroidScreenOrientation : uint8_t
{
	Portrait = 0,
	ReversePortrait = 1,
	SensorPortrait = 2,
	Landscape = 3,
	ReverseLandscape = 4,
	SensorLandscape = 5,
	Sensor = 6,
	FullSensor = 7,
	EAndroidScreenOrientation_MAX = 8
};

// Package: InteractiveToolsFramework
// Enums: 14

// Object: Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100
};

// Object: Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint16_t
{
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025
};

// Object: Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
	None = 0,
	TranslateAxisX = 1,
	TranslateAxisY = 2,
	TranslateAxisZ = 3,
	TranslateAllAxes = 4,
	TranslatePlaneXY = 5,
	TranslatePlaneXZ = 6,
	TranslatePlaneYZ = 7,
	TranslateAllPlanes = 8,
	RotateAxisX = 9,
	RotateAxisY = 10,
	RotateAxisZ = 11,
	RotateAllAxes = 12,
	ScaleAxisX = 13,
	ScaleAxisY = 14,
	ScaleAxisZ = 15,
	ScaleAllAxes = 16,
	ScalePlaneYZ = 17,
	ScalePlaneXZ = 18,
	ScalePlaneXY = 19,
	ScaleAllPlanes = 20,
	ScaleUniform = 21,
	StandardTranslateRotate = 22,
	TranslateRotateUniformScale = 23,
	FullTranslateRotateScale = 24,
	ETransformGizmoSubElements_MAX = 25
};

// Object: Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	Left = 0,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3
};

// Object: Enum InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8_t
{
	None = 0,
	Hovered = 1,
	Focused = 2,
	EViewInteractionState_MAX = 3
};

// Object: Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4
};

// Object: Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5
};

// Object: Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2
};

// Object: Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	All = 7,
	ESceneSnapQueryTargetType_MAX = 8
};

// Object: Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	Position = 1,
	Rotation = 2,
	ESceneSnapQueryType_MAX = 3
};

// Package: AndroidDeviceProfileSelector
// Enums: 2

// Object: Enum AndroidDeviceProfileSelector.ECompareType
enum class ECompareType : uint8_t
{
	CMP_Equal = 0,
	CMP_Less = 1,
	CMP_LessEqual = 2,
	CMP_Greater = 3,
	CMP_GreaterEqual = 4,
	CMP_NotEqual = 5,
	CMP_Regex = 6,
	CMP_EqualIgnore = 7,
	CMP_LessIgnore = 8,
	CMP_LessEqualIgnore = 9,
	CMP_GreaterIgnore = 10,
	CMP_GreaterEqualIgnore = 11,
	CMP_NotEqualIgnore = 12,
	CMP_Hash = 13,
	CMP_MAX = 14
};

// Object: Enum AndroidDeviceProfileSelector.ESourceType
enum class ESourceType : uint8_t
{
	SRC_PreviousRegexMatch = 0,
	SRC_GpuFamily = 1,
	SRC_GlVersion = 2,
	SRC_AndroidVersion = 3,
	SRC_DeviceMake = 4,
	SRC_DeviceModel = 5,
	SRC_DeviceBuildNumber = 6,
	SRC_VulkanVersion = 7,
	SRC_UsingHoudini = 8,
	SRC_VulkanAvailable = 9,
	SRC_CommandLine = 10,
	SRC_Hardware = 11,
	SRC_Chipset = 12,
	SRC_MAX = 13
};

// Package: ChaosSolverEngine
// Enums: 1

// Object: Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6
};

// Package: GeometryCollectionEngine
// Enums: 6

// Object: Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Object: Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Object: Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Object: Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Object: Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// Package: Landmass
// Enums: 2

// Object: Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
	Angle = 0,
	Width = 1,
	EBrushFalloffMode_MAX = 2
};

// Object: Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
	AlphaBlend = 0,
	Min = 1,
	Max = 2,
	Additive = 3
};

// Package: ImageWrapper
// Enums: 2

// Object: Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
	BCST_BLCS_CALIBRATED_RGB = 0,
	BCST_LCS_sRGB = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE = 2,
	BCST_PROFILE_LINKED = 3,
	BCST_PROFILE_EMBEDDED = 4,
	BCST_MAX = 5
};

// Object: Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
	BHV_BITMAPINFOHEADER = 0,
	BHV_BITMAPV2INFOHEADER = 1,
	BHV_BITMAPV3INFOHEADER = 2,
	BHV_BITMAPV4HEADER = 3,
	BHV_BITMAPV5HEADER = 4,
	BHV_MAX = 5
};

// Package: Chaos
// Enums: 18

// Object: Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	EClusterUnionMethod_MAX = 5
};

// Object: Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX = 6
};

// Object: Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_PhysicsType_Max = 17
};

// Object: Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5
};

// Object: Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3
};

// Object: Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3
};

// Object: Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4
};

// Object: Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3
};

// Object: Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_Max = 8
};

// Object: Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 100,
	Chaos_Max = 101
};

// Object: Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5
};

// Object: Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Object: Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Object: Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

// Object: Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4
};

// Package: AudioPlatformConfiguration
// Enums: 1

// Object: Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	Max = 0,
	High = 1,
	Medium = 2,
	Low = 3,
	Min = 4,
	MatchDevice = 5
};

// Package: MediaUtils
// Enums: 1

// Object: Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	UseMediaPlayerSetting = 0,
	Enabled = 1,
	Disabled = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};

// Package: VectorVM
// Enums: 3

// Object: Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
	done = 0,
	add = 1,
	sub = 2,
	mul = 3,
	div = 4,
	mad = 5,
	lerp = 6,
	rcp = 7,
	rsq = 8,
	sqrt = 9,
	neg = 10,
	abs = 11,
	exp = 12,
	exp2 = 13,
	log = 14,
	log2 = 15,
	sin = 16,
	cos = 17,
	tan = 18,
	asin = 19,
	acos = 20,
	atan = 21,
	atan2 = 22,
	ceil = 23,
	floor = 24,
	fmod = 25,
	frac = 26,
	trunc = 27,
	clamp = 28,
	min = 29,
	max = 30,
	pow = 31,
	round = 32,
	sign = 33,
	step = 34,
	random = 35,
	noise = 36,
	cmplt = 37,
	cmple = 38,
	cmpgt = 39,
	cmpge = 40,
	cmpeq = 41,
	cmpneq = 42,
	select = 43,
	addi = 44,
	subi = 45,
	muli = 46,
	divi = 47,
	clampi = 48,
	mini = 49,
	maxi = 50,
	absi = 51,
	negi = 52,
	signi = 53,
	randomi = 54,
	cmplti = 55,
	cmplei = 56,
	cmpgti = 57,
	cmpgei = 58,
	cmpeqi = 59,
	cmpneqi = 60,
	bit_and = 61,
	bit_or = 62,
	bit_xor = 63,
	bit_not = 64,
	bit_lshift = 65,
	bit_rshift = 66,
	logic_and = 67,
	logic_or = 68,
	logic_xor = 69,
	logic_not = 70,
	f2i = 71,
	i2f = 72,
	f2b = 73,
	b2f = 74,
	i2b = 75,
	b2i = 76,
	inputdata_float = 77,
	inputdata_int32 = 78,
	inputdata_half = 79,
	inputdata_noadvance_float = 80,
	inputdata_noadvance_int32 = 81,
	inputdata_noadvance_half = 82,
	outputdata_float = 83,
	outputdata_int32 = 84,
	outputdata_half = 85,
	acquireindex = 86,
	external_func_call = 87,
	exec_index = 88,
	noise2D = 89,
	noise3D = 90,
	enter_stat_scope = 91,
	exit_stat_scope = 92,
	update_id = 93,
	acquire_id = 94,
	NumOpcodes = 95
};

// Object: Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	Register = 0,
	Constant = 1,
	Num = 2,
	EVectorVMOperandLocation_MAX = 3
};

// Object: Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	Float = 0,
	Int = 1,
	Bool = 2,
	Num = 3,
	EVectorVMBaseTypes_MAX = 4
};

// Package: ControllerButtonIDDefinitions
// Enums: 1

// Object: UserDefinedEnum ControllerButtonIDDefinitions.ControllerButtonIDDefinitions
enum class EControllerButtonIDDefinitions : uint8_t
{
	NewEnumerator0 = 0,
	NewEnumerator1 = 1,
	NewEnumerator2 = 2,
	NewEnumerator3 = 3,
	NewEnumerator4 = 4,
	NewEnumerator5 = 5,
	NewEnumerator6 = 6,
	NewEnumerator7 = 7,
	NewEnumerator8 = 8,
	NewEnumerator9 = 9,
	NewEnumerator10 = 10,
	NewEnumerator11 = 11,
	NewEnumerator12 = 12,
	NewEnumerator13 = 13,
	NewEnumerator14 = 14,
	NewEnumerator15 = 15,
	NewEnumerator16 = 16,
	NewEnumerator17 = 17,
	NewEnumerator18 = 18,
	NewEnumerator19 = 19,
	NewEnumerator20 = 20,
	NewEnumerator21 = 21,
	ControllerButtonIDDefinitions_MAX = 22
};

// Package: ButtonStateEnum
// Enums: 1

// Object: UserDefinedEnum ButtonStateEnum.ButtonStateEnum
enum class EButtonStateEnum : uint8_t
{
	NewEnumerator4 = 0,
	NewEnumerator0 = 1,
	NewEnumerator1 = 2,
	NewEnumerator2 = 3,
	NewEnumerator3 = 4,
	ButtonStateEnum_MAX = 5
};

