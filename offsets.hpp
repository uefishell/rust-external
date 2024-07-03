#pragma once
#define offset(name, value) const static std::uintptr_t m_##name = value

namespace Offsets
{
	namespace Vars
	{
		offset(ConVar_Graphics_c, 52503088);
		offset(ConVar_Admin_c, 52812312);
		offset(Baseplayer_c, 52265752);
		offset(Skinnable_c, 52373056);
		offset(ConVar_Client_c, 52332416);
		offset(ConVar_Console_c, 52347096);
		offset(MainCamera_c, 52683640);
		offset(BaseEntity_c, 52521152);// System_Collections_Generic_List_BaseGameMode__c*
		offset(BaseGameMode_c, 52262512);
		offset(LocalPlayer_c, 52672712);
		offset(FlashBangOverlay_c, 52471616);
		offset(TodSky_c, 52441472);
		offset(ConsoleSystem_c, 52348824);
		offset(LaserBeam_c, 52655280);
		offset(StorageContainer_c, 52421400);
		offset(OutlineManager_c, 52812168);
		offset(WaterSystem_c, 52546664);
		offset(Buttons_c, 52292712);
		offset(consoleSystem_index_c, 52668832);
		offset(effectNetwork_c, 52440536);
	}

	namespace Classes
	{
		namespace f__AnonymousType0
		{
			constexpr auto Identifieri__Field = 0x0; // <Identifier>j__TPar
			constexpr auto Namei__Field = 0x0; // <Name>j__TPar
			constexpr auto Statei__Field = 0x0; // <State>j__TPar
		}
		namespace ClothingBenchmarkScene
		{
			constexpr auto PlayerModelPrefab = 0x40; // GameObjectRef
			constexpr auto ChangeClothingEveryFrame = 0x48; // bool
			constexpr auto PlayerModels = 0x50; // List`1
			constexpr auto Wearables = 0x58; // ItemModWearable[]
		}
		namespace EffectsBenchmarkScene
		{
			constexpr auto effectPrefabs = 0x40; // GameObjectRef[]
			constexpr auto effectCountPerFrame = 0x48; // int32_t
			constexpr auto timeBetweenRuns = 0x4C; // float
			constexpr auto totalRuns = 0x50; // int32_t
			constexpr auto isFinished = 0x54; // bool
		}
		namespace FireworkBenchmarkScene
		{
			constexpr auto shellTypes = 0x40; // GameObjectRef[]
			constexpr auto fireworkCount = 0x48; // int32_t
		}
		namespace FoliageGridBenchmarkScene
		{
			constexpr auto terrainMeta = 0x0; // TerrainMeta
			constexpr auto foliagePrefab = 0x40; // GameObjectRef
			constexpr auto foliageInstance = 0x48; // GameObject
			constexpr auto lodPrefab = 0x50; // GameObjectRef
			constexpr auto lodInstance = 0x58; // GameObject
			constexpr auto batchingPrefab = 0x60; // GameObjectRef
			constexpr auto batchingInstance = 0x68; // GameObject
			constexpr auto terrain = 0x70; // Terrain
			constexpr auto viewpointA = 0x78; // Transform
			constexpr auto viewpointB = 0x80; // Transform
			constexpr auto moveVantangePoint = 0x88; // bool
		}
		namespace HitDetectionBenchmark
		{
			constexpr auto PlayerModelPrefab = 0x40; // GameObjectRef
			constexpr auto PlayerCollisionPrefab = 0x48; // GameObjectRef
			constexpr auto PlayerModels = 0x50; // List`1
			constexpr auto PlayerCollisions = 0x58; // List`1
			constexpr auto Wearables = 0x60; // ItemModWearable[]
		}
		namespace MonumentBenchmarkScene
		{
			constexpr auto monumentPrefabs = 0x40; // string[]
			constexpr auto vantagePoints = 0x48; // Transform[]
			constexpr auto isFinished = 0x50; // bool
		}
		namespace Benchmarking
		{
			constexpr auto IsBenchmarkingk__BackingField = 0x0; // bool
			constexpr auto BenchmarkScenes = 0x8; // string[]
		}
		namespace BenchmarkScene
		{
			constexpr auto BenchmarkTitle = 0x18; // string
			constexpr auto BenchmarkIdent = 0x20; // string
			constexpr auto MaxNumberOfFrames = 0x28; // int32_t
			constexpr auto MaxNumberOfSeconds = 0x2C; // int32_t
			constexpr auto FrameCount = 0x30; // int32_t
			constexpr auto TimeSinceStarted = 0x34; // TimeSince
			constexpr auto TimeSinceFrame = 0x38; // TimeSince
			constexpr auto FrameTimes = 0x3C; // float
			constexpr auto IsRunningInEditor = 0x0; // bool
		}
		namespace TerrainBenchmarkScene
		{
			constexpr auto terrain = 0x40; // Terrain
			constexpr auto terrainMeta = 0x48; // TerrainMeta
			constexpr auto viewpointA = 0x50; // Transform
			constexpr auto viewpointB = 0x58; // Transform
		}
		namespace TreeMarker
		{
			constexpr auto hitEffect = 0x168; // GameObjectRef
			constexpr auto hitEffectSound = 0x170; // SoundDefinition
			constexpr auto spawnEffect = 0x178; // GameObjectRef
			constexpr auto initialPosition = 0x180; // Vector3
			constexpr auto SpherecastOnInit = 0x18C; // bool
		}
		namespace PlayerIdleAnimationRandomiser
		{
			constexpr auto MaxValue = 0x18; // int32_t
			constexpr auto Param_Random = 0x0; // int32_t
			constexpr auto lastRandomisation = 0x1C; // TimeSince
		}
		namespace BaseFirework
		{
			constexpr auto fuseLength = 0x250; // float
			constexpr auto activityLength = 0x254; // float
			constexpr auto corpseDuration = 0x258; // float
			constexpr auto limitActiveCount = 0x25C; // bool
		}
		namespace FireworkShell
		{
			constexpr auto fuseLengthMin = 0x18; // float
			constexpr auto fuseLengthMax = 0x1C; // float
			constexpr auto speedMin = 0x20; // float
			constexpr auto speedMax = 0x24; // float
			constexpr auto explodePFX = 0x28; // ParticleSystem
			constexpr auto explodeSound = 0x30; // SoundPlayer
			constexpr auto inaccuracyDegrees = 0x38; // float
			constexpr auto explosionLight = 0x40; // LightEx
			constexpr auto lifetime = 0x48; // float
			constexpr auto speed = 0x4C; // float
			constexpr auto exploded = 0x50; // bool
		}
		namespace MortarFirework
		{
			constexpr auto shellTypes = 0x270; // GameObjectRef[]
			constexpr auto emissionPoint = 0x278; // Transform
		}
		namespace PatternFirework
		{
			constexpr auto FireworkDesignerDialog = 0x280; // GameObjectRef
			constexpr auto MaxStars = 0x288; // int32_t
			constexpr auto ShellFuseLengthShort = 0x28C; // float
			constexpr auto ShellFuseLengthMed = 0x290; // float
			constexpr auto ShellFuseLengthLong = 0x294; // float
			constexpr auto Design = 0x298; // Design
			constexpr auto ShellFuseLength = 0x2A0; // FuseLength
			constexpr auto __menuOption_MenuLongFuse = 0x2A8; // Option
			constexpr auto __menuOption_MenuMediumFuse = 0x310; // Option
			constexpr auto __menuOption_MenuOpenDesigner = 0x378; // Option
			constexpr auto __menuOption_MenuShortFuse = 0x3E0; // Option
		}
		namespace PatternFireworkShell
		{
			constexpr auto StarPrefab = 0x58; // GameObjectRef
			constexpr auto StarCurve = 0x60; // AnimationCurve
			constexpr auto Duration = 0x68; // float
			constexpr auto Scale = 0x6C; // float
			constexpr auto RandomSaturation = 0x70; // MinMax
			constexpr auto RandomValue = 0x78; // MinMax
			constexpr auto FuseLength = 0x80; // float
			constexpr auto _stars = 0x88; // List`1
			constexpr auto _timeSinceExploded = 0x90; // TimeSince
			constexpr auto _direction = 0x94; // Quaternion
			constexpr auto _completed = 0xA4; // bool
			constexpr auto _design = 0xA8; // Design
		}
		namespace PatternFireworkStar
		{
			constexpr auto Pixel = 0x18; // GameObject
			constexpr auto Explosion = 0x20; // GameObject
			constexpr auto ParticleSystems = 0x28; // ParticleSystem[]
		}
		namespace PFXRepeatingFirework
		{
			constexpr auto pfx = 0x270; // ParticleSystemContainer
		}
		namespace RepeatingFirework
		{
			constexpr auto timeBetweenRepeats = 0x260; // float
			constexpr auto maxRepeats = 0x264; // int32_t
			constexpr auto launchSound = 0x268; // SoundPlayer
		}
		namespace FogMachine
		{
			constexpr auto fogLength = 0x3B8; // float
			constexpr auto nozzleBlastDuration = 0x3BC; // float
			constexpr auto __menuOption_Menu_FogOff = 0x3C0; // Option
			constexpr auto __menuOption_Menu_MotionOff = 0x428; // Option
			constexpr auto __menuOption_Menu_MotionOn = 0x490; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x4F8; // Option
		}
		namespace StrobeLight
		{
			constexpr auto frequency = 0x2A8; // float
			constexpr auto lightMesh = 0x2B0; // MeshRenderer
			constexpr auto strobeLight = 0x2B8; // Light
			constexpr auto speedSlow = 0x2C0; // float
			constexpr auto speedMed = 0x2C4; // float
			constexpr auto speedFast = 0x2C8; // float
			constexpr auto burnRate = 0x2CC; // float
			constexpr auto lifeTimeSeconds = 0x2D0; // float
			constexpr auto forceoff = 0x0; // bool
			constexpr auto lastStrobeTime = 0x2D4; // float
			constexpr auto __menuOption_Menu_StrobeFast = 0x2D8; // Option
			constexpr auto __menuOption_Menu_StrobeMed = 0x340; // Option
			constexpr auto __menuOption_Menu_StrobeSlow = 0x3A8; // Option
			constexpr auto __menuOption_Menu_TurnOff = 0x410; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x478; // Option
		}
		namespace CoalingTower
		{
			constexpr auto materialPB = 0x0; // MaterialPropertyBlock
			constexpr auto emissionColorID = 0x8; // int32_t
			constexpr auto yellowLightOffColour = 0xC; // Color
			constexpr auto greenLightOffColour = 0x1C; // Color
			constexpr auto unloadingBounds = 0x2A8; // BoxCollider
			constexpr auto oreStoragePrefab = 0x2B0; // GameObjectRef
			constexpr auto fuelStoragePrefab = 0x2B8; // GameObjectRef
			constexpr auto signalLightsExterior = 0x2C0; // MeshRenderer[]
			constexpr auto signalLightsInterior = 0x2C8; // MeshRenderer[]
			constexpr auto greenLightOnColour = 0x2D0; // Color
			constexpr auto yellowLightOnColour = 0x2E0; // Color
			constexpr auto vacuumAnimator = 0x2F0; // Animator
			constexpr auto vacuumStartDelay = 0x2F8; // float
			constexpr auto unloadingFXContainerOre = 0x300; // ParticleSystemContainer
			constexpr auto unloadingFXMain = 0x308; // ParticleSystem[]
			constexpr auto unloadingFXDust = 0x310; // ParticleSystem[]
			constexpr auto unloadingFXContainerFuel = 0x318; // ParticleSystemContainer
			constexpr auto noTraincar = 0x320; // TokenisedPhrase
			constexpr auto noNextTraincar = 0x328; // TokenisedPhrase
			constexpr auto noPrevTraincar = 0x330; // TokenisedPhrase
			constexpr auto trainIsMoving = 0x338; // TokenisedPhrase
			constexpr auto outputIsFull = 0x340; // TokenisedPhrase
			constexpr auto trainHasThrottle = 0x348; // TokenisedPhrase
			constexpr auto buttonSoundPos = 0x350; // GameObject
			constexpr auto buttonPressSound = 0x358; // SoundDefinition
			constexpr auto buttonReleaseSound = 0x360; // SoundDefinition
			constexpr auto failedActionSound = 0x368; // SoundDefinition
			constexpr auto failedShuntAlarmSound = 0x370; // SoundDefinition
			constexpr auto armMovementLower = 0x378; // SoundDefinition
			constexpr auto armMovementRaise = 0x380; // SoundDefinition
			constexpr auto suctionAirStart = 0x388; // SoundDefinition
			constexpr auto suctionAirStop = 0x390; // SoundDefinition
			constexpr auto suctionAirLoop = 0x398; // SoundDefinition
			constexpr auto suctionOreStart = 0x3A0; // SoundDefinition
			constexpr auto suctionOreLoop = 0x3A8; // SoundDefinition
			constexpr auto suctionOreStop = 0x3B0; // SoundDefinition
			constexpr auto suctionOreInteriorLoop = 0x3B8; // SoundDefinition
			constexpr auto oreBinLoop = 0x3C0; // SoundDefinition
			constexpr auto suctionFluidStart = 0x3C8; // SoundDefinition
			constexpr auto suctionFluidLoop = 0x3D0; // SoundDefinition
			constexpr auto suctionFluidStop = 0x3D8; // SoundDefinition
			constexpr auto suctionFluidInteriorLoop = 0x3E0; // SoundDefinition
			constexpr auto fluidTankLoop = 0x3E8; // SoundDefinition
			constexpr auto interiorPipeSoundLocation = 0x3F0; // GameObject
			constexpr auto armMovementSoundLocation = 0x3F8; // GameObject
			constexpr auto armSuctionSoundLocation = 0x400; // GameObject
			constexpr auto oreBinSoundLocation = 0x408; // GameObject
			constexpr auto fluidTankSoundLocation = 0x410; // GameObject
			constexpr auto LootTypeIndex = 0x418; // NetworkedProperty`1
			constexpr auto activeTrainCarRef = 0x420; // EntityRef`1
			constexpr auto activeUnloadableRef = 0x430; // EntityRef`1
			constexpr auto oreStorageInstance = 0x440; // EntityRef`1
			constexpr auto fuelStorageInstance = 0x450; // EntityRef`1
			constexpr auto UnloadingPosk__BackingField = 0x460; // Vector3
			constexpr auto unloadersInWorld = 0x30; // List`1
			constexpr auto armMovementLoopSound = 0x470; // Sound
			constexpr auto suctionAirLoopSound = 0x478; // Sound
			constexpr auto suctionMaterialLoopSound = 0x480; // Sound
			constexpr auto interiorPipeLoopSound = 0x488; // Sound
			constexpr auto unloadDestinationSound = 0x490; // Sound
			constexpr auto __menuOption_Menu_BinFull = 0x498; // Option
			constexpr auto __menuOption_Menu_Next = 0x500; // Option
			constexpr auto __menuOption_Menu_Prev = 0x568; // Option
			constexpr auto __menuOption_Menu_Unavailable = 0x5D0; // Option
			constexpr auto __menuOption_Menu_Unload = 0x638; // Option
		}
		namespace OreHopper
		{
			constexpr auto oreOutputMesh = 0x420; // Transform
			constexpr auto visualPercentFull = 0x428; // float
			constexpr auto _oreScale = 0x42C; // Vector3
			constexpr auto orePlaneRenderers = 0x438; // MeshRenderer[]
			constexpr auto lastSetLootTypeIndex = 0x440; // Nullable`1
		}
		namespace WaterBaseNavGenTest
		{
			constexpr auto co = 0x18; // IEnumerator
		}
		namespace CargoMoveTest
		{
			constexpr auto targetNodeIndex = 0x18; // int32_t
			constexpr auto currentThrottle = 0x1C; // float
			constexpr auto turnScale = 0x20; // float
		}
		namespace CargoShip
		{
			constexpr auto targetNodeIndex = 0x168; // int32_t
			constexpr auto wakeParent = 0x170; // GameObject
			constexpr auto scientistTurretPrefab = 0x178; // GameObjectRef
			constexpr auto scientistSpawnPoints = 0x180; // Transform[]
			constexpr auto crateSpawns = 0x188; // List`1
			constexpr auto lockedCratePrefab = 0x190; // GameObjectRef
			constexpr auto militaryCratePrefab = 0x198; // GameObjectRef
			constexpr auto eliteCratePrefab = 0x1A0; // GameObjectRef
			constexpr auto junkCratePrefab = 0x1A8; // GameObjectRef
			constexpr auto waterLine = 0x1B0; // Transform
			constexpr auto rudder = 0x1B8; // Transform
			constexpr auto propeller = 0x1C0; // Transform
			constexpr auto escapeBoatPrefab = 0x1C8; // GameObjectRef
			constexpr auto escapeBoatPoint = 0x1D0; // Transform
			constexpr auto microphonePrefab = 0x1D8; // GameObjectRef
			constexpr auto microphonePoint = 0x1E0; // Transform
			constexpr auto speakerPrefab = 0x1E8; // GameObjectRef
			constexpr auto speakerPoints = 0x1F0; // Transform[]
			constexpr auto radiation = 0x1F8; // GameObject
			constexpr auto mapMarkerEntityPrefab = 0x200; // GameObjectRef
			constexpr auto hornOrigin = 0x208; // GameObject
			constexpr auto hornDef = 0x210; // SoundDefinition
			constexpr auto cargoShipSounds = 0x218; // CargoShipSounds
			constexpr auto layouts = 0x220; // GameObject[]
			constexpr auto playerTest = 0x228; // GameObjectRef
			constexpr auto layoutChoice = 0x230; // uint32_t
			constexpr auto timeSinceUpdatedSounds = 0x234; // TimeSince
		}
		namespace CargoShipInteriorSoundTrigger
		{
			constexpr auto cargoShipSounds = 0x18; // CargoShipSounds
		}
		namespace CargoShipSounds
		{
			constexpr auto waveSoundDef = 0x18; // SoundDefinition
			constexpr auto waveSoundYGainCurve = 0x20; // AnimationCurve
			constexpr auto waveSoundEdgeDistanceGainCurve = 0x28; // AnimationCurve
			constexpr auto waveSoundL = 0x30; // Sound
			constexpr auto waveSoundR = 0x38; // Sound
			constexpr auto waveSoundLGainMod = 0x40; // Modulator
			constexpr auto waveSoundRGainMod = 0x48; // Modulator
			constexpr auto sternWakeSoundDef = 0x50; // SoundDefinition
			constexpr auto sternWakeSound = 0x58; // Sound
			constexpr auto sternWakeSoundGainMod = 0x60; // Modulator
			constexpr auto engineHumSoundDef = 0x68; // SoundDefinition
			constexpr auto engineHumSound = 0x70; // Sound
			constexpr auto engineHumTarget = 0x78; // GameObject
			constexpr auto hugeRumbleSoundDef = 0x80; // SoundDefinition
			constexpr auto hugeRumbleYDiffCurve = 0x88; // AnimationCurve
			constexpr auto hugeRumbleRelativeSpeedCurve = 0x90; // AnimationCurve
			constexpr auto hugeRumbleSound = 0x98; // Sound
			constexpr auto hugeRumbleGainMod = 0xA0; // Modulator
			constexpr auto lastCameraPos = 0xA8; // Vector3
			constexpr auto lastRumblePos = 0xB4; // Vector3
			constexpr auto lastRumbleLocalPos = 0xC0; // Vector3
			constexpr auto soundFollowCollider = 0xD0; // Collider
			constexpr auto soundFollowColliderL = 0xD8; // Collider
			constexpr auto soundFollowColliderR = 0xE0; // Collider
			constexpr auto sternSoundFollowCollider = 0xE8; // Collider
			constexpr auto interiorSoundTriggers = 0xF0; // HashSet`1
		}
		namespace TriggerVehiclePush
		{
			constexpr auto thisEntity = 0x30; // BaseEntity
			constexpr auto maxPushVelocity = 0x38; // float
			constexpr auto minRadius = 0x3C; // float
			constexpr auto maxRadius = 0x40; // float
			constexpr auto snapToAxis = 0x44; // bool
			constexpr auto axisToSnapTo = 0x48; // Vector3
			constexpr auto allowParentRigidbody = 0x54; // bool
			constexpr auto useRigidbodyPosition = 0x55; // bool
			constexpr auto useCentreOfMass = 0x56; // bool
		}
		namespace MiniCopter
		{
			constexpr auto fuelStoragePrefab = 0x528; // GameObjectRef
			constexpr auto fuelPerSec = 0x530; // float
			constexpr auto fuelGaugeMax = 0x534; // float
			constexpr auto cachedFuelFraction = 0x538; // float
			constexpr auto waterSample = 0x540; // Transform
			constexpr auto leftWheel = 0x548; // WheelCollider
			constexpr auto rightWheel = 0x550; // WheelCollider
			constexpr auto frontWheel = 0x558; // WheelCollider
			constexpr auto leftWheelTrans = 0x560; // Transform
			constexpr auto rightWheelTrans = 0x568; // Transform
			constexpr auto frontWheelTrans = 0x570; // Transform
			constexpr auto cachedrotation_left = 0x578; // float
			constexpr auto cachedrotation_right = 0x57C; // float
			constexpr auto cachedrotation_front = 0x580; // float
			constexpr auto joystickPositionLeft = 0x588; // Transform
			constexpr auto joystickPositionRight = 0x590; // Transform
			constexpr auto leftFootPosition = 0x598; // Transform
			constexpr auto rightFootPosition = 0x5A0; // Transform
			constexpr auto bladeEngineCurve = 0x5A8; // AnimationCurve
			constexpr auto animator = 0x5B0; // Animator
			constexpr auto maxRotorSpeed = 0x5B8; // float
			constexpr auto timeUntilMaxRotorSpeed = 0x5BC; // float
			constexpr auto rotorBlurThreshold = 0x5C0; // float
			constexpr auto mainRotorBlur = 0x5C8; // Transform
			constexpr auto mainRotorBlades = 0x5D0; // Transform
			constexpr auto rearRotorBlades = 0x5D8; // Transform
			constexpr auto rearRotorBlur = 0x5E0; // Transform
			constexpr auto motorForceConstant = 0x5E8; // float
			constexpr auto brakeForceConstant = 0x5EC; // float
			constexpr auto preventBuildingObject = 0x5F0; // GameObject
			constexpr auto population = 0x0; // float
			constexpr auto outsidedecayminutes = 0x4; // float
			constexpr auto insidedecayminutes = 0x8; // float
			constexpr auto engineController = 0x5F8; // VehicleEngineController`1
			constexpr auto leftWheelVelocity = 0x600; // float
			constexpr auto rightWheelVelocity = 0x604; // float
			constexpr auto rotorSpeed = 0x608; // float
			constexpr auto mainRotorBlurRotation = 0x60C; // float
			constexpr auto mainRotorRotation = 0x610; // float
			constexpr auto rearRotorBlurRotation = 0x614; // float
			constexpr auto rearRotorRotation = 0x618; // float
			constexpr auto cachedPitch = 0x61C; // float
			constexpr auto cachedYaw = 0x620; // float
			constexpr auto cachedRoll = 0x624; // float
			constexpr auto fuelAnimationIndex = 0xC; // int32_t
			constexpr auto pitchAnimationIndex = 0x10; // int32_t
			constexpr auto rollAnimationIndex = 0x14; // int32_t
			constexpr auto yawAnimationIndex = 0x18; // int32_t
			constexpr auto fuelShakeIndex = 0x628; // int32_t
			constexpr auto __menuOption_Menu_FuelStorage = 0x630; // Option
		}
		namespace MiniCopterSounds
		{
			constexpr auto miniCopter = 0x18; // MiniCopter
			constexpr auto soundAttachPoint = 0x20; // GameObject
			constexpr auto engineStartDef = 0x28; // SoundDefinition
			constexpr auto engineLoopDef = 0x30; // SoundDefinition
			constexpr auto engineStopDef = 0x38; // SoundDefinition
			constexpr auto rotorLoopDef = 0x40; // SoundDefinition
			constexpr auto engineStartFadeOutTime = 0x48; // float
			constexpr auto engineLoopFadeInTime = 0x4C; // float
			constexpr auto engineLoopFadeOutTime = 0x50; // float
			constexpr auto engineStopFadeOutTime = 0x54; // float
			constexpr auto rotorLoopFadeInTime = 0x58; // float
			constexpr auto rotorLoopFadeOutTime = 0x5C; // float
			constexpr auto enginePitchInterpRate = 0x60; // float
			constexpr auto rotorPitchInterpRate = 0x64; // float
			constexpr auto rotorGainInterpRate = 0x68; // float
			constexpr auto rotorStartStopPitchRateUp = 0x6C; // float
			constexpr auto rotorStartStopPitchRateDown = 0x70; // float
			constexpr auto rotorStartStopGainRateUp = 0x74; // float
			constexpr auto rotorStartStopGainRateDown = 0x78; // float
			constexpr auto engineUpDotPitchCurve = 0x80; // AnimationCurve
			constexpr auto rotorUpDotPitchCurve = 0x88; // AnimationCurve
			constexpr auto rotorStartStopPitchMult = 0x90; // float
			constexpr auto rotorStartStopGainMult = 0x94; // float
			constexpr auto engineStart = 0x98; // Sound
			constexpr auto engineStop = 0xA0; // Sound
			constexpr auto engineLoop = 0xA8; // Sound
			constexpr auto engineGain = 0xB0; // Modulator
			constexpr auto enginePitch = 0xB8; // Modulator
			constexpr auto rotorLoop = 0xC0; // Sound
			constexpr auto rotorGain = 0xC8; // Modulator
			constexpr auto rotorPitch = 0xD0; // Modulator
			constexpr auto isOn = 0xD8; // bool
			constexpr auto wasOn = 0xD9; // bool
			constexpr auto isStartingUp = 0xDA; // bool
		}
		namespace ScrapTransportHelicopter
		{
			constexpr auto searchlightEye = 0x698; // Transform
			constexpr auto parentTriggerCollider = 0x6A0; // BoxCollider
			constexpr auto tailDamageLight = 0x6A8; // ParticleSystemContainer
			constexpr auto tailDamageHeavy = 0x6B0; // ParticleSystemContainer
			constexpr auto mainEngineDamageLight = 0x6B8; // ParticleSystemContainer
			constexpr auto mainEngineDamageHeavy = 0x6C0; // ParticleSystemContainer
			constexpr auto cockpitSparks = 0x6C8; // ParticleSystemContainer
			constexpr auto tailDamageLightEffects = 0x6D0; // Transform
			constexpr auto mainEngineDamageLightEffects = 0x6D8; // Transform
			constexpr auto damagedFireSoundDef = 0x6E0; // SoundDefinition
			constexpr auto damagedFireTailSoundDef = 0x6E8; // SoundDefinition
			constexpr auto damagedSparksSoundDef = 0x6F0; // SoundDefinition
			constexpr auto damagedFireSound = 0x6F8; // Sound
			constexpr auto damagedFireTailSound = 0x700; // Sound
			constexpr auto damagedSparksSound = 0x708; // Sound
			constexpr auto pilotRotorScale = 0x710; // float
			constexpr auto compassOffset = 0x714; // float
			constexpr auto population = 0x0; // float
			constexpr auto speedAnimationIndex = 0x4; // int32_t
			constexpr auto altitudeAnimationIndex = 0x8; // int32_t
			constexpr auto headingAnimationIndex = 0xC; // int32_t
			constexpr auto speedShakeIndex = 0x718; // int32_t
			constexpr auto altShakeIndex = 0x71C; // int32_t
			constexpr auto lastSpeed = 0x720; // float
			constexpr auto lastHealthFraction = 0x724; // float
		}
		namespace ScrapTransportHelicopterWheelEffects
		{
			constexpr auto wheelCollider = 0x18; // WheelCollider
			constexpr auto impactEffect = 0x20; // GameObjectRef
			constexpr auto minTimeBetweenEffects = 0x28; // float
			constexpr auto minDistBetweenEffects = 0x2C; // float
		}
		namespace sedanAnimation
		{
			constexpr auto frontAxles = 0x18; // Transform[]
			constexpr auto FL_shock = 0x20; // Transform
			constexpr auto FL_wheel = 0x28; // Transform
			constexpr auto FR_shock = 0x30; // Transform
			constexpr auto FR_wheel = 0x38; // Transform
			constexpr auto RL_shock = 0x40; // Transform
			constexpr auto RL_wheel = 0x48; // Transform
			constexpr auto RR_shock = 0x50; // Transform
			constexpr auto RR_wheel = 0x58; // Transform
			constexpr auto FL_wheelCollider = 0x60; // WheelCollider
			constexpr auto FR_wheelCollider = 0x68; // WheelCollider
			constexpr auto RL_wheelCollider = 0x70; // WheelCollider
			constexpr auto RR_wheelCollider = 0x78; // WheelCollider
			constexpr auto steeringWheel = 0x80; // Transform
			constexpr auto motorForceConstant = 0x88; // float
			constexpr auto brakeForceConstant = 0x8C; // float
			constexpr auto brakePedal = 0x90; // float
			constexpr auto gasPedal = 0x94; // float
			constexpr auto steering = 0x98; // float
			constexpr auto myRigidbody = 0xA0; // Rigidbody
			constexpr auto GasLerpTime = 0xA8; // float
			constexpr auto SteeringLerpTime = 0xAC; // float
			constexpr auto wheelSpinConstant = 0xB0; // float
			constexpr auto shockRestingPosY = 0xB4; // float
			constexpr auto shockDistance = 0xB8; // float
			constexpr auto traceDistanceNeutralPoint = 0xBC; // float
		}
		namespace SedanWheelSmoke
		{
			constexpr auto tireSmoke = 0x18; // ParticleSystem[]
			constexpr auto tireWaterSplash = 0x20; // ParticleSystem[]
			constexpr auto tireWaterSplash_Extra = 0x28; // ParticleSystem[]
			constexpr auto wheelTouching = 0x30; // bool[]
			constexpr auto activeTireEffect = 0x38; // ParticleSystem[]
			constexpr auto vecLastPosition = 0x40; // Vector3
			constexpr auto forwardSpeed = 0x4C; // float
			constexpr auto updateTime = 0x50; // float
		}
		namespace ConsoleGen
		{
			constexpr auto All = 0x0; // Command[]
		}
		namespace AdvancedChristmasLights
		{
			constexpr auto __menuOption_Menu_Lightmode_Chasing = 0x2A8; // Option
			constexpr auto __menuOption_Menu_Lightmode_Fade = 0x310; // Option
			constexpr auto __menuOption_Menu_Lightmode_Flashing = 0x378; // Option
			constexpr auto __menuOption_Menu_Lightmode_SlowGlow = 0x3E0; // Option
			constexpr auto __menuOption_Menu_Lightmode_SteadyOn = 0x448; // Option
			constexpr auto bulbPrefab = 0x4B0; // GameObjectRef
			constexpr auto lineRenderer = 0x4B8; // LineRenderer
			constexpr auto points = 0x4C0; // List`1
			constexpr auto bulbs = 0x4C8; // List`1
			constexpr auto bulbSpacing = 0x4D0; // float
			constexpr auto wireThickness = 0x4D4; // float
			constexpr auto wireEmission = 0x4D8; // Transform
			constexpr auto animationStyle = 0x4E0; // AnimationType
			constexpr auto _lod = 0x4E8; // RendererLOD
			constexpr auto lengthToPowerRatio = 0x4F0; // float
			constexpr auto finalized = 0x4F4; // bool
			constexpr auto lengthUsed = 0x4F8; // int32_t
			constexpr auto oldAnimationStyle = 0x4FC; // int32_t
			constexpr auto oldPointCount = 0x500; // int32_t
		}
		namespace AdventCalendar
		{
			constexpr auto __menuOption_Menu_OpenCalendar = 0x250; // Option
			constexpr auto startMonth = 0x2B8; // int32_t
			constexpr auto startDay = 0x2BC; // int32_t
			constexpr auto days = 0x2C0; // DayReward[]
			constexpr auto crosses = 0x2C8; // GameObject[]
			constexpr auto all = 0x0; // List`1
			constexpr auto playerRewardHistory = 0x8; // Dictionary`2
			constexpr auto CheckLater = 0x10; // Phrase
			constexpr auto EventOver = 0x18; // Phrase
			constexpr auto giftEffect = 0x2D0; // GameObjectRef
			constexpr auto boxCloseEffect = 0x2D8; // GameObjectRef
		}
		namespace AppIOEntity
		{
			constexpr auto __menuOption_Menu_Pair = 0x2A8; // Option
		}
		namespace AudioVisualisationEntity
		{
			constexpr auto __menuOption_ChangeLightSettings = 0x2A8; // Option
			constexpr auto connectedTo = 0x310; // EntityRef`1
			constexpr auto currentColourk__BackingField = 0x320; // LightColour
			constexpr auto currentVolumeSensitivityk__BackingField = 0x324; // VolumeSensitivity
			constexpr auto currentSpeedk__BackingField = 0x328; // Speed
			constexpr auto SettingsDialog = 0x330; // GameObjectRef
			constexpr auto currentGradientk__BackingField = 0x338; // int32_t
			constexpr auto currentSource = 0x340; // IAudioConnectionSource
			constexpr auto bands = 0x0; // float[]
			constexpr auto roughPeak = 0x348; // float
		}
		namespace AutoTurret
		{
			constexpr auto __menuOption_Menu_AssignToFriend = 0x3B8; // Option
			constexpr auto __menuOption_Menu_MaxAuth = 0x420; // Option
			constexpr auto __menuOption_Menu_SetID = 0x488; // Option
			constexpr auto __menuOption_MenuAuthorize = 0x4F0; // Option
			constexpr auto __menuOption_MenuClearList = 0x558; // Option
			constexpr auto __menuOption_MenuDeauthorize = 0x5C0; // Option
			constexpr auto __menuOption_MenuTurretAttackAll = 0x628; // Option
			constexpr auto __menuOption_MenuTurretPeacekeeper = 0x690; // Option
			constexpr auto __menuOption_MenuTurretRotate = 0x6F8; // Option
			constexpr auto gun_fire_effect = 0x760; // GameObjectRef
			constexpr auto bulletEffect = 0x768; // GameObjectRef
			constexpr auto bulletSpeed = 0x770; // float
			constexpr auto ambienceEmitter = 0x778; // AmbienceEmitter
			constexpr auto assignDialog = 0x780; // GameObject
			constexpr auto laserBeam = 0x788; // LaserBeam
			constexpr auto turnSoundModulator = 0x790; // Modulator
			constexpr auto turnLoop = 0x798; // Sound
			constexpr auto nextFocusSound = 0x7A0; // float
			constexpr auto wasTurning = 0x7A4; // bool
			constexpr auto lastYaw = 0x7A8; // Quaternion
			constexpr auto target = 0x7B8; // BaseCombatEntity
			constexpr auto eyePos = 0x7C0; // Transform
			constexpr auto muzzlePos = 0x7C8; // Transform
			constexpr auto aimDir = 0x7D0; // Vector3
			constexpr auto gun_yaw = 0x7E0; // Transform
			constexpr auto gun_pitch = 0x7E8; // Transform
			constexpr auto sightRange = 0x7F0; // float
			constexpr auto turnLoopDef = 0x7F8; // SoundDefinition
			constexpr auto movementChangeDef = 0x800; // SoundDefinition
			constexpr auto ambientLoopDef = 0x808; // SoundDefinition
			constexpr auto focusCameraDef = 0x810; // SoundDefinition
			constexpr auto focusSoundFreqMin = 0x818; // float
			constexpr auto focusSoundFreqMax = 0x81C; // float
			constexpr auto peacekeeperToggleSound = 0x820; // GameObjectRef
			constexpr auto onlineSound = 0x828; // GameObjectRef
			constexpr auto offlineSound = 0x830; // GameObjectRef
			constexpr auto targetAcquiredEffect = 0x838; // GameObjectRef
			constexpr auto targetLostEffect = 0x840; // GameObjectRef
			constexpr auto reloadEffect = 0x848; // GameObjectRef
			constexpr auto aimCone = 0x850; // float
			constexpr auto authorizedPlayers = 0x858; // List`1
			constexpr auto rcTurnSensitivity = 0x860; // float
			constexpr auto RCEyes = 0x868; // Transform
			constexpr auto IDPanelPrefab = 0x870; // GameObjectRef
			constexpr auto rcControls = 0x878; // RemoteControllableControls
			constexpr auto rcIdentifier = 0x880; // string
			constexpr auto timeSinceManualAim = 0x888; // RealTimeSince
			constexpr auto targetTrigger = 0x890; // TargetTrigger
			constexpr auto socketTransform = 0x898; // Transform
		}
		namespace BaseAnimalNPC
		{
			constexpr auto __menuOption_MenuDesignAI = 0x380; // Option
			constexpr auto deathStatName = 0x3E8; // string
			constexpr auto brain = 0x3F0; // AnimalBrain
		}
		namespace BaseArcadeMachine
		{
			constexpr auto __menuOption_Menu_Play = 0x400; // Option
			constexpr auto arcadeGamePrefab = 0x468; // BaseArcadeGame
			constexpr auto activeGame = 0x470; // BaseArcadeGame
			constexpr auto networkTrigger = 0x478; // ArcadeNetworkTrigger
			constexpr auto broadcastRadius = 0x480; // float
			constexpr auto gameScreen = 0x488; // Transform
			constexpr auto RTImage = 0x490; // RawImage
			constexpr auto leftJoystick = 0x498; // Transform
			constexpr auto rightJoystick = 0x4A0; // Transform
			constexpr auto musicPlayer = 0x4A8; // SoundPlayer
			constexpr auto scores = 0x4B0; // List`1
			constexpr auto arcadeWorldOffset = 0x4B8; // Vector3
			constexpr auto clientScreeenActive = 0x4C4; // bool
		}
		namespace BaseBoat
		{
			constexpr auto __menuOption_Menu_Push = 0x400; // Option
			constexpr auto engineThrust = 0x468; // float
			constexpr auto steeringScale = 0x46C; // float
			constexpr auto gasPedal = 0x470; // float
			constexpr auto steering = 0x474; // float
			constexpr auto thrustPoint = 0x478; // Transform
			constexpr auto centerOfMass = 0x480; // Transform
			constexpr auto buoyancy = 0x488; // Buoyancy
		}
		namespace BaseCardGameEntity
		{
			constexpr auto __menuOption_Menu_Open = 0x400; // Option
			constexpr auto uiPrefab = 0x468; // GameObjectRef
			constexpr auto scrapItemDef = 0x470; // ItemDefinition
			constexpr auto potPrefab = 0x478; // GameObjectRef
			constexpr auto playerStoragePoints = 0x480; // PlayerStorageInfo[]
			constexpr auto playerStoragePrefab = 0x488; // GameObjectRef
			constexpr auto _gameCont = 0x490; // CardGameController
			constexpr auto gameOption = 0x498; // CardGameOption
			constexpr auto recentlyLeftPlayerNamek__BackingField = 0x4A0; // string
			constexpr auto localClientUI = 0x0; // CardGameUI
			constexpr auto showWinningsTipFor = 0x4A8; // TimeSince
		}
		namespace BaseCombatEntity
		{
			constexpr auto __menuOption_Menu_Pickup = 0x168;
			constexpr auto skeletonProperties = 0x1d0;
			constexpr auto baseProtection = 0x1d8;
			constexpr auto startHealth = 0x1e0;
			constexpr auto pickup = 0x1e8;
			constexpr auto repair = 0x208;
			constexpr auto ShowHealthInfo = 0x230;
			constexpr auto lifestate = 0x234;
			constexpr auto sendsHitNotification = 0x238;
			constexpr auto sendsMeleeHitNotification = 0x239;
			constexpr auto markAttackerHostile = 0x23a;
			constexpr auto _health = 0x23c;
			constexpr auto _maxHealth = 0x240;
			constexpr auto faction = 0x244;
			constexpr auto deathTime = 0x248;
			constexpr auto lastNotifyFrame = 0x24c;
		}
		namespace BaseFishNPC
		{
			constexpr auto __menuOption_MenuDesignAI = 0x380; // Option
			constexpr auto brain = 0x3E8; // FishBrain
		}
		namespace BaseHelicopterVehicle
		{
			constexpr auto __menuOption_Menu_Push = 0x400; // Option
			constexpr auto engineThrustMax = 0x468; // float
			constexpr auto torqueScale = 0x46C; // Vector3
			constexpr auto com = 0x478; // Transform
			constexpr auto killTriggers = 0x480; // GameObject[]
			constexpr auto GroundPoints = 0x488; // Transform[]
			constexpr auto GroundEffects = 0x490; // Transform[]
			constexpr auto serverGibs = 0x498; // GameObjectRef
			constexpr auto explosionEffect = 0x4A0; // GameObjectRef
			constexpr auto fireBall = 0x4A8; // GameObjectRef
			constexpr auto impactEffectSmall = 0x4B0; // GameObjectRef
			constexpr auto impactEffectLarge = 0x4B8; // GameObjectRef
			constexpr auto flightEngineSoundDef = 0x4C0; // SoundDefinition
			constexpr auto flightThwopsSoundDef = 0x4C8; // SoundDefinition
			constexpr auto rotorGainModSmoothing = 0x4D0; // float
			constexpr auto engineGainMin = 0x4D4; // float
			constexpr auto engineGainMax = 0x4D8; // float
			constexpr auto thwopGainMin = 0x4DC; // float
			constexpr auto thwopGainMax = 0x4E0; // float
			constexpr auto currentThrottle = 0x4E4; // float
			constexpr auto avgThrust = 0x4E8; // float
			constexpr auto liftDotMax = 0x4EC; // float
			constexpr auto altForceDotMin = 0x4F0; // float
			constexpr auto liftFraction = 0x4F4; // float
			constexpr auto thrustLerpSpeed = 0x4F8; // float
			constexpr auto flightEngineSound = 0x500; // Sound
			constexpr auto flightThwopsSound = 0x508; // Sound
			constexpr auto flightEngineGainMod = 0x510; // Modulator
			constexpr auto flightThwopsGainMod = 0x518; // Modulator
			constexpr auto timeSinceUpdatedGroundEffects = 0x520; // TimeSince
		}
		namespace BaseLock
		{
			constexpr auto __menuOption_Menu_RemoveLock = 0x168; // Option
			constexpr auto itemType = 0x1D0; // ItemDefinition
		}
		namespace BaseModularVehicle
		{
			constexpr auto __menuOption_Menu_Push = 0x450; // Option
			constexpr auto clientInEditMode = 0x4B8; // bool
			constexpr auto baseVehicleLODs = 0x4C0; // LOD[]
			constexpr auto combinedLODs = 0x4C8; // LOD[]
			constexpr auto maxRendererIndex = 0x4D0; // int32_t[]
			constexpr auto moduleSockets = 0x4D8; // List`1
			constexpr auto centreOfMassTransform = 0x4E0; // Transform
			constexpr auto waterSample = 0x4E8; // Transform
			constexpr auto lodGroup = 0x4F0; // LODGroup
			constexpr auto keyEnterDialog = 0x4F8; // GameObjectRef
			constexpr auto AttachedModuleEntitiesk__BackingField = 0x500; // List`1
			constexpr auto _mass = 0x508; // float
			constexpr auto TotalMassk__BackingField = 0x50C; // float
			constexpr auto HasInitedk__BackingField = 0x510; // bool
			constexpr auto moduleAddActions = 0x518; // Dictionary`2
		}
		namespace BaseMountable
		{
			constexpr auto __menuOption_Menu_Mount = 0x250;
			constexpr auto eyePositionOverride = 0x2b8;
			constexpr auto eyeCenterOverride = 0x2c0;
			constexpr auto pitchClamp = 0x2c8;
			constexpr auto yawClamp = 0x2d0;
			constexpr auto canWieldItems = 0x2d8;
			constexpr auto relativeViewAngles = 0x2d9;
			constexpr auto mountAnchor = 0x2e0;
			constexpr auto mountLOSVertOffset = 0x2e8;
			constexpr auto mountPose = 0x2ec;
			constexpr auto maxMountDistance = 0x2f0;
			constexpr auto dismountPositions = 0x2f8;
			constexpr auto checkPlayerLosOnMount = 0x300;
			constexpr auto disableMeshCullingForPlayers = 0x301;
			constexpr auto allowHeadLook = 0x302;
			constexpr auto ignoreVehicleParent = 0x303;
			constexpr auto legacyDismount = 0x304;
			constexpr auto modifiesPlayerCollider = 0x305;
			constexpr auto customPlayerCollider = 0x308;
			constexpr auto mountSoundDef = 0x320;
			constexpr auto swapSoundDef = 0x328;
			constexpr auto dismountSoundDef = 0x330;
			constexpr auto mountTimeStatType = 0x338;
			constexpr auto allowedGestures = 0x33c;
			constexpr auto canDrinkWhileMounted = 0x340;
			constexpr auto allowSleeperMounting = 0x341;
			constexpr auto animateClothInLocalSpace = 0x342;
			constexpr auto MountedCameraMode = 0x344;
			constexpr auto isMobile = 0x348;
			constexpr auto SideLeanAmount = 0x34c;
		}
		namespace BaseOven
		{
			constexpr auto __menuOption_SwitchOff = 0x418; // Option
			constexpr auto __menuOption_SwitchOn = 0x480; // Option
			constexpr auto _materialOutputCache = 0x0; // Dictionary`2
			constexpr auto temperature = 0x4E8; // TemperatureType
			constexpr auto switchOnMenu = 0x4F0; // Option
			constexpr auto switchOffMenu = 0x510; // Option
			constexpr auto startupContents = 0x530; // ItemAmount[]
			constexpr auto allowByproductCreation = 0x538; // bool
			constexpr auto fuelType = 0x540; // ItemDefinition
			constexpr auto canModFire = 0x548; // bool
			constexpr auto disabledBySplash = 0x549; // bool
			constexpr auto smeltSpeed = 0x54C; // int32_t
			constexpr auto fuelSlots = 0x550; // int32_t
			constexpr auto inputSlots = 0x554; // int32_t
			constexpr auto outputSlots = 0x558; // int32_t
			constexpr auto IndustrialMode = 0x55C; // IndustrialSlotMode
			constexpr auto cookSpeedClient = 0x560; // float
		}
		namespace BasePet
		{
			constexpr auto __menuOption_MenuDesignAI = 0x888; // Option
			constexpr auto queuedMovementsAllowed = 0x0; // bool
			constexpr auto onlyQueueBaseNavMovements = 0x1; // bool
			constexpr auto movementupdatebudgetms = 0x4; // float
			constexpr auto BaseAttackRate = 0x8F0; // float
			constexpr auto BaseAttackDamge = 0x8F4; // float
			constexpr auto AttackDamageType = 0x8F8; // DamageType
			constexpr auto Braink__BackingField = 0x900; // PetBrain
			constexpr auto mapMarkerPrefab = 0x908; // GameObjectRef
			constexpr auto _mapMarkerInstance = 0x910; // BaseEntity
		}
		namespace BasePlayer
		{
			constexpr auto __menuOption_Climb = 0x250;
			constexpr auto __menuOption_Drink = 0x2b8;
			constexpr auto __menuOption_InviteToClan = 0x320;
			constexpr auto __menuOption_InviteToTeam = 0x388;
			constexpr auto __menuOption_Menu_AssistPlayer = 0x3f0;
			constexpr auto __menuOption_Menu_LootPlayer = 0x458;
			constexpr auto __menuOption_Promote = 0x4c0;
			constexpr auto __menuOption_SaltWater = 0x528;
			constexpr auto ClanInviteFailure = 0x8;
			constexpr auto ClanInviteFull = 0x10;
			constexpr auto clanId = 0x590;
			constexpr auto playerModel = 0x598;
			constexpr auto Frozen = 0x5a0;
			constexpr auto voiceRecorder = 0x5a8;
			constexpr auto voiceSpeaker = 0x5b0;
			constexpr auto input = 0x5b8;
			constexpr auto movement = 0x5c0;
			constexpr auto collision = 0x5c8;
			constexpr auto bagCount = 0x5d0;
			constexpr auto emptyState = 0x18;
			constexpr auto _lookingAt = 0x5d8;
			constexpr auto _lookingAtEntity = 0x5e0;
			constexpr auto _lookingAtCollider = 0x5e8;
			constexpr auto lookingAtPointk__BackingField = 0x5f0;
			constexpr auto wakeTime = 0x5fc;
			constexpr auto needsClothesRebuild = 0x600;
			constexpr auto wasSleeping = 0x601;
			constexpr auto wokeUpBefore = 0x602;
			constexpr auto wasDead = 0x603;
			constexpr auto lastClothesHash = 0x604;
			constexpr auto visiblePlayerList = 0x20;
			constexpr auto craftMode = 0x28;
			constexpr auto lootPanelOverride = 0x30;
			constexpr auto lastOpenSoundPlay = 0x608;
			constexpr auto currentViewMode = 0x60c;
			constexpr auto selectedViewMode = 0x610;
			constexpr auto lastRevivePoint = 0x614;
			constexpr auto lastReviveDirection = 0x620;
			constexpr auto IsWearingDiveGogglesk__BackingField = 0x62c;
			constexpr auto GestureViewModel = 0x630;
			constexpr auto currentClientRespawnInformation = 0x638;
			constexpr auto respawnOptionsTimestamp = 0x640;
			constexpr auto timeSinceUpdatedLookingAt = 0x644;
			constexpr auto nextTopologyTestTime = 0x648;
			constexpr auto usePressTime = 0x64c;
			constexpr auto useHeldTime = 0x650;
			constexpr auto lookingAtTest = 0x658;
			constexpr auto lastDeathTimeClient = 0x38;
			constexpr auto _localTransferProtectionExpires = 0x3c;
			constexpr auto cachedWaterDrinkingPoint = 0x660;
			constexpr auto hasRequestedServerEmoji = 0x66c;
			constexpr auto outstandingEmojiRequests = 0x670;
			constexpr auto timeGatedEmojiRequests = 0x678;
			constexpr auto gestureList = 0x680;
			constexpr auto gestureFinishedTime = 0x688;
			constexpr auto blockHeldInputTimer = 0x68c;
			constexpr auto currentGesture = 0x690;
			constexpr auto disabledHeldEntity = 0x698;
			constexpr auto nextGestureMenuOpenTime = 0x6a0;
			constexpr auto lastGestureCancel = 0x6a4;
			constexpr auto client_lastHelloTime = 0x6a8;
			constexpr auto currentTeam = 0x6b0;
			constexpr auto MaxTeamSizeToast = 0x40;
			constexpr auto clientTeam = 0x6b8;
			constexpr auto lastReceivedTeamTime = 0x6c0;
			constexpr auto lastPresenceTeamId = 0x6c8;
			constexpr auto lastPresenceTeamSize = 0x6d0;
			constexpr auto playerGroupKey = 0x6d8;
			constexpr auto playerGroupSizeKey = 0x6e0;
			constexpr auto clActiveItem = 0x6e8;
			constexpr auto MarkerLimitPhrase = 0x48;
			constexpr auto ClientCurrentMapNotes = 0x6f0;
			constexpr auto ClientCurrentDeathNote = 0x6f8;
			constexpr auto keepOpenMapInterface = 0x700;
			constexpr auto missions = 0x708;
			constexpr auto _activeMission = 0x710;
			constexpr auto modelState = 0x718;
			constexpr auto mounted = 0x720;
			constexpr auto nextSeatSwapTime = 0x730;
			constexpr auto PetEntity = 0x738;
			constexpr auto lastPetCommandIssuedTime = 0x740;
			constexpr auto PetPrefabID = 0x744;
			constexpr auto PetID = 0x748;
			constexpr auto PetWheelHasBeenOpened = 0x50;
			constexpr auto HostileTitle = 0x58;
			constexpr auto HostileDesc = 0x60;
			constexpr auto HostileMarker = 0x68;
			constexpr auto GoToTitle = 0x88;
			constexpr auto GoToDesc = 0x90;
			constexpr auto GoToMarker = 0x98;
			constexpr auto DollarTitle = 0xb8;
			constexpr auto DollarDesc = 0xc0;
			constexpr auto DollarMarker = 0xc8;
			constexpr auto LootTitle = 0xe8;
			constexpr auto LootDesc = 0xf0;
			constexpr auto LootMarker = 0xf8;
			constexpr auto NodeTitle = 0x118;
			constexpr auto NodeDesc = 0x120;
			constexpr auto NodeMarker = 0x128;
			constexpr auto GunTitle = 0x148;
			constexpr auto GunDesc = 0x150;
			constexpr auto GunMarker = 0x158;
			constexpr auto RadialPings = 0x178;
			constexpr auto ClientCurrentPings = 0x750;
			constexpr auto tapInProcess = 0x758;
			constexpr auto lastPingTap = 0x75c;
			constexpr auto cachedBuildingPrivilegeTime = 0x760;
			constexpr auto cachedBuildingPrivilege = 0x768;
			constexpr auto cachedVehicleBuildingBlockedTime = 0x770;
			constexpr auto cachedVehicleBuildingBlocked = 0x774;
			constexpr auto maxProjectileID = 0x778;
			constexpr auto lastUpdateTime = 0x77c;
			constexpr auto cachedThreatLevel = 0x780;
			constexpr auto serverTickRate = 0x784;
			constexpr auto clientTickRate = 0x788;
			constexpr auto serverTickInterval = 0x78c;
			constexpr auto clientTickInterval = 0x790;
			constexpr auto lastSentTickTime = 0x794;
			constexpr auto lastTickStopwatch = 0x798;
			constexpr auto lastSentTick = 0x7a0;
			constexpr auto nextVisThink = 0x7a8;
			constexpr auto lastTimeSeen = 0x7ac;
			constexpr auto debugPrevVisible = 0x7b0;
			constexpr auto fallDamageEffect = 0x7b8;
			constexpr auto drownEffect = 0x7c0;
			constexpr auto playerFlags = 0x7c8;
			constexpr auto eyes = 0x7d0;
			constexpr auto inventory = 0x7d8;
			constexpr auto blueprints = 0x7e0;
			constexpr auto metabolism = 0x7e8;
			constexpr auto modifiers = 0x7f0;
			constexpr auto playerCollider = 0x7f8;
			constexpr auto Belt = 0x800;
			constexpr auto playerRigidbody = 0x808;
			constexpr auto userID = 0x810;
			constexpr auto UserIDString = 0x818;
			constexpr auto gamemodeteam = 0x820;
			constexpr auto reputation = 0x824;
			constexpr auto _displayName = 0x828;
			constexpr auto _lastSetName = 0x830;
			constexpr auto playerColliderStanding = 0x838;
			constexpr auto playerColliderDucked = 0x84c;
			constexpr auto playerColliderCrawling = 0x860;
			constexpr auto playerColliderLyingDown = 0x874;
			constexpr auto cachedProtection = 0x888;
			constexpr auto oldCameraFix = 0x180;
			constexpr auto lastHeadshotSoundTime = 0x890;
			constexpr auto nextColliderRefreshTime = 0x894;
			constexpr auto clothingBlocksAiming = 0x898;
			constexpr auto clothingMoveSpeedReduction = 0x89c;
			constexpr auto clothingWaterSpeedBonus = 0x8a0;
			constexpr auto clothingAccuracyBonus = 0x8a4;
			constexpr auto equippingBlocked = 0x8a8;
			constexpr auto eggVision = 0x8ac;
			constexpr auto activeTelephone = 0x8b0;
			constexpr auto designingAIEntity = 0x8b8;
		}
		namespace BasePortal
		{
			constexpr auto __menuOption_Menu_UsePortal = 0x250; // Option
			constexpr auto isUsablePortal = 0x2B8; // bool
			constexpr auto destination_pos = 0x2BC; // Vector3
			constexpr auto destination_rot = 0x2C8; // Quaternion
			constexpr auto targetPortal = 0x2D8; // BasePortal
			constexpr auto targetID = 0x2E0; // NetworkableId
			constexpr auto localEntryExitPos = 0x2E8; // Transform
			constexpr auto relativeAnchor = 0x2F0; // Transform
			constexpr auto isMirrored = 0x2F8; // bool
			constexpr auto appearEffect = 0x300; // GameObjectRef
			constexpr auto disappearEffect = 0x308; // GameObjectRef
			constexpr auto transitionSoundEffect = 0x310; // GameObjectRef
			constexpr auto useTagString = 0x318; // string
		}
		namespace BaseRidableAnimal
		{
			constexpr auto __menuOption_Menu_Lead = 0x400; // Option
			constexpr auto __menuOption_Menu_Open = 0x468; // Option
			constexpr auto __menuOption_Menu_Ride = 0x4D0; // Option
			constexpr auto __menuOption_Menu_StopLead = 0x538; // Option
			constexpr auto __menuOption_Menu_TooHeavy = 0x5A0; // Option
			constexpr auto onlyAllowedItem = 0x608; // ItemDefinition
			constexpr auto allowedContents = 0x610; // ContentsType
			constexpr auto maxStackSize = 0x614; // int32_t
			constexpr auto numSlots = 0x618; // int32_t
			constexpr auto lootPanelName = 0x620; // string
			constexpr auto needsBuildingPrivilegeToUse = 0x628; // bool
			constexpr auto isLootable = 0x629; // bool
			constexpr auto inventory = 0x630; // ItemContainer
			constexpr auto SingleHorseTitle = 0x638; // Phrase
			constexpr auto SingleHorseDescription = 0x640; // Phrase
			constexpr auto DoubleHorseTitle = 0x648; // Phrase
			constexpr auto DoubleHorseDescription = 0x650; // Phrase
			constexpr auto lastMoveDirection = 0x658; // Vector3
			constexpr auto saddlePrefab = 0x668; // GameObjectRef
			constexpr auto saddleRef = 0x670; // EntityRef
			constexpr auto movementLOSOrigin = 0x680; // Transform
			constexpr auto sprintSounds = 0x688; // SoundPlayer
			constexpr auto largeWhinny = 0x690; // SoundPlayer
			constexpr auto PurchaseOptions = 0x698; // List`1
			constexpr auto purchaseToken = 0x6A0; // ItemDefinition
			constexpr auto eatEffect = 0x6A8; // GameObjectRef
			constexpr auto CorpsePrefab = 0x6B0; // GameObjectRef
			constexpr auto animalFront = 0x6B8; // Transform
			constexpr auto obstacleDetectionRadius = 0x6C0; // float
			constexpr auto maxWaterDepth = 0x6C4; // float
			constexpr auto roadSpeedBonus = 0x6C8; // float
			constexpr auto maxWallClimbSlope = 0x6CC; // float
			constexpr auto maxStepHeight = 0x6D0; // float
			constexpr auto maxStepDownHeight = 0x6D4; // float
			constexpr auto currentRunState = 0x6D8; // RunState
			constexpr auto walkSpeed = 0x6DC; // float
			constexpr auto trotSpeed = 0x6E0; // float
			constexpr auto runSpeed = 0x6E4; // float
			constexpr auto turnSpeed = 0x6E8; // float
			constexpr auto maxSpeed = 0x6EC; // float
			constexpr auto groundSampleOffsets = 0x6F0; // Transform[]
			constexpr auto staminaSeconds = 0x6F8; // float
			constexpr auto currentMaxStaminaSeconds = 0x6FC; // float
			constexpr auto maxStaminaSeconds = 0x700; // float
			constexpr auto staminaCoreLossRatio = 0x704; // float
			constexpr auto staminaCoreSpeedBonus = 0x708; // float
			constexpr auto staminaReplenishRatioMoving = 0x70C; // float
			constexpr auto staminaReplenishRatioStanding = 0x710; // float
			constexpr auto calorieToStaminaRatio = 0x714; // float
			constexpr auto hydrationToStaminaRatio = 0x718; // float
			constexpr auto maxStaminaCoreFromWater = 0x71C; // float
			constexpr auto debugMovement = 0x720; // bool
			constexpr auto normalOffsets = 0x728; // Vector3[]
			constexpr auto decayminutes = 0x0; // float
			constexpr auto currentSpeed = 0x730; // float
			constexpr auto desiredRotation = 0x734; // float
			constexpr auto animalPitchClamp = 0x738; // float
			constexpr auto animalRollClamp = 0x73C; // float
			constexpr auto lastBreathingRate = 0x740; // float
			constexpr auto hasItemTokenCache = 0x748; // bool[]
			constexpr auto nextTokenCheckTime = 0x750; // float
		}
		namespace BaseSubmarine
		{
			constexpr auto __menuOption_Menu_FuelStorage = 0x400; // Option
			constexpr auto __menuOption_Menu_ItemStorage = 0x468; // Option
			constexpr auto __menuOption_Menu_Push = 0x4D0; // Option
			constexpr auto __menuOption_Menu_TorpedoStorage = 0x538; // Option
			constexpr auto PropPercentVelocityk__BackingField = 0x5A0; // float
			constexpr auto runningClientTick = 0x5A4; // bool
			constexpr auto playedDiveBubbles = 0x5A5; // bool
			constexpr auto playedWindowFilm = 0x5A6; // bool
			constexpr auto baseAlphaInside = 0x5A8; // float
			constexpr auto baseAlphaOutside = 0x5AC; // float
			constexpr auto centreOfMassTransform = 0x5B0; // Transform
			constexpr auto buoyancy = 0x5B8; // Buoyancy
			constexpr auto maxRudderAngle = 0x5C0; // float
			constexpr auto rudderVisualTransform = 0x5C8; // Transform
			constexpr auto rudderDetailedColliderTransform = 0x5D0; // Transform
			constexpr auto propellerTransform = 0x5D8; // Transform
			constexpr auto timeUntilAutoSurface = 0x5E0; // float
			constexpr auto interiorRenderers = 0x5E8; // Renderer[]
			constexpr auto sonarObject = 0x5F0; // SonarObject
			constexpr auto parentTriggers = 0x5F8; // ParentTriggerInfo[]
			constexpr auto fuelStoragePrefab = 0x600; // GameObjectRef
			constexpr auto engineKW = 0x608; // float
			constexpr auto turnPower = 0x60C; // float
			constexpr auto engineStartupTime = 0x610; // float
			constexpr auto itemStoragePrefab = 0x618; // GameObjectRef
			constexpr auto depthChangeTargetSpeed = 0x620; // float
			constexpr auto idleFuelPerSec = 0x624; // float
			constexpr auto maxFuelPerSec = 0x628; // float
			constexpr auto internalAccessStorage = 0x62C; // bool
			constexpr auto torpedoStoragePrefab = 0x630; // GameObjectRef
			constexpr auto torpedoFiringPoint = 0x638; // Transform
			constexpr auto maxFireRate = 0x640; // float
			constexpr auto submarineAudio = 0x648; // SubmarineAudio
			constexpr auto fxTorpedoFire = 0x650; // ParticleSystem
			constexpr auto internalFXContainer = 0x658; // GameObject
			constexpr auto internalOnFXContainer = 0x660; // GameObject
			constexpr auto fxIntAmbientBubbleLoop = 0x668; // ParticleSystem
			constexpr auto fxIntInitialDiveBubbles = 0x670; // ParticleSystem
			constexpr auto fxIntWaterDropSpray = 0x678; // ParticleSystem
			constexpr auto fxIntWindowFilm = 0x680; // ParticleSystem
			constexpr auto fxIntMediumDamage = 0x688; // ParticleSystemContainer
			constexpr auto fxIntHeavyDamage = 0x690; // ParticleSystemContainer
			constexpr auto externalFXContainer = 0x698; // GameObject
			constexpr auto externalOnFXContainer = 0x6A0; // GameObject
			constexpr auto fxExtAmbientBubbleLoop = 0x6A8; // ParticleSystem
			constexpr auto fxExtInitialDiveBubbles = 0x6B0; // ParticleSystem
			constexpr auto fxExtAboveWaterEngineThrustForward = 0x6B8; // ParticleSystem
			constexpr auto fxExtAboveWaterEngineThrustReverse = 0x6C0; // ParticleSystem
			constexpr auto fxExtUnderWaterEngineThrustForward = 0x6C8; // ParticleSystem
			constexpr auto fxExtUnderWaterEngineThrustForwardSubs = 0x6D0; // ParticleSystem[]
			constexpr auto fxExtUnderWaterEngineThrustReverse = 0x6D8; // ParticleSystem
			constexpr auto fxExtUnderWaterEngineThrustReverseSubs = 0x6E0; // ParticleSystem[]
			constexpr auto fxExtBowWave = 0x6E8; // ParticleSystem
			constexpr auto fxExtWakeEffect = 0x6F0; // ParticleSystem
			constexpr auto aboveWatercollisionEffect = 0x6F8; // GameObjectRef
			constexpr auto underWatercollisionEffect = 0x700; // GameObjectRef
			constexpr auto spotlightVolumetrics = 0x708; // VolumetricLightBeam
			constexpr auto mountedAlphaInside = 0x710; // float
			constexpr auto mountedAlphaOutside = 0x714; // float
			constexpr auto outsidedecayminutes = 0x0; // float
			constexpr auto deepwaterdecayminutes = 0x4; // float
			constexpr auto oxygenminutes = 0x8; // float
			constexpr auto Velocityk__BackingField = 0x718; // Vector3
			constexpr auto _throttle = 0x724; // float
			constexpr auto _rudder = 0x728; // float
			constexpr auto _upDown = 0x72C; // float
			constexpr auto _oxygen = 0x730; // float
			constexpr auto engineController = 0x738; // VehicleEngineController`1
			constexpr auto cachedFuelAmount = 0x740; // float
			constexpr auto steerAngle = 0x744; // Vector3
			constexpr auto waterSurfaceY = 0x750; // float
			constexpr auto curSubDepthY = 0x754; // float
			constexpr auto torpedoStorageInstance = 0x758; // EntityRef`1
			constexpr auto itemStorageInstance = 0x768; // EntityRef`1
			constexpr auto waterLayerMask = 0x778; // int32_t
		}
		namespace BaseVehicle
		{
			constexpr auto __menuOption_Menu_Occupied = 0x350; // Option
			constexpr auto mountChaining = 0x3B8; // bool
			constexpr auto clippingChecks = 0x3BC; // ClippingCheckMode
			constexpr auto checkVehicleClipping = 0x3C0; // bool
			constexpr auto dismountStyle = 0x3C4; // DismountStyle
			constexpr auto shouldShowHudHealth = 0x3C8; // bool
			constexpr auto ignoreDamageFromOutside = 0x3C9; // bool
			constexpr auto rigidBody = 0x3D0; // Rigidbody
			constexpr auto mountPoints = 0x3D8; // List`1
			constexpr auto doClippingAndVisChecks = 0x3E0; // bool
			constexpr auto damageRenderer = 0x3E8; // DamageRenderer
			constexpr auto explosionForceMultiplier = 0x3F0; // float
			constexpr auto explosionForceMax = 0x3F4; // float
			constexpr auto childVehicles = 0x3F8; // List`1
		}
		namespace BaseVehicleModule
		{
			constexpr auto __menuOption_Menu_EnterKeycode = 0x400; // Option
			constexpr auto __menuOption_Menu_Push = 0x468; // Option
			constexpr auto __menuOption_Menu_Use = 0x4D0; // Option
			constexpr auto centreOfMassTransform = 0x538; // Transform
			constexpr auto mass = 0x540; // float
			constexpr auto visualGroup = 0x544; // VisualGroup
			constexpr auto lights = 0x548; // VehicleLight[]
			constexpr auto Vehiclek__BackingField = 0x550; // BaseModularVehicle
			constexpr auto FirstSocketIndexk__BackingField = 0x558; // int32_t
			constexpr auto lodRenderers = 0x560; // LODLevel[]
			constexpr auto conditionals = 0x568; // List`1
			constexpr auto triggerParents = 0x570; // TriggerParent[]
			constexpr auto slidingComponents = 0x578; // VehicleModuleSlidingComponent[]
			constexpr auto buttonComponents = 0x580; // VehicleModuleButtonComponent[]
			constexpr auto TimeSinceAddedToVehicle = 0x588; // TimeSince
			constexpr auto prevRefreshHealth = 0x58C; // float
			constexpr auto prevRefreshVehicleIsDead = 0x590; // bool
			constexpr auto prevRefreshVehicleIsLockable = 0x591; // bool
		}
		namespace BearTrap
		{
			constexpr auto __menuOption_Arm_Beartrap = 0x270; // Option
			constexpr auto animator = 0x2D8; // Animator
			constexpr auto initialized = 0x2E0; // bool
		}
		namespace BlackjackMachine
		{
			constexpr auto __menuOption_Menu_Play = 0x4B0; // Option
			constexpr auto mainScreenPrefab = 0x518; // GameObjectRef
			constexpr auto smallScreenPrefab = 0x520; // GameObjectRef
			constexpr auto mainScreenParent = 0x528; // Transform
			constexpr auto smallScreenParents = 0x530; // Transform[]
			constexpr auto _maxbet = 0x0; // int32_t
			constexpr auto controller = 0x538; // BlackjackController
			constexpr auto mainScreenUI = 0x540; // BlackjackMainScreenUI
			constexpr auto smallScreenUIs = 0x548; // BlackjackSmallScreenUI[]
		}
		namespace BuildingPrivlidge
		{
			constexpr auto __menuOption_Menu_MaxAuth = 0x418; // Option
			constexpr auto __menuOption_Menu_RotateVM = 0x480; // Option
			constexpr auto __menuOption_MenuAuthorize = 0x4E8; // Option
			constexpr auto __menuOption_MenuClearList = 0x550; // Option
			constexpr auto __menuOption_MenuDeauthorize = 0x5B8; // Option
			constexpr auto authorizedPlayers = 0x620; // List`1
			constexpr auto allowedConstructionItems = 0x628; // List`1
			constexpr auto cachedProtectedMinutes = 0x630; // float
			constexpr auto cachedUpkeepPeriodMinutes = 0x634; // float
			constexpr auto cachedUpkeepCostFraction = 0x638; // float
		}
		namespace Candle
		{
			constexpr auto __menuOption_Menu_Extinguish = 0x250; // Option
			constexpr auto __menuOption_Menu_Ignite = 0x2B8; // Option
		}
		namespace CardTable
		{
			constexpr auto __menuOption_Menu_Play = 0x4B0; // Option
			constexpr auto viewModel = 0x518; // ViewModel
			constexpr auto tableCards = 0x520; // PlayingCardImage[]
			constexpr auto tableCardBackings = 0x528; // Renderer[]
			constexpr auto cardUICanvas = 0x530; // Canvas
			constexpr auto tableCardImages = 0x538; // Image[]
			constexpr auto blankCard = 0x540; // Sprite
			constexpr auto chipStacks = 0x548; // ChipStack[]
			constexpr auto fillerStacks = 0x550; // ChipStack[]
			constexpr auto localWasHoldingCards = 0x558; // Nullable`1
			constexpr auto lastVisualScrap = 0x55C; // int32_t
			constexpr auto tableCardImageDict = 0x0; // Dictionary`2
			constexpr auto blankCardStatic = 0x8; // Sprite
		}
		namespace CarvablePumpkin
		{
			constexpr auto __menuOption_Menu_ChangeText = 0x568; // Option
			constexpr auto __menuOption_Menu_LockSign = 0x5D0; // Option
			constexpr auto __menuOption_Menu_UnLockSign = 0x638; // Option
			constexpr auto textureRequestDistance = 0x0; // float
			constexpr auto textureRequestSent = 0x6A0; // bool
			constexpr auto withinTextureRangek__BackingField = 0x6A1; // bool
			constexpr auto cell = 0x6A8; // LODCell
			constexpr auto changeTextDialog = 0x6B0; // GameObjectRef
			constexpr auto paintableSources = 0x6B8; // MeshPaintableSource[]
			constexpr auto textureIDs = 0x6C0; // uint32_t[]
			constexpr auto timeSinceRequest = 0x6C8; // RealTimeSince[]
			constexpr auto loadedTextures = 0x6D0; // uint32_t[]
		}
		namespace CCTV_RC
		{
			constexpr auto __menuOption_Menu_SetDir = 0x330; // Option
			constexpr auto pivotOrigin = 0x398; // Transform
			constexpr auto yaw = 0x3A0; // Transform
			constexpr auto pitch = 0x3A8; // Transform
			constexpr auto pitchClamp = 0x3B0; // Vector2
			constexpr auto yawClamp = 0x3B8; // Vector2
			constexpr auto turnSpeed = 0x3C0; // float
			constexpr auto serverLerpSpeed = 0x3C4; // float
			constexpr auto clientLerpSpeed = 0x3C8; // float
			constexpr auto zoomLerpSpeed = 0x3CC; // float
			constexpr auto fovScales = 0x3D0; // float[]
			constexpr auto pitchAmount = 0x3D8; // float
			constexpr auto yawAmount = 0x3DC; // float
			constexpr auto fovScaleIndex = 0x3E0; // int32_t
			constexpr auto fovScaleLerped = 0x3E4; // float
			constexpr auto hasPTZ = 0x3E8; // bool
			constexpr auto dofCurve = 0x3F0; // AnimationCurve
			constexpr auto dofApertureMax = 0x3F8; // float
			constexpr auto movementLoopSoundDef = 0x400; // SoundDefinition
			constexpr auto movementLoopGainCurve = 0x408; // AnimationCurve
			constexpr auto movementLoopSmoothing = 0x410; // float
			constexpr auto movementLoopReference = 0x414; // float
			constexpr auto movementLoop = 0x418; // Sound
			constexpr auto movementLoopGainModulator = 0x420; // Modulator
			constexpr auto zoomInSoundDef = 0x428; // SoundDefinition
			constexpr auto zoomOutSoundDef = 0x430; // SoundDefinition
			constexpr auto prevRotation = 0x438; // Quaternion
			constexpr auto prevRotationSpeed = 0x448; // float
			constexpr auto serverPitch = 0x44C; // float
			constexpr auto serverYaw = 0x450; // float
			constexpr auto serverZoomIndex = 0x454; // int32_t
			constexpr auto usingManualAim = 0x458; // bool
			constexpr auto timeSinceManualAim = 0x45C; // RealTimeSince
		}
		namespace CodeLock
		{
			constexpr auto __menuOption_Menu_ChangeGuestCode = 0x1D8; // Option
			constexpr auto __menuOption_Menu_ChangeLockCode = 0x240; // Option
			constexpr auto __menuOption_Menu_Enter_Code = 0x2A8; // Option
			constexpr auto __menuOption_Menu_Lock = 0x310; // Option
			constexpr auto __menuOption_Menu_Unlock = 0x378; // Option
			constexpr auto keyEnterDialog = 0x3E0; // GameObjectRef
			constexpr auto effectUnlocked = 0x3E8; // GameObjectRef
			constexpr auto effectLocked = 0x3F0; // GameObjectRef
			constexpr auto effectDenied = 0x3F8; // GameObjectRef
			constexpr auto effectCodeChanged = 0x400; // GameObjectRef
			constexpr auto effectShock = 0x408; // GameObjectRef
			constexpr auto hasCode = 0x410; // bool
			constexpr auto blockwarning = 0x0; // Phrase
			constexpr auto HasAuth = 0x411; // bool
			constexpr auto lastEnteredCodelock = 0x414; // float
		}
		namespace CollectableEasterEgg
		{
			constexpr auto __menuOption_Menu_Pickup = 0x168; // Option
			constexpr auto artwork = 0x1D0; // Transform
			constexpr auto bounceRange = 0x1D8; // float
			constexpr auto bounceSpeed = 0x1DC; // float
			constexpr auto pickupEffect = 0x1E0; // GameObjectRef
			constexpr auto itemToGive = 0x1E8; // ItemDefinition
			constexpr auto randOffset = 0x1F0; // float
		}
		namespace ContainerIOEntity
		{
			constexpr auto __menuOption_Menu_Occupied = 0x2A8; // Option
			constexpr auto __menuOption_Menu_Open = 0x310; // Option
			constexpr auto onlyAllowedItem = 0x378; // ItemDefinition
			constexpr auto allowedContents = 0x380; // ContentsType
			constexpr auto maxStackSize = 0x384; // int32_t
			constexpr auto numSlots = 0x388; // int32_t
			constexpr auto lootPanelName = 0x390; // string
			constexpr auto panelTitle = 0x398; // Phrase
			constexpr auto needsBuildingPrivilegeToUse = 0x3A0; // bool
			constexpr auto isLootable = 0x3A1; // bool
			constexpr auto dropsLoot = 0x3A2; // bool
			constexpr auto dropFloats = 0x3A3; // bool
			constexpr auto onlyOneUser = 0x3A4; // bool
			constexpr auto openSound = 0x3A8; // SoundDefinition
			constexpr auto closeSound = 0x3B0; // SoundDefinition
		}
		namespace CustomDoorManipulator
		{
			constexpr auto __menuOption_Menu_Pair = 0x2C8; // Option
			constexpr auto __menuOption_Menu_SetClose = 0x330; // Option
			constexpr auto __menuOption_Menu_SetOpen = 0x398; // Option
		}
		namespace CustomTimerSwitch
		{
			constexpr auto __menuOption_Menu_SetTime = 0x328; // Option
			constexpr auto timerPanelPrefab = 0x390; // GameObjectRef
		}
		namespace DeployableBoomBox
		{
			constexpr auto __menuOption_ChangeRadioSettings = 0x3B8; // Option
			constexpr auto __menuOption_Play = 0x420; // Option
			constexpr auto __menuOption_Stop = 0x488; // Option
			constexpr auto BoxController = 0x4F0; // BoomBox
			constexpr auto PowerUsageWhilePlaying = 0x4F8; // int32_t
			constexpr auto IsStatic = 0x4FC; // bool
			constexpr auto connectedPositions = 0x500; // List`1
			constexpr auto lastConnectCount = 0x508; // int32_t
		}
		namespace DeployedRecorder
		{
			constexpr auto __menuOption_Play = 0x418; // Option
			constexpr auto __menuOption_Stop = 0x480; // Option
			constexpr auto SoundSource = 0x4E8; // AudioSource
			constexpr auto ValidCassettes = 0x4F0; // ItemDefinition[]
			constexpr auto PlaySfx = 0x4F8; // SoundDefinition
			constexpr auto StopSfx = 0x500; // SoundDefinition
			constexpr auto TapeSwapper = 0x508; // SwapKeycard
			constexpr auto cachedCassette = 0x510; // Cassette
			constexpr auto initialLoad = 0x518; // bool
		}
		namespace DieselEngine
		{
			constexpr auto __menuOption_Menu_EngineStartup = 0x418; // Option
			constexpr auto __menuOption_Menu_NoFuel = 0x480; // Option
			constexpr auto rumbleEffect = 0x4E8; // GameObjectRef
			constexpr auto rumbleOrigin = 0x4F0; // Transform
			constexpr auto runningTimePerFuelUnit = 0x4F8; // float
			constexpr auto cachedFuelTime = 0x4FC; // float
		}
		namespace Door
		{
			constexpr auto __menuOption_Menu_CloseDoor = 0x288; // Option
			constexpr auto __menuOption_Menu_KnockDoor = 0x2F0; // Option
			constexpr auto __menuOption_Menu_OpenDoor = 0x358; // Option
			constexpr auto __menuOption_Menu_ToggleHatch = 0x3C0; // Option
			constexpr auto knockEffect = 0x428; // GameObjectRef
			constexpr auto canTakeLock = 0x430; // bool
			constexpr auto hasHatch = 0x431; // bool
			constexpr auto canTakeCloser = 0x432; // bool
			constexpr auto canTakeKnocker = 0x433; // bool
			constexpr auto canNpcOpen = 0x434; // bool
			constexpr auto canHandOpen = 0x435; // bool
			constexpr auto isSecurityDoor = 0x436; // bool
			constexpr auto vehiclePhysBoxes = 0x438; // TriggerNotify[]
			constexpr auto checkPhysBoxesOnOpen = 0x440; // bool
			constexpr auto vehicleCollisionSfx = 0x448; // SoundDefinition
			constexpr auto ClosedColliderRoots = 0x450; // GameObject[]
			constexpr auto openAnimLength = 0x458; // float
			constexpr auto closeAnimLength = 0x45C; // float
			constexpr auto openHash = 0x0; // int32_t
			constexpr auto closeHash = 0x4; // int32_t
		}
		namespace DoorCloser
		{
			constexpr auto __menuOption_Menu_Remove = 0x168; // Option
			constexpr auto itemType = 0x1D0; // ItemDefinition
			constexpr auto delay = 0x1D8; // float
		}
		namespace DroppedItemContainer
		{
			constexpr auto __menuOption_Menu_Open = 0x250; // Option
			constexpr auto lootPanelName = 0x2B8; // string
			constexpr auto maxItemCount = 0x2C0; // int32_t
			constexpr auto playerSteamID = 0x2C8; // UInt64
			constexpr auto _playerName = 0x2D0; // string
			constexpr auto ItemBasedDespawn = 0x2D8; // bool
			constexpr auto onlyOwnerLoot = 0x2D9; // bool
			constexpr auto openSound = 0x2E0; // SoundDefinition
			constexpr auto closeSound = 0x2E8; // SoundDefinition
		}
		namespace DudTimedExplosive
		{
			constexpr auto __menuOption_Menu_Pickup = 0x1C0; // Option
			constexpr auto fizzleEffect = 0x228; // GameObjectRef
			constexpr auto wickSpark = 0x230; // GameObject
			constexpr auto wickSound = 0x238; // AudioSource
			constexpr auto dudChance = 0x240; // float
			constexpr auto itemToGive = 0x248; // ItemDefinition
			constexpr auto explodeTime = 0x250; // float
			constexpr auto becomeDudInWater = 0x254; // bool
		}
		namespace ElectricalBranch
		{
			constexpr auto __menuOption_Menu_SetBranch = 0x2A8; // Option
			constexpr auto branchAmount = 0x310; // int32_t
			constexpr auto branchPanelPrefab = 0x318; // GameObjectRef
		}
		namespace ElectricSwitch
		{
			constexpr auto __menuOption_Menu_Toggle = 0x2A8; // Option
			constexpr auto __menuOption_Menu_TurnOff = 0x310; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x378; // Option
			constexpr auto isToggleSwitch = 0x3E0; // bool
		}
		namespace ElevatorLift
		{
			constexpr auto __menuOption_Menu_LowerElevatorToFloor = 0x250; // Option
			constexpr auto __menuOption_Menu_RaiseElevatorToTop = 0x2B8; // Option
			constexpr auto DescendingHurtTrigger = 0x320; // GameObject
			constexpr auto MovementCollider = 0x328; // GameObject
			constexpr auto UpButtonPoint = 0x330; // Transform
			constexpr auto DownButtonPoint = 0x338; // Transform
			constexpr auto VehicleTrigger = 0x340; // TriggerNotify
			constexpr auto LiftArrivalScreenBounce = 0x348; // GameObjectRef
			constexpr auto liftMovementLoopDef = 0x350; // SoundDefinition
			constexpr auto liftMovementStartDef = 0x358; // SoundDefinition
			constexpr auto liftMovementStopDef = 0x360; // SoundDefinition
			constexpr auto liftMovementAccentSoundDef = 0x368; // SoundDefinition
			constexpr auto liftButtonPressedEffect = 0x370; // GameObjectRef
			constexpr auto movementAccentMinInterval = 0x378; // float
			constexpr auto movementAccentMaxInterval = 0x37C; // float
			constexpr auto liftMovementLoopSound = 0x380; // Sound
			constexpr auto nextMovementAccent = 0x388; // float
			constexpr auto lastPosition = 0x38C; // Vector3
		}
		namespace ElevatorLiftPlayer
		{
			constexpr auto __menuOption_Menu_LowerElevator = 0x398; // Option
			constexpr auto __menuOption_Menu_RaiseElevator = 0x400; // Option
		}
		namespace ElevatorLiftStatic
		{
			constexpr auto __menuOption_Menu_LowerElevator = 0x398; // Option
			constexpr auto __menuOption_Menu_RaiseElevator = 0x400; // Option
			constexpr auto ElevatorDoorRef = 0x468; // GameObjectRef
			constexpr auto ElevatorDoorLocation = 0x470; // Transform
			constexpr auto BlockPerFloorMovement = 0x478; // bool
		}
		namespace EngineSwitch
		{
			constexpr auto __menuOption_Menu_StartEngine = 0x168; // Option
			constexpr auto __menuOption_Menu_StopEngine = 0x1D0; // Option
		}
		namespace ExcavatorArm
		{
			constexpr auto __menuOption_Menu_TargetHQM = 0x168; // Option
			constexpr auto __menuOption_Menu_TargetMetal = 0x1D0; // Option
			constexpr auto __menuOption_Menu_TargetStone = 0x238; // Option
			constexpr auto __menuOption_Menu_TargetSulfur = 0x2A0; // Option
			constexpr auto yaw1 = 0x308; // float
			constexpr auto yaw2 = 0x30C; // float
			constexpr auto wheel = 0x310; // Transform
			constexpr auto wheelSpeed = 0x318; // float
			constexpr auto turnSpeed = 0x31C; // float
			constexpr auto miningOffset = 0x320; // Transform
			constexpr auto bounceEffect = 0x328; // GameObjectRef
			constexpr auto lights = 0x330; // LightGroupAtTime
			constexpr auto conveyorMaterial = 0x338; // Material
			constexpr auto beltSpeedMax = 0x340; // float
			constexpr auto outputPiles = 0x348; // List`1
			constexpr auto miningStartButtonSoundDef = 0x350; // SoundDefinition
			constexpr auto resourcesToMine = 0x358; // ItemAmount[]
			constexpr auto resourceProductionTickRate = 0x360; // float
			constexpr auto timeForFullResources = 0x364; // float
			constexpr auto pendingResources = 0x368; // ItemAmount[]
			constexpr auto excavatorPhrase = 0x370; // Phrase
			constexpr auto wheelRotation = 0x378; // float
			constexpr auto nextBounceTime = 0x37C; // float
			constexpr auto currentWheelTurnSpeed = 0x380; // float
			constexpr auto currentBeltSpeed = 0x384; // float
			constexpr auto currentBeltOffset = 0x388; // float
		}
		namespace ExcavatorSignalComputer
		{
			constexpr auto __menuOption_Menu_Press_TrainTunnel = 0x250; // Option
			constexpr auto chargePower = 0x2B8; // float
			constexpr auto supplyPlanePrefab = 0x2C0; // GameObjectRef
			constexpr auto dropPoints = 0x2C8; // Transform[]
			constexpr auto statusText = 0x2D0; // Text
			constexpr auto timerText = 0x2D8; // Text
			constexpr auto readyphrase = 0x0; // Phrase
			constexpr auto chargephrase = 0x8; // Phrase
			constexpr auto client_chargeNeeded = 0x10; // float
		}
		namespace FrankensteinTable
		{
			constexpr auto __menuOption_MenuSleepFrankenstein = 0x418; // Option
			constexpr auto __menuOption_MenuWakeFrankenstein = 0x480; // Option
			constexpr auto FrankensteinPrefab = 0x4E8; // GameObjectRef
			constexpr auto SpawnLocation = 0x4F0; // Transform
			constexpr auto WeaponItem = 0x4F8; // ItemDefinition
			constexpr auto HeadItems = 0x500; // List`1
			constexpr auto TorsoItems = 0x508; // List`1
			constexpr auto LegItems = 0x510; // List`1
			constexpr auto ItemsToUse = 0x518; // List`1
			constexpr auto TableVisuals = 0x520; // FrankensteinTableVisuals
			constexpr auto TableDownDuration = 0x528; // float
		}
		namespace FreeableLootContainer
		{
			constexpr auto __menuOption_Menu_FreeCrate = 0x460; // Option
			constexpr auto buoyancy = 0x4C8; // Buoyancy
			constexpr auto freedEffect = 0x4D0; // GameObjectRef
			constexpr auto rb = 0x4D8; // Rigidbody
			constexpr auto skinOverride = 0x4E0; // uint32_t
		}
		namespace FuelGenerator
		{
			constexpr auto __menuOption_Menu_TurnOff = 0x3B8; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x420; // Option
			constexpr auto outputEnergy = 0x488; // int32_t
			constexpr auto fuelPerSec = 0x48C; // float
		}
		namespace GrowableEntity
		{
			constexpr auto __menuOption_MenuClone = 0x250; // Option
			constexpr auto __menuOption_MenuCloneAll = 0x2B8; // Option
			constexpr auto __menuOption_MenuEat = 0x320; // Option
			constexpr auto __menuOption_MenuPick = 0x388; // Option
			constexpr auto __menuOption_MenuPickAll = 0x3F0; // Option
			constexpr auto __menuOption_MenuRemove = 0x458; // Option
			constexpr auto __menuOption_MenuRemoveAll = 0x4C0; // Option
			constexpr auto qualityUpdate = 0x528; // TimeSince
			constexpr auto Properties = 0x530; // PlantProperties
			constexpr auto SourceItemDef = 0x538; // ItemDefinition
			constexpr auto Statek__BackingField = 0x540; // State
			constexpr auto Agek__BackingField = 0x544; // float
			constexpr auto LightQualityk__BackingField = 0x548; // float
			constexpr auto GroundQualityk__BackingField = 0x54C; // float
			constexpr auto WaterQualityk__BackingField = 0x550; // float
			constexpr auto WaterConsumptionk__BackingField = 0x554; // float
			constexpr auto Fertilizedk__BackingField = 0x558; // bool
			constexpr auto TemperatureQualityk__BackingField = 0x55C; // float
			constexpr auto OverallQualityk__BackingField = 0x560; // float
			constexpr auto Yieldk__BackingField = 0x564; // float
			constexpr auto stageAge = 0x568; // float
			constexpr auto Genes = 0x570; // GrowableGenes
			constexpr auto skinChange = 0x578; // DeferredAction
			constexpr auto skin = 0x580; // GameObject
			constexpr auto skinComponent = 0x588; // PlantSkin
			constexpr auto materialColorLerp = 0x590; // MaterialColorLerp
			constexpr auto client_healthScale = 0x598; // float
		}
		namespace HackableLockedCrate
		{
			constexpr auto __menuOption_Menu_Hack = 0x460; // Option
			constexpr auto timerText = 0x4C8; // Text
			constexpr auto requiredHackSeconds = 0x0; // float
			constexpr auto decaySeconds = 0x4; // float
			constexpr auto hackProgressBeep = 0x4D0; // SoundPlayer
			constexpr auto hackSeconds = 0x4D8; // float
			constexpr auto shockEffect = 0x4E0; // GameObjectRef
			constexpr auto mapMarkerEntityPrefab = 0x4E8; // GameObjectRef
			constexpr auto landEffect = 0x4F0; // GameObjectRef
			constexpr auto shouldDecay = 0x4F8; // bool
			constexpr auto beepSeconds = 0x4FC; // int32_t
		}
		namespace HBHFSensor
		{
			constexpr auto __menuOption_Menu_ExcludeAuth = 0x2B0; // Option
			constexpr auto __menuOption_Menu_ExcludeOthers = 0x318; // Option
			constexpr auto __menuOption_Menu_IncludeAuth = 0x380; // Option
			constexpr auto __menuOption_Menu_IncludeOthers = 0x3E8; // Option
			constexpr auto detectUp = 0x450; // GameObjectRef
			constexpr auto detectDown = 0x458; // GameObjectRef
		}
		namespace HotAirBalloon
		{
			constexpr auto __menuOption_Menu_BurnOff = 0x250; // Option
			constexpr auto __menuOption_Menu_BurnOn = 0x2B8; // Option
			constexpr auto __menuOption_Menu_FuelStorage = 0x320; // Option
			constexpr auto centerOfMass = 0x388; // Transform
			constexpr auto myRigidbody = 0x390; // Rigidbody
			constexpr auto buoyancyPoint = 0x398; // Transform
			constexpr auto liftAmount = 0x3A0; // float
			constexpr auto windSock = 0x3A8; // Transform
			constexpr auto windFlags = 0x3B0; // Transform[]
			constexpr auto staticBalloonDeflated = 0x3B8; // GameObject
			constexpr auto staticBalloon = 0x3C0; // GameObject
			constexpr auto animatedBalloon = 0x3C8; // GameObject
			constexpr auto balloonAnimator = 0x3D0; // Animator
			constexpr auto groundSample = 0x3D8; // Transform
			constexpr auto inflationLevel = 0x3E0; // float
			constexpr auto fuelStoragePrefab = 0x3E8; // GameObjectRef
			constexpr auto fuelPerSec = 0x3F0; // float
			constexpr auto storageUnitPrefab = 0x3F8; // GameObjectRef
			constexpr auto storageUnitInstance = 0x400; // EntityRef`1
			constexpr auto damageRenderer = 0x410; // DamageRenderer
			constexpr auto engineHeight = 0x418; // Transform
			constexpr auto killTriggers = 0x420; // GameObject[]
			constexpr auto fuelSystem = 0x428; // EntityFuelSystem
			constexpr auto population = 0x0; // float
			constexpr auto outsidedecayminutes = 0x4; // float
			constexpr auto windForce = 0x430; // float
			constexpr auto currentWindVec = 0x434; // Vector3
			constexpr auto collapsedBounds = 0x440; // Bounds
			constexpr auto raisedBounds = 0x458; // Bounds
			constexpr auto balloonColliders = 0x470; // GameObject[]
			constexpr auto currentClientInflationLevel = 0x478; // float
			constexpr auto windSockVec = 0x47C; // Vector3
		}
		namespace HumanNPC
		{
			constexpr auto __menuOption_MenuDesignAI = 0x888; // Option
			constexpr auto AdditionalLosBlockingLayer = 0x8F0; // int32_t
			constexpr auto LootSpawnSlots = 0x8F8; // LootSpawnSlot[]
			constexpr auto aimConeScale = 0x900; // float
			constexpr auto lastDismountTime = 0x904; // float
			constexpr auto Braink__BackingField = 0x908; // ScientistBrain
		}
		namespace IndustrialConveyor
		{
			constexpr auto __menuOption_ChangeFilters = 0x2A8; // Option
			constexpr auto __menuOption_Menu_TurnOff = 0x310; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x378; // Option
			constexpr auto MaxStackSizePerMove = 0x3E0; // int32_t
			constexpr auto FilterDialog = 0x3E8; // GameObjectRef
			constexpr auto transferItemSoundDef = 0x3F0; // SoundDefinition
			constexpr auto transferItemStartSoundDef = 0x3F8; // SoundDefinition
			constexpr auto filterItems = 0x400; // List`1
			constexpr auto mode = 0x408; // ConveyorMode
			constexpr auto IconTransferImage = 0x410; // Image
			constexpr auto clientLastItemMove = 0x418; // TimeSince
			constexpr auto spawnedDialog = 0x420; // IndustrialFilterDialog
			constexpr auto cachedMoves = 0x428; // List`1
			constexpr auto isAnimating = 0x430; // bool
		}
		namespace IndustrialCrafter
		{
			constexpr auto __menuOption_Menu_Open = 0x2A8; // Option
			constexpr auto __menuOption_Menu_TurnOff = 0x310; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x378; // Option
			constexpr auto LootPanelName = 0x3E0; // string
			constexpr auto NeedsBuildingPrivilegeToUse = 0x3E8; // bool
			constexpr auto OnlyOneUser = 0x3E9; // bool
			constexpr auto ContainerOpenSound = 0x3F0; // SoundDefinition
			constexpr auto ContainerCloseSound = 0x3F8; // SoundDefinition
			constexpr auto MaterialOffsetCurve = 0x400; // AnimationCurve
			constexpr auto MeshRenderers = 0x408; // Renderer[]
			constexpr auto JobCompleteFx = 0x410; // ParticleSystemContainer
			constexpr auto JobCompleteSoundDef = 0x418; // SoundDefinition
			constexpr auto jobFinishesk__BackingField = 0x420; // TimeUntilWithDuration
			constexpr auto rendererBlock = 0x0; // MaterialPropertyBlock
			constexpr auto EmissionColor = 0x8; // int32_t
			constexpr auto progressDisplayInvoke = 0x428; // Action
			constexpr auto lastNorm = 0x430; // float
		}
		namespace ItemBasedFlowRestrictor
		{
			constexpr auto __menuOption_Menu_Open = 0x2A8; // Option
			constexpr auto passthroughItem = 0x310; // ItemDefinition
			constexpr auto allowedContents = 0x318; // ContentsType
			constexpr auto maxStackSize = 0x31C; // int32_t
			constexpr auto numSlots = 0x320; // int32_t
			constexpr auto lootPanelName = 0x328; // string
			constexpr auto passthroughItemConditionLossPerSec = 0x330; // float
			constexpr auto openSound = 0x338; // SoundDefinition
			constexpr auto closeSound = 0x340; // SoundDefinition
		}
		namespace KeyLock
		{
			constexpr auto __menuOption_Menu_CreateKey = 0x1D8; // Option
			constexpr auto __menuOption_Menu_Lock = 0x240; // Option
			constexpr auto __menuOption_Menu_Unlock = 0x2A8; // Option
			constexpr auto keyItemType = 0x310; // ItemDefinition
		}
		namespace Landmine
		{
			constexpr auto __menuOption_Arm_Landmine = 0x270; // Option
			constexpr auto explosionEffect = 0x2D8; // GameObjectRef
			constexpr auto triggeredEffect = 0x2E0; // GameObjectRef
			constexpr auto minExplosionRadius = 0x2E8; // float
			constexpr auto explosionRadius = 0x2EC; // float
			constexpr auto blocked = 0x2F0; // bool
			constexpr auto triggerPlayerID = 0x2F8; // UInt64
			constexpr auto damageTypes = 0x300; // List`1
		}
		namespace Lift
		{
			constexpr auto __menuOption_Menu_UseLift = 0x288; // Option
			constexpr auto triggerPrefab = 0x2F0; // GameObjectRef
			constexpr auto triggerBone = 0x2F8; // string
			constexpr auto resetDelay = 0x300; // float
		}
		namespace LiquidContainer
		{
			constexpr auto __menuOption_MenuDrink = 0x3B8; // Option
			constexpr auto defaultLiquid = 0x420; // ItemDefinition
			constexpr auto startingAmount = 0x428; // int32_t
			constexpr auto autofillOutputs = 0x42C; // bool
			constexpr auto autofillTickRate = 0x430; // float
			constexpr auto autofillTickAmount = 0x434; // int32_t
			constexpr auto maxOutputFlow = 0x438; // int32_t
			constexpr auto ValidItems = 0x440; // ItemDefinition[]
		}
		namespace LootableCorpse
		{
			constexpr auto __menuOption_Menu_Open = 0x270; // Option
			constexpr auto lootPanelName = 0x2D8; // string
			constexpr auto playerSteamID = 0x2E0; // UInt64
			constexpr auto _playerName = 0x2E8; // string
			constexpr auto streamerNamek__BackingField = 0x2F0; // string
			constexpr auto blockBagDropk__BackingField = 0x2F8; // bool
		}
		namespace MagnetCrane
		{
			constexpr auto __menuOption_Menu_FuelStorage = 0x450; // Option
			constexpr auto animInterp = 0x4B8; // GenericLerp`1
			constexpr auto leftTreadInput = 0x4C0; // float
			constexpr auto rightTreadInput = 0x4C4; // float
			constexpr auto animator = 0x4C8; // Animator
			constexpr auto COM = 0x4D0; // Transform
			constexpr auto arm1Speed = 0x4D8; // float
			constexpr auto arm2Speed = 0x4DC; // float
			constexpr auto turnYawSpeed = 0x4E0; // float
			constexpr auto Magnet = 0x4E8; // BaseMagnet
			constexpr auto mcAudio = 0x4F0; // MagnetCraneAudio
			constexpr auto myRigidbody = 0x4F8; // Rigidbody
			constexpr auto collisionTestingPoints = 0x500; // Transform[]
			constexpr auto maxDistanceFromOrigin = 0x508; // float
			constexpr auto selfDamageEffect = 0x510; // GameObjectRef
			constexpr auto explosionEffect = 0x518; // GameObjectRef
			constexpr auto explosionPoint = 0x520; // Transform
			constexpr auto driverCollision = 0x528; // CapsuleCollider
			constexpr auto leftHandTarget = 0x530; // Transform
			constexpr auto rightHandTarget = 0x538; // Transform
			constexpr auto leftFootTarget = 0x540; // Transform
			constexpr auto rightFootTarget = 0x548; // Transform
			constexpr auto idleFuelPerSec = 0x550; // float
			constexpr auto maxFuelPerSec = 0x554; // float
			constexpr auto OnTriggers = 0x558; // GameObject[]
			constexpr auto magnetDamage = 0x560; // TriggerHurtEx
			constexpr auto engineKW = 0x568; // int32_t
			constexpr auto wheels = 0x570; // CarWheel[]
			constexpr auto carSettings = 0x578; // CarSettings
			constexpr auto exhaustInner = 0x580; // ParticleSystem
			constexpr auto exhaustOuter = 0x588; // ParticleSystem
			constexpr auto lightToggle = 0x590; // EmissionToggle
			constexpr auto ReturnMessage = 0x0; // Phrase
			constexpr auto leftTreadParam = 0x8; // int32_t
			constexpr auto rightTreadParam = 0xC; // int32_t
			constexpr auto yawParam = 0x10; // int32_t
			constexpr auto arm1Param = 0x14; // int32_t
			constexpr auto arm2Param = 0x18; // int32_t
		}
		namespace Mailbox
		{
			constexpr auto __menuOption_Full = 0x418; // Option
			constexpr auto ownerPanel = 0x480; // string
			constexpr auto mailDropSound = 0x488; // GameObjectRef
			constexpr auto allowedItems = 0x490; // ItemDefinition[]
			constexpr auto autoSubmitWhenClosed = 0x498; // bool
			constexpr auto shouldMarkAsFull = 0x499; // bool
		}
		namespace MarketTerminal
		{
			constexpr auto __menuOption_Menu_RequestOpenMarket = 0x418; // Option
			constexpr auto _currentlyDisplayedUserId = 0x480; // UInt64
			constexpr auto menuPrefab = 0x488; // GameObjectRef
			constexpr auto lockToCustomerDuration = 0x490; // UInt64
			constexpr auto orderTimeout = 0x498; // UInt64
			constexpr auto deliveryFeeCurrency = 0x4A0; // ItemDefinition
			constexpr auto deliveryFeeAmount = 0x4A8; // int32_t
			constexpr auto config = 0x4B0; // DeliveryDroneConfig
			constexpr auto userLabel = 0x4B8; // RustText
			constexpr auto _customerSteamId = 0x4C0; // UInt64
			constexpr auto _customerName = 0x4C8; // string
			constexpr auto _timeUntilCustomerExpiry = 0x4D0; // TimeUntil
			constexpr auto _marketplace = 0x4D8; // EntityRef`1
			constexpr auto pendingOrders = 0x4E8; // List`1
		}
		namespace MixingTable
		{
			constexpr auto __menuOption_Menu_TurnOff = 0x418; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x480; // Option
			constexpr auto Particles = 0x4E8; // GameObject
			constexpr auto Recipes = 0x4F0; // RecipeList
			constexpr auto OnlyAcceptValidIngredients = 0x4F8; // bool
			constexpr auto RemainingMixTimek__BackingField = 0x4FC; // float
			constexpr auto TotalMixTimek__BackingField = 0x500; // float
			constexpr auto lastTickTimestamp = 0x504; // float
			constexpr auto inventoryItems = 0x508; // List`1
		}
		namespace MLRS
		{
			constexpr auto __menuOption_Menu_Cannot_Fire_Rockets = 0x350; // Option
			constexpr auto __menuOption_Menu_Fire_Rockets = 0x3B8; // Option
			constexpr auto __menuOption_Menu_Open_Dashboard_Storage = 0x420; // Option
			constexpr auto __menuOption_Menu_Open_Rocket_Storage = 0x488; // Option
			constexpr auto __menuOption_Menu_SetTarget = 0x4F0; // Option
			constexpr auto targetHRot = 0x558; // float
			constexpr auto targetVRot = 0x55C; // float
			constexpr auto hydraulicsBaseLocalPos = 0x560; // Nullable`1
			constexpr auto hingeTargetLocalRot = 0x570; // Vector3
			constexpr auto timeSinceLightChange = 0x57C; // TimeSince
			constexpr auto fullscreenMapOpen = 0x580; // bool
			constexpr auto rocketStoragePrefab = 0x588; // GameObjectRef
			constexpr auto dashboardStoragePrefab = 0x590; // GameObjectRef
			constexpr auto hRotator = 0x598; // Transform
			constexpr auto hRotSpeed = 0x5A0; // float
			constexpr auto vRotator = 0x5A8; // Transform
			constexpr auto vRotSpeed = 0x5B0; // float
			constexpr auto vRotMax = 0x5B4; // float
			constexpr auto hydraulics = 0x5B8; // Transform
			constexpr auto minRange = 0x5C0; // float
			constexpr auto targetAreaRadius = 0x5C4; // float
			constexpr auto mlrsRocket = 0x5C8; // GameObjectRef
			constexpr auto firingPoint = 0x5D0; // Transform
			constexpr auto rocketTubes = 0x5D8; // RocketTube[]
			constexpr auto screensChild = 0x5E0; // GameObject
			constexpr auto leftHandGrip = 0x5E8; // Transform
			constexpr auto leftJoystick = 0x5F0; // Transform
			constexpr auto rightHandGrip = 0x5F8; // Transform
			constexpr auto rightJoystick = 0x600; // Transform
			constexpr auto controlKnobHeight = 0x608; // Transform
			constexpr auto controlKnobAngle = 0x610; // Transform
			constexpr auto uiDialogPrefab = 0x618; // GameObjectRef
			constexpr auto fireButtonLight = 0x620; // Light
			constexpr auto brokenDownEffect = 0x628; // GameObject
			constexpr auto topScreenShutdown = 0x630; // ParticleSystem
			constexpr auto bottomScreenShutdown = 0x638; // ParticleSystem
			constexpr auto brokenDownMinutes = 0x0; // float
			constexpr auto UserTargetHitPosk__BackingField = 0x640; // Vector3
			constexpr auto TrueHitPosk__BackingField = 0x64C; // Vector3
			constexpr auto CurGravityMultiplierk__BackingField = 0x658; // float
			constexpr auto RocketAmmoCountk__BackingField = 0x65C; // int32_t
			constexpr auto IsRealigningk__BackingField = 0x660; // bool
			constexpr auto rocketStorageInstance = 0x668; // EntityRef
			constexpr auto dashboardStorageInstance = 0x678; // EntityRef
			constexpr auto rocketBaseGravity = 0x688; // float
			constexpr auto rocketSpeed = 0x68C; // float
			constexpr auto RocketDamageRadiusk__BackingField = 0x690; // float
			constexpr auto isInitialLoad = 0x694; // bool
		}
		namespace ModularCar
		{
			constexpr auto __menuOption_Menu_EnterKeycode = 0x520; // Option
			constexpr auto __menuOption_Menu_FuelStorage = 0x588; // Option
			constexpr auto WheelDataFLk__BackingField = 0x5F0; // ClientWheelData
			constexpr auto WheelDataFRk__BackingField = 0x5F8; // ClientWheelData
			constexpr auto WheelDataRLk__BackingField = 0x600; // ClientWheelData
			constexpr auto WheelDataRRk__BackingField = 0x608; // ClientWheelData
			constexpr auto timeSinceLastUpdate = 0x610; // TimeSince
			constexpr auto timeSinceFailedStartAttempt = 0x614; // TimeSince
			constexpr auto allCodeLockVisuals = 0x618; // List`1
			constexpr auto clientSteerAngle = 0x620; // float
			constexpr auto clientDriveWheelVelocity = 0x624; // float
			constexpr auto clientDriveWheelSlip = 0x628; // float
			constexpr auto clientThrottle = 0x62C; // float
			constexpr auto clientBrake = 0x630; // float
			constexpr auto cachedEngineLowPerf = 0x634; // bool
			constexpr auto timeSinceEnginePerfCheck = 0x638; // TimeSince
			constexpr auto failedStartWasEngineProblem = 0x63C; // bool
			constexpr auto wasBraking = 0x63D; // bool
			constexpr auto detailColorID = 0x0; // int32_t
			constexpr auto chassisVisuals = 0x640; // ModularCarChassisVisuals
			constexpr auto wheelFL = 0x648; // VisualCarWheel
			constexpr auto wheelFR = 0x650; // VisualCarWheel
			constexpr auto wheelRL = 0x658; // VisualCarWheel
			constexpr auto wheelRR = 0x660; // VisualCarWheel
			constexpr auto carSettings = 0x668; // CarSettings
			constexpr auto hurtTriggerMinSpeed = 0x670; // float
			constexpr auto hurtTriggerFront = 0x678; // TriggerHurtNotChild
			constexpr auto hurtTriggerRear = 0x680; // TriggerHurtNotChild
			constexpr auto immortalProtection = 0x688; // ProtectionProperties
			constexpr auto mortalProtection = 0x690; // ProtectionProperties
			constexpr auto mainChassisCollider = 0x698; // BoxCollider
			constexpr auto spawnSettings = 0x6A0; // SpawnSettings
			constexpr auto damageShowingRenderers = 0x6A8; // MeshRenderer[]
			constexpr auto population = 0x4; // float
			constexpr auto outsidedecayminutes = 0x8; // float
			constexpr auto CarLockk__BackingField = 0x6B0; // ModularCarCodeLock
			constexpr auto lastSetEngineState = 0x6B8; // EngineState
			constexpr auto cachedFuelFraction = 0x6BC; // float
		}
		namespace ModularCarGarage
		{
			constexpr auto __menuOption_Menu_EditVehicle = 0x3B8; // Option
			constexpr auto __menuOption_Menu_InsufficientPower = 0x420; // Option
			constexpr auto lastChassisDestroyTime = 0x488; // TimeSince
			constexpr auto vehicleLift = 0x490; // Transform
			constexpr auto vehicleLiftAnim = 0x498; // Animation
			constexpr auto animName = 0x4A0; // string
			constexpr auto occupantTrigger = 0x4A8; // VehicleLiftOccupantTrigger
			constexpr auto liftMoveTime = 0x4B0; // float
			constexpr auto poweredLight = 0x4B8; // EmissionToggle
			constexpr auto inUseLight = 0x4C0; // EmissionToggle
			constexpr auto vehicleLiftPos = 0x4C8; // Transform
			constexpr auto recycleEfficiency = 0x4D0; // float
			constexpr auto recycleDropPos = 0x4D8; // Transform
			constexpr auto needsElectricity = 0x4E0; // bool
			constexpr auto liftStartSoundDef = 0x4E8; // SoundDefinition
			constexpr auto liftStopSoundDef = 0x4F0; // SoundDefinition
			constexpr auto liftStopDownSoundDef = 0x4F8; // SoundDefinition
			constexpr auto liftLoopSoundDef = 0x500; // SoundDefinition
			constexpr auto addRemoveLockEffect = 0x508; // GameObjectRef
			constexpr auto changeLockCodeEffect = 0x510; // GameObjectRef
			constexpr auto repairEffect = 0x518; // GameObjectRef
			constexpr auto playerTrigger = 0x520; // TriggerBase
			constexpr auto chassisBuildOptions = 0x528; // ChassisBuildOption[]
			constexpr auto lockResourceCost = 0x530; // ItemAmount
			constexpr auto PlatformIsOccupiedk__BackingField = 0x538; // bool
			constexpr auto HasEditableOccupantk__BackingField = 0x539; // bool
			constexpr auto HasDriveableOccupantk__BackingField = 0x53A; // bool
			constexpr auto OccupantLockStatek__BackingField = 0x53C; // OccupantLock
			constexpr auto vehicleLiftState = 0x540; // VehicleLiftState
			constexpr auto liftLoopSound = 0x548; // Sound
			constexpr auto downPos = 0x550; // Vector3
		}
		namespace MotorRowboat
		{
			constexpr auto __menuOption_Menu_FuelStorage = 0x490; // Option
			constexpr auto __menuOption_Menu_StartEngine = 0x4F8; // Option
			constexpr auto __menuOption_Menu_StopEngine = 0x560; // Option
			constexpr auto engineLoops = 0x5C8; // BlendedSoundLoops
			constexpr auto waterLoops = 0x5D0; // BlendedSoundLoops
			constexpr auto engineStartSoundDef = 0x5D8; // SoundDefinition
			constexpr auto engineStopSoundDef = 0x5E0; // SoundDefinition
			constexpr auto movementSplashAccentSoundDef = 0x5E8; // SoundDefinition
			constexpr auto engineSteerSoundDef = 0x5F0; // SoundDefinition
			constexpr auto pushLandEffect = 0x5F8; // GameObjectRef
			constexpr auto pushWaterEffect = 0x600; // GameObjectRef
			constexpr auto waterSpeedDivisor = 0x608; // float
			constexpr auto turnPitchModScale = 0x60C; // float
			constexpr auto tiltPitchModScale = 0x610; // float
			constexpr auto splashAccentFrequencyMin = 0x614; // float
			constexpr auto splashAccentFrequencyMax = 0x618; // float
			constexpr auto directionalPitchModScale = 0x61C; // float
			constexpr auto vol = 0x620; // float
			constexpr auto pitch = 0x624; // float
			constexpr auto speed = 0x628; // float
			constexpr auto wasEngineOn = 0x62C; // bool
			constexpr auto nextSplashAccent = 0x630; // float
			constexpr auto prevSteering = 0x634; // int32_t
			constexpr auto fuelStoragePrefab = 0x638; // GameObjectRef
			constexpr auto fuelPerSec = 0x640; // float
			constexpr auto storageUnitPrefab = 0x648; // GameObjectRef
			constexpr auto storageUnitInstance = 0x650; // EntityRef`1
			constexpr auto boatRear = 0x660; // Transform
			constexpr auto wakeEffect = 0x668; // ParticleSystemContainer
			constexpr auto engineEffectIdle = 0x670; // ParticleSystemContainer
			constexpr auto engineEffectThrottle = 0x678; // ParticleSystemContainer
			constexpr auto causticsProjector = 0x680; // Projector
			constexpr auto causticsDepthTest = 0x688; // Transform
			constexpr auto engineLeftHandPosition = 0x690; // Transform
			constexpr auto engineRotate = 0x698; // Transform
			constexpr auto propellerRotate = 0x6A0; // Transform
			constexpr auto population = 0x0; // float
			constexpr auto outsidedecayminutes = 0x4; // float
			constexpr auto deepwaterdecayminutes = 0x8; // float
			constexpr auto fuelSystem = 0x6A8; // EntityFuelSystem
			constexpr auto stationaryDismounts = 0x6B0; // Transform[]
			constexpr auto mainCollider = 0x6B8; // Collider
			constexpr auto angularDragBase = 0x6C0; // float
			constexpr auto angularDragVelocity = 0x6C4; // float
			constexpr auto landDrag = 0x6C8; // float
			constexpr auto waterDrag = 0x6CC; // float
			constexpr auto offAxisDrag = 0x6D0; // float
			constexpr auto offAxisDot = 0x6D4; // float
			constexpr auto averageVelocity = 0x6D8; // AverageVelocity
			constexpr auto wasWakeOn = 0x6E0; // bool
			constexpr auto wasEngineSprayOn = 0x6E1; // bool
			constexpr auto wasEngineIdleOn = 0x6E2; // bool
			constexpr auto causticsMaterial = 0x6E8; // Material
			constexpr auto causticsColor = 0x6F0; // Color
			constexpr auto causticsAlpha = 0x700; // float
			constexpr auto currentEngineRotation = 0x704; // float
			constexpr auto propellerRotationSpeed = 0x708; // float
		}
		namespace MountableParentCombatEntity
		{
			constexpr auto __menuOption_Menu_Mount = 0x250; // Option
			constexpr auto mountable = 0x2B8; // BaseMountable
		}
		namespace NeonSign
		{
			constexpr auto __menuOption_SwitchToFastSpeed = 0x420; // Option
			constexpr auto __menuOption_SwitchToMediumSpeed = 0x488; // Option
			constexpr auto __menuOption_SwitchToSlowSpeed = 0x4F0; // Option
			constexpr auto topLeft = 0x558; // Light
			constexpr auto topRight = 0x560; // Light
			constexpr auto bottomLeft = 0x568; // Light
			constexpr auto bottomRight = 0x570; // Light
			constexpr auto lightIntensity = 0x578; // float
			constexpr auto powerConsumption = 0x57C; // int32_t
			constexpr auto activeMaterial = 0x580; // Material
			constexpr auto inactiveMaterial = 0x588; // Material
			constexpr auto animationSpeed = 0x590; // float
			constexpr auto currentFrame = 0x594; // int32_t
			constexpr auto frameLighting = 0x598; // List`1
			constexpr auto ambientSoundEmitter = 0x5A0; // AmbienceEmitter
			constexpr auto switchSoundDef = 0x5A8; // SoundDefinition
		}
		namespace NPCTalking
		{
			constexpr auto __menuOption_Menu_Talk = 0x8A0; // Option
			constexpr auto conversations = 0x908; // ConversationData[]
			constexpr auto conversationResultActions = 0x910; // NPCConversationResultAction[]
		}
		namespace PhotoFrame
		{
			constexpr auto __menuOption_Menu_ChangeText = 0x418; // Option
			constexpr auto __menuOption_Menu_LockSign = 0x480; // Option
			constexpr auto __menuOption_Menu_UnLockSign = 0x4E8; // Option
			constexpr auto _photoEntity = 0x550; // EntityRef
			constexpr auto _overlayTextureCrc = 0x560; // uint32_t
			constexpr auto _cell = 0x568; // LODCell
			constexpr auto _photoTexture = 0x570; // Texture2D
			constexpr auto _loadedPhotoEntityId = 0x578; // NetworkableId
			constexpr auto _loadedOverlayCrc = 0x580; // uint32_t
			constexpr auto SignEditorDialog = 0x588; // GameObjectRef
			constexpr auto PaintableSource = 0x590; // OverlayMeshPaintableSource
		}
		namespace PowerCounter
		{
			constexpr auto __menuOption_Menu_SetTarget = 0x2A8; // Option
			constexpr auto __menuOption_Menu_ShowCounter = 0x310; // Option
			constexpr auto __menuOption_Menu_ShowPassthrough = 0x378; // Option
			constexpr auto counterNumber = 0x3E0; // int32_t
			constexpr auto targetCounterNumber = 0x3E4; // int32_t
			constexpr auto canvas = 0x3E8; // Canvas
			constexpr auto screenAlpha = 0x3F0; // CanvasGroup
			constexpr auto screenText = 0x3F8; // Text
			constexpr auto counterConfigPanel = 0x400; // GameObjectRef
			constexpr auto passthroughColor = 0x408; // Color
			constexpr auto counterColor = 0x418; // Color
			constexpr auto client_counterNumber = 0x428; // int32_t
			constexpr auto client_passthrough = 0x42C; // int32_t
			constexpr auto nextScreenVisTime = 0x430; // float
			constexpr auto pendingNumberChange = 0x434; // int32_t
		}
		namespace PoweredRemoteControlEntity
		{
			constexpr auto __menuOption_Menu_SetID = 0x2A8; // Option
			constexpr auto rcIdentifier = 0x310; // string
			constexpr auto viewEyes = 0x318; // Transform
			constexpr auto IDPanelPrefab = 0x320; // GameObjectRef
			constexpr auto rcControls = 0x328; // RemoteControllableControls
			constexpr auto isStatic = 0x32C; // bool
			constexpr auto appendEntityIDToIdentifier = 0x32D; // bool
		}
		namespace PressButton
		{
			constexpr auto __menuOption_Menu_Press = 0x2A8; // Option
			constexpr auto pressDuration = 0x310; // float
			constexpr auto pressPowerTime = 0x314; // float
			constexpr auto pressPowerAmount = 0x318; // int32_t
			constexpr auto smallBurst = 0x31C; // bool
		}
		namespace PressButton_TrainTunnel
		{
			constexpr auto __menuOption_Menu_Press_TrainTunnel = 0x320; // Option
		}
		namespace ProceduralLift
		{
			constexpr auto __menuOption_Menu_UseLift = 0x168; // Option
			constexpr auto movementSpeed = 0x1D0; // float
			constexpr auto resetDelay = 0x1D4; // float
			constexpr auto cabin = 0x1D8; // ProceduralLiftCabin
			constexpr auto stops = 0x1E0; // ProceduralLiftStop[]
			constexpr auto triggerPrefab = 0x1E8; // GameObjectRef
			constexpr auto triggerBone = 0x1F0; // string
			constexpr auto floorIndex = 0x1F8; // int32_t
			constexpr auto startSoundDef = 0x200; // SoundDefinition
			constexpr auto stopSoundDef = 0x208; // SoundDefinition
			constexpr auto movementLoopSoundDef = 0x210; // SoundDefinition
			constexpr auto movementLoopSound = 0x218; // Sound
		}
		namespace ReactiveTarget
		{
			constexpr auto __menuOption_Lower_Target = 0x2A8; // Option
			constexpr auto __menuOption_Reset_target = 0x310; // Option
			constexpr auto myAnimator = 0x378; // Animator
			constexpr auto bullseyeEffect = 0x380; // GameObjectRef
			constexpr auto knockdownEffect = 0x388; // GameObjectRef
			constexpr auto activationPowerTime = 0x390; // float
			constexpr auto activationPowerAmount = 0x394; // int32_t
			constexpr auto lastToggleTime = 0x398; // float
		}
		namespace Recycler
		{
			constexpr auto __menuOption_Menu_TurnOff = 0x418; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x480; // Option
			constexpr auto Animator = 0x4E8; // Animator
			constexpr auto recycleEfficiency = 0x4F0; // float
			constexpr auto grindingLoopDef = 0x4F8; // SoundDefinition
			constexpr auto startSound = 0x500; // GameObjectRef
			constexpr auto stopSound = 0x508; // GameObjectRef
			constexpr auto lastFrameOn = 0x510; // bool
			constexpr auto grindingSoundModulator = 0x518; // Modulator
			constexpr auto grindingLoop = 0x520; // Sound
		}
		namespace RemoteControlEntity
		{
			constexpr auto __menuOption_Menu_SetID = 0x250; // Option
			constexpr auto rcIdentifier = 0x2B8; // string
			constexpr auto viewEyes = 0x2C0; // Transform
			constexpr auto IDPanelPrefab = 0x2C8; // GameObjectRef
			constexpr auto rcControls = 0x2D0; // RemoteControllableControls
		}
		namespace ResourceContainer
		{
			constexpr auto __menuOption_MenuLoot = 0x20; // Option
			constexpr auto lootable = 0x88; // bool
		}
		namespace RFBroadcaster
		{
			constexpr auto __menuOption_Menu_SetFreqency = 0x2A8; // Option
			constexpr auto frequency = 0x310; // int32_t
			constexpr auto frequencyPanelPrefab = 0x318; // GameObjectRef
			constexpr auto playerUsable = 0x320; // bool
		}
		namespace RFReceiver
		{
			constexpr auto __menuOption_Menu_SetFreqency = 0x2A8; // Option
			constexpr auto frequency = 0x310; // int32_t
			constexpr auto frequencyPanelPrefab = 0x318; // GameObjectRef
		}
		namespace RFTimedExplosive
		{
			constexpr auto __menuOption_Menu_Pickup = 0x1C0; // Option
			constexpr auto beepLoop = 0x228; // SoundPlayer
			constexpr auto creatorPlayerID = 0x230; // UInt64
			constexpr auto pickupDefinition = 0x238; // ItemDefinition
			constexpr auto minutesUntilDecayed = 0x240; // float
		}
		namespace RHIB
		{
			constexpr auto __menuOption_Release = 0x710; // Option
			constexpr auto steeringWheel = 0x778; // GameObject
			constexpr auto rhibpopulation = 0x0; // float
		}
		namespace RustigeEgg
		{
			constexpr auto __menuOption_Menu_Close = 0x250; // Option
			constexpr auto __menuOption_Menu_Open = 0x2B8; // Option
			constexpr auto __menuOption_Menu_Spin = 0x320; // Option
			constexpr auto __menuOption_Menu_StopSpin = 0x388; // Option
			constexpr auto eggRotationTransform = 0x3F0; // Transform
		}
		namespace SamSite
		{
			constexpr auto __menuOption_Menu_DisableDefenderMode = 0x3B8; // Option
			constexpr auto __menuOption_Menu_EnableDefenderMode = 0x420; // Option
			constexpr auto pitchAnimator = 0x488; // Animator
			constexpr auto yaw = 0x490; // GameObject
			constexpr auto pitch = 0x498; // GameObject
			constexpr auto gear = 0x4A0; // GameObject
			constexpr auto eyePoint = 0x4A8; // Transform
			constexpr auto gearEpislonDegrees = 0x4B0; // float
			constexpr auto turnSpeed = 0x4B4; // float
			constexpr auto clientLerpSpeed = 0x4B8; // float
			constexpr auto currentAimDir = 0x4BC; // Vector3
			constexpr auto targetAimDir = 0x4C8; // Vector3
			constexpr auto vehicleScanRadius = 0x4D4; // float
			constexpr auto missileScanRadius = 0x4D8; // float
			constexpr auto projectileTest = 0x4E0; // GameObjectRef
			constexpr auto muzzleFlashTest = 0x4E8; // GameObjectRef
			constexpr auto staticRespawn = 0x4F0; // bool
			constexpr auto ammoType = 0x4F8; // ItemDefinition
			constexpr auto tubes = 0x500; // Transform[]
			constexpr auto staticrepairseconds = 0x0; // float
			constexpr auto yawMovementLoopDef = 0x508; // SoundDefinition
			constexpr auto yawGainLerp = 0x510; // float
			constexpr auto yawGainMovementSpeedMult = 0x514; // float
			constexpr auto pitchMovementLoopDef = 0x518; // SoundDefinition
			constexpr auto pitchGainLerp = 0x520; // float
			constexpr auto pitchGainMovementSpeedMult = 0x524; // float
			constexpr auto lowAmmoThreshold = 0x528; // int32_t
			constexpr auto Flag_DefenderMode = 0x52C; // Flags
			constexpr auto yawMovementLoop = 0x530; // Sound
			constexpr auto pitchMovementLoop = 0x538; // Sound
			constexpr auto yawGainModulator = 0x540; // Modulator
			constexpr auto pitchGainModulator = 0x548; // Modulator
			constexpr auto previousYawAngle = 0x550; // float
			constexpr auto previousPitchAngle = 0x554; // float
		}
		namespace ScarecrowNPC
		{
			constexpr auto __menuOption_MenuDesignAI = 0x888; // Option
			constexpr auto Braink__BackingField = 0x8F0; // ScarecrowBrain
			constexpr auto BaseAttackRate = 0x8F8; // float
			constexpr auto LootSpawnSlots = 0x900; // LootSpawnSlot[]
			constexpr auto NextBeanCanAllowedTime = 0x0; // float
			constexpr auto BlockClothingOnCorpse = 0x908; // bool
			constexpr auto RoamAroundHomePoint = 0x909; // bool
		}
		namespace SearchLight
		{
			constexpr auto __menuOption_StopUseLight = 0x2A8; // Option
			constexpr auto __menuOption_UseLight = 0x310; // Option
			constexpr auto pitchObject = 0x378; // GameObject
			constexpr auto yawObject = 0x380; // GameObject
			constexpr auto eyePoint = 0x388; // GameObject
			constexpr auto turnLoop = 0x390; // SoundPlayer
			constexpr auto needsBuildingPrivilegeToUse = 0x398; // bool
			constexpr auto aimDir = 0x39C; // Vector3
			constexpr auto wasMoving = 0x3A8; // bool
		}
		namespace Signage
		{
			constexpr auto __menuOption_Menu_ChangeText = 0x2A8; // Option
			constexpr auto __menuOption_Menu_LockSign = 0x310; // Option
			constexpr auto __menuOption_Menu_UnLockSign = 0x378; // Option
			constexpr auto RequiredHeldEntity = 0x3E0; // ItemDefinition
			constexpr auto textureRequestDistance = 0x0; // float
			constexpr auto textureRequestSent = 0x3E8; // bool
			constexpr auto withinTextureRangek__BackingField = 0x3E9; // bool
			constexpr auto cell = 0x3F0; // LODCell
			constexpr auto changeTextDialog = 0x3F8; // GameObjectRef
			constexpr auto paintableSources = 0x400; // MeshPaintableSource[]
			constexpr auto textureIDs = 0x408; // uint32_t[]
			constexpr auto timeSinceRequest = 0x410; // RealTimeSince[]
			constexpr auto loadedTextures = 0x418; // uint32_t[]
		}
		namespace SleepingBag
		{
			constexpr auto __menuOption_Menu_AssignToFriend = 0x270; // Option
			constexpr auto __menuOption_Menu_CloseDoor = 0x2D8; // Option
			constexpr auto __menuOption_Menu_MakeBed = 0x340; // Option
			constexpr auto __menuOption_Menu_MakePrivate = 0x3A8; // Option
			constexpr auto __menuOption_Menu_MakePublic = 0x410; // Option
			constexpr auto deployerUserID = 0x478; // UInt64
			constexpr auto renameDialog = 0x480; // GameObject
			constexpr auto assignDialog = 0x488; // GameObject
			constexpr auto secondsBetweenReuses = 0x490; // float
			constexpr auto niceName = 0x498; // string
			constexpr auto spawnOffset = 0x4A0; // Vector3
			constexpr auto RespawnType = 0x4AC; // RespawnType
			constexpr auto isStatic = 0x4B0; // bool
			constexpr auto canBePublic = 0x4B1; // bool
			constexpr auto bagLimitPhrase = 0x0; // Phrase
			constexpr auto bagLimitReachedPhrase = 0x8; // Phrase
			constexpr auto assignOtherBagPhrase = 0x4B8; // Phrase
			constexpr auto assignedBagPhrase = 0x4C0; // Phrase
			constexpr auto cannotAssignBedPhrase = 0x4C8; // Phrase
			constexpr auto cannotMakeBedPhrase = 0x4D0; // Phrase
			constexpr auto bedAssigningBlocked = 0x4D8; // Phrase
		}
		namespace SlotMachine
		{
			constexpr auto __menuOption_Menu_Deposit = 0x350; // Option
			constexpr auto __menuOption_Menu_Spin = 0x3B8; // Option
			constexpr auto ForcePayoutIndex = 0x0; // int32_t
			constexpr auto Reel1 = 0x420; // Transform
			constexpr auto Reel2 = 0x428; // Transform
			constexpr auto Reel3 = 0x430; // Transform
			constexpr auto Arm = 0x438; // Transform
			constexpr auto Curve = 0x440; // AnimationCurve
			constexpr auto Reel1Spins = 0x448; // int32_t
			constexpr auto Reel2Spins = 0x44C; // int32_t
			constexpr auto Reel3Spins = 0x450; // int32_t
			constexpr auto MaxReelSpins = 0x454; // int32_t
			constexpr auto SpinDuration = 0x458; // float
			constexpr auto SpinResult1 = 0x45C; // int32_t
			constexpr auto SpinResult2 = 0x460; // int32_t
			constexpr auto SpinResult3 = 0x464; // int32_t
			constexpr auto SpinResultPrevious1 = 0x468; // int32_t
			constexpr auto SpinResultPrevious2 = 0x46C; // int32_t
			constexpr auto SpinResultPrevious3 = 0x470; // int32_t
			constexpr auto SpinTime = 0x474; // float
			constexpr auto StoragePrefab = 0x478; // GameObjectRef
			constexpr auto StorageInstance = 0x480; // EntityRef
			constexpr auto SpinSound = 0x490; // SoundDefinition
			constexpr auto PayoutDisplay = 0x498; // SlotMachinePayoutDisplay
			constexpr auto PayoutSettings = 0x4A0; // SlotMachinePayoutSettings
			constexpr auto HandIkTarget = 0x4A8; // Transform
			constexpr auto PayoutIconMaterial = 0x4B0; // Material
			constexpr auto UseTimeOfDayAdjustedSprite = 0x4B8; // bool
			constexpr auto PulseRenderers = 0x4C0; // MeshRenderer[]
			constexpr auto PulseSpeed = 0x4C8; // float
			constexpr auto PulseFrom = 0x4CC; // Color
			constexpr auto PulseTo = 0x4DC; // Color
			constexpr auto CurrentMultiplierk__BackingField = 0x4EC; // int32_t
			constexpr auto lastWin = 0x4F0; // TimeSince
			constexpr auto instancedPulseMaterial = 0x4F8; // Material
			constexpr auto pulseTime = 0x500; // TimeSince
			constexpr auto pulseFor = 0x504; // float
			constexpr auto emissionId = 0x4; // int32_t
			constexpr auto InitialArmRotation = 0x508; // Quaternion
		}
		namespace SmartAlarm
		{
			constexpr auto __menuOption_MenuSetupNotification = 0x310; // Option
			constexpr auto DefaultNotificationTitle = 0x0; // Phrase
			constexpr auto DefaultNotificationBody = 0x8; // Phrase
			constexpr auto SetupNotificationDialog = 0x378; // GameObjectRef
			constexpr auto Animator = 0x380; // Animator
			constexpr auto AnimatorOn = 0x10; // int32_t
		}
		namespace SmartSwitch
		{
			constexpr auto __menuOption_Menu_TurnOff = 0x310; // Option
			constexpr auto __menuOption_Menu_TurnOn = 0x378; // Option
			constexpr auto ReceiverAnimator = 0x3E0; // Animator
			constexpr auto ReceiverNoPower = 0x0; // int32_t
			constexpr auto ReceiverOn = 0x4; // int32_t
		}
		namespace Snowmobile
		{
			constexpr auto __menuOption_Menu_FuelStorage = 0x450; // Option
			constexpr auto __menuOption_Menu_ItemStorage = 0x4B8; // Option
			constexpr auto __menuOption_Menu_Push = 0x520; // Option
			constexpr auto timeSinceLastUpdate = 0x588; // TimeSince
			constexpr auto treadFLData = 0x590; // ClientWheelData
			constexpr auto treadFRData = 0x598; // ClientWheelData
			constexpr auto treadRLData = 0x5A0; // ClientWheelData
			constexpr auto treadRRData = 0x5A8; // ClientWheelData
			constexpr auto skiLData = 0x5B0; // ClientWheelData
			constexpr auto skiRData = 0x5B8; // ClientWheelData
			constexpr auto clientSteerInput = 0x5C0; // float
			constexpr auto clientDriveWheelVelocity = 0x5C4; // float
			constexpr auto clientDriveWheelSlip = 0x5C8; // float
			constexpr auto wasBraking = 0x5CC; // bool
			constexpr auto leanVector = 0x5D0; // Vector3
			constexpr auto recentVels = 0x5E0; // Vector3[]
			constexpr auto recentVelsIndex = 0x5E8; // int32_t
			constexpr auto timeSinceFailedStartAttempt = 0x5EC; // TimeSince
			constexpr auto centreOfMassTransform = 0x5F0; // Transform
			constexpr auto itemStoragePrefab = 0x5F8; // GameObjectRef
			constexpr auto wheelSkiFL = 0x600; // VisualCarWheel
			constexpr auto wheelSkiFR = 0x608; // VisualCarWheel
			constexpr auto wheelTreadFL = 0x610; // VisualCarWheel
			constexpr auto wheelTreadFR = 0x618; // VisualCarWheel
			constexpr auto wheelTreadRL = 0x620; // VisualCarWheel
			constexpr auto wheelTreadRR = 0x628; // VisualCarWheel
			constexpr auto carSettings = 0x630; // CarSettings
			constexpr auto engineKW = 0x638; // int32_t
			constexpr auto idleFuelPerSec = 0x63C; // float
			constexpr auto maxFuelPerSec = 0x640; // float
			constexpr auto airControlStability = 0x644; // float
			constexpr auto airControlPower = 0x648; // float
			constexpr auto badTerrainDrag = 0x64C; // float
			constexpr auto riderProtection = 0x650; // ProtectionProperties
			constexpr auto hurtTriggerMinSpeed = 0x658; // float
			constexpr auto hurtTriggerFront = 0x660; // TriggerHurtNotChild
			constexpr auto hurtTriggerRear = 0x668; // TriggerHurtNotChild
			constexpr auto minGroundFXSpeed = 0x670; // float
			constexpr auto chassisVisuals = 0x678; // SnowmobileChassisVisuals
			constexpr auto lights = 0x680; // VehicleLight[]
			constexpr auto steeringLeftIK = 0x688; // Transform
			constexpr auto steeringRightIK = 0x690; // Transform
			constexpr auto leftFootIK = 0x698; // Transform
			constexpr auto rightFootIK = 0x6A0; // Transform
			constexpr auto starterKey = 0x6A8; // Transform
			constexpr auto engineOffKeyRot = 0x6B0; // Vector3
			constexpr auto engineOnKeyRot = 0x6BC; // Vector3
			constexpr auto outsideDecayMinutes = 0x0; // float
			constexpr auto allowPassengerOnly = 0x4; // bool
			constexpr auto allTerrain = 0x5; // bool
			constexpr auto _throttle = 0x6C8; // float
			constexpr auto _brake = 0x6CC; // float
			constexpr auto _steer = 0x6D0; // float
			constexpr auto _mass = 0x6D4; // float
			constexpr auto itemStorageInstance = 0x6D8; // EntityRef`1
			constexpr auto cachedFuelFraction = 0x6E8; // float
		}
		namespace SpinnerWheel
		{
			constexpr auto __menuOption_Menu_LockSpin = 0x420; // Option
			constexpr auto __menuOption_Menu_Spin = 0x488; // Option
			constexpr auto __menuOption_Menu_UnlockSpin = 0x4F0; // Option
			constexpr auto wheel = 0x558; // Transform
			constexpr auto velocity = 0x560; // float
			constexpr auto targetRotation = 0x564; // Quaternion
			constexpr auto spinLoopSoundDef = 0x578; // SoundDefinition
			constexpr auto spinStartSoundDef = 0x580; // SoundDefinition
			constexpr auto spinAccentSoundDef = 0x588; // SoundDefinition
			constexpr auto spinStopSoundDef = 0x590; // SoundDefinition
			constexpr auto minTimeBetweenSpinAccentSounds = 0x598; // float
			constexpr auto spinAccentAngleDelta = 0x59C; // float
			constexpr auto spinSound = 0x5A0; // Sound
			constexpr auto spinSoundGain = 0x5A8; // Modulator
			constexpr auto angleRotated = 0x5B0; // float
			constexpr auto lastSpinSound = 0x5B4; // float
			constexpr auto clientSpinSpeed = 0x5B8; // float
		}
		namespace SpookySpeaker
		{
			constexpr auto __menuOption_Menu_SoundOff = 0x250; // Option
			constexpr auto __menuOption_Menu_SoundOn = 0x2B8; // Option
			constexpr auto soundPlayer = 0x320; // SoundPlayer
			constexpr auto soundSpacing = 0x328; // float
			constexpr auto soundSpacingRand = 0x32C; // float
		}
		namespace SprayCanSpray
		{
			constexpr auto __menuOption_Menu_WaterClear = 0x270; // Option
		}
		namespace StashContainer
		{
			constexpr auto __menuOption_Menu_HideStash = 0x418; // Option
			constexpr auto visuals = 0x480; // Transform
			constexpr auto burriedOffset = 0x488; // float
			constexpr auto raisedOffset = 0x48C; // float
			constexpr auto buryEffect = 0x490; // GameObjectRef
			constexpr auto uncoverRange = 0x498; // float
		}
		namespace StorageContainer
		{
			constexpr auto __menuOption_Menu_Occupied = 0x270; // Option
			constexpr auto __menuOption_Menu_OnFire = 0x2D8; // Option
			constexpr auto __menuOption_Menu_Open = 0x340; // Option
			constexpr auto LockedMessage = 0x0; // Phrase
			constexpr auto InUseMessage = 0x8; // Phrase
			constexpr auto inventorySlots = 0x3A8; // int32_t
			constexpr auto dropsLoot = 0x3AC; // bool
			constexpr auto dropLootDestroyPercent = 0x3B0; // float
			constexpr auto dropFloats = 0x3B4; // bool
			constexpr auto isLootable = 0x3B5; // bool
			constexpr auto isLockable = 0x3B6; // bool
			constexpr auto isMonitorable = 0x3B7; // bool
			constexpr auto panelName = 0x3B8; // string
			constexpr auto panelTitle = 0x3C0; // Phrase
			constexpr auto allowedContents = 0x3C8; // ContentsType
			constexpr auto allowedItem = 0x3D0; // ItemDefinition
			constexpr auto allowedItem2 = 0x3D8; // ItemDefinition
			constexpr auto maxStackSize = 0x3E0; // int32_t
			constexpr auto needsBuildingPrivilegeToUse = 0x3E4; // bool
			constexpr auto mustBeMountedToUse = 0x3E5; // bool
			constexpr auto openSound = 0x3E8; // SoundDefinition
			constexpr auto closeSound = 0x3F0; // SoundDefinition
			constexpr auto dropPosition = 0x3F8; // Vector3
			constexpr auto dropVelocity = 0x404; // Vector3
			constexpr auto onlyAcceptCategory = 0x410; // ItemCategory
			constexpr auto onlyOneUser = 0x414; // bool
		}
		namespace SubmarineDuo
		{
			constexpr auto __menuOption_Menu_SwapSeats = 0x780; // Option
			constexpr auto steeringWheel = 0x7E8; // Transform
			constexpr auto steeringWheelLeftGrip = 0x7F0; // Transform
			constexpr auto steeringWheelRightGrip = 0x7F8; // Transform
			constexpr auto leftPedal = 0x800; // Transform
			constexpr auto rightPedal = 0x808; // Transform
			constexpr auto driverLeftFoot = 0x810; // Transform
			constexpr auto driverRightFoot = 0x818; // Transform
			constexpr auto mphNeedle = 0x820; // Transform
			constexpr auto fuelNeedle = 0x828; // Transform
			constexpr auto waterDepthNeedle = 0x830; // Transform
			constexpr auto ammoFlag = 0x838; // Transform
			constexpr auto sonar = 0x840; // SubmarineSonar
			constexpr auto torpedoTubeHatch = 0x848; // Transform
			constexpr auto smoothedSpeed = 0x850; // float
			constexpr auto flagLerp = 0x854; // float
			constexpr auto flagState = 0x858; // FlagState
			constexpr auto torpedoJustFired = 0x85C; // bool
			constexpr auto torpedoDoorState = 0x860; // TorpedoDoorState
			constexpr auto torpedoVec = 0x864; // Vector3
		}
		namespace SurveyCrater
		{
			constexpr auto __menuOption_Menu_AnalysisComplete = 0x250; // Option
			constexpr auto resourceDispenser = 0x2B8; // ResourceDispenser
		}
		namespace Telephone
		{
			constexpr auto __menuOption_Menu_Answer = 0x3B8; // Option
			constexpr auto __menuOption_Menu_MakeCall = 0x420; // Option
			constexpr auto PhoneHotspot = 0x488; // Transform
			constexpr auto AnsweringMachineHotspot = 0x490; // Transform
			constexpr auto HandsetRoots = 0x498; // Transform[]
			constexpr auto ValidCassettes = 0x4A0; // ItemDefinition[]
			constexpr auto ParentedHandsetTransform = 0x4A8; // Transform
			constexpr auto CableLineRenderer = 0x4B0; // LineRenderer
			constexpr auto CableStartPoint = 0x4B8; // Transform
			constexpr auto CableEndPoint = 0x4C0; // Transform
			constexpr auto LineDroopAmount = 0x4C8; // float
			constexpr auto cachedCassettek__BackingField = 0x4D0; // Cassette
			constexpr auto Controller = 0x4D8; // PhoneController
			constexpr auto cablePoints = 0x4E0; // Vector3[]
			constexpr auto censoredNumbers = 0x0; // CensoredNumbers
		}
		namespace TimerSwitch
		{
			constexpr auto __menuOption_Menu_TurnOn = 0x2A8; // Option
			constexpr auto timerLength = 0x310; // float
			constexpr auto timerDrum = 0x318; // Transform
			constexpr auto timePassed = 0x320; // float
			constexpr auto oldTimeFraction = 0x324; // float
		}
		namespace TrainCar
		{
			constexpr auto __menuOption_Menu_Uncouple = 0x400; // Option
			constexpr auto animInterp = 0x468; // GenericLerp`1
			constexpr auto runningClientTick = 0x470; // bool
			constexpr auto bogieRotation = 0x474; // Vector3
			constexpr auto prevWheelRotation = 0x480; // Vector3
			constexpr auto corpseSeconds = 0x48C; // float
			constexpr auto frontCollisionTrigger = 0x490; // TriggerTrainCollisions
			constexpr auto rearCollisionTrigger = 0x498; // TriggerTrainCollisions
			constexpr auto collisionDamageDivide = 0x4A0; // float
			constexpr auto derailCollisionForce = 0x4A4; // float
			constexpr auto hurtTriggerFront = 0x4A8; // TriggerHurtNotChild
			constexpr auto hurtTriggerRear = 0x4B0; // TriggerHurtNotChild
			constexpr auto hurtOrRepelTriggersInternal = 0x4B8; // GameObject[]
			constexpr auto hurtTriggerMinSpeed = 0x4C0; // float
			constexpr auto centreOfMassTransform = 0x4C8; // Transform
			constexpr auto frontBogiePivot = 0x4D0; // Transform
			constexpr auto frontBogieCanRotate = 0x4D8; // bool
			constexpr auto rearBogiePivot = 0x4E0; // Transform
			constexpr auto rearBogieCanRotate = 0x4E8; // bool
			constexpr auto wheelVisuals = 0x4F0; // Transform[]
			constexpr auto wheelRadius = 0x4F8; // float
			constexpr auto fxDestroyed = 0x500; // GameObjectRef
			constexpr auto platformParentTrigger = 0x508; // TriggerParent
			constexpr auto collisionEffect = 0x510; // GameObjectRef
			constexpr auto frontCoupling = 0x518; // Transform
			constexpr auto frontCouplingPivot = 0x520; // Transform
			constexpr auto rearCoupling = 0x528; // Transform
			constexpr auto rearCouplingPivot = 0x530; // Transform
			constexpr auto coupleSound = 0x538; // SoundDefinition
			constexpr auto uncoupleSound = 0x540; // SoundDefinition
			constexpr auto trainCarAudio = 0x548; // TrainCarAudio
			constexpr auto frontCouplingChangedFx = 0x550; // ParticleSystem
			constexpr auto rearCouplingChangedFx = 0x558; // ParticleSystem
			constexpr auto newCouplingFX = 0x560; // ParticleSystem
			constexpr auto decayTimeMultiplier = 0x568; // float
			constexpr auto frontBogieLocalOffset = 0x56C; // Vector3
			constexpr auto rearBogieLocalOffset = 0x578; // Vector3
			constexpr auto population = 0x0; // float
			constexpr auto wagons_per_engine = 0x4; // int32_t
			constexpr auto decayminutes = 0x8; // float
			constexpr auto DistFrontWheelToFrontCoupling = 0x584; // float
			constexpr auto DistFrontWheelToBackCoupling = 0x588; // float
			constexpr auto coupling = 0x590; // TrainCouplingController
			constexpr auto localTrackSelection = 0x598; // TrackSelection
		}
		namespace TrainCarUnloadable
		{
			constexpr auto __menuOption_Menu_Open = 0x5A0; // Option
			constexpr auto storagePrefab = 0x608; // GameObjectRef
			constexpr auto unloadingAreas = 0x610; // BoxCollider[]
			constexpr auto fuelHatches = 0x618; // TrainCarFuelHatches
			constexpr auto orePlaneVisuals = 0x620; // Transform
			constexpr auto orePlaneColliderDetailed = 0x628; // Transform
			constexpr auto orePlaneColliderWorld = 0x630; // Transform
			constexpr auto vacuumStretchPercent = 0x638; // float
			constexpr auto unloadingFXContainer = 0x640; // ParticleSystemContainer
			constexpr auto unloadingFX = 0x648; // ParticleSystem
			constexpr auto wagonType = 0x650; // WagonType
			constexpr auto lootTypeIndex = 0x654; // int32_t
			constexpr auto lootContainers = 0x658; // List`1
			constexpr auto _oreScale = 0x660; // Vector3
			constexpr auto animPercent = 0x66C; // float
			constexpr auto prevAnimTime = 0x670; // float
			constexpr auto decayminutesafterunload = 0x0; // float
			constexpr auto orePlaneRenderers = 0x678; // List`1
			constexpr auto clientOrePercentFull = 0x680; // float
		}
		namespace TrainEngine
		{
			constexpr auto __menuOption_Menu_FuelStorage = 0x5A0; // Option
			constexpr auto clientFuelAmount = 0x608; // int32_t
			constexpr auto clientNumConnectedCars = 0x60C; // int32_t
			constexpr auto clientLinedUpToUnload = 0x610; // int32_t
			constexpr auto lastUpdateHealth = 0x614; // float
			constexpr auto monitorTextStr = 0x618; // stringBuilder
			constexpr auto wasBraking = 0x620; // bool
			constexpr auto highlightCouplingInfo = 0x621; // bool
			constexpr auto movementState = 0x624; // TrainMovementState
			constexpr auto prevLightVisualsState = 0x628; // Nullable`1
			constexpr auto prevLightVisualsOnState = 0x630; // Nullable`1
			constexpr auto prevLightVisualsHeadlightOnState = 0x632; // Nullable`1
			constexpr auto leftHandLever = 0x638; // Transform
			constexpr auto rightHandLever = 0x640; // Transform
			constexpr auto leftHandGrip = 0x648; // Transform
			constexpr auto rightHandGrip = 0x650; // Transform
			constexpr auto leverStyle = 0x658; // LeverStyle
			constexpr auto monitorCanvas = 0x660; // Canvas
			constexpr auto monitorText = 0x668; // RustText
			constexpr auto gauges = 0x670; // LocomotiveExtraVisuals
			constexpr auto engineForce = 0x678; // float
			constexpr auto maxSpeed = 0x67C; // float
			constexpr auto engineStartupTime = 0x680; // float
			constexpr auto fuelStoragePrefab = 0x688; // GameObjectRef
			constexpr auto idleFuelPerSec = 0x690; // float
			constexpr auto maxFuelPerSec = 0x694; // float
			constexpr auto driverProtection = 0x698; // ProtectionProperties
			constexpr auto lootablesAreOnPlatform = 0x6A0; // bool
			constexpr auto mustMountFromPlatform = 0x6A1; // bool
			constexpr auto onLights = 0x6A8; // VehicleLight[]
			constexpr auto headlights = 0x6B0; // VehicleLight[]
			constexpr auto notMovingLights = 0x6B8; // VehicleLight[]
			constexpr auto movingForwardLights = 0x6C0; // VehicleLight[]
			constexpr auto movingBackwardLights = 0x6C8; // VehicleLight[]
			constexpr auto fxEngineOn = 0x6D0; // ParticleSystemContainer
			constexpr auto fxLightDamage = 0x6D8; // ParticleSystemContainer
			constexpr auto fxMediumDamage = 0x6E0; // ParticleSystemContainer
			constexpr auto fxHeavyDamage = 0x6E8; // ParticleSystemContainer
			constexpr auto fxEngineTrouble = 0x6F0; // ParticleSystemContainer
			constexpr auto engineWorldCol = 0x6F8; // BoxCollider
			constexpr auto engineDamageToSlow = 0x700; // float
			constexpr auto engineDamageTimeframe = 0x704; // float
			constexpr auto engineSlowedTime = 0x708; // float
			constexpr auto engineSlowedMaxVel = 0x70C; // float
			constexpr auto sparks = 0x710; // ParticleSystemContainer[]
			constexpr auto sparkLights = 0x718; // Light[]
			constexpr auto trainAudio = 0x720; // TrainEngineAudio
			constexpr auto engineController = 0x728; // VehicleEngineController`1
			constexpr auto CurThrottleSettingk__BackingField = 0x730; // EngineSpeeds
		}
		namespace TwitchTrophy
		{
			constexpr auto __menuOption_Menu_OpenTrophy = 0x250; // Option
			constexpr auto DialogPrefab = 0x2B8; // GameObjectRef
		}
		namespace VehicleModuleCamper
		{
			constexpr auto __menuOption_Menu_AssignToFriend = 0x698; // Option
			constexpr auto __menuOption_Menu_ClearBedOwner = 0x700; // Option
			constexpr auto __menuOption_Menu_MakeBed = 0x768; // Option
			constexpr auto __menuOption_Menu_OpenLocker = 0x7D0; // Option
			constexpr auto __menuOption_Menu_OpenStorage = 0x838; // Option
			constexpr auto __menuOption_Menu_Rename = 0x8A0; // Option
			constexpr auto SleepingBagEntity = 0x908; // GameObjectRef
			constexpr auto SleepingBagPoints = 0x910; // Transform[]
			constexpr auto LockerEntity = 0x918; // GameObjectRef
			constexpr auto LockerPoint = 0x920; // Transform
			constexpr auto BbqEntity = 0x928; // GameObjectRef
			constexpr auto BbqPoint = 0x930; // Transform
			constexpr auto StorageEntity = 0x938; // GameObjectRef
			constexpr auto StoragePoint = 0x940; // Transform
			constexpr auto activeBbq = 0x948; // EntityRef`1
			constexpr auto activeLocker = 0x958; // EntityRef`1
			constexpr auto activeStorage = 0x968; // EntityRef`1
		}
		namespace VehicleModuleSeating
		{
			constexpr auto __menuOption_Menu_DestroyLock = 0x598; // Option
			constexpr auto passengerProtection = 0x600; // ProtectionProperties
			constexpr auto codeLockVisuals = 0x608; // ModularCarCodeLockVisuals
			constexpr auto seating = 0x610; // Seating
			constexpr auto steerAngle = 0x618; // Vector3
			constexpr auto accelAngle = 0x624; // Vector3
			constexpr auto brakeAngle = 0x630; // Vector3
			constexpr auto speedometerAngle = 0x63C; // Vector3
			constexpr auto fuelAngle = 0x648; // Vector3
			constexpr auto hornLoop = 0x658; // SoundDefinition
			constexpr auto hornStart = 0x660; // SoundDefinition
			constexpr auto activeHorn = 0x668; // Sound
			constexpr auto steerPercent = 0x670; // float
			constexpr auto throttlePercent = 0x674; // float
			constexpr auto brakePercent = 0x678; // float
			constexpr auto checkEngineLightOn = 0x67C; // Nullable`1
			constexpr auto fuelLightOn = 0x67E; // Nullable`1
			constexpr auto Cark__BackingField = 0x680; // ModularCar
			constexpr auto VehicleLockUser = 0x688; // IVehicleLockUser
			constexpr auto dashboardLightPB = 0x690; // MaterialPropertyBlock
			constexpr auto emissionColorID = 0x0; // int32_t
		}
		namespace VehicleModuleStorage
		{
			constexpr auto __menuOption_Menu_Open = 0x698; // Option
			constexpr auto storage = 0x700; // Storage
			constexpr auto storageUnitInstance = 0x708; // EntityRef
		}
		namespace VehicleModuleTaxi
		{
			constexpr auto __menuOption_Menu_Kick_Passengers = 0x718; // Option
			constexpr auto kickButtonSound = 0x780; // SoundDefinition
			constexpr auto kickButtonCollider = 0x788; // SphereCollider
			constexpr auto maxKickVelocity = 0x790; // float
		}
		namespace VendingMachine
		{
			constexpr auto __menuOption_Menu_BroadcastOff = 0x418; // Option
			constexpr auto __menuOption_Menu_BroadcastOn = 0x480; // Option
			constexpr auto __menuOption_Menu_OpenAdmin = 0x4E8; // Option
			constexpr auto __menuOption_Menu_RotateVM = 0x550; // Option
			constexpr auto __menuOption_Menu_Shop = 0x5B8; // Option
			constexpr auto WaitForVendingMessage = 0x0; // Phrase
			constexpr auto adminMenuPrefab = 0x620; // GameObjectRef
			constexpr auto customerPanel = 0x628; // string
			constexpr auto sellOrders = 0x630; // SellOrderContainer
			constexpr auto buySound = 0x638; // SoundPlayer
			constexpr auto shopName = 0x640; // string
			constexpr auto mapMarkerPrefab = 0x648; // GameObjectRef
			constexpr auto blueprintBaseDef = 0x650; // ItemDefinition
			constexpr auto scheduledPhysSounds = 0x658; // List`1
		}
		namespace WaterWell
		{
			constexpr auto __menuOption_Menu_Pump = 0x448; // Option
			constexpr auto animator = 0x4B0; // Animator
			constexpr auto caloriesPerPump = 0x4B8; // float
			constexpr auto pressurePerPump = 0x4BC; // float
			constexpr auto pressureForProduction = 0x4C0; // float
			constexpr auto currentPressure = 0x4C4; // float
			constexpr auto waterPerPump = 0x4C8; // int32_t
			constexpr auto waterLevelObj = 0x4D0; // GameObject
			constexpr auto waterLevelObjFullOffset = 0x4D8; // float
			constexpr auto cachedWaterLevel = 0x4DC; // float
		}
		namespace WheelSwitch
		{
			constexpr auto __menuOption_Menu_Turn = 0x2A8; // Option
			constexpr auto wheelObj = 0x310; // Transform
			constexpr auto rotateSpeed = 0x318; // float
			constexpr auto BeingRotated = 0x31C; // Flags
			constexpr auto RotatingLeft = 0x320; // Flags
			constexpr auto RotatingRight = 0x324; // Flags
			constexpr auto rotateProgress = 0x328; // float
			constexpr auto animator = 0x330; // Animator
			constexpr auto kineticEnergyPerSec = 0x338; // float
			constexpr auto rotatorPlayer = 0x340; // BasePlayer
			constexpr auto animProgress = 0x348; // float
		}
		namespace Workbench
		{
			constexpr auto __menuOption_UseBench = 0x418; // Option
			constexpr auto Static = 0x480; // bool
			constexpr auto Workbenchlevel = 0x484; // int32_t
			constexpr auto experimentalItems = 0x488; // LootSpawn
			constexpr auto experimentStartEffect = 0x490; // GameObjectRef
			constexpr auto experimentSuccessEffect = 0x498; // GameObjectRef
			constexpr auto experimentResource = 0x4A0; // ItemDefinition
			constexpr auto techTree = 0x4A8; // TechTreeData
			constexpr auto supportsIndustrialCrafter = 0x4B0; // bool
		}
		namespace ZiplineLaunchPoint
		{
			constexpr auto __menuOption_Menu_MountZipline = 0x168; // Option
			constexpr auto LineDeparturePoint = 0x1D0; // Transform
			constexpr auto ZiplineRenderer = 0x1D8; // LineRenderer
			constexpr auto MountCollider = 0x1E0; // Collider
			constexpr auto BuildingBlocks = 0x1E8; // BoxCollider[]
			constexpr auto PointBuildingBlocks = 0x1F0; // BoxCollider[]
			constexpr auto SpawnableBoundsBlockers = 0x1F8; // SpawnableBoundsBlocker[]
			constexpr auto MountableRef = 0x200; // GameObjectRef
			constexpr auto LineSlackAmount = 0x208; // float
			constexpr auto RegenLine = 0x20C; // bool
			constexpr auto ziplineTargets = 0x210; // List`1
			constexpr auto linePoints = 0x218; // List`1
			constexpr auto ArrivalPointRef = 0x220; // GameObjectRef
			constexpr auto hasSetupLineRenderer = 0x228; // bool
		}
		namespace BaseAIBrain
		{
			constexpr auto SendClientCurrentState = 0x20; // bool
			constexpr auto UseQueuedMovementUpdates = 0x21; // bool
			constexpr auto AllowedToSleep = 0x22; // bool
			constexpr auto DefaultDesignSO = 0x28; // AIDesignSO
			constexpr auto Designs = 0x30; // List`1
			constexpr auto InstanceSpecificDesign = 0x38; // AIDesign
			constexpr auto SenseRange = 0x40; // float
			constexpr auto AttackRangeMultiplier = 0x44; // float
			constexpr auto TargetLostRange = 0x48; // float
			constexpr auto VisionCone = 0x4C; // float
			constexpr auto CheckVisionCone = 0x50; // bool
			constexpr auto CheckLOS = 0x51; // bool
			constexpr auto IgnoreNonVisionSneakers = 0x52; // bool
			constexpr auto IgnoreSneakersMaxDistance = 0x54; // float
			constexpr auto IgnoreNonVisionMaxDistance = 0x58; // float
			constexpr auto ListenRange = 0x5C; // float
			constexpr auto SenseTypes = 0x60; // EntityType
			constexpr auto HostileTargetsOnly = 0x64; // bool
			constexpr auto IgnoreSafeZonePlayers = 0x65; // bool
			constexpr auto MaxGroupSize = 0x68; // int32_t
			constexpr auto MemoryDuration = 0x6C; // float
			constexpr auto RefreshKnownLOS = 0x70; // bool
			constexpr auto CanBeBlinded = 0x71; // bool
			constexpr auto BlindDurationMultiplier = 0x74; // float
			constexpr auto CurrentStatek__BackingField = 0x78; // BasicAIState
			constexpr auto ClientCurrentState = 0x80; // AIState
			constexpr auto mainInterestPoint = 0x84; // Vector3
			constexpr auto ThinkModek__BackingField = 0x90; // AIThinkMode
			constexpr auto Agek__BackingField = 0x94; // float
			constexpr auto Sensesk__BackingField = 0x98; // AIBrainSenses
			constexpr auto PathFinderk__BackingField = 0xA0; // BasePathFinder
			constexpr auto UseAIDesign = 0xA8; // bool
			constexpr auto Eventsk__BackingField = 0xB0; // AIEvents
			constexpr auto AIDesignk__BackingField = 0xB8; // AIDesign
			constexpr auto DesigningPlayerk__BackingField = 0xC0; // BasePlayer
			constexpr auto OwningPlayerk__BackingField = 0xC8; // BasePlayer
			constexpr auto IsGroupLeaderk__BackingField = 0xD0; // bool
			constexpr auto IsGroupedk__BackingField = 0xD1; // bool
			constexpr auto GroupLeaderk__BackingField = 0xD8; // IAIGroupable
			constexpr auto Pet = 0xE0; // bool
			constexpr auto groupMembers = 0xE8; // List`1
			constexpr auto CanUseHealingItems = 0xF0; // bool
			constexpr auto HealChance = 0xF4; // float
			constexpr auto HealBelowHealthFraction = 0xF8; // float
		}
		namespace BaseEntity
		{
			constexpr auto ragdoll = 0x78; // Ragdoll
			constexpr auto positionLerp = 0x80; // PositionLerp
			constexpr auto menuOptions = 0x88; // List`1
			constexpr auto bounds = 0x90; // Bounds
			constexpr auto impactEffect = 0xA8; // GameObjectRef
			constexpr auto enableSaving = 0xB0; // bool
			constexpr auto syncPosition = 0xB1; // bool
			constexpr auto model = 0xB8; // Model
			constexpr auto flags = 0xC0; // Flags
			constexpr auto parentBone = 0xC4; // uint32_t
			constexpr auto skinID = 0xC8; // UInt64
			constexpr auto _components = 0xD0; // EntityComponentBase[]
			constexpr auto HasBrain = 0xD8; // bool
			constexpr auto _name = 0xE0; // string
			constexpr auto OwnerIDk__BackingField = 0xE8; // UInt64
			constexpr auto globalBroadcastQueue = 0x0; // Queue`1
			constexpr auto globalBroadcastProtocol = 0x8; // uint32_t
			constexpr auto broadcastProtocol = 0xF0; // uint32_t
			constexpr auto links = 0xF8; // List`1
			constexpr auto linkedToNeighbours = 0x100; // bool
			constexpr auto QueuedFileRequests = 0x10; // Queue`1
			constexpr auto _fileRequestCounter = 0x18; // TimeAverageValueData
			constexpr auto _flushQueuedFileRequests = 0x30; // Action
			constexpr auto _pendingFileRequests = 0x108; // List`1
			constexpr auto updateParentingAction = 0x110; // Action
			constexpr auto addedToParentEntity = 0x118; // BaseEntity
			constexpr auto itemSkin = 0x120; // ItemSkin
			constexpr auto entitySlots = 0x128; // EntityRef[]
			constexpr auto triggers = 0x130; // List`1
			constexpr auto isVisible = 0x138; // bool
			constexpr auto isAnimatorVisible = 0x139; // bool
			constexpr auto isShadowVisible = 0x13A; // bool
			constexpr auto localOccludee = 0x140; // OccludeeSphere
			constexpr auto Weightk__BackingField = 0x160; // float
		}
		namespace BaseFishingRod
		{
			constexpr auto FishingBobberRef = 0x1F8; // GameObjectRef
			constexpr auto FishCatchDistance = 0x200; // float
			constexpr auto ReelLineRenderer = 0x208; // LineRenderer
			constexpr auto LineRendererWorldStartPos = 0x210; // Transform
			constexpr auto CurrentStatek__BackingField = 0x218; // CatchState
			constexpr auto currentFishState = 0x21C; // FishState
			constexpr auto currentBobber = 0x220; // EntityRef`1
			constexpr auto ConditionLossOnSuccess = 0x230; // float
			constexpr auto ConditionLossOnFail = 0x234; // float
			constexpr auto GlobalStrainSpeedMultiplier = 0x238; // float
			constexpr auto MaxCastDistance = 0x23C; // float
			constexpr auto ForceFish = 0x240; // ItemModFishable
			constexpr auto PullingLeftFlag = 0x0; // Flags
			constexpr auto PullingRightFlag = 0x4; // Flags
			constexpr auto ReelingInFlag = 0x8; // Flags
			constexpr auto BobberPreview = 0x248; // GameObjectRef
			constexpr auto onLineSoundDef = 0x250; // SoundDefinition
			constexpr auto strainSoundDef = 0x258; // SoundDefinition
			constexpr auto strainGainCurve = 0x260; // AnimationCurve
			constexpr auto tensionBreakSoundDef = 0x268; // SoundDefinition
			constexpr auto ShowUI = 0xC; // bool
			constexpr auto lineRendererPositionsArray = 0x270; // Vector3[]
			constexpr auto lineRendererResultArray = 0x278; // Vector3[]
			constexpr auto lineRendererSlack = 0x280; // float[]
			constexpr auto clientStrainAmountNormalised = 0x288; // float
			constexpr auto canCancel = 0x28C; // TimeUntil
			constexpr auto rodViewModel = 0x290; // FishingRodViewmodel
			constexpr auto spawnedPreview = 0x298; // BobberPreview
			constexpr auto FailedCatch_Param = 0x10; // int32_t
			constexpr auto CaughtFish_Param = 0x14; // int32_t
			constexpr auto ReelingIn_Param = 0x18; // int32_t
			constexpr auto IsFishing_Param = 0x1C; // int32_t
			constexpr auto aimAnimationReady = 0x2A0; // bool
			constexpr auto lastLureFail = 0x20; // TimeSince
			constexpr auto lastLineReset = 0x24; // TimeSince
			constexpr auto lastFailReason = 0x28; // FailReason
			constexpr auto onLineSound = 0x2A8; // Sound
			constexpr auto strainSound = 0x2B0; // Sound
			constexpr auto strainGainMod = 0x2B8; // Modulator
			constexpr auto consumingBackMovement = 0x2C0; // TimeUntil
			constexpr auto reelInAnimTimer = 0x2C4; // TimeSince
		}
		namespace BaseGameMode
		{
			constexpr auto gameModeScores = 0x168; // GameMode
			constexpr auto scoreColumns = 0x170; // string[]
			constexpr auto globalChat = 0x178; // bool
			constexpr auto localChat = 0x179; // bool
			constexpr auto teamSystem = 0x17A; // bool
			constexpr auto safeZone = 0x17B; // bool
			constexpr auto ingameMap = 0x17C; // bool
			constexpr auto compass = 0x17D; // bool
			constexpr auto contactSystem = 0x17E; // bool
			constexpr auto crawling = 0x17F; // bool
			constexpr auto rustPlus = 0x180; // bool
			constexpr auto wipeBpsOnProtocol = 0x181; // bool
			constexpr auto maximumSleepingBags = 0x184; // int32_t
			constexpr auto returnValidCombatlog = 0x188; // bool
			constexpr auto missionSystem = 0x189; // bool
			constexpr auto mlrs = 0x18A; // bool
			constexpr auto addedFeatures = 0x190; // Phrase[]
			constexpr auto removedFeatures = 0x198; // Phrase[]
			constexpr auto changedFeatures = 0x1A0; // Phrase[]
			constexpr auto convars = 0x1A8; // List`1
			constexpr auto GameModeChanged = 0x0; // Action`1
			constexpr auto shortname = 0x1B0; // string
			constexpr auto matchDuration = 0x1B8; // float
			constexpr auto warmupDuration = 0x1BC; // float
			constexpr auto timeBetweenMatches = 0x1C0; // float
			constexpr auto minPlayersToStart = 0x1C4; // int32_t
			constexpr auto useCustomSpawns = 0x1C8; // bool
			constexpr auto victoryScoreName = 0x1D0; // string
			constexpr auto teamScoreName = 0x1D8; // string
			constexpr auto numScoreForVictory = 0x1E0; // int32_t
			constexpr auto gamemodeTitle = 0x1E8; // string
			constexpr auto warmupMusics = 0x1F0; // SoundDefinition[]
			constexpr auto lossMusics = 0x1F8; // SoundDefinition[]
			constexpr auto winMusics = 0x200; // SoundDefinition[]
			constexpr auto warmupStartTime = 0x208; // float
			constexpr auto matchStartTime = 0x20C; // float
			constexpr auto matchEndTime = 0x210; // float
			constexpr auto gameModeTags = 0x218; // List`1
			constexpr auto deathCameraMode = 0x220; // CameraMode
			constexpr auto permanent = 0x224; // bool
			constexpr auto limitTeamAuths = 0x225; // bool
			constexpr auto allowSleeping = 0x226; // bool
			constexpr auto allowWounding = 0x227; // bool
			constexpr auto allowBleeding = 0x228; // bool
			constexpr auto allowTemperature = 0x229; // bool
			constexpr auto quickRespawn = 0x22A; // bool
			constexpr auto quickDeploy = 0x22B; // bool
			constexpr auto respawnDelayOverride = 0x22C; // float
			constexpr auto startHealthOverride = 0x230; // float
			constexpr auto autoHealDelay = 0x234; // float
			constexpr auto autoHealDuration = 0x238; // float
			constexpr auto hasKillFeed = 0x23C; // bool
			constexpr auto allowPings = 0x23D; // bool
			constexpr auto clActiveGameMode = 0x8; // BaseGameMode
			constexpr auto clGameModeManifest = 0x10; // List`1
			constexpr auto loadouts = 0x240; // PlayerInventoryProperties[]
			constexpr auto useStaticLoadoutPerPlayer = 0x248; // bool
			constexpr auto topUpMagazines = 0x249; // bool
			constexpr auto sendKillNotifications = 0x24A; // bool
			constexpr auto teams = 0x250; // GameModeTeam[]
			constexpr auto wasInWarmup = 0x258; // bool
			constexpr auto wasMatchOver = 0x259; // bool
			constexpr auto wasMatchActive = 0x25A; // bool
		}
		namespace BaseHelicopter
		{
			constexpr auto rotorPivot = 0x250; // GameObject
			constexpr auto mainRotor = 0x258; // GameObject
			constexpr auto mainRotor_blades = 0x260; // GameObject
			constexpr auto mainRotor_blur = 0x268; // GameObject
			constexpr auto tailRotor = 0x270; // GameObject
			constexpr auto tailRotor_blades = 0x278; // GameObject
			constexpr auto tailRotor_blur = 0x280; // GameObject
			constexpr auto rocket_tube_left = 0x288; // GameObject
			constexpr auto rocket_tube_right = 0x290; // GameObject
			constexpr auto left_gun_yaw = 0x298; // GameObject
			constexpr auto left_gun_pitch = 0x2A0; // GameObject
			constexpr auto left_gun_muzzle = 0x2A8; // GameObject
			constexpr auto right_gun_yaw = 0x2B0; // GameObject
			constexpr auto right_gun_pitch = 0x2B8; // GameObject
			constexpr auto right_gun_muzzle = 0x2C0; // GameObject
			constexpr auto spotlight_rotation = 0x2C8; // GameObject
			constexpr auto rocket_fire_effect = 0x2D0; // GameObjectRef
			constexpr auto gun_fire_effect = 0x2D8; // GameObjectRef
			constexpr auto bulletEffect = 0x2E0; // GameObjectRef
			constexpr auto explosionEffect = 0x2E8; // GameObjectRef
			constexpr auto fireBall = 0x2F0; // GameObjectRef
			constexpr auto crateToDrop = 0x2F8; // GameObjectRef
			constexpr auto maxCratesToSpawn = 0x300; // int32_t
			constexpr auto bulletSpeed = 0x304; // float
			constexpr auto bulletDamage = 0x308; // float
			constexpr auto servergibs = 0x310; // GameObjectRef
			constexpr auto debrisFieldMarker = 0x318; // GameObjectRef
			constexpr auto rotorWashSoundDef = 0x320; // SoundDefinition
			constexpr auto _rotorWashSound = 0x328; // Sound
			constexpr auto flightEngineSoundDef = 0x330; // SoundDefinition
			constexpr auto flightThwopsSoundDef = 0x338; // SoundDefinition
			constexpr auto flightEngineSound = 0x340; // Sound
			constexpr auto flightThwopsSound = 0x348; // Sound
			constexpr auto flightEngineGainMod = 0x350; // Modulator
			constexpr auto flightThwopsGainMod = 0x358; // Modulator
			constexpr auto rotorGainModSmoothing = 0x360; // float
			constexpr auto engineGainMin = 0x364; // float
			constexpr auto engineGainMax = 0x368; // float
			constexpr auto thwopGainMin = 0x36C; // float
			constexpr auto thwopGainMax = 0x370; // float
			constexpr auto spotlightJitterAmount = 0x374; // float
			constexpr auto spotlightJitterSpeed = 0x378; // float
			constexpr auto nightLights = 0x380; // GameObject[]
			constexpr auto spotlightTarget = 0x388; // Vector3
			constexpr auto engineSpeed = 0x394; // float
			constexpr auto targetEngineSpeed = 0x398; // float
			constexpr auto blur_rotationScale = 0x39C; // float
			constexpr auto _rotorWashParticles = 0x3A0; // ParticleSystem[]
			constexpr auto myAI = 0x3A8; // PatrolHelicopterAI
			constexpr auto mapMarkerEntityPrefab = 0x3B0; // GameObjectRef
			constexpr auto client_rotorPivotIdeal = 0x3B8; // Quaternion
			constexpr auto nightLightsOn = 0x3C8; // bool
			constexpr auto weakspots = 0x3D0; // weakspot[]
		}
		namespace BaseLauncher
		{
			constexpr auto lastSpectatorReloadAmmo = 0x3A0; // int32_t
			constexpr auto lastSpectatorAmmoInsert = 0x3A4; // TimeSince
		}
		namespace BaseLiquidVessel
		{
			constexpr auto thrownWaterObject = 0x280; // GameObjectRef
			constexpr auto ThrowEffect3P = 0x288; // GameObjectRef
			constexpr auto throwSound3P = 0x290; // SoundDefinition
			constexpr auto fillFromContainer = 0x298; // GameObjectRef
			constexpr auto fillFromWorld = 0x2A0; // GameObjectRef
			constexpr auto fillFromContainerStartSoundDef = 0x2A8; // SoundDefinition
			constexpr auto fillFromContainerSoundDef = 0x2B0; // SoundDefinition
			constexpr auto fillFromWorldStartSoundDef = 0x2B8; // SoundDefinition
			constexpr auto fillFromWorldSoundDef = 0x2C0; // SoundDefinition
			constexpr auto hasLid = 0x2C8; // bool
			constexpr auto throwScale = 0x2CC; // float
			constexpr auto canDrinkFrom = 0x2D0; // bool
			constexpr auto updateVMWater = 0x2D1; // bool
			constexpr auto minThrowFrac = 0x2D4; // float
			constexpr auto useThrowAnim = 0x2D8; // bool
			constexpr auto fillMlPerSec = 0x2DC; // float
			constexpr auto fillSound = 0x2E0; // Sound
			constexpr auto timeSinceLastAttack = 0x2E8; // float
			constexpr auto wasFilling = 0x2EC; // bool
			constexpr auto nextFreeTime = 0x2F0; // float
		}
		namespace BaseMelee
		{
			constexpr auto damageProperties = 0x280; // DamageProperties
			constexpr auto damageTypes = 0x288; // List`1
			constexpr auto maxDistance = 0x290; // float
			constexpr auto attackRadius = 0x294; // float
			constexpr auto isAutomatic = 0x298; // bool
			constexpr auto blockSprintOnAttack = 0x299; // bool
			constexpr auto strikeFX = 0x2A0; // GameObjectRef
			constexpr auto useStandardHitEffects = 0x2A8; // bool
			constexpr auto aiStrikeDelay = 0x2AC; // float
			constexpr auto swingEffect = 0x2B0; // GameObjectRef
			constexpr auto materialStrikeFX = 0x2B8; // List`1
			constexpr auto heartStress = 0x2C0; // float
			constexpr auto gathering = 0x2C8; // GatherProperties
			constexpr auto throwReady = 0x2D0; // bool
			constexpr auto canThrowAsProjectile = 0x2D1; // bool
			constexpr auto canAiHearIt = 0x2D2; // bool
			constexpr auto onlyThrowAsProjectile = 0x2D3; // bool
		}
		namespace BaseNpc
		{
			constexpr auto agentTypeIndex = 0x250; // int32_t
			constexpr auto NewAI = 0x254; // bool
			constexpr auto topologyPreference = 0x258; // Enum
			constexpr auto NetworkRotation = 0x25C; // Quaternion
			constexpr auto visibleNpcList = 0x0; // List`1
			constexpr auto CorpsePrefab = 0x270; // GameObjectRef
			constexpr auto Stats = 0x278; // AiStatistics
			constexpr auto AttackOffset = 0x328; // Vector3
			constexpr auto AttackDamage = 0x334; // float
			constexpr auto AttackDamageType = 0x338; // DamageType
			constexpr auto AttackCost = 0x33C; // float
			constexpr auto AttackRate = 0x340; // float
			constexpr auto AttackRange = 0x344; // float
			constexpr auto NavAgent = 0x348; // NavMeshAgent
			constexpr auto movementMask = 0x350; // LayerMask
			constexpr auto stuckDuration = 0x354; // float
			constexpr auto lastStuckTime = 0x358; // float
			constexpr auto idleDuration = 0x35C; // float
			constexpr auto aiFlags = 0x360; // AiFlags
			constexpr auto ForgetUnseenEntityTime = 0x364; // int32_t
			constexpr auto SensesTickRate = 0x368; // float
			constexpr auto nextVisThink = 0x36C; // float
			constexpr auto lastTimeSeen = 0x370; // float
			constexpr auto lastPosition = 0x374; // Vector3
		}
		namespace BaseProjectile
		{
			constexpr auto NoiseRadius = 0x280;
			constexpr auto damageScale = 0x284;
			constexpr auto distanceScale = 0x288;
			constexpr auto projectileVelocityScale = 0x28c;
			constexpr auto automatic = 0x290;
			constexpr auto usableByTurret = 0x291;
			constexpr auto turretDamageScale = 0x294;
			constexpr auto attackFX = 0x298;
			constexpr auto silencedAttack = 0x2a0;
			constexpr auto muzzleBrakeAttack = 0x2a8;
			constexpr auto MuzzlePoint = 0x2b0;
			constexpr auto reloadTime = 0x2b8;
			constexpr auto canUnloadAmmo = 0x2bc;
			constexpr auto primaryMagazine = 0x2c0;
			constexpr auto fractionalReload = 0x2c8;
			constexpr auto reloadStartDuration = 0x2cc;
			constexpr auto reloadFractionDuration = 0x2d0;
			constexpr auto reloadEndDuration = 0x2d4;
			constexpr auto aimSway = 0x2d8;
			constexpr auto aimSwaySpeed = 0x2dc;
			constexpr auto recoil = 0x2e0;
			constexpr auto aimconeCurve = 0x2e8;
			constexpr auto aimCone = 0x2f0;
			constexpr auto hipAimCone = 0x2f4;
			constexpr auto aimconePenaltyPerShot = 0x2f8;
			constexpr auto aimConePenaltyMax = 0x2fc;
			constexpr auto aimconePenaltyRecoverTime = 0x300;
			constexpr auto aimconePenaltyRecoverDelay = 0x304;
			constexpr auto stancePenaltyScale = 0x308;
			constexpr auto hasADS = 0x30c;
			constexpr auto noAimingWhileCycling = 0x30d;
			constexpr auto manualCycle = 0x30e;
			constexpr auto needsCycle = 0x30f;
			constexpr auto isCycling = 0x310;
			constexpr auto aiming = 0x311;
			constexpr auto useEmptyAmmoState = 0x312;
			constexpr auto isBurstWeapon = 0x313;
			constexpr auto canChangeFireModes = 0x314;
			constexpr auto defaultOn = 0x315;
			constexpr auto internalBurstRecoilScale = 0x318;
			constexpr auto internalBurstFireRateScale = 0x31c;
			constexpr auto internalBurstAimConeScale = 0x320;
			constexpr auto Toast_BurstDisabled = 0x328;
			constexpr auto Toast_BurstEnabled = 0x330;
			constexpr auto resetDuration = 0x338;
			constexpr auto numShotsFired = 0x33c;
			constexpr auto nextReloadTime = 0x340;
			constexpr auto startReloadTime = 0x344;
			constexpr auto stancePenalty = 0x348;
			constexpr auto aimconePenalty = 0x34c;
			constexpr auto cachedModHash = 0x350;
			constexpr auto sightAimConeScale = 0x354;
			constexpr auto sightAimConeOffset = 0x358;
			constexpr auto hipAimConeScale = 0x35c;
			constexpr auto hipAimConeOffset = 0x360;
			constexpr auto Param_Ammo_False = 0x4;
			constexpr auto isReloading = 0x364;
			constexpr auto timeSinceReloadFinished = 0x368;
			constexpr auto swaySampleTime = 0x36c;
			constexpr auto lastShotTime = 0x370;
			constexpr auto reloadPressTime = 0x374;
			constexpr auto ammoTypePreReload = 0x378;
			constexpr auto fractionalReloadDesiredCount = 0x380;
			constexpr auto fractionalReloadNumAdded = 0x384;
			constexpr auto currentBurst = 0x388;
			constexpr auto triggerReady = 0x38c;
			constexpr auto nextHeightCheckTime = 0x390;
			constexpr auto cachedUnderground = 0x394;
			constexpr auto createdProjectiles = 0x398;
		}
		namespace BigWheelBettingTerminal
		{
			constexpr auto bigWheel = 0x418; // BigWheelGame
			constexpr auto seatedPlayerOffset = 0x420; // Vector3
			constexpr auto offsetCheckRadius = 0x42C; // float
			constexpr auto winSound = 0x430; // SoundDefinition
			constexpr auto loseSound = 0x438; // SoundDefinition
			constexpr auto lastPlayer = 0x440; // BasePlayer
			constexpr auto nextSpinTime = 0x448; // float
		}
		namespace BowWeapon
		{
			constexpr auto attackReady = 0x3A0; // bool
			constexpr auto arrowBack = 0x3A4; // float
			constexpr auto swapArrows = 0x3A8; // SwapArrows
			constexpr auto wasAiming = 0x3B0; // bool
		}
		namespace BradleyAPC
		{
			constexpr auto engineSound = 0x250; // BlendedLoopEngineSound
			constexpr auto treadLoopDef = 0x258; // SoundDefinition
			constexpr auto treadGainCurve = 0x260; // AnimationCurve
			constexpr auto treadPitchCurve = 0x268; // AnimationCurve
			constexpr auto treadFreqCurve = 0x270; // AnimationCurve
			constexpr auto treadLoop = 0x278; // Sound
			constexpr auto treadGain = 0x280; // Modulator
			constexpr auto treadPitch = 0x288; // Modulator
			constexpr auto chasisLurchSoundDef = 0x290; // SoundDefinition
			constexpr auto chasisLurchAngleDelta = 0x298; // float
			constexpr auto chasisLurchSpeedDelta = 0x29C; // float
			constexpr auto lastAngle = 0x2A0; // float
			constexpr auto lastSpeed = 0x2A4; // float
			constexpr auto turretTurnLoopDef = 0x2A8; // SoundDefinition
			constexpr auto turretLoopGainSpeed = 0x2B0; // float
			constexpr auto turretLoopPitchSpeed = 0x2B4; // float
			constexpr auto turretLoopMinAngleDelta = 0x2B8; // float
			constexpr auto turretLoopMaxAngleDelta = 0x2BC; // float
			constexpr auto turretLoopPitchMin = 0x2C0; // float
			constexpr auto turretLoopPitchMax = 0x2C4; // float
			constexpr auto turretLoopGainThreshold = 0x2C8; // float
			constexpr auto turretTurnLoop = 0x2D0; // Sound
			constexpr auto turretTurnLoopGain = 0x2D8; // Modulator
			constexpr auto turretTurnLoopPitch = 0x2E0; // Modulator
			constexpr auto enginePitch = 0x2E8; // float
			constexpr auto rpmMultiplier = 0x2EC; // float
			constexpr auto treadAnimator = 0x2F0; // TreadAnimator
			constexpr auto lastTurretAngle = 0x2F8; // float
			constexpr auto leftWheels = 0x300; // WheelCollider[]
			constexpr auto rightWheels = 0x308; // WheelCollider[]
			constexpr auto moveForceMax = 0x310; // float
			constexpr auto brakeForce = 0x314; // float
			constexpr auto turnForce = 0x318; // float
			constexpr auto sideStiffnessMax = 0x31C; // float
			constexpr auto sideStiffnessMin = 0x320; // float
			constexpr auto centerOfMass = 0x328; // Transform
			constexpr auto stoppingDist = 0x330; // float
			constexpr auto throttle = 0x334; // float
			constexpr auto turning = 0x338; // float
			constexpr auto rightThrottle = 0x33C; // float
			constexpr auto leftThrottle = 0x340; // float
			constexpr auto brake = 0x344; // bool
			constexpr auto myRigidBody = 0x348; // Rigidbody
			constexpr auto myCollider = 0x350; // Collider
			constexpr auto destination = 0x358; // Vector3
			constexpr auto finalDestination = 0x364; // Vector3
			constexpr auto followTest = 0x370; // Transform
			constexpr auto impactDamager = 0x378; // TriggerHurtEx
			constexpr auto mainTurretEyePos = 0x380; // Transform
			constexpr auto mainTurret = 0x388; // Transform
			constexpr auto CannonPitch = 0x390; // Transform
			constexpr auto CannonMuzzle = 0x398; // Transform
			constexpr auto coaxPitch = 0x3A0; // Transform
			constexpr auto coaxMuzzle = 0x3A8; // Transform
			constexpr auto topTurretEyePos = 0x3B0; // Transform
			constexpr auto topTurretYaw = 0x3B8; // Transform
			constexpr auto topTurretPitch = 0x3C0; // Transform
			constexpr auto topTurretMuzzle = 0x3C8; // Transform
			constexpr auto turretAimVector = 0x3D0; // Vector3
			constexpr auto desiredAimVector = 0x3DC; // Vector3
			constexpr auto topTurretAimVector = 0x3E8; // Vector3
			constexpr auto desiredTopTurretAimVector = 0x3F4; // Vector3
			constexpr auto explosionEffect = 0x400; // GameObjectRef
			constexpr auto servergibs = 0x408; // GameObjectRef
			constexpr auto fireBall = 0x410; // GameObjectRef
			constexpr auto crateToDrop = 0x418; // GameObjectRef
			constexpr auto debrisFieldMarker = 0x420; // GameObjectRef
			constexpr auto maxCratesToSpawn = 0x428; // int32_t
			constexpr auto patrolPathIndex = 0x42C; // int32_t
			constexpr auto patrolPath = 0x430; // IAIPath
			constexpr auto DoAI = 0x438; // bool
			constexpr auto mainCannonMuzzleFlash = 0x440; // GameObjectRef
			constexpr auto mainCannonProjectile = 0x448; // GameObjectRef
			constexpr auto recoilScale = 0x450; // float
			constexpr auto navMeshPath = 0x458; // NavMeshPath
			constexpr auto navMeshPathIndex = 0x460; // int32_t
			constexpr auto currentPath = 0x468; // List`1
			constexpr auto currentPathIndex = 0x470; // int32_t
			constexpr auto pathLooping = 0x474; // bool
			constexpr auto viewDistance = 0x478; // float
			constexpr auto searchRange = 0x47C; // float
			constexpr auto searchFrequency = 0x480; // float
			constexpr auto memoryDuration = 0x484; // float
			constexpr auto sightUpdateRate = 0x0; // float
			constexpr auto targetList = 0x488; // List`1
			constexpr auto coaxFireRate = 0x490; // float
			constexpr auto coaxBurstLength = 0x494; // int32_t
			constexpr auto coaxAimCone = 0x498; // float
			constexpr auto bulletDamage = 0x49C; // float
			constexpr auto topTurretFireRate = 0x4A0; // float
			constexpr auto gun_fire_effect = 0x4A8; // GameObjectRef
			constexpr auto bulletEffect = 0x4B0; // GameObjectRef
			constexpr auto lastLateUpdate = 0x4B8; // float
		}
		namespace BuildingBlock
		{
			constexpr auto blockDefinition = 0x280; // Construction
			constexpr auto outsideLookupOffsets = 0x0; // Vector3[]
			constexpr auto forceSkinRefresh = 0x288; // bool
			constexpr auto lastSkinID = 0x290; // UInt64
			constexpr auto modelState = 0x298; // int32_t
			constexpr auto lastModelState = 0x29C; // int32_t
			constexpr auto customColourk__BackingField = 0x2A0; // uint32_t
			constexpr auto lastCustomColour = 0x2A4; // uint32_t
			constexpr auto grade = 0x2A8; // Enum
			constexpr auto lastGrade = 0x2AC; // Enum
			constexpr auto currentSkin = 0x2B0; // ConstructionSkin
			constexpr auto skinChange = 0x2B8; // DeferredAction
			constexpr auto placeholderRenderer = 0x2C0; // MeshRenderer
			constexpr auto placeholderCollider = 0x2C8; // MeshCollider
			constexpr auto HighlightMaterial = 0x8; // Material
			constexpr auto updateSkinQueueClient = 0x10; // UpdateSkinWorkQueue
			constexpr auto CullBushes = 0x2D0; // bool
			constexpr auto CheckForPipesOnModelChange = 0x2D1; // bool
		}
		namespace CameraTool
		{
			constexpr auto screenshotEffect = 0x1F8; // GameObjectRef
			constexpr auto cameraFOV = 0x200; // float
			constexpr auto focalDistance = 0x204; // float
			constexpr auto focalDistanceSmooth = 0x208; // float
		}
		namespace CardReader
		{
			constexpr auto accessDuration = 0x2A8; // float
			constexpr auto accessLevel = 0x2AC; // int32_t
			constexpr auto accessGrantedEffect = 0x2B0; // GameObjectRef
			constexpr auto accessDeniedEffect = 0x2B8; // GameObjectRef
			constexpr auto swipeEffect = 0x2C0; // GameObjectRef
			constexpr auto audioPosition = 0x2C8; // Transform
			constexpr auto AccessLevel1 = 0x2D0; // Flags
			constexpr auto AccessLevel2 = 0x2D4; // Flags
			constexpr auto AccessLevel3 = 0x2D8; // Flags
		}
		namespace Cassette
		{
			constexpr auto MaxCassetteLength = 0x168; // float
			constexpr auto MaxCassetteFileSizeMB = 0x0; // float
			constexpr auto AudioIdk__BackingField = 0x16C; // uint32_t
			constexpr auto CreatorSteamId = 0x170; // UInt64
			constexpr auto PreloadType = 0x178; // PreloadType
			constexpr auto PreloadContent = 0x180; // PreloadedCassetteContent
			constexpr auto InsertCassetteSfx = 0x188; // SoundDefinition
			constexpr auto ViewmodelIndex = 0x190; // int32_t
			constexpr auto HudSprite = 0x198; // Sprite
			constexpr auto MaximumVoicemailSlots = 0x1A0; // int32_t
			constexpr auto preloadedAudioId = 0x1A4; // int32_t
			constexpr auto cachedId = 0x1A8; // uint32_t
			constexpr auto cachedClip = 0x1B0; // AudioClip
			constexpr auto notifyOnLoad = 0x1B8; // bool
			constexpr auto audioLoadFromServerCallback = 0x1C0; // Action`1
			constexpr auto loadQueue = 0x8; // List`1
			constexpr auto isLoading = 0x10; // bool
		}
		namespace CeilingLight
		{
			constexpr auto pushScale = 0x2A8; // float
		}
		namespace Chainsaw
		{
			constexpr auto attackFadeInTime = 0x2D8; // float
			constexpr auto attackFadeInDelay = 0x2DC; // float
			constexpr auto attackFadeOutTime = 0x2E0; // float
			constexpr auto idleFadeInTimeFromOff = 0x2E4; // float
			constexpr auto idleFadeInTimeFromAttack = 0x2E8; // float
			constexpr auto idleFadeInDelay = 0x2EC; // float
			constexpr auto idleFadeOutTime = 0x2F0; // float
			constexpr auto wasEngineOn = 0x2F4; // bool
			constexpr auto wasAttackingAudio = 0x2F5; // bool
			constexpr auto chainRenderer = 0x2F8; // Renderer
			constexpr auto block = 0x300; // MaterialPropertyBlock
			constexpr auto saveST = 0x308; // Vector2
			constexpr auto chainSpeed = 0x310; // float
			constexpr auto chainAmount = 0x314; // float
			constexpr auto chainSpinUpRate = 0x318; // float
			constexpr auto fuelPerSec = 0x31C; // float
			constexpr auto maxAmmo = 0x320; // int32_t
			constexpr auto ammo = 0x324; // int32_t
			constexpr auto fuelType = 0x328; // ItemDefinition
			constexpr auto reloadDuration = 0x330; // float
			constexpr auto idleLoop = 0x338; // SoundPlayer
			constexpr auto attackLoopAir = 0x340; // SoundPlayer
			constexpr auto revUp = 0x348; // SoundPlayer
			constexpr auto revDown = 0x350; // SoundPlayer
			constexpr auto offSound = 0x358; // SoundPlayer
			constexpr auto lastHitMaterial = 0x360; // string
			constexpr auto lastHitTime = 0x368; // float
			constexpr auto nextReleaseTime = 0x36C; // float
			constexpr auto nextPressTime = 0x370; // float
			constexpr auto wasAttacking = 0x374; // bool
			constexpr auto reloadFinishedTime = 0x378; // float
			constexpr auto engineStartChance = 0x37C; // float
		}
		namespace CollectibleEntity
		{
			constexpr auto itemName = 0x168; // Phrase
			constexpr auto itemList = 0x170; // ItemAmount[]
			constexpr auto pickupEffect = 0x178; // GameObjectRef
			constexpr auto xpScale = 0x180; // float
		}
		namespace CommunityEntity
		{
			constexpr auto ServerInstance = 0x0; // CommunityEntity
			constexpr auto ClientInstance = 0x8; // CommunityEntity
			constexpr auto AllUi = 0x10; // List`1
			constexpr auto UiDict = 0x18; // Dictionary`2
			constexpr auto requestingTextureImages = 0x20; // Dictionary`2
			constexpr auto _textureCache = 0x28; // Dictionary`2
		}
		namespace CompoundBowWeapon
		{
			constexpr auto stringHoldDurationMax = 0x3B8; // float
			constexpr auto stringBonusDamage = 0x3BC; // float
			constexpr auto stringBonusDistance = 0x3C0; // float
			constexpr auto stringBonusVelocity = 0x3C4; // float
			constexpr auto movementPenaltyRampUpTime = 0x3C8; // float
			constexpr auto conditionLossPerSecondHeld = 0x3CC; // float
			constexpr auto conditionLossHeldDelay = 0x3D0; // float
			constexpr auto chargeUpSoundDef = 0x3D8; // SoundDefinition
			constexpr auto stringHeldSoundDef = 0x3E0; // SoundDefinition
			constexpr auto drawFinishSoundDef = 0x3E8; // SoundDefinition
			constexpr auto chargeUpSound = 0x3F0; // Sound
			constexpr auto stringHeldSound = 0x3F8; // Sound
			constexpr auto movementPenalty = 0x400; // float
			constexpr auto lastMoveTime = 0x404; // float
			constexpr auto currentHoldProgress = 0x408; // float
			constexpr auto stringHoldTimeStart = 0x40C; // float
			constexpr auto drawFinishPlayed = 0x410; // bool
		}
		namespace ComputerStation
		{
			constexpr auto menuPrefab = 0x350; // GameObjectRef
			constexpr auto computerMenu = 0x358; // ComputerMenu
			constexpr auto currentlyControllingEnt = 0x360; // EntityRef
			constexpr auto controlBookmarks = 0x370; // List`1
			constexpr auto leftHandIKPosition = 0x378; // Transform
			constexpr auto rightHandIKPosition = 0x380; // Transform
			constexpr auto turnOnSoundDef = 0x388; // SoundDefinition
			constexpr auto turnOffSoundDef = 0x390; // SoundDefinition
			constexpr auto onLoopSoundDef = 0x398; // SoundDefinition
			constexpr auto isStatic = 0x3A0; // bool
			constexpr auto autoGatherRadius = 0x3A4; // float
			constexpr auto onLoopSound = 0x3A8; // Sound
			constexpr auto BookmarkSplit = 0x0; // Char[]
		}
		namespace ConnectedSpeaker
		{
			constexpr auto SoundSource = 0x2A8; // AudioSource
			constexpr auto connectedTo = 0x2B0; // EntityRef`1
			constexpr auto VoiceProcessor = 0x2C0; // VoiceProcessor
			constexpr auto connectedToStreamer = 0x2C8; // ShoutcastStreamer
			constexpr auto connectedToProcessor = 0x2D0; // VoiceProcessor
			constexpr auto isPlayingStreamedAudio = 0x2D8; // bool
			constexpr auto currentReadIndex = 0x2DC; // uint32_t
		}
		namespace Deployer
		{
			constexpr auto placementError = 0x1F8; // string
		}
		namespace Detonator
		{
			constexpr auto frequency = 0x1F8; // int32_t
			constexpr auto timeSinceDeploy = 0x1FC; // float
			constexpr auto frequencyPanelPrefab = 0x200; // GameObjectRef
			constexpr auto attackEffect = 0x208; // GameObjectRef
			constexpr auto unAttackEffect = 0x210; // GameObjectRef
			constexpr auto deployDelay = 0x218; // float
			constexpr auto wasAttacking = 0x21C; // bool
			constexpr auto configProgress = 0x220; // float
			constexpr auto attackHeldTime = 0x224; // float
			constexpr auto attackReleasedTime = 0x228; // float
		}
		namespace DoorKnocker
		{
			constexpr auto knocker1 = 0x250; // Animator
			constexpr auto knocker2 = 0x258; // Animator
		}
		namespace EasterBasket
		{
			constexpr auto eggProjectile = 0x280; // GameObjectRef
			constexpr auto ammoType = 0x288; // ItemDefinition
			constexpr auto lastCollectedIndex = 0x290; // int32_t
			constexpr auto aiming = 0x294; // bool
			constexpr auto nextAmmoCheckTime = 0x298; // float
			constexpr auto didHaveAmmo = 0x29C; // bool
		}
		namespace FlameThrower
		{
			constexpr auto maxAmmo = 0x280; // int32_t
			constexpr auto ammo = 0x284; // int32_t
			constexpr auto fuelType = 0x288; // ItemDefinition
			constexpr auto timeSinceLastAttack = 0x290; // float
			constexpr auto nextReadyTime = 0x294; // float
			constexpr auto flameRange = 0x298; // float
			constexpr auto flameRadius = 0x29C; // float
			constexpr auto flameEffects = 0x2A0; // ParticleSystem[]
			constexpr auto jet = 0x2A8; // FlameJet
			constexpr auto fireballPrefab = 0x2B0; // GameObjectRef
			constexpr auto damagePerSec = 0x2B8; // List`1
			constexpr auto flameStart3P = 0x2C0; // SoundDefinition
			constexpr auto flameLoop3P = 0x2C8; // SoundDefinition
			constexpr auto flameStop3P = 0x2D0; // SoundDefinition
			constexpr auto pilotLoopSoundDef = 0x2D8; // SoundDefinition
			constexpr auto tickRate = 0x2E0; // float
			constexpr auto lastFlameTick = 0x2E4; // float
			constexpr auto fuelPerSec = 0x2E8; // float
			constexpr auto ammoRemainder = 0x2EC; // float
			constexpr auto reloadDuration = 0x2F0; // float
			constexpr auto isReloading = 0x2F4; // bool
			constexpr auto loopSound = 0x2F8; // Sound
			constexpr auto pilotLoopSound = 0x300; // Sound
			constexpr auto currentGaugeSetting = 0x308; // float
			constexpr auto wasFlameOn = 0x30C; // bool
			constexpr auto nextUnfireTime = 0x310; // float
			constexpr auto firing = 0x314; // bool
		}
		namespace FlameTurret
		{
			constexpr auto upper = 0x418; // Transform
			constexpr auto aimDir = 0x420; // Vector3
			constexpr auto arc = 0x42C; // float
			constexpr auto triggeredDuration = 0x430; // float
			constexpr auto flameRange = 0x434; // float
			constexpr auto flameRadius = 0x438; // float
			constexpr auto fuelPerSec = 0x43C; // float
			constexpr auto eyeTransform = 0x440; // Transform
			constexpr auto damagePerSec = 0x448; // List`1
			constexpr auto triggeredEffect = 0x450; // GameObjectRef
			constexpr auto fireballPrefab = 0x458; // GameObjectRef
			constexpr auto explosionEffect = 0x460; // GameObjectRef
			constexpr auto trigger = 0x468; // TargetTrigger
		}
		namespace Flashbang
		{
			constexpr auto deafLoopDef = 0x1C0; // SoundDefinition
			constexpr auto flashReductionPerSecond = 0x1C8; // float
			constexpr auto flashToAdd = 0x1CC; // float
			constexpr auto flashMinRange = 0x1D0; // float
			constexpr auto flashMaxRange = 0x1D4; // float
			constexpr auto localFlashAmount = 0x0; // float
			constexpr auto deafLoop = 0x1D8; // Sound
			constexpr auto deafGain = 0x1E0; // Modulator
		}
		namespace FrankensteinPet
		{
			constexpr auto decayminutes = 0x0; // float
			constexpr auto AttackVocalSFX = 0x918; // SoundDefinition
		}
		namespace GunTrap
		{
			constexpr auto gun_fire_effect = 0x418; // GameObjectRef
			constexpr auto bulletEffect = 0x420; // GameObjectRef
			constexpr auto triggeredEffect = 0x428; // GameObjectRef
			constexpr auto muzzlePos = 0x430; // Transform
			constexpr auto eyeTransform = 0x438; // Transform
			constexpr auto numPellets = 0x440; // int32_t
			constexpr auto aimCone = 0x444; // int32_t
			constexpr auto sensorRadius = 0x448; // float
			constexpr auto ammoType = 0x450; // ItemDefinition
			constexpr auto trigger = 0x458; // TargetTrigger
		}
		namespace HeldBoomBox
		{
			constexpr auto BoxController = 0x1F8; // BoomBox
			constexpr auto cassetteSwapper = 0x200; // SwapKeycard
			constexpr auto lastPlayToggle = 0x208; // TimeSince
			constexpr auto animPlay = 0x0; // int32_t
		}
		namespace HeldEntity
		{
			constexpr auto worldModelAnimator = 0x168; // Animator
			constexpr auto thirdPersonDeploySound = 0x170; // SoundDefinition
			constexpr auto thirdPersonAimSound = 0x178; // SoundDefinition
			constexpr auto thirdPersonAimEndSound = 0x180; // SoundDefinition
			constexpr auto viewModel = 0x188; // ViewModel
			constexpr auto isDeployed = 0x190; // bool
			constexpr auto lastExamineTime = 0x0; // float
			constexpr auto nextExamineTime = 0x194; // float
			constexpr auto handBone = 0x198; // string
			constexpr auto HoldAnimationOverride = 0x1A0; // AnimatorOverrideController
			constexpr auto isBuildingTool = 0x1A8; // bool
			constexpr auto hostileScore = 0x1AC; // float
			constexpr auto holsterInfo = 0x1B0; // HolsterInfo
			constexpr auto HeldCameraMode = 0x1B8; // CameraMode
			constexpr auto FirstPersonArmOffset = 0x1BC; // Vector3
			constexpr auto FirstPersonArmRotation = 0x1C8; // Vector3
			constexpr auto FirstPersonRotationStrength = 0x1D4; // float
			constexpr auto ownerItemUID = 0x1D8; // ItemId
			constexpr auto _punches = 0x1E0; // List`1
			constexpr auto punchAdded = 0x1E8; // Vector3
			constexpr auto lastPunchTime = 0x1F4; // float
		}
		namespace ImageStorageEntity
		{
			constexpr auto _requests = 0x168; // List`1
		}
		namespace InstantCameraTool
		{
			constexpr auto photoItem = 0x1F8; // ItemDefinition
			constexpr auto screenshotEffect = 0x200; // GameObjectRef
			constexpr auto startPhotoSoundDef = 0x208; // SoundDefinition
			constexpr auto finishPhotoSoundDef = 0x210; // SoundDefinition
			constexpr auto resolutionX = 0x218; // int32_t
			constexpr auto resolutionY = 0x21C; // int32_t
			constexpr auto quality = 0x220; // int32_t
			constexpr auto cooldownSeconds = 0x224; // float
			constexpr auto _sinceLastPhoto = 0x228; // TimeSince
			constexpr auto cameraFOV = 0x22C; // float
			constexpr auto _focusMode = 0x230; // CameraFocusMode
			constexpr auto focalDistance = 0x234; // float
			constexpr auto focalDistanceSmooth = 0x238; // float
			constexpr auto focalDistanceTarget = 0x23C; // float
		}
		namespace InstrumentTool
		{
			constexpr auto KeyController = 0x1F8; // InstrumentKeyController
			constexpr auto DeploySound = 0x200; // SoundDefinition
			constexpr auto PitchClamp = 0x208; // Vector2
			constexpr auto UseAnimationSlotEvents = 0x210; // bool
			constexpr auto MuzzleT = 0x218; // Transform
			constexpr auto UsableByAutoTurrets = 0x220; // bool
			constexpr auto instrumentView = 0x228; // InstrumentViewmodel
		}
		namespace IOEntity
		{
			constexpr auto debugOrigin = 0x270; // Transform
			constexpr auto sourceItem = 0x278; // ItemDefinition
			constexpr auto framebudgetms = 0x0; // float
			constexpr auto responsetime = 0x4; // float
			constexpr auto backtracking = 0x8; // int32_t
			constexpr auto debugBudget = 0xC; // bool
			constexpr auto debugBudgetThreshold = 0x10; // float
			constexpr auto inputs = 0x280; // IOSlot[]
			constexpr auto outputs = 0x288; // IOSlot[]
			constexpr auto ioType = 0x290; // IOType
			constexpr auto client_powerin = 0x294; // int32_t
			constexpr auto client_slotpower = 0x298; // int32_t
			constexpr auto client_extradata_dirty = 0x29C; // bool
			constexpr auto spawnedColliders = 0x2A0; // List`1
		}
		namespace Jackhammer
		{
			constexpr auto HotspotBonusScale = 0x2D8; // float
			constexpr auto lastEngineStatus = 0x2DC; // bool
			constexpr auto nextReleaseTime = 0x2E0; // float
		}
		namespace JunkPile
		{
			constexpr auto sinkEffect = 0x168; // GameObjectRef
			constexpr auto spawngroups = 0x170; // SpawnGroup[]
			constexpr auto NPCSpawn = 0x178; // NPCSpawner
			constexpr auto sunkAmount = 0x180; // float
		}
		namespace Kayak
		{
			constexpr auto OarItem = 0x490; // ItemDefinition
			constexpr auto maxPaddleFrequency = 0x498; // float
			constexpr auto forwardPaddleForce = 0x49C; // float
			constexpr auto multiDriverPaddleForceMultiplier = 0x4A0; // float
			constexpr auto rotatePaddleForce = 0x4A4; // float
			constexpr auto forwardSplashEffect = 0x4A8; // GameObjectRef
			constexpr auto backSplashEffect = 0x4B0; // GameObjectRef
			constexpr auto moveSplashEffect = 0x4B8; // ParticleSystem
			constexpr auto animationLerpSpeed = 0x4C0; // float
			constexpr auto waterLoops = 0x4C8; // BlendedSoundLoops
			constexpr auto waterSoundSpeedDivisor = 0x4D0; // float
			constexpr auto pushLandEffect = 0x4D8; // GameObjectRef
			constexpr auto pushWaterEffect = 0x4E0; // GameObjectRef
			constexpr auto noPaddlePose = 0x4E8; // MountPoses
			constexpr auto splashEffectCooldown = 0x4EC; // TimeSince
			constexpr auto animationStates = 0x4F0; // PlayerAnimationState[]
			constexpr auto lastSoundUpdate = 0x4F8; // float
		}
		namespace LiquidVessel
		{
			constexpr auto busyTime = 0x1F8; // float
		}
		namespace LiquidWeapon
		{
			constexpr auto FireRate = 0x2F8; // float
			constexpr auto MaxRange = 0x2FC; // float
			constexpr auto FireAmountML = 0x300; // int32_t
			constexpr auto MaxPressure = 0x304; // int32_t
			constexpr auto PressureLossPerTick = 0x308; // int32_t
			constexpr auto PressureGainedPerPump = 0x30C; // int32_t
			constexpr auto MinDmgRadius = 0x310; // float
			constexpr auto MaxDmgRadius = 0x314; // float
			constexpr auto SplashRadius = 0x318; // float
			constexpr auto ImpactSplashEffect = 0x320; // GameObjectRef
			constexpr auto PowerCurve = 0x328; // AnimationCurve
			constexpr auto Damage = 0x330; // List`1
			constexpr auto EntityWeaponEffects = 0x338; // LiquidWeaponEffects
			constexpr auto RequiresPumping = 0x340; // bool
			constexpr auto AutoPump = 0x341; // bool
			constexpr auto WaitForFillAnim = 0x342; // bool
			constexpr auto UseFalloffCurve = 0x343; // bool
			constexpr auto FalloffCurve = 0x348; // AnimationCurve
			constexpr auto PumpingBlockDuration = 0x350; // float
			constexpr auto StartFillingBlockDuration = 0x354; // float
			constexpr auto StopFillingBlockDuration = 0x358; // float
			constexpr auto cooldownTime = 0x35C; // float
			constexpr auto filling = 0x360; // bool
			constexpr auto viewModelweaponEffects = 0x368; // LiquidWeaponEffects
			constexpr auto pressure = 0x370; // int32_t
		}
		namespace Locker
		{
			constexpr auto equipSound = 0x418; // GameObjectRef
			constexpr auto clothingBuffer = 0x420; // Item[]
		}
		namespace MapEntity
		{
			constexpr auto fogImages = 0x1F8; // uint32_t[]
			constexpr auto paintImages = 0x200; // uint32_t[]
		}
		namespace MapMarkerGenericRadius
		{
			constexpr auto radius = 0x178; // float
			constexpr auto color1 = 0x17C; // Color
			constexpr auto color2 = 0x18C; // Color
			constexpr auto alpha = 0x19C; // float
			constexpr auto cachedUIMarker = 0x1A0; // UIMapGenericRadius
		}
		namespace MedicalTool
		{
			constexpr auto healDurationSelf = 0x280; // float
			constexpr auto healDurationOther = 0x284; // float
			constexpr auto healDurationOtherWounded = 0x288; // float
			constexpr auto maxDistanceOther = 0x28C; // float
			constexpr auto canUseOnOther = 0x290; // bool
			constexpr auto canRevive = 0x291; // bool
			constexpr auto useTarget = 0x298; // BasePlayer
			constexpr auto resetTime = 0x2A0; // float
		}
		namespace Megaphone
		{
			constexpr auto voiceProcessor = 0x1F8; // VoiceProcessor
			constexpr auto VoiceDamageMinFrequency = 0x200; // float
			constexpr auto VoiceDamageAmount = 0x204; // float
			constexpr auto VoiceSource = 0x208; // AudioSource
			constexpr auto StartBroadcastingSfx = 0x210; // SoundDefinition
			constexpr auto StopBroadcastingSfx = 0x218; // SoundDefinition
			constexpr auto MegaphoneVoiceRangek__BackingField = 0x0; // float
			constexpr auto IgnorePushToTalk = 0x4; // bool
			constexpr auto BroadcastBoolAnim = 0x8; // int32_t
			constexpr auto talkingLayerWeight = 0x220; // float
		}
		namespace MicrophoneStand
		{
			constexpr auto VoiceProcessor = 0x350; // VoiceProcessor
			constexpr auto VoiceSource = 0x358; // AudioSource
			constexpr auto currentSpeechMode = 0x360; // SpeechMode
			constexpr auto NormalMix = 0x368; // AudioMixerGroup
			constexpr auto HighPitchMix = 0x370; // AudioMixerGroup
			constexpr auto LowPitchMix = 0x378; // AudioMixerGroup
			constexpr auto NormalPhrase = 0x380; // Phrase
			constexpr auto NormalDescPhrase = 0x388; // Phrase
			constexpr auto HighPitchPhrase = 0x390; // Phrase
			constexpr auto HighPitchDescPhrase = 0x398; // Phrase
			constexpr auto LowPitchPhrase = 0x3A0; // Phrase
			constexpr auto LowPitchDescPhrase = 0x3A8; // Phrase
			constexpr auto IOSubEntity = 0x3B0; // GameObjectRef
			constexpr auto IOSubEntitySpawnPos = 0x3B8; // Transform
			constexpr auto IsStatic = 0x3C0; // bool
			constexpr auto ioEntity = 0x3C8; // EntityRef`1
		}
		namespace MobilePhone
		{
			constexpr auto Controller = 0x1F8; // PhoneController
		}
		namespace ModularCarOven
		{
			constexpr auto moduleParent = 0x568; // BaseVehicleModule
		}
		namespace NewYearGong
		{
			constexpr auto gongSound = 0x250; // SoundDefinition
			constexpr auto minTimeBetweenSounds = 0x258; // float
			constexpr auto soundRoot = 0x260; // GameObject
			constexpr auto gongCentre = 0x268; // Transform
			constexpr auto gongRadius = 0x270; // float
			constexpr auto pitchCurve = 0x278; // AnimationCurve
			constexpr auto gongAnimator = 0x280; // Animator
			constexpr auto gongHit_trigger = 0x0; // int32_t
			constexpr auto playingSound = 0x288; // Sound
		}
		namespace OreResourceEntity
		{
			constexpr auto bonusPrefab = 0x1A0; // GameObjectRef
			constexpr auto finishEffect = 0x1A8; // GameObjectRef
			constexpr auto bonusFailEffect = 0x1B0; // GameObjectRef
			constexpr auto _hotSpot = 0x1B8; // OreHotSpot
			constexpr auto bonusSound = 0x1C0; // SoundPlayer
		}
		namespace PagerEntity
		{
			constexpr auto Flag_Silent = 0x0; // Flags
			constexpr auto frequency = 0x168; // int32_t
			constexpr auto beepRepeat = 0x16C; // float
			constexpr auto pagerEffect = 0x170; // GameObjectRef
			constexpr auto silentEffect = 0x178; // GameObjectRef
			constexpr auto wasOn = 0x180; // bool
		}
		namespace PaintedItemStorageEntity
		{
			constexpr auto _currentImageCrc = 0x168; // uint32_t
			constexpr auto Targets = 0x170; // List`1
			constexpr auto _loadingCrc = 0x178; // uint32_t
			constexpr auto _loadedImage = 0x180; // char[]
			constexpr auto _loadedImageCrc = 0x188; // uint32_t
			constexpr auto _timeoutAction = 0x190; // Action
		}
		namespace PetBrain
		{
			constexpr auto CommandGivenVocalSFX = 0x100; // SoundDefinition
			constexpr auto DrownInDeepWater = 0x0; // bool
			constexpr auto IdleWhenOwnerOfflineOrDead = 0x1; // bool
			constexpr auto IdleWhenOwnerMounted = 0x2; // bool
			constexpr auto DrownTimer = 0x4; // float
			constexpr auto ControlDistance = 0x8; // float
		}
		namespace Planner
		{
			constexpr auto rotationOffset = 0x1F8; // Vector3
			constexpr auto hasAppliedStartingRotation = 0x204; // bool
			constexpr auto currentConstruction = 0x208; // Construction
			constexpr auto buildableList = 0x210; // BaseEntity[]
			constexpr auto guide = 0x218; // Guide
		}
		namespace PlanterBox
		{
			constexpr auto soilSaturation = 0x418; // int32_t
			constexpr auto soilSaturationMax = 0x41C; // int32_t
			constexpr auto soilRenderer = 0x420; // MeshRenderer
			constexpr auto block = 0x428; // MaterialPropertyBlock
			constexpr auto saturationUpdate = 0x430; // TimeSince
		}
		namespace PlayerInventory
		{
			constexpr auto containerMain = 0x20; // ItemContainer
			constexpr auto containerBelt = 0x28; // ItemContainer
			constexpr auto containerWear = 0x30; // ItemContainer
			constexpr auto crafting = 0x38; // ItemCrafter
			constexpr auto loot = 0x40; // PlayerLoot
		}
		namespace PlayerLoot
		{
			constexpr auto entitySource = 0x20; // BaseEntity
			constexpr auto itemSource = 0x28; // Item
			constexpr auto containers = 0x30; // List`1
			constexpr auto clientEntity = 0x38; // EntityRef
		}
		namespace PlayerMetabolism
		{
			constexpr auto temperature = 0x40; // MetabolismAttribute
			constexpr auto poison = 0x48; // MetabolismAttribute
			constexpr auto radiation_level = 0x50; // MetabolismAttribute
			constexpr auto radiation_poison = 0x58; // MetabolismAttribute
			constexpr auto wetness = 0x60; // MetabolismAttribute
			constexpr auto dirtyness = 0x68; // MetabolismAttribute
			constexpr auto oxygen = 0x70; // MetabolismAttribute
			constexpr auto bleeding = 0x78; // MetabolismAttribute
			constexpr auto comfort = 0x80; // MetabolismAttribute
			constexpr auto pending_health = 0x88; // MetabolismAttribute
			constexpr auto isDirty = 0x90; // bool
			constexpr auto lastConsumeTime = 0x94; // float
			constexpr auto lastUpdateTime = 0x98; // float
		}
		namespace PoweredLightsDeployer
		{
			constexpr auto poweredLightsPrefab = 0x1F8; // GameObjectRef
			constexpr auto activeLights = 0x200; // EntityRef
			constexpr auto guide = 0x210; // MaterialReplacement
			constexpr auto guideObject = 0x218; // GameObject
			constexpr auto maxPlaceDistance = 0x220; // float
			constexpr auto lengthPerAmount = 0x224; // float
			constexpr auto nextClickTime = 0x228; // float
		}
		namespace ReclaimTerminal
		{
			constexpr auto itemCount = 0x418; // int32_t
			constexpr auto DespawnToast = 0x0; // Phrase
		}
		namespace RecorderTool
		{
			constexpr auto debugRecording = 0x0; // bool
			constexpr auto RecorderAudioSource = 0x2A0; // AudioSource
			constexpr auto RecordStartSfx = 0x2A8; // SoundDefinition
			constexpr auto RewindSfx = 0x2B0; // SoundDefinition
			constexpr auto RecordFinishedSfx = 0x2B8; // SoundDefinition
			constexpr auto PlayTapeSfx = 0x2C0; // SoundDefinition
			constexpr auto StopTapeSfx = 0x2C8; // SoundDefinition
			constexpr auto ThrowScale = 0x2D0; // float
			constexpr auto recording = 0x2D4; // bool
			constexpr auto IsRecording = 0x1; // bool
			constexpr auto activeIntercept = 0x2D8; // AudioInterceptComponent
			constexpr auto recordStartTime = 0x2E0; // float
			constexpr auto cachedCassettek__BackingField = 0x2E8; // Cassette
			constexpr auto currentEncoder = 0x2F0; // OggEncoder
			constexpr auto StartCountdownk__BackingField = 0x2F8; // int32_t
			constexpr auto rewindingSound = 0x300; // Sound
			constexpr auto cassetteToLoad = 0x308; // NetworkableId
			constexpr auto PlayAnimBool = 0x4; // int32_t
		}
		namespace RelationshipManager
		{
			constexpr auto bagRequestBuffer = 0x168; // HashSet`1
			constexpr auto bagQuotaCache = 0x170; // Dictionary`2
			constexpr auto contacts = 0x0; // bool
			constexpr auto localRelationships = 0x8; // PlayerRelationships
			constexpr auto mugshotOffset = 0x10; // Vector3
			constexpr auto ClientInstancek__BackingField = 0x20; // RelationshipManager
			constexpr auto clientMaxTeamSize = 0x28; // int32_t
		}
		namespace RepairBench
		{
			constexpr auto maxConditionLostOnRepair = 0x418; // float
			constexpr auto skinchangeEffect = 0x420; // GameObjectRef
		}
		namespace ResearchTable
		{
			constexpr auto researchFinishedTime = 0x418; // float
			constexpr auto researchCostFraction = 0x41C; // float
			constexpr auto researchDuration = 0x420; // float
			constexpr auto requiredPaper = 0x424; // int32_t
			constexpr auto researchStartEffect = 0x428; // GameObjectRef
			constexpr auto researchFailEffect = 0x430; // GameObjectRef
			constexpr auto researchSuccessEffect = 0x438; // GameObjectRef
			constexpr auto researchResource = 0x440; // ItemDefinition
		}
		namespace RidableHorse
		{
			constexpr auto SwapToSingleTitle = 0x758; // Phrase
			constexpr auto SwapToSingleDescription = 0x760; // Phrase
			constexpr auto SwapToSingleIcon = 0x768; // Sprite
			constexpr auto SwapToDoubleTitle = 0x770; // Phrase
			constexpr auto SwapToDoubleDescription = 0x778; // Phrase
			constexpr auto SwapToDoubleIcon = 0x780; // Sprite
			constexpr auto WildSaddleItem = 0x788; // ItemDefinition
			constexpr auto Population = 0x0; // float
			constexpr auto distanceStatName = 0x790; // string
			constexpr auto breeds = 0x798; // HorseBreed[]
			constexpr auto bodyRenderers = 0x7A0; // SkinnedMeshRenderer[]
			constexpr auto hairRenderers = 0x7A8; // SkinnedMeshRenderer[]
			constexpr auto currentBreed = 0x7B0; // int32_t
			constexpr auto riderProtection = 0x7B8; // ProtectionProperties
			constexpr auto baseHorseProtection = 0x7C0; // ProtectionProperties
			constexpr auto equipmentSpeedMod = 0x7C8; // float
			constexpr auto numStorageSlots = 0x7CC; // int32_t
			constexpr auto breedAssignmentArray = 0x8; // Material[]
			constexpr auto clientRecievedRunSpeed = 0x7D0; // float
			constexpr auto extraOptions = 0x7D8; // List`1
		}
		namespace SantaSleigh
		{
			constexpr auto prefabDrop = 0x168; // GameObjectRef
			constexpr auto filter = 0x170; // SpawnFilter
			constexpr auto dropOrigin = 0x178; // Transform
			constexpr auto altitudeAboveTerrain = 0x0; // float
			constexpr auto desiredAltitude = 0x4; // float
			constexpr auto bigLight = 0x180; // Light
			constexpr auto hohoho = 0x188; // SoundPlayer
			constexpr auto hohohospacing = 0x190; // float
			constexpr auto hohoho_additional_spacing = 0x194; // float
		}
		namespace ShopFront
		{
			constexpr auto maxUseAngle = 0x418; // float
			constexpr auto vendorPlayer = 0x420; // BasePlayer
			constexpr auto customerPlayer = 0x428; // BasePlayer
			constexpr auto transactionCompleteEffect = 0x430; // GameObjectRef
		}
		namespace SleepingBagCamper
		{
			constexpr auto AssociatedSeat = 0x4E0; // EntityRef`1
		}
		namespace SlotMachineStorage
		{
			constexpr auto Amount = 0x418; // int32_t
		}
		namespace SprayCan
		{
			constexpr auto paintingLine = 0x1F8; // SprayCanSpray_Freehand
			constexpr auto isSpraying = 0x200; // bool
			constexpr auto spawnedLine = 0x201; // bool
			constexpr auto sprayStartPos = 0x204; // Vector3
			constexpr auto lastPos = 0x210; // Vector3
			constexpr auto colourIndex = 0x21C; // int32_t
			constexpr auto widthIndex = 0x220; // int32_t
			constexpr auto sprayingEntity = 0x228; // BaseEntity
			constexpr auto points = 0x230; // List`1
			constexpr auto sprayStarted = 0x238; // TimeSince
			constexpr auto sprayEnded = 0x23C; // TimeSince
			constexpr auto ColourNamePhrases = 0x0; // Phrase[]
			constexpr auto ColourDescriptionPhrases = 0x8; // Phrase[]
			constexpr auto SpraySizePhrases = 0x10; // Phrase[]
			constexpr auto SpraySound = 0x240; // SoundDefinition
			constexpr auto SkinSelectPanel = 0x248; // GameObjectRef
			constexpr auto SprayCooldown = 0x250; // float
			constexpr auto ConditionLossPerSpray = 0x254; // float
			constexpr auto ConditionLossPerReskin = 0x258; // float
			constexpr auto LinePrefab = 0x260; // GameObjectRef
			constexpr auto SprayColours = 0x268; // Color[]
			constexpr auto SprayWidths = 0x270; // float[]
			constexpr auto worldSpaceSprayFx = 0x278; // ParticleSystem
			constexpr auto ReskinEffect = 0x280; // GameObjectRef
			constexpr auto SprayDecalItem = 0x288; // ItemDefinition
			constexpr auto SprayDecalEntityRef = 0x290; // GameObjectRef
			constexpr auto FreeSprayUnlockItem = 0x298; // SteamInventoryItem
			constexpr auto DecalSprayGradient = 0x2A0; // MinMaxGradient
			constexpr auto SprayLoopDef = 0x2D8; // SoundDefinition
			constexpr auto FreeSprayNamePhrase = 0x18; // Phrase
			constexpr auto FreeSprayDescPhrase = 0x20; // Phrase
			constexpr auto BuildingSkinDefaultPhrase = 0x28; // Phrase
			constexpr auto BuildingSkinDefaultDescPhrase = 0x30; // Phrase
			constexpr auto BuildingSkinColourPhrase = 0x38; // Phrase
			constexpr auto BuildingSkinColourDescPhrase = 0x40; // Phrase
			constexpr auto ShippingContainerColourLookup = 0x2E0; // ConstructionSkin_ColourLookup
			constexpr auto currentModek__BackingField = 0x2E8; // SprayMode
			constexpr auto selectedDecalSkin = 0x2EC; // int32_t
			constexpr auto UseAccurateMeshSnapping = 0x48; // bool
			constexpr auto DebugMeshSnapping = 0x49; // bool
			constexpr auto paramAttack = 0x4C; // int32_t
			constexpr auto paramAttackHold = 0x50; // int32_t
			constexpr auto timeDeployed = 0x2F0; // TimeSince
			constexpr auto blockReskinInProcess = 0x2F8; // BuildingBlock
			constexpr auto blockReskinId = 0x300; // int32_t
			constexpr auto sprayLoop = 0x308; // Sound
		}
		namespace SprayCanSpray_Freehand
		{
			constexpr auto LineDrawer = 0x2D8; // AlignedLineDrawer
			constexpr auto LinePoints = 0x2E0; // List`1
			constexpr auto colour = 0x2E8; // Color
			constexpr auto width = 0x2F8; // float
			constexpr auto editingPlayer = 0x300; // EntityRef`1
			constexpr auto groundWatch = 0x310; // GroundWatch
			constexpr auto meshCollider = 0x318; // MeshCollider
			constexpr auto attachedToCan = 0x320; // SprayCan
			constexpr auto hasAttachedToSpray = 0x328; // bool
			constexpr auto lastServerUpdate = 0x32C; // TimeSince
			constexpr auto firstSpray = 0x330; // bool
		}
		namespace StagedResourceEntity
		{
			constexpr auto stages = 0x180; // List`1
			constexpr auto stage = 0x188; // int32_t
			constexpr auto changeStageEffect = 0x190; // GameObjectRef
			constexpr auto gibSourceTest = 0x198; // GameObject
		}
		namespace StaticInstrument
		{
			constexpr auto AnimatorOverride = 0x350; // AnimatorOverrideController
			constexpr auto ShowDeployAnimation = 0x358; // bool
			constexpr auto KeyController = 0x360; // InstrumentKeyController
			constexpr auto ShouldSuppressHandsAnimationLayer = 0x368; // bool
			constexpr auto lateUpdatePlayer = 0x370; // BasePlayer
		}
		namespace SteamInventory
		{
			constexpr auto Items = 0x20; // IPlayerItem[]
		}
		namespace ThrownWeapon
		{
			constexpr auto prefabToThrow = 0x280; // GameObjectRef
			constexpr auto maxThrowVelocity = 0x288; // float
			constexpr auto tumbleVelocity = 0x28C; // float
			constexpr auto overrideAngle = 0x290; // Vector3
			constexpr auto canStick = 0x29C; // bool
			constexpr auto canThrowUnderwater = 0x29D; // bool
		}
		namespace Toolgun
		{
			constexpr auto attackEffect = 0x2D8; // GameObjectRef
			constexpr auto beamEffect = 0x2E0; // GameObjectRef
			constexpr auto beamImpactEffect = 0x2E8; // GameObjectRef
			constexpr auto errorEffect = 0x2F0; // GameObjectRef
			constexpr auto beamEffectClassic = 0x2F8; // GameObjectRef
			constexpr auto beamImpactEffectClassic = 0x300; // GameObjectRef
			constexpr auto muzzlePoint = 0x308; // Transform
			constexpr auto classiceffects = 0x0; // bool
		}
		namespace TorchWeapon
		{
			constexpr auto fuelTickAmount = 0x2D8; // float
			constexpr auto LitHoldAnimationOverride = 0x2E0; // AnimatorOverrideController
			constexpr auto litStrikeFX = 0x2E8; // GameObjectRef
			constexpr auto specVmWasOn = 0x2F0; // bool
			constexpr auto blockVmUpdates = 0x2F4; // TimeUntil
		}
		namespace TreeEntity
		{
			constexpr auto fallOnKilled = 0x180; // bool
			constexpr auto fallDuration = 0x184; // float
			constexpr auto fallStartSound = 0x188; // GameObjectRef
			constexpr auto fallImpactSound = 0x190; // GameObjectRef
			constexpr auto fallImpactParticles = 0x198; // GameObjectRef
			constexpr auto fallLeavesLoopDef = 0x1A0; // SoundDefinition
			constexpr auto usedHeights = 0x1A8; // bool[]
			constexpr auto impactSoundPlayed = 0x1B0; // bool
			constexpr auto treeDistanceUponFalling = 0x1B4; // float
			constexpr auto treeBaseRef = 0x1B8; // Transform
			constexpr auto oldSkinPos = 0x1C0; // Vector3
			constexpr auto oldSkinRot = 0x1CC; // Quaternion
			constexpr auto lastTreeFallTickTime = 0x1DC; // float
			constexpr auto fallStartTime = 0x1E0; // float
			constexpr auto fallLeavesLoop = 0x1E8; // Sound
			constexpr auto fallLeavesGainMod = 0x1F0; // Modulator
			constexpr auto hitDirection = 0x1F8; // Vector3
			constexpr auto rotateDirection = 0x204; // Vector3
			constexpr auto impactSoundCheckHeight = 0x210; // float
			constexpr auto prefab = 0x218; // GameObjectRef
			constexpr auto hasBonusGame = 0x220; // bool
			constexpr auto bonusHitEffect = 0x228; // GameObjectRef
			constexpr auto bonusHitSound = 0x230; // GameObjectRef
			constexpr auto serverCollider = 0x238; // Collider
			constexpr auto clientCollider = 0x240; // Collider
			constexpr auto smallCrackSoundDef = 0x248; // SoundDefinition
			constexpr auto medCrackSoundDef = 0x250; // SoundDefinition
			constexpr auto lastAttackDamage = 0x258; // float
			constexpr auto skin = 0x260; // TreeLOD
		}
		namespace TreeManager
		{
			constexpr auto client = 0x0; // TreeManager
			constexpr auto trees = 0x8; // Dictionary`2
		}
		namespace WaterInflatable
		{
			constexpr auto rigidBody = 0x350; // Rigidbody
			constexpr auto centerOfMass = 0x358; // Transform
			constexpr auto forwardPushForce = 0x360; // float
			constexpr auto rearPushForce = 0x364; // float
			constexpr auto rotationForce = 0x368; // float
			constexpr auto maxSpeed = 0x36C; // float
			constexpr auto maxPaddleFrequency = 0x370; // float
			constexpr auto paddleSfx = 0x378; // SoundDefinition
			constexpr auto smallPlayerMovementSound = 0x380; // SoundDefinition
			constexpr auto largePlayerMovementSound = 0x388; // SoundDefinition
			constexpr auto waterLoops = 0x390; // BlendedSoundLoops
			constexpr auto waterSoundSpeedDivisor = 0x398; // float
			constexpr auto additiveDownhillVelocity = 0x39C; // float
			constexpr auto handSplashForwardEffect = 0x3A0; // GameObjectRef
			constexpr auto handSplashBackEffect = 0x3A8; // GameObjectRef
			constexpr auto footSplashEffect = 0x3B0; // GameObjectRef
			constexpr auto animationLerpSpeed = 0x3B8; // float
			constexpr auto smoothedEyePosition = 0x3C0; // Transform
			constexpr auto smoothedEyeSpeed = 0x3C8; // float
			constexpr auto buoyancy = 0x3D0; // Buoyancy
			constexpr auto driftTowardsIsland = 0x3D8; // bool
			constexpr auto mountEffect = 0x3E0; // GameObjectRef
			constexpr auto handSplashOffset = 0x3E8; // float
			constexpr auto velocitySplashMultiplier = 0x3EC; // float
			constexpr auto modifyEyeOffset = 0x3F0; // Vector3
			constexpr auto inheritVelocityMultiplier = 0x3FC; // float
			constexpr auto lastPaddle = 0x400; // TimeSince
			constexpr auto movingParticleSystems = 0x408; // ParticleSystem[]
			constexpr auto movingParticlesThreshold = 0x410; // float
			constexpr auto headSpaceCheckPosition = 0x418; // Transform
			constexpr auto headSpaceCheckRadius = 0x420; // float
			constexpr auto lastPaddleDirection = 0x424; // PaddleDirection
			constexpr auto smoothedAnimDirection = 0x428; // Vector3
			constexpr auto smoothedEyePos = 0x434; // Vector3
			constexpr auto smoothedEyeRot = 0x440; // Quaternion
		}
		namespace WireTool
		{
			constexpr auto InputSprite = 0x1F8; // Sprite
			constexpr auto OutputSprite = 0x200; // Sprite
			constexpr auto ClearSprite = 0x208; // Sprite
			constexpr auto maxWireLength = 0x0; // float
			constexpr auto plugEffect = 0x210; // GameObjectRef
			constexpr auto clearStartSoundDef = 0x218; // SoundDefinition
			constexpr auto clearSoundDef = 0x220; // SoundDefinition
			constexpr auto ioLine = 0x228; // GameObjectRef
			constexpr auto wireType = 0x230; // IOType
			constexpr auto RadialMenuHoldTime = 0x234; // float
			constexpr auto Default = 0x8; // Phrase
			constexpr auto DefaultDesc = 0x10; // Phrase
			constexpr auto Red = 0x18; // Phrase
			constexpr auto RedDesc = 0x20; // Phrase
			constexpr auto Green = 0x28; // Phrase
			constexpr auto GreenDesc = 0x30; // Phrase
			constexpr auto Blue = 0x38; // Phrase
			constexpr auto BlueDesc = 0x40; // Phrase
			constexpr auto Yellow = 0x48; // Phrase
			constexpr auto YellowDesc = 0x50; // Phrase
			constexpr auto LightBlue = 0x58; // Phrase
			constexpr auto LightBlueDesc = 0x60; // Phrase
			constexpr auto Orange = 0x68; // Phrase
			constexpr auto OrangeDesc = 0x70; // Phrase
			constexpr auto Purple = 0x78; // Phrase
			constexpr auto PurpleDesc = 0x80; // Phrase
			constexpr auto White = 0x88; // Phrase
			constexpr auto WhiteDesc = 0x90; // Phrase
			constexpr auto Pink = 0x98; // Phrase
			constexpr auto PinkDesc = 0xA0; // Phrase
			constexpr auto pending = 0x238; // PendingPlug_t
			constexpr auto wantsCrosshair = 0x250; // bool
			constexpr auto pendingLine = 0x258; // ClientIOLine
			constexpr auto currentColour = 0x260; // WireColour
			constexpr auto nextClearSendTime = 0x264; // float
			constexpr auto nextColorChangeTime = 0x268; // float
			constexpr auto remainingDist = 0x26C; // float
			constexpr auto validSurface = 0x270; // bool
			constexpr auto couldBuild = 0x271; // bool
			constexpr auto isSolo = 0x272; // bool
			constexpr auto reloadDownTime = 0x274; // float
			constexpr auto showDistanceWarningk__BackingField = 0x278; // bool
			constexpr auto showLineOfSightWarningk__BackingField = 0x279; // bool
			constexpr auto showTooManyInputsWarningk__BackingField = 0x27A; // bool
			constexpr auto showTooManyOutputsWarningk__BackingField = 0x27B; // bool
			constexpr auto lastLookingAt = 0x280; // IOEntity
			constexpr auto clearProgress = 0x288; // float
		}
		namespace WorldItem
		{
			constexpr auto allowPickup = 0x168; // bool
			constexpr auto item = 0x170; // Item
		}
		namespace XMasRefill
		{
			constexpr auto giftPrefabs = 0x168; // GameObjectRef[]
			constexpr auto goodKids = 0x170; // List`1
			constexpr auto stockings = 0x178; // List`1
			constexpr auto bells = 0x180; // AudioSource
		}
		namespace ZiplineArrivalPoint
		{
			constexpr auto Line = 0x168; // LineRenderer
			constexpr auto linePositions = 0x170; // Vector3[]
		}
		namespace ZiplineAudio
		{
			constexpr auto zipline = 0x18; // ZiplineMountable
			constexpr auto movementLoopDef = 0x20; // SoundDefinition
			constexpr auto frictionLoopDef = 0x28; // SoundDefinition
			constexpr auto sparksLoopDef = 0x30; // SoundDefinition
			constexpr auto movementGainCurve = 0x38; // AnimationCurve
			constexpr auto movementPitchCurve = 0x40; // AnimationCurve
			constexpr auto frictionGainCurve = 0x48; // AnimationCurve
			constexpr auto sparksGainCurve = 0x50; // AnimationCurve
			constexpr auto movementLoop = 0x58; // Sound
			constexpr auto movementLoopGain = 0x60; // Modulator
			constexpr auto movementLoopPitch = 0x68; // Modulator
			constexpr auto frictionLoop = 0x70; // Sound
			constexpr auto frictionLoopGain = 0x78; // Modulator
			constexpr auto sparksLoop = 0x80; // Sound
			constexpr auto sparksLoopGain = 0x88; // Modulator
			constexpr auto sparksActive = 0x90; // bool
		}
		namespace ZiplineMountable
		{
			constexpr auto MoveSpeed = 0x350; // float
			constexpr auto ForwardAdditive = 0x354; // float
			constexpr auto ZipCollider = 0x358; // CapsuleCollider
			constexpr auto ZiplineGrabRoot = 0x360; // Transform
			constexpr auto LeftHandIkPoint = 0x368; // Transform
			constexpr auto RightHandIkPoint = 0x370; // Transform
			constexpr auto SpeedUpTime = 0x378; // float
			constexpr auto EditorHoldInPlace = 0x37C; // bool
			constexpr auto linePoints = 0x380; // List`1
			constexpr auto MountPositionCurve = 0x388; // AnimationCurve
			constexpr auto MountRotationCurve = 0x390; // AnimationCurve
			constexpr auto MountEaseInTime = 0x398; // float
			constexpr auto forwardSpeedAnim = 0x39C; // float
		}
		namespace ZiplineTarget
		{
			constexpr auto Target = 0x18; // Transform
			constexpr auto IsChainPoint = 0x20; // bool
			constexpr auto MonumentConnectionDotMin = 0x24; // float
			constexpr auto MonumentConnectionDotMax = 0x28; // float
		}
		namespace ShopFrontLootPanel
		{
			constexpr auto playerLabelA = 0x40; // Text
			constexpr auto playerLabelB = 0x48; // Text
			constexpr auto confirmButton = 0x50; // GameObject
			constexpr auto confirmHelp = 0x58; // GameObject
			constexpr auto denyButton = 0x60; // GameObject
			constexpr auto denyHelp = 0x68; // GameObject
			constexpr auto waitingText = 0x70; // GameObject
			constexpr auto exchangeInProgressImage = 0x78; // GameObject
			constexpr auto acceptedPhrase = 0x80; // Phrase
			constexpr auto noOnePhrase = 0x88; // Phrase
		}
		namespace BurstClothCollider
		{
			constexpr auto Height = 0x18; // float
			constexpr auto Radius = 0x1C; // float
		}
		namespace BurstClothHitBoxCollision
		{
			constexpr auto UseLocalGravity = 0x130; // bool
			constexpr auto GravityStrength = 0x134; // float
			constexpr auto DefaultLength = 0x138; // float
			constexpr auto MountedLengthMultiplier = 0x13C; // float
			constexpr auto DuckedLengthMultiplier = 0x140; // float
			constexpr auto CorpseLengthMultiplier = 0x144; // float
			constexpr auto UpAxis = 0x148; // Transform
			constexpr auto ColliderRoot = 0x150; // Transform
			constexpr auto IgnoreKeywords = 0x158; // string[]
			constexpr auto _player = 0x160; // BasePlayer
			constexpr auto _ragdoll = 0x168; // Ragdoll
			constexpr auto _hitboxSystem = 0x170; // HitboxSystem
		}
		namespace GhostSheetSystemSpaceUpdater
		{
			constexpr auto ezSoftBones = 0x18; // EZSoftBone[]
			constexpr auto player = 0x20; // BasePlayer
		}
		namespace NVGCamera
		{
			constexpr auto instance = 0x0; // NVGCamera
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto lights = 0x20; // GameObject
			constexpr auto initalized = 0x28; // bool
		}
		namespace NVGEffect
		{
			constexpr auto ColorCorrection1 = 0x28; // ColorCorrectionParams
			constexpr auto ColorCorrection2 = 0x48; // ColorCorrectionParams
			constexpr auto NoiseAndGrain = 0x68; // NoiseAndGrainParams
			constexpr auto rgbChannelTex1 = 0xA0; // Texture2D
			constexpr auto rgbChannelTex2 = 0xA8; // Texture2D
			constexpr auto updateTexturesOnStartup = 0xB0; // bool
			constexpr auto NoiseTexture = 0xB8; // Texture2D
			constexpr auto NOISE_TILE_AMOUNT = 0x0; // float
			constexpr auto Shader = 0xC0; // Shader
			constexpr auto material = 0xC8; // Material
		}
		namespace IdentifierConfig
		{
			constexpr auto rc = 0x30; // IRemoteControllable
			constexpr auto input = 0x38; // InputField
			constexpr auto id = 0x40; // string
		}
		namespace RemoteControllableControls
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace CameraViewerId
		{
			constexpr auto SteamId = 0x0; // UInt64
			constexpr auto ConnectionId = 0x8; // Int64
		}
		namespace ComputerMenu
		{
			constexpr auto bookmarkContainer = 0x30; // RectTransform
			constexpr auto bookmarkPrefab = 0x38; // GameObject
			constexpr auto activeEntries = 0x40; // List`1
			constexpr auto ownerComputer = 0x48; // EntityRef
			constexpr auto selectedBookmarkID = 0x58; // string
		}
		namespace RCBookmarkEntry
		{
			constexpr auto identifierk__BackingField = 0x18; // string
			constexpr auto owner = 0x20; // ComputerMenu
			constexpr auto connectButton = 0x28; // RectTransform
			constexpr auto disconnectButton = 0x30; // RectTransform
			constexpr auto onlineIndicator = 0x38; // RawImage
			constexpr auto offlineIndicator = 0x40; // RawImage
			constexpr auto selectedindicator = 0x48; // GameObject
			constexpr auto backgroundImage = 0x50; // Image
			constexpr auto selectedColor = 0x58; // Color
			constexpr auto activeColor = 0x68; // Color
			constexpr auto inactiveColor = 0x78; // Color
			constexpr auto nameLabel = 0x88; // Text
			constexpr auto isSelectedk__BackingField = 0x90; // bool
			constexpr auto isControllingk__BackingField = 0x91; // bool
			constexpr auto eventTrigger = 0x98; // EventTrigger
			constexpr auto RectTransformk__BackingField = 0xA0; // RectTransform
		}
		namespace RCMenu
		{
			constexpr auto backgroundOpaque = 0x60; // Image
			constexpr auto newBookmarkEntryField = 0x68; // InputField
			constexpr auto needsCursor = 0x70; // NeedsCursor
			constexpr auto hiddenOffset = 0x78; // float
			constexpr auto devicesPanel = 0x80; // RectTransform
			constexpr auto initialDevicesPosition = 0x88; // Vector3
			constexpr auto isControllingCamera = 0x0; // bool
			constexpr auto overExposure = 0x98; // CanvasGroup
			constexpr auto interference = 0xA0; // CanvasGroup
			constexpr auto interferenceFadeDuration = 0xA8; // float
			constexpr auto rangeInterferenceScale = 0xAC; // float
			constexpr auto timeText = 0xB0; // Text
			constexpr auto watchedDurationText = 0xB8; // Text
			constexpr auto deviceNameText = 0xC0; // Text
			constexpr auto noSignalText = 0xC8; // Text
			constexpr auto healthText = 0xD0; // Text
			constexpr auto healthBarParent = 0xD8; // GameObject
			constexpr auto healthBarBackground = 0xE0; // RectTransform
			constexpr auto healthBarFill = 0xE8; // RectTransform
			constexpr auto bookmarkPressedSoundDef = 0xF0; // SoundDefinition
			constexpr auto hideIfStatic = 0xF8; // GameObject[]
			constexpr auto readOnlyIndicator = 0x100; // GameObject
			constexpr auto aimCrosshair = 0x108; // GameObject
			constexpr auto generalCrosshair = 0x110; // GameObject
			constexpr auto fogOverrideDensity = 0x118; // float
			constexpr auto autoTurretFogDistance = 0x11C; // float
			constexpr auto autoTurretDotBaseScale = 0x120; // float
			constexpr auto autoTurretDotGrowScale = 0x124; // float
			constexpr auto PingManager = 0x128; // PingManager
			constexpr auto scrollRect = 0x130; // ScrollRectSettable
			constexpr auto startWatchingTime = 0x138; // float
			constexpr auto noSignalDuration = 0x13C; // float
			constexpr auto currentEntity = 0x140; // BaseEntity
			constexpr auto devicePanelVisible = 0x148; // bool
		}
		namespace Drone
		{
			constexpr auto maxControlRange = 0x0; // float
			constexpr auto movementSpeedOverride = 0x4; // float
			constexpr auto altitudeSpeedOverride = 0x8; // float
			constexpr auto windTimeDivisor = 0xC; // float
			constexpr auto windPositionDivisor = 0x10; // float
			constexpr auto windPositionScale = 0x14; // float
			constexpr auto windRotationMultiplier = 0x18; // float
			constexpr auto windLerpSpeed = 0x1C; // float
			constexpr auto body = 0x2D8; // Rigidbody
			constexpr auto modelRoot = 0x2E0; // Transform
			constexpr auto killInWater = 0x2E8; // bool
			constexpr auto enableGrounding = 0x2E9; // bool
			constexpr auto keepAboveTerrain = 0x2EA; // bool
			constexpr auto groundTraceDist = 0x2EC; // float
			constexpr auto groundCheckInterval = 0x2F0; // float
			constexpr auto altitudeAcceleration = 0x2F4; // float
			constexpr auto movementAcceleration = 0x2F8; // float
			constexpr auto yawSpeed = 0x2FC; // float
			constexpr auto uprightSpeed = 0x300; // float
			constexpr auto uprightPrediction = 0x304; // float
			constexpr auto uprightDot = 0x308; // float
			constexpr auto leanWeight = 0x30C; // float
			constexpr auto leanMaxVelocity = 0x310; // float
			constexpr auto hurtVelocityThreshold = 0x314; // float
			constexpr auto hurtDamagePower = 0x318; // float
			constexpr auto collisionDisableTime = 0x31C; // float
			constexpr auto pitchMin = 0x320; // float
			constexpr auto pitchMax = 0x324; // float
			constexpr auto pitchSensitivity = 0x328; // float
			constexpr auto disableWhenHurt = 0x32C; // bool
			constexpr auto disableWhenHurtChance = 0x330; // float
			constexpr auto playerCheckInterval = 0x334; // float
			constexpr auto playerCheckRadius = 0x338; // float
			constexpr auto deployYOffset = 0x33C; // float
			constexpr auto movementLoopSoundDef = 0x340; // SoundDefinition
			constexpr auto movementStartSoundDef = 0x348; // SoundDefinition
			constexpr auto movementStopSoundDef = 0x350; // SoundDefinition
			constexpr auto movementLoopPitchCurve = 0x358; // AnimationCurve
			constexpr auto movementSpeedReference = 0x360; // float
			constexpr auto propellerMaxSpeed = 0x364; // float
			constexpr auto propellerAcceleration = 0x368; // float
			constexpr auto propellerA = 0x370; // Transform
			constexpr auto propellerB = 0x378; // Transform
			constexpr auto propellerC = 0x380; // Transform
			constexpr auto propellerD = 0x388; // Transform
			constexpr auto pitch = 0x390; // float
			constexpr auto movementLoopSound = 0x398; // Sound
			constexpr auto movementLoopPitch = 0x3A0; // Modulator
			constexpr auto propellerAngle = 0x3A8; // float
			constexpr auto propellerSpeed = 0x3AC; // float
			constexpr auto localClientIsControlling = 0x3B0; // bool
		}
		namespace DropBox
		{
			constexpr auto EyePoint = 0x4A0; // Transform
		}
		namespace Elevator
		{
			constexpr auto LiftRoot = 0x2A8; // Transform
			constexpr auto LiftEntityPrefab = 0x2B0; // GameObjectRef
			constexpr auto IoEntityPrefab = 0x2B8; // GameObjectRef
			constexpr auto IoEntitySpawnPoint = 0x2C0; // Transform
			constexpr auto FloorBlockerVolume = 0x2C8; // GameObject
			constexpr auto LiftSpeedPerMetre = 0x2D0; // float
			constexpr auto PoweredObjects = 0x2D8; // GameObject[]
			constexpr auto PoweredMesh = 0x2E0; // MeshRenderer
			constexpr auto PoweredLightColour = 0x2E8; // Color
			constexpr auto UnpoweredLightColour = 0x2F8; // Color
			constexpr auto CableRenderers = 0x308; // SkinnedMeshRenderer[]
			constexpr auto CableLod = 0x310; // LODGroup
			constexpr auto CableRoot = 0x318; // Transform
			constexpr auto LiftMoveDelay = 0x320; // float
			constexpr auto Floork__BackingField = 0x324; // int32_t
			constexpr auto liftEntity = 0x328; // ElevatorLift
		}
		namespace ElevatorStatic
		{
			constexpr auto StaticTop = 0x330; // bool
		}
		namespace FrankensteinTableVisuals
		{
			constexpr auto FXReady = 0x18; // GameObject
			constexpr auto FXNotReady = 0x20; // GameObject
			constexpr auto FXWake = 0x28; // GameObject
			constexpr auto HeadVisualAnchor = 0x30; // Transform
			constexpr auto TorsoVisualAnchor = 0x38; // Transform
			constexpr auto LegsVisualAnchor = 0x40; // Transform
			constexpr auto Animator = 0x48; // Animator
		}
		namespace HitchTrough
		{
			constexpr auto hitchSpots = 0x418; // HitchSpot[]
			constexpr auto caloriesToDecaySeconds = 0x420; // float
		}
		namespace ElectricBattery
		{
			constexpr auto maxOutput = 0x2A8; // int32_t
			constexpr auto maxCapactiySeconds = 0x2AC; // float
			constexpr auto rustWattSeconds = 0x2B0; // float
			constexpr auto activeDrain = 0x2B4; // int32_t
			constexpr auto rechargable = 0x2B8; // bool
			constexpr auto maximumInboundEnergyRatio = 0x2BC; // float
			constexpr auto chargeRatio = 0x2C0; // float
		}
		namespace BaseDetector
		{
			constexpr auto myTrigger = 0x2A8; // PlayerDetectionTrigger
		}
		namespace PlayerDetectionTrigger
		{
			constexpr auto myDetector = 0x30; // BaseDetector
		}
		namespace PressurePad
		{
			constexpr auto pressPowerTime = 0x2B0; // float
			constexpr auto pressPowerAmount = 0x2B4; // int32_t
		}
		namespace ElectricalHeater
		{
			constexpr auto fadeDuration = 0x2A8; // float
			constexpr auto sourceLight = 0x2B0; // Light
			constexpr auto growableHeatSource = 0x2B8; // GrowableHeatSource
			constexpr auto initialIntensity = 0x2C0; // float
			constexpr auto currentScale = 0x2C4; // float
			constexpr auto wasOn = 0x2C8; // bool
		}
		namespace GrowableHeatSource
		{
			constexpr auto heatAmount = 0x20; // float
		}
		namespace ElectricalCombiner
		{
			constexpr auto input1Amount = 0x2A8; // int32_t
			constexpr auto input2Amount = 0x2AC; // int32_t
			constexpr auto input3Amount = 0x2B0; // int32_t
		}
		namespace FuelElectricGenerator
		{
			constexpr auto electricAmount = 0x2A8; // float
		}
		namespace SolarPanel
		{
			constexpr auto sunSampler = 0x2A8; // Transform
			constexpr auto maximalPowerOutput = 0x2B0; // int32_t
			constexpr auto dot_minimum = 0x2B4; // float
			constexpr auto dot_maximum = 0x2B8; // float
		}
		namespace Igniter
		{
			constexpr auto IgniteRange = 0x2A8; // float
			constexpr auto IgniteFrequency = 0x2AC; // float
			constexpr auto IgniteStartDelay = 0x2B0; // float
			constexpr auto LineOfSightEyes = 0x2B8; // Transform
			constexpr auto SelfDamagePerIgnite = 0x2C0; // float
			constexpr auto PowerConsumption = 0x2C4; // int32_t
		}
		namespace FlasherLight
		{
			constexpr auto toggler = 0x2A8; // EmissionToggle
			constexpr auto myLight = 0x2B0; // Light
			constexpr auto flashSpacing = 0x2B8; // float
			constexpr auto flashBurstSpacing = 0x2BC; // float
			constexpr auto flashOnTime = 0x2C0; // float
			constexpr auto numFlashesPerBurst = 0x2C4; // int32_t
			constexpr auto flashBurstCount = 0x2C8; // int32_t
		}
		namespace SirenLight
		{
			constexpr auto lightObj = 0x2A8; // GameObject
			constexpr auto speed = 0x2B0; // float
		}
		namespace Sprinkler
		{
			constexpr auto SplashFrequency = 0x2A8; // float
			constexpr auto Eyes = 0x2B0; // Transform
			constexpr auto WaterPerSplash = 0x2B8; // int32_t
			constexpr auto DecayPerSplash = 0x2BC; // float
		}
		namespace TeslaCoil
		{
			constexpr auto targetTrigger = 0x2A8; // TargetTrigger
			constexpr auto movementTrigger = 0x2B0; // TriggerMovement
			constexpr auto powerToDamageRatio = 0x2B8; // float
			constexpr auto dischargeTickRate = 0x2BC; // float
			constexpr auto maxDischargeSelfDamageSeconds = 0x2C0; // float
			constexpr auto maxDamageOutput = 0x2C4; // float
			constexpr auto damageEyes = 0x2C8; // Transform
			constexpr auto powerForHeavyShorting = 0x2D0; // int32_t
		}
		namespace LootPanelToolCupboard
		{
			constexpr auto costIcons = 0x40; // List`1
			constexpr auto costPerTimeText = 0x48; // Text
			constexpr auto protectedText = 0x50; // Text
			constexpr auto baseNotProtectedObj = 0x58; // GameObject
			constexpr auto baseProtectedObj = 0x60; // GameObject
			constexpr auto protectedPrefix = 0x68; // Phrase
			constexpr auto costToolTip = 0x70; // Tooltip
			constexpr auto blocksPhrase = 0x78; // Phrase
			constexpr auto nextUpdateTime = 0x80; // float
		}
		namespace InvisibleVendingMachine
		{
			constexpr auto buyEffect = 0x668; // GameObjectRef
			constexpr auto vmoManifest = 0x670; // NPCVendingOrderManifest
		}
		namespace NPCVendingOrder
		{
			constexpr auto orders = 0x18; // Entry[]
		}
		namespace NPCVendingOrderManifest
		{
			constexpr auto orderList = 0x18; // NPCVendingOrder[]
		}
		namespace NPCVendingMachine
		{
			constexpr auto vendingOrders = 0x660; // NPCVendingOrder
		}
		namespace AddSellOrderManager
		{
			constexpr auto sellItemIcon = 0x18; // VirtualItemIcon
			constexpr auto currencyItemIcon = 0x20; // VirtualItemIcon
			constexpr auto itemSearchParent = 0x28; // GameObject
			constexpr auto itemSearchEntryPrefab = 0x30; // ItemSearchEntry
			constexpr auto sellItemInput = 0x38; // InputField
			constexpr auto sellItemAmount = 0x40; // InputField
			constexpr auto currencyItemInput = 0x48; // InputField
			constexpr auto currencyItemAmount = 0x50; // InputField
			constexpr auto adminPanel = 0x58; // VendingPanelAdmin
		}
		namespace AdminExistingSellOrder
		{
			constexpr auto MerchandiseIcon = 0x18; // VirtualItemIcon
			constexpr auto CurrencyIcon = 0x20; // VirtualItemIcon
			constexpr auto adminPanel = 0x28; // VendingPanelAdmin
			constexpr auto index = 0x30; // int32_t
		}
		namespace BranchConfig
		{
			constexpr auto branch = 0x30; // ElectricalBranch
			constexpr auto input = 0x38; // InputField
			constexpr auto target = 0x40; // int32_t
		}
		namespace CounterConfig
		{
			constexpr auto powerCounter = 0x30; // PowerCounter
			constexpr auto input = 0x38; // InputField
			constexpr auto target = 0x40; // int32_t
		}
		namespace ItemSearchEntry
		{
			constexpr auto button = 0x18; // Button
			constexpr auto text = 0x20; // Text
			constexpr auto image = 0x28; // RawImage
			constexpr auto bpImage = 0x30; // RawImage
			constexpr auto itemInfo = 0x38; // ItemDefinition
			constexpr auto manager = 0x40; // AddSellOrderManager
			constexpr auto dialog = 0x48; // IndustrialFilterDialog
			constexpr auto selectedCategory = 0x50; // Nullable`1
		}
		namespace LootPanelVendingMachine
		{
			constexpr auto sellOrderPrefab = 0x40; // GameObjectRef
			constexpr auto sellOrderContainer = 0x48; // GameObject
			constexpr auto busyOverlayPrefab = 0x50; // GameObject
			constexpr auto busyOverlayInstance = 0x58; // GameObject
			constexpr auto Instance = 0x0; // LootPanelVendingMachine
			constexpr auto cachedStates = 0x60; // List`1
		}
		namespace SellOrderEntry
		{
			constexpr auto MerchandiseIcon = 0x18; // VirtualItemIcon
			constexpr auto CurrencyIcon = 0x20; // VirtualItemIcon
			constexpr auto merchandiseInfo = 0x28; // ItemDefinition
			constexpr auto currencyInfo = 0x30; // ItemDefinition
			constexpr auto buyButton = 0x38; // GameObject
			constexpr auto cantaffordNotification = 0x40; // GameObject
			constexpr auto outOfStockNotification = 0x48; // GameObject
			constexpr auto vendingPanel = 0x50; // IVendingMachineInterface
			constexpr auto intEntry = 0x58; // UIIntegerEntry
			constexpr auto onAmountChanged = 0x60; // Action`2
			constexpr auto sellOrder = 0x68; // SellOrder
			constexpr auto dirty = 0x70; // bool
			constexpr auto minMultiplier = 0x74; // int32_t
			constexpr auto merchIsBP = 0x78; // bool
			constexpr auto currencyIsBP = 0x79; // bool
			constexpr auto merchandiseSellSize = 0x7C; // int32_t
			constexpr auto currencyAmountPerItem = 0x80; // int32_t
			constexpr auto index = 0x84; // int32_t
			constexpr auto numInStock = 0x88; // int32_t
			constexpr auto itemCondition = 0x8C; // float
			constexpr auto itemConditionMax = 0x90; // float
			constexpr auto itemInstanceInt = 0x94; // int32_t
		}
		namespace TimerConfig
		{
			constexpr auto timerSwitch = 0x30; // CustomTimerSwitch
			constexpr auto input = 0x38; // InputField
			constexpr auto minTime = 0x0; // float
			constexpr auto seconds = 0x40; // float
		}
		namespace VendingPanelAdmin
		{
			constexpr auto sellOrderAdminContainer = 0x30; // GameObject
			constexpr auto sellOrderAdminPrefab = 0x38; // GameObject
			constexpr auto storeNameInputField = 0x40; // InputField
			constexpr auto vendingMachine = 0x48; // VendingMachine
		}
		namespace VendingMachineScreen
		{
			constexpr auto largeIcon = 0x18; // RawImage
			constexpr auto blueprintIcon = 0x20; // RawImage
			constexpr auto mainText = 0x28; // Text
			constexpr auto lowerText = 0x30; // Text
			constexpr auto centerText = 0x38; // Text
			constexpr auto smallIcon = 0x40; // RawImage
			constexpr auto vendingMachine = 0x48; // VendingMachine
			constexpr auto outOfStockSprite = 0x50; // Sprite
			constexpr auto fadeoutMesh = 0x58; // Renderer
			constexpr auto screenCanvas = 0x60; // CanvasGroup
			constexpr auto light1 = 0x68; // Renderer
			constexpr auto light2 = 0x70; // Renderer
			constexpr auto nextImageTime = 0x78; // float
			constexpr auto currentImageIndex = 0x7C; // int32_t
			constexpr auto imageCycleTime = 0x80; // float
		}
		namespace ElectricWindmill
		{
			constexpr auto animator = 0x2A8; // Animator
			constexpr auto maxPowerGeneration = 0x2B0; // int32_t
			constexpr auto vaneRot = 0x2B8; // Transform
			constexpr auto wooshSound = 0x2C0; // SoundDefinition
			constexpr auto wooshOrigin = 0x2C8; // Transform
			constexpr auto targetSpeed = 0x2D0; // float
			constexpr auto serverWindSpeed = 0x2D4; // float
			constexpr auto lastServerTime = 0x2D8; // float
			constexpr auto speedIndex = 0x0; // int32_t
		}
		namespace ReclaimBackpack
		{
			constexpr auto reclaimID = 0x418; // int32_t
			constexpr auto playerSteamID = 0x420; // UInt64
			constexpr auto onlyOwnerLoot = 0x428; // bool
			constexpr auto myCollider = 0x430; // Collider
			constexpr auto art = 0x438; // GameObject
		}
		namespace InstrumentStateBehaviour
		{
			constexpr auto targetState = 0x0; // int32_t[]
			constexpr auto states = 0x8; // int32_t[]
			constexpr auto ignoreIndex = 0x18; // int32_t
			constexpr auto lastCrossfade = 0x1C; // float
			constexpr auto AnimatorCrossfadeDuration = 0x20; // float
		}
		namespace InstrumentViewmodel
		{
			constexpr auto ViewAnimator = 0x18; // Animator
			constexpr auto UpdateA = 0x20; // bool
			constexpr auto UpdateB = 0x21; // bool
			constexpr auto UpdateC = 0x22; // bool
			constexpr auto UpdateD = 0x23; // bool
			constexpr auto UpdateE = 0x24; // bool
			constexpr auto UpdateF = 0x25; // bool
			constexpr auto UpdateG = 0x26; // bool
			constexpr auto UpdateRecentlyPlayed = 0x27; // bool
			constexpr auto UpdatePlayedNoteTrigger = 0x28; // bool
			constexpr auto UseTriggers = 0x29; // bool
			constexpr auto note_a = 0x2C; // int32_t
			constexpr auto note_b = 0x30; // int32_t
			constexpr auto note_c = 0x34; // int32_t
			constexpr auto note_d = 0x38; // int32_t
			constexpr auto note_e = 0x3C; // int32_t
			constexpr auto note_f = 0x40; // int32_t
			constexpr auto note_g = 0x44; // int32_t
			constexpr auto recentlyPlayedHash = 0x48; // int32_t
			constexpr auto playedNoteHash = 0x4C; // int32_t
		}
		namespace BigWheelGame
		{
			constexpr auto hitNumbers = 0x5C0; // HitNumber[]
			constexpr auto indicator = 0x5C8; // GameObject
			constexpr auto winEffect = 0x5D0; // GameObjectRef
		}
		namespace HitNumber
		{
			constexpr auto hitType = 0x18; // HitType
		}
		namespace LootPanelBigWheelTerminal
		{
			constexpr auto timeRemainingText = 0x40; // Text
		}
		namespace SlotMachineLootPanel
		{
			constexpr auto spinsRemainingText = 0x40; // Text
			constexpr auto multiplierText = 0x48; // Text
			constexpr auto ScrapCostText = 0x50; // LocalizeText
		}
		namespace SlotMachinePayoutDisplay
		{
			constexpr auto PayoutWidget = 0x18; // GameObjectRef
			constexpr auto WidgetRoot = 0x20; // RectTransform
			constexpr auto FaceSprites = 0x28; // Sprite[]
			constexpr auto spawnedWidgets = 0x30; // List`1
		}
		namespace SlotMachinePayoutSettings
		{
			constexpr auto SpinCost = 0x18; // ItemAmount
			constexpr auto Payouts = 0x20; // PayoutInfo[]
			constexpr auto VirtualFaces = 0x28; // int32_t[]
			constexpr auto FacePayouts = 0x30; // IndividualPayouts[]
			constexpr auto TotalStops = 0x38; // int32_t
			constexpr auto DefaultWinEffect = 0x40; // GameObjectRef
		}
		namespace SlotMachinePayoutWidget
		{
			constexpr auto PayoutAmount = 0x18; // RustText
			constexpr auto AnyText = 0x20; // GameObject
			constexpr auto Faces = 0x28; // Image[]
		}
		namespace ChineseLantern
		{
			constexpr auto pivotRotator = 0x568; // Transform
			constexpr auto swaySpeed = 0x570; // float
			constexpr auto swayDistance = 0x574; // float
			constexpr auto lerpSpeed = 0x578; // float
			constexpr auto lookupIndex = 0x57C; // float
		}
		namespace SkyLantern
		{
			constexpr auto gravityScale = 0x418; // float
			constexpr auto travelSpeed = 0x41C; // float
			constexpr auto collisionRadius = 0x420; // float
			constexpr auto rotationSpeed = 0x424; // float
			constexpr auto randOffset = 0x428; // float
			constexpr auto lifeTime = 0x42C; // float
			constexpr auto hoverHeight = 0x430; // float
			constexpr auto collisionCheckPoint = 0x438; // Transform
		}
		namespace FirecrackerRepeater
		{
			constexpr auto singleExplosionEffect = 0x18; // GameObjectRef
			constexpr auto parts = 0x20; // Transform[]
			constexpr auto partWidth = 0x28; // float
			constexpr auto partLength = 0x2C; // float
			constexpr auto targetRotations = 0x30; // Quaternion[]
			constexpr auto initialRotations = 0x38; // Quaternion[]
			constexpr auto renderers = 0x40; // Renderer[]
			constexpr auto materialSource = 0x48; // Material
			constexpr auto explodeRepeatMin = 0x50; // float
			constexpr auto explodeRepeatMax = 0x54; // float
			constexpr auto explodeLerpSpeed = 0x58; // float
			constexpr auto twistAmount = 0x5C; // Vector3
			constexpr auto fuseLength = 0x68; // float
			constexpr auto explodeStrength = 0x6C; // float
			constexpr auto explodeDirBlend = 0x70; // float
			constexpr auto duration = 0x74; // float
			constexpr auto smokeParticle = 0x78; // ParticleSystemContainer
			constexpr auto nextExplodeTime = 0x80; // float
			constexpr auto nextPartTime = 0x84; // float
			constexpr auto explodingPartIndex = 0x88; // int32_t
			constexpr auto instancedMaterial = 0x90; // Material
			constexpr auto lit = 0x98; // bool
			constexpr auto startTime = 0x9C; // float
		}
		namespace StringFirecracker
		{
			constexpr auto serverRigidBody = 0x1C0; // Rigidbody
			constexpr auto clientMiddleBody = 0x1C8; // Rigidbody
			constexpr auto clientParts = 0x1D0; // Rigidbody[]
			constexpr auto serverClientJoint = 0x1D8; // SpringJoint
			constexpr auto clientFirecrackerTransform = 0x1E0; // Transform
		}
		namespace ArcadeClientAuthTest
		{
			constexpr auto speed = 0x38; // float
			constexpr auto maxSpeed = 0x3C; // float
			constexpr auto myGame = 0x40; // BaseArcadeGame
			constexpr auto myEntity = 0x48; // ArcadeEntity
		}
		namespace ArcadeEntity
		{
			constexpr auto id = 0x18; // uint32_t
			constexpr auto spriteID = 0x1C; // uint32_t
			constexpr auto soundID = 0x20; // uint32_t
			constexpr auto visible = 0x24; // bool
			constexpr auto heading = 0x28; // Vector3
			constexpr auto isEnabled = 0x34; // bool
			constexpr auto dirty = 0x35; // bool
			constexpr auto alpha = 0x38; // float
			constexpr auto boxCollider = 0x40; // BoxCollider
			constexpr auto host = 0x48; // bool
			constexpr auto localAuthorativeOverride = 0x49; // bool
			constexpr auto arcadeEntityParent = 0x50; // ArcadeEntity
			constexpr auto prefabID = 0x58; // uint32_t
			constexpr auto takesDamage = 0x5C; // bool
			constexpr auto health = 0x60; // float
			constexpr auto maxHealth = 0x64; // float
			constexpr auto mapLoadedEntiy = 0x68; // bool
			constexpr auto spriteRef = 0x70; // Sprite
			constexpr auto arcadeGameParent = 0x78; // BaseArcadeGame
			constexpr auto controller = 0x80; // ArcadeEntityController
			constexpr auto PARENTID_INVALID = 0x0; // uint32_t
			constexpr auto savedState = 0x88; // arcadeEnt
		}
		namespace ArcadeEntityController
		{
			constexpr auto parentGame = 0x18; // BaseArcadeGame
			constexpr auto arcadeEntity = 0x20; // ArcadeEntity
			constexpr auto sourceEntity = 0x28; // ArcadeEntity
			constexpr auto authorative = 0x30; // bool
		}
		namespace BaseArcadeGame
		{
			constexpr auto globalActiveGames = 0x0; // List`1
			constexpr auto cameraToRender = 0x18; // Camera
			constexpr auto renderTexture = 0x20; // RenderTexture
			constexpr auto distantTexture = 0x28; // Texture2D
			constexpr auto center = 0x30; // Transform
			constexpr auto frameRate = 0x38; // int32_t
			constexpr auto activeArcadeEntities = 0x40; // Dictionary`2
			constexpr auto spriteManifest = 0x48; // Sprite[]
			constexpr auto entityManifest = 0x50; // ArcadeEntity[]
			constexpr auto clientside = 0x58; // bool
			constexpr auto clientsideInput = 0x59; // bool
			constexpr auto arcadeEntityPrefab = 0x60; // GameObject
			constexpr auto ownerMachine = 0x68; // BaseArcadeMachine
			constexpr auto gameOffsetIndex = 0x8; // int32_t
			constexpr auto isAuthorative = 0x70; // bool
			constexpr auto canvas = 0x78; // Canvas
			constexpr auto lastFrameRate = 0x80; // float
			constexpr auto lastEntityID = 0x84; // uint32_t
			constexpr auto currentGameVisibility = 0x88; // bool
			constexpr auto lastSnapshotTime = 0x8C; // float
		}
		namespace BossFormController
		{
			constexpr auto animationSpeed = 0x38; // float
			constexpr auto animationFrames = 0x40; // Sprite[]
			constexpr auto roamDistance = 0x48; // Vector2
			constexpr auto colliderParent = 0x50; // Transform
			constexpr auto damagePoints = 0x58; // BossDamagePoint[]
			constexpr auto flashController = 0x60; // ArcadeEntityController
			constexpr auto health = 0x68; // float
			constexpr auto currentFrame = 0x6C; // int32_t
			constexpr auto animDirection = 0x70; // int32_t
		}
		namespace ChippyArcadeGame
		{
			constexpr auto mainChar = 0x90; // ChippyMainCharacter
			constexpr auto mainCharAim = 0x98; // SpriteArcadeEntity
			constexpr auto currentBoss = 0xA0; // ChippyBoss
			constexpr auto bossPrefabs = 0xA8; // ChippyBoss[]
			constexpr auto mainMenuLogo = 0xB0; // SpriteArcadeEntity
			constexpr auto respawnPoint = 0xB8; // Transform
			constexpr auto mouseAim = 0xC0; // Vector2
			constexpr auto levelIndicator = 0xC8; // TextArcadeEntity
			constexpr auto gameOverIndicator = 0xD0; // TextArcadeEntity
			constexpr auto playGameButton = 0xD8; // TextArcadeEntity
			constexpr auto highScoresButton = 0xE0; // TextArcadeEntity
			constexpr auto OnMainMenu = 0xE8; // bool
			constexpr auto GameActive = 0xE9; // bool
			constexpr auto level = 0xEC; // int32_t
			constexpr auto scoreDisplays = 0xF0; // TextArcadeEntity[]
			constexpr auto mainMenuButtons = 0xF8; // MenuButtonArcadeEntity[]
			constexpr auto selectedButtonIndex = 0x100; // int32_t
			constexpr auto OnHighScores = 0x104; // bool
			constexpr auto lastInputTime = 0x108; // float
			constexpr auto nextFireTime = 0x10C; // float
			constexpr auto nextClickTime = 0x110; // float
		}
		namespace ChippyBoss
		{
			constexpr auto roamDistance = 0x98; // Vector2
			constexpr auto animationSpeed = 0xA0; // float
			constexpr auto animationFrames = 0xA8; // Sprite[]
			constexpr auto bulletTest = 0xB0; // ArcadeEntity
			constexpr auto flashRenderer = 0xB8; // SpriteRenderer
			constexpr auto damagePoints = 0xC0; // BossDamagePoint[]
			constexpr auto moveSpeed = 0xC8; // float
			constexpr auto bossLevel = 0xCC; // int32_t
			constexpr auto fireRate = 0xD0; // float
			constexpr auto currentFrame = 0xD4; // int32_t
			constexpr auto animDirection = 0xD8; // int32_t
			constexpr auto nextBulletTime = 0xDC; // float
		}
		namespace ChippyBulletEntity
		{
			constexpr auto speed = 0x98; // float
			constexpr auto maxSpeed = 0x9C; // float
			constexpr auto radius = 0xA0; // float
			constexpr auto damage = 0xA4; // float
			constexpr auto bulletImpact = 0xA8; // ArcadeEntity
		}
		namespace ChippyMainCharacter
		{
			constexpr auto speed = 0x98; // float
			constexpr auto maxSpeed = 0x9C; // float
			constexpr auto bulletPrefab = 0xA0; // ChippyBulletEntity
			constexpr auto fireRate = 0xA8; // float
			constexpr auto aimDir = 0xAC; // Vector3
		}
		namespace ChippyMoveTest
		{
			constexpr auto heading = 0x18; // Vector3
			constexpr auto speed = 0x24; // float
			constexpr auto maxSpeed = 0x28; // float
		}
		namespace DestroyArcadeEntity
		{
			constexpr auto ent = 0x18; // ArcadeEntity
			constexpr auto TimeToDie = 0x20; // float
			constexpr auto TimeToDieVariance = 0x24; // float
		}
		namespace MenuButtonArcadeEntity
		{
			constexpr auto titleText = 0x98; // string
			constexpr auto selectionSuffix = 0xA0; // string
			constexpr auto clickMessage = 0xA8; // string
		}
		namespace SpriteArcadeEntity
		{
			constexpr auto spriteRenderer = 0x90; // SpriteRenderer
		}
		namespace TennisArcadeGame
		{
			constexpr auto paddle1 = 0x90; // ArcadeEntity
			constexpr auto paddle2 = 0x98; // ArcadeEntity
			constexpr auto ball = 0xA0; // ArcadeEntity
			constexpr auto paddle1Origin = 0xA8; // Transform
			constexpr auto paddle2Origin = 0xB0; // Transform
			constexpr auto paddle1Goal = 0xB8; // Transform
			constexpr auto paddle2Goal = 0xC0; // Transform
			constexpr auto ballSpawn = 0xC8; // Transform
			constexpr auto maxScore = 0xD0; // float
			constexpr auto paddle1ScoreNodes = 0xD8; // ArcadeEntity[]
			constexpr auto paddle2ScoreNodes = 0xE0; // ArcadeEntity[]
			constexpr auto paddle1Score = 0xE8; // int32_t
			constexpr auto paddle2Score = 0xEC; // int32_t
			constexpr auto sensitivity = 0xF0; // float
			constexpr auto logo = 0xF8; // ArcadeEntity
			constexpr auto OnMainMenu = 0x100; // bool
			constexpr auto GameActive = 0x101; // bool
			constexpr auto paddleMoveSpeed = 0x104; // float
			constexpr auto lastInputTime = 0x108; // float
			constexpr auto lastHeight = 0x10C; // float
			constexpr auto lastAIHeight = 0x110; // float
		}
		namespace TennisBall
		{
			constexpr auto speed = 0x98; // float
			constexpr auto maxSpeed = 0x9C; // float
		}
		namespace TextArcadeEntity
		{
			constexpr auto text = 0x90; // TextMeshProUGUI
		}
		namespace DiveSite
		{
			constexpr auto bobber = 0x188; // Transform
		}
		namespace EggAmmoRepresentation
		{
			constexpr auto eggAmmo = 0x18; // GameObject[]
		}
		namespace EggSwap
		{
			constexpr auto eggRenderers = 0x18; // Renderer[]
		}
		namespace EggHuntEvent
		{
			constexpr auto warmupTime = 0x178; // float
			constexpr auto cooldownTime = 0x17C; // float
			constexpr auto warnTime = 0x180; // float
			constexpr auto timeAlive = 0x184; // float
			constexpr auto serverEvent = 0x0; // EggHuntEvent
			constexpr auto clientEvent = 0x8; // EggHuntEvent
			constexpr auto durationSeconds = 0x10; // float
			constexpr auto _eggHunters = 0x188; // Dictionary`2
			constexpr auto clientTopHunters = 0x190; // List`1
		}
		namespace AnimationFlagHandler
		{
			constexpr auto animator = 0x18; // Animator
		}
		namespace JiggleBone
		{
			constexpr auto debugMode = 0x18; // bool
			constexpr auto targetPos = 0x1C; // Vector3
			constexpr auto dynamicPos = 0x28; // Vector3
			constexpr auto boneAxis = 0x34; // Vector3
			constexpr auto targetDistance = 0x40; // float
			constexpr auto bStiffness = 0x44; // float
			constexpr auto bMass = 0x48; // float
			constexpr auto bDamping = 0x4C; // float
			constexpr auto bGravity = 0x50; // float
			constexpr auto force = 0x54; // Vector3
			constexpr auto acc = 0x60; // Vector3
			constexpr auto vel = 0x6C; // Vector3
			constexpr auto SquashAndStretch = 0x78; // bool
			constexpr auto sideStretch = 0x7C; // float
			constexpr auto frontStretch = 0x80; // float
			constexpr auto disableDistance = 0x84; // float
			constexpr auto disabled = 0x88; // bool
		}
		namespace RandomRendererEnable
		{
			constexpr auto randoms = 0x18; // Renderer[]
			constexpr auto EnabledIndexk__BackingField = 0x20; // int32_t
		}
		namespace BunnyEntry
		{
			constexpr auto nameText = 0x18; // Text
			constexpr auto amountText = 0x20; // Text
			constexpr auto starImage = 0x28; // RawImage
			constexpr auto selfImage = 0x30; // RawImage
		}
		namespace EggHuntNote
		{
			constexpr auto mainGroup = 0x18; // CanvasGroup
			constexpr auto timerGroup = 0x20; // CanvasGroup
			constexpr auto timerText = 0x28; // Text
		}
		namespace TopBunnies
		{
			constexpr auto topBunnyEntries = 0x18; // BunnyEntry[]
			constexpr auto timerText = 0x20; // Text
			constexpr auto group = 0x28; // CanvasGroup
			constexpr auto endingColor = 0x30; // Color
			constexpr auto flash = 0x40; // bool
			constexpr auto lastSeconds = 0x44; // int32_t
		}
		namespace GraveyardFence
		{
			constexpr auto pillars = 0x280; // BoxCollider[]
		}
		namespace SkullTrophy
		{
			constexpr auto NameText = 0x418; // RustText
			constexpr auto CircleModifier = 0x420; // TextProOnACircle
			constexpr auto AngleModifierMinCharCount = 0x428; // int32_t
			constexpr auto AngleModifierMaxCharCount = 0x42C; // int32_t
			constexpr auto AngleModifierMinArcAngle = 0x430; // int32_t
			constexpr auto AngleModifierMaxArcAngle = 0x434; // int32_t
			constexpr auto SunsetTime = 0x438; // float
			constexpr auto SunriseTime = 0x43C; // float
			constexpr auto SkullRenderers = 0x440; // MeshRenderer[]
			constexpr auto DaySkull = 0x448; // Material[]
			constexpr auto NightSkull = 0x450; // Material[]
			constexpr auto NoSkull = 0x458; // Material[]
			constexpr auto _playerName = 0x460; // string
			constexpr auto _streamerName = 0x468; // string
		}
		namespace JunkPileWater
		{
			constexpr auto buoyancyPoints = 0x188; // Transform[]
			constexpr auto debugDraw = 0x190; // bool
		}
		namespace JunkPileWaterSpawner
		{
			constexpr auto attachToParent = 0x58; // BaseEntity
		}
		namespace DeliveryDrone
		{
			constexpr auto stateTimeout = 0x3B8; // float
			constexpr auto targetPositionTolerance = 0x3BC; // float
			constexpr auto preferredCruiseHeight = 0x3C0; // float
			constexpr auto preferredHeightAboveObstacle = 0x3C4; // float
			constexpr auto marginAbovePreferredHeight = 0x3C8; // float
			constexpr auto obstacleHeightLockDuration = 0x3CC; // float
			constexpr auto pickUpDelayInTicks = 0x3D0; // int32_t
			constexpr auto config = 0x3D8; // DeliveryDroneConfig
			constexpr auto mapMarkerPrefab = 0x3E0; // GameObjectRef
		}
		namespace DeliveryDroneConfig
		{
			constexpr auto vendingMachineOffset = 0x20; // Vector3
			constexpr auto maxDistanceFromVendingMachine = 0x2C; // float
			constexpr auto halfExtents = 0x30; // Vector3
			constexpr auto testHeight = 0x3C; // float
			constexpr auto layerMask = 0x40; // LayerMask
		}
		namespace MapMarkerDeliveryDrone
		{
			constexpr auto _rectTransform = 0x178; // RectTransform
		}
		namespace Marketplace
		{
			constexpr auto terminalPrefab = 0x168; // GameObjectRef
			constexpr auto terminalPoints = 0x170; // Transform[]
			constexpr auto droneLaunchPoint = 0x178; // Transform
			constexpr auto deliveryDronePrefab = 0x180; // GameObjectRef
		}
		namespace UIMarketSearch
		{
			constexpr auto StoreEntryRef = 0x18; // GameObjectRef
			constexpr auto StoreRoot = 0x20; // RectTransform
			constexpr auto Terminal = 0x28; // UIMarketTerminal
		}
		namespace UIMarketSearchOrderEntry
		{
			constexpr auto ItemName = 0x18; // RustText
			constexpr auto OutOfStockRoot = 0x20; // GameObject
			constexpr auto BpRoot = 0x28; // GameObject
		}
		namespace UIMarketSearchStore
		{
			constexpr auto StoreName = 0x18; // RustText
			constexpr auto Entries = 0x20; // List`1
			constexpr auto cachedMarker = 0x28; // VendingMachineMapMarker
			constexpr auto cachedTerminal = 0x30; // UIMarketTerminal
		}
		namespace UIMarketTerminal
		{
			constexpr auto PendingDeliveryPluralPhrase = 0x0; // Phrase
			constexpr auto PendingDeliverySingularPhrase = 0x8; // Phrase
			constexpr auto canvas = 0x30; // Canvas
			constexpr auto mapView = 0x38; // MapView
			constexpr auto shopDetailsPanel = 0x40; // RectTransform
			constexpr auto shopDetailsMargin = 0x48; // float
			constexpr auto easeDuration = 0x4C; // float
			constexpr auto easeType = 0x50; // LeanTweenType
			constexpr auto shopName = 0x58; // RustText
			constexpr auto shopOrderingPanel = 0x60; // GameObject
			constexpr auto sellOrderContainer = 0x68; // RectTransform
			constexpr auto sellOrderPrefab = 0x70; // GameObjectRef
			constexpr auto deliveryFeeIcon = 0x78; // VirtualItemIcon
			constexpr auto deliveryFeeCantAffordIndicator = 0x80; // GameObject
			constexpr auto inventoryFullIndicator = 0x88; // GameObject
			constexpr auto notEligiblePanel = 0x90; // GameObject
			constexpr auto pendingDeliveryPanel = 0x98; // GameObject
			constexpr auto pendingDeliveryLabel = 0xA0; // RustText
			constexpr auto itemNoticesContainer = 0xA8; // RectTransform
			constexpr auto itemRemovedPrefab = 0xB0; // GameObjectRef
			constexpr auto itemPendingPrefab = 0xB8; // GameObjectRef
			constexpr auto itemAddedPrefab = 0xC0; // GameObjectRef
			constexpr auto gettingStartedTip = 0xC8; // CanvasGroup
			constexpr auto buyItemSoundDef = 0xD0; // SoundDefinition
			constexpr auto buttonPressSoundDef = 0xD8; // SoundDefinition
			constexpr auto currentTerminalk__BackingField = 0xE0; // MarketTerminal
			constexpr auto _currentVendingMachine = 0xE8; // NetworkableId
			constexpr auto _eligibleVendingMachines = 0xF0; // HashSet`1
			constexpr auto _shopEntries = 0xF8; // List`1
			constexpr auto _onShopEntryAmountChangedCached = 0x100; // Action`2
		}
		namespace MonumentSign
		{
			constexpr auto viewDistance = 0x80; // float
			constexpr auto uiRoot = 0x88; // GameObject
			constexpr auto signText = 0x90; // RustText
			constexpr auto closestMonument = 0x98; // MonumentInfo
			constexpr auto currentLod = 0xA0; // int32_t
			constexpr auto force = 0xA4; // bool
		}
		namespace NotePanel
		{
			constexpr auto input = 0x18; // InputField
			constexpr auto item = 0x20; // Item
		}
		namespace CoverageQueryFlare
		{
			constexpr auto isDynamic = 0x18; // bool
			constexpr auto timeShimmer = 0x19; // bool
			constexpr auto positionalShimmer = 0x1A; // bool
			constexpr auto rotate = 0x1B; // bool
			constexpr auto maxVisibleDistance = 0x1C; // float
			constexpr auto lightScaled = 0x20; // bool
			constexpr auto dotMin = 0x24; // float
			constexpr auto dotMax = 0x28; // float
			constexpr auto coverageRadiusSpace = 0x2C; // RadiusSpace
			constexpr auto coverageRadius = 0x30; // float
			constexpr auto DistanceMode = 0x34; // LODDistanceMode
			constexpr auto block = 0x0; // MaterialPropertyBlock
			constexpr auto isCulled = 0x38; // bool
			constexpr auto isOccluded = 0x39; // bool
			constexpr auto curlod = 0x3C; // int32_t
			constexpr auto query = 0x40; // Query
			constexpr auto queryRegistered = 0x48; // bool
			constexpr auto privateRand = 0x4C; // float
			constexpr auto force = 0x50; // bool
			constexpr auto cell = 0x58; // LODCell
			constexpr auto currentDistance = 0x60; // float
			constexpr auto flareRenderer = 0x68; // Renderer
			constexpr auto orbRenderer = 0x70; // Renderer
			constexpr auto startColorMultiplier = 0x78; // float
			constexpr auto flareIntensity = 0x7C; // float
			constexpr auto visibleFraction = 0x80; // float
			constexpr auto destroying = 0x84; // bool
			constexpr auto VisibleFraction_DotMin_DotMax_Rotate = 0x88; // int32_t
			constexpr auto PShimmer_TShimmer_Seed_LightScale = 0x8C; // int32_t
			constexpr auto ColorMultID = 0x90; // int32_t
			constexpr auto EnvironmentMode = 0x94; // LODEnvironmentMode
		}
		namespace OreHotSpot
		{
			constexpr auto visualDistance = 0x250; // float
			constexpr auto visualEffect = 0x258; // GameObjectRef
			constexpr auto finishEffect = 0x260; // GameObjectRef
			constexpr auto damageEffect = 0x268; // GameObjectRef
			constexpr auto owner = 0x270; // OreResourceEntity
			constexpr auto visualInstance = 0x278; // GameObject
			constexpr auto cell = 0x280; // LODCell
		}
		namespace PlacementTest
		{
			constexpr auto myMeshCollider = 0x18; // MeshCollider
			constexpr auto testTransform = 0x20; // Transform
			constexpr auto visualTest = 0x28; // Transform
			constexpr auto hemisphere = 0x30; // float
			constexpr auto clampTest = 0x34; // float
			constexpr auto testDist = 0x38; // float
			constexpr auto nextTest = 0x3C; // float
		}
		namespace CameraFocusMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PaddlingPool
		{
			constexpr auto poolWaterVolume = 0x448; // Transform
			constexpr auto poolWaterVisual = 0x450; // GameObject
			constexpr auto minimumWaterHeight = 0x458; // float
			constexpr auto maximumWaterHeight = 0x45C; // float
			constexpr auto waterVolume = 0x460; // WaterVolume
			constexpr auto alignWaterUp = 0x468; // bool
			constexpr auto destroyedWithWaterEffect = 0x470; // GameObjectRef
			constexpr auto destroyedWithWaterEffectPos = 0x478; // Transform
			constexpr auto requireLookAt = 0x480; // Collider
			constexpr auto lastFillAmount = 0x488; // float
		}
		namespace PhotoEntity
		{
			constexpr auto PhotographerSteamIdk__BackingField = 0x170; // UInt64
			constexpr auto ImageCrck__BackingField = 0x178; // uint32_t
		}
		namespace PhotoPanel
		{
			constexpr auto Image = 0x18; // RawImage
			constexpr auto Message = 0x20; // InputField
			constexpr auto _item = 0x28; // Item
			constexpr auto _texture = 0x30; // Texture2D
		}
		namespace SignPanel
		{
			constexpr auto Image = 0x18; // RawImage
			constexpr auto ImageContainer = 0x20; // RectTransform
			constexpr auto DisabledSignsMessage = 0x28; // RustText
			constexpr auto _item = 0x30; // Item
			constexpr auto _texture = 0x38; // Texture2D
		}
		namespace UITwitchTrophy
		{
			constexpr auto EventImage = 0x30; // HttpImage
			constexpr auto EventName = 0x38; // RustText
			constexpr auto WinningTeamName = 0x40; // RustText
			constexpr auto TeamMembersRoot = 0x48; // RectTransform
			constexpr auto TeamMemberNamePrefab = 0x50; // GameObject
			constexpr auto MissingDataOverlay = 0x58; // GameObject
		}
		namespace NPCDwelling
		{
			constexpr auto npcSpawner = 0x168; // NPCSpawner
			constexpr auto NPCSpawnChance = 0x170; // float
			constexpr auto spawnGroups = 0x178; // SpawnGroup[]
			constexpr auto movePoints = 0x180; // AIMovePoint[]
			constexpr auto coverPoints = 0x188; // AICoverPoint[]
		}
		namespace IceFence
		{
			constexpr auto styles = 0x288; // GameObject[]
			constexpr auto init = 0x290; // bool
			constexpr auto snowMesh = 0x298; // AdaptMeshToTerrain
		}
		namespace ItemModUnwrap
		{
			constexpr auto revealList = 0x20; // LootSpawn
			constexpr auto successEffect = 0x28; // GameObjectRef
			constexpr auto minTries = 0x30; // int32_t
			constexpr auto maxTries = 0x34; // int32_t
		}
		namespace NeonMeshPaintableSource
		{
			constexpr auto neonSign = 0x90; // NeonSign
			constexpr auto editorEmissionScale = 0x98; // float
			constexpr auto lightingCurve = 0xA0; // AnimationCurve
			constexpr auto topLeft = 0xA8; // Color
			constexpr auto topRight = 0xB8; // Color
			constexpr auto bottomLeft = 0xC8; // Color
			constexpr auto bottomRight = 0xD8; // Color
		}
		namespace BaseBulb
		{
			constexpr auto bulbRenderer = 0x18; // Renderer
			constexpr auto timeOffsetHash = 0x0; // int32_t
			constexpr auto bulbIndexHash = 0x4; // int32_t
			constexpr auto modeHash = 0x8; // int32_t
			constexpr auto currentAnimationType = 0x20; // AnimationType
			constexpr auto timeOffset = 0x24; // float
			constexpr auto bulbIndex = 0x28; // int32_t
			constexpr auto isOn = 0x2C; // bool
			constexpr auto materialPropertyBlock = 0x30; // MaterialPropertyBlock
		}
		namespace Bulb
		{
			constexpr auto swap = 0x38; // MaterialSwap
		}
		namespace Sled
		{
			constexpr auto BrakeMaterial = 0x400; // PhysicMaterial
			constexpr auto SnowMaterial = 0x408; // PhysicMaterial
			constexpr auto NonSnowMaterial = 0x410; // PhysicMaterial
			constexpr auto CentreOfMassTransform = 0x418; // Transform
			constexpr auto PhysicsMaterialTargets = 0x420; // Collider[]
			constexpr auto InitialForceCutoff = 0x428; // float
			constexpr auto InitialForceIncreaseRate = 0x42C; // float
			constexpr auto TurnForce = 0x430; // float
			constexpr auto DirectionMatchForce = 0x434; // float
			constexpr auto VerticalAdjustmentForce = 0x438; // float
			constexpr auto VerticalAdjustmentAngleThreshold = 0x43C; // float
			constexpr auto NudgeCooldown = 0x440; // float
			constexpr auto NudgeForce = 0x444; // float
			constexpr auto MaxNudgeVelocity = 0x448; // float
			constexpr auto DecayAmount = 0x44C; // float
			constexpr auto TrailEffects = 0x450; // ParticleSystemContainer
			constexpr auto enterSnowSoundDef = 0x458; // SoundDefinition
			constexpr auto snowSlideLoopSoundDef = 0x460; // SoundDefinition
			constexpr auto dirtSlideLoopSoundDef = 0x468; // SoundDefinition
			constexpr auto movementLoopGainCurve = 0x470; // AnimationCurve
			constexpr auto movementLoopPitchCurve = 0x478; // AnimationCurve
			constexpr auto movementLoopSound = 0x480; // Sound
			constexpr auto movementLoopGain = 0x488; // Modulator
			constexpr auto movementLoopPitch = 0x490; // Modulator
			constexpr auto speed = 0x498; // float
			constexpr auto physEffects = 0x4A0; // PhysicsEffects
			constexpr auto shouldShowHelp = 0x4A8; // bool
			constexpr auto showHelpTime = 0x4AC; // TimeSince
		}
		namespace SledSeat
		{
			constexpr auto LeftHand = 0x358; // Transform
			constexpr auto RightHand = 0x360; // Transform
			constexpr auto LeftFoot = 0x368; // Transform
			constexpr auto RightFoot = 0x370; // Transform
		}
		namespace SnowballGun
		{
			constexpr auto OverrideProjectile = 0x3A0; // ItemDefinition
		}
		namespace SnowballGunProjectile
		{
			constexpr auto OverrideEffectScale = 0x1A8; // float
			constexpr auto SnowballImpactEffect = 0x1B0; // GameObjectRef
		}
		namespace SnowMachine
		{
			constexpr auto snowMesh = 0x560; // AdaptMeshToTerrain
			constexpr auto tempTrigger = 0x568; // TriggerTemperature
		}
		namespace Stocking
		{
			constexpr auto stockings = 0x0; // ListHashSet`1
		}
		namespace ItemModOpenWrapped
		{
			constexpr auto successEffect = 0x20; // GameObjectRef
			constexpr auto open_wrapped_gift = 0x0; // Phrase
			constexpr auto open_wrapped_gift_desc = 0x8; // Phrase
		}
		namespace ItemModWrap
		{
			constexpr auto successEffect = 0x20; // GameObjectRef
			constexpr auto wrappedDefinition = 0x28; // ItemDefinition
			constexpr auto wrap_gift = 0x0; // Phrase
			constexpr auto wrap_gift_desc = 0x8; // Phrase
		}
		namespace ChristmasTree
		{
			constexpr auto decorations = 0x418; // GameObject[]
		}
		namespace ItemModXMasTreeDecoration
		{
			constexpr auto flagsToChange = 0x20; // xmasFlags
		}
		namespace BunkerEntrance
		{
			constexpr auto portalPrefab = 0x168; // GameObjectRef
			constexpr auto doorPrefab = 0x170; // GameObjectRef
			constexpr auto portalSpawnPoint = 0x178; // Transform
			constexpr auto doorSpawnPoint = 0x180; // Transform
			constexpr auto doorInstance = 0x188; // Door
			constexpr auto portalInstance = 0x190; // BasePortal
		}
		namespace DynamicDungeon
		{
			constexpr auto exitEntitySpawn = 0x168; // Transform
			constexpr auto exitEntity = 0x170; // GameObjectRef
			constexpr auto exitString = 0x178; // string
			constexpr auto monumentNavMesh = 0x180; // MonumentNavMesh
			constexpr auto _dungeons = 0x0; // List`1
			constexpr auto portalPrefab = 0x188; // GameObjectRef
			constexpr auto portalSpawnPoint = 0x190; // Transform
			constexpr auto exitPortal = 0x198; // BasePortal
			constexpr auto doorPrefab = 0x1A0; // GameObjectRef
			constexpr auto doorSpawnPoint = 0x1A8; // Transform
			constexpr auto doorInstance = 0x1B0; // Door
			constexpr auto nextDungeonPos = 0x8; // Vector3
			constexpr auto dungeonStartPoint = 0x14; // Vector3
			constexpr auto dungeonSpacing = 0x20; // float
			constexpr auto spawnGroups = 0x1B8; // SpawnGroup[]
			constexpr auto AutoMergeAIZones = 0x1C0; // bool
		}
		namespace HalloweenDungeon
		{
			constexpr auto dungeonPrefab = 0x320; // GameObjectRef
			constexpr auto dungeonInstance = 0x328; // EntityRef`1
			constexpr auto population = 0x0; // float
			constexpr auto lifetime = 0x4; // float
			constexpr auto secondsUsed = 0x338; // float
			constexpr auto timeAlive = 0x33C; // float
			constexpr auto radiationCurve = 0x340; // AnimationCurve
			constexpr auto collapsePhrase = 0x348; // Phrase
			constexpr auto mountPhrase = 0x350; // Phrase
		}
		namespace ProceduralDungeonCell
		{
			constexpr auto north = 0x18; // bool
			constexpr auto east = 0x19; // bool
			constexpr auto south = 0x1A; // bool
			constexpr auto west = 0x1B; // bool
			constexpr auto entrance = 0x1C; // bool
			constexpr auto hasSpawn = 0x1D; // bool
			constexpr auto exitPointHack = 0x20; // Transform
			constexpr auto spawnGroups = 0x28; // SpawnGroup[]
			constexpr auto mapRenderers = 0x30; // MeshRenderer[]
		}
		namespace ProceduralDynamicDungeon
		{
			constexpr auto gridResolution = 0x168; // int32_t
			constexpr auto gridSpacing = 0x16C; // float
			constexpr auto grid = 0x170; // bool[]
			constexpr auto cellPrefabReferences = 0x178; // List`1
			constexpr auto spawnedCells = 0x180; // List`1
			constexpr auto envVolume = 0x188; // EnvironmentVolume
			constexpr auto monumentNavMesh = 0x190; // MonumentNavMesh
			constexpr auto exitPortalPrefab = 0x198; // GameObjectRef
			constexpr auto exitPortal = 0x1A0; // EntityRef`1
			constexpr auto exitRadiation = 0x1B0; // TriggerRadiation
			constexpr auto seed = 0x1B8; // uint32_t
			constexpr auto baseseed = 0x1BC; // uint32_t
			constexpr auto mapOffset = 0x1C0; // Vector3
			constexpr auto dungeons = 0x0; // List`1
			constexpr auto entranceHack = 0x1D0; // ProceduralDungeonCell
		}
		namespace ConversationData
		{
			constexpr auto shortname = 0x18; // string
			constexpr auto providerNameTranslated = 0x20; // Phrase
			constexpr auto speeches = 0x28; // SpeechNode[]
		}
		namespace HorseSpawner
		{
			constexpr auto respawnDelay = 0x190; // float
			constexpr auto respawnDelayVariance = 0x194; // float
			constexpr auto spawnForSale = 0x198; // bool
		}
		namespace ConversationManager
		{
			constexpr auto activeConversation = 0x0; // Conversation
		}
		namespace NPCMissionProvider
		{
			constexpr auto manifest = 0x918; // MissionManifest
		}
		namespace NPCShopKeeper
		{
			constexpr auto invisibleVendingMachineRef = 0x888; // EntityRef
			constexpr auto machine = 0x898; // InvisibleVendingMachine
		}
		namespace VehicleVendor
		{
			constexpr auto spawnerRef = 0x918; // EntityRef
			constexpr auto vehicleSpawner = 0x928; // VehicleSpawner
		}
		namespace VehicleSpawner
		{
			constexpr auto spawnNudgeRadius = 0x168; // float
			constexpr auto cleanupRadius = 0x16C; // float
			constexpr auto occupyRadius = 0x170; // float
			constexpr auto objectsToSpawn = 0x178; // SpawnPair[]
			constexpr auto spawnOffset = 0x180; // Transform
			constexpr auto safeRadius = 0x188; // float
		}
		namespace ch47Animator
		{
			constexpr auto animator = 0x18; // Animator
			constexpr auto bottomDoorOpen = 0x20; // bool
			constexpr auto landingGearDown = 0x21; // bool
			constexpr auto leftDoorOpen = 0x22; // bool
			constexpr auto rightDoorOpen = 0x23; // bool
			constexpr auto rearDoorOpen = 0x24; // bool
			constexpr auto rearDoorExtensionOpen = 0x25; // bool
			constexpr auto rearRotorBlade = 0x28; // Transform
			constexpr auto frontRotorBlade = 0x30; // Transform
			constexpr auto rotorBladeSpeed = 0x38; // float
			constexpr auto wheelTurnSpeed = 0x3C; // float
			constexpr auto wheelTurnAngle = 0x40; // float
			constexpr auto blurredRotorBlades = 0x48; // SkinnedMeshRenderer[]
			constexpr auto RotorBlades = 0x50; // SkinnedMeshRenderer[]
			constexpr auto blurredRotorBladesEnabled = 0x58; // bool
			constexpr auto blurSpeedThreshold = 0x5C; // float
		}
		namespace CH47FlightTest
		{
			constexpr auto rigidBody = 0x18; // Rigidbody
			constexpr auto engineThrustMax = 0x20; // float
			constexpr auto torqueScale = 0x24; // Vector3
			constexpr auto com = 0x30; // Transform
			constexpr auto GroundPoints = 0x38; // Transform[]
			constexpr auto GroundEffects = 0x40; // Transform[]
			constexpr auto currentThrottle = 0x48; // float
			constexpr auto avgThrust = 0x4C; // float
			constexpr auto liftDotMax = 0x50; // float
			constexpr auto AIMoveTarget = 0x58; // Transform
			constexpr auto altitudeTolerance = 0x0; // float
		}
		namespace rottest
		{
			constexpr auto turretBase = 0x18; // Transform
			constexpr auto aimDir = 0x20; // Vector3
		}
		namespace BasePath
		{
			constexpr auto nodes = 0x18; // List`1
			constexpr auto interestZones = 0x20; // List`1
			constexpr auto speedZones = 0x28; // List`1
		}
		namespace BasePathNode
		{
			constexpr auto Path = 0x18; // BasePath
			constexpr auto linked = 0x20; // List`1
			constexpr auto maxVelocityOnApproach = 0x28; // float
			constexpr auto straightaway = 0x2C; // bool
		}
		namespace BradleyMoveTest
		{
			constexpr auto leftWheels = 0x18; // WheelCollider[]
			constexpr auto rightWheels = 0x20; // WheelCollider[]
			constexpr auto moveForceMax = 0x28; // float
			constexpr auto brakeForce = 0x2C; // float
			constexpr auto throttle = 0x30; // float
			constexpr auto turnForce = 0x34; // float
			constexpr auto sideStiffnessMax = 0x38; // float
			constexpr auto sideStiffnessMin = 0x3C; // float
			constexpr auto centerOfMass = 0x40; // Transform
			constexpr auto turning = 0x48; // float
			constexpr auto brake = 0x4C; // bool
			constexpr auto myRigidBody = 0x50; // Rigidbody
			constexpr auto destination = 0x58; // Vector3
			constexpr auto stoppingDist = 0x64; // float
			constexpr auto followTest = 0x68; // GameObject
		}
		namespace BradleySpawner
		{
			constexpr auto path = 0x18; // BasePath
			constexpr auto bradleyPrefab = 0x20; // GameObjectRef
			constexpr auto spawned = 0x28; // BradleyAPC
			constexpr auto initialSpawn = 0x30; // bool
			constexpr auto minRespawnTimeMinutes = 0x34; // float
			constexpr auto maxRespawnTimeMinutes = 0x38; // float
			constexpr auto singleton = 0x0; // BradleySpawner
		}
		namespace PathInterestNode
		{
			constexpr auto NextVisitTimek__BackingField = 0x18; // float
		}
		namespace PathSpeedZone
		{
			constexpr auto bounds = 0x18; // Bounds
			constexpr auto obbBounds = 0x30; // OBB
			constexpr auto maxVelocityPerSec = 0x80; // float
		}
		namespace RuntimeInterestNode
		{
			constexpr auto Positionk__BackingField = 0x10; // Vector3
			constexpr auto NextVisitTimek__BackingField = 0x1C; // float
		}
		namespace RuntimePath
		{
			constexpr auto Nodesk__BackingField = 0x10; // IAIPathNode[]
			constexpr auto speedZones = 0x18; // List`1
			constexpr auto interestNodes = 0x20; // List`1
		}
		namespace RuntimePathNode
		{
			constexpr auto Positionk__BackingField = 0x10; // Vector3
			constexpr auto Straightawayk__BackingField = 0x1C; // bool
			constexpr auto linked = 0x20; // HashSet`1
		}
		namespace RuntimeSpeedZone
		{
			constexpr auto worldOBBBounds = 0x10; // OBB
			constexpr auto maxVelocityPerSec = 0x60; // float
		}
		namespace TreadAnimator
		{
			constexpr auto mainBodyAnimator = 0x18; // Animator
			constexpr auto wheelBones = 0x20; // Transform[]
			constexpr auto vecShocksOffsetPosition = 0x28; // Vector3[]
			constexpr auto wheelBoneOrigin = 0x30; // Vector3[]
			constexpr auto wheelBoneDistMax = 0x38; // float
			constexpr auto leftTread = 0x40; // Material
			constexpr auto rightTread = 0x48; // Material
			constexpr auto treadEffects = 0x50; // TreadEffects
			constexpr auto traceThickness = 0x58; // float
			constexpr auto heightFudge = 0x5C; // float
			constexpr auto useWheelYOrigin = 0x60; // bool
			constexpr auto treadTextureDirection = 0x64; // Vector2
			constexpr auto isMetallic = 0x6C; // bool
			constexpr auto angularVelocity = 0x70; // float
			constexpr auto lastForward = 0x74; // Vector3
			constexpr auto currentVelocity = 0x80; // Vector3
			constexpr auto lastPos = 0x8C; // Vector3
			constexpr auto angularTreadConstant = 0x98; // float
			constexpr auto treadConstant = 0x9C; // float
			constexpr auto wheelSpinConstant = 0xA0; // float
			constexpr auto wheelAngle = 0xA4; // float
			constexpr auto treadMovementL = 0xA8; // float
			constexpr auto treadMovementR = 0xAC; // float
			constexpr auto traceLineMin = 0xB0; // float
			constexpr auto traceLineMax = 0xB4; // float
			constexpr auto maxShockDist = 0xB8; // float
			constexpr auto cachedMask = 0xBC; // int32_t
		}
		namespace TreadEffects
		{
			constexpr auto rearTreadDirt = 0x18; // ParticleSystem[]
			constexpr auto rearTreadSmoke = 0x20; // ParticleSystem[]
			constexpr auto middleTreadSmoke = 0x28; // ParticleSystem[]
			constexpr auto vecLastPosition = 0x30; // Vector3
			constexpr auto forwardSpeed = 0x3C; // float
		}
		namespace ItemModSetFrequency
		{
			constexpr auto frequencyPanelPrefab = 0x20; // GameObjectRef
			constexpr auto allowArmDisarm = 0x28; // bool
			constexpr auto onlyFrequency = 0x29; // bool
			constexpr auto defaultFrequency = 0x2C; // int32_t
			constexpr auto loseConditionOnChange = 0x30; // bool
			constexpr auto tempContainer = 0x38; // ItemContainer
			constexpr auto tempItemID = 0x40; // ItemId
		}
		namespace FishingBobber
		{
			constexpr auto centerOfMass = 0x250; // Transform
			constexpr auto myRigidBody = 0x258; // Rigidbody
			constexpr auto lineAttachPoint = 0x260; // Transform
			constexpr auto bobberRoot = 0x268; // Transform
			constexpr auto HorizontalMoveSpeed = 0x270; // float
			constexpr auto PullAwayMoveSpeed = 0x274; // float
			constexpr auto SidewaysInputForce = 0x278; // float
			constexpr auto ReelInMoveSpeed = 0x27C; // float
			constexpr auto fishLerp = 0x280; // float
			constexpr auto lastPosition = 0x284; // Vector3
		}
		namespace BobberPreview
		{
			constexpr auto ValidMaterial = 0x18; // Material
			constexpr auto InvalidMaterial = 0x20; // Material
			constexpr auto TargetRenderer = 0x28; // MeshRenderer
		}
		namespace FishLookup
		{
			constexpr auto FallbackFish = 0x98; // ItemModFishable
		}
		namespace MapMarkerCH47
		{
			constexpr auto createdMarker = 0x178; // GameObject
		}
		namespace MobileMapMarker
		{
			constexpr auto createdMarker = 0x178; // GameObject
		}
		namespace ItemModRFListener
		{
			constexpr auto frequencyPanelPrefab = 0x28; // GameObjectRef
			constexpr auto pendingEntityID = 0x30; // NetworkableId
		}
		namespace ClientIOLine_Pipe
		{
			constexpr auto NotifyLod = 0x48; // NotifyLOD
			constexpr auto PipeRenderer = 0x50; // PipeMesh
			constexpr auto worldStartDir = 0x58; // Vector3
			constexpr auto worldEndDir = 0x64; // Vector3
			constexpr auto rebuildBlocked = 0x70; // bool
		}
		namespace PipeMesh
		{
			constexpr auto PipeRadius = 0x18; // float
			constexpr auto PipeMaterial = 0x20; // Material
			constexpr auto StraightLength = 0x28; // float
			constexpr auto PipeSubdivisions = 0x2C; // int32_t
			constexpr auto BendTesselation = 0x30; // int32_t
			constexpr auto RidgeHeight = 0x34; // float
			constexpr auto UvScaleMultiplier = 0x38; // float
			constexpr auto RidgeIncrements = 0x3C; // float
			constexpr auto RidgeLength = 0x40; // float
			constexpr auto HorizontalUvRange = 0x44; // Vector2
			constexpr auto PipeUVCurve = 0x0; // AnimationCurve
			constexpr auto positions = 0x50; // List`1
			constexpr auto startDir = 0x58; // Vector3
			constexpr auto endDir = 0x64; // Vector3
			constexpr auto mRenderer = 0x70; // MeshRenderer
			constexpr auto mFilter = 0x78; // MeshFilter
			constexpr auto vertArray = 0x80; // NativeArray`1
			constexpr auto uvArray = 0x90; // NativeArray`1
			constexpr auto triArray = 0xA0; // NativeArray`1
			constexpr auto positionInput = 0xB0; // NativeArray`1
			constexpr auto buildingJob = 0xC0; // JobHandle
			constexpr auto isBuilding = 0xD0; // bool
			constexpr auto buildsInProcess = 0x8; // List`1
			constexpr auto cachedMesh = 0xD8; // Mesh
			constexpr auto lastUpdate = 0x10; // int32_t
		}
		namespace PipeMeshTester
		{
			constexpr auto positions = 0x18; // List`1
			constexpr auto startDir = 0x20; // Vector3
			constexpr auto endDir = 0x2C; // Vector3
			constexpr auto startGuide = 0x38; // Transform
			constexpr auto endGuide = 0x40; // Transform
		}
		namespace AlignedLineDrawer
		{
			constexpr auto Filter = 0x18; // MeshFilter
			constexpr auto Renderer = 0x20; // MeshRenderer
			constexpr auto LineWidth = 0x28; // float
			constexpr auto SurfaceOffset = 0x2C; // float
			constexpr auto SprayThickness = 0x30; // float
			constexpr auto uvTilingFactor = 0x34; // float
			constexpr auto DrawEndCaps = 0x38; // bool
			constexpr auto DrawSideMesh = 0x39; // bool
			constexpr auto DrawBackMesh = 0x3A; // bool
			constexpr auto Spray = 0x40; // SprayCanSpray_Freehand
			constexpr auto propertyBlock = 0x0; // MaterialPropertyBlock
			constexpr auto CreatedMeshk__BackingField = 0x48; // Mesh
			constexpr auto isQueued = 0x50; // bool
			constexpr auto queuedFinal = 0x51; // bool
			constexpr auto WorkQueue = 0x8; // LineDrawerQueue
			constexpr auto meshUpdateCompleteAction = 0x58; // Action
		}
		namespace AlignedLineDrawerDecal
		{
			constexpr auto decalComponent = 0x60; // DeferredDecal
			constexpr auto colouredVariants = 0x0; // Dictionary`2
			constexpr auto cachedColour = 0x68; // Color
			constexpr auto isLodShowing = 0x78; // bool
		}
		namespace RaycastCommandBufferSystem
		{
			constexpr auto buffer = 0x0; // CommandBuffer
			constexpr auto depthmaterial = 0x8; // Material
			constexpr auto computeBuffer = 0x10; // ComputeBuffer
			constexpr auto resultDataArray = 0x18; // float[]
			constexpr auto dataLength = 0x20; // int32_t
		}
		namespace ReskinEffect
		{
			constexpr auto TargetSystem = 0x18; // ParticleSystem
		}
		namespace SprayCanViewmodel
		{
			constexpr auto Particles = 0x18; // ParticleSystem
			constexpr auto sprayLoopDef = 0x20; // SoundDefinition
			constexpr auto sprayLoop = 0x28; // Sound
		}
		namespace SprayCanSpray_Decal
		{
			constexpr auto DecalComponent = 0x2D8; // DeferredDecal
			constexpr auto IconPreviewRoot = 0x2E0; // GameObject
			constexpr auto DefaultMaterial = 0x2E8; // Material
		}
		namespace ClientIOLine
		{
			constexpr auto _lod = 0x18; // RendererLOD
			constexpr auto _line = 0x20; // LineRenderer
			constexpr auto directionalMaterial = 0x28; // Material
			constexpr auto defaultMaterial = 0x30; // Material
			constexpr auto lineType = 0x38; // IOType
			constexpr auto _allLines = 0x0; // List`1
			constexpr auto colour = 0x3C; // WireColour
			constexpr auto ownerIOEnt = 0x40; // IOEntity
		}
		namespace CassettePanel
		{
			constexpr auto CassetteSprites = 0x28; // GameObject[]
		}
		namespace EffectMount
		{
			constexpr auto firstPerson = 0x20; // bool
			constexpr auto effectPrefab = 0x28; // GameObject
			constexpr auto spawnedEffect = 0x30; // GameObject
			constexpr auto mountBone = 0x38; // GameObject
			constexpr auto onSoundDef = 0x40; // SoundDefinition
			constexpr auto offSoundDef = 0x48; // SoundDefinition
			constexpr auto blockOffSoundWhenGettingDisabled = 0x50; // bool
			constexpr auto disableTime = 0x54; // float
		}
		namespace EffectParent
		{
			constexpr auto effect = 0x20; // GameObject
		}
		namespace FlashlightBeam
		{
			constexpr auto scrollDir = 0x18; // Vector2
			constexpr auto localEndPoint = 0x20; // Vector3
			constexpr auto beamRenderer = 0x30; // LineRenderer
			constexpr auto block = 0x38; // MaterialPropertyBlock
			constexpr auto BeamST = 0x40; // Vector4
		}
		namespace HolosightReticlePositioning
		{
			constexpr auto aimPoint = 0x18; // IronsightAimPoint
		}
		namespace LaserBeam
		{
			constexpr auto scrollSpeed = 0x18; // float
			constexpr auto beamRenderer = 0x20; // LineRenderer
			constexpr auto dotObject = 0x28; // GameObject
			constexpr auto dotRenderer = 0x30; // Renderer
			constexpr auto dotSpotlight = 0x38; // GameObject
			constexpr auto scrollDir = 0x40; // Vector2
			constexpr auto maxDistance = 0x48; // float
			constexpr auto stillBlendFactor = 0x4C; // float
			constexpr auto movementBlendFactor = 0x50; // float
			constexpr auto movementThreshhold = 0x54; // float
			constexpr auto isFirstPerson = 0x58; // bool
			constexpr auto emissionOverride = 0x60; // Transform
			constexpr auto scaleDotByDistance = 0x68; // bool
			constexpr auto dotBaseScale = 0x6C; // float
			constexpr auto dotMaxScale = 0x70; // float
			constexpr auto block = 0x78; // MaterialPropertyBlock
			constexpr auto workQueue = 0x0; // LaserBeamWorkQueue
			constexpr auto framebudgetms = 0x8; // float
			constexpr auto debugCollisions = 0xC; // bool
			constexpr auto lastUpdate = 0x80; // TimeSince
			constexpr auto cachedDotDistance = 0x84; // float
			constexpr auto aimToBarrelBlendFrac = 0x88; // float
			constexpr auto laserST = 0x8C; // Vector4
		}
		namespace HideIfScoped
		{
			constexpr auto renderers = 0x18; // Renderer[]
		}
		namespace ViewmodelScope
		{
			constexpr auto smoothSpeed = 0x18; // float
			constexpr auto scopeMaterialOverride = 0x20; // Material
			constexpr auto wasVisible = 0x28; // bool
		}
		namespace HideIfAiming
		{
			constexpr auto systems = 0x18; // ParticleSystem[]
		}
		namespace v_chainsaw
		{
			constexpr auto bAttacking = 0x18; // bool
			constexpr auto bHitMetal = 0x19; // bool
			constexpr auto bHitWood = 0x1A; // bool
			constexpr auto bHitFlesh = 0x1B; // bool
			constexpr auto bEngineOn = 0x1C; // bool
			constexpr auto hitMetalFX = 0x20; // ParticleSystem[]
			constexpr auto hitWoodFX = 0x28; // ParticleSystem[]
			constexpr auto hitFleshFX = 0x30; // ParticleSystem[]
			constexpr auto hitMetalSoundDef = 0x38; // SoundDefinition
			constexpr auto hitWoodSoundDef = 0x40; // SoundDefinition
			constexpr auto hitFleshSoundDef = 0x48; // SoundDefinition
			constexpr auto hitSound = 0x50; // Sound
			constexpr auto hitSoundTarget = 0x58; // GameObject
			constexpr auto hitSoundFadeTime = 0x60; // float
			constexpr auto smokeEffect = 0x68; // ParticleSystem
			constexpr auto chainsawAnimator = 0x70; // Animator
			constexpr auto chainRenderer = 0x78; // Renderer
			constexpr auto chainlink = 0x80; // Material
			constexpr auto block = 0x88; // MaterialPropertyBlock
			constexpr auto saveST = 0x90; // Vector2
			constexpr auto chainSpeed = 0x98; // float
			constexpr auto chainAmount = 0x9C; // float
			constexpr auto temp1 = 0xA0; // float
			constexpr auto temp2 = 0xA4; // float
		}
		namespace DoubleShotgunViewModel
		{
			constexpr auto NoSkinRoot = 0xC0; // GameObject
		}
		namespace FlameJet
		{
			constexpr auto line = 0x18; // LineRenderer
			constexpr auto tesselation = 0x20; // float
			constexpr auto length = 0x24; // float
			constexpr auto maxLength = 0x28; // float
			constexpr auto drag = 0x2C; // float
			constexpr auto numSegments = 0x30; // int32_t
			constexpr auto spacing = 0x34; // float
			constexpr auto on = 0x38; // bool
			constexpr auto lastWorldSegments = 0x40; // Vector3[]
			constexpr auto currentSegments = 0x48; // Vector3[]
			constexpr auto startColor = 0x50; // Color
			constexpr auto endColor = 0x60; // Color
			constexpr auto currentColor = 0x70; // Color
		}
		namespace ToolgunBeam
		{
			constexpr auto electricalBeam = 0x18; // LineRenderer
			constexpr auto scrollSpeed = 0x20; // float
			constexpr auto fadeColor = 0x24; // Color
			constexpr auto fadeSpeed = 0x34; // float
		}
		namespace ToolgunScreen
		{
			constexpr auto blockInfoText = 0x18; // Text
			constexpr auto noBlockText = 0x20; // Text
		}
		namespace Bear
		{
			constexpr auto Population = 0x0; // float
		}
		namespace Polarbear
		{
			constexpr auto Population = 0x0; // float
		}
		namespace Boar
		{
			constexpr auto Population = 0x0; // float
		}
		namespace Chicken
		{
			constexpr auto Population = 0x0; // float
		}
		namespace SimpleShark
		{
			constexpr auto destination = 0x250; // Vector3
			constexpr auto minSpeed = 0x25C; // float
			constexpr auto maxSpeed = 0x260; // float
			constexpr auto idealDepth = 0x264; // float
			constexpr auto minTurnSpeed = 0x268; // float
			constexpr auto maxTurnSpeed = 0x26C; // float
			constexpr auto attackCooldown = 0x270; // float
			constexpr auto aggroRange = 0x274; // float
			constexpr auto obstacleDetectionRadius = 0x278; // float
			constexpr auto animator = 0x280; // Animator
			constexpr auto bloodCloud = 0x288; // GameObjectRef
			constexpr auto corpsePrefab = 0x290; // GameObjectRef
			constexpr auto param_speed = 0x0; // int32_t
			constexpr auto param_mouthOpen = 0x4; // int32_t
			constexpr auto currentMouthOpen = 0x298; // float
		}
		namespace AnimalRagdoll
		{
			constexpr auto bodyRenderers = 0x98; // SkinnedMeshRenderer[]
			constexpr auto hairRenderers = 0xA0; // SkinnedMeshRenderer[]
		}
		namespace Horse
		{
			constexpr auto Population = 0x0; // float
		}
		namespace HorseRagdoll
		{
			constexpr auto mane = 0xA8; // GameObject
			constexpr auto woodArmor = 0xB0; // GameObject
			constexpr auto roadsignArmor = 0xB8; // GameObject
			constexpr auto overrideBreed = 0xC0; // HorseBreed
			constexpr auto singleSaddle = 0xC8; // GameObject
			constexpr auto doubleSaddle = 0xD0; // GameObject
			constexpr auto breedSource = 0xD8; // GameObjectRef
			constexpr auto breedIndex = 0xE0; // int32_t
			constexpr auto showHair = 0xE4; // bool
			constexpr auto showWoodArmor = 0xE5; // bool
			constexpr auto showRoadsignArmor = 0xE6; // bool
			constexpr auto showSingleSaddle = 0xE7; // bool
			constexpr auto showDoubleSaddle = 0xE8; // bool
		}
		namespace GingerbreadNPC
		{
			constexpr auto OverrideCorpseMale = 0x910; // GameObjectRef
			constexpr auto OverrideCorpseFemale = 0x918; // GameObjectRef
			constexpr auto HitMaterial = 0x920; // PhysicMaterial
			constexpr auto RoamAroundHomePoint = 0x928; // bool
		}
		namespace HumanPathFinder
		{
			constexpr auto npc = 0x20; // BaseEntity
		}
		namespace ScientistNPC
		{
			constexpr auto RadioChatterEffects = 0x910; // GameObjectRef[]
			constexpr auto DeathEffects = 0x918; // GameObjectRef[]
			constexpr auto deathStatName = 0x920; // string
			constexpr auto IdleChatterRepeatRange = 0x928; // Vector2
			constexpr auto radioChatterType = 0x930; // RadioChatterType
		}
		namespace NPCPlayer
		{
			constexpr auto VirtualInfoZone = 0x838; // AIInformationZone
			constexpr auto finalDestination = 0x840; // Vector3
			constexpr auto randomOffset = 0x84C; // float
			constexpr auto spawnPos = 0x850; // Vector3
			constexpr auto loadouts = 0x860; // PlayerInventoryProperties[]
			constexpr auto movementMask = 0x868; // LayerMask
			constexpr auto LegacyNavigation = 0x86C; // bool
			constexpr auto NavAgent = 0x870; // NavMeshAgent
			constexpr auto damageScale = 0x878; // float
			constexpr auto shortRange = 0x87C; // float
			constexpr auto attackLengthMaxShortRangeScale = 0x880; // float
		}
		namespace MapMarkerPet
		{
			constexpr auto _rectTransform = 0x178; // RectTransform
		}
		namespace Stag
		{
			constexpr auto Population = 0x0; // float
		}
		namespace Wolf
		{
			constexpr auto Population = 0x0; // float
		}
		namespace Zombie
		{
			constexpr auto Population = 0x0; // float
		}
		namespace AIArenaNameTag
		{
			constexpr auto Entity = 0x18; // BasePlayer
			constexpr auto ShowHealth = 0x20; // bool
			constexpr auto ShowName = 0x21; // bool
			constexpr auto trimmedName = 0x28; // string
		}
		namespace AICoverPoint
		{
			constexpr auto coverDot = 0x20; // float
		}
		namespace AIInformationCell
		{
			constexpr auto BoundingBox = 0x10; // Bounds
			constexpr auto NeighbourCells = 0x28; // List`1
			constexpr auto MovePoints = 0x30; // AIInformationCellContents`1
			constexpr auto CoverPoints = 0x38; // AIInformationCellContents`1
			constexpr auto Xk__BackingField = 0x40; // int32_t
			constexpr auto Zk__BackingField = 0x44; // int32_t
		}
		namespace AIInformationCellContents
		{
			constexpr auto Items = 0x0; // HashSet`1
		}
		namespace AIInformationGrid
		{
			constexpr auto CellSize = 0x18; // int32_t
			constexpr auto BoundingBox = 0x1C; // Bounds
			constexpr auto Cells = 0x38; // AIInformationCell[]
			constexpr auto origin = 0x40; // Vector3
			constexpr auto xCellCount = 0x4C; // int32_t
			constexpr auto zCellCount = 0x50; // int32_t
			constexpr auto movePointResults = 0x58; // AIMovePoint[]
			constexpr auto coverPointResults = 0x60; // AICoverPoint[]
			constexpr auto resultCells = 0x68; // AIInformationCell[]
		}
		namespace AIInformationGridTester
		{
			constexpr auto Grid = 0x18; // AIInformationGrid
			constexpr auto Range = 0x20; // float
		}
		namespace AIInformationZone
		{
			constexpr auto RenderBounds = 0x18; // bool
			constexpr auto ShouldSleepAI = 0x19; // bool
			constexpr auto Virtual = 0x1A; // bool
			constexpr auto UseCalculatedCoverDistances = 0x1B; // bool
			constexpr auto zones = 0x0; // List`1
			constexpr auto coverPoints = 0x20; // List`1
			constexpr auto movePoints = 0x28; // List`1
			constexpr auto coverPointArray = 0x30; // AICoverPoint[]
			constexpr auto movePointArray = 0x38; // AIMovePoint[]
			constexpr auto navMeshLinks = 0x40; // List`1
			constexpr auto paths = 0x48; // List`1
			constexpr auto bounds = 0x50; // Bounds
			constexpr auto grid = 0x68; // AIInformationGrid
		}
		namespace AIMovePoint
		{
			constexpr auto distances = 0x20; // ListDictionary`2
			constexpr auto distancesToCover = 0x28; // ListDictionary`2
			constexpr auto radius = 0x30; // float
			constexpr auto WaitTime = 0x34; // float
			constexpr auto LookAtPoints = 0x38; // List`1
		}
		namespace AIMovePointPath
		{
			constexpr auto DebugPathColor = 0x18; // Color
			constexpr auto LoopMode = 0x28; // Mode
			constexpr auto Points = 0x30; // List`1
		}
		namespace AIPoint
		{
			constexpr auto currentUser = 0x18; // BaseEntity
		}
		namespace AITraversalArea
		{
			constexpr auto entryPoint1 = 0x30; // Transform
			constexpr auto entryPoint2 = 0x38; // Transform
			constexpr auto waitPoints = 0x40; // AITraversalWaitPoint[]
			constexpr auto movementArea = 0x48; // Bounds
			constexpr auto activeEntryPoint = 0x60; // Transform
			constexpr auto nextFreeTime = 0x68; // float
		}
		namespace AITraversalWaitPoint
		{
			constexpr auto nextFreeTime = 0x18; // float
		}
		namespace BaseNavigator
		{
			constexpr auto maxStepUpDistance = 0x0; // float
			constexpr auto baseNavMovementFrameInterval = 0x4; // int32_t
			constexpr auto stuckTriggerDuration = 0x8; // float
			constexpr auto navTypeHeightOffset = 0xC; // float
			constexpr auto navTypeDistance = 0x10; // float
			constexpr auto CanNavigateMounted = 0x18; // bool
			constexpr auto CanUseNavMesh = 0x19; // bool
			constexpr auto CanUseAStar = 0x1A; // bool
			constexpr auto CanUseBaseNav = 0x1B; // bool
			constexpr auto CanUseCustomNav = 0x1C; // bool
			constexpr auto StoppingDistance = 0x20; // float
			constexpr auto DefaultArea = 0x28; // string
			constexpr auto TriggerStuckEvent = 0x30; // bool
			constexpr auto StuckDistance = 0x34; // float
			constexpr auto Speed = 0x38; // float
			constexpr auto Acceleration = 0x3C; // float
			constexpr auto TurnSpeed = 0x40; // float
			constexpr auto MoveTowardsSpeed = 0x44; // NavigationSpeed
			constexpr auto FaceMoveTowardsTarget = 0x48; // bool
			constexpr auto SlowestSpeedFraction = 0x4C; // float
			constexpr auto SlowSpeedFraction = 0x50; // float
			constexpr auto NormalSpeedFraction = 0x54; // float
			constexpr auto FastSpeedFraction = 0x58; // float
			constexpr auto LowHealthSpeedReductionTriggerFraction = 0x5C; // float
			constexpr auto LowHealthMaxSpeedFraction = 0x60; // float
			constexpr auto SwimmingSpeedMultiplier = 0x64; // float
			constexpr auto BestMovementPointMaxDistance = 0x68; // float
			constexpr auto BestCoverPointMaxDistance = 0x6C; // float
			constexpr auto BestRoamPointMaxDistance = 0x70; // float
			constexpr auto MaxRoamDistanceFromHome = 0x74; // float
			constexpr auto MaxWaterDepth = 0x78; // float
			constexpr auto SpeedBasedAvoidancePriority = 0x7C; // bool
			constexpr auto path = 0x80; // NavMeshPath
			constexpr auto navMeshQueryFilter = 0x88; // NavMeshQueryFilter
			constexpr auto Pathk__BackingField = 0x98; // AIMovePointPath
			constexpr auto AStarGraphk__BackingField = 0xA0; // BasePath
			constexpr auto defaultAreaMask = 0xA8; // int32_t
			constexpr auto biomePreference = 0xAC; // Enum
			constexpr auto UseBiomePreference = 0xB0; // bool
			constexpr auto topologyPreference = 0xB4; // Enum
			constexpr auto topologyPrevent = 0xB8; // Enum
			constexpr auto biomeRequirement = 0xBC; // Enum
			constexpr auto Agentk__BackingField = 0xC0; // NavMeshAgent
			constexpr auto BaseEntityk__BackingField = 0xC8; // BaseCombatEntity
			constexpr auto Destinationk__BackingField = 0xD0; // Vector3
			constexpr auto CurrentNavigationTypek__BackingField = 0xDC; // NavigationType
			constexpr auto LastUsedNavigationTypek__BackingField = 0xE0; // NavigationType
		}
		namespace EnvironmentFish
		{
			constexpr auto animator = 0x18; // Animator
			constexpr auto minSpeed = 0x20; // float
			constexpr auto maxSpeed = 0x24; // float
			constexpr auto idealDepth = 0x28; // float
			constexpr auto minTurnSpeed = 0x2C; // float
			constexpr auto maxTurnSpeed = 0x30; // float
			constexpr auto destination = 0x34; // Vector3
			constexpr auto spawnPos = 0x40; // Vector3
			constexpr auto idealLocalScale = 0x4C; // Vector3
			constexpr auto lastStartleTime = 0x58; // float
			constexpr auto startleDuration = 0x5C; // float
			constexpr auto currentSpeed = 0x60; // float
			constexpr auto playerQueryResults = 0x0; // BasePlayer[]
			constexpr auto nextPlayerFleeTime = 0x64; // float
			constexpr auto inQueue = 0x68; // bool
			constexpr auto nextInvalidCheckTime = 0x6C; // float
			constexpr auto cachedPositionInvalid = 0x70; // bool
			constexpr auto nextDestinationTime = 0x74; // float
		}
		namespace EnvironmentFishManager
		{
			constexpr auto fishTypes = 0x18; // FishTypeInstance[]
			constexpr auto maxFishPerType = 0x0; // int32_t
			constexpr auto maxFishDistance = 0x4; // float
			constexpr auto framebudgetms = 0x8; // float
			constexpr auto workQueue = 0x10; // EnvironmentFishWorkQueue
			constexpr auto fishContainer = 0x20; // GameObject
			constexpr auto lastMaxFish = 0x28; // int32_t
			constexpr auto lastFishUpdatePosition = 0x2C; // Vector3
			constexpr auto nextFishUpdateTime = 0x38; // float
		}
		namespace DungeonNavmesh
		{
			constexpr auto NavMeshAgentTypeIndex = 0x18; // int32_t
			constexpr auto DefaultAreaName = 0x20; // string
			constexpr auto NavmeshResolutionModifier = 0x28; // float
			constexpr auto Bounds = 0x2C; // Bounds
			constexpr auto NavMeshData = 0x48; // NavMeshData
			constexpr auto NavMeshDataInstance = 0x50; // NavMeshDataInstance
			constexpr auto LayerMask = 0x54; // LayerMask
			constexpr auto NavMeshCollectGeometry = 0x58; // NavMeshCollectGeometry
			constexpr auto Instances = 0x0; // List`1
		}
		namespace DynamicNavMesh
		{
			constexpr auto NavMeshAgentTypeIndex = 0x18; // int32_t
			constexpr auto DefaultAreaName = 0x20; // string
			constexpr auto AsyncTerrainNavMeshBakeCellSize = 0x28; // int32_t
			constexpr auto AsyncTerrainNavMeshBakeCellHeight = 0x2C; // int32_t
			constexpr auto Bounds = 0x30; // Bounds
			constexpr auto NavMeshData = 0x48; // NavMeshData
			constexpr auto NavMeshDataInstance = 0x50; // NavMeshDataInstance
			constexpr auto LayerMask = 0x54; // LayerMask
			constexpr auto NavMeshCollectGeometry = 0x58; // NavMeshCollectGeometry
		}
		namespace MonumentNavMesh
		{
			constexpr auto NavMeshAgentTypeIndex = 0x18; // int32_t
			constexpr auto DefaultAreaName = 0x20; // string
			constexpr auto CellCount = 0x28; // int32_t
			constexpr auto CellSize = 0x2C; // int32_t
			constexpr auto Height = 0x30; // int32_t
			constexpr auto NavmeshResolutionModifier = 0x34; // float
			constexpr auto overrideAutoBounds = 0x38; // bool
			constexpr auto Bounds = 0x3C; // Bounds
			constexpr auto NavMeshData = 0x58; // NavMeshData
			constexpr auto NavMeshDataInstance = 0x60; // NavMeshDataInstance
			constexpr auto LayerMask = 0x64; // LayerMask
			constexpr auto NavMeshCollectGeometry = 0x68; // NavMeshCollectGeometry
			constexpr auto forceCollectTerrain = 0x6C; // bool
			constexpr auto shouldNotifyAIZones = 0x6D; // bool
			constexpr auto CustomNavMeshRoot = 0x70; // Transform
		}
		namespace RealmedNavMeshObstacle
		{
			constexpr auto Obstacle = 0x20; // NavMeshObstacle
		}
		namespace HorseBreed
		{
			constexpr auto breedName = 0x18; // Phrase
			constexpr auto breedDesc = 0x20; // Phrase
			constexpr auto materialOverrides = 0x28; // Material[]
			constexpr auto maxHealth = 0x30; // float
			constexpr auto maxSpeed = 0x34; // float
			constexpr auto staminaDrain = 0x38; // float
			constexpr auto maxStamina = 0x3C; // float
		}
		namespace HorseCorpse
		{
			constexpr auto breedIndex = 0x300; // int32_t
			constexpr auto lootPanelTitle = 0x308; // Phrase
		}
		namespace NPCPlayerNavigatorTester
		{
			constexpr auto TargetNode = 0x18; // BasePathNode
			constexpr auto currentNode = 0x20; // BasePathNode
		}
		namespace AIState
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AIThinkMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace BasePathFinder
		{
			constexpr auto preferedTopologySamples = 0x0; // Vector3[]
			constexpr auto topologySamples = 0x8; // Vector3[]
			constexpr auto chosenPosition = 0x10; // Vector3
		}
		namespace UnderwaterPathFinder
		{
			constexpr auto npc = 0x20; // BaseEntity
		}
		namespace HorseIdleMultiConditionCrossfade
		{
			constexpr auto TargetState = 0x18; // string
			constexpr auto NormalizedTransitionDuration = 0x20; // float
			constexpr auto conditions = 0x0; // Condition[]
			constexpr auto lastTransition = 0x24; // TimeSince
		}
		namespace WeightedAnimationRandomiser
		{
			constexpr auto LoopRangeMin = 0x18; // int32_t
			constexpr auto LoopRangeMax = 0x1C; // int32_t
			constexpr auto NormalizedTransitionDuration = 0x20; // float
			constexpr auto IdleTransitions = 0x28; // IdleChance[]
			constexpr auto AllowRepeats = 0x30; // bool
			constexpr auto numLoops = 0x34; // int32_t
			constexpr auto nextLoopCount = 0x38; // int32_t
			constexpr auto totalChanceCount = 0x3C; // int32_t
			constexpr auto lastTransition = 0x40; // TimeSince
			constexpr auto lastState = 0x44; // int32_t
		}
		namespace AmbienceDefinition
		{
			constexpr auto sounds = 0x18; // List`1
			constexpr auto stingFrequency = 0x20; // ValueRange
			constexpr auto biomes = 0x28; // Enum
			constexpr auto topologies = 0x2C; // Enum
			constexpr auto environmentType = 0x30; // EnvironmentType
			constexpr auto useEnvironmentType = 0x34; // bool
			constexpr auto time = 0x38; // AnimationCurve
			constexpr auto rain = 0x40; // ValueRange
			constexpr auto wind = 0x48; // ValueRange
			constexpr auto snow = 0x50; // ValueRange
		}
		namespace AmbienceDefinitionList
		{
			constexpr auto defs = 0x18; // List`1
		}
		namespace AmbienceEmitter
		{
			constexpr auto baseAmbience = 0x18; // AmbienceDefinitionList
			constexpr auto stings = 0x20; // AmbienceDefinitionList
			constexpr auto isStatic = 0x28; // bool
			constexpr auto followCamera = 0x29; // bool
			constexpr auto isBaseEmitter = 0x2A; // bool
			constexpr auto active = 0x2B; // bool
			constexpr auto cameraDistanceSq = 0x2C; // float
			constexpr auto boundingSphere = 0x30; // BoundingSphere
			constexpr auto crossfadeTime = 0x40; // float
			constexpr auto currentTopologyk__BackingField = 0x44; // Enum
			constexpr auto currentBiomek__BackingField = 0x48; // Enum
			constexpr auto nextStingTime = 0x50; // Dictionary`2
			constexpr auto deactivateTime = 0x58; // float
			constexpr auto playUnderwater = 0x5C; // bool
			constexpr auto playAbovewater = 0x5D; // bool
			constexpr auto baseSound = 0x60; // Sound
			constexpr auto occlusionGain = 0x68; // Modulator
			constexpr auto pitchModulator = 0x70; // Modulator
			constexpr auto lastCrossfade = 0x78; // float
			constexpr auto biomeReadings = 0x80; // List`1
			constexpr auto topologyReadings = 0x88; // List`1
			constexpr auto readingsToKeep = 0x90; // int32_t
			constexpr auto lastPosition = 0x94; // Vector3
			constexpr auto readingOccurences = 0xA0; // Dictionary`2
		}
		namespace AmbienceLocalStings
		{
			constexpr auto maxDistance = 0x18; // float
			constexpr auto stingRadius = 0x1C; // float
			constexpr auto stingFrequency = 0x20; // float
			constexpr auto stingFrequencyVariance = 0x24; // float
			constexpr auto stingSounds = 0x28; // SoundDefinition[]
			constexpr auto stingClock = 0x30; // SynchronizedClock
		}
		namespace AmbienceManager
		{
			constexpr auto localEmitterLimits = 0x18; // List`1
			constexpr auto catchallEmitterLimit = 0x20; // EmitterTypeLimit
			constexpr auto maxActiveLocalEmitters = 0x28; // int32_t
			constexpr auto activeLocalEmitters = 0x2C; // int32_t
			constexpr auto cameraEmitters = 0x30; // List`1
			constexpr auto emittersInRange = 0x38; // List`1
			constexpr auto activeEmitters = 0x40; // List`1
			constexpr auto localEmitterRange = 0x48; // float
			constexpr auto currentAmbienceZones = 0x50; // List`1
			constexpr auto isUnderwater = 0x58; // bool
			constexpr auto emitterLimitByAmbience = 0x60; // Dictionary`2
			constexpr auto tickInterval = 0x68; // float
			constexpr auto lastTick = 0x6C; // float
			constexpr auto ambienceGroups = 0x70; // List`1
			constexpr auto ambienceGroupsByDef = 0x78; // Dictionary`2
		}
		namespace AmbienceSpawnEmitters
		{
			constexpr auto baseEmitterCount = 0x18; // int32_t
			constexpr auto baseEmitterDistance = 0x1C; // int32_t
			constexpr auto emitterPrefab = 0x20; // GameObjectRef
		}
		namespace AmbienceZone
		{
			constexpr auto baseAmbience = 0x30; // AmbienceDefinitionList
			constexpr auto stings = 0x38; // AmbienceDefinitionList
			constexpr auto priority = 0x40; // float
			constexpr auto overrideCrossfadeTime = 0x44; // bool
			constexpr auto crossfadeTime = 0x48; // float
		}
		namespace RainSurfaceAmbience
		{
			constexpr auto surfaces = 0x18; // List`1
			constexpr auto emitterPrefab = 0x20; // GameObjectRef
			constexpr auto spawnedEmitters = 0x28; // Dictionary`2
			constexpr auto surfaceSoundsByMaterial = 0x30; // Dictionary`2
		}
		namespace BlendedEngineLoopDefinition
		{
			constexpr auto engineLoops = 0x18; // EngineLoopDefinition[]
			constexpr auto minRPM = 0x20; // float
			constexpr auto maxRPM = 0x24; // float
			constexpr auto RPMChangeRateUp = 0x28; // float
			constexpr auto RPMChangeRateDown = 0x2C; // float
		}
		namespace BlendedLoopEngineSound
		{
			constexpr auto loopDefinition = 0x18; // BlendedEngineLoopDefinition
			constexpr auto engineOn = 0x20; // bool
			constexpr auto RPMControl = 0x24; // float
			constexpr auto smoothedRPMControl = 0x28; // float
			constexpr auto engineLoops = 0x30; // EngineLoop[]
		}
		namespace BlendedSoundLoops
		{
			constexpr auto blend = 0x18; // float
			constexpr auto blendSmoothing = 0x1C; // float
			constexpr auto loopFadeOutTime = 0x20; // float
			constexpr auto loopFadeInTime = 0x24; // float
			constexpr auto gainModSmoothing = 0x28; // float
			constexpr auto pitchModSmoothing = 0x2C; // float
			constexpr auto shouldPlay = 0x30; // bool
			constexpr auto gain = 0x34; // float
			constexpr auto loops = 0x38; // List`1
			constexpr auto maxDistance = 0x40; // float
			constexpr auto smoothedBlend = 0x44; // float
		}
		namespace EngineAudioClip
		{
			constexpr auto granularClip = 0x18; // AudioClip
			constexpr auto accelerationClip = 0x20; // AudioClip
			constexpr auto accelerationCyclesJson = 0x28; // TextAsset
			constexpr auto accelerationCycles = 0x30; // List`1
			constexpr auto cycleBuckets = 0x38; // List`1
			constexpr auto accelerationCyclesByRPM = 0x40; // Dictionary`2
			constexpr auto rpmBucketLookup = 0x48; // Dictionary`2
			constexpr auto sampleRate = 0x50; // int32_t
			constexpr auto samplesUntilNextGrain = 0x54; // int32_t
			constexpr auto lastCycleId = 0x58; // int32_t
			constexpr auto grains = 0x60; // List`1
			constexpr auto currentRPM = 0x68; // int32_t
			constexpr auto targetRPM = 0x6C; // int32_t
			constexpr auto minRPM = 0x70; // int32_t
			constexpr auto maxRPM = 0x74; // int32_t
			constexpr auto cyclePadding = 0x78; // int32_t
			constexpr auto RPMControl = 0x7C; // float
			constexpr auto source = 0x80; // AudioSource
			constexpr auto rpmLerpSpeed = 0x88; // float
			constexpr auto rpmLerpSpeedDown = 0x8C; // float
			constexpr auto random = 0x90; // Random
			constexpr auto accelerationAudioData = 0x98; // float[]
			constexpr auto currentCycle = 0xA0; // EngineCycle
			constexpr auto audioDataLoaded = 0xA8; // bool
		}
		namespace FlybySound
		{
			constexpr auto flybySound = 0x18; // SoundDefinition
			constexpr auto flybySoundDistance = 0x20; // float
			constexpr auto closeFlybySound = 0x28; // SoundDefinition
			constexpr auto closeFlybyDistance = 0x30; // float
			constexpr auto flybyPlayed = 0x34; // bool
		}
		namespace FootstepSound
		{
			constexpr auto lightSound = 0x18; // SoundDefinition
			constexpr auto medSound = 0x20; // SoundDefinition
			constexpr auto hardSound = 0x28; // SoundDefinition
		}
		namespace GranularAudioClip
		{
			constexpr auto sourceClip = 0x18; // AudioClip
			constexpr auto sourceAudioData = 0x20; // float[]
			constexpr auto sourceChannels = 0x28; // int32_t
			constexpr auto granularClip = 0x30; // AudioClip
			constexpr auto sampleRate = 0x38; // int32_t
			constexpr auto sourceTime = 0x3C; // float
			constexpr auto sourceTimeVariation = 0x40; // float
			constexpr auto grainAttack = 0x44; // float
			constexpr auto grainSustain = 0x48; // float
			constexpr auto grainRelease = 0x4C; // float
			constexpr auto grainFrequency = 0x50; // float
			constexpr auto grainAttackSamples = 0x54; // int32_t
			constexpr auto grainSustainSamples = 0x58; // int32_t
			constexpr auto grainReleaseSamples = 0x5C; // int32_t
			constexpr auto grainFrequencySamples = 0x60; // int32_t
			constexpr auto samplesUntilNextGrain = 0x64; // int32_t
			constexpr auto grains = 0x68; // List`1
			constexpr auto random = 0x70; // Random
			constexpr auto inited = 0x78; // bool
		}
		namespace MixerSnapshotManager
		{
			constexpr auto defaultSnapshot = 0x18; // AudioMixerSnapshot
			constexpr auto underwaterSnapshot = 0x20; // AudioMixerSnapshot
			constexpr auto loadingSnapshot = 0x28; // AudioMixerSnapshot
			constexpr auto woundedSnapshot = 0x30; // AudioMixerSnapshot
			constexpr auto cctvSnapshot = 0x38; // AudioMixerSnapshot
			constexpr auto underwaterInSound = 0x40; // SoundDefinition
			constexpr auto underwaterOutSound = 0x48; // SoundDefinition
			constexpr auto recordingSnapshot = 0x50; // AudioMixerSnapshot
			constexpr auto woundedLoop = 0x58; // SoundDefinition
			constexpr auto woundedLoopSound = 0x60; // Sound
			constexpr auto cctvModeLoopDef = 0x68; // SoundDefinition
			constexpr auto cctvModeLoop = 0x70; // Sound
			constexpr auto cctvModeStartDef = 0x78; // SoundDefinition
			constexpr auto cctvModeStopDef = 0x80; // SoundDefinition
			constexpr auto deafness = 0x88; // float
			constexpr auto cctvMode = 0x8C; // bool
			constexpr auto currentState = 0x90; // AudioMixerSnapshot
		}
		namespace MovementSoundTrigger
		{
			constexpr auto softSound = 0x30; // SoundDefinition
			constexpr auto medSound = 0x38; // SoundDefinition
			constexpr auto hardSound = 0x40; // SoundDefinition
			constexpr auto collider = 0x48; // Collider
			constexpr auto cell = 0x50; // LODCell
			constexpr auto lastPositionByObject = 0x58; // Dictionary`2
		}
		namespace MusicChangeIntensity
		{
			constexpr auto raiseTo = 0x18; // float
			constexpr auto distanceIntensities = 0x20; // List`1
			constexpr auto tickInterval = 0x28; // float
			constexpr auto lastTick = 0x2C; // float
		}
		namespace MusicClip
		{
			constexpr auto audioClip = 0x18; // AudioClip
			constexpr auto lengthInBars = 0x20; // int32_t
			constexpr auto lengthInBarsWithTail = 0x24; // int32_t
			constexpr auto fadeInPoints = 0x28; // List`1
		}
		namespace MusicClipLoader
		{
			constexpr auto loadedClips = 0x10; // List`1
			constexpr auto loadedClipDict = 0x18; // Dictionary`2
			constexpr auto clipsToLoad = 0x20; // List`1
			constexpr auto clipsToUnload = 0x28; // List`1
		}
		namespace MusicManager
		{
			constexpr auto mixerGroup = 0x18; // AudioMixerGroup
			constexpr auto themes = 0x20; // List`1
			constexpr auto currentTheme = 0x28; // MusicTheme
			constexpr auto sources = 0x30; // List`1
			constexpr auto nextMusic = 0x38; // Double
			constexpr auto nextMusicFromIntensityRaise = 0x40; // Double
			constexpr auto intensity = 0x48; // float
			constexpr auto clipPlaybackData = 0x50; // Dictionary`2
			constexpr auto holdIntensityUntilBar = 0x58; // int32_t
			constexpr auto musicPlaying = 0x5C; // bool
			constexpr auto loadingFirstClips = 0x5D; // bool
			constexpr auto nextTheme = 0x60; // MusicTheme
			constexpr auto lastClipUpdate = 0x68; // Double
			constexpr auto clipUpdateInterval = 0x70; // float
			constexpr auto themeStartTime = 0x78; // Double
			constexpr auto lastActiveClipRefresh = 0x80; // int32_t
			constexpr auto activeClipRefreshInterval = 0x84; // int32_t
			constexpr auto forceThemeChange = 0x88; // bool
			constexpr auto randomIntensityJumpChance = 0x8C; // float
			constexpr auto clipScheduleBarsEarly = 0x90; // int32_t
			constexpr auto activeClips = 0x98; // List`1
			constexpr auto activeMusicClips = 0xA0; // List`1
			constexpr auto activeControlClips = 0xA8; // List`1
			constexpr auto currentMusicZones = 0xB0; // List`1
			constexpr auto currentBar = 0xB8; // int32_t
			constexpr auto barOffset = 0xBC; // int32_t
			constexpr auto syncSource = 0xC0; // AudioSource
			constexpr auto needsResync = 0xC8; // bool
			constexpr auto fadingClipCount = 0xCC; // int32_t
			constexpr auto clipLoader = 0xD0; // MusicClipLoader
			constexpr auto validThemes = 0xD8; // List`1
		}
		namespace MusicTheme
		{
			constexpr auto tempo = 0x18; // float
			constexpr auto intensityHoldBars = 0x1C; // int32_t
			constexpr auto lengthInBars = 0x20; // int32_t
			constexpr auto canPlayInMenus = 0x24; // bool
			constexpr auto rain = 0x28; // ValueRange
			constexpr auto wind = 0x30; // ValueRange
			constexpr auto snow = 0x38; // ValueRange
			constexpr auto biomes = 0x40; // Enum
			constexpr auto topologies = 0x44; // Enum
			constexpr auto time = 0x48; // AnimationCurve
			constexpr auto clips = 0x50; // List`1
			constexpr auto layers = 0x58; // List`1
			constexpr auto activeClips = 0x60; // Dictionary`2
			constexpr auto firstAudioClips = 0x68; // List`1
			constexpr auto audioClipDict = 0x70; // Dictionary`2
		}
		namespace MusicZone
		{
			constexpr auto themes = 0x18; // List`1
			constexpr auto priority = 0x20; // float
			constexpr auto suppressAutomaticMusic = 0x24; // bool
		}
		namespace OggDecoder
		{
			constexpr auto _nativeDecoder = 0x10; // IntPtr
		}
		namespace OggEncoder
		{
			constexpr auto _nativeEncoder = 0x10; // IntPtr
		}
		namespace OnePoleLowpassFilter
		{
			constexpr auto frequency = 0x18; // float
			constexpr auto sampleRate = 0x1C; // int32_t
			constexpr auto c = 0x20; // float
			constexpr auto a1 = 0x24; // float
			constexpr auto b1 = 0x28; // float
			constexpr auto channelData = 0x30; // ChannelData[]
			constexpr auto prevFrequency = 0x38; // float
		}
		namespace ReverbSettings
		{
			constexpr auto room = 0x18; // int32_t
			constexpr auto roomHF = 0x1C; // int32_t
			constexpr auto roomLF = 0x20; // int32_t
			constexpr auto decayTime = 0x24; // float
			constexpr auto decayHFRatio = 0x28; // float
			constexpr auto reflections = 0x2C; // int32_t
			constexpr auto reflectionsDelay = 0x30; // float
			constexpr auto reverb = 0x34; // int32_t
			constexpr auto reverbDelay = 0x38; // float
			constexpr auto HFReference = 0x3C; // float
			constexpr auto LFReference = 0x40; // float
			constexpr auto diffusion = 0x44; // float
			constexpr auto density = 0x48; // float
		}
		namespace ReverbZoneTrigger
		{
			constexpr auto trigger = 0x30; // Collider
			constexpr auto reverbZone = 0x38; // AudioReverbZone
			constexpr auto lodDistance = 0x40; // float
			constexpr auto inRange = 0x44; // bool
			constexpr auto reverbSettings = 0x48; // ReverbSettings
			constexpr auto initialReverbLevel = 0x50; // int32_t
			constexpr auto targetReverbLevel = 0x54; // int32_t
			constexpr auto currentReverbLevel = 0x58; // int32_t
			constexpr auto cell = 0x60; // LODCell
			constexpr auto isInPoolable = 0x68; // bool
			constexpr auto ambienceZone = 0x70; // AmbienceZone
			constexpr auto decayHFRatio = 0x78; // float
			constexpr auto decayTime = 0x7C; // float
			constexpr auto density = 0x80; // float
			constexpr auto diffusion = 0x84; // float
			constexpr auto HFReference = 0x88; // float
			constexpr auto LFReference = 0x8C; // float
			constexpr auto maxDistance = 0x90; // float
			constexpr auto minDistance = 0x94; // float
			constexpr auto reflections = 0x98; // int32_t
			constexpr auto reflectionsDelay = 0x9C; // float
			constexpr auto reverb = 0xA0; // int32_t
			constexpr auto reverbDelay = 0xA4; // float
			constexpr auto room = 0xA8; // int32_t
			constexpr auto roomHF = 0xAC; // int32_t
			constexpr auto roomLF = 0xB0; // int32_t
		}
		namespace ShoutcastStreamer
		{
			constexpr auto Host = 0x18; // string
			constexpr auto Source = 0x20; // AudioSource
			constexpr auto MaxAudioStreams = 0x0; // int32_t
			constexpr auto DebugStreams = 0x4; // bool
			constexpr auto StreamingAnalytics = 0x5; // bool
			constexpr auto _allowInternetStreams = 0x6; // bool
			constexpr auto activeStreams = 0x8; // HashSet`1
			constexpr auto BuiltinRadios = 0x28; // RadioPlaylist[]
			constexpr auto Stream = 0x30; // ShoutcastStream
			constexpr auto _readingData = 0x38; // bool
			constexpr auto streamClip = 0x40; // AudioClip
			constexpr auto sampleRate = 0x48; // int32_t
			constexpr auto CurrentReadIndexk__BackingField = 0x4C; // uint32_t
			constexpr auto canUpdate = 0x50; // bool
			constexpr auto wantsShutdown = 0x51; // bool
			constexpr auto currentPlaylist = 0x58; // RadioPlaylist
			constexpr auto nextStatLog = 0x60; // TimeUntil
			constexpr auto waitAudio = 0x64; // bool
			constexpr auto waitUntilBuffer = 0x68; // float
		}
		namespace SlicedGranularAudioClip
		{
			constexpr auto sourceClip = 0x18; // AudioClip
			constexpr auto granularClip = 0x20; // AudioClip
			constexpr auto sampleRate = 0x28; // int32_t
			constexpr auto grainAttack = 0x2C; // float
			constexpr auto grainSustain = 0x30; // float
			constexpr auto grainRelease = 0x34; // float
			constexpr auto grainFrequency = 0x38; // float
			constexpr auto grainAttackSamples = 0x3C; // int32_t
			constexpr auto grainSustainSamples = 0x40; // int32_t
			constexpr auto grainReleaseSamples = 0x44; // int32_t
			constexpr auto grainFrequencySamples = 0x48; // int32_t
			constexpr auto samplesUntilNextGrain = 0x4C; // int32_t
			constexpr auto grains = 0x50; // List`1
			constexpr auto startPositions = 0x58; // List`1
			constexpr auto lastStartPositionIdx = 0x60; // int32_t
			constexpr auto sourceAudioData = 0x68; // float[]
			constexpr auto sourceChannels = 0x70; // int32_t
			constexpr auto source = 0x78; // AudioSource
			constexpr auto audioDataLoaded = 0x80; // bool
			constexpr auto random = 0x88; // Random
		}
		namespace Sound
		{
			constexpr auto volumeExponent = 0x0; // float
			constexpr auto definition = 0x18; // SoundDefinition
			constexpr auto modifiers = 0x20; // SoundModifier[]
			constexpr auto soundSource = 0x28; // SoundSource
			constexpr auto audioSources = 0x30; // AudioSource[]
			constexpr auto _fade = 0x38; // SoundFade
			constexpr auto _modulation = 0x40; // SoundModulation
			constexpr auto _occlusion = 0x48; // SoundOcclusion
			constexpr auto audioSource = 0x50; // AudioSource
			constexpr auto distantAudioSource = 0x58; // AudioSource
			constexpr auto syncParent = 0x60; // Sound
			constexpr auto syncChild = 0x68; // Sound
			constexpr auto initialMaxDistancek__BackingField = 0x70; // float
			constexpr auto initialSpreadk__BackingField = 0x74; // float
			constexpr auto playing = 0x78; // bool
			constexpr auto isFirstPerson = 0x79; // bool
			constexpr auto startTimek__BackingField = 0x7C; // float
			constexpr auto endTimek__BackingField = 0x80; // float
			constexpr auto closeClips = 0x88; // List`1
			constexpr auto farClips = 0x90; // List`1
			constexpr auto distanceScale = 0x98; // float
			constexpr auto clipIndex = 0x9C; // int32_t
			constexpr auto hasDistantSound = 0xA0; // bool
			constexpr auto length = 0xA4; // float
			constexpr auto FrameUpdateIndex = 0xA8; // int32_t
			constexpr auto previousPosition = 0xAC; // Vector3
			constexpr auto previousPositionUpdateTime = 0xB8; // float
			constexpr auto basePitchk__BackingField = 0xBC; // float
			constexpr auto priorityModifier = 0xC0; // int32_t
		}
		namespace SoundClass
		{
			constexpr auto output = 0x18; // AudioMixerGroup
			constexpr auto firstPersonOutput = 0x20; // AudioMixerGroup
			constexpr auto enableOcclusion = 0x28; // bool
			constexpr auto playIfOccluded = 0x29; // bool
			constexpr auto occlusionGain = 0x2C; // float
			constexpr auto occludedOutput = 0x30; // AudioMixerGroup
			constexpr auto globalVoiceMaxCount = 0x38; // int32_t
			constexpr auto priority = 0x3C; // int32_t
			constexpr auto definitions = 0x40; // List`1
		}
		namespace SoundClassTest
		{
			constexpr auto soundClass = 0x18; // SoundClass
			constexpr auto soundInterval = 0x20; // float
			constexpr auto lastPlayed = 0x24; // float
		}
		namespace SoundDefinition
		{
			constexpr auto template_ = 0x18; // GameObjectRef
			constexpr auto weightedAudioClips = 0x20; // List`1
			constexpr auto distanceAudioClips = 0x28; // List`1
			constexpr auto soundClass = 0x30; // SoundClass
			constexpr auto defaultToFirstPerson = 0x38; // bool
			constexpr auto loop = 0x39; // bool
			constexpr auto randomizeStartPosition = 0x3A; // bool
			constexpr auto useHighQualityFades = 0x3B; // bool
			constexpr auto volume = 0x3C; // float
			constexpr auto volumeVariation = 0x40; // float
			constexpr auto pitch = 0x44; // float
			constexpr auto pitchVariation = 0x48; // float
			constexpr auto dontVoiceLimit = 0x4C; // bool
			constexpr auto globalVoiceMaxCount = 0x50; // int32_t
			constexpr auto localVoiceMaxCount = 0x54; // int32_t
			constexpr auto localVoiceRange = 0x58; // float
			constexpr auto voiceLimitFadeOutTime = 0x5C; // float
			constexpr auto localVoiceDebounceTime = 0x60; // float
			constexpr auto forceOccludedPlayback = 0x64; // bool
			constexpr auto enableDoppler = 0x65; // bool
			constexpr auto dopplerAmount = 0x68; // float
			constexpr auto dopplerScale = 0x6C; // float
			constexpr auto dopplerAdjustmentRate = 0x70; // float
			constexpr auto falloffCurve = 0x78; // AnimationCurve
			constexpr auto useCustomFalloffCurve = 0x80; // bool
			constexpr auto spatialBlendCurve = 0x88; // AnimationCurve
			constexpr auto useCustomSpatialBlendCurve = 0x90; // bool
			constexpr auto spreadCurve = 0x98; // AnimationCurve
			constexpr auto useCustomSpreadCurve = 0xA0; // bool
		}
		namespace SoundFade
		{
			constexpr auto hqFadeFilter = 0x18; // SoundFadeHQAudioFilter
			constexpr auto currentGain = 0x20; // float
			constexpr auto startingGain = 0x24; // float
			constexpr auto finalGain = 0x28; // float
			constexpr auto sampleRate = 0x2C; // int32_t
			constexpr auto highQualityFadeCompleted = 0x30; // bool
			constexpr auto length = 0x34; // float
			constexpr auto currentDirection = 0x38; // Direction
			constexpr auto _sound = 0x40; // Sound
			constexpr auto fadeGainModulator = 0x48; // Modulator
			constexpr auto startTime = 0x50; // float
			constexpr auto fadeOutTimeFinished = 0x54; // float
			constexpr auto fadeOutTimeBuffer = 0x58; // float
		}
		namespace SoundFadeHQAudioFilter
		{
			constexpr auto fade = 0x18; // SoundFade
		}
		namespace SoundFollowCollider
		{
			constexpr auto soundDefinition = 0x18; // SoundDefinition
			constexpr auto sound = 0x20; // Sound
			constexpr auto soundFollowBounds = 0x28; // Bounds
			constexpr auto startImmediately = 0x40; // bool
			constexpr auto soundPlaying = 0x41; // bool
		}
		namespace SoundManager
		{
			constexpr auto defaultSoundClass = 0x18; // SoundClass
			constexpr auto activeSoundsByDef = 0x20; // Dictionary`2
			constexpr auto budgetUpdatables = 0x28; // List`1
			constexpr auto pendingSoundPlayers = 0x30; // List`1
			constexpr auto scheduledSounds = 0x38; // List`1
			constexpr auto updatableIndex = 0x40; // int32_t
			constexpr auto watch = 0x48; // Stopwatch
			constexpr auto prevCameraPos = 0x50; // Vector3
			constexpr auto smoothedCameraVelk__BackingField = 0x5C; // Vector3
			constexpr auto cameraVelSmoothSpeed = 0x68; // float
			constexpr auto otherLocalSounds = 0x70; // List`1
		}
		namespace SoundModifier
		{
			constexpr auto sound = 0x18; // Sound
		}
		namespace SoundModulation
		{
			constexpr auto sound = 0x18; // Sound
			constexpr auto modulators = 0x20; // List`1
			constexpr auto modulationValues = 0x28; // List`1
		}
		namespace SoundOcclusion
		{
			constexpr auto occlusionLayerMask = 0x18; // LayerMask
			constexpr auto isOccludedk__BackingField = 0x1C; // bool
			constexpr auto occlusionAmount = 0x20; // float
			constexpr auto sound = 0x28; // Sound
			constexpr auto lowpass = 0x30; // OnePoleLowpassFilter
			constexpr auto gainMod = 0x38; // Modulator
			constexpr auto soundOffset = 0x40; // Vector3
			constexpr auto lastOcclusionCheck = 0x4C; // float
			constexpr auto occlusionCheckInterval = 0x50; // float
			constexpr auto ray = 0x54; // Ray
			constexpr auto hits = 0x70; // List`1
		}
		namespace SoundPlayer
		{
			constexpr auto soundDefinition = 0x18; // SoundDefinition
			constexpr auto playImmediately = 0x20; // bool
			constexpr auto minStartDelay = 0x24; // float
			constexpr auto maxStartDelay = 0x28; // float
			constexpr auto debugRepeat = 0x2C; // bool
			constexpr auto pending = 0x2D; // bool
			constexpr auto soundOffset = 0x30; // Vector3
			constexpr auto playOnFrame = 0x3C; // int32_t
			constexpr auto soundk__BackingField = 0x40; // Sound
		}
		namespace SoundPlayerCull
		{
			constexpr auto soundPlayer = 0x18; // SoundPlayer
			constexpr auto cullDistance = 0x20; // float
			constexpr auto cell = 0x28; // LODCell
		}
		namespace SoundRandomizer
		{
			constexpr auto lastClipIndexBySoundDef = 0x0; // Dictionary`2
		}
		namespace SoundRepeater
		{
			constexpr auto interval = 0x18; // float
			constexpr auto player = 0x20; // SoundPlayer
		}
		namespace SoundSource
		{
			constexpr auto handleOcclusionChecks = 0x18; // bool
			constexpr auto occlusionLayerMask = 0x1C; // LayerMask
			constexpr auto occlusionPoints = 0x20; // List`1
			constexpr auto isOccluded = 0x28; // bool
			constexpr auto occlusionAmount = 0x2C; // float
			constexpr auto lodDistance = 0x30; // float
			constexpr auto inRange = 0x34; // bool
			constexpr auto wasInRange = 0x35; // bool
			constexpr auto cell = 0x38; // LODCell
			constexpr auto lastOcclusionCheck = 0x40; // float
			constexpr auto occlusionCheckInterval = 0x44; // float
			constexpr auto lastOcclusionPointIdx = 0x48; // int32_t
			constexpr auto ray = 0x4C; // Ray
			constexpr auto hits = 0x68; // List`1
		}
		namespace SoundVoiceLimiter
		{
			constexpr auto maxSimultaneousSounds = 0x18; // int32_t
			constexpr auto sounds = 0x20; // List`1
		}
		namespace TimeBasedSoundSpread
		{
			constexpr auto spreadCurve = 0x20; // AnimationCurve
			constexpr auto wanderIntensityCurve = 0x28; // AnimationCurve
			constexpr auto startTime = 0x30; // float
			constexpr auto wanderTime = 0x34; // float
			constexpr auto modulator = 0x38; // Modulator
		}
		namespace WeightedAudioClip
		{
			constexpr auto audioClip = 0x10; // AudioClip
			constexpr auto weight = 0x18; // int32_t
		}
		namespace AttractionPoint
		{
			constexpr auto groupName = 0x98; // string
		}
		namespace ConditionalModel
		{
			constexpr auto prefab = 0x98; // GameObjectRef
			constexpr auto onClient = 0xA0; // bool
			constexpr auto onServer = 0xA1; // bool
			constexpr auto conditions = 0xA8; // ModelConditionTest[]
			constexpr auto targetPrefabIdk__BackingField = 0xB0; // uint32_t
		}
		namespace Construction
		{
			constexpr auto info = 0x98; // Option
			constexpr auto canBypassBuildingPermission = 0xB8; // bool
			constexpr auto canRotateBeforePlacement = 0xB9; // bool
			constexpr auto canRotateAfterPlacement = 0xBA; // bool
			constexpr auto checkVolumeOnRotate = 0xBB; // bool
			constexpr auto checkVolumeOnUpgrade = 0xBC; // bool
			constexpr auto canPlaceAtMaxDistance = 0xBD; // bool
			constexpr auto placeOnWater = 0xBE; // bool
			constexpr auto rotationAmount = 0xC0; // Vector3
			constexpr auto applyStartingRotation = 0xCC; // Vector3
			constexpr auto deployOffset = 0xD8; // Transform
			constexpr auto healthMultiplier = 0xE0; // float
			constexpr auto costMultiplier = 0xE4; // float
			constexpr auto maxplaceDistance = 0xE8; // float
			constexpr auto guideMesh = 0xF0; // Mesh
			constexpr auto allSockets = 0xF8; // Socket_Base[]
			constexpr auto allProximities = 0x100; // BuildingProximity[]
			constexpr auto defaultGrade = 0x108; // ConstructionGrade
			constexpr auto socketHandle = 0x110; // SocketHandle
			constexpr auto bounds = 0x118; // Bounds
			constexpr auto isBuildingPrivilege = 0x130; // bool
			constexpr auto isSleepingBag = 0x131; // bool
			constexpr auto grades = 0x138; // ConstructionGrade[]
			constexpr auto deployable = 0x140; // Deployable
			constexpr auto placeholder = 0x148; // ConstructionPlaceholder
			constexpr auto lastPlacementError = 0x0; // string
		}
		namespace ConstructionGrade
		{
			constexpr auto construction = 0x98; // Construction
			constexpr auto gradeBase = 0xA0; // BuildingGrade
			constexpr auto skinObject = 0xA8; // GameObjectRef
			constexpr auto _costToBuild = 0xB0; // List`1
		}
		namespace ConstructionPlaceholder
		{
			constexpr auto mesh = 0x98; // Mesh
			constexpr auto material = 0xA0; // Material
			constexpr auto renderer = 0xA8; // bool
			constexpr auto collider = 0xA9; // bool
		}
		namespace ConstructionSkin
		{
			constexpr auto rendererBatches = 0x20; // RendererBatch[]
			constexpr auto conditionals = 0x28; // List`1
		}
		namespace ConstructionSkin_ColourLookup
		{
			constexpr auto Sample = 0x18; // Texture2D
			constexpr auto AllColours = 0x20; // Color[]
		}
		namespace ConstructionSkin_CustomDetail
		{
			constexpr auto ColourLookup = 0x30; // ConstructionSkin_ColourLookup
			constexpr auto detailBlock = 0x0; // MaterialPropertyBlock
			constexpr auto detailTintSourceId = 0x8; // int32_t
			constexpr auto detailColorId = 0xC; // int32_t
		}
		namespace ConstructionSocket
		{
			constexpr auto socketType = 0xF8; // Type
			constexpr auto rotationDegrees = 0xFC; // int32_t
			constexpr auto rotationOffset = 0x100; // int32_t
			constexpr auto restrictPlacementRotation = 0x104; // bool
			constexpr auto restrictPlacementAngle = 0x105; // bool
			constexpr auto faceAngle = 0x108; // float
			constexpr auto angleAllowed = 0x10C; // float
			constexpr auto support = 0x110; // float
		}
		namespace ConstructionSocket_Elevator
		{
			constexpr auto MaxFloor = 0x118; // int32_t
		}
		namespace Construction_SleepingBag
		{
			constexpr auto ShowSleepingBagProximityWarning = 0x0; // bool
		}
		namespace DecayPoint
		{
			constexpr auto protection = 0x98; // float
			constexpr auto socket = 0xA0; // Socket_Base
		}
		namespace DirectionProperties
		{
			constexpr auto bounds = 0x98; // Bounds
			constexpr auto extraProtection = 0xB0; // ProtectionProperties
		}
		namespace ModelConditionTest_False
		{
			constexpr auto reference = 0x98; // ConditionalModel
		}
		namespace ModelConditionTest_FoundationSide
		{
			constexpr auto socket = 0x98; // string
		}
		namespace ModelConditionTest_RoofBottom
		{
			constexpr auto sockets_bot_right = 0x0; // string[]
			constexpr auto sockets_bot_left = 0x8; // string[]
		}
		namespace ModelConditionTest_RoofLeft
		{
			constexpr auto angle = 0x98; // AngleType
			constexpr auto shape = 0x9C; // ShapeType
			constexpr auto sockets_left = 0x0; // string[]
		}
		namespace ModelConditionTest_RoofRight
		{
			constexpr auto angle = 0x98; // AngleType
			constexpr auto shape = 0x9C; // ShapeType
			constexpr auto sockets_right = 0x0; // string[]
		}
		namespace ModelConditionTest_RoofTop
		{
			constexpr auto sockets_top_right = 0x0; // string[]
			constexpr auto sockets_top_left = 0x8; // string[]
		}
		namespace ModelConditionTest_SpiralStairs
		{
			constexpr auto stairs_sockets_female = 0x0; // string[]
			constexpr auto floor_sockets_female = 0x8; // string[]
		}
		namespace ModelConditionTest_True
		{
			constexpr auto reference = 0x98; // ConditionalModel
		}
		namespace ModelConditionTest_WallCornerLeft
		{
			constexpr auto sockets = 0x0; // string[]
		}
		namespace ModelConditionTest_WallCornerRight
		{
			constexpr auto sockets = 0x0; // string[]
		}
		namespace SocketMod
		{
			constexpr auto baseSocket = 0x98; // Socket_Base
			constexpr auto FailedPhrase = 0xA0; // Phrase
		}
		namespace SocketMod_AngleCheck
		{
			constexpr auto wantsAngle = 0xA8; // bool
			constexpr auto worldNormal = 0xAC; // Vector3
			constexpr auto withinDegrees = 0xB8; // float
			constexpr auto ErrorPhrase = 0x0; // Phrase
		}
		namespace SocketMod_AreaCheck
		{
			constexpr auto bounds = 0xA8; // Bounds
			constexpr auto layerMask = 0xC0; // LayerMask
			constexpr auto wantsInside = 0xC4; // bool
		}
		namespace SocketMod_Attraction
		{
			constexpr auto outerRadius = 0xA8; // float
			constexpr auto innerRadius = 0xAC; // float
			constexpr auto groupName = 0xB0; // string
			constexpr auto lockRotation = 0xB8; // bool
			constexpr auto ignoreRotationForRadiusCheck = 0xB9; // bool
			constexpr auto LastSnap = 0x0; // TimeSince
		}
		namespace SocketMod_BuildingBlock
		{
			constexpr auto sphereRadius = 0xA8; // float
			constexpr auto layerMask = 0xAC; // LayerMask
			constexpr auto queryTriggers = 0xB0; // QueryTriggerInteraction
			constexpr auto wantsCollide = 0xB4; // bool
		}
		namespace SocketMod_EntityCheck
		{
			constexpr auto sphereRadius = 0xA8; // float
			constexpr auto layerMask = 0xAC; // LayerMask
			constexpr auto queryTriggers = 0xB0; // QueryTriggerInteraction
			constexpr auto entityTypes = 0xB8; // BaseEntity[]
			constexpr auto wantsCollide = 0xC0; // bool
		}
		namespace SocketMod_EntityType
		{
			constexpr auto sphereRadius = 0xA8; // float
			constexpr auto layerMask = 0xAC; // LayerMask
			constexpr auto queryTriggers = 0xB0; // QueryTriggerInteraction
			constexpr auto searchType = 0xB8; // BaseEntity
			constexpr auto wantsCollide = 0xC0; // bool
		}
		namespace SocketMod_HotSpot
		{
			constexpr auto spotSize = 0xA8; // float
		}
		namespace SocketMod_InWater
		{
			constexpr auto wantsInWater = 0xA8; // bool
			constexpr auto WantsWaterPhrase = 0x0; // Phrase
			constexpr auto NoWaterPhrase = 0x8; // Phrase
		}
		namespace SocketMod_PhysicMaterial
		{
			constexpr auto ValidMaterials = 0xA8; // PhysicMaterial[]
			constexpr auto foundMaterial = 0xB0; // PhysicMaterial
		}
		namespace SocketMod_PlantCheck
		{
			constexpr auto sphereRadius = 0xA8; // float
			constexpr auto layerMask = 0xAC; // LayerMask
			constexpr auto queryTriggers = 0xB0; // QueryTriggerInteraction
			constexpr auto wantsCollide = 0xB4; // bool
		}
		namespace SocketMod_SphereCheck
		{
			constexpr auto sphereRadius = 0xA8; // float
			constexpr auto layerMask = 0xAC; // LayerMask
			constexpr auto wantsCollide = 0xB0; // bool
			constexpr auto Error_WantsCollideConstruction = 0x0; // Phrase
			constexpr auto Error_DoesNotWantCollideConstruction = 0x8; // Phrase
		}
		namespace SocketMod_TerrainCheck
		{
			constexpr auto wantsInTerrain = 0xA8; // bool
		}
		namespace SocketMod_WaterDepth
		{
			constexpr auto MinimumWaterDepth = 0xA8; // float
			constexpr auto MaximumWaterDepth = 0xAC; // float
			constexpr auto AllowWaterVolumes = 0xB0; // bool
			constexpr auto TooDeepPhrase = 0x0; // Phrase
			constexpr auto TooShallowPhrase = 0x8; // Phrase
		}
		namespace Socket_Base
		{
			constexpr auto male = 0x98; // bool
			constexpr auto maleDummy = 0x99; // bool
			constexpr auto female = 0x9A; // bool
			constexpr auto femaleDummy = 0x9B; // bool
			constexpr auto femaleNoStability = 0x9C; // bool
			constexpr auto monogamous = 0x9D; // bool
			constexpr auto position = 0xA0; // Vector3
			constexpr auto rotation = 0xAC; // Quaternion
			constexpr auto cachedType = 0xC0; // Type
			constexpr auto selectSize = 0xC8; // Vector3
			constexpr auto selectCenter = 0xD4; // Vector3
			constexpr auto socketName = 0xE0; // string
			constexpr auto socketMods = 0xE8; // SocketMod[]
			constexpr auto checkOccupiedSockets = 0xF0; // OccupiedSocketCheck[]
		}
		namespace Socket_Free
		{
			constexpr auto idealPlacementNormal = 0xF8; // Vector3
			constexpr auto useTargetNormal = 0x104; // bool
			constexpr auto blendAimAngle = 0x105; // bool
		}
		namespace Socket_Specific
		{
			constexpr auto useFemaleRotation = 0xF8; // bool
			constexpr auto targetSocketName = 0x100; // string
		}
		namespace Socket_Specific_Female
		{
			constexpr auto rotationDegrees = 0xF8; // int32_t
			constexpr auto rotationOffset = 0xFC; // int32_t
			constexpr auto allowedMaleSockets = 0x100; // string[]
		}
		namespace Socket_Terrain
		{
			constexpr auto placementHeight = 0xF8; // float
			constexpr auto alignToNormal = 0xFC; // bool
		}
		namespace StabilitySocket
		{
			constexpr auto support = 0xF8; // float
		}
		namespace WeakpointProperties
		{
			constexpr auto BlockWhenRoofAttached = 0x98; // bool
		}
		namespace AnimalSkin
		{
			constexpr auto animalMesh = 0x18; // SkinnedMeshRenderer[]
			constexpr auto animalSkins = 0x20; // AnimalMultiSkin[]
			constexpr auto model = 0x28; // Model
			constexpr auto dontRandomizeOnStart = 0x30; // bool
		}
		namespace AnimalMultiSkin
		{
			constexpr auto multiSkin = 0x10; // Material[]
		}
		namespace AnimalAnimation
		{
			constexpr auto Entity = 0x18; // BaseEntity
			constexpr auto Target = 0x20; // BaseNpc
			constexpr auto Animator = 0x28; // Animator
			constexpr auto FootstepEffects = 0x30; // MaterialEffect
			constexpr auto Feet = 0x38; // Transform[]
			constexpr auto saddleMovementSoundDef = 0x40; // SoundDefinition
			constexpr auto saddleMovementSoundDefWood = 0x48; // SoundDefinition
			constexpr auto saddleMovementSoundDefRoadsign = 0x50; // SoundDefinition
			constexpr auto saddleMovementGainCurve = 0x58; // AnimationCurve
			constexpr auto hasIdleOffset = 0x60; // bool
			constexpr auto BaseFolder = 0x68; // string
			constexpr auto lastThinkTime = 0x70; // float
			constexpr auto previousPosition = 0x74; // Vector3
			constexpr auto previousRotationYaw = 0x80; // float
			constexpr auto wasSleeping = 0x84; // bool
		}
		namespace AnimalFootIK
		{
			constexpr auto Feet = 0x18; // Transform[]
			constexpr auto animator = 0x20; // Animator
			constexpr auto maxWeightDistance = 0x28; // float
			constexpr auto minWeightDistance = 0x2C; // float
			constexpr auto actualFootOffset = 0x30; // float
		}
		namespace AvatarSwitcher
		{
			constexpr auto ToApply = 0x18; // Avatar
		}
		namespace BlendShapeController
		{
			constexpr auto TargetRenderer = 0x18; // SkinnedMeshRenderer
			constexpr auto States = 0x20; // BlendState[]
			constexpr auto LerpSpeed = 0x28; // float
			constexpr auto CurrentMode = 0x2C; // BlendMode
			constexpr auto currentStates = 0x30; // float[]
		}
		namespace AverageVelocity
		{
			constexpr auto pos = 0x10; // Vector3
			constexpr auto time = 0x1C; // float
			constexpr auto lastEntry = 0x20; // float
			constexpr auto averageSpeed = 0x24; // float
			constexpr auto averageVelocity = 0x28; // Vector3
		}
		namespace NpcWalkAnimation
		{
			constexpr auto HipFudge = 0x18; // Vector3
			constexpr auto Npc = 0x28; // BaseNpc
			constexpr auto Animator = 0x30; // Animator
			constexpr auto HipBone = 0x38; // Transform
			constexpr auto LookBone = 0x40; // Transform
			constexpr auto UpdateWalkSpeed = 0x48; // bool
			constexpr auto UpdateFacingDirection = 0x49; // bool
			constexpr auto UpdateGroundNormal = 0x4A; // bool
			constexpr auto alignmentRoot = 0x50; // Transform
			constexpr auto LaggyAss = 0x58; // bool
			constexpr auto LookAtTarget = 0x59; // bool
			constexpr auto MaxLaggyAssRotation = 0x5C; // float
			constexpr auto MaxWalkAnimSpeed = 0x60; // float
			constexpr auto UseDirectionBlending = 0x64; // bool
			constexpr auto useTurnPosing = 0x65; // bool
			constexpr auto turnPoseScale = 0x68; // float
			constexpr auto laggyAssLerpScale = 0x6C; // float
			constexpr auto skeletonChainInverted = 0x70; // bool
			constexpr auto ParamWalkSpeed = 0x0; // int32_t
			constexpr auto ParamWalkSpeedAverage = 0x4; // int32_t
			constexpr auto ParamWalkDirX = 0x8; // int32_t
			constexpr auto ParamWalkDirZ = 0xC; // int32_t
			constexpr auto ParamTurnPose = 0x10; // int32_t
			constexpr auto AverageVelocity = 0x78; // AverageVelocity
			constexpr auto oldPosition = 0x80; // Vector3
			constexpr auto hipForward = 0x8C; // Quaternion
			constexpr auto baseHipRotation = 0x9C; // Quaternion
			constexpr auto baseLookRotation = 0xAC; // Quaternion
			constexpr auto framebudgetms = 0x14; // float
			constexpr auto WorkQueue = 0x18; // NPCWalkWorkQueue
			constexpr auto targetUp = 0xBC; // Vector3
			constexpr auto targetOffset = 0xC8; // Vector3
			constexpr auto lastForward = 0xD4; // Vector3
			constexpr auto lastGroundAlignHit = 0xE0; // bool
			constexpr auto lastGroundAlignInfo = 0xE4; // RaycastHit
			constexpr auto avgTurnDifference = 0x110; // float
		}
		namespace ReliableEventSender
		{
			constexpr auto StateEnter = 0x18; // string
			constexpr auto MidStateEvent = 0x20; // string
			constexpr auto TargetEventTime = 0x28; // float
			constexpr auto sentBeginEvent = 0x2C; // bool
			constexpr auto lastTime = 0x30; // float
			constexpr auto eventComponent = 0x38; // AnimationEvents
		}
		namespace StateLayerController
		{
			constexpr auto TargetLayer = 0x18; // int32_t
			constexpr auto targetAnimator = 0x20; // Animator
		}
		namespace AnimationEventForward
		{
			constexpr auto targetObject = 0x18; // GameObject
		}
		namespace AudioSettings
		{
			constexpr auto duckingFactor = 0x0; // float
			constexpr auto mixer = 0x18; // AudioMixer
		}
		namespace BenchmarkInfo
		{
			constexpr auto BenchmarkTitle = 0x0; // string
			constexpr auto BenchmarkSubtitle = 0x8; // string
			constexpr auto PerformanceText = 0x18; // TextMeshProUGUI
			constexpr auto SystemInfoText = 0x20; // TextMeshProUGUI
			constexpr auto sb = 0x28; // stringBuilder
			constexpr auto timeSinceUpdated = 0x30; // RealTimeSince
		}
		namespace BoneDictionary
		{
			constexpr auto transform = 0x10; // Transform
			constexpr auto transforms = 0x18; // Transform[]
			constexpr auto names = 0x20; // string[]
			constexpr auto nameDict = 0x28; // Dictionary`2
			constexpr auto hashDict = 0x30; // Dictionary`2
			constexpr auto transformDict = 0x38; // Dictionary`2
		}
		namespace BoneRetarget
		{
			constexpr auto preserveInFirstPerson = 0x18; // bool
		}
		namespace CCTVOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
		}
		namespace ClimateOverlay
		{
			constexpr auto blendingSpeed = 0x18; // float
			constexpr auto biomeVolumes = 0x20; // PostProcessVolume[]
			constexpr auto cycleBlendTime = 0x28; // float
			constexpr auto isBlending = 0x2C; // bool
			constexpr auto weights = 0x30; // float[]
			constexpr auto srcWeights = 0x38; // float[]
			constexpr auto dstWeights = 0x40; // float[]
		}
		namespace ColdOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto smoothTime = 0x20; // float
			constexpr auto preventInstantiation = 0x24; // bool
			constexpr auto smoothCurrent = 0x28; // float
			constexpr auto smoothVelocity = 0x2C; // float
			constexpr auto colorGrading = 0x30; // ColorGrading
		}
		namespace FlashbangOverlay
		{
			constexpr auto Instance = 0x0; // FlashbangOverlay
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto burnIntensityCurve = 0x20; // AnimationCurve
			constexpr auto whiteoutIntensityCurve = 0x28; // AnimationCurve
			constexpr auto deafLoopDef = 0x30; // SoundDefinition
			constexpr auto flashbangEffect = 0x38; // FlashbangEffect
			constexpr auto flashLength = 0x40; // float
			constexpr auto flashTime = 0x44; // TimeSince
			constexpr auto deafLoop = 0x48; // Sound
			constexpr auto deafGain = 0x50; // Modulator
		}
		namespace HotOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto smoothTime = 0x20; // float
			constexpr auto preventInstantiation = 0x24; // bool
			constexpr auto smoothCurrent = 0x28; // float
			constexpr auto smoothVelocity = 0x2C; // float
			constexpr auto colorGrading = 0x30; // ColorGrading
		}
		namespace HurtOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto smoothTime = 0x20; // float
			constexpr auto smoothCurrent = 0x24; // float
			constexpr auto smoothVelocity = 0x28; // float
		}
		namespace HurtPunch
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto punchHurtDuration = 0x0; // float
			constexpr auto punchHurtTime = 0x4; // float
		}
		namespace OxygenOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto smoothTime = 0x20; // float
			constexpr auto submarinesOnly = 0x24; // bool
			constexpr auto smoothCurrent = 0x28; // float
			constexpr auto smoothVelocity = 0x2C; // float
		}
		namespace RadiationOverlay
		{
			constexpr auto geigerSounds = 0x18; // SoundDefinition[]
			constexpr auto postProcessVolume = 0x20; // PostProcessVolume
			constexpr auto sound = 0x28; // Sound
			constexpr auto smoothRadiationCurrent = 0x30; // float
			constexpr auto smoothRadiationVelocity = 0x34; // float
			constexpr auto smoothRadiationExposureCurrent = 0x38; // float
			constexpr auto smoothRadiationExposureVelocity = 0x3C; // float
		}
		namespace SharpenAndVignetteOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto sharpenAndVignette = 0x20; // SharpenAndVignette
		}
		namespace SubmarineOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
		}
		namespace TonemappingOverlay
		{
			constexpr auto tonemapping = 0x30; // TonemappingColorGrading
			constexpr auto screenWidth = 0x38; // int32_t
			constexpr auto screenHeight = 0x3C; // int32_t
		}
		namespace WaterOverlay
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto adminParams = 0x20; // EffectParams
			constexpr auto gogglesParams = 0x40; // EffectParams
			constexpr auto submarineParams = 0x60; // EffectParams
			constexpr auto underwaterLabParams = 0x80; // EffectParams
			constexpr auto UnderwaterFogMaterials = 0xA0; // Material[]
			constexpr auto startParams = 0xA8; // EffectParams
			constexpr auto blur = 0xC8; // BlurOptimized
			constexpr auto wiggle = 0xD0; // Wiggle
			constexpr auto chromaticAberration = 0xD8; // ChromaticAberration
			constexpr auto godRays = 0xE0; // GodRays
			constexpr auto bloom = 0xE8; // Bloom
		}
		namespace CameraMan
		{
			constexpr auto DefaultSaveName = 0x0; // string
			constexpr auto OnlyControlWhenCursorHidden = 0x18; // bool
			constexpr auto NeedBothMouseButtonsToZoom = 0x19; // bool
			constexpr auto LookSensitivity = 0x1C; // float
			constexpr auto MoveSpeed = 0x20; // float
			constexpr auto GuideAspect = 0x8; // float
			constexpr auto GuideRatio = 0xC; // float
			constexpr auto canvas = 0x28; // Canvas
			constexpr auto guides = 0x30; // Graphic[]
			constexpr auto _guideColor = 0x38; // Color
			constexpr auto _guide = 0x48; // int32_t
			constexpr auto startCulling = 0x4C; // bool
			constexpr auto hasSetFov = 0x4D; // bool
			constexpr auto stateDictionary = 0x10; // Dictionary`2
			constexpr auto viewShake = 0x50; // ViewShake
			constexpr auto TargetEntity = 0x58; // BaseEntity
			constexpr auto targetDistance = 0x60; // float
			constexpr auto targetDistancePrev = 0x64; // float
			constexpr auto wishMove = 0x68; // Vector3
			constexpr auto view = 0x74; // Vector3
			constexpr auto viewPrev = 0x80; // Vector3
			constexpr auto velocity = 0x8C; // Vector3
			constexpr auto Zoomk__BackingField = 0x98; // float
		}
		namespace CameraSettings
		{
			constexpr auto cam = 0x18; // Camera
		}
		namespace Client
		{
			constexpr auto loading_loading = 0x0; // Phrase
			constexpr auto loading_connecting = 0x8; // Phrase
			constexpr auto loading_connectionaccepted = 0x10; // Phrase
			constexpr auto loading_connecting_negotiate = 0x18; // Phrase
			constexpr auto loading_level = 0x20; // Phrase
			constexpr auto loading_skinnablewarmup = 0x28; // Phrase
			constexpr auto loading_preloadcomplete = 0x30; // Phrase
			constexpr auto loading_openingscene = 0x38; // Phrase
			constexpr auto loading_clientready = 0x40; // Phrase
			constexpr auto loading_prefabwarmup = 0x48; // Phrase
			constexpr auto OnConnected = 0x50; // Action
			constexpr auto OnDisconnected = 0x58; // Action
			constexpr auto IsIngame = 0x60; // bool
			constexpr auto authTicket = 0x18; // IAuthTicket
			constexpr auto currentCoroutine = 0x20; // Coroutine
			constexpr auto loadingCoroutine = 0x28; // Coroutine
			constexpr auto connectionRetry = 0x30; // bool
			constexpr auto config_raknet = 0x68; // ConnectionProtocol[]
			constexpr auto config_steamworks = 0x70; // ConnectionProtocol[]
			constexpr auto config_default = 0x78; // ConnectionProtocol[]
			constexpr auto _eventsystem = 0x80; // EventSystem
			constexpr auto LastConfigSaveTime = 0x34; // float
			constexpr auto backgroundCapApplied = 0x38; // bool
			constexpr auto ngTimer = 0x40; // Stopwatch
			constexpr auto _cubeMesh = 0x88; // Mesh
			constexpr auto IsScrubbingDemok__BackingField = 0x90; // bool
			constexpr auto DemoLocalClient = 0x98; // UInt64
			constexpr auto Demo = 0xA0; // Reader
			constexpr auto PreDemoPhysicsSteps = 0xA8; // float
			constexpr auto DemoSpectatePlayerk__BackingField = 0xB0; // BasePlayer
			constexpr auto SpectateRotation = 0xB8; // Vector3
			constexpr auto CurrentEntity = 0xC8; // BaseEntity
			constexpr auto subscriptions = 0x48; // HashSet`1
			constexpr auto anticheatid = 0x0; // string
			constexpr auto anticheatkey = 0x8; // string
			constexpr auto maxpeerspersecond = 0x10; // int32_t
			constexpr auto maxpacketspersecond_effect = 0x14; // int32_t
			constexpr auto maxpacketspersecond_voice = 0x18; // int32_t
			constexpr auto prediction = 0x1C; // bool
			constexpr auto maxunack = 0x20; // int32_t
			constexpr auto pushtotalk = 0x24; // bool
			constexpr auto debugdragdrop = 0x25; // bool
			constexpr auto debuglootsounds = 0x26; // bool
			constexpr auto headlerp = 0x28; // float
			constexpr auto headlerp_inertia = 0x2C; // bool
			constexpr auto camlerp = 0x30; // float
			constexpr auto camlerptilt = 0x34; // bool
			constexpr auto camzoomlerp = 0x38; // float
			constexpr auto _camspeed = 0x3C; // float
			constexpr auto camzoomspeed = 0x40; // float
			constexpr auto camlookspeed = 0x44; // float
			constexpr auto camdist = 0x48; // float
			constexpr auto cambone = 0x50; // string
			constexpr auto camfov = 0x58; // float
			constexpr auto camoffset = 0x5C; // Vector3
			constexpr auto camoffset_relative = 0x68; // bool
			constexpr auto sortSkinsRecentlyUsed = 0x69; // bool
			constexpr auto headbob = 0x6A; // bool
			constexpr auto crosshair = 0x6B; // bool
			constexpr auto hitcross = 0x6C; // bool
			constexpr auto hurtpunch = 0x6D; // bool
			constexpr auto hasAppliedPhysicalCameraDefaults = 0x6E; // bool
			constexpr auto CameraSensorSize = 0x70; // Vector2[]
			constexpr auto showCamInfo = 0x78; // bool
			constexpr auto lookatradius = 0x7C; // float
			constexpr auto BuildingSkin = 0x80; // int32_t
			constexpr auto BuildingSkinWood = 0x84; // int32_t
			constexpr auto BuildingSkinStone = 0x88; // int32_t
			constexpr auto BuildingSkinMetal = 0x8C; // int32_t
			constexpr auto BuildingSkinTopTier = 0x90; // int32_t
			constexpr auto RockSkin = 0x94; // int32_t
			constexpr auto UnderwearSkin = 0x98; // int32_t
			constexpr auto TorchSkin = 0x9C; // int32_t
			constexpr auto unlock_all_skins = 0xA0; // bool
			constexpr auto RespawnLoadout = 0xA8; // string
			constexpr auto BagAssignMode = 0xB0; // int32_t
			constexpr auto ShowSleepingBagsOnMap = 0xB4; // bool
			constexpr auto BlockPlayVideo = 0xB5; // bool
			constexpr auto _entityScene = 0x0; // Scene
			constexpr auto _effectScene = 0x4; // Scene
			constexpr auto _decorScene = 0x8; // Scene
		}
		namespace ComponentInfo
		{
			constexpr auto component = 0x0; // T
		}
		namespace MeshCache
		{
			constexpr auto dictionary = 0x0; // Dictionary`2
		}
		namespace MeshColliderData
		{
			constexpr auto triangles = 0x10; // List`1
			constexpr auto vertices = 0x18; // List`1
			constexpr auto normals = 0x20; // List`1
		}
		namespace MeshColliderInstance
		{
			constexpr auto transform = 0x0; // Transform
			constexpr auto rigidbody = 0x8; // Rigidbody
			constexpr auto collider = 0x10; // Collider
			constexpr auto bounds = 0x18; // OBB
			constexpr auto position = 0x68; // Vector3
			constexpr auto rotation = 0x74; // Quaternion
			constexpr auto scale = 0x84; // Vector3
			constexpr auto data = 0x90; // Data
		}
		namespace MeshColliderLookup
		{
			constexpr auto src = 0x10; // LookupGroup
			constexpr auto dst = 0x18; // LookupGroup
		}
		namespace MeshData
		{
			constexpr auto triangles = 0x10; // List`1
			constexpr auto vertices = 0x18; // List`1
			constexpr auto normals = 0x20; // List`1
			constexpr auto tangents = 0x28; // List`1
			constexpr auto colors32 = 0x30; // List`1
			constexpr auto uv = 0x38; // List`1
			constexpr auto uv2 = 0x40; // List`1
			constexpr auto positions = 0x48; // List`1
		}
		namespace MeshInstance
		{
			constexpr auto position = 0x0; // Vector3
			constexpr auto rotation = 0xC; // Quaternion
			constexpr auto scale = 0x1C; // Vector3
			constexpr auto data = 0x28; // Data
		}
		namespace MeshRendererData
		{
			constexpr auto triangles = 0x10; // List`1
			constexpr auto vertices = 0x18; // List`1
			constexpr auto normals = 0x20; // List`1
			constexpr auto tangents = 0x28; // List`1
			constexpr auto colors32 = 0x30; // List`1
			constexpr auto uv = 0x38; // List`1
			constexpr auto uv2 = 0x40; // List`1
			constexpr auto positions = 0x48; // List`1
		}
		namespace MeshRendererInstance
		{
			constexpr auto renderer = 0x0; // Renderer
			constexpr auto bounds = 0x8; // OBB
			constexpr auto position = 0x58; // Vector3
			constexpr auto rotation = 0x64; // Quaternion
			constexpr auto scale = 0x74; // Vector3
			constexpr auto data = 0x80; // Data
		}
		namespace MeshRendererLookup
		{
			constexpr auto src = 0x10; // LookupGroup
			constexpr auto dst = 0x18; // LookupGroup
		}
		namespace RendererInfo
		{
			constexpr auto shadows = 0x20; // ShadowCastingMode
			constexpr auto material = 0x28; // Material
			constexpr auto mesh = 0x30; // Mesh
			constexpr auto meshFilter = 0x38; // MeshFilter
		}
		namespace CullWhenInside
		{
			constexpr auto lod = 0x18; // LODComponent
		}
		namespace DecalRecycle
		{
			constexpr auto LifeTime = 0x20; // float
			constexpr auto recycleAction = 0x28; // Action
		}
		namespace DecalRotate
		{
			constexpr auto range = 0x98; // MinMax
		}
		namespace DecalScale
		{
			constexpr auto range = 0x98; // MinMax
		}
		namespace DemoShotPlayback
		{
			constexpr auto CurrentShotk__BackingField = 0x18; // DemoShot
			constexpr auto playing = 0x20; // bool
			constexpr auto Instance = 0x0; // DemoShotPlayback
			constexpr auto ShouldLoop = 0x21; // bool
		}
		namespace DemoShotRecorder
		{
			constexpr auto recordingShot = 0x18; // DemoShot
			constexpr auto lastKeyframe = 0x20; // float
			constexpr auto hasStarted = 0x24; // bool
			constexpr auto CountdownEndsk__BackingField = 0x28; // RealTimeUntil
			constexpr auto startSettings = 0x2C; // CameraState
			constexpr auto settings = 0x50; // RecorderSettings
			constexpr auto lastSavedShotName = 0x0; // string
			constexpr auto preRecordShotName = 0x68; // string
			constexpr auto countdownStartTime = 0x70; // float
		}
		namespace DynamicZNear
		{
			constexpr auto minimum = 0x18; // float
			constexpr auto maximum = 0x1C; // float
			constexpr auto cam = 0x20; // Camera
		}
		namespace EAC
		{
			constexpr auto isLoading = 0x0; // bool
			constexpr auto lastError = 0x8; // string
			constexpr auto steamTicket = 0x10; // string
			constexpr auto LocalUserId = 0x18; // ProductUserId
			constexpr auto Interface = 0x20; // AntiCheatClientInterface
		}
		namespace FirstPersonSpectatorMode
		{
			constexpr auto createdViewmodel = 0x0; // ViewModel
			constexpr auto createdViewmodelInstance = 0x8; // BaseViewModel
			constexpr auto lastPlayer = 0x10; // BasePlayer
			constexpr auto smoothLookDir = 0x18; // Vector3
			constexpr auto wasParented = 0x24; // bool
			constexpr auto lastHeldItem = 0x28; // Item
			constexpr auto reloadEnds = 0x30; // TimeUntil
			constexpr auto duckTarget = 0x34; // float
			constexpr auto timeOnCurrentPlayer = 0x38; // TimeSince
		}
		namespace Gib
		{
			constexpr auto gibCount = 0x0; // int32_t
			constexpr auto _meshFilter = 0x18; // MeshFilter
			constexpr auto _meshRenderer = 0x20; // MeshRenderer
			constexpr auto _meshCollider = 0x28; // MeshCollider
			constexpr auto _boxCollider = 0x30; // BoxCollider
			constexpr auto _sphereCollider = 0x38; // SphereCollider
			constexpr auto _capsuleCollider = 0x40; // CapsuleCollider
			constexpr auto _rigidbody = 0x48; // Rigidbody
			constexpr auto InWaterDrag = 0x4; // Vector2
			constexpr auto InWaterAngularDrag = 0xC; // Vector2
			constexpr auto emptyPropertyBlock = 0x18; // MaterialPropertyBlock
			constexpr auto demoKillTime = 0x50; // Int64
		}
		namespace IconSkin
		{
			constexpr auto icon = 0x18; // Image
			constexpr auto text = 0x20; // Text
			constexpr auto onChanged = 0x28; // Action`1
			constexpr auto item = 0x30; // ItemDefinition
			constexpr auto skinId = 0x38; // int32_t
			constexpr auto searchStringk__BackingField = 0x40; // string
		}
		namespace IconSkinPicker
		{
			constexpr auto pickerIcon = 0x18; // GameObjectRef
			constexpr auto container = 0x20; // GameObject
			constexpr auto skinChangedEvent = 0x28; // Action
			constexpr auto scroller = 0x30; // ScrollRect
			constexpr auto searchFilter = 0x38; // SearchFilterInput
			constexpr auto lastBlueprintRefresh = 0x40; // ItemBlueprint
			constexpr auto spawnedSkinIcons = 0x48; // List`1
			constexpr auto loadedHistory = 0x0; // SkinHistory
		}
		namespace LightEx
		{
			constexpr auto alterColor = 0x20; // bool
			constexpr auto colorTimeScale = 0x24; // float
			constexpr auto colorA = 0x28; // Color
			constexpr auto colorB = 0x38; // Color
			constexpr auto blendCurve = 0x48; // AnimationCurve
			constexpr auto loopColor = 0x50; // bool
			constexpr auto alterIntensity = 0x51; // bool
			constexpr auto intensityTimeScale = 0x54; // float
			constexpr auto intenseCurve = 0x58; // AnimationCurve
			constexpr auto intensityCurveScale = 0x60; // float
			constexpr auto loopIntensity = 0x64; // bool
			constexpr auto randomOffset = 0x65; // bool
			constexpr auto randomIntensityStartScale = 0x68; // float
			constexpr auto initialRange = 0x6C; // float
			constexpr auto initialColor = 0x70; // Color
			constexpr auto initialIntensity = 0x80; // float
			constexpr auto lightComponent = 0x88; // Light
			constexpr auto canToggleLight = 0x90; // bool
			constexpr auto time = 0x94; // float
			constexpr auto lightLOD = 0x98; // LightLOD
		}
		namespace LightGroupAtTime
		{
			constexpr auto IntensityOverride = 0x18; // float
			constexpr auto IntensityScaleOverTime = 0x20; // AnimationCurve
			constexpr auto SearchRoot = 0x28; // Transform
			constexpr auto requiresPower = 0x30; // bool
			constexpr auto powerOverrideTransform = 0x38; // Transform
			constexpr auto checkLayers = 0x40; // LayerMask
			constexpr auto enableWhenLightsOn = 0x48; // GameObject
			constexpr auto timeBetweenPowerLookup = 0x50; // float
			constexpr auto lights = 0x58; // List`1
			constexpr auto lightLODs = 0x60; // List`1
			constexpr auto renderers = 0x68; // List`1
			constexpr auto beams = 0x70; // List`1
			constexpr auto coverageQueryFlares = 0x78; // List`1
			constexpr auto distanceFlares = 0x80; // List`1
			constexpr auto block = 0x88; // MaterialPropertyBlock
			constexpr auto intensityOverride = 0x90; // float
			constexpr auto lightIndex = 0x94; // int32_t
			constexpr auto lightLODIndex = 0x98; // int32_t
			constexpr auto beamIndex = 0x9C; // int32_t
			constexpr auto rendererIndex = 0xA0; // int32_t
			constexpr auto simpleFlareIndex = 0xA4; // int32_t
			constexpr auto distanceFlareIndex = 0xA8; // int32_t
			constexpr auto EmissionPropertyID = 0xAC; // int32_t
			constexpr auto ColorFlatPropertyID = 0xB0; // int32_t
			constexpr auto LightsPerFrame = 0xB4; // int32_t
			constexpr auto LightLODsPerFrame = 0xB8; // int32_t
			constexpr auto BeamsPerFrame = 0xBC; // int32_t
			constexpr auto RenderersPerFrame = 0xC0; // int32_t
			constexpr auto SimpleFlaresPerFrame = 0xC4; // int32_t
			constexpr auto DistanceFlaresPerFrame = 0xC8; // int32_t
			constexpr auto WorkQueue = 0x0; // LightGroupWorkQueue
			constexpr auto cachedPowerEnt = 0xD0; // IOEntity
			constexpr auto lastPowerLookup = 0xD8; // TimeSince
		}
		namespace LocalPositionAnimation
		{
			constexpr auto centerPosition = 0x18; // Vector3
			constexpr auto worldSpace = 0x24; // bool
			constexpr auto scaleX = 0x28; // float
			constexpr auto timeScaleX = 0x2C; // float
			constexpr auto movementX = 0x30; // AnimationCurve
			constexpr auto scaleY = 0x38; // float
			constexpr auto timeScaleY = 0x3C; // float
			constexpr auto movementY = 0x40; // AnimationCurve
			constexpr auto scaleZ = 0x48; // float
			constexpr auto timeScaleZ = 0x4C; // float
			constexpr auto movementZ = 0x50; // AnimationCurve
		}
		namespace LookAt
		{
			constexpr auto target = 0x18; // Transform
		}
		namespace MainCamera
		{
			constexpr auto mainCamera = 0x0; // Camera
			constexpr auto mainCameraTransform = 0x8; // Transform
			constexpr auto velocityk__BackingField = 0x10; // Vector3
			constexpr auto MipStreamingBudget = 0x20; // Int64[]
			constexpr auto totalFrameTime = 0x140; // Double
			constexpr auto lowestFrameTime = 0x148; // Double
			constexpr auto highestFrameTime = 0x150; // Double
			constexpr auto totalFrames = 0x158; // int32_t
			constexpr auto timeSinceFrameSubmit = 0x15C; // RealTimeSince
			constexpr auto frameTime = 0x160; // Stopwatch
		}
		namespace MaterialParameterToggle
		{
			constexpr auto Toggle = 0x18; // ToggleMode
			constexpr auto TargetRenderers = 0x20; // Renderer[]
			constexpr auto EmissionColor = 0x28; // Color
			constexpr auto originalMaterial = 0x38; // Material
			constexpr auto modifiedMaterial = 0x40; // Material
			constexpr auto DetailLayer = 0x0; // int32_t
			constexpr auto EmissionColor1 = 0x4; // int32_t
		}
		namespace BaseMeshPaintable
		{
			constexpr auto _block = 0x0; // MaterialPropertyBlock
		}
		namespace MeshPaintable
		{
			constexpr auto replacementTextureName = 0x18; // string
			constexpr auto textureWidth = 0x20; // int32_t
			constexpr auto textureHeight = 0x24; // int32_t
			constexpr auto clearColor = 0x28; // Color
			constexpr auto targetTexture = 0x38; // Texture2D
			constexpr auto hasChanges = 0x40; // bool
			constexpr auto areaClamp = 0x44; // RectInt
		}
		namespace MeshPaintable3D
		{
			constexpr auto brushScale = 0x0; // float
			constexpr auto uvBufferScale = 0x4; // float
			constexpr auto replacementTextureName = 0x18; // string
			constexpr auto textureWidth = 0x20; // int32_t
			constexpr auto textureHeight = 0x24; // int32_t
			constexpr auto cameraPreview = 0x28; // Camera
			constexpr auto camera3D = 0x30; // Camera
			constexpr auto _commandBuffer = 0x38; // CommandBuffer
			constexpr auto _uvMaterial = 0x40; // Material
			constexpr auto _uvBuffer = 0x48; // RenderTexture
			constexpr auto _uvFactor = 0x50; // float
			constexpr auto _uvTexture = 0x58; // Texture2D
			constexpr auto _paintTexture = 0x60; // Texture2D
			constexpr auto _lastDrawTime = 0x68; // int32_t
			constexpr auto _areaClamp = 0x6C; // RectInt
			constexpr auto HasChangesk__BackingField = 0x7C; // bool
		}
		namespace MeshPaintableSource
		{
			constexpr auto uvRange = 0x18; // Vector4
			constexpr auto texWidth = 0x28; // int32_t
			constexpr auto texHeight = 0x2C; // int32_t
			constexpr auto replacementTextureName = 0x30; // string
			constexpr auto cameraFOV = 0x38; // float
			constexpr auto cameraDistance = 0x3C; // float
			constexpr auto texture = 0x40; // Texture2D
			constexpr auto sourceObject = 0x48; // GameObject
			constexpr auto collisionMesh = 0x50; // Mesh
			constexpr auto localPosition = 0x58; // Vector3
			constexpr auto localRotation = 0x64; // Vector3
			constexpr auto applyToAllRenderers = 0x70; // bool
			constexpr auto extraRenderers = 0x78; // Renderer[]
			constexpr auto paint3D = 0x80; // bool
			constexpr auto applyToSkinRenderers = 0x81; // bool
			constexpr auto applyToFirstPersonLegs = 0x82; // bool
			constexpr auto isSelected = 0x83; // bool
			constexpr auto legRenderer = 0x88; // Renderer
			constexpr auto block = 0x0; // MaterialPropertyBlock
		}
		namespace MeshPaintController
		{
			constexpr auto pickerCamera = 0x18; // Camera
			constexpr auto brushTexture = 0x20; // Texture2D
			constexpr auto brushScale = 0x28; // Vector2
			constexpr auto brushColor = 0x30; // Color
			constexpr auto brushSpacing = 0x40; // float
			constexpr auto brushImage = 0x48; // RawImage
			constexpr auto brushPreviewScaleMultiplier = 0x50; // float
			constexpr auto applyDefaults = 0x54; // bool
			constexpr auto defaltBrushTexture = 0x58; // Texture2D
			constexpr auto defaultBrushSize = 0x60; // float
			constexpr auto defaultBrushColor = 0x64; // Color
			constexpr auto defaultBrushAlpha = 0x74; // float
			constexpr auto lastBrush = 0x78; // Toggle
			constexpr auto UndoButton = 0x80; // Button
			constexpr auto RedoButton = 0x88; // Button
			constexpr auto lastPosition = 0x90; // Vector3
			constexpr auto dirtyPaintables = 0xA0; // List`1
			constexpr auto drawingBlocked = 0xA8; // bool
			constexpr auto signTextPanel = 0xB0; // ChangeSignText
			constexpr auto paintingMesh = 0xB8; // BaseMeshPaintable
			constexpr auto lastPaintedMesh = 0xC0; // BaseMeshPaintable
		}
		namespace OverlayMeshPaintableSource
		{
			constexpr auto STPrefixed = 0x0; // Memoized`2
			constexpr auto baseTextureName = 0x90; // string
			constexpr auto baseTexture = 0x98; // Texture2D
		}
		namespace Model
		{
			constexpr auto collision = 0x18; // SphereCollider
			constexpr auto rootBone = 0x20; // Transform
			constexpr auto headBone = 0x28; // Transform
			constexpr auto eyeBone = 0x30; // Transform
			constexpr auto animator = 0x38; // Animator
			constexpr auto skeleton = 0x40; // Skeleton
			constexpr auto boneTransforms = 0x48; // Transform[]
			constexpr auto boneNames = 0x50; // string[]
			constexpr auto boneDict = 0x58; // BoneDictionary
			constexpr auto skin = 0x60; // int32_t
			constexpr auto _lodGroup = 0x68; // LODGroup
		}
		namespace ParticleDisableOnParentDestroy
		{
			constexpr auto destroyAfterSeconds = 0x18; // float
		}
		namespace ParticleRandomLifetime
		{
			constexpr auto mySystem = 0x18; // ParticleSystem
			constexpr auto minScale = 0x20; // float
			constexpr auto maxScale = 0x24; // float
		}
		namespace PlayAudioEx
		{
			constexpr auto delay = 0x18; // float
		}
		namespace PlayerModelHair
		{
			constexpr auto type = 0x18; // HairType
			constexpr auto materials = 0x20; // Dictionary`2
		}
		namespace HairCapMask
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PlayerModelHairCap
		{
			constexpr auto hairCapMask = 0x18; // HairCapMask
		}
		namespace PlayerModelSkin
		{
			constexpr auto MaterialType = 0x18; // SkinMaterialType
			constexpr auto SkinRenderer = 0x20; // Renderer
		}
		namespace PositionLerp
		{
			constexpr auto InstanceList = 0x0; // ListHashSet`1
			constexpr auto DebugLog = 0x8; // bool
			constexpr auto DebugDraw = 0x9; // bool
			constexpr auto TimeOffsetInterval = 0xC; // int32_t
			constexpr auto TimeOffset = 0x10; // float
			constexpr auto enabled = 0x10; // bool
			constexpr auto idleDisable = 0x18; // Action
			constexpr auto interpolator = 0x20; // Interpolator`1
			constexpr auto target = 0x28; // IPosLerpTarget
			constexpr auto snapshotPrototype = 0x14; // TransformSnapshot
			constexpr auto timeOffset0 = 0x30; // float
			constexpr auto timeOffset1 = 0x34; // float
			constexpr auto timeOffset2 = 0x38; // float
			constexpr auto timeOffset3 = 0x3C; // float
			constexpr auto timeOffsetCount = 0x40; // int32_t
			constexpr auto lastClientTime = 0x44; // float
			constexpr auto lastServerTime = 0x48; // float
			constexpr auto extrapolatedTime = 0x4C; // float
			constexpr auto enabledTime = 0x50; // float
		}
		namespace Projectile
		{
			constexpr auto initialVelocity = 0x18; // Vector3
			constexpr auto drag = 0x24; // float
			constexpr auto gravityModifier = 0x28; // float
			constexpr auto thickness = 0x2C; // float
			constexpr auto initialDistance = 0x30; // float
			constexpr auto remainInWorld = 0x34; // bool
			constexpr auto stickProbability = 0x38; // float
			constexpr auto breakProbability = 0x3C; // float
			constexpr auto conditionLoss = 0x40; // float
			constexpr auto ricochetChance = 0x44; // float
			constexpr auto penetrationPower = 0x48; // float
			constexpr auto damageProperties = 0x50; // DamageProperties
			constexpr auto damageDistances = 0x58; // MinMax
			constexpr auto damageMultipliers = 0x60; // MinMax
			constexpr auto damageTypes = 0x68; // List`1
			constexpr auto rendererToScale = 0x70; // ScaleRenderer
			constexpr auto firstPersonRenderer = 0x78; // ScaleRenderer
			constexpr auto createDecals = 0x80; // bool
			constexpr auto doDefaultHitEffects = 0x81; // bool
			constexpr auto flybySound = 0x88; // SoundDefinition
			constexpr auto flybySoundDistance = 0x90; // float
			constexpr auto closeFlybySound = 0x98; // SoundDefinition
			constexpr auto closeFlybyDistance = 0xA0; // float
			constexpr auto tumbleSpeed = 0xA4; // float
			constexpr auto tumbleAxis = 0xA8; // Vector3
			constexpr auto swimScale = 0xB4; // Vector3
			constexpr auto swimSpeed = 0xC0; // Vector3
			constexpr auto owner = 0xD0; // BasePlayer
			constexpr auto sourceWeaponPrefab = 0xD8; // AttackEntity
			constexpr auto sourceProjectilePrefab = 0xE0; // Projectile
			constexpr auto mod = 0xE8; // ItemModProjectile
			constexpr auto projectileID = 0xF0; // int32_t
			constexpr auto seed = 0xF4; // int32_t
			constexpr auto clientsideEffect = 0xF8; // bool
			constexpr auto clientsideAttack = 0xF9; // bool
			constexpr auto integrity = 0xFC; // float
			constexpr auto maxDistance = 0x100; // float
			constexpr auto modifier = 0x104; // Modifier
			constexpr auto invisible = 0x114; // bool
			constexpr auto currentVelocity = 0x118; // Vector3
			constexpr auto currentPosition = 0x124; // Vector3
			constexpr auto traveledDistance = 0x130; // float
			constexpr auto traveledTime = 0x134; // float
			constexpr auto launchTime = 0x138; // float
			constexpr auto sentPosition = 0x13C; // Vector3
			constexpr auto previousPosition = 0x148; // Vector3
			constexpr auto previousVelocity = 0x154; // Vector3
			constexpr auto previousTraveledTime = 0x160; // float
			constexpr auto isRicochet = 0x164; // bool
			constexpr auto isRetiring = 0x165; // bool
			constexpr auto flybyPlayed = 0x166; // bool
			constexpr auto wasFacingPlayer = 0x167; // bool
			constexpr auto flybyPlane = 0x168; // Plane
			constexpr auto flybyRay = 0x178; // Ray
			constexpr auto cleanupAction = 0x190; // Action
			constexpr auto hitTest = 0x198; // HitTest
			constexpr auto swimRandom = 0x1A0; // float
			constexpr auto _fleshMaterialID = 0x0; // uint32_t
			constexpr auto _waterMaterialID = 0x4; // uint32_t
			constexpr auto cachedWaterString = 0x8; // uint32_t
		}
		namespace QueryVis
		{
			constexpr auto checkCollider = 0x18; // Collider
			constexpr auto query = 0x20; // Query
			constexpr auto coverageRadiusSpace = 0x28; // RadiusSpace
			constexpr auto coverageRadius = 0x2C; // float
			constexpr auto nextCPUSampleTime = 0x30; // float
			constexpr auto lastCPUSampleValue = 0x34; // float
		}
		namespace Ragdoll
		{
			constexpr auto eyeTransform = 0x18; // Transform
			constexpr auto centerBone = 0x20; // Transform
			constexpr auto primaryBody = 0x28; // Rigidbody
			constexpr auto physicMaterial = 0x30; // PhysicMaterial
			constexpr auto corpseJoint = 0x38; // SpringJoint
			constexpr auto skeleton = 0x40; // Skeleton
			constexpr auto model = 0x48; // Model
			constexpr auto joints = 0x50; // List`1
			constexpr auto characterJoints = 0x58; // List`1
			constexpr auto configurableJoints = 0x60; // List`1
			constexpr auto rigidbodies = 0x68; // List`1
			constexpr auto GibEffect = 0x70; // GameObject
			constexpr auto pinTo = 0x78; // Rigidbody
			constexpr auto _lodGroup = 0x80; // LODGroup
			constexpr auto occludee = 0x88; // ArticulatedOccludee
			constexpr auto IsSetup = 0x90; // bool
		}
		namespace RotateToCamera
		{
			constexpr auto maxDistance = 0x18; // float
		}
		namespace RustCamera
		{
			constexpr auto ssao = 0x0; // AmplifyOcclusionEffect
			constexpr auto contactShadows = 0x0; // SEScreenSpaceShadows
			constexpr auto visualizeTexelDensity = 0x0; // VisualizeTexelDensity
			constexpr auto environmentVolumeProperties = 0x0; // EnvironmentVolumePropertiesCollection
			constexpr auto post = 0x0; // PostProcessLayer
			constexpr auto baseEffectVolume = 0x0; // PostProcessVolume
			constexpr auto localCamerak__BackingField = 0x0; // Camera
			constexpr auto todScattering = 0x0; // TOD_Scattering
			constexpr auto skyLightColorOverride = 0x0; // Color
			constexpr auto skyLightColorMultiplier = 0x0; // float
			constexpr auto skyLightColorMultiplierOcean = 0x0; // float
			constexpr auto sunRayColorOverride = 0x0; // Color
			constexpr auto sunRayColorMultiplier = 0x0; // float
			constexpr auto sunRayColorMultiplierOcean = 0x0; // float
			constexpr auto moonRayColorOverride = 0x0; // Color
			constexpr auto moonRayColorMultiplier = 0x0; // float
			constexpr auto moonRayColorMultiplierOcean = 0x0; // float
			constexpr auto sunMeshBrightness = 0x0; // float
			constexpr auto sunMeshBrightnessMultiplier = 0x0; // float
			constexpr auto sunMeshBrightnessMultiplierOcean = 0x0; // float
			constexpr auto moonMeshBrightness = 0x0; // float
			constexpr auto moonMeshBrightnessMultiplier = 0x0; // float
			constexpr auto moonMeshBrightnessMultiplierOcean = 0x0; // float
			constexpr auto atmosphereBrightnessMultiplier = 0x0; // float
			constexpr auto atmosphereBrightnessMultiplierOcean = 0x0; // float
			constexpr auto directionalLightDay = 0x0; // float
			constexpr auto directionalLightNight = 0x0; // float
			constexpr auto directionalLightMultiplier = 0x0; // float
			constexpr auto directionalLightMultiplierOcean = 0x0; // float
			constexpr auto ambientLightDay = 0x0; // float
			constexpr auto ambientLightNight = 0x0; // float
			constexpr auto ambientLightMultiplier = 0x0; // float
			constexpr auto ambientLightMultiplierTarget = 0x0; // float
			constexpr auto ambientLightMultiplierOcean = 0x0; // float
			constexpr auto skyReflectionDay = 0x0; // float
			constexpr auto skyReflectionNight = 0x0; // float
			constexpr auto skyReflectionMultiplier = 0x0; // float
			constexpr auto skyReflectionMultiplierTarget = 0x0; // float
			constexpr auto skyReflectionMultiplierOcean = 0x0; // float
			constexpr auto skyReflectionCullingFlags = 0x0; // LayerMask
			constexpr auto isMoving = 0x0; // bool
			constexpr auto isRotating = 0x0; // bool
			constexpr auto loadingScreenVisibleTime = 0x0; // float
			constexpr auto lightProbe = 0x0; // SphericalHarmonicsL2[]
			constexpr auto environmentTimestamp = 0x0; // float
			constexpr auto environmentTransitionSpeed = 0x0; // float
			constexpr auto environmentType = 0x0; // EnvironmentType
			constexpr auto screenWidth = 0x0; // int32_t
			constexpr auto screenHeight = 0x0; // int32_t
			constexpr auto lastPosition = 0x0; // Vector3
			constexpr auto lastRotation = 0x0; // Quaternion
			constexpr auto lastGrassShadowsUpdate = 0x0; // TimeSince
			constexpr auto depthOfField = 0x0; // DepthOfFieldSettings
			constexpr auto lastDOFUpdateTime = 0x0; // float
			constexpr auto currentDofTargetk__BackingField = 0x0; // BaseEntity
		}
		namespace ScaleByIntensity
		{
			constexpr auto initialScale = 0x18; // Vector3
			constexpr auto intensitySource = 0x28; // Light
			constexpr auto maxIntensity = 0x30; // float
		}
		namespace ScaleBySpeed
		{
			constexpr auto minScale = 0x18; // float
			constexpr auto maxScale = 0x1C; // float
			constexpr auto minSpeed = 0x20; // float
			constexpr auto maxSpeed = 0x24; // float
			constexpr auto component = 0x28; // MonoBehaviour
			constexpr auto toggleComponent = 0x30; // bool
			constexpr auto onlyWhenSubmerged = 0x31; // bool
			constexpr auto submergedThickness = 0x34; // float
			constexpr auto prevPosition = 0x38; // Vector3
		}
		namespace ScreenshotCamera
		{
			constexpr auto activeScreenshotCameras = 0x0; // List`1
		}
		namespace SearchFilterInput
		{
			constexpr auto OpenRoot = 0x18; // GameObject
			constexpr auto ClosedRoot = 0x20; // GameObject
			constexpr auto InputField = 0x28; // RustInput
			constexpr auto CurrentSearchInputk__BackingField = 0x30; // string
			constexpr auto OnSearchFilterChanged = 0x38; // Action`1
		}
		namespace SkinnedMultiMesh
		{
			constexpr auto shadowOnly = 0x18; // bool
			constexpr auto IsVisible = 0x19; // bool
			constexpr auto eyesView = 0x1A; // bool
			constexpr auto skeleton = 0x20; // Skeleton
			constexpr auto skeletonSkinLod = 0x28; // SkeletonSkinLod
			constexpr auto parts = 0x30; // List`1
			constexpr auto createdParts = 0x38; // List`1
			constexpr auto lastBuildHash = 0x40; // Int64
			constexpr auto sharedPropertyBlock = 0x48; // MaterialPropertyBlock
			constexpr auto hairPropertyBlock = 0x50; // MaterialPropertyBlock
			constexpr auto skinNumber = 0x58; // float
			constexpr auto meshNumber = 0x5C; // float
			constexpr auto hairNumber = 0x60; // float
			constexpr auto skinType = 0x64; // int32_t
			constexpr auto SkinCollection = 0x68; // SkinSetCollection
			constexpr auto Renderersk__BackingField = 0x70; // List`1
		}
		namespace StatusLightRenderer
		{
			constexpr auto offMaterial = 0x18; // Material
			constexpr auto onMaterial = 0x20; // Material
			constexpr auto propertyBlock = 0x28; // MaterialPropertyBlock
			constexpr auto targetRenderer = 0x30; // Renderer
			constexpr auto lightColor = 0x38; // Color
			constexpr auto targetLight = 0x48; // Light
			constexpr auto colorID = 0x50; // int32_t
			constexpr auto emissionID = 0x54; // int32_t
		}
		namespace SunSettings
		{
			constexpr auto light = 0x18; // Light
		}
		namespace TextureColorPicker
		{
			constexpr auto texture = 0x18; // Texture2D
			constexpr auto onColorSelected = 0x20; // onColorSelectedEvent
		}
		namespace TimedRemoval
		{
			constexpr auto objectToDestroy = 0x18; // Object
			constexpr auto removeDelay = 0x20; // float
		}
		namespace TriggerMovement
		{
			constexpr auto losEyes = 0x30; // Transform
			constexpr auto movementModify = 0x38; // MovementModify
			constexpr auto scale = 0x3C; // float
		}
		namespace TriggerVehicleDrag
		{
			constexpr auto losEyes = 0x30; // Transform
			constexpr auto vehicleDrag = 0x38; // float
		}
		namespace UnderwearIcon
		{
			constexpr auto icon = 0x18; // Image
			constexpr auto onChanged = 0x20; // Action
			constexpr auto item = 0x28; // ItemDefinition
			constexpr auto underwearShortName = 0x30; // string
		}
		namespace UnderwearSkinPicker
		{
			constexpr auto pickerIcon = 0x18; // GameObjectRef
			constexpr auto container = 0x20; // GameObject
			constexpr auto skinChangedEvent = 0x28; // Action
			constexpr auto defaultNudeIcon = 0x30; // Sprite
			constexpr auto defaultIconMale = 0x38; // Sprite
			constexpr auto defaultIconFemale = 0x40; // Sprite
		}
		namespace UnparentOnDestroy
		{
			constexpr auto destroyAfterSeconds = 0x18; // float
		}
		namespace ViewModel
		{
			constexpr auto viewModelPrefab = 0x18; // GameObjectRef
			constexpr auto targetEntity = 0x20; // HeldEntity
			constexpr auto instance = 0x28; // BaseViewModel
		}
		namespace ViewmodelItem
		{
			constexpr auto vOneRun = 0x18; // bool
			constexpr auto bWasOn = 0x19; // bool
			constexpr auto viewmodelAnimator = 0x20; // Animator
		}
		namespace ViewShake
		{
			constexpr auto PositionOffsetk__BackingField = 0x10; // Vector3
			constexpr auto AnglesOffsetk__BackingField = 0x1C; // Vector3
			constexpr auto Entries = 0x28; // List`1
		}
		namespace WearableHairCap
		{
			constexpr auto Type = 0x18; // HairType
			constexpr auto BaseColor = 0x1C; // Color
			constexpr auto Mask = 0x30; // Texture
			constexpr auto block = 0x0; // MaterialPropertyBlock
			constexpr auto _HairBaseColorUV1 = 0x8; // int32_t
			constexpr auto _HairBaseColorUV2 = 0xC; // int32_t
			constexpr auto _HairPackedMapUV1 = 0x10; // int32_t
			constexpr auto _HairPackedMapUV2 = 0x14; // int32_t
		}
		namespace BaseCollision
		{
			constexpr auto Owner = 0x18; // BaseEntity
			constexpr auto model = 0x20; // Model
		}
		namespace GamePhysics
		{
			constexpr auto hitBuffer = 0x0; // RaycastHit[]
			constexpr auto hitBufferB = 0x8; // RaycastHit[]
			constexpr auto colBuffer = 0x10; // Collider[]
		}
		namespace TraceInfo
		{
			constexpr auto valid = 0x0; // bool
			constexpr auto distance = 0x4; // float
			constexpr auto entity = 0x8; // BaseEntity
			constexpr auto point = 0x10; // Vector3
			constexpr auto normal = 0x1C; // Vector3
			constexpr auto bone = 0x28; // Transform
			constexpr auto material = 0x30; // PhysicMaterial
			constexpr auto partID = 0x38; // uint32_t
			constexpr auto collider = 0x40; // Collider
		}
		namespace EZSoftBoneHitboxSystemCollider
		{
			constexpr auto radius = 0x18; // float
			constexpr auto hitboxSystem = 0x20; // HitboxSystem
			constexpr auto positionTime = 0x28; // float
			constexpr auto positionCache = 0x2C; // Vector3
		}
		namespace HitboxDefinition
		{
			constexpr auto center = 0x18; // Vector3
			constexpr auto rotation = 0x24; // Vector3
			constexpr auto type = 0x30; // Type
			constexpr auto priority = 0x34; // int32_t
			constexpr auto physicMaterial = 0x38; // PhysicMaterial
			constexpr auto scale = 0x40; // Vector3
		}
		namespace HitboxSystem
		{
			constexpr auto rebuildTime = 0x18; // float
			constexpr auto hitboxes = 0x20; // List`1
		}
		namespace Buttons
		{
			constexpr auto Console = 0x0; // ConButton
			constexpr auto Forward = 0x8; // ConButton
			constexpr auto Backward = 0x10; // ConButton
			constexpr auto Left = 0x18; // ConButton
			constexpr auto Right = 0x20; // ConButton
			constexpr auto Jump = 0x28; // ConButton
			constexpr auto Duck = 0x30; // ConButton
			constexpr auto Sprint = 0x38; // ConButton
			constexpr auto Use = 0x40; // ConButton
			constexpr auto Inventory = 0x48; // ConButton
			constexpr auto Chat = 0x50; // ConButton
			constexpr auto Reload = 0x58; // ConButton
			constexpr auto Voice = 0x60; // ConButton
			constexpr auto DropItemStack = 0x68; // ConButton
			constexpr auto DropItemSingle = 0x70; // ConButton
			constexpr auto HoverLoot = 0x78; // ConButton
			constexpr auto AutoWalk = 0x80; // ConButton
			constexpr auto Ping = 0x88; // ConButton
			constexpr auto InvNext = 0x90; // ConButton
			constexpr auto InvPrev = 0x98; // ConButton
			constexpr auto Slot1 = 0xA0; // ConButton
			constexpr auto Slot2 = 0xA8; // ConButton
			constexpr auto Slot3 = 0xB0; // ConButton
			constexpr auto Slot4 = 0xB8; // ConButton
			constexpr auto Slot5 = 0xC0; // ConButton
			constexpr auto Slot6 = 0xC8; // ConButton
			constexpr auto HolsterItem = 0xD0; // ConButton
			constexpr auto Attack = 0xD8; // ConButton
			constexpr auto Attack2 = 0xE0; // ConButton
			constexpr auto Attack3 = 0xE8; // ConButton
			constexpr auto AltLook = 0xF0; // ConButton
			constexpr auto Map = 0xF8; // ConButton
			constexpr auto FocusMap = 0x100; // ConButton
			constexpr auto Compass = 0x108; // ConButton
			constexpr auto NoteA = 0x110; // ConButton
			constexpr auto NoteB = 0x118; // ConButton
			constexpr auto NoteC = 0x120; // ConButton
			constexpr auto NoteD = 0x128; // ConButton
			constexpr auto NoteE = 0x130; // ConButton
			constexpr auto NoteF = 0x138; // ConButton
			constexpr auto NoteG = 0x140; // ConButton
			constexpr auto NoteASharp = 0x148; // ConButton
			constexpr auto NoteBSharp = 0x150; // ConButton
			constexpr auto NoteCSharp = 0x158; // ConButton
			constexpr auto NoteDSharp = 0x160; // ConButton
			constexpr auto NoteESharp = 0x168; // ConButton
			constexpr auto NoteFSharp = 0x170; // ConButton
			constexpr auto NoteGSharp = 0x178; // ConButton
			constexpr auto NoteSharpMod = 0x180; // ConButton
			constexpr auto NoteOctaveUpMod = 0x188; // ConButton
			constexpr auto Gestures = 0x190; // ConButton
			constexpr auto Pets = 0x198; // ConButton
			constexpr auto FireMode = 0x1A0; // ConButton
			constexpr auto PrevSkin = 0x1A8; // ConButton
			constexpr auto NextSkin = 0x1B0; // ConButton
		}
		namespace ArticulatedOccludee
		{
			constexpr auto lodGroup = 0x18; // LODGroup
			constexpr auto colliders = 0x20; // List`1
			constexpr auto localOccludee = 0x28; // OccludeeSphere
			constexpr auto renderers = 0x48; // List`1
			constexpr auto isVisible = 0x50; // bool
			constexpr auto TriggerUpdateVisibilityBoundsDelegate = 0x58; // Action
		}
		namespace CinematicEntity
		{
			constexpr auto DisableObjects = 0x168; // GameObject[]
			constexpr auto clientList = 0x0; // List`1
			constexpr auto demoOverride = 0x8; // Nullable`1
		}
		namespace DirectionalDamageTrigger
		{
			constexpr auto repeatRate = 0x30; // float
			constexpr auto damageType = 0x38; // List`1
			constexpr auto attackEffect = 0x40; // GameObjectRef
		}
		namespace DofExposer
		{
			constexpr auto PostVolume = 0x18; // PostProcessVolume
			constexpr auto DofEnabled = 0x20; // bool
			constexpr auto FocalLength = 0x24; // float
			constexpr auto Blur = 0x28; // float
			constexpr auto FocalAperture = 0x2C; // float
			constexpr auto debug = 0x30; // bool
			constexpr auto profile = 0x38; // PostProcessProfile
		}
		namespace DrawArrow
		{
			constexpr auto color = 0x18; // Color
			constexpr auto length = 0x28; // float
			constexpr auto arrowLength = 0x2C; // float
		}
		namespace ErrorLogger
		{
			constexpr auto installed = 0x0; // bool
		}
		namespace InvokeSpammer
		{
			constexpr auto InvokeMilliseconds = 0x18; // int32_t
			constexpr auto RepeatTime = 0x1C; // float
		}
		namespace ItemButtonTools
		{
			constexpr auto image = 0x18; // Image
			constexpr auto itemDef = 0x20; // ItemDefinition
		}
		namespace ItemListTools
		{
			constexpr auto categoryButton = 0x18; // GameObject
			constexpr auto itemButton = 0x20; // GameObject
			constexpr auto searchInputText = 0x28; // RustInput
			constexpr auto lastCategory = 0x30; // Button
			constexpr auto currentItems = 0x38; // IOrderedEnumerable`1
			constexpr auto allItems = 0x40; // IOrderedEnumerable`1
		}
		namespace MeshTrimTester
		{
			constexpr auto Settings = 0x18; // MeshTrimSettings
			constexpr auto SourceMesh = 0x48; // Mesh
			constexpr auto TargetMeshFilter = 0x50; // MeshFilter
			constexpr auto SubtractIndex = 0x58; // int32_t
		}
		namespace NetworkInfoGeneralText
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
		}
		namespace ObjectSpam
		{
			constexpr auto source = 0x18; // GameObject
			constexpr auto amount = 0x20; // int32_t
			constexpr auto radius = 0x24; // float
		}
		namespace PingPongRotate
		{
			constexpr auto rotationSpeed = 0x18; // Vector3
			constexpr auto offset = 0x24; // Vector3
			constexpr auto rotationAmount = 0x30; // Vector3
		}
		namespace RotateObject
		{
			constexpr auto rotateSpeed_X = 0x18; // float
			constexpr auto rotateSpeed_Y = 0x1C; // float
			constexpr auto rotateSpeed_Z = 0x20; // float
			constexpr auto localSpace = 0x24; // bool
			constexpr auto rotateVector = 0x28; // Vector3
		}
		namespace SeedPosInfo
		{
			constexpr auto Canvas = 0x18; // CanvasGroup
			constexpr auto WorldPos = 0x20; // Text
			constexpr auto LevelName = 0x28; // Text
			constexpr auto WorldSize = 0x30; // Text
			constexpr auto Seed = 0x38; // Text
			constexpr auto lastUpdate = 0x40; // TimeSince
		}
		namespace SystemInfoEx
		{
			constexpr auto supportedRenderTextureFormats = 0x0; // bool[]
		}
		namespace SystemInfoGeneralText
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
		}
		namespace TriangleIdentifier
		{
			constexpr auto TriangleID = 0x18; // int32_t
			constexpr auto SubmeshID = 0x1C; // int32_t
			constexpr auto LineLength = 0x20; // float
		}
		namespace ClientPerformanceReport
		{
			constexpr auto request_id = 0x0; // int32_t
			constexpr auto user_id = 0x8; // string
			constexpr auto fps_average = 0x10; // float
			constexpr auto fps = 0x14; // int32_t
			constexpr auto frame_id = 0x18; // int32_t
			constexpr auto frame_time = 0x1C; // float
			constexpr auto frame_time_average = 0x20; // float
			constexpr auto memory_system = 0x28; // Int64
			constexpr auto memory_collections = 0x30; // Int64
			constexpr auto memory_managed_heap = 0x38; // Int64
			constexpr auto realtime_since_startup = 0x40; // float
			constexpr auto streamer_mode = 0x44; // bool
			constexpr auto ping = 0x48; // int32_t
			constexpr auto tasks_invokes = 0x4C; // int32_t
			constexpr auto tasks_load_balancer = 0x50; // int32_t
			constexpr auto workshop_skins_queued = 0x54; // int32_t
		}
		namespace DevBotSpawner
		{
			constexpr auto bot = 0x18; // GameObjectRef
			constexpr auto waypointParent = 0x20; // Transform
			constexpr auto autoSelectLatestSpawnedGameObject = 0x28; // bool
			constexpr auto spawnRate = 0x2C; // float
			constexpr auto maxPopulation = 0x30; // int32_t
		}
		namespace DevCamera
		{
			constexpr auto movementScale = 0x18; // float
			constexpr auto view = 0x1C; // Vector3
			constexpr auto velocity = 0x28; // Vector3
			constexpr auto zoom = 0x34; // float
		}
		namespace DevControls
		{
			constexpr auto skin = 0x18; // GUISkin
			constexpr auto tabbedPanel = 0x20; // TabbedPanel
		}
		namespace DevDressPlayer
		{
			constexpr auto DressRandomly = 0x18; // bool
			constexpr auto clothesToWear = 0x20; // List`1
		}
		namespace DevEnableDisable
		{
			constexpr auto Objects = 0x18; // GameObject[]
			constexpr auto CookieName = 0x20; // string
			constexpr auto TabName = 0x28; // string
		}
		namespace DevEnvironment
		{
			constexpr auto sky = 0x18; // TOD_Sky
		}
		namespace DevImpactEffectTest
		{
			constexpr auto timeNextFire = 0x18; // float
			constexpr auto attackType = 0x1C; // int32_t
		}
		namespace DevMovePlayer
		{
			constexpr auto player = 0x18; // BasePlayer
			constexpr auto Waypoints = 0x20; // Transform[]
			constexpr auto moveRandomly = 0x28; // bool
			constexpr auto destination = 0x2C; // Vector3
			constexpr auto lookPoint = 0x38; // Vector3
		}
		namespace ClientFrametimeReport
		{
			constexpr auto request_id = 0x10; // int32_t
			constexpr auto start_frame = 0x14; // int32_t
			constexpr auto frame_times = 0x18; // List`1
		}
		namespace ClientFrametimeRequest
		{
			constexpr auto request_id = 0x10; // int32_t
			constexpr auto start_frame = 0x14; // int32_t
			constexpr auto max_frames = 0x18; // int32_t
		}
		namespace GameContentList
		{
			constexpr auto resourceType = 0x18; // ResourceType
			constexpr auto foundObjects = 0x20; // List`1
		}
		namespace LodLevelDisplay
		{
			constexpr auto TextColor = 0x18; // Color
			constexpr auto TextScaleMultiplier = 0x28; // float
		}
		namespace MidiConvar
		{
			constexpr auto _enabled = 0x0; // bool
			constexpr auto debugMode = 0x1; // bool
			constexpr auto Instance = 0x8; // MidiConvar
			constexpr auto knobBindings = 0x18; // List`1
			constexpr auto noteBindings = 0x20; // List`1
		}
		namespace Performance
		{
			constexpr auto current = 0x0; // Tick
			constexpr auto report = 0xA0; // Tick
			constexpr auto cycles = 0x140; // Int64
			constexpr auto frameRateHistory = 0x148; // int32_t[]
			constexpr auto frameTimeHistory = 0x150; // float[]
			constexpr auto frameTimes = 0x158; // int32_t[]
			constexpr auto frames = 0x18; // int32_t
			constexpr auto time = 0x1C; // float
		}
		namespace ProjectileTestSpawner
		{
			constexpr auto TargetProjectile = 0x18; // Projectile
			constexpr auto RepeatTime = 0x20; // float
			constexpr auto VelocityScale = 0x24; // float
		}
		namespace DoorAnimEvents
		{
			constexpr auto openStart = 0x18; // GameObjectRef
			constexpr auto openEnd = 0x20; // GameObjectRef
			constexpr auto closeStart = 0x28; // GameObjectRef
			constexpr auto closeEnd = 0x30; // GameObjectRef
			constexpr auto soundTarget = 0x38; // GameObject
			constexpr auto checkAnimSpeed = 0x40; // bool
		}
		namespace AnimationEvents
		{
			constexpr auto rootObject = 0x18; // Transform
			constexpr auto targetEntity = 0x20; // HeldEntity
			constexpr auto effectFolder = 0x28; // string
			constexpr auto enforceClipWeights = 0x30; // bool
			constexpr auto localFolder = 0x38; // string
			constexpr auto customLocalFolder = 0x40; // bool
			constexpr auto IsBusy = 0x41; // bool
			constexpr auto cachedEventReceiver = 0x48; // IAnimationEventReceiver
			constexpr auto hasCachedEventReceiver = 0x50; // bool
		}
		namespace BaseFootstepEffect
		{
			constexpr auto validImpactLayers = 0x18; // LayerMask
			constexpr auto lastFootstepTime = 0x1C; // float
			constexpr auto lastFootstepPos = 0x20; // Vector3
		}
		namespace BucketVMFluidSim
		{
			constexpr auto waterbucketAnim = 0x18; // Animator
			constexpr auto waterPour = 0x20; // ParticleSystem
			constexpr auto waterTurbulence = 0x28; // ParticleSystem
			constexpr auto waterFill = 0x30; // ParticleSystem
			constexpr auto waterLevel = 0x38; // float
			constexpr auto targetWaterLevel = 0x3C; // float
			constexpr auto waterSpill = 0x40; // AudioSource
			constexpr auto PlayerEyePitch = 0x48; // float
			constexpr auto turb_forward = 0x4C; // float
			constexpr auto turb_side = 0x50; // float
			constexpr auto lastPosition = 0x54; // Vector3
			constexpr auto groundSpeedLast = 0x60; // Vector3
			constexpr auto lastAngle = 0x6C; // Vector3
			constexpr auto vecAngleSpeedLast = 0x78; // Vector3
			constexpr auto initialPosition = 0x84; // Vector3
		}
		namespace ColdBreath
		{
			constexpr auto effect = 0x18; // GameObjectRef
			constexpr auto player = 0x20; // BasePlayer
			constexpr auto jawBone = 0x28; // Transform
		}
		namespace Effect
		{
			constexpr auto Up = 0x58; // Vector3
			constexpr auto worldPos = 0x64; // Vector3
			constexpr auto worldNrm = 0x70; // Vector3
			constexpr auto attached = 0x7C; // bool
			constexpr auto transform = 0x80; // Transform
			constexpr auto gameObject = 0x88; // GameObject
			constexpr auto pooledString = 0x90; // string
			constexpr auto broadcast = 0x98; // bool
			constexpr auto reusableInstace = 0x0; // Effect
		}
		namespace EffectAudioPerspectiveSwitcher
		{
			constexpr auto parentToWeaponComponent = 0x18; // EffectParentToWeaponBone
		}
		namespace EffectNetwork
		{
			constexpr auto effect = 0x0; // Effect
		}
		namespace EffectParentToWeaponBone
		{
			constexpr auto boneName = 0x18; // string
			constexpr auto singleFrame = 0x20; // bool
			constexpr auto isFirstPerson = 0x21; // bool
			constexpr auto bone = 0x28; // Transform
		}
		namespace EffectScaleWithCameraDistance
		{
			constexpr auto minScale = 0x18; // float
			constexpr auto maxScale = 0x1C; // float
			constexpr auto scaleStartDistance = 0x20; // float
			constexpr auto scaleEndDistance = 0x24; // float
			constexpr auto on = 0x0; // bool
		}
		namespace EmissionScaledByLight
		{
			constexpr auto emissionColor = 0x18; // Color
			constexpr auto targetRenderers = 0x28; // Renderer[]
			constexpr auto materialIndex = 0x30; // int32_t
			constexpr auto block = 0x0; // MaterialPropertyBlock
			constexpr auto lightToFollow = 0x38; // Light
			constexpr auto maxEmissionValue = 0x40; // float
			constexpr auto index = 0x44; // int32_t
		}
		namespace EmissionToggle
		{
			constexpr auto emissionColor = 0x18; // Color
			constexpr auto targetRenderers = 0x28; // Renderer[]
			constexpr auto materialIndex = 0x30; // int32_t
			constexpr auto inited = 0x34; // bool
			constexpr auto emissionPercent = 0x38; // Nullable`1
			constexpr auto block = 0x0; // MaterialPropertyBlock
			constexpr auto emissionColorID = 0x8; // int32_t
		}
		namespace EyeBlink
		{
			constexpr auto LeftEye = 0x18; // Transform
			constexpr auto LeftEyelid = 0x20; // Transform
			constexpr auto LeftEyeOffset = 0x28; // Vector3
			constexpr auto RightEye = 0x38; // Transform
			constexpr auto RightEyelid = 0x40; // Transform
			constexpr auto RightEyeOffset = 0x48; // Vector3
			constexpr auto ClosedEyelidPosition = 0x54; // Vector3
			constexpr auto ClosedEyelidRotation = 0x60; // Vector3
			constexpr auto TimeWithoutBlinking = 0x6C; // Vector2
			constexpr auto BlinkSpeed = 0x74; // float
			constexpr auto LeftEyeInitial = 0x78; // Vector3
			constexpr auto RightEyeInitial = 0x84; // Vector3
			constexpr auto BlinkCountdown = 0x90; // TimeUntil
		}
		namespace EyeController
		{
			constexpr auto debug = 0x18; // bool
			constexpr auto LeftEye = 0x20; // Transform
			constexpr auto RightEye = 0x28; // Transform
			constexpr auto EyeTransform = 0x30; // Transform
			constexpr auto Fudge = 0x38; // Vector3
			constexpr auto FlickerRange = 0x44; // Vector3
			constexpr auto Focus = 0x50; // Transform
			constexpr auto FocusUpdateTime = 0x58; // float
			constexpr auto Flicker = 0x5C; // Vector3
			constexpr auto FlickerTarget = 0x68; // Vector3
			constexpr auto TimeToUpdateFlicker = 0x74; // float
			constexpr auto FlickerSpeed = 0x78; // float
		}
		namespace FireBomb
		{
			constexpr auto fireParticle = 0x18; // GameObject
			constexpr auto bombRadius = 0x20; // float
			constexpr auto particleDuration = 0x24; // float
			constexpr auto emitDuration = 0x28; // float
			constexpr auto particleSpawnRadius = 0x2C; // float
			constexpr auto emitIntervalTime = 0x30; // float
			constexpr auto emitStartTime = 0x34; // float
			constexpr auto nextEmitTime = 0x38; // float
		}
		namespace FirstPersonEffect
		{
			constexpr auto isGunShot = 0x18; // bool
			constexpr auto parentToWeaponComponent = 0x20; // EffectParentToWeaponBone
		}
		namespace FootstepEffects
		{
			constexpr auto leftFoot = 0x30; // Transform
			constexpr auto rightFoot = 0x38; // Transform
			constexpr auto footstepEffectName = 0x40; // string
			constexpr auto jumpStartEffectName = 0x48; // string
			constexpr auto jumpLandEffectName = 0x50; // string
			constexpr auto lastWasLeft = 0x58; // bool
			constexpr auto lastWasStopped = 0x59; // bool
			constexpr auto player = 0x60; // BasePlayer
			constexpr auto isOnGround = 0x68; // bool
			constexpr auto animator = 0x70; // Animator
		}
		namespace LightPulse
		{
			constexpr auto TargetLight = 0x18; // Light
			constexpr auto PulseSpeed = 0x20; // float
			constexpr auto Lifetime = 0x24; // float
			constexpr auto MaxIntensity = 0x28; // float
			constexpr auto FadeOutSpeed = 0x2C; // float
			constexpr auto timeAlive = 0x30; // TimeSince
		}
		namespace MaterialSwap
		{
			constexpr auto materialIndex = 0x18; // int32_t
			constexpr auto myRenderer = 0x20; // Renderer
			constexpr auto OverrideMaterial = 0x28; // Material
			constexpr auto initialized = 0x30; // bool
			constexpr auto originalMaterials = 0x38; // Material[]
		}
		namespace Muzzleflash_AlphaRandom
		{
			constexpr auto muzzleflashParticles = 0x18; // ParticleSystem[]
			constexpr auto grad = 0x20; // Gradient
			constexpr auto gck = 0x28; // GradientColorKey[]
			constexpr auto gak = 0x30; // GradientAlphaKey[]
		}
		namespace MuzzleFlash_Flamelet
		{
			constexpr auto flameletParticle = 0x18; // ParticleSystem
		}
		namespace NPCFootstepEffects
		{
			constexpr auto impactEffectDirectory = 0x30; // string
			constexpr auto frontLeftFoot = 0x38; // Transform
			constexpr auto frontRightFoot = 0x40; // Transform
			constexpr auto backLeftFoot = 0x48; // Transform
			constexpr auto backRightFoot = 0x50; // Transform
		}
		namespace ParticleEmissionSound
		{
			constexpr auto particleSystem = 0x18; // ParticleSystem
			constexpr auto soundDefinition = 0x20; // SoundDefinition
			constexpr auto soundCooldown = 0x28; // float
			constexpr auto lastParticleCount = 0x2C; // int32_t
			constexpr auto lastSoundPlayed = 0x30; // float
			constexpr auto active = 0x34; // bool
			constexpr auto cell = 0x38; // LODCell
		}
		namespace ParticleEmitFromParentObject
		{
			constexpr auto bonename = 0x18; // string
			constexpr auto bounds = 0x20; // Bounds
			constexpr auto bone = 0x38; // Transform
			constexpr auto entity = 0x40; // BaseEntity
			constexpr auto lastBoundsUpdate = 0x48; // float
		}
		namespace PhysicsEffects
		{
			constexpr auto entity = 0x18; // BaseEntity
			constexpr auto physImpactSoundDef = 0x20; // SoundDefinition
			constexpr auto minTimeBetweenEffects = 0x28; // float
			constexpr auto minDistBetweenEffects = 0x2C; // float
			constexpr auto hardnessScale = 0x30; // float
			constexpr auto lowMedThreshold = 0x34; // float
			constexpr auto medHardThreshold = 0x38; // float
			constexpr auto enableDelay = 0x3C; // float
			constexpr auto ignoreLayers = 0x40; // LayerMask
		}
		namespace RottingFlies
		{
			constexpr auto effect = 0x18; // GameObjectRef
			constexpr auto soundDef = 0x20; // SoundDefinition
			constexpr auto rootBone = 0x28; // Transform
			constexpr auto Hide = 0x0; // bool
			constexpr auto particleInstance = 0x30; // GameObject
			constexpr auto sound = 0x38; // Sound
		}
		namespace Sandstorm
		{
			constexpr auto m_psSandStorm = 0x18; // ParticleSystem
			constexpr auto m_flSpeed = 0x20; // float
			constexpr auto m_flSwirl = 0x24; // float
			constexpr auto m_flEmissionRate = 0x28; // float
		}
		namespace ScaleParticleSystem
		{
			constexpr auto pSystem = 0x38; // ParticleSystem
			constexpr auto scaleGravity = 0x40; // bool
			constexpr auto startSize = 0x44; // float
			constexpr auto startLifeTime = 0x48; // float
			constexpr auto startSpeed = 0x4C; // float
			constexpr auto startGravity = 0x50; // float
		}
		namespace ScaleRenderer
		{
			constexpr auto useRandomScale = 0x18; // bool
			constexpr auto scaleMin = 0x1C; // float
			constexpr auto scaleMax = 0x20; // float
			constexpr auto lastScale = 0x24; // float
			constexpr auto hasInitialValues = 0x28; // bool
			constexpr auto myRenderer = 0x30; // Renderer
		}
		namespace ScaleTrailRenderer
		{
			constexpr auto trailRenderer = 0x38; // TrailRenderer
			constexpr auto startWidth = 0x40; // float
			constexpr auto endWidth = 0x44; // float
			constexpr auto duration = 0x48; // float
			constexpr auto startMultiplier = 0x4C; // float
		}
		namespace ScaleTransform
		{
			constexpr auto initialScale = 0x38; // Vector3
		}
		namespace BaseScreenShake
		{
			constexpr auto list = 0x0; // List`1
			constexpr auto punchFadeScale = 0x8; // float
			constexpr auto bobScale = 0xC; // float
			constexpr auto animPunchMagnitude = 0x10; // float
			constexpr auto length = 0x18; // float
			constexpr auto timeTaken = 0x1C; // float
			constexpr auto currentFrame = 0x20; // int32_t
		}
		namespace ScreenBounce
		{
			constexpr auto bounceScale = 0x28; // AnimationCurve
			constexpr auto bounceSpeed = 0x30; // AnimationCurve
			constexpr auto bounceViewmodel = 0x38; // AnimationCurve
			constexpr auto bounceTime = 0x40; // float
			constexpr auto bounceVelocity = 0x44; // Vector3
		}
		namespace ScreenBounceFade
		{
			constexpr auto bounceScale = 0x28; // AnimationCurve
			constexpr auto bounceSpeed = 0x30; // AnimationCurve
			constexpr auto bounceViewmodel = 0x38; // AnimationCurve
			constexpr auto distanceFalloff = 0x40; // AnimationCurve
			constexpr auto timeFalloff = 0x48; // AnimationCurve
			constexpr auto bounceTime = 0x50; // float
			constexpr auto bounceVelocity = 0x54; // Vector3
			constexpr auto maxDistance = 0x60; // float
			constexpr auto scale = 0x64; // float
		}
		namespace ScreenFov
		{
			constexpr auto FovAdjustment = 0x28; // AnimationCurve
		}
		namespace ScreenRotate
		{
			constexpr auto Pitch = 0x28; // AnimationCurve
			constexpr auto Yaw = 0x30; // AnimationCurve
			constexpr auto Roll = 0x38; // AnimationCurve
			constexpr auto ViewmodelEffect = 0x40; // AnimationCurve
			constexpr auto scale = 0x48; // float
			constexpr auto useViewModelEffect = 0x4C; // bool
		}
		namespace Shaker
		{
			constexpr auto Frequency = 0x18; // float
			constexpr auto PositionMagnitude = 0x1C; // Vector3
			constexpr auto RotationMagnitude = 0x28; // Vector3
			constexpr auto GlobalMultiplier = 0x34; // float
			constexpr auto hasSetStartPos = 0x38; // bool
			constexpr auto startPosition = 0x3C; // Vector3
			constexpr auto startRotation = 0x48; // Vector3
			constexpr auto cachedTransform = 0x58; // Transform
			constexpr auto nextChange = 0x60; // TimeUntil
		}
		namespace FileSystem_Warmup
		{
			constexpr auto ranInBackground = 0x0; // bool
			constexpr auto warmupTask = 0x8; // Coroutine
			constexpr auto run = 0x10; // bool
			constexpr auto ExcludeFilter = 0x18; // string[]
		}
		namespace Profile
		{
			constexpr auto watch = 0x10; // Stopwatch
			constexpr auto category = 0x18; // string
			constexpr auto name = 0x20; // string
			constexpr auto warnTime = 0x28; // float
		}
		namespace AggressionTimerAIEvent
		{
			constexpr auto Valuek__BackingField = 0x40; // float
		}
		namespace AIDesignSO
		{
			constexpr auto Filename = 0x20; // string
		}
		namespace AIDesign
		{
			constexpr auto Scopek__BackingField = 0x10; // AIDesignScope
			constexpr auto Descriptionk__BackingField = 0x18; // string
			constexpr auto AvailableStates = 0x20; // List`1
			constexpr auto DefaultStateContainerID = 0x28; // int32_t
			constexpr auto stateContainers = 0x30; // Dictionary`2
		}
		namespace AIDesigns
		{
			constexpr auto designs = 0x0; // Dictionary`2
		}
		namespace AIEvents
		{
			constexpr auto Memory = 0x10; // AIMemory
			constexpr auto CurrentInputMemorySlotk__BackingField = 0x18; // int32_t
			constexpr auto events = 0x20; // List`1
			constexpr auto eventListener = 0x28; // IAIEventListener
			constexpr auto senses = 0x30; // AIBrainSenses
			constexpr auto currentEventIndex = 0x38; // int32_t
			constexpr auto inBlock = 0x3C; // bool
		}
		namespace AIEventType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AIMemory
		{
			constexpr auto Entity = 0x10; // AIMemoryBank`1
			constexpr auto Position = 0x18; // AIMemoryBank`1
			constexpr auto AIPoint = 0x20; // AIMemoryBank`1
		}
		namespace MemoryBankType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ReservedEntitySlots
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ReservedPositionSlots
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ReservedAIPointSlots
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AIMemoryBank
		{
			constexpr auto type = 0x0; // MemoryBankType
			constexpr auto slots = 0x0; // T[]
			constexpr auto slotSetTimestamps = 0x0; // float[]
			constexpr auto slotCount = 0x0; // int32_t
		}
		namespace AmmoBelowAIEvent
		{
			constexpr auto Valuek__BackingField = 0x40; // float
		}
		namespace AttackedAIEvent
		{
			constexpr auto lastExecuteTime = 0x40; // float
			constexpr auto combatEntity = 0x48; // BaseCombatEntity
		}
		namespace BaseAIEvent
		{
			constexpr auto EventTypek__BackingField = 0x10; // AIEventType
			constexpr auto TriggerStateContainerIDk__BackingField = 0x14; // int32_t
			constexpr auto Ratek__BackingField = 0x18; // ExecuteRate
			constexpr auto ShouldExecutek__BackingField = 0x1C; // bool
			constexpr auto Resultk__BackingField = 0x1D; // bool
			constexpr auto Invertedk__BackingField = 0x1E; // bool
			constexpr auto OutputEntityMemorySlotk__BackingField = 0x20; // int32_t
			constexpr auto InputEntityMemorySlotk__BackingField = 0x24; // int32_t
			constexpr auto IDk__BackingField = 0x28; // int32_t
			constexpr auto Ownerk__BackingField = 0x30; // BaseEntity
			constexpr auto executeTimer = 0x38; // float
			constexpr auto deltaTime = 0x3C; // float
		}
		namespace ChanceAIEvent
		{
			constexpr auto Chancek__BackingField = 0x40; // float
		}
		namespace HealthBelowAIEvent
		{
			constexpr auto HealthFractionk__BackingField = 0x40; // float
			constexpr auto combatEntity = 0x48; // BaseCombatEntity
		}
		namespace HungerAboveAIEvent
		{
			constexpr auto Valuek__BackingField = 0x40; // float
		}
		namespace InRangeAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace InRangeOfHomeAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace PerformedAttackAIEvent
		{
			constexpr auto lastExecuteTime = 0x40; // float
			constexpr auto combatEntity = 0x48; // BaseCombatEntity
		}
		namespace PlayerDetectedAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace TargetDetectedAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace TargetLostAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace ThreatDetectedAIEvent
		{
			constexpr auto Rangek__BackingField = 0x40; // float
		}
		namespace TimerAIEvent
		{
			constexpr auto DurationMink__BackingField = 0x40; // float
			constexpr auto DurationMaxk__BackingField = 0x44; // float
			constexpr auto currentDuration = 0x48; // float
			constexpr auto elapsedDuration = 0x4C; // float
		}
		namespace TimeSinceThreatAIEvent
		{
			constexpr auto Valuek__BackingField = 0x40; // float
		}
		namespace TirednessAboveAIEvent
		{
			constexpr auto Valuek__BackingField = 0x40; // float
		}
		namespace AIStateContainer
		{
			constexpr auto IDk__BackingField = 0x10; // int32_t
			constexpr auto Statek__BackingField = 0x14; // AIState
			constexpr auto Events = 0x18; // List`1
			constexpr auto InputMemorySlotk__BackingField = 0x20; // int32_t
		}
		namespace StateStatus
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AIDesignScope
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace EntityType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PetCommandType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PetCommandList
		{
			constexpr auto Commands = 0x98; // List`1
		}
		namespace AudioVisualisationEntityLight
		{
			constexpr auto TargetLight = 0x350; // Light
			constexpr auto SecondaryLight = 0x358; // Light
			constexpr auto TargetRenderer = 0x360; // MeshRenderer[]
			constexpr auto RedColour = 0x368; // LightColourSet
			constexpr auto GreenColour = 0x398; // LightColourSet
			constexpr auto BlueColour = 0x3C8; // LightColourSet
			constexpr auto YellowColour = 0x3F8; // LightColourSet
			constexpr auto PinkColour = 0x428; // LightColourSet
			constexpr auto lightMinIntensity = 0x458; // float
			constexpr auto lightMaxIntensity = 0x45C; // float
			constexpr auto block = 0x0; // MaterialPropertyBlock
			constexpr auto emissionColourId = 0x8; // int32_t
			constexpr auto lastVolume = 0x460; // float
		}
		namespace BoomBox
		{
			constexpr auto SoundSource = 0x20; // AudioSource
			constexpr auto ConditionLossRate = 0x28; // float
			constexpr auto ValidCassettes = 0x30; // ItemDefinition[]
			constexpr auto PlaySfx = 0x38; // SoundDefinition
			constexpr auto StopSfx = 0x40; // SoundDefinition
			constexpr auto CurrentCassettek__BackingField = 0x48; // Cassette
			constexpr auto localPlayerAchievementTime = 0x50; // float
			constexpr auto hasAwardedLocalPlayerAchievement = 0x54; // bool
			constexpr auto ValidStations = 0x0; // Dictionary`2
			constexpr auto ServerValidStations = 0x8; // Dictionary`2
			constexpr auto ServerUrlList = 0x10; // string
			constexpr auto lastParsedServerList = 0x18; // string
			constexpr auto ShoutcastStreamer = 0x58; // ShoutcastStreamer
			constexpr auto RadioIpDialog = 0x60; // GameObjectRef
			constexpr auto CurrentRadioIpk__BackingField = 0x68; // string
			constexpr auto AssignedRadioBy = 0x70; // UInt64
		}
		namespace DiscoFloor
		{
			constexpr auto GradientDuration = 0x350; // float
			constexpr auto VolumeSensitivityMultiplier = 0x354; // float
			constexpr auto BaseSpeed = 0x358; // float
			constexpr auto LightSources = 0x360; // Light[]
			constexpr auto FloorMesh = 0x368; // DiscoFloorMesh
			constexpr auto currentFloorTime = 0x370; // float
			constexpr auto cachedLookups = 0x378; // DiscoFloorColourLookups
		}
		namespace DiscoFloorColourLookups
		{
			constexpr auto InOutLookup = 0x98; // float[]
			constexpr auto RadialLookup = 0xA0; // float[]
			constexpr auto RippleLookup = 0xA8; // float[]
			constexpr auto CheckerLookup = 0xB0; // float[]
			constexpr auto BlockLookup = 0xB8; // float[]
			constexpr auto ColourGradients = 0xC0; // Gradient[]
		}
		namespace DiscoFloorMesh
		{
			constexpr auto GridRows = 0x18; // int32_t
			constexpr auto GridColumns = 0x1C; // int32_t
			constexpr auto GridSize = 0x20; // float
			constexpr auto TestOffset = 0x24; // float
			constexpr auto OffColor = 0x28; // Color
			constexpr auto Renderer = 0x38; // MeshRenderer
			constexpr auto DrawInEditor = 0x40; // bool
			constexpr auto Filter = 0x48; // MeshFilter
			constexpr auto customCurveX = 0x50; // AnimationCurve
			constexpr auto customCurveY = 0x58; // AnimationCurve
			constexpr auto powerId = 0x0; // int32_t
			constexpr auto builtMesh = 0x60; // Mesh
			constexpr auto colourArray = 0x68; // Color[]
		}
		namespace ItemModCassette
		{
			constexpr auto noteSpriteIndex = 0x28; // int32_t
			constexpr auto PreloadedContent = 0x30; // PreloadedCassetteContent
		}
		namespace LaserLight
		{
			constexpr auto LaserAnimator = 0x350; // Animator
			constexpr auto LineRenderers = 0x358; // LineRenderer[]
			constexpr auto DotRenderers = 0x360; // MeshRenderer[]
			constexpr auto FlareRenderer = 0x368; // MeshRenderer
			constexpr auto LightSources = 0x370; // Light[]
			constexpr auto RedSettings = 0x378; // ColourSetting
			constexpr auto GreenSettings = 0x3B0; // ColourSetting
			constexpr auto BlueSettings = 0x3E8; // ColourSetting
			constexpr auto YellowSettings = 0x420; // ColourSetting
			constexpr auto PinkSettings = 0x458; // ColourSetting
			constexpr auto AnimSpeedParameter = 0x0; // int32_t
			constexpr auto TintColor = 0x4; // int32_t
			constexpr auto laserBlock = 0x8; // MaterialPropertyBlock
			constexpr auto lookingAtTime = 0x490; // float
			constexpr auto lastLookAtTick = 0x494; // TimeSince
			constexpr auto hasAwardedLookAtAchievement = 0x10; // bool
		}
		namespace MicrophoneStandIOEntity
		{
			constexpr auto PowerCost = 0x2A8; // int32_t
			constexpr auto InstrumentTrigger = 0x2B0; // TriggerBase
			constexpr auto IsStatic = 0x2B8; // bool
			constexpr auto nearbyInstruments = 0x2C0; // List`1
			constexpr auto activeSounds = 0x2C8; // Dictionary`2
			constexpr auto connectedRepeaters = 0x2D0; // List`1
			constexpr auto lastNote = 0x2D8; // TimeSince
			constexpr auto fakeInput = 0x2DC; // float
			constexpr auto lastFrameMove = 0x2E0; // int32_t
		}
		namespace MobileInventoryEntity
		{
			constexpr auto ringingLoop = 0x168; // SoundDefinition
			constexpr auto silentLoop = 0x170; // SoundDefinition
			constexpr auto Flag_Silent = 0x0; // Flags
			constexpr auto ringingSound = 0x178; // Sound
		}
		namespace PhoneController
		{
			constexpr auto PhoneNumber = 0x20; // int32_t
			constexpr auto PhoneName = 0x28; // string
			constexpr auto CanModifyPhoneName = 0x30; // bool
			constexpr auto CanSaveNumbers = 0x31; // bool
			constexpr auto RequirePower = 0x32; // bool
			constexpr auto RequireParent = 0x33; // bool
			constexpr auto CallWaitingTime = 0x34; // float
			constexpr auto AppendGridToName = 0x38; // bool
			constexpr auto IsMobile = 0x39; // bool
			constexpr auto CanSaveVoicemail = 0x3A; // bool
			constexpr auto PhoneDialog = 0x40; // GameObjectRef
			constexpr auto VProcessor = 0x48; // VoiceProcessor
			constexpr auto PreloadedContent = 0x50; // PreloadedCassetteContent
			constexpr auto DialToneSfx = 0x58; // SoundDefinition
			constexpr auto RingingSfx = 0x60; // SoundDefinition
			constexpr auto ErrorSfx = 0x68; // SoundDefinition
			constexpr auto CallIncomingWhileBusySfx = 0x70; // SoundDefinition
			constexpr auto PickupHandsetSfx = 0x78; // SoundDefinition
			constexpr auto PutDownHandsetSfx = 0x80; // SoundDefinition
			constexpr auto FailedWrongNumber = 0x88; // SoundDefinition
			constexpr auto FailedNoAnswer = 0x90; // SoundDefinition
			constexpr auto FailedNetworkBusy = 0x98; // SoundDefinition
			constexpr auto FailedEngaged = 0xA0; // SoundDefinition
			constexpr auto FailedRemoteHangUp = 0xA8; // SoundDefinition
			constexpr auto FailedSelfHangUp = 0xB0; // SoundDefinition
			constexpr auto RingingLight = 0xB8; // Light
			constexpr auto RingingLightFrequency = 0xC0; // float
			constexpr auto answeringMachineSound = 0xC8; // AudioSource
			constexpr auto currentPlayerRef = 0xD0; // EntityRef
			constexpr auto lastDialedNumberk__BackingField = 0xE0; // int32_t
			constexpr auto savedNumbersk__BackingField = 0xE8; // PhoneDirectory
			constexpr auto savedVoicemail = 0xF0; // List`1
			constexpr auto currentlyLoadedPreloadedContent = 0xF8; // SoundDefinition
			constexpr auto connectedPlayerId = 0x100; // string
			constexpr auto clientCallStatek__BackingField = 0x108; // CallState
			constexpr auto CurrentDialogk__BackingField = 0x110; // PhoneDialler
			constexpr auto callStartTime = 0x118; // float
			constexpr auto ringingSound = 0x120; // Sound
			constexpr auto dialingSound = 0x128; // Sound
			constexpr auto currentDirectoryk__BackingField = 0x130; // PhoneDirectory
			constexpr auto lastDirectoryUpdate = 0x138; // TimeSince
			constexpr auto ConnectedCallPhoneNumberk__BackingField = 0x13C; // int32_t
			constexpr auto voicemailTarget = 0x140; // int32_t
			constexpr auto currentEncoder = 0x148; // OggEncoder
			constexpr auto activeIntercept = 0x150; // AudioInterceptComponent
			constexpr auto requestedDialNumber = 0x158; // int32_t
			constexpr auto cachedCanLeaveVoicemail = 0x15C; // bool
			constexpr auto AnsweringMessageStartTimek__BackingField = 0x160; // TimeSince
			constexpr auto AnsweringMachineMessageLengthk__BackingField = 0x164; // float
		}
		namespace PreloadedCassetteContent
		{
			constexpr auto ShortTapeContent = 0x18; // SoundDefinition[]
			constexpr auto MediumTapeContent = 0x20; // SoundDefinition[]
			constexpr auto LongTapeContent = 0x28; // SoundDefinition[]
		}
		namespace RadioPlaylist
		{
			constexpr auto Url = 0x18; // string
			constexpr auto Playlist = 0x20; // AudioClip[]
			constexpr auto PlaylistLength = 0x28; // float
		}
		namespace AudioInterceptComponent
		{
			constexpr auto Encoder = 0x18; // OggEncoder
			constexpr auto strippedData = 0x20; // float[]
			constexpr auto debugChannels = 0x0; // bool
		}
		namespace BaseCorpse
		{
			constexpr auto prefabRagdoll = 0x250; // GameObjectRef
			constexpr auto parentEnt = 0x258; // BaseEntity
			constexpr auto resourceDispenser = 0x260; // ResourceDispenser
			constexpr auto ragdollObject = 0x268; // GameObject
		}
		namespace AttackEntity
		{
			constexpr auto deployDelay = 0x1F8; // float
			constexpr auto repeatDelay = 0x1FC; // float
			constexpr auto animationDelay = 0x200; // float
			constexpr auto effectiveRange = 0x204; // float
			constexpr auto npcDamageScale = 0x208; // float
			constexpr auto attackLengthMin = 0x20C; // float
			constexpr auto attackLengthMax = 0x210; // float
			constexpr auto attackSpacing = 0x214; // float
			constexpr auto aiAimSwayOffset = 0x218; // float
			constexpr auto aiAimCone = 0x21C; // float
			constexpr auto aiOnlyInRange = 0x220; // bool
			constexpr auto CloseRangeAddition = 0x224; // float
			constexpr auto MediumRangeAddition = 0x228; // float
			constexpr auto LongRangeAddition = 0x22C; // float
			constexpr auto CanUseAtMediumRange = 0x230; // bool
			constexpr auto CanUseAtLongRange = 0x231; // bool
			constexpr auto reloadSounds = 0x238; // SoundDefinition[]
			constexpr auto thirdPersonMeleeSound = 0x240; // SoundDefinition
			constexpr auto recoilCompDelayOverride = 0x248; // float
			constexpr auto wantsRecoilComp = 0x24C; // bool
			constexpr auto nextAttackTime = 0x250; // float
			constexpr auto lastTickTime = 0x254; // float
			constexpr auto nextTickTime = 0x258; // float
			constexpr auto timeSinceDeploy = 0x25C; // float
			constexpr auto reductionSpeedScalars = 0x0; // Vector3
			constexpr auto lastRecoilCompTime = 0x260; // float
			constexpr auto startAimingDirection = 0x264; // Vector3
			constexpr auto wasDoingRecoilComp = 0x270; // bool
			constexpr auto reductionSpeed = 0x274; // Vector3
		}
		namespace Binocular
		{
			constexpr auto fovs = 0x280; // float[]
			constexpr auto fovChangeEffect = 0x288; // GameObjectRef
			constexpr auto smoothSpeed = 0x290; // float
			constexpr auto vmVisible = 0x294; // bool
			constexpr auto isAiming = 0x295; // bool
			constexpr auto timeAiming = 0x298; // float
			constexpr auto currentFovIndex = 0x29C; // int32_t
		}
		namespace CrossbowWeapon
		{
			constexpr auto swapArrows = 0x3A0; // SwapArrows
		}
		namespace FlintStrikeWeapon
		{
			constexpr auto successFraction = 0x3A0; // float
			constexpr auto strikeRecoil = 0x3A8; // RecoilProperties
			constexpr auto _didSparkThisFrame = 0x3B0; // bool
			constexpr auto _isStriking = 0x3B1; // bool
			constexpr auto strikes = 0x3B4; // int32_t
			constexpr auto lastSpectatorAttack = 0x3B8; // TimeSince
		}
		namespace GeigerCounter
		{
			constexpr auto geigerRod = 0x280; // Transform
			constexpr auto playerCache = 0x288; // BasePlayer
			constexpr auto attachmentBoneCache = 0x290; // Transform
		}
		namespace GrenadeWeapon
		{
			constexpr auto drop = 0x2A0; // bool
		}
		namespace InstrumentToolGuitar
		{
			constexpr auto InUseAligner = 0x230; // Transform
			constexpr auto DeployAligner = 0x238; // Transform
			constexpr auto DeployBone = 0x240; // string
			constexpr auto handBoneTarget = 0x248; // Transform
			constexpr auto deployHash = 0x0; // int32_t
		}
		namespace Keycard
		{
			constexpr auto worldKeycard = 0x280; // SwapKeycard
		}
		namespace LiquidWeaponEffects
		{
			constexpr auto RootPS = 0x18; // ParticleSystem
			constexpr auto EmissionPS = 0x20; // ParticleSystem
			constexpr auto InnerEmissionPS = 0x28; // ParticleSystem
			constexpr auto Liquid = 0x30; // LiquidWobble
			constexpr auto MinPressureSpeed = 0x38; // float
			constexpr auto MaxPressureSpeed = 0x3C; // float
			constexpr auto PressureSpeedCurve = 0x40; // AnimationCurve
			constexpr auto StreamSize = 0x48; // Vector2
			constexpr auto PressureSizeMultiplierCurve = 0x50; // AnimationCurve
			constexpr auto MinPressureInnerSpeed = 0x58; // float
			constexpr auto MaxPressureInnerSpeed = 0x5C; // float
			constexpr auto InnerPressureSpeedCurve = 0x60; // AnimationCurve
			constexpr auto InnerStreamSize = 0x68; // Vector2
			constexpr auto InnerPressureSizeMultiplierCurve = 0x70; // AnimationCurve
			constexpr auto UseImpactSplashEffect = 0x78; // bool
			constexpr auto ImpactSplashEffect = 0x80; // GameObjectRef
			constexpr auto ImpactSplashEffectInterval = 0x88; // float
			constexpr auto FillSpeed = 0x8C; // float
			constexpr auto player = 0x90; // BasePlayer
			constexpr auto maxRange = 0x98; // float
			constexpr auto currentRange = 0x9C; // float
			constexpr auto pressure = 0xA0; // float
			constexpr auto nextSplashTime = 0xA4; // float
			constexpr auto targetWaterLevel = 0xA8; // float
			constexpr auto firstPersonSounds = 0xAC; // bool
			constexpr auto shootStartSoundDef = 0xB0; // SoundDefinition
			constexpr auto shootLoopSoundDef = 0xB8; // SoundDefinition
			constexpr auto shootLowPressureLoopSoundDef = 0xC0; // SoundDefinition
			constexpr auto shootLoopSound = 0xC8; // Sound
			constexpr auto shootLowPressureLoopSound = 0xD0; // Sound
			constexpr auto shootLoopGainMod = 0xD8; // Modulator
			constexpr auto shootLowPressureGainMod = 0xE0; // Modulator
			constexpr auto impactStartSoundDef = 0xE8; // SoundDefinition
			constexpr auto impactLoopSoundDef = 0xF0; // SoundDefinition
			constexpr auto impactLoopSound = 0xF8; // Sound
			constexpr auto impactStartPlayed = 0x100; // bool
			constexpr auto lastImpactHit = 0x101; // bool
			constexpr auto lastImpactPosition = 0x104; // Vector3
			constexpr auto emitting = 0x110; // bool
		}
		namespace Paddle
		{
			constexpr auto animPaddleCooldown = 0x2D8; // float
			constexpr auto kayakSeat = 0x2E0; // GameObjectRef
			constexpr auto animationLerpSpeed = 0x2E8; // float
			constexpr auto param_Paddling = 0x0; // int32_t
			constexpr auto param_right = 0x4; // int32_t
			constexpr auto param_forward = 0x8; // int32_t
			constexpr auto smoothedAnimDirection = 0x2EC; // Vector3
		}
		namespace Speargun
		{
			constexpr auto worldAmmoModel = 0x3A8; // GameObject
		}
		namespace BaseNetworkable
		{
			constexpr auto JustCreatedk__BackingField = 0x18; // bool
			constexpr auto entityDestroy = 0x20; // DeferredAction
			constexpr auto prefabID = 0x28; // uint32_t
			constexpr auto globalBroadcast = 0x2C; // bool
			constexpr auto net = 0x30; // Networkable
			constexpr auto IsDestroyedk__BackingField = 0x38; // bool
			constexpr auto _prefabName = 0x40; // string
			constexpr auto _prefabNameWithoutExtension = 0x48; // string
			constexpr auto clientEntities = 0x0; // EntityRealm
			constexpr auto postNetworkUpdateComponents = 0x50; // List`1
			constexpr auto parentEntity = 0x58; // EntityRef
			constexpr auto children = 0x68; // List`1
			constexpr auto canTriggerParent = 0x70; // bool
		}
		namespace AnimatedBuildingBlock
		{
			constexpr auto animatorNeedsInitializing = 0x280; // bool
			constexpr auto animatorIsOpen = 0x281; // bool
			constexpr auto isAnimating = 0x282; // bool
		}
		namespace DeployableToSlot
		{
			constexpr auto slot = 0x18; // Slot
		}
		namespace EntityComponent
		{
			constexpr auto _baseEntity = 0x0; // T
		}
		namespace EntityDebug
		{
			constexpr auto stopwatch = 0x20; // Stopwatch
		}
		namespace EntityFlag_Animator
		{
			constexpr auto TargetAnimator = 0x48; // Animator
			constexpr auto ParamName = 0x50; // string
			constexpr auto AnimationMode = 0x58; // AnimatorMode
			constexpr auto FloatOnState = 0x5C; // float
			constexpr auto FloatOffState = 0x60; // float
			constexpr auto IntegerOnState = 0x64; // int32_t
			constexpr auto IntegerOffState = 0x68; // int32_t
			constexpr auto cachedHash = 0x6C; // int32_t
			constexpr auto cachedState = 0x70; // bool
		}
		namespace EntityFlag_TOD
		{
			constexpr auto desiredFlag = 0x20; // Flags
			constexpr auto onAtNight = 0x24; // bool
		}
		namespace EntityFlag_Toggle
		{
			constexpr auto runClientside = 0x20; // bool
			constexpr auto runServerside = 0x21; // bool
			constexpr auto flag = 0x24; // Flags
			constexpr auto flagCheck = 0x28; // FlagCheck
			constexpr auto notFlag = 0x2C; // Flags
			constexpr auto onFlagEnabled = 0x30; // UnityEvent
			constexpr auto onFlagDisabled = 0x38; // UnityEvent
			constexpr auto hasRunOnce = 0x40; // bool
			constexpr auto lastToggleOn = 0x41; // bool
		}
		namespace EntityFlag_ToggleNotify
		{
			constexpr auto UseEntityParent = 0x48; // bool
		}
		namespace EntityItem_RotateWhenOn
		{
			constexpr auto on = 0x20; // State
			constexpr auto off = 0x28; // State
			constexpr auto currentlyOn = 0x30; // bool
			constexpr auto stateInitialized = 0x31; // bool
			constexpr auto targetFlag = 0x34; // Flags
			constexpr auto movementLoop = 0x38; // Sound
		}
		namespace EntityTimedDestroy
		{
			constexpr auto secondsTillDestroy = 0x20; // float
		}
		namespace HideIfOwnerFirstPerson
		{
			constexpr auto disableGameObjects = 0x20; // GameObject[]
			constexpr auto worldModelEffect = 0x28; // bool
			constexpr auto lastHidden = 0x29; // bool
			constexpr auto previousValues = 0x30; // Dictionary`2
		}
		namespace LerpBetweenPointsBool
		{
			constexpr auto offsetPosLocal = 0x18; // Vector3
			constexpr auto speed = 0x24; // float
			constexpr auto targetPos = 0x28; // Vector3
			constexpr auto initialPos = 0x34; // Vector3
			constexpr auto UseAsOffset = 0x40; // bool
		}
		namespace LootDistanceOverride
		{
			constexpr auto amount = 0x18; // float
		}
		namespace ResourceDispenser
		{
			constexpr auto gatherType = 0x20; // GatherType
			constexpr auto containedItems = 0x28; // List`1
			constexpr auto maxDestroyFractionForFinishBonus = 0x30; // float
			constexpr auto finishBonus = 0x38; // List`1
			constexpr auto fractionRemaining = 0x40; // float
		}
		namespace Barricade
		{
			constexpr auto reflectDamage = 0x270; // float
			constexpr auto reflectEffect = 0x278; // GameObjectRef
			constexpr auto canNpcSmash = 0x280; // bool
			constexpr auto NavMeshVolumeAnimals = 0x288; // NavMeshModifierVolume
			constexpr auto NavMeshVolumeHumanoids = 0x290; // NavMeshModifierVolume
		}
		namespace ElectricOven
		{
			constexpr auto IoEntity = 0x568; // GameObjectRef
			constexpr auto IoEntityAnchor = 0x570; // Transform
			constexpr auto spawnedIo = 0x578; // EntityRef`1
		}
		namespace PercentFullStorageContainer
		{
			constexpr auto _clientPercentFull = 0x418; // float
		}
		namespace PoweredWaterPurifier
		{
			constexpr auto ConvertInterval = 0x470; // float
			constexpr auto PowerDrain = 0x474; // int32_t
			constexpr auto PoweredMaterial = 0x478; // Material
			constexpr auto UnpoweredMaterial = 0x480; // Material
			constexpr auto TargetRenderer = 0x488; // MeshRenderer
		}
		namespace UGCType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace SignContent
		{
			constexpr auto textureIDs = 0x170; // uint32_t[]
			constexpr auto editHistory = 0x178; // List`1
		}
		namespace WaterCatcher
		{
			constexpr auto itemToCreate = 0x448; // ItemDefinition
			constexpr auto maxItemToCreate = 0x450; // float
			constexpr auto rainTestPosition = 0x454; // Vector3
			constexpr auto rainTestSize = 0x460; // float
		}
		namespace WaterPump
		{
			constexpr auto WaterResourceLocation = 0x448; // Transform
			constexpr auto PumpInterval = 0x450; // float
			constexpr auto AmountPerPump = 0x454; // int32_t
			constexpr auto PowerConsumption = 0x458; // int32_t
		}
		namespace WaterPurifier
		{
			constexpr auto storagePrefab = 0x448; // GameObjectRef
			constexpr auto storagePrefabAnchor = 0x450; // Transform
			constexpr auto freshWater = 0x458; // ItemDefinition
			constexpr auto waterToProcessPerMinute = 0x460; // int32_t
			constexpr auto freshWaterRatio = 0x464; // int32_t
			constexpr auto stopWhenOutputFull = 0x468; // bool
		}
		namespace DebrisEntity
		{
			constexpr auto DebrisDespawnOverride = 0x250; // float
		}
		namespace BuildingGradeDecay
		{
			constexpr auto decayGrade = 0x98; // Enum
		}
		namespace DecayEntity
		{
			constexpr auto debrisPrefab = 0x250; // GameObjectRef
			constexpr auto debrisRotationOffset = 0x258; // Vector3
			constexpr auto buildingID = 0x264; // uint32_t
			constexpr auto upkeep = 0x268; // Upkeep
		}
		namespace DeployableDecay
		{
			constexpr auto decayDelay = 0x98; // float
			constexpr auto decayDuration = 0x9C; // float
		}
		namespace Upkeep
		{
			constexpr auto upkeepMultiplier = 0x98; // float
		}
		namespace DestroyOutsideMonument
		{
			constexpr auto baseCombatEntity = 0x18; // BaseCombatEntity
			constexpr auto checkEvery = 0x20; // float
		}
		namespace EntityFuelSystem
		{
			constexpr auto isServer = 0x10; // bool
			constexpr auto editorGiveFreeFuel = 0x11; // bool
			constexpr auto fuelStorageID = 0x14; // uint32_t
			constexpr auto fuelStorageInstance = 0x18; // EntityRef`1
		}
		namespace EntityLink
		{
			constexpr auto owner = 0x10; // BaseEntity
			constexpr auto socket = 0x18; // Socket_Base
			constexpr auto connections = 0x20; // List`1
			constexpr auto capacity = 0x28; // int32_t
		}
		namespace EntityRef
		{
			constexpr auto ent_cached = 0x0; // BaseEntity
			constexpr auto id_cached = 0x8; // NetworkableId
		}
		namespace EntityRef
		{
			constexpr auto entityRef = 0x0; // EntityRef
		}
		namespace FireBall
		{
			constexpr auto lifeTimeMin = 0x168; // float
			constexpr auto lifeTimeMax = 0x16C; // float
			constexpr auto movementSystems = 0x170; // ParticleSystem[]
			constexpr auto restingSystems = 0x178; // ParticleSystem[]
			constexpr auto generation = 0x180; // float
			constexpr auto spreadSubEntity = 0x188; // GameObjectRef
			constexpr auto tickRate = 0x190; // float
			constexpr auto damagePerSecond = 0x194; // float
			constexpr auto radius = 0x198; // float
			constexpr auto waterToExtinguish = 0x19C; // int32_t
			constexpr auto canMerge = 0x1A0; // bool
			constexpr auto AttackLayers = 0x1A4; // LayerMask
			constexpr auto ignoreNPC = 0x1A8; // bool
			constexpr auto wasResting = 0x1A9; // bool
		}
		namespace FireSpot
		{
			constexpr auto flameEffect = 0x168; // GameObject
		}
		namespace FlameExplosive
		{
			constexpr auto createOnExplode = 0x1C0; // GameObjectRef
			constexpr auto blockCreateUnderwater = 0x1C8; // bool
			constexpr auto numToCreate = 0x1CC; // float
			constexpr auto minVelocity = 0x1D0; // float
			constexpr auto maxVelocity = 0x1D4; // float
			constexpr auto spreadAngle = 0x1D8; // float
			constexpr auto forceUpForExplosion = 0x1DC; // bool
			constexpr auto velocityCurve = 0x1E0; // AnimationCurve
			constexpr auto spreadCurve = 0x1E8; // AnimationCurve
		}
		namespace GrowableGene
		{
			constexpr auto Typek__BackingField = 0x10; // GeneType
			constexpr auto PreviousTypek__BackingField = 0x14; // GeneType
		}
		namespace GrowableGeneProperties
		{
			constexpr auto Weights = 0x18; // GeneWeight[]
		}
		namespace GrowableGenes
		{
			constexpr auto Genes = 0x10; // GrowableGene[]
		}
		namespace InstrumentDebugInput
		{
			constexpr auto KeyController = 0x18; // InstrumentKeyController
			constexpr auto Note = 0x20; // KeySet
			constexpr auto Frequency = 0x2C; // float
			constexpr auto StopAfter = 0x30; // float
			constexpr auto OverrideDefinition = 0x38; // SoundDefinition
		}
		namespace InstrumentIKController
		{
			constexpr auto HitRotationVector = 0x18; // Vector3
			constexpr auto LeftHandIkTargets = 0x28; // Transform[]
			constexpr auto LeftHandIKTargetHitRotations = 0x30; // Transform[]
			constexpr auto RightHandIkTargets = 0x38; // Transform[]
			constexpr auto RightHandIKTargetHitRotations = 0x40; // Transform[]
			constexpr auto RightFootIkTargets = 0x48; // Transform[]
			constexpr auto HandHeightCurve = 0x50; // AnimationCurve
			constexpr auto HandHeightMultiplier = 0x58; // float
			constexpr auto HandMoveLerpSpeed = 0x5C; // float
			constexpr auto DebugHitRotation = 0x60; // bool
			constexpr auto HandHitCurve = 0x68; // AnimationCurve
			constexpr auto NoteHitTime = 0x70; // float
			constexpr auto BodyLookWeight = 0x74; // float
			constexpr auto HeadLookWeight = 0x78; // float
			constexpr auto LookWeightLimit = 0x7C; // float
			constexpr auto HoldHandsAtPlay = 0x80; // bool
			constexpr auto currentLeftHandTarget = 0x84; // int32_t
			constexpr auto leftHandTargetNoteTime = 0x88; // float
			constexpr auto currentRightHandTarget = 0x8C; // int32_t
			constexpr auto rightHandTargetNoteTime = 0x90; // float
			constexpr auto currentRightFootTarget = 0x94; // int32_t
			constexpr auto rightFootTargetNoteTime = 0x98; // float
			constexpr auto leftHandIkPos = 0x9C; // Vector3
			constexpr auto rightHandIkPos = 0xA8; // Vector3
			constexpr auto rightFootIkPos = 0xB4; // Vector3
			constexpr auto iKWorkerTransform = 0xC0; // Transform
			constexpr auto rotationWorker = 0xC8; // Transform
			constexpr auto totalHandAnimTime = 0xD0; // float
			constexpr auto lastSetLeftHandTime = 0xD4; // float
			constexpr auto lastSetRightHandTime = 0xD8; // float
			constexpr auto lastSetRightFootTime = 0xDC; // float
		}
		namespace InstrumentKeyController
		{
			constexpr auto PlayingNoteParam = 0x0; // int32_t
			constexpr auto AnimationSlot1 = 0x4; // int32_t
			constexpr auto AnimationSlot2 = 0x8; // int32_t
			constexpr auto AnimationSlot3 = 0xC; // int32_t
			constexpr auto AnimationSlot4 = 0x10; // int32_t
			constexpr auto AnimationSlot5 = 0x14; // int32_t
			constexpr auto AnimationSlot6 = 0x18; // int32_t
			constexpr auto AnimationSlot7 = 0x1C; // int32_t
			constexpr auto lastAnimationSlotTime = 0x18; // float
			constexpr auto OnAnimationSlotSet = 0x20; // Action`1
			constexpr auto setSlot = 0x28; // Nullable`1
			constexpr auto currentReceiverk__BackingField = 0x30; // MicrophoneStandIOEntity
			constexpr auto Bindings = 0x38; // NoteBindingCollection
			constexpr auto NoteBindings = 0x40; // NoteBinding[]
			constexpr auto NoteSoundPositions = 0x48; // Transform[]
			constexpr auto IKController = 0x50; // InstrumentIKController
			constexpr auto LeftHandProp = 0x58; // Transform
			constexpr auto RightHandProp = 0x60; // Transform
			constexpr auto InstrumentAnimator = 0x68; // Animator
			constexpr auto RPCHandler = 0x70; // BaseEntity
			constexpr auto overrideAchievementId = 0x78; // uint32_t
			constexpr auto playedInstruments = 0x20; // HashSet`1
			constexpr auto workerBinding = 0x80; // NoteBinding
			constexpr auto midiPlayer = 0xA0; // BasePlayer
			constexpr auto playedFirstNote = 0xA8; // bool
			constexpr auto teamAchievementCheck = 0xAC; // float
			constexpr auto awardedFullCollectionAchievement = 0x28; // bool
			constexpr auto TimeInUse = 0xB0; // TimeSince
			constexpr auto subscribedToMidi = 0xB4; // bool
			constexpr auto activeMidiBindings = 0xB8; // InstrumentMidiBindings
			constexpr auto hasSetupBindings = 0xC0; // bool
			constexpr auto autoplayPrefString = 0xC8; // string
			constexpr auto autoplayDefaultName = 0xD0; // string
			constexpr auto FullKeyboardModek__BackingField = 0xD8; // bool
			constexpr auto activeMidiNotes = 0xE0; // List`1
			constexpr auto CurrentAnimationk__BackingField = 0xE8; // AnimationSlot
			constexpr auto OwnerPlayer = 0xF0; // BasePlayer
			constexpr auto PlayedNoteThisFramek__BackingField = 0xF8; // bool
			constexpr auto sustain = 0xF9; // bool
			constexpr auto lastMidiFrame = 0xFC; // int32_t
			constexpr auto midiNotesThisFrame = 0x100; // int32_t
			constexpr auto activeRecording = 0x108; // InstrumentRecording
			constexpr auto recordingFileName = 0x110; // string
			constexpr auto recordingStartTime = 0x118; // float
			constexpr auto activeNotes = 0x120; // List`1
			constexpr auto playingRecording = 0x128; // InstrumentRecording
			constexpr auto playbackElapsedTime = 0x130; // float
			constexpr auto stoppedNotes = 0x138; // List`1
		}
		namespace NoteBindingCollection
		{
			constexpr auto BaseBindings = 0x18; // NoteData[]
			constexpr auto MinimumNoteTime = 0x20; // float
			constexpr auto MaximumNoteLength = 0x24; // float
			constexpr auto AllowAutoplay = 0x28; // bool
			constexpr auto AutoplayLoopDelay = 0x2C; // float
			constexpr auto NotePlayedStatName = 0x30; // string
			constexpr auto KeyMidiMapShortname = 0x38; // string
			constexpr auto AllowSustain = 0x40; // bool
			constexpr auto AllowFullKeyboardInput = 0x41; // bool
			constexpr auto InstrumentShortName = 0x48; // string
			constexpr auto NotePlayType = 0x50; // InstrumentType
			constexpr auto MaxConcurrentNotes = 0x54; // int32_t
			constexpr auto LoopSounds = 0x58; // bool
			constexpr auto SoundFadeInTime = 0x5C; // float
			constexpr auto minimumSoundFadeOutTime = 0x60; // float
			constexpr auto PrimaryClickNote = 0x64; // KeySet
			constexpr auto SecondaryClickNote = 0x70; // KeySet
			constexpr auto RunInstrumentAnimationController = 0x7C; // bool
			constexpr auto PlayRepeatAnimations = 0x7D; // bool
			constexpr auto AnimationDeadTime = 0x80; // float
			constexpr auto AnimationResetDelay = 0x84; // float
			constexpr auto RecentlyPlayedThreshold = 0x88; // float
			constexpr auto CrossfadeNormalizedAnimationTarget = 0x8C; // float
			constexpr auto AnimationCrossfadeDuration = 0x90; // float
			constexpr auto CrossfadePlayerSpeedMulti = 0x94; // float
			constexpr auto DefaultOctave = 0x98; // int32_t
			constexpr auto ShiftedOctave = 0x9C; // int32_t
			constexpr auto UseClosestMidiNote = 0xA0; // bool
		}
		namespace BaseMetabolism
		{
			constexpr auto owner = 0x0; // T
			constexpr auto calories = 0x0; // MetabolismAttribute
			constexpr auto hydration = 0x0; // MetabolismAttribute
			constexpr auto heartrate = 0x0; // MetabolismAttribute
		}
		namespace MetabolismAttribute
		{
			constexpr auto startMin = 0x10; // float
			constexpr auto startMax = 0x14; // float
			constexpr auto min = 0x18; // float
			constexpr auto max = 0x1C; // float
			constexpr auto value = 0x20; // float
			constexpr auto lastValue = 0x24; // float
			constexpr auto lastGreatFraction = 0x28; // float
		}
		namespace BaseResourceExtractor
		{
			constexpr auto canExtractLiquid = 0x250; // bool
			constexpr auto canExtractSolid = 0x251; // bool
		}
		namespace MiningQuarry
		{
			constexpr auto beltAnimator = 0x258; // Animator
			constexpr auto beltScrollRenderer = 0x260; // Renderer
			constexpr auto scrollMatIndex = 0x268; // int32_t
			constexpr auto onSounds = 0x270; // SoundPlayer[]
			constexpr auto processRate = 0x278; // float
			constexpr auto workToAdd = 0x27C; // float
			constexpr auto workPerFuel = 0x280; // float
			constexpr auto pendingWork = 0x284; // float
			constexpr auto bucketDropEffect = 0x288; // GameObjectRef
			constexpr auto bucketDropTransform = 0x290; // GameObject
			constexpr auto engineSwitchPrefab = 0x298; // ChildPrefab
			constexpr auto hopperPrefab = 0x2A0; // ChildPrefab
			constexpr auto fuelStoragePrefab = 0x2A8; // ChildPrefab
			constexpr auto staticType = 0x2B0; // QuarryType
			constexpr auto isStatic = 0x2B4; // bool
			constexpr auto soundGainMods = 0x2B8; // List`1
			constexpr auto soundPitchMods = 0x2C0; // List`1
			constexpr auto beltSpeed = 0x2C8; // float
		}
		namespace ResourceDepositManager
		{
			constexpr auto _manager = 0x0; // ResourceDepositManager
			constexpr auto _deposits = 0x168; // Dictionary`2
		}
		namespace SurveyCharge
		{
			constexpr auto craterPrefab = 0x1C0; // GameObjectRef
			constexpr auto craterPrefab_Oil = 0x1C8; // GameObjectRef
		}
		namespace NPCAutoTurret
		{
			constexpr auto centerMuzzle = 0x8A0; // Transform
			constexpr auto muzzleLeft = 0x8A8; // Transform
			constexpr auto muzzleRight = 0x8B0; // Transform
			constexpr auto useLeftMuzzle = 0x8B8; // bool
		}
		namespace TargetTrigger
		{
			constexpr auto losEyes = 0x30; // Transform
		}
		namespace BirthdayBalloonHandler
		{
			constexpr auto checkOffset = 0x18; // float
			constexpr auto checkRadius = 0x1C; // float
		}
		namespace CardGamePlayerStorage
		{
			constexpr auto cardTableRef = 0x418; // EntityRef
		}
		namespace CardGameSounds
		{
			constexpr auto ChipsSfx = 0x98; // SoundDefinition
			constexpr auto DrawSfx = 0xA0; // SoundDefinition
			constexpr auto PlaySfx = 0xA8; // SoundDefinition
			constexpr auto ShuffleSfx = 0xB0; // SoundDefinition
			constexpr auto WinSfx = 0xB8; // SoundDefinition
			constexpr auto LoseSfx = 0xC0; // SoundDefinition
			constexpr auto YourTurnSfx = 0xC8; // SoundDefinition
			constexpr auto CheckSfx = 0xD0; // SoundDefinition
			constexpr auto HitSfx = 0xD8; // SoundDefinition
			constexpr auto StandSfx = 0xE0; // SoundDefinition
			constexpr auto BetSfx = 0xE8; // SoundDefinition
			constexpr auto IncreaseBetSfx = 0xF0; // SoundDefinition
			constexpr auto DecreaseBetSfx = 0xF8; // SoundDefinition
			constexpr auto AllInSfx = 0x100; // SoundDefinition
			constexpr auto UIInteractSfx = 0x108; // SoundDefinition
			constexpr auto DealerCoolSfx = 0x110; // SoundDefinition
			constexpr auto DealerHappySfx = 0x118; // SoundDefinition
			constexpr auto DealerLoveSfx = 0x120; // SoundDefinition
			constexpr auto DealerSadSfx = 0x128; // SoundDefinition
			constexpr auto DealerShockedSfx = 0x130; // SoundDefinition
		}
		namespace CardTableSeat
		{
			constexpr auto CardsMesh = 0x350; // Transform
			constexpr auto table = 0x358; // CardTable
			constexpr auto boneTarget = 0x360; // Transform
			constexpr auto wasShowingCards = 0x368; // bool
		}
		namespace PlayingCardsViewmodel
		{
			constexpr auto cardUICanvas = 0x18; // Canvas
			constexpr auto cardA = 0x20; // Image
			constexpr auto cardB = 0x28; // Image
			constexpr auto blankCard = 0x30; // Sprite
		}
		namespace EnvSync
		{
			constexpr auto EngineTimeClient = 0x0; // float
			constexpr auto EngineTimeServer = 0x4; // float
			constexpr auto timeSpan = 0x168; // TimeSpan
		}
		namespace F15
		{
			constexpr auto speed = 0x250; // float
			constexpr auto defaultAltitude = 0x254; // float
			constexpr auto altitude = 0x258; // float
			constexpr auto altitudeLerpSpeed = 0x25C; // float
			constexpr auto turnRate = 0x260; // float
			constexpr auto flybySoundLengthUntilMax = 0x264; // float
			constexpr auto flybySound = 0x268; // SoundPlayer
			constexpr auto body = 0x270; // GameObject
			constexpr auto rollSpeed = 0x278; // float
			constexpr auto movePosition = 0x27C; // Vector3
			constexpr auto missilePrefab = 0x288; // GameObjectRef
			constexpr auto lastDistFromCamera = 0x290; // float
			constexpr auto nextFlybyTime = 0x294; // float
		}
		namespace LootContainer
		{
			constexpr auto destroyOnEmpty = 0x418; // bool
			constexpr auto lootDefinition = 0x420; // LootSpawn
			constexpr auto maxDefinitionsToSpawn = 0x428; // int32_t
			constexpr auto minSecondsBetweenRefresh = 0x42C; // float
			constexpr auto maxSecondsBetweenRefresh = 0x430; // float
			constexpr auto initialLootSpawn = 0x434; // bool
			constexpr auto xpLootedScale = 0x438; // float
			constexpr auto xpDestroyedScale = 0x43C; // float
			constexpr auto BlockPlayerItemInput = 0x440; // bool
			constexpr auto scrapAmount = 0x444; // int32_t
			constexpr auto deathStat = 0x448; // string
			constexpr auto LootSpawnSlots = 0x450; // LootSpawnSlot[]
			constexpr auto SpawnType = 0x458; // spawnType
			constexpr auto localPlayerInvolved = 0x45C; // bool
		}
		namespace m2bradleyAnimator
		{
			constexpr auto m2Animator = 0x18; // Animator
			constexpr auto treadLeftMaterial = 0x20; // Material
			constexpr auto treadRightMaterial = 0x28; // Material
			constexpr auto mainRigidbody = 0x30; // Rigidbody
			constexpr auto turret = 0x38; // Transform
			constexpr auto mainCannon = 0x40; // Transform
			constexpr auto coaxGun = 0x48; // Transform
			constexpr auto rocketsPitch = 0x50; // Transform
			constexpr auto spotLightYaw = 0x58; // Transform
			constexpr auto spotLightPitch = 0x60; // Transform
			constexpr auto sideMG = 0x68; // Transform
			constexpr auto sideguns = 0x70; // Transform[]
			constexpr auto ShocksBones = 0x78; // Transform[]
			constexpr auto ShockTraceLineBegin = 0x80; // Transform[]
			constexpr auto vecShocksOffsetPosition = 0x88; // Vector3[]
			constexpr auto targetTurret = 0x90; // Transform
			constexpr auto targetSpotLight = 0x98; // Transform
			constexpr auto targetSideguns = 0xA0; // Transform[]
			constexpr auto vecTurret = 0xA8; // Vector3
			constexpr auto vecMainCannon = 0xB4; // Vector3
			constexpr auto vecCoaxGun = 0xC0; // Vector3
			constexpr auto vecRocketsPitch = 0xCC; // Vector3
			constexpr auto vecSpotLightBase = 0xD8; // Vector3
			constexpr auto vecSpotLight = 0xE4; // Vector3
			constexpr auto sideMGPitchValue = 0xF0; // float
			constexpr auto muzzleflashCannon = 0xF8; // GameObject
			constexpr auto muzzleflashCoaxGun = 0x100; // GameObject
			constexpr auto muzzleflashSideMG = 0x108; // GameObject
			constexpr auto muzzleflashRockets = 0x110; // GameObject[]
			constexpr auto spotLightHaloSawnpoint = 0x118; // GameObject
			constexpr auto muzzleflashSideguns = 0x120; // GameObject[]
			constexpr auto machineGunMuzzleFlashFX = 0x128; // GameObjectRef
			constexpr auto mainCannonFireFX = 0x130; // GameObjectRef
			constexpr auto rocketLaunchFX = 0x138; // GameObjectRef
			constexpr auto rocketsOpen = 0x140; // bool
			constexpr auto vecSideGunRotation = 0x148; // Vector3[]
			constexpr auto treadConstant = 0x150; // float
			constexpr auto wheelSpinConstant = 0x154; // float
			constexpr auto sidegunsTurnSpeed = 0x158; // float
			constexpr auto turretTurnSpeed = 0x15C; // float
			constexpr auto cannonPitchSpeed = 0x160; // float
			constexpr auto rocketPitchSpeed = 0x164; // float
			constexpr auto spotLightTurnSpeed = 0x168; // float
			constexpr auto machineGunSpeed = 0x16C; // float
			constexpr auto wheelAngle = 0x170; // float
		}
		namespace M2BradleyPhysics
		{
			constexpr auto m2Animator = 0x18; // m2bradleyAnimator
			constexpr auto Wheels = 0x20; // WheelCollider[]
			constexpr auto TurningWheels = 0x28; // WheelCollider[]
			constexpr auto mainRigidbody = 0x30; // Rigidbody
			constexpr auto waypoints = 0x38; // Transform[]
			constexpr auto currentWaypoint = 0x40; // Vector3
			constexpr auto nextWaypoint = 0x4C; // Vector3
		}
		namespace MapMarker
		{
			constexpr auto appType = 0x168; // AppMarkerType
			constexpr auto markerObj = 0x170; // GameObjectRef
			constexpr auto mapMarkers = 0x0; // List`1
		}
		namespace PaintableItem
		{
			constexpr auto PaintableSource = 0x18; // MeshPaintableSource
			constexpr auto LoadedCrc = 0x20; // uint32_t
		}
		namespace AIHelicopterAnimation
		{
			constexpr auto _ai = 0x18; // PatrolHelicopterAI
			constexpr auto swayAmount = 0x20; // float
			constexpr auto lastStrafeScalar = 0x24; // float
			constexpr auto lastForwardBackScalar = 0x28; // float
			constexpr auto degreeMax = 0x2C; // float
			constexpr auto lastPosition = 0x30; // Vector3
			constexpr auto oldMoveSpeed = 0x3C; // float
			constexpr auto smoothRateOfChange = 0x40; // float
			constexpr auto flareAmount = 0x44; // float
		}
		namespace HelicopterDebris
		{
			constexpr auto metalFragments = 0x290; // ItemDefinition
			constexpr auto hqMetal = 0x298; // ItemDefinition
			constexpr auto charcoal = 0x2A0; // ItemDefinition
			constexpr auto massReductionScalar = 0x2A8; // float
		}
		namespace HelicopterTurret
		{
			constexpr auto _heliAI = 0x18; // PatrolHelicopterAI
			constexpr auto fireRate = 0x20; // float
			constexpr auto burstLength = 0x24; // float
			constexpr auto timeBetweenBursts = 0x28; // float
			constexpr auto maxTargetRange = 0x2C; // float
			constexpr auto loseTargetAfter = 0x30; // float
			constexpr auto gun_yaw = 0x38; // Transform
			constexpr auto gun_pitch = 0x40; // Transform
			constexpr auto muzzleTransform = 0x48; // Transform
			constexpr auto left = 0x50; // bool
			constexpr auto _target = 0x58; // BaseCombatEntity
		}
		namespace LockedByEntCrate
		{
			constexpr auto lockingEnt = 0x460; // GameObject
		}
		namespace PatrolHelicopterAI
		{
			constexpr auto interestZoneOrigin = 0x18; // Vector3
			constexpr auto destination = 0x24; // Vector3
			constexpr auto hasInterestZone = 0x30; // bool
			constexpr auto moveSpeed = 0x34; // float
			constexpr auto maxSpeed = 0x38; // float
			constexpr auto courseAdjustLerpTime = 0x3C; // float
			constexpr auto targetRotation = 0x40; // Quaternion
			constexpr auto windVec = 0x50; // Vector3
			constexpr auto targetWindVec = 0x5C; // Vector3
			constexpr auto windForce = 0x68; // float
			constexpr auto windFrequency = 0x6C; // float
			constexpr auto targetThrottleSpeed = 0x70; // float
			constexpr auto throttleSpeed = 0x74; // float
			constexpr auto maxRotationSpeed = 0x78; // float
			constexpr auto rotationSpeed = 0x7C; // float
			constexpr auto terrainPushForce = 0x80; // float
			constexpr auto obstaclePushForce = 0x84; // float
			constexpr auto leftGun = 0x88; // HelicopterTurret
			constexpr auto rightGun = 0x90; // HelicopterTurret
			constexpr auto heliInstance = 0x0; // PatrolHelicopterAI
			constexpr auto helicopterBase = 0x98; // BaseHelicopter
			constexpr auto _currentState = 0xA0; // aiState
			constexpr auto _targetList = 0xA8; // List`1
			constexpr auto _visitedMonuments = 0xB0; // List`1
			constexpr auto arrivalTime = 0xB8; // float
			constexpr auto rocketProjectile = 0xC0; // GameObjectRef
			constexpr auto rocketProjectile_Napalm = 0xC8; // GameObjectRef
		}
		namespace ServerGib
		{
			constexpr auto _gibSource = 0x250; // GameObject
			constexpr auto _gibName = 0x258; // string
			constexpr auto physicsMaterial = 0x260; // PhysicMaterial
			constexpr auto useContinuousCollision = 0x268; // bool
			constexpr auto meshCollider = 0x270; // MeshCollider
			constexpr auto meshFilter = 0x278; // MeshFilter
			constexpr auto meshRenderer = 0x280; // MeshRenderer
			constexpr auto initialized = 0x288; // bool
		}
		namespace TimedUnlootableCrate
		{
			constexpr auto unlootableOnSpawn = 0x460; // bool
			constexpr auto unlootableDuration = 0x464; // float
		}
		namespace SmokeGrenade
		{
			constexpr auto smokeDuration = 0x1C0; // float
			constexpr auto smokeEffectPrefab = 0x1C8; // GameObjectRef
			constexpr auto igniteSound = 0x1D0; // GameObjectRef
			constexpr auto soundLoop = 0x1D8; // SoundPlayer
			constexpr auto smokeEffectInstance = 0x1E0; // GameObject
			constexpr auto activeGrenades = 0x0; // List`1
			constexpr auto fieldMin = 0x1E8; // float
			constexpr auto fieldMax = 0x1EC; // float
		}
		namespace SphereEntity
		{
			constexpr auto currentRadius = 0x168; // float
			constexpr auto lerpRadius = 0x16C; // float
			constexpr auto lerpSpeed = 0x170; // float
		}
		namespace StaticRespawnArea
		{
			constexpr auto spawnAreas = 0x4E0; // Transform[]
			constexpr auto allowHostileSpawns = 0x4E8; // bool
		}
		namespace SupplyDrop
		{
			constexpr auto parachutePrefab = 0x460; // GameObjectRef
		}
		namespace SupplySignal
		{
			constexpr auto smokeEffectPrefab = 0x1C0; // GameObjectRef
			constexpr auto EntityToCreate = 0x1C8; // GameObjectRef
			constexpr auto smokeEffect = 0x1D0; // GameObject
		}
		namespace TorpedoServerProjectile
		{
			constexpr auto minWaterDepth = 0x58; // float
			constexpr auto shallowWaterInaccuracy = 0x5C; // float
			constexpr auto deepWaterInaccuracy = 0x60; // float
			constexpr auto shallowWaterCutoff = 0x64; // float
		}
		namespace VendingMachineMapMarker
		{
			constexpr auto markerShopName = 0x178; // string
			constexpr auto server_vendingMachine = 0x180; // VendingMachine
			constexpr auto client_vendingMachine = 0x188; // VendingMachine
			constexpr auto client_vendingMachineNetworkID = 0x190; // NetworkableId
			constexpr auto clusterMarkerObj = 0x198; // GameObjectRef
		}
		namespace VisualStorageContainer
		{
			constexpr auto displayNodes = 0x460; // VisualStorageContainerNode[]
			constexpr auto displayModels = 0x468; // DisplayModel[]
			constexpr auto nodeParent = 0x470; // Transform
			constexpr auto defaultDisplayModel = 0x478; // GameObject
		}
		namespace WaterBall
		{
			constexpr auto liquidType = 0x168; // ItemDefinition
			constexpr auto waterAmount = 0x170; // int32_t
			constexpr auto waterExplosion = 0x178; // GameObjectRef
			constexpr auto myRigidBody = 0x180; // Rigidbody
		}
		namespace WhitelistLootContainer
		{
			constexpr auto CantLootToast = 0x0; // Phrase
		}
		namespace WipeTimer
		{
			constexpr auto wipeDayOfWeek = 0x0; // int32_t
			constexpr auto wipeHourOfDay = 0x4; // float
			constexpr auto wipeTimezone = 0x8; // string
			constexpr auto wipeUnixTimestampOverride = 0x10; // Int64
			constexpr auto wipeCronOverride = 0x18; // string
			constexpr auto useWipeDayOverride = 0x168; // bool
			constexpr auto wipeDayOfWeekOverride = 0x16C; // DayOfWeek
			constexpr auto wipeFrequency = 0x170; // WipeFrequency
			constexpr auto daysToAddTest = 0x20; // int32_t
			constexpr auto hoursToAddTest = 0x24; // float
			constexpr auto serverinstance = 0x28; // WipeTimer
			constexpr auto clientinstance = 0x30; // WipeTimer
			constexpr auto client_timeUntilWipe = 0x178; // TimeSpan
		}
		namespace WipeTimerScreen
		{
			constexpr auto timerText = 0x18; // Text
			constexpr auto lastTime = 0x20; // TimeSpan
		}
		namespace BaseModifiers
		{
			constexpr auto All = 0x0; // List`1
			constexpr auto totalValues = 0x0; // Dictionary`2
			constexpr auto modifierVariables = 0x0; // Dictionary`2
			constexpr auto owner = 0x0; // T
			constexpr auto dirty = 0x0; // bool
		}
		namespace ModifierDefintion
		{
			constexpr auto type = 0x10; // ModifierType
			constexpr auto source = 0x14; // ModifierSource
			constexpr auto value = 0x18; // float
			constexpr auto duration = 0x1C; // float
		}
		namespace Modifier
		{
			constexpr auto Typek__BackingField = 0x10; // ModifierType
			constexpr auto Sourcek__BackingField = 0x14; // ModifierSource
			constexpr auto Valuek__BackingField = 0x18; // float
			constexpr auto Durationk__BackingField = 0x1C; // float
			constexpr auto TimeRemainingk__BackingField = 0x20; // float
			constexpr auto Expiredk__BackingField = 0x24; // bool
			constexpr auto lastClientUpdateTimestamp = 0x28; // float
		}
		namespace ProjectileWeaponMod
		{
			constexpr auto defaultSilencerEffect = 0x168; // GameObjectRef
			constexpr auto isSilencer = 0x170; // bool
			constexpr auto repeatDelay = 0x174; // Modifier
			constexpr auto projectileVelocity = 0x180; // Modifier
			constexpr auto projectileDamage = 0x18C; // Modifier
			constexpr auto projectileDistance = 0x198; // Modifier
			constexpr auto aimsway = 0x1A4; // Modifier
			constexpr auto aimswaySpeed = 0x1B0; // Modifier
			constexpr auto recoil = 0x1BC; // Modifier
			constexpr auto sightAimCone = 0x1C8; // Modifier
			constexpr auto hipAimCone = 0x1D4; // Modifier
			constexpr auto isLight = 0x1E0; // bool
			constexpr auto isMuzzleBrake = 0x1E1; // bool
			constexpr auto isMuzzleBoost = 0x1E2; // bool
			constexpr auto isScope = 0x1E3; // bool
			constexpr auto zoomAmountDisplayOnly = 0x1E4; // float
			constexpr auto magazineCapacity = 0x1E8; // Modifier
			constexpr auto needsOnForEffects = 0x1F4; // bool
			constexpr auto burstCount = 0x1F8; // int32_t
			constexpr auto timeBetweenBursts = 0x1FC; // float
		}
		namespace ExcavatorEffects
		{
			constexpr auto instance = 0x0; // ExcavatorEffects
			constexpr auto miningParticles = 0x18; // ParticleSystemContainer[]
			constexpr auto miningSounds = 0x20; // SoundPlayer[]
			constexpr auto beltSounds = 0x28; // SoundFollowCollider[]
			constexpr auto miningStartSounds = 0x30; // SoundPlayer[]
			constexpr auto ambientMetalRattles = 0x38; // GameObject[]
			constexpr auto wasMining = 0x40; // bool
		}
		namespace ExcavatorEngineSounds
		{
			constexpr auto engineStartClunks = 0x18; // SoundPlayer[]
		}
		namespace ExcavatorServerEffects
		{
			constexpr auto instance = 0x0; // ExcavatorServerEffects
			constexpr auto miningTriggers = 0x18; // TriggerBase[]
		}
		namespace ExcavatorYawSounds
		{
			constexpr auto miningStartClunks = 0x18; // SoundPlayer[]
		}
		namespace LargeShredder
		{
			constexpr auto shredRail = 0x168; // Transform
			constexpr auto shredRailStartPos = 0x170; // Transform
			constexpr auto shredRailEndPos = 0x178; // Transform
			constexpr auto shredRailStartRotation = 0x180; // Vector3
			constexpr auto shredRailEndRotation = 0x18C; // Vector3
			constexpr auto trigger = 0x198; // LargeShredderTrigger
			constexpr auto shredDurationRotation = 0x1A0; // float
			constexpr auto shredDurationPosition = 0x1A4; // float
			constexpr auto shredSwayAmount = 0x1A8; // float
			constexpr auto shredSwaySpeed = 0x1AC; // float
			constexpr auto currentlyShredding = 0x1B0; // BaseEntity
			constexpr auto shreddingWheels = 0x1B8; // GameObject[]
			constexpr auto shredRotorSpeed = 0x1C0; // float
			constexpr auto shredSoundEffect = 0x1C8; // GameObjectRef
			constexpr auto resourceSpawnPoint = 0x1D0; // Transform
			constexpr auto entryRotation = 0x1D8; // Quaternion
		}
		namespace LargeShredderTrigger
		{
			constexpr auto shredder = 0x30; // LargeShredder
		}
		namespace LightListener
		{
			constexpr auto onMessage = 0x168; // string
			constexpr auto offMessage = 0x170; // string
			constexpr auto onLights = 0x178; // LightGroupAtTime
			constexpr auto offLights = 0x180; // LightGroupAtTime
		}
		namespace LifeScale
		{
			constexpr auto initialized = 0x18; // bool
			constexpr auto initialScale = 0x1C; // Vector3
			constexpr auto finalScale = 0x28; // Vector3
			constexpr auto targetLerpScale = 0x34; // Vector3
			constexpr auto updateScaleAction = 0x40; // Action
		}
		namespace MaterialColorLerp
		{
			constexpr auto startColor = 0x18; // Color
			constexpr auto endColor = 0x28; // Color
			constexpr auto currentColor = 0x38; // Color
			constexpr auto delta = 0x48; // float
			constexpr auto materialPropertyBlock = 0x0; // MaterialPropertyBlock
			constexpr auto initialized = 0x4C; // bool
			constexpr auto lerpStartTime = 0x50; // float
			constexpr auto cachedRenderers = 0x58; // List`1
		}
		namespace PlantProperties
		{
			constexpr auto Description = 0x18; // Phrase
			constexpr auto Genes = 0x20; // GrowableGeneProperties
			constexpr auto stages = 0x28; // Stage[]
			constexpr auto timeOfDayHappiness = 0x30; // AnimationCurve
			constexpr auto temperatureHappiness = 0x38; // AnimationCurve
			constexpr auto temperatureWaterRequirementMultiplier = 0x40; // AnimationCurve
			constexpr auto fruitVisualScaleCurve = 0x48; // AnimationCurve
			constexpr auto MaxSeasons = 0x50; // int32_t
			constexpr auto WaterIntake = 0x54; // float
			constexpr auto OptimalLightQuality = 0x58; // float
			constexpr auto OptimalWaterQuality = 0x5C; // float
			constexpr auto OptimalGroundQuality = 0x60; // float
			constexpr auto OptimalTemperatureQuality = 0x64; // float
			constexpr auto pickOption = 0x68; // Option
			constexpr auto pickAllOption = 0x88; // Option
			constexpr auto eatOption = 0xA8; // Option
			constexpr auto pickupItem = 0xC8; // ItemDefinition
			constexpr auto cloneOption = 0xD0; // Option
			constexpr auto cloneAllOption = 0xF0; // Option
			constexpr auto removeDyingOption = 0x110; // Option
			constexpr auto removeDyingAllOption = 0x130; // Option
			constexpr auto removeDyingItem = 0x150; // ItemDefinition
			constexpr auto removeDyingEffect = 0x158; // GameObjectRef
			constexpr auto pickupMultiplier = 0x160; // int32_t
			constexpr auto pickEffect = 0x168; // GameObjectRef
			constexpr auto maxHarvests = 0x170; // int32_t
			constexpr auto disappearAfterHarvest = 0x174; // bool
			constexpr auto CrossBreedEffect = 0x178; // GameObjectRef
			constexpr auto SeedItem = 0x180; // ItemDefinition
			constexpr auto CloneItem = 0x188; // ItemDefinition
			constexpr auto BaseCloneCount = 0x190; // int32_t
			constexpr auto BaseMarketValue = 0x194; // int32_t
		}
		namespace PlantSkin
		{
			constexpr auto FruitscaleComponents = 0x18; // List`1
			constexpr auto LifescaleComponents = 0x20; // List`1
		}
		namespace PlatformEntity
		{
			constexpr auto targetPosition = 0x168; // Vector3
			constexpr auto targetRotation = 0x174; // Quaternion
		}
		namespace PlayerAnimationEvents
		{
			constexpr auto player = 0x18; // BasePlayer
		}
		namespace PlayerBelt
		{
			constexpr auto SelectedSlot = 0x0; // int32_t
			constexpr auto player = 0x10; // BasePlayer
		}
		namespace PlayerBlueprints
		{
			constexpr auto steamInventory = 0x20; // SteamInventory
			constexpr auto craftableItems = 0x28; // int32_t[]
		}
		namespace PlayerEyes
		{
			constexpr auto DuckOffset = 0xc;
			constexpr auto CrawlOffset = 0x18;
			constexpr auto thirdPersonSleepingOffset = 0x20;
			constexpr auto defaultLazyAim = 0x30;
			constexpr auto viewOffset = 0x38;
			constexpr auto bodyRotationk__BackingField = 0x44;
			constexpr auto headAnglesk__BackingField = 0x54;
			constexpr auto rotationLookk__BackingField = 0x60;
			constexpr auto IsAltLookingLegsThresholdk__BackingField = 0x70;
		}
		namespace PlayerInput
		{
			constexpr auto state = 0x20; // InputState
			constexpr auto hadInputBuffer = 0x28; // bool
			constexpr auto bodyRotation = 0x2C; // Quaternion
			constexpr auto bodyAngles = 0x3C; // Vector3
			constexpr auto headRotation = 0x48; // Quaternion
			constexpr auto headAngles = 0x58; // Vector3
			constexpr auto recoilAngles = 0x64; // Vector3
			constexpr auto viewDelta = 0x70; // Vector2
			constexpr auto headLerp = 0x78; // float
			constexpr auto mouseWheelUp = 0x7C; // int32_t
			constexpr auto mouseWheelDn = 0x80; // int32_t
			constexpr auto autorun = 0x84; // bool
			constexpr auto toggleDuck = 0x85; // bool
			constexpr auto toggleAds = 0x86; // bool
			constexpr auto lastAdsEntity = 0x88; // NetworkableId
			constexpr auto pendingMouseDelta = 0x90; // Vector3
			constexpr auto offsetAngles = 0x9C; // Vector3
			constexpr auto ignoredButtons = 0xA8; // int32_t
			constexpr auto hasKeyFocus = 0xAC; // bool
		}
		namespace PlayerModel
		{
			constexpr auto speed = 0x0; // int32_t
			constexpr auto acceleration = 0x4; // int32_t
			constexpr auto rotationYaw = 0x8; // int32_t
			constexpr auto forward = 0xC; // int32_t
			constexpr auto right = 0x10; // int32_t
			constexpr auto up = 0x14; // int32_t
			constexpr auto ducked = 0x18; // int32_t
			constexpr auto grounded = 0x1C; // int32_t
			constexpr auto crawling = 0x20; // int32_t
			constexpr auto waterlevel = 0x24; // int32_t
			constexpr auto attack = 0x28; // int32_t
			constexpr auto attack_alt = 0x2C; // int32_t
			constexpr auto deploy = 0x30; // int32_t
			constexpr auto reload = 0x34; // int32_t
			constexpr auto throwWeapon = 0x38; // int32_t
			constexpr auto holster = 0x3C; // int32_t
			constexpr auto aiming = 0x40; // int32_t
			constexpr auto onLadder = 0x44; // int32_t
			constexpr auto posing = 0x48; // int32_t
			constexpr auto poseType = 0x4C; // int32_t
			constexpr auto relaxGunPose = 0x50; // int32_t
			constexpr auto vehicle_aim_yaw = 0x54; // int32_t
			constexpr auto vehicle_aim_speed = 0x58; // int32_t
			constexpr auto onPhone = 0x5C; // int32_t
			constexpr auto usePoseTransition = 0x60; // int32_t
			constexpr auto leftFootIK = 0x64; // int32_t
			constexpr auto rightFootIK = 0x68; // int32_t
			constexpr auto vehicleSteering = 0x6C; // int32_t
			constexpr auto sitReaction = 0x70; // int32_t
			constexpr auto forwardReaction = 0x74; // int32_t
			constexpr auto rightReaction = 0x78; // int32_t
			constexpr auto collision = 0x18; // BoxCollider
			constexpr auto censorshipCube = 0x20; // GameObject
			constexpr auto censorshipCubeBreasts = 0x28; // GameObject
			constexpr auto jawBone = 0x30; // GameObject
			constexpr auto neckBone = 0x38; // GameObject
			constexpr auto headBone = 0x40; // GameObject
			constexpr auto eyeController = 0x48; // EyeController
			constexpr auto blinkController = 0x50; // EyeBlink
			constexpr auto SpineBones = 0x58; // Transform[]
			constexpr auto leftFootBone = 0x60; // Transform
			constexpr auto rightFootBone = 0x68; // Transform
			constexpr auto leftHandPropBone = 0x70; // Transform
			constexpr auto rightHandPropBone = 0x78; // Transform
			constexpr auto rightHandTarget = 0x80; // Vector3
			constexpr auto leftHandTargetPosition = 0x8C; // Vector3
			constexpr auto leftHandTargetRotation = 0x98; // Quaternion
			constexpr auto rightHandTargetPosition = 0xA8; // Vector3
			constexpr auto rightHandTargetRotation = 0xB4; // Quaternion
			constexpr auto steeringTargetDegrees = 0xC4; // float
			constexpr auto rightFootTargetPosition = 0xC8; // Vector3
			constexpr auto rightFootTargetRotation = 0xD4; // Quaternion
			constexpr auto leftFootTargetPosition = 0xE4; // Vector3
			constexpr auto leftFootTargetRotation = 0xF0; // Quaternion
			constexpr auto CinematicAnimationController = 0x100; // RuntimeAnimatorController
			constexpr auto DefaultAvatar = 0x108; // Avatar
			constexpr auto CinematicAvatar = 0x110; // Avatar
			constexpr auto DefaultHoldType = 0x118; // RuntimeAnimatorController
			constexpr auto SleepGesture = 0x120; // RuntimeAnimatorController
			constexpr auto CrawlToIncapacitatedGesture = 0x128; // RuntimeAnimatorController
			constexpr auto StandToIncapacitatedGesture = 0x130; // RuntimeAnimatorController
			constexpr auto CurrentGesture = 0x138; // RuntimeAnimatorController
			constexpr auto MaleSkin = 0x140; // SkinSetCollection
			constexpr auto FemaleSkin = 0x148; // SkinSetCollection
			constexpr auto subsurfaceProfile = 0x150; // SubsurfaceProfile
			constexpr auto voiceVolume = 0x158; // float
			constexpr auto skinColor = 0x15C; // float
			constexpr auto skinNumber = 0x160; // float
			constexpr auto meshNumber = 0x164; // float
			constexpr auto hairNumber = 0x168; // float
			constexpr auto skinType = 0x16C; // int32_t
			constexpr auto movementSounds = 0x170; // MovementSounds
			constexpr auto showSash = 0x178; // bool
			constexpr auto tempPoseType = 0x17C; // int32_t
			constexpr auto underwearSkin = 0x180; // uint32_t
			constexpr auto overrideSkinSeedk__BackingField = 0x188; // UInt64
			constexpr auto AimAnglesk__BackingField = 0x190; // Quaternion
			constexpr auto LookAnglesk__BackingField = 0x1A0; // Quaternion
			constexpr auto modelState = 0x1B0; // ModelState
			constexpr auto position = 0x1B8; // Vector3
			constexpr auto velocity = 0x1C4; // Vector3
			constexpr auto speedOverride = 0x1D0; // Vector3
			constexpr auto newVelocity = 0x1DC; // Vector3
			constexpr auto rotation = 0x1E8; // Quaternion
			constexpr auto mountedRotation = 0x1F8; // Quaternion
			constexpr auto smoothLeftFootIK = 0x208; // Vector3
			constexpr auto smoothRightFootIK = 0x214; // Vector3
			constexpr auto drawShadowOnly = 0x220; // bool
			constexpr auto isIncapacitated = 0x221; // bool
			constexpr auto flinchLocation = 0x224; // uint32_t
			constexpr auto visible = 0x228; // bool
			constexpr auto nameTag = 0x230; // PlayerNameTag
			constexpr auto animatorNeedsWarmup = 0x238; // bool
			constexpr auto isLocalPlayer = 0x239; // bool
			constexpr auto aimSoundDef = 0x240; // SoundDefinition
			constexpr auto aimEndSoundDef = 0x248; // SoundDefinition
			constexpr auto InGesture = 0x250; // bool
			constexpr auto CurrentGestureConfig = 0x258; // GestureConfig
			constexpr auto InCinematic = 0x260; // bool
			constexpr auto defaultAnimatorController = 0x268; // RuntimeAnimatorController
			constexpr auto _multiMesh = 0x270; // SkinnedMultiMesh
			constexpr auto _animator = 0x278; // Animator
			constexpr auto _lodGroup = 0x280; // LODGroup
			constexpr auto _currentGesture = 0x288; // RuntimeAnimatorController
			constexpr auto holdTypeLock = 0x290; // float
			constexpr auto hasHeldEntity = 0x294; // bool
			constexpr auto wasMountedRightAim = 0x295; // bool
			constexpr auto cachedMask = 0x298; // int32_t
			constexpr auto cachedConstructionMask = 0x29C; // int32_t
			constexpr auto WorkshopHeldEntity = 0x2A0; // HeldEntity
			constexpr auto wasCrawling = 0x2A8; // bool
			constexpr auto mountedSpineLookWeight = 0x2AC; // float
			constexpr auto mountedAnimSpeed = 0x2B0; // float
			constexpr auto preserveBones = 0x2B4; // bool
			constexpr auto downLimitOverride = 0x2B8; // Nullable`1
			constexpr auto blendShapeControllers = 0x2C0; // List`1
			constexpr auto IsNpck__BackingField = 0x2C8; // bool
			constexpr auto timeSinceReactionStart = 0x2CC; // TimeSince
			constexpr auto timeSinceLeftFootTest = 0x2D0; // TimeSince
			constexpr auto cachedLeftFootPos = 0x2D4; // Vector3
			constexpr auto cachedLeftFootNormal = 0x2E0; // Vector3
			constexpr auto timeSinceRightFootTest = 0x2EC; // TimeSince
			constexpr auto cachedRightFootPos = 0x2F0; // Vector3
			constexpr auto cachedRightFootNormal = 0x2FC; // Vector3
			constexpr auto pm_uplimit = 0x7C; // float
			constexpr auto pm_downlimit = 0x80; // float
			constexpr auto pm_upspine = 0x84; // float
			constexpr auto pm_downspine = 0x88; // float
			constexpr auto pm_lookoffset = 0x8C; // Vector3
			constexpr auto pm_anglesmoothspeed = 0x98; // float
			constexpr auto pm_nohold = 0x9C; // float
			constexpr auto pm_ladder = 0xA0; // float
			constexpr auto pm_minweight = 0xA4; // float
			constexpr auto _smoothAimWeight = 0x308; // float
			constexpr auto _smoothVelocity = 0x30C; // float
			constexpr auto _smoothlookAngle = 0x310; // Vector3
			constexpr auto allowMountedHeadLook = 0x31C; // bool
			constexpr auto smoothLookDir = 0x320; // Vector3
			constexpr auto lastSafeLookDir = 0x32C; // Vector3
			constexpr auto Shoulders = 0x338; // Transform[]
			constexpr auto AdditionalSpineBones = 0x340; // Transform[]
			constexpr auto FinishedLegWearables = 0xA8; // HashSet`1
			constexpr auto LegParts = 0x348; // List`1
			constexpr auto fakeSpineBones = 0x350; // Transform[]
			constexpr auto extraLeanBack = 0x358; // float
			constexpr auto drawState = 0x35C; // Nullable`1
			constexpr auto timeInArmsMode = 0x360; // float
		}
		namespace PlayerModelCinematicList
		{
			constexpr auto Animations = 0x98; // PlayerModelCinematicAnimation[]
		}
		namespace PlayerModelReactionEnded
		{
			constexpr auto playerModel = 0x18; // PlayerModel
		}
		namespace PlayerNameTag
		{
			constexpr auto canvasGroup = 0x18; // CanvasGroup
			constexpr auto text = 0x20; // Text
			constexpr auto color = 0x28; // Gradient
			constexpr auto minDistance = 0x30; // float
			constexpr auto maxDistance = 0x34; // float
			constexpr auto positionOffset = 0x38; // Vector3
			constexpr auto parentBone = 0x48; // Transform
			constexpr auto nextUpdateTime = 0x50; // float
			constexpr auto distanceFromCamera = 0x54; // float
			constexpr auto _player = 0x58; // BasePlayer
			constexpr auto lastName = 0x60; // string
		}
		namespace nametags
		{
			constexpr auto enabled = 0x0; // bool
		}
		namespace PlayerVoiceRecorder
		{
			constexpr auto readBuffer = 0x0; // char[]
			constexpr auto readBufferUncompressed = 0x8; // char[]
			constexpr auto timeSinceLastSpeak = 0x20; // RealTimeSince
			constexpr auto timeSinceLastCheck = 0x24; // RealTimeSince
			constexpr auto TalkTimer = 0x28; // Stopwatch
		}
		namespace PlayerVoiceSpeaker
		{
			constexpr auto voiceProcessor = 0x20; // VoiceProcessor
			constexpr auto nextSpeechFakeChange = 0x28; // float
			constexpr auto speechFakeChangeMulti = 0x2C; // float
			constexpr auto isFakingVolume = 0x30; // bool
			constexpr auto fakedVolume = 0x34; // float
			constexpr auto hasAwardedRecordVoicesAchievement = 0x0; // bool
		}
		namespace VoiceProcessor
		{
			constexpr auto mouthSpeaker = 0x18; // AudioSource
			constexpr auto playerSpeaker = 0x20; // PlayerVoiceSpeaker
			constexpr auto volumeMultiplier = 0x28; // float
			constexpr auto optimalRate = 0x2C; // uint32_t
			constexpr auto bufferSize = 0x30; // uint32_t
			constexpr auto buffer = 0x38; // float[]
			constexpr auto dataReceived = 0x40; // uint32_t
			constexpr auto playbackBuffer = 0x44; // uint32_t
			constexpr auto dataPosition = 0x48; // uint32_t
			constexpr auto Initialized = 0x4C; // bool
			constexpr auto currentVolume = 0x50; // float
			constexpr auto subProcessors = 0x58; // List`1
			constexpr auto isPlaying = 0x60; // bool
			constexpr auto stopping = 0x61; // bool
			constexpr auto volumeData = 0x68; // float[]
			constexpr auto volumeVelocity = 0x70; // float
			constexpr auto decompressStream = 0x0; // MemoryStream
		}
		namespace LocalPlayer
		{
			constexpr auto Entityk__BackingField = 0x0; // BasePlayer
			constexpr auto LastAttackerSteamIDk__BackingField = 0x8; // UInt64
			constexpr auto LastAttackerNamek__BackingField = 0x10; // string
			constexpr auto LastDeathTime = 0x18; // float
			constexpr auto CurrentPetCommandDesc = 0x20; // PetCommandDesc
			constexpr auto CraftCounts = 0x50; // Dictionary`2
			constexpr auto ItemBluePrintOrdered = 0x58; // ItemBlueprintComparer
		}
		namespace BaseMovement
		{
			constexpr auto adminCheat = 0x18; // bool
			constexpr auto adminSpeed = 0x1C; // float
			constexpr auto Ownerk__BackingField = 0x20; // BasePlayer
			constexpr auto InheritedVelocityk__BackingField = 0x28; // Vector3
			constexpr auto TargetMovementk__BackingField = 0x34; // Vector3
			constexpr auto Runningk__BackingField = 0x40; // float
			constexpr auto Duckingk__BackingField = 0x44; // float
			constexpr auto Crawlingk__BackingField = 0x48; // float
			constexpr auto Groundedk__BackingField = 0x4C; // float
			constexpr auto lastTeleportedTime = 0x50; // float
		}
		namespace PlayerWalkMovement
		{
			constexpr auto zeroFrictionMaterial = 0x58; // PhysicMaterial
			constexpr auto highFrictionMaterial = 0x60; // PhysicMaterial
			constexpr auto capsuleHeight = 0x68; // float
			constexpr auto capsuleCenter = 0x6C; // float
			constexpr auto capsuleHeightDucked = 0x70; // float
			constexpr auto capsuleCenterDucked = 0x74; // float
			constexpr auto capsuleHeightCrawling = 0x78; // float
			constexpr auto capsuleCenterCrawling = 0x7C; // float
			constexpr auto gravityTestRadius = 0x80; // float
			constexpr auto gravityMultiplier = 0x84; // float
			constexpr auto gravityMultiplierSwimming = 0x88; // float
			constexpr auto maxAngleWalking = 0x8C; // float
			constexpr auto maxAngleClimbing = 0x90; // float
			constexpr auto maxAngleSliding = 0x94; // float
			constexpr auto maxStepHeight = 0x98; // float
			constexpr auto body = 0xA0; // Rigidbody
			constexpr auto initialColDetectionMode = 0xA8; // CollisionDetectionMode
			constexpr auto capsule = 0xB0; // CapsuleCollider
			constexpr auto ladder = 0xB8; // TriggerLadder
			constexpr auto maxVelocity = 0xC0; // float
			constexpr auto groundAngle = 0xC4; // float
			constexpr auto groundAngleNew = 0xC8; // float
			constexpr auto groundTime = 0xCC; // float
			constexpr auto jumpTime = 0xD0; // float
			constexpr auto landTime = 0xD4; // float
			constexpr auto previousPosition = 0xD8; // Vector3
			constexpr auto previousVelocity = 0xE4; // Vector3
			constexpr auto previousInheritedVelocity = 0xF0; // Vector3
			constexpr auto groundNormal = 0xFC; // Vector3
			constexpr auto groundNormalNew = 0x108; // Vector3
			constexpr auto groundVelocity = 0x114; // Vector3
			constexpr auto groundVelocityNew = 0x120; // Vector3
			constexpr auto nextSprintTime = 0x12C; // float
			constexpr auto lastSprintTime = 0x130; // float
			constexpr auto sprintForced = 0x134; // bool
			constexpr auto attemptedMountTime = 0x138; // TimeSince
			constexpr auto modify = 0x13C; // MovementModify
			constexpr auto grounded = 0x140; // bool
			constexpr auto climbing = 0x141; // bool
			constexpr auto sliding = 0x142; // bool
			constexpr auto swimming = 0x143; // bool
			constexpr auto wasSwimming = 0x144; // bool
			constexpr auto jumping = 0x145; // bool
			constexpr auto wasJumping = 0x146; // bool
			constexpr auto falling = 0x147; // bool
			constexpr auto wasFalling = 0x148; // bool
			constexpr auto flying = 0x149; // bool
			constexpr auto wasFlying = 0x14A; // bool
			constexpr auto forcedDuckDelta = 0x14C; // float
		}
		namespace PlayerCorpse
		{
			constexpr auto buoyancy = 0x300; // Buoyancy
			constexpr auto underwearSkin = 0x308; // uint32_t
			constexpr auto clientClothing = 0x310; // ItemContainer
			constexpr auto lastClothes = 0x318; // uint32_t
		}
		namespace PropSway
		{
			constexpr auto pivotRotator = 0x18; // Transform
			constexpr auto swaySpeed = 0x20; // float
			constexpr auto swayDistance = 0x24; // float
			constexpr auto lerpSpeed = 0x28; // float
			constexpr auto lookupIndex = 0x2C; // float
		}
		namespace BushEntity
		{
			constexpr auto prefab = 0x168; // GameObjectRef
			constexpr auto globalBillboard = 0x170; // bool
		}
		namespace RandomItemDispenser
		{
			constexpr auto Chances = 0x98; // RandomItemChance[]
			constexpr auto OnlyAwardOne = 0xA0; // bool
		}
		namespace ResourceEntity
		{
			constexpr auto startHealth = 0x168; // float
			constexpr auto baseProtection = 0x170; // ProtectionProperties
			constexpr auto health = 0x178; // float
			constexpr auto isKilled = 0x17C; // bool
		}
		namespace TreeMarkerData
		{
			constexpr auto GenerationArcs = 0x98; // GenerationArc[]
			constexpr auto Markers = 0xA0; // MarkerLocation[]
			constexpr auto GenerationStartPoint = 0xA8; // Vector3
			constexpr auto GenerationRadius = 0xB4; // float
			constexpr auto MaxY = 0xB8; // float
			constexpr auto MinY = 0xBC; // float
			constexpr auto ProcessAngleChecks = 0xC0; // bool
		}
		namespace SeasonalTimedExplosive
		{
			constexpr auto randomRenderer = 0x1C0; // RandomRendererEnable
		}
		namespace ServerProjectile
		{
			constexpr auto initialVelocity = 0x20; // Vector3
			constexpr auto drag = 0x2C; // float
			constexpr auto gravityModifier = 0x30; // float
			constexpr auto speed = 0x34; // float
			constexpr auto scanRange = 0x38; // float
			constexpr auto swimScale = 0x3C; // Vector3
			constexpr auto swimSpeed = 0x48; // Vector3
			constexpr auto radius = 0x54; // float
		}
		namespace StabilityEntity
		{
			constexpr auto grounded = 0x270; // bool
			constexpr auto cachedStability = 0x274; // float
			constexpr auto cachedDistanceFromGround = 0x278; // int32_t
		}
		namespace TimedExplosive
		{
			constexpr auto timerAmountMin = 0x168; // float
			constexpr auto timerAmountMax = 0x16C; // float
			constexpr auto minExplosionRadius = 0x170; // float
			constexpr auto explosionRadius = 0x174; // float
			constexpr auto explodeOnContact = 0x178; // bool
			constexpr auto canStick = 0x179; // bool
			constexpr auto onlyDamageParent = 0x17A; // bool
			constexpr auto BlindAI = 0x17B; // bool
			constexpr auto aiBlindDuration = 0x17C; // float
			constexpr auto aiBlindRange = 0x180; // float
			constexpr auto explosionEffect = 0x188; // GameObjectRef
			constexpr auto underwaterExplosionEffect = 0x190; // GameObjectRef
			constexpr auto stickEffect = 0x198; // GameObjectRef
			constexpr auto bounceEffect = 0x1A0; // GameObjectRef
			constexpr auto explosionUsesForward = 0x1A8; // bool
			constexpr auto waterCausesExplosion = 0x1A9; // bool
			constexpr auto damageTypes = 0x1B0; // List`1
			constexpr auto lastBounceTime = 0x1B8; // float
		}
		namespace BaseTrapTrigger
		{
			constexpr auto _trap = 0x30; // BaseTrap
		}
		namespace TrappableWildlife
		{
			constexpr auto worldObject = 0x18; // GameObjectRef
			constexpr auto inventoryObject = 0x20; // ItemDefinition
			constexpr auto minToCatch = 0x28; // int32_t
			constexpr auto maxToCatch = 0x2C; // int32_t
			constexpr auto baitTypes = 0x30; // List`1
			constexpr auto caloriesForInterest = 0x38; // int32_t
			constexpr auto successRate = 0x3C; // float
			constexpr auto xpScale = 0x40; // float
		}
		namespace WildlifeTrap
		{
			constexpr auto tickRate = 0x418; // float
			constexpr auto trappedEffect = 0x420; // GameObjectRef
			constexpr auto trappedEffectRepeatRate = 0x428; // float
			constexpr auto trapSuccessRate = 0x42C; // float
			constexpr auto ignoreBait = 0x430; // List`1
			constexpr auto targetWildlife = 0x438; // List`1
			constexpr auto nextEffectTime = 0x440; // float
		}
		namespace BaseAimable
		{
			constexpr auto aimBase = 0x350; // Transform
		}
		namespace BaseSaddle
		{
			constexpr auto animal = 0x350; // BaseRidableAnimal
		}
		namespace BaseVehicleSeat
		{
			constexpr auto mountedAnimationSpeed = 0x350; // float
			constexpr auto sendClientInputToVehicleParent = 0x354; // bool
			constexpr auto forcePlayerModelUpdate = 0x355; // bool
		}
		namespace BasicCar
		{
			constexpr auto wheels = 0x400; // VehicleWheel[]
			constexpr auto brakePedal = 0x408; // float
			constexpr auto gasPedal = 0x40C; // float
			constexpr auto steering = 0x410; // float
			constexpr auto centerOfMass = 0x418; // Transform
			constexpr auto steeringWheel = 0x420; // Transform
			constexpr auto motorForceConstant = 0x428; // float
			constexpr auto brakeForceConstant = 0x42C; // float
			constexpr auto GasLerpTime = 0x430; // float
			constexpr auto SteeringLerpTime = 0x434; // float
			constexpr auto driverEye = 0x438; // Transform
			constexpr auto chairRef = 0x440; // GameObjectRef
			constexpr auto chairAnchorTest = 0x448; // Transform
			constexpr auto idleLoopPlayer = 0x450; // SoundPlayer
			constexpr auto engineOffset = 0x458; // Transform
			constexpr auto engineSoundDef = 0x460; // SoundDefinition
			constexpr auto wheelSmoke = 0x468; // SedanWheelSmoke
			constexpr auto shockRestingPosY = 0x470; // float
			constexpr auto shockDistance = 0x474; // float
			constexpr auto traceDistanceNeutralPoint = 0x478; // float
			constexpr auto cachedMask = 0x47C; // int32_t
			constexpr auto averageVelocity = 0x480; // AverageVelocity
			constexpr auto engineSoundLoop = 0x488; // Sound
			constexpr auto engineSoundVolume = 0x490; // Modulator
			constexpr auto engineSoundPitch = 0x498; // Modulator
		}
		namespace Buoyancy
		{
			constexpr auto points = 0x18; // BuoyancyPoint[]
			constexpr auto waterImpacts = 0x20; // GameObjectRef[]
			constexpr auto rigidBody = 0x28; // Rigidbody
			constexpr auto buoyancyScale = 0x30; // float
			constexpr auto doEffects = 0x34; // bool
			constexpr auto flowMovementScale = 0x38; // float
			constexpr auto requiredSubmergedFraction = 0x3C; // float
			constexpr auto useUnderwaterDrag = 0x40; // bool
			constexpr auto underwaterDrag = 0x44; // float
			constexpr auto timeOutOfWaterk__BackingField = 0x48; // float
			constexpr auto SubmergedChanged = 0x50; // Action`1
			constexpr auto forEntity = 0x58; // BaseEntity
			constexpr auto submergedFraction = 0x60; // float
		}
		namespace BuoyancyPoint
		{
			constexpr auto buoyancyForce = 0x18; // float
			constexpr auto size = 0x1C; // float
			constexpr auto waveScale = 0x20; // float
			constexpr auto waveFrequency = 0x24; // float
			constexpr auto doSplashEffects = 0x28; // bool
			constexpr auto randomOffset = 0x2C; // float
			constexpr auto wasSubmergedLastFrame = 0x30; // bool
			constexpr auto nexSplashTime = 0x34; // float
			constexpr auto gizmoColour = 0x0; // Color
		}
		namespace KayakSeat
		{
			constexpr auto PaddleItem = 0x358; // ItemDefinition
		}
		namespace RHIBAIController
		{
			constexpr auto nodes = 0x18; // List`1
		}
		namespace CarSettings
		{
			constexpr auto rollingResistance = 0x10; // float
			constexpr auto antiRoll = 0x14; // float
			constexpr auto canSleep = 0x18; // bool
			constexpr auto tankSteering = 0x19; // bool
			constexpr auto maxSteerAngle = 0x1C; // float
			constexpr auto steeringAssist = 0x20; // bool
			constexpr auto steeringAssistRatio = 0x24; // float
			constexpr auto steeringLimit = 0x28; // bool
			constexpr auto minSteerLimitAngle = 0x2C; // float
			constexpr auto minSteerLimitSpeed = 0x30; // float
			constexpr auto rearWheelSteer = 0x34; // float
			constexpr auto steerMinLerpSpeed = 0x38; // float
			constexpr auto steerMaxLerpSpeed = 0x3C; // float
			constexpr auto steerReturnLerpSpeed = 0x40; // float
			constexpr auto maxDriveSlip = 0x44; // float
			constexpr auto driveForceToMaxSlip = 0x48; // float
			constexpr auto reversePercentSpeed = 0x4C; // float
			constexpr auto brakeForceMultiplier = 0x50; // float
			constexpr auto handlingBias = 0x54; // float
		}
		namespace CarWheel
		{
			constexpr auto wheelCollider = 0x10; // WheelCollider
			constexpr auto tyreFriction = 0x18; // float
			constexpr auto steerWheel = 0x1C; // bool
			constexpr auto brakeWheel = 0x1D; // bool
			constexpr auto powerWheel = 0x1E; // bool
		}
		namespace CrushTrigger
		{
			constexpr auto includeNPCs = 0x40; // bool
			constexpr auto requireCentreBelowPosition = 0x41; // bool
		}
		namespace DamageRenderer
		{
			constexpr auto damageShowingMats = 0x18; // List`1
			constexpr auto maxDamageOpacity = 0x20; // float
			constexpr auto damageShowingRenderers = 0x28; // List`1
			constexpr auto damageShowingGlassRenderers = 0x30; // List`1
			constexpr auto prevHealth = 0x38; // float
			constexpr auto prevIsDead = 0x3C; // bool
			constexpr auto damageColour = 0x40; // Color
			constexpr auto materialPB = 0x0; // MaterialPropertyBlock
			constexpr auto glassMaterialPB = 0x8; // MaterialPropertyBlock
			constexpr auto detailColorID = 0x10; // int32_t
			constexpr auto highlightMaterial = 0x18; // Material
		}
		namespace GroundVehicle
		{
			constexpr auto gvAudio = 0x400; // GroundVehicleAudio
			constexpr auto fuelStoragePrefab = 0x408; // GameObjectRef
			constexpr auto waterloggedPoint = 0x410; // Transform
			constexpr auto collisionEffect = 0x418; // GameObjectRef
			constexpr auto engineStartupTime = 0x420; // float
			constexpr auto minCollisionDamageForce = 0x424; // float
			constexpr auto maxCollisionDamageForce = 0x428; // float
			constexpr auto collisionDamageMultiplier = 0x42C; // float
			constexpr auto Velocityk__BackingField = 0x430; // Vector3
			constexpr auto engineController = 0x440; // VehicleEngineController`1
			constexpr auto runningClientTick = 0x448; // bool
		}
		namespace GroundVehicleAudio
		{
			constexpr auto groundVehicle = 0x18; // GroundVehicle
			constexpr auto engineStartSound = 0x20; // SoundDefinition
			constexpr auto engineStopSound = 0x28; // SoundDefinition
			constexpr auto engineStartFailSound = 0x30; // SoundDefinition
			constexpr auto blendedEngineLoops = 0x38; // BlendedLoopEngineSound
			constexpr auto wheelRatioMultiplier = 0x40; // float
			constexpr auto waterSplashSoundDef = 0x48; // SoundDefinition
			constexpr auto waterLoops = 0x50; // BlendedSoundLoops
			constexpr auto waterSoundsMaxSpeed = 0x58; // float
			constexpr auto brakeSoundDef = 0x60; // SoundDefinition
			constexpr auto lightsToggleSound = 0x68; // SoundDefinition
			constexpr auto CameraDistancek__BackingField = 0x70; // float
			constexpr auto inWaterk__BackingField = 0x74; // bool
			constexpr auto brakeSound = 0x78; // Sound
			constexpr auto wasInWater = 0x80; // bool
			constexpr auto engineRpmk__BackingField = 0x84; // float
			constexpr auto engineRpmDamp = 0x88; // float
			constexpr auto wheelsRpm = 0x8C; // float
			constexpr auto gear = 0x90; // int32_t
			constexpr auto prevGear = 0x94; // int32_t
		}
		namespace CH47DropZone
		{
			constexpr auto lastDropTime = 0x18; // float
			constexpr auto dropZones = 0x0; // List`1
		}
		namespace CH47Helicopter
		{
			constexpr auto mapMarkerEntityPrefab = 0x528; // GameObjectRef
		}
		namespace CH47HelicopterAIController
		{
			constexpr auto scientistPrefab = 0x530; // GameObjectRef
			constexpr auto dismountablePrefab = 0x538; // GameObjectRef
			constexpr auto weakDismountablePrefab = 0x540; // GameObjectRef
			constexpr auto maxTiltAngle = 0x548; // float
			constexpr auto AiAltitudeForce = 0x54C; // float
			constexpr auto lockedCratePrefab = 0x550; // GameObjectRef
			constexpr auto triggerHurt = 0x558; // GameObject
			constexpr auto landingTarget = 0x560; // Vector3
		}
		namespace CH47LandingZone
		{
			constexpr auto lastDropTime = 0x18; // float
			constexpr auto landingZones = 0x0; // List`1
			constexpr auto dropoffScale = 0x1C; // float
		}
		namespace CH47PathFinder
		{
			constexpr auto visitedPatrolPoints = 0x20; // List`1
		}
		namespace CH47ReinforcementListener
		{
			constexpr auto listenString = 0x168; // string
			constexpr auto heliPrefab = 0x170; // GameObjectRef
			constexpr auto startDist = 0x178; // float
		}
		namespace BaseMagnet
		{
			constexpr auto entityOwner = 0x18; // BaseEntity
			constexpr auto magnetFlag = 0x20; // Flags
			constexpr auto magnetTrigger = 0x28; // TriggerMagnet
			constexpr auto fixedJoint = 0x30; // FixedJoint
			constexpr auto kinematicAttachmentBody = 0x38; // Rigidbody
			constexpr auto magnetForce = 0x40; // float
			constexpr auto attachDepthPoint = 0x48; // Transform
			constexpr auto attachEffect = 0x50; // GameObjectRef
			constexpr auto isMagnetOn = 0x58; // bool
			constexpr auto colliderSource = 0x60; // GameObject
		}
		namespace MagnetCraneAudio
		{
			constexpr auto crane = 0x18; // MagnetCrane
			constexpr auto engineStartSoundDef = 0x20; // SoundDefinition
			constexpr auto engineStopSoundDef = 0x28; // SoundDefinition
			constexpr auto engineLoops = 0x30; // BlendedLoopEngineSound
			constexpr auto cabinRotationStartDef = 0x38; // SoundDefinition
			constexpr auto cabinRotationStopDef = 0x40; // SoundDefinition
			constexpr auto cabinRotationLoopDef = 0x48; // SoundDefinition
			constexpr auto cabinRotationLoop = 0x50; // Sound
			constexpr auto turningLoopDef = 0x58; // SoundDefinition
			constexpr auto turningLoop = 0x60; // Sound
			constexpr auto trackMovementLoopDef = 0x68; // SoundDefinition
			constexpr auto trackMovementLoop = 0x70; // Sound
			constexpr auto trackGainMod = 0x78; // Modulator
			constexpr auto trackPitchMod = 0x80; // Modulator
			constexpr auto armMovementLoopDef = 0x88; // SoundDefinition
			constexpr auto armMovementStartDef = 0x90; // SoundDefinition
			constexpr auto armMovementStopDef = 0x98; // SoundDefinition
			constexpr auto armMovementLoop01 = 0xA0; // Sound
			constexpr auto armMovementLoop01PitchMod = 0xA8; // Modulator
			constexpr auto arm01SoundPosition = 0xB0; // GameObject
			constexpr auto arm02SoundPosition = 0xB8; // GameObject
			constexpr auto armMovementLoop02 = 0xC0; // Sound
			constexpr auto armMovementLoop02PitchMod = 0xC8; // Modulator
			constexpr auto wasEngineOn = 0xD0; // bool
			constexpr auto lastForward = 0xD4; // Vector3
			constexpr auto lastCabinYaw = 0xE0; // float
			constexpr auto lastArm01 = 0xE4; // float
			constexpr auto lastArm02 = 0xE8; // float
			constexpr auto arm01Speed = 0xEC; // float
			constexpr auto arm02Speed = 0xF0; // float
			constexpr auto cabinYawSpeed = 0xF4; // float
			constexpr auto timeSinceLastCabinSound = 0xF8; // TimeSince
			constexpr auto timeSinceLastArmSound = 0xFC; // TimeSince
		}
		namespace MagnetLiftable
		{
			constexpr auto shredResources = 0x20; // ItemAmount[]
			constexpr auto shredDirection = 0x28; // Vector3
		}
		namespace MapMarkerMLRSRocket
		{
			constexpr auto uiMarkerTransform = 0x178; // RectTransform
		}
		namespace MLRSAmmoIcon
		{
			constexpr auto fill = 0x18; // GameObject
		}
		namespace MLRSAmmoUI
		{
			constexpr auto ammoText = 0x18; // RustText
			constexpr auto ammoIcons = 0x20; // MLRSAmmoIcon[]
			constexpr auto lastSetAmmoCount = 0x28; // int32_t
		}
		namespace MLRSAudio
		{
			constexpr auto mlrs = 0x18; // MLRS
			constexpr auto pitchTransform = 0x20; // Transform
			constexpr auto yawTransform = 0x28; // Transform
			constexpr auto pitchDeltaSmoothRate = 0x30; // float
			constexpr auto yawDeltaSmoothRate = 0x34; // float
			constexpr auto pitchDeltaThreshold = 0x38; // float
			constexpr auto yawDeltaThreshold = 0x3C; // float
			constexpr auto lastPitch = 0x40; // float
			constexpr auto lastYaw = 0x44; // float
			constexpr auto pitchDelta = 0x48; // float
			constexpr auto yawDelta = 0x4C; // float
			constexpr auto turretMovementStartDef = 0x50; // SoundDefinition
			constexpr auto turretMovementLoopDef = 0x58; // SoundDefinition
			constexpr auto turretMovementStopDef = 0x60; // SoundDefinition
			constexpr auto turretMovementLoop = 0x68; // Sound
		}
		namespace MLRSMainUI
		{
			constexpr auto isFullscreen = 0x18; // bool
			constexpr auto noAimingModuleModeGO = 0x20; // GameObject
			constexpr auto activeModeGO = 0x28; // GameObject
			constexpr auto noAimingModuleAmmoUI = 0x30; // MLRSAmmoUI
			constexpr auto activeAmmoUI = 0x38; // MLRSAmmoUI
			constexpr auto velocityUI = 0x40; // MLRSVelocityUI
			constexpr auto titleText = 0x48; // RustText
			constexpr auto usernameText = 0x50; // RustText
			constexpr auto readyStatus = 0x58; // TokenisedPhrase
			constexpr auto realigningStatus = 0x60; // TokenisedPhrase
			constexpr auto firingStatus = 0x68; // TokenisedPhrase
			constexpr auto statusText = 0x70; // RustText
			constexpr auto mapView = 0x78; // MapView
			constexpr auto mapScrollRect = 0x80; // ScrollRectEx
			constexpr auto mapScrollRectZoom = 0x88; // ScrollRectZoom
			constexpr auto mapBaseRect = 0x90; // RectTransform
			constexpr auto minRangeCircle = 0x98; // RectTransform
			constexpr auto targetAimRect = 0xA0; // RectTransform
			constexpr auto trueAimRect = 0xA8; // RectTransform
			constexpr auto connectingLine = 0xB0; // UILineRenderer
			constexpr auto noTargetCirclePrefab = 0xB8; // GameObject
			constexpr auto noTargetCircleParent = 0xC0; // Transform
			constexpr auto changeTargetSoundDef = 0xC8; // SoundDefinition
			constexpr auto readyToFireSoundDef = 0xD0; // SoundDefinition
			constexpr auto mlrs = 0xD8; // MLRS
			constexpr auto curAmmoUI = 0xE0; // MLRSAmmoUI
			constexpr auto hadAimingModule = 0xE8; // Nullable`1
			constexpr auto world2MapScale = 0xEC; // float
			constexpr auto mouseStartPos = 0xF0; // Vector3
			constexpr auto wasReadyToFire = 0xFC; // bool
			constexpr auto lastReadyToFireSoundPlayed = 0x100; // float
			constexpr auto readyToFireSoundInterval = 0x104; // float
		}
		namespace MLRSRocket
		{
			constexpr auto mapMarkerPrefab = 0x1C0; // GameObjectRef
			constexpr auto launchBlastFXPrefab = 0x1C8; // GameObjectRef
			constexpr auto explosionGroundFXPrefab = 0x1D0; // GameObjectRef
			constexpr auto serverProjectile = 0x1D8; // ServerProjectile
		}
		namespace MLRSUIDialog
		{
			constexpr auto mainUI = 0x30; // MLRSMainUI
			constexpr auto howToUsePhrase = 0x38; // TokenisedPhrase
			constexpr auto titleChangeInterval = 0x40; // float
			constexpr auto owner = 0x48; // MLRS
			constexpr auto baseTitleText = 0x50; // string
		}
		namespace MLRSVelocityUI
		{
			constexpr auto percentText = 0x18; // RustText
			constexpr auto percentBar = 0x20; // HudElement
			constexpr auto lastSetPercent = 0x28; // float
		}
		namespace EngineAudioSet
		{
			constexpr auto engineAudioLoops = 0x18; // BlendedEngineLoopDefinition[]
			constexpr auto priority = 0x20; // int32_t
			constexpr auto idleVolume = 0x24; // float
			constexpr auto maxVolume = 0x28; // float
			constexpr auto volumeChangeRateUp = 0x2C; // float
			constexpr auto volumeChangeRateDown = 0x30; // float
			constexpr auto idlePitch = 0x34; // float
			constexpr auto maxPitch = 0x38; // float
			constexpr auto idleRpm = 0x3C; // float
			constexpr auto gearUpRpm = 0x40; // float
			constexpr auto gearDownRpm = 0x44; // float
			constexpr auto numGears = 0x48; // int32_t
			constexpr auto maxRpm = 0x4C; // float
			constexpr auto gearUpRpmRate = 0x50; // float
			constexpr auto gearDownRpmRate = 0x54; // float
			constexpr auto badPerformanceLoop = 0x58; // SoundDefinition
		}
		namespace GlassPane
		{
			constexpr auto glassRendereer = 0x18; // Renderer
			constexpr auto module = 0x20; // BaseVehicleModule
			constexpr auto showFullDamageAt = 0x28; // float
			constexpr auto detailAmountID = 0x0; // int32_t
		}
		namespace MagnetSnap
		{
			constexpr auto snapLocation = 0x10; // Transform
			constexpr auto prevSnapLocation = 0x18; // Vector3
		}
		namespace ModularCarCentralLockingSwitch
		{
			constexpr auto centralLockingSwitch = 0x28; // Transform
			constexpr auto switchOffPos = 0x30; // Vector3
			constexpr auto switchOnPos = 0x3C; // Vector3
		}
		namespace ModularCarChassisVisuals
		{
			constexpr auto frontAxle = 0x30; // Transform
			constexpr auto rearAxle = 0x38; // Transform
			constexpr auto steering = 0x40; // Steering
			constexpr auto transmission = 0x48; // LookAtTarget
			constexpr auto modularCar = 0x50; // ModularCar
		}
		namespace ModularCarCodeLock
		{
			constexpr auto _clientHasALock = 0x10; // bool
			constexpr auto isServer = 0x11; // bool
			constexpr auto owner = 0x18; // ModularCar
			constexpr auto WhitelistPlayersk__BackingField = 0x20; // List`1
		}
		namespace ModularCarCodeLockVisuals
		{
			constexpr auto lockedVisuals = 0x18; // GameObject
			constexpr auto unlockedVisuals = 0x20; // GameObject
			constexpr auto blockedVisuals = 0x28; // GameObject
			constexpr auto codelockEffectDenied = 0x30; // GameObjectRef
			constexpr auto codelockEffectShock = 0x38; // GameObjectRef
			constexpr auto xOffset = 0x40; // float
			constexpr auto keycodeDestroyableFX = 0x48; // ParticleSystemContainer
			constexpr auto shouldShowDestroyableFX = 0x50; // bool
		}
		namespace ModularCarPresetConfig
		{
			constexpr auto socketItemDefs = 0x18; // ItemModVehicleModule[]
		}
		namespace ModularCarSeat
		{
			constexpr auto leftFootIKPos = 0x360; // Vector3
			constexpr auto rightFootIKPos = 0x36C; // Vector3
			constexpr auto leftHandIKPos = 0x378; // Vector3
			constexpr auto rightHandIKPos = 0x384; // Vector3
			constexpr auto providesComfort = 0x390; // float
		}
		namespace ModularVehicleShopFront
		{
			constexpr auto maxUseDistance = 0x438; // float
		}
		namespace CamperSeatConfig
		{
			constexpr auto SeatPositions = 0x18; // Transform[]
			constexpr auto StovePosition = 0x20; // Transform
			constexpr auto StoragePosition = 0x28; // Transform
		}
		namespace VehicleModuleButtonComponent
		{
			constexpr auto interactionColliderName = 0x18; // string
			constexpr auto pressSoundDef = 0x20; // SoundDefinition
		}
		namespace VehicleModuleEngine
		{
			constexpr auto engine = 0x718; // Engine
			constexpr auto IsUsablek__BackingField = 0x720; // bool
			constexpr auto PerformanceFractionAccelerationk__BackingField = 0x724; // float
			constexpr auto PerformanceFractionTopSpeedk__BackingField = 0x728; // float
			constexpr auto PerformanceFractionFuelEconomyk__BackingField = 0x72C; // float
			constexpr auto OverallPerformanceFractionk__BackingField = 0x730; // float
			constexpr auto badPerformanceLoop = 0x738; // Sound
			constexpr auto badPerformancePitchModulator = 0x740; // Modulator
			constexpr auto prevSmokePercent = 0x748; // float
		}
		namespace TakeCollisionDamage
		{
			constexpr auto entity = 0x18; // BaseCombatEntity
			constexpr auto minDamage = 0x20; // float
			constexpr auto maxDamage = 0x24; // float
			constexpr auto forceForAnyDamage = 0x28; // float
			constexpr auto forceForMaxDamage = 0x2C; // float
			constexpr auto velocityRestorePercent = 0x30; // float
		}
		namespace VehicleLight
		{
			constexpr auto IsBrake = 0x18; // bool
			constexpr auto toggleObject = 0x20; // GameObject
			constexpr auto renderers = 0x28; // LightRenderer[]
			constexpr auto lightOnColour = 0x30; // Color
			constexpr auto brakesOnColour = 0x40; // Color
			constexpr auto materialPB = 0x0; // MaterialPropertyBlock
			constexpr auto emissionColorID = 0x8; // int32_t
		}
		namespace MouseSteerableSeat
		{
			constexpr auto supportsMouseSteer = 0x358; // bool
			constexpr auto playerIsMouseSteering = 0x359; // bool
		}
		namespace SnowmobileAudio
		{
			constexpr auto engineAudioSet = 0x98; // EngineAudioSet
			constexpr auto skiGainCurve = 0xA0; // AnimationCurve
			constexpr auto skiSlideSoundDef = 0xA8; // SoundDefinition
			constexpr auto skiSlideSnowSoundDef = 0xB0; // SoundDefinition
			constexpr auto skiSlideSandSoundDef = 0xB8; // SoundDefinition
			constexpr auto skiSlideGrassSoundDef = 0xC0; // SoundDefinition
			constexpr auto skiSlideWaterSoundDef = 0xC8; // SoundDefinition
			constexpr auto movementGainCurve = 0xD0; // AnimationCurve
			constexpr auto movementLoopDef = 0xD8; // SoundDefinition
			constexpr auto suspensionLurchSoundDef = 0xE0; // SoundDefinition
			constexpr auto suspensionLurchMinExtensionDelta = 0xE8; // float
			constexpr auto suspensionLurchMinTimeBetweenSounds = 0xEC; // float
			constexpr auto snowmobile = 0xF0; // Snowmobile
			constexpr auto movementLoop = 0xF8; // Sound
			constexpr auto movementGainMod = 0x100; // Modulator
			constexpr auto prevWheelExtensionPercent = 0x108; // Dictionary`2
			constexpr auto wheelWasGrounded = 0x110; // Dictionary`2
			constexpr auto lastSuspensionSoundPlayed = 0x118; // Dictionary`2
		}
		namespace SnowmobileChassisVisuals
		{
			constexpr auto animator = 0x30; // Animator
			constexpr auto audioScript = 0x38; // SnowmobileAudio
			constexpr auto treadRenderers = 0x40; // TreadRenderer[]
			constexpr auto treadSpeedMultiplier = 0x48; // float
			constexpr auto flipRightSkiExtension = 0x4C; // bool
			constexpr auto leftSki = 0x50; // Transform
			constexpr auto leftSkiPistonIn = 0x58; // Transform
			constexpr auto leftSkiPistonOut = 0x60; // Transform
			constexpr auto rightSki = 0x68; // Transform
			constexpr auto rightSkiPistonIn = 0x70; // Transform
			constexpr auto rightSkiPistonOut = 0x78; // Transform
			constexpr auto skiVisualAdjust = 0x80; // float
			constexpr auto treadVisualAdjust = 0x84; // float
			constexpr auto skiVisualMaxExtension = 0x88; // float
			constexpr auto treadVisualMaxExtension = 0x8C; // float
			constexpr auto wheelSizeVisualMultiplier = 0x90; // float
			constexpr auto treadExtension = 0x94; // float
			constexpr auto treadPrevExtension = 0x98; // float
			constexpr auto snowmobile = 0xA0; // Snowmobile
			constexpr auto treadRotation = 0xA8; // float
			constexpr auto mpb = 0xB0; // MaterialPropertyBlock
			constexpr auto savedST = 0xB8; // Vector4
			constexpr auto animTurn = 0x0; // int32_t
			constexpr auto animSpeedometer = 0x4; // int32_t
			constexpr auto animTachometer = 0x8; // int32_t
			constexpr auto animFuel = 0xC; // int32_t
			constexpr auto animTreadWheels = 0x10; // int32_t
			constexpr auto animNeedleShakeIndex = 0xC8; // int32_t
			constexpr auto animEngineOnIndex = 0xCC; // int32_t
			constexpr auto steerPercent = 0xD0; // float
		}
		namespace SoccerBall
		{
			constexpr auto rigidBody = 0x250; // Rigidbody
			constexpr auto additionalForceMultiplier = 0x258; // float
			constexpr auto upForceMultiplier = 0x25C; // float
			constexpr auto damageRenderer = 0x260; // DamageRenderer
			constexpr auto explosionForceMultiplier = 0x268; // float
			constexpr auto otherForceMultiplier = 0x26C; // float
		}
		namespace SubmarineAudio
		{
			constexpr auto engineStartSound = 0x18; // SoundDefinition
			constexpr auto engineStopSound = 0x20; // SoundDefinition
			constexpr auto engineStartFailSound = 0x28; // SoundDefinition
			constexpr auto engineLoopSound = 0x30; // SoundDefinition
			constexpr auto engineLoopPitchCurve = 0x38; // AnimationCurve
			constexpr auto underwaterLoopDef = 0x40; // SoundDefinition
			constexpr auto underwaterMovementLoopDef = 0x48; // SoundDefinition
			constexpr auto surfaceWaterLoops = 0x50; // BlendedSoundLoops
			constexpr auto surfaceWaterSoundsMaxSpeed = 0x58; // float
			constexpr auto waterEmergeSoundDef = 0x60; // SoundDefinition
			constexpr auto waterSubmergeSoundDef = 0x68; // SoundDefinition
			constexpr auto activeLoopDef = 0x70; // SoundDefinition
			constexpr auto footPedalSoundDef = 0x78; // SoundDefinition
			constexpr auto footPedalSoundPos = 0x80; // Transform
			constexpr auto steeringWheelSoundDef = 0x88; // SoundDefinition
			constexpr auto steeringWheelSoundPos = 0x90; // Transform
			constexpr auto heavyDamageSparksDef = 0x98; // SoundDefinition
			constexpr auto heavyDamageSparksPos = 0xA0; // Transform
			constexpr auto flagRaise = 0xA8; // SoundDefinition
			constexpr auto flagLower = 0xB0; // SoundDefinition
			constexpr auto climbOrDiveLoopSound = 0xB8; // SoundDefinition
			constexpr auto sonarBlipSound = 0xC0; // SoundDefinition
			constexpr auto torpedoFailedSound = 0xC8; // SoundDefinition
			constexpr auto engineLoop = 0xD0; // Sound
			constexpr auto engineLoopPitchMod = 0xD8; // Modulator
			constexpr auto activeLoop = 0xE0; // Sound
			constexpr auto heavyDamageSparksLoop = 0xE8; // Sound
			constexpr auto underwaterLoop = 0xF0; // Sound
			constexpr auto underwaterGainMod = 0xF8; // Modulator
			constexpr auto underwaterMovementLoop = 0x100; // Sound
			constexpr auto underwaterMovementGainMod = 0x108; // Modulator
			constexpr auto climbOrDiveLoop = 0x110; // Sound
			constexpr auto engineSoundMaxDistSqr = 0x118; // float
			constexpr auto previousWaterDepth = 0x11C; // float
			constexpr auto previousRudderInput = 0x120; // float
			constexpr auto previousThrottleInput = 0x124; // float
		}
		namespace EngineDamageOverTime
		{
			constexpr auto recentDamage = 0x10; // List`1
			constexpr auto maxSeconds = 0x18; // float
			constexpr auto triggerDamage = 0x1C; // float
			constexpr auto trigger = 0x20; // Action
		}
		namespace LocomotiveExtraVisuals
		{
			constexpr auto trainEngine = 0x18; // TrainEngine
			constexpr auto needleA = 0x20; // Transform
			constexpr auto needleB = 0x28; // Transform
			constexpr auto needleC = 0x30; // Transform
			constexpr auto maxAngle = 0x38; // float
			constexpr auto speedoMoveSpeed = 0x3C; // float
			constexpr auto pressureMoveSpeed = 0x40; // float
			constexpr auto fanAcceleration = 0x44; // float
			constexpr auto fanMaxSpeed = 0x48; // float
			constexpr auto speedoMax = 0x4C; // float
			constexpr auto engineFans = 0x50; // Transform[]
			constexpr auto _v3 = 0x58; // Vector3
			constexpr auto fanPrevSpeed = 0x64; // float
			constexpr auto fanSpeedVariation = 0x68; // float[]
		}
		namespace TrainBarricade
		{
			constexpr auto trainDamagePerMPS = 0x250; // float
			constexpr auto minVelToDestroy = 0x254; // float
			constexpr auto velReduction = 0x258; // float
			constexpr auto barricadeDamageEffect = 0x260; // GameObjectRef
			constexpr auto nextEffectTime = 0x268; // float
		}
		namespace TrainCarAudio
		{
			constexpr auto trainCar = 0x18; // TrainCar
			constexpr auto movementStartDef = 0x20; // SoundDefinition
			constexpr auto movementStopDef = 0x28; // SoundDefinition
			constexpr auto movementLoopDef = 0x30; // SoundDefinition
			constexpr auto movementLoopGainCurve = 0x38; // AnimationCurve
			constexpr auto movementChangeOneshotDebounce = 0x40; // float
			constexpr auto movementLoop = 0x48; // Sound
			constexpr auto movementLoopGain = 0x50; // Modulator
			constexpr auto turnLoopDef = 0x58; // SoundDefinition
			constexpr auto turnLoop = 0x60; // Sound
			constexpr auto trackClatterLoopDef = 0x68; // SoundDefinition
			constexpr auto trackClatterGainCurve = 0x70; // AnimationCurve
			constexpr auto trackClatterPitchCurve = 0x78; // AnimationCurve
			constexpr auto trackClatterLoop = 0x80; // Sound
			constexpr auto trackClatterGain = 0x88; // Modulator
			constexpr auto trackClatterPitch = 0x90; // Modulator
			constexpr auto lastMovementChangeOneshot = 0x98; // float
		}
		namespace TrainCarFuelHatches
		{
			constexpr auto owner = 0x18; // TrainCar
			constexpr auto animSpeed = 0x20; // float
			constexpr auto hatch1Col = 0x28; // Transform
			constexpr auto hatch1Vis = 0x30; // Transform
			constexpr auto hatch2Col = 0x38; // Transform
			constexpr auto hatch2Vis = 0x40; // Transform
			constexpr auto hatch3Col = 0x48; // Transform
			constexpr auto hatch3Vis = 0x50; // Transform
			constexpr auto hatchOpenSoundDef = 0x58; // SoundDefinition
			constexpr auto hatchCloseSoundDef = 0x60; // SoundDefinition
			constexpr auto _angles = 0x68; // Vector3
			constexpr auto _hatchLerp = 0x74; // float
			constexpr auto opening = 0x78; // bool
			constexpr auto openingQueued = 0x79; // bool
			constexpr auto isMoving = 0x7A; // bool
		}
		namespace TrainCarUnloadableLoot
		{
			constexpr auto lootLayouts = 0x688; // LootCrateSet[]
			constexpr auto lootPositions = 0x690; // Transform[]
		}
		namespace TrainCoupling
		{
			constexpr auto owner = 0x10; // TrainCar
			constexpr auto isFrontCoupling = 0x18; // bool
			constexpr auto controller = 0x20; // TrainCouplingController
			constexpr auto couplingPoint = 0x28; // Transform
			constexpr auto couplingPivot = 0x30; // Transform
			constexpr auto flag = 0x38; // Flags
			constexpr auto isValid = 0x3C; // bool
			constexpr auto clientCoupledTo = 0x40; // EntityRef`1
			constexpr auto clientCoupledToFront = 0x50; // bool
		}
		namespace TrainCouplingController
		{
			constexpr auto PreChangeTrackSpeedk__BackingField = 0x10; // float
			constexpr auto PreChangeCoupledBackwardsk__BackingField = 0x14; // bool
			constexpr auto frontCoupling = 0x18; // TrainCoupling
			constexpr auto rearCoupling = 0x20; // TrainCoupling
			constexpr auto owner = 0x28; // TrainCar
			constexpr auto max_couple_speed = 0x0; // float
		}
		namespace TrainEngineAudio
		{
			constexpr auto trainEngine = 0xA0; // TrainEngine
			constexpr auto cockpitSoundPosition = 0xA8; // Transform
			constexpr auto hornSoundPosition = 0xB0; // Transform
			constexpr auto engineStartSound = 0xB8; // SoundDefinition
			constexpr auto engineStopSound = 0xC0; // SoundDefinition
			constexpr auto engineActiveLoopDef = 0xC8; // SoundDefinition
			constexpr auto engineActiveLoopPitchCurve = 0xD0; // AnimationCurve
			constexpr auto engineActiveLoopChangeSpeed = 0xD8; // float
			constexpr auto engineActiveLoop = 0xE0; // Sound
			constexpr auto engineActiveLoopPitch = 0xE8; // Modulator
			constexpr auto engineLoops = 0xF0; // BlendedLoopEngineSound
			constexpr auto engineReflections = 0xF8; // EngineReflection[]
			constexpr auto reflectionLayerMask = 0x100; // LayerMask
			constexpr auto reflectionMaxDistance = 0x104; // float
			constexpr auto reflectionGainChangeSpeed = 0x108; // float
			constexpr auto reflectionPositionChangeSpeed = 0x10C; // float
			constexpr auto reflectionRayOffset = 0x110; // float
			constexpr auto hornLoop = 0x118; // SoundDefinition
			constexpr auto hornStart = 0x120; // SoundDefinition
			constexpr auto lightsToggleSound = 0x128; // SoundDefinition
			constexpr auto proximityAlertDef = 0x130; // SoundDefinition
			constexpr auto proximityAlertSound = 0x138; // Sound
			constexpr auto damagedLoopDef = 0x140; // SoundDefinition
			constexpr auto damagedLoop = 0x148; // Sound
			constexpr auto changeThrottleDef = 0x150; // SoundDefinition
			constexpr auto changeCouplingDef = 0x158; // SoundDefinition
			constexpr auto unloadableStartDef = 0x160; // SoundDefinition
			constexpr auto unloadableEndDef = 0x168; // SoundDefinition
			constexpr auto bellObject = 0x170; // GameObject
			constexpr auto bellRingDef = 0x178; // SoundDefinition
			constexpr auto brakeSound = 0x180; // SoundPlayer
			constexpr auto engineState = 0x188; // Nullable`1
			constexpr auto activeHorn = 0x190; // Sound
		}
		namespace TrainTrackSpline
		{
			constexpr auto isStation = 0x40; // bool
			constexpr auto aboveGroundSpawn = 0x41; // bool
			constexpr auto hierarchy = 0x44; // int32_t
		}
		namespace TrainWagonLootData
		{
			constexpr auto oreOptions = 0x18; // LootOption[]
			constexpr auto lootWagonContent = 0x20; // LootOption
			constexpr auto fuelWagonContent = 0x28; // LootOption
			constexpr auto instance = 0x0; // TrainWagonLootData
		}
		namespace TriggerTrainCollisions
		{
			constexpr auto triggerCollider = 0x30; // Collider
			constexpr auto location = 0x38; // Location
			constexpr auto owner = 0x40; // TrainCar
			constexpr auto staticContents = 0x48; // HashSet`1
			constexpr auto trainContents = 0x50; // HashSet`1
			constexpr auto otherRigidbodyContents = 0x58; // HashSet`1
			constexpr auto colliderContents = 0x60; // HashSet`1
		}
		namespace VisualCarWheel
		{
			constexpr auto visualWheel = 0x20; // Transform
			constexpr auto visualWheelSteering = 0x28; // Transform
			constexpr auto visualPowerWheel = 0x30; // bool
			constexpr auto snowFX = 0x38; // ParticleSystem
			constexpr auto sandFX = 0x40; // ParticleSystem
			constexpr auto dirtFX = 0x48; // ParticleSystem
			constexpr auto asphaltFX = 0x50; // ParticleSystem
			constexpr auto waterFX = 0x58; // ParticleSystem
			constexpr auto snowSpinFX = 0x60; // ParticleSystem
			constexpr auto sandSpinFX = 0x68; // ParticleSystem
			constexpr auto dirtSpinFX = 0x70; // ParticleSystem
			constexpr auto asphaltSpinFX = 0x78; // ParticleSystem
		}
		namespace VehicleChassisVisuals
		{
			constexpr auto owner = 0x0; // T
			constexpr auto clientWheelDatak__BackingField = 0x0; // ClientWheelData[]
			constexpr auto prevSteer = 0x0; // float
			constexpr auto isStopped = 0x0; // bool
		}
		namespace VehicleEngineController
		{
			constexpr auto FuelSystemk__BackingField = 0x0; // EntityFuelSystem
			constexpr auto owner = 0x0; // TOwner
			constexpr auto isServer = 0x0; // bool
			constexpr auto engineStartupTime = 0x0; // float
			constexpr auto waterloggedPoint = 0x0; // Transform
			constexpr auto engineStartingFlag = 0x0; // Flags
		}
		namespace DeployGuide
		{
			constexpr auto current = 0x0; // DeployGuide
			constexpr auto hidden = 0x18; // bool
			constexpr auto isGoodPlacement = 0x19; // bool
			constexpr auto meshRenderer = 0x20; // MeshRenderer
			constexpr auto meshFilter = 0x28; // MeshFilter
		}
		namespace DroppedItem
		{
			constexpr auto itemModel = 0x178; // GameObject
			constexpr auto childCollider = 0x180; // Collider
		}
		namespace ItemPickup
		{
			constexpr auto itemDef = 0x188; // ItemDefinition
			constexpr auto amount = 0x190; // int32_t
			constexpr auto skinOverride = 0x198; // UInt64
		}
		namespace ANDSwitch
		{
			constexpr auto input1Amount = 0x2A8; // int32_t
			constexpr auto input2Amount = 0x2AC; // int32_t
		}
		namespace DoorManipulator
		{
			constexpr auto entityRef = 0x2A8; // EntityRef
			constexpr auto targetDoor = 0x2B8; // Door
			constexpr auto powerAction = 0x2C0; // DoorEffect
		}
		namespace DummySwitch
		{
			constexpr auto listenString = 0x2A8; // string
			constexpr auto listenStringOff = 0x2B0; // string
			constexpr auto duration = 0x2B8; // float
		}
		namespace ElectricFurnaceIO
		{
			constexpr auto PowerConsumption = 0x2A8; // int32_t
		}
		namespace ElectricGenerator
		{
			constexpr auto electricAmount = 0x2A8; // float
		}
		namespace ElevatorIOEntity
		{
			constexpr auto Consumption = 0x2A8; // int32_t
		}
		namespace FluidSwitch
		{
			constexpr auto Flag_PumpPowered = 0x3E8; // Flags
			constexpr auto PumpAnimator = 0x3F0; // Animator
			constexpr auto SwitchOnParam = 0x0; // int32_t
			constexpr auto PowerParam = 0x4; // int32_t
		}
		namespace ORSwitch
		{
			constexpr auto input1Amount = 0x2A8; // int32_t
			constexpr auto input2Amount = 0x2AC; // int32_t
		}
		namespace XORSwitch
		{
			constexpr auto input1Amount = 0x2A8; // int32_t
			constexpr auto input2Amount = 0x2AC; // int32_t
		}
		namespace IndustrialFilterBuffer
		{
			constexpr auto ItemName = 0x18; // RustText
			constexpr auto ItemIcon = 0x20; // Image
			constexpr auto BlueprintRoot = 0x28; // GameObject
			constexpr auto BufferSlider = 0x30; // RustSlider
			constexpr auto BufferProgressText = 0x38; // RustText
		}
		namespace IndustrialFilterDialog
		{
			constexpr auto ItemPrefab = 0x30; // GameObjectRef
			constexpr auto ItemParent = 0x38; // Transform
			constexpr auto ItemSearchParent = 0x40; // GameObject
			constexpr auto ItemSearchEntryPrefab = 0x48; // ItemSearchEntry
			constexpr auto TargetItemIcon = 0x50; // VirtualItemIcon
			constexpr auto TargetCategoryRoot = 0x58; // GameObject
			constexpr auto TargetCategoryText = 0x60; // RustText
			constexpr auto TargetCategoryImage = 0x68; // Image
			constexpr auto NoItemsPrompt = 0x70; // GameObject
			constexpr auto FilterModeDropdown = 0x78; // Dropdown
			constexpr auto FilterModeExplanations = 0x80; // GameObject[]
			constexpr auto FilterModeBlocker = 0x88; // GameObject
			constexpr auto FilterCountText = 0x90; // RustText
			constexpr auto BufferRoot = 0x98; // GameObject
			constexpr auto BufferItemPrefab = 0xA0; // GameObjectRef
			constexpr auto BufferTransform = 0xA8; // Transform
			constexpr auto PasteButton = 0xB0; // RustButton
			constexpr auto RegularCopyPasteButtons = 0xB8; // GameObject[]
			constexpr auto JsonCopyPasteButtons = 0xC0; // GameObject[]
			constexpr auto ComponentsPhrase = 0x0; // Phrase
			constexpr auto ValidCategories = 0x8; // CategorySearch[]
			constexpr auto finishedCallback = 0xC8; // Action`2
			constexpr auto resultList = 0xD0; // List`1
			constexpr auto currentMode = 0xD8; // ConveyorMode
			constexpr auto hasChanges = 0xDC; // bool
			constexpr auto initialising = 0xDD; // bool
			constexpr auto initialFilterHasBuffer = 0xDE; // bool
			constexpr auto conveyor = 0xE0; // IndustrialConveyor
			constexpr auto lastBufferUpdate = 0xE8; // TimeSince
			constexpr auto selectedCategory = 0xEC; // Nullable`1
			constexpr auto copyBuffer = 0x10; // List`1
			constexpr auto buffersInProgress = 0xF8; // List`1
		}
		namespace IndustrialFilterItemIcon
		{
			constexpr auto ItemIcon = 0x18; // Image
			constexpr auto ItemName = 0x20; // RustText
			constexpr auto MaxInput = 0x28; // RustInput
			constexpr auto BufferInput = 0x30; // RustInput
			constexpr auto MinInput = 0x38; // RustInput
			constexpr auto BlueprintIcon = 0x40; // GameObject
			constexpr auto InverseModeBlocker = 0x48; // GameObject
			constexpr auto removeCallback = 0x50; // Action`1
			constexpr auto changedCallback = 0x58; // Action`2
			constexpr auto blockChangeCheck = 0x60; // bool
			constexpr auto filter = 0x68; // ItemFilter
		}
		namespace IndustrialStorageAdaptor
		{
			constexpr auto GreenLight = 0x2A8; // GameObject
			constexpr auto RedLight = 0x2B0; // GameObject
			constexpr auto _cachedParent = 0x2B8; // BaseEntity
		}
		namespace ProgressDoor
		{
			constexpr auto storedEnergy = 0x2A8; // float
			constexpr auto energyForOpen = 0x2AC; // float
			constexpr auto secondsToClose = 0x2B0; // float
			constexpr auto openProgress = 0x2B4; // float
		}
		namespace SlidingProgressDoor
		{
			constexpr auto openPosition = 0x2B8; // Vector3
			constexpr auto closedPosition = 0x2C4; // Vector3
			constexpr auto doorObject = 0x2D0; // GameObject
			constexpr auto vehiclePhysBox = 0x2D8; // TriggerVehiclePush
			constexpr auto client_targetStoredEnergy = 0x2E0; // float
		}
		namespace NoPlayersIOReset
		{
			constexpr auto entitiesToReset = 0x18; // IOEntity[]
			constexpr auto radius = 0x20; // float
			constexpr auto timeBetweenChecks = 0x24; // float
		}
		namespace PuzzleReset
		{
			constexpr auto respawnGroups = 0x18; // SpawnGroup[]
			constexpr auto resetEnts = 0x20; // IOEntity[]
			constexpr auto resetObjects = 0x28; // GameObject[]
			constexpr auto playersBlockReset = 0x30; // bool
			constexpr auto CheckSleepingAIZForPlayers = 0x31; // bool
			constexpr auto playerDetectionRadius = 0x34; // float
			constexpr auto playerHeightDetectionMinMax = 0x38; // float
			constexpr auto playerDetectionOrigin = 0x40; // Transform
			constexpr auto timeBetweenResets = 0x48; // float
			constexpr auto scaleWithServerPopulation = 0x4C; // bool
			constexpr auto resetPositions = 0x50; // Vector3[]
			constexpr auto broadcastResetMessage = 0x58; // bool
			constexpr auto resetPhrase = 0x60; // Phrase
		}
		namespace FrequencyConfig
		{
			constexpr auto rfObject = 0x30; // IRFObject
			constexpr auto input = 0x38; // InputField
			constexpr auto target = 0x40; // int32_t
			constexpr auto tempContainer = 0x48; // ItemContainer
			constexpr auto tempItemID = 0x50; // ItemId
		}
		namespace RFManager
		{
			constexpr auto _listeners = 0x0; // Dictionary`2
			constexpr auto _broadcasters = 0x8; // Dictionary`2
			constexpr auto minFreq = 0x10; // int32_t
			constexpr auto maxFreq = 0x14; // int32_t
		}
		namespace BaseHuntEvent
		{
			constexpr auto HuntablePrefab = 0x168; // GameObjectRef[]
			constexpr auto huntStartSound = 0x170; // AudioSource
		}
		namespace CargoPlane
		{
			constexpr auto prefabDrop = 0x168; // GameObjectRef
			constexpr auto filter = 0x170; // SpawnFilter
		}
		namespace EventSchedule
		{
			constexpr auto minimumHoursBetween = 0x18; // float
			constexpr auto maxmumHoursBetween = 0x1C; // float
		}
		namespace EventScheduleWipeOffset
		{
			constexpr auto hoursBeforeWipeRealtime = 0x0; // float
		}
		namespace TriggeredEventPrefab
		{
			constexpr auto targetPrefab = 0x18; // GameObjectRef
			constexpr auto shouldBroadcastSpawn = 0x20; // bool
			constexpr auto spawnPhrase = 0x28; // Phrase
		}
		namespace Bootstrap
		{
			constexpr auto bootstrapInitRun = 0x0; // bool
			constexpr auto isErrored = 0x1; // bool
			constexpr auto messageString = 0x18; // string
			constexpr auto BootstrapUiCanvas = 0x20; // CanvasGroup
			constexpr auto errorPanel = 0x28; // GameObject
			constexpr auto errorText = 0x30; // TextMeshProUGUI
			constexpr auto statusText = 0x38; // TextMeshProUGUI
			constexpr auto timeSinceVisible = 0x40; // TimeSince
			constexpr auto _engineUi = 0x8; // GameObject
			constexpr auto _gameUi = 0x10; // GameObject
			constexpr auto _menuUi = 0x18; // GameObject
			constexpr auto lastWrittenValue = 0x20; // string
		}
		namespace BuildingManager
		{
			constexpr auto client = 0x0; // ClientBuildingManager
			constexpr auto decayEntities = 0x10; // ListHashSet`1
			constexpr auto buildingDictionary = 0x18; // ListDictionary`2
		}
		namespace Climate
		{
			constexpr auto BlendingSpeed = 0x18; // float
			constexpr auto FogMultiplier = 0x1C; // float
			constexpr auto FogDarknessDistance = 0x20; // float
			constexpr auto DebugLUTBlending = 0x24; // bool
			constexpr auto Weather = 0x28; // WeatherParameters
			constexpr auto WeatherPresets = 0x30; // WeatherPreset[]
			constexpr auto Arid = 0x38; // ClimateParameters
			constexpr auto Temperate = 0x40; // ClimateParameters
			constexpr auto Tundra = 0x48; // ClimateParameters
			constexpr auto Arctic = 0x50; // ClimateParameters
			constexpr auto WeatherStateBlendk__BackingField = 0x58; // float
			constexpr auto WeatherSeedPreviousk__BackingField = 0x5C; // uint32_t
			constexpr auto WeatherSeedTargetk__BackingField = 0x60; // uint32_t
			constexpr auto WeatherSeedNextk__BackingField = 0x64; // uint32_t
			constexpr auto WeatherStatePreviousk__BackingField = 0x68; // WeatherPreset
			constexpr auto WeatherStateTargetk__BackingField = 0x70; // WeatherPreset
			constexpr auto WeatherStateNextk__BackingField = 0x78; // WeatherPreset
			constexpr auto WeatherStatek__BackingField = 0x80; // WeatherPreset
			constexpr auto WeatherClampsMink__BackingField = 0x88; // WeatherPreset
			constexpr auto WeatherClampsMaxk__BackingField = 0x90; // WeatherPreset
			constexpr auto WeatherOverridesk__BackingField = 0x98; // WeatherPreset
			constexpr auto Overridesk__BackingField = 0xA0; // LegacyWeatherState
			constexpr auto FogLerpEnabled = 0xA8; // bool
			constexpr auto FogStartDistanceOverride = 0xAC; // Nullable`1
			constexpr auto FogDensityOverride = 0xB4; // Nullable`1
			constexpr auto cam = 0xC0; // Camera
			constexpr auto scattering = 0xC8; // TOD_Scattering
			constexpr auto windZone = 0xD0; // WindZone
			constexpr auto currentClimate = 0xD8; // ClimateParameters
			constexpr auto prevClimate = 0xE0; // ClimateParameters
			constexpr auto presetLookup = 0xE8; // Dictionary`2
			constexpr auto climateLookup = 0xF0; // ClimateParameters[]
		}
		namespace ColliderInfo
		{
			constexpr auto flags = 0x18; // Flags
		}
		namespace ColliderInfo_Pipe
		{
			constexpr auto OutputSlotIndex = 0x20; // int32_t
			constexpr auto ParentEntity = 0x28; // IOEntity
		}
		namespace ConditionalGibbable
		{
			constexpr auto id = 0x18; // int32_t
		}
		namespace CreateEffect
		{
			constexpr auto EffectToCreate = 0x18; // GameObjectRef
		}
		namespace CreationGibSpawner
		{
			constexpr auto gibSource = 0x18; // GameObject
			constexpr auto gibsInstance = 0x20; // GameObject
			constexpr auto startTime = 0x28; // float
			constexpr auto duration = 0x2C; // float
			constexpr auto buildScaleAdditionalAmount = 0x30; // float
			constexpr auto scaleCurve = 0x38; // AnimationCurve
			constexpr auto buildCurve = 0x40; // AnimationCurve
			constexpr auto buildScaleCurve = 0x48; // AnimationCurve
			constexpr auto xCurve = 0x50; // AnimationCurve
			constexpr auto yCurve = 0x58; // AnimationCurve
			constexpr auto zCurve = 0x60; // AnimationCurve
			constexpr auto spawnPositions = 0x68; // Vector3[]
			constexpr auto particles = 0x70; // GameObject[]
			constexpr auto gibProgress = 0x78; // float[]
			constexpr auto physMaterial = 0x80; // PhysicMaterial
			constexpr auto gibs = 0x88; // List`1
			constexpr auto started = 0x90; // bool
			constexpr auto placeEffect = 0x98; // GameObjectRef
			constexpr auto smokeEffect = 0xA0; // GameObject
			constexpr auto effectSpacing = 0xA8; // float
			constexpr auto invert = 0xAC; // bool
			constexpr auto buildDirection = 0xB0; // Vector3
			constexpr auto GibReplacements = 0xC0; // GibReplacement[]
			constexpr auto effectLookup = 0xC8; // EffectMaterialPair[]
			constexpr auto startDelay = 0xD0; // float
			constexpr auto conditionalGibSources = 0xD8; // List`1
			constexpr auto nextEffectTime = 0xE0; // float
		}
		namespace CullingManager
		{
			constexpr auto volumes = 0x18; // List`1
		}
		namespace CullingVolume
		{
			constexpr auto OccludeeRoot = 0x18; // GameObject
			constexpr auto Invert = 0x20; // bool
			constexpr auto Portal = 0x21; // bool
			constexpr auto Connections = 0x28; // List`1
			constexpr auto root = 0x30; // Transform
			constexpr auto bounds = 0x38; // Bounds
			constexpr auto components = 0x50; // List`1
			constexpr auto lights = 0x58; // List`1
			constexpr auto lastSeen = 0x60; // float
		}
		namespace Deployable
		{
			constexpr auto guideMesh = 0x98; // Mesh
			constexpr auto guideMeshScale = 0xA0; // Vector3
			constexpr auto guideLights = 0xAC; // bool
			constexpr auto wantsInstanceData = 0xAD; // bool
			constexpr auto copyInventoryFromItem = 0xAE; // bool
			constexpr auto setSocketParent = 0xAF; // bool
			constexpr auto toSlot = 0xB0; // bool
			constexpr auto slot = 0xB4; // Slot
			constexpr auto placeEffect = 0xB8; // GameObjectRef
			constexpr auto bounds = 0xC0; // Bounds
		}
		namespace DeployShell
		{
			constexpr auto bounds = 0x98; // Bounds
		}
		namespace DeployVolume
		{
			constexpr auto layers = 0x98; // LayerMask
			constexpr auto ignore = 0x9C; // Flags
			constexpr auto entityMode = 0xA0; // EntityMode
			constexpr auto entityList = 0xA8; // BaseEntity[]
			constexpr auto entityGroups = 0xB0; // EntityListScriptableObject[]
			constexpr auto IsBuildingBlockk__BackingField = 0xB8; // bool
			constexpr auto LastDeployHitk__BackingField = 0x0; // Collider
		}
		namespace DeployVolumeCapsule
		{
			constexpr auto center = 0xC0; // Vector3
			constexpr auto radius = 0xCC; // float
			constexpr auto height = 0xD0; // float
		}
		namespace DeployVolumeEntityBounds
		{
			constexpr auto bounds = 0xC0; // Bounds
		}
		namespace DeployVolumeEntityBoundsReverse
		{
			constexpr auto bounds = 0xC0; // Bounds
			constexpr auto layer = 0xD8; // int32_t
		}
		namespace DeployVolumeOBB
		{
			constexpr auto bounds = 0xC0; // Bounds
		}
		namespace DeployVolumeSphere
		{
			constexpr auto center = 0xC0; // Vector3
			constexpr auto radius = 0xCC; // float
		}
		namespace EntityListScriptableObject
		{
			constexpr auto entities = 0x18; // BaseEntity[]
			constexpr auto whitelist = 0x20; // bool
		}
		namespace PreventBuildingMonumentTag
		{
			constexpr auto AttachedMonument = 0x18; // MonumentInfo
		}
		namespace EffectBlood
		{
			constexpr auto ReplacementEffect = 0x38; // GameObjectRef
		}
		namespace EffectDictionary
		{
			constexpr auto effectDictionary = 0x0; // Dictionary`2
		}
		namespace EffectRecycle
		{
			constexpr auto detachTime = 0x18; // float
			constexpr auto recycleTime = 0x1C; // float
			constexpr auto playMode = 0x20; // PlayMode
			constexpr auto onParentDestroyed = 0x24; // ParentDestroyBehaviour
			constexpr auto recycleAction = 0x28; // Action
			constexpr auto detachWaitRecycleAction = 0x30; // Action
		}
		namespace EffectRecycleDetach
		{
			constexpr auto recycleTime = 0x18; // float
			constexpr auto recycleAction = 0x20; // Action
		}
		namespace EffectRecycleLite
		{
			constexpr auto recycleAction = 0x20; // Action
		}
		namespace EnvironmentType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace EnvironmentVolume
		{
			constexpr auto Type = 0x18; // EnvironmentType
			constexpr auto Center = 0x1C; // Vector3
			constexpr auto Size = 0x28; // Vector3
			constexpr auto triggerk__BackingField = 0x38; // Collider
		}
		namespace EnvironmentVolumeTrigger
		{
			constexpr auto volumek__BackingField = 0x18; // EnvironmentVolume
			constexpr auto Center = 0x20; // Vector3
			constexpr auto Size = 0x2C; // Vector3
		}
		namespace FoliageCell
		{
			constexpr auto EmptyPlacements = 0x0; // ListHashSet`1
			constexpr auto position = 0x10; // Vector3
			constexpr auto grid = 0x20; // FoliageGrid
			constexpr auto interrupt = 0x28; // bool
			constexpr auto lod = 0x2C; // float
			constexpr auto seed = 0x30; // uint32_t
			constexpr auto placements = 0x38; // ListHashSet`1
			constexpr auto batches = 0x40; // ListDictionary`2
			constexpr auto initAsyncAction = 0x48; // Action
		}
		namespace FoliageGrid
		{
			constexpr auto Paused = 0x0; // bool
			constexpr auto BatchPrefab = 0x18; // GameObjectRef
			constexpr auto CellSize = 0x20; // float
			constexpr auto FoliageLayer = 0x24; // LayerSelect
			constexpr auto FoliageShadows = 0x28; // ShadowCastingMode
			constexpr auto Placements = 0x30; // ListHashSet`1
			constexpr auto grid = 0x38; // WorldSpaceGrid`1
			constexpr auto curCell = 0x40; // Vector2i
			constexpr auto prevPosition = 0x48; // Vector3
			constexpr auto watch = 0x58; // Stopwatch
		}
		namespace FoliageGroup
		{
			constexpr auto LOD = 0x10; // float
			constexpr auto NeedsRefresh = 0x14; // bool
			constexpr auto Processing = 0x15; // bool
			constexpr auto Preserving = 0x16; // bool
			constexpr auto Placements = 0x18; // ListHashSet`1
			constexpr auto Renderers = 0x20; // ListHashSet`1
			constexpr auto TempRenderers = 0x28; // List`1
			constexpr auto Batches = 0x30; // List`1
			constexpr auto TempBatches = 0x38; // List`1
			constexpr auto TempInstances = 0x40; // List`1
			constexpr auto grid = 0x48; // FoliageGrid
			constexpr auto cell = 0x50; // FoliageCell
			constexpr auto key = 0x58; // FoliageKey
			constexpr auto updateData = 0x60; // Action
			constexpr auto refreshBatches = 0x68; // Action
		}
		namespace FoliageKey
		{
			constexpr auto material = 0x0; // Material
		}
		namespace FoliagePlacement
		{
			constexpr auto Density = 0x18; // float
			constexpr auto Filter = 0x20; // SpawnFilter
			constexpr auto FilterCutoff = 0x28; // float
			constexpr auto FilterFade = 0x2C; // float
			constexpr auto FilterScaling = 0x30; // float
			constexpr auto RandomScaling = 0x34; // float
			constexpr auto Range = 0x38; // MinMax
			constexpr auto RangeFade = 0x40; // float
			constexpr auto DistanceDensity = 0x44; // float
			constexpr auto DistanceScaling = 0x48; // float
			constexpr auto material = 0x50; // Material
			constexpr auto mesh0 = 0x58; // Mesh
			constexpr auto mesh1 = 0x60; // Mesh
			constexpr auto mesh2 = 0x68; // Mesh
		}
		namespace FoliageRenderer
		{
			constexpr auto material = 0x18; // Material
			constexpr auto LOD0 = 0x20; // Mesh
			constexpr auto LOD1 = 0x28; // Mesh
			constexpr auto batchGroup = 0x30; // FoliageGroup
			constexpr auto batchInstance = 0x38; // MeshInstance
		}
		namespace FoliageSpawn
		{
			constexpr auto Placement = 0x18; // FoliagePlacement
		}
		namespace GameManager
		{
			constexpr auto client = 0x0; // GameManager
			constexpr auto preProcessed = 0x10; // PrefabPreProcess
			constexpr auto pool = 0x18; // PrefabPoolCollection
			constexpr auto Clientside = 0x20; // bool
			constexpr auto Serverside = 0x21; // bool
		}
		namespace GameModeCapturePoint
		{
			constexpr auto captureTrigger = 0x168; // CapturePointTrigger
			constexpr auto timeToCapture = 0x170; // float
			constexpr auto scorePerSecond = 0x174; // int32_t
			constexpr auto scoreName = 0x178; // string
			constexpr auto captureFraction = 0x180; // float
			constexpr auto captureTeam = 0x184; // int32_t
			constexpr auto capturingTeam = 0x188; // int32_t
			constexpr auto capturingPlayer = 0x190; // EntityRef
			constexpr auto capturedPlayer = 0x1A0; // EntityRef
			constexpr auto capturePointText = 0x1B0; // RustText
			constexpr auto captureOwnerName = 0x1B8; // RustText
			constexpr auto captureProgressImage = 0x1C0; // Image
			constexpr auto progressBeepEffect = 0x1C8; // GameObjectRef
			constexpr auto progressCompleteEffect = 0x1D0; // GameObjectRef
			constexpr auto computerPoint = 0x1D8; // Transform
		}
		namespace GameModeManifest
		{
			constexpr auto instance = 0x0; // GameModeManifest
			constexpr auto gameModePrefabs = 0x18; // List`1
		}
		namespace GameModeObjectToggle
		{
			constexpr auto gameModeTags = 0x18; // string[]
			constexpr auto tagsToDisable = 0x20; // string[]
			constexpr auto toToggle = 0x28; // GameObject[]
			constexpr auto defaultState = 0x30; // bool
		}
		namespace GameModeSoftcore
		{
			constexpr auto reclaimManagerPrefab = 0x260; // GameObjectRef
			constexpr auto reclaimBackpackPrefab = 0x268; // GameObjectRef
			constexpr auto ReclaimToast = 0x0; // Phrase
			constexpr auto startingGear = 0x270; // ItemAmount[]
		}
		namespace GameSetup
		{
			constexpr auto RunOnce = 0x0; // bool
			constexpr auto startServer = 0x18; // bool
			constexpr auto clientConnectCommand = 0x20; // string
			constexpr auto loadMenu = 0x28; // bool
			constexpr auto loadLevel = 0x29; // bool
			constexpr auto loadLevelScene = 0x30; // string
			constexpr auto loadSave = 0x38; // bool
			constexpr auto loadSaveFile = 0x40; // string
			constexpr auto initializationCommands = 0x48; // string
		}
		namespace Gibbable
		{
			constexpr auto gibSource = 0x98; // GameObject
			constexpr auto customMaterials = 0xA0; // Material[]
			constexpr auto materialSource = 0xA8; // GameObject
			constexpr auto copyMaterialBlock = 0xB0; // bool
			constexpr auto applyDamageTexture = 0xB1; // bool
			constexpr auto physicsMaterial = 0xB8; // PhysicMaterial
			constexpr auto fxPrefab = 0xC0; // GameObjectRef
			constexpr auto spawnFxPrefab = 0xC8; // bool
			constexpr auto important = 0xC9; // bool
			constexpr auto useContinuousCollision = 0xCA; // bool
			constexpr auto explodeScale = 0xCC; // float
			constexpr auto scaleOverride = 0xD0; // float
			constexpr auto uniqueId = 0xD4; // int32_t
			constexpr auto boundsEffectType = 0xD8; // BoundsEffectType
			constexpr auto isConditional = 0xDC; // bool
			constexpr auto effectBounds = 0xE0; // Bounds
			constexpr auto MeshOverrides = 0xF8; // List`1
			constexpr auto propertyBlock = 0x0; // MaterialPropertyBlock
			constexpr auto copyMaterial = 0x8; // Material
			constexpr auto newGib = 0x100; // Gib
			constexpr auto gibRenderers = 0x108; // GibMesh[]
		}
		namespace GroundWatch
		{
			constexpr auto groundPosition = 0x18; // Vector3
			constexpr auto layers = 0x24; // LayerMask
			constexpr auto radius = 0x28; // float
			constexpr auto whitelist = 0x30; // BaseEntity[]
		}
		namespace HideUntilMobile
		{
			constexpr auto visuals = 0x20; // GameObject[]
			constexpr auto startPos = 0x28; // Vector3
		}
		namespace HitTest
		{
			constexpr auto type = 0x10; // Type
			constexpr auto AttackRay = 0x14; // Ray
			constexpr auto Radius = 0x2C; // float
			constexpr auto Forgiveness = 0x30; // float
			constexpr auto MaxDistance = 0x34; // float
			constexpr auto RayHit = 0x38; // RaycastHit
			constexpr auto MultiHit = 0x64; // bool
			constexpr auto BestHit = 0x65; // bool
			constexpr auto DidHit = 0x66; // bool
			constexpr auto damageProperties = 0x68; // DamageProperties
			constexpr auto gameObject = 0x70; // GameObject
			constexpr auto collider = 0x78; // Collider
			constexpr auto ignoreEntity = 0x80; // BaseEntity
			constexpr auto HitEntity = 0x88; // BaseEntity
			constexpr auto HitPoint = 0x90; // Vector3
			constexpr auto HitNormal = 0x9C; // Vector3
			constexpr auto HitDistance = 0xA8; // float
			constexpr auto HitTransform = 0xB0; // Transform
			constexpr auto HitPart = 0xB8; // uint32_t
			constexpr auto HitMaterial = 0xC0; // string
		}
		namespace HitInfo
		{
			constexpr auto Initiator = 0x10; // BaseEntity
			constexpr auto WeaponPrefab = 0x18; // BaseEntity
			constexpr auto Weapon = 0x20; // AttackEntity
			constexpr auto DoHitEffects = 0x28; // bool
			constexpr auto DoDecals = 0x29; // bool
			constexpr auto IsPredicting = 0x2A; // bool
			constexpr auto UseProtection = 0x2B; // bool
			constexpr auto Predicted = 0x30; // Connection
			constexpr auto DidHit = 0x38; // bool
			constexpr auto HitEntity = 0x40; // BaseEntity
			constexpr auto HitBone = 0x48; // uint32_t
			constexpr auto HitPart = 0x4C; // uint32_t
			constexpr auto HitMaterial = 0x50; // uint32_t
			constexpr auto HitPositionWorld = 0x54; // Vector3
			constexpr auto HitPositionLocal = 0x60; // Vector3
			constexpr auto HitNormalWorld = 0x6C; // Vector3
			constexpr auto HitNormalLocal = 0x78; // Vector3
			constexpr auto PointStart = 0x84; // Vector3
			constexpr auto PointEnd = 0x90; // Vector3
			constexpr auto ProjectileID = 0x9C; // int32_t
			constexpr auto ProjectileHits = 0xA0; // int32_t
			constexpr auto ProjectileDistance = 0xA4; // float
			constexpr auto ProjectileIntegrity = 0xA8; // float
			constexpr auto ProjectileTravelTime = 0xAC; // float
			constexpr auto ProjectileTrajectoryMismatch = 0xB0; // float
			constexpr auto ProjectileVelocity = 0xB4; // Vector3
			constexpr auto ProjectilePrefab = 0xC0; // Projectile
			constexpr auto material = 0xC8; // PhysicMaterial
			constexpr auto damageProperties = 0xD0; // DamageProperties
			constexpr auto damageTypes = 0xD8; // DamageTypeList
			constexpr auto CanGather = 0xE0; // bool
			constexpr auto DidGather = 0xE1; // bool
			constexpr auto gatherScale = 0xE4; // float
		}
		namespace HitArea
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace LandmarkInfo
		{
			constexpr auto shouldDisplayOnMap = 0x18; // bool
			constexpr auto isLayerSpecific = 0x19; // bool
			constexpr auto displayPhrase = 0x20; // Phrase
			constexpr auto mapIcon = 0x28; // Sprite
		}
		namespace LevelInfo
		{
			constexpr auto shortName = 0x18; // string
			constexpr auto displayName = 0x20; // string
			constexpr auto description = 0x28; // string
			constexpr auto image = 0x30; // Texture2D
			constexpr auto version = 0x38; // int32_t
		}
		namespace LevelManager
		{
			constexpr auto CurrentLevelName = 0x0; // string
		}
		namespace AnimatorLOD
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto animator = 0x88; // Animator
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
		}
		namespace RendererBatch
		{
			constexpr auto BatchTransformk__BackingField = 0x18; // Transform
			constexpr auto BatchRendererk__BackingField = 0x20; // MeshRenderer
			constexpr auto BatchFilterk__BackingField = 0x28; // MeshFilter
			constexpr auto disabled = 0x30; // bool
			constexpr auto batchGroup = 0x38; // RendererGroup
			constexpr auto batchInstance = 0x40; // MeshRendererInstance
		}
		namespace RendererCell
		{
			constexpr auto position = 0x10; // Vector3
			constexpr auto grid = 0x20; // RendererGrid
			constexpr auto interrupt = 0x28; // bool
			constexpr auto isInPool = 0x29; // bool
			constexpr auto Timestamp = 0x2C; // float
			constexpr auto batches = 0x30; // ListDictionary`2
		}
		namespace RendererGrid
		{
			constexpr auto Paused = 0x0; // bool
			constexpr auto BatchPrefab = 0x18; // GameObjectRef
			constexpr auto CellSize = 0x20; // float
			constexpr auto MaxMilliseconds = 0x24; // float
			constexpr auto grid = 0x28; // WorldSpaceGrid`1
			constexpr auto watch = 0x30; // Stopwatch
		}
		namespace RendererGroup
		{
			constexpr auto Invalidated = 0x10; // bool
			constexpr auto NeedsRefresh = 0x11; // bool
			constexpr auto Processing = 0x12; // bool
			constexpr auto Preserving = 0x13; // bool
			constexpr auto Renderers = 0x18; // ListHashSet`1
			constexpr auto TempRenderers = 0x20; // List`1
			constexpr auto Batches = 0x28; // List`1
			constexpr auto TempBatches = 0x30; // List`1
			constexpr auto TempInstances = 0x38; // List`1
			constexpr auto grid = 0x40; // RendererGrid
			constexpr auto cell = 0x48; // RendererCell
			constexpr auto key = 0x50; // RendererKey
			constexpr auto updateData = 0x60; // Action
			constexpr auto refreshBatches = 0x68; // Action
		}
		namespace RendererKey
		{
			constexpr auto material = 0x0; // Material
			constexpr auto shadows = 0x8; // ShadowCastingMode
			constexpr auto layer = 0xC; // int32_t
		}
		namespace CanvasLOD
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto canvas = 0x88; // Canvas
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
		}
		namespace ClothLOD
		{
			constexpr auto clothLODDist = 0x0; // float
			constexpr auto cloth = 0x18; // Cloth
			constexpr auto lastWantsEnabled = 0x20; // bool
		}
		namespace CopyLODValues
		{
			constexpr auto source = 0x18; // LODGroup
			constexpr auto destination = 0x20; // LODGroup
			constexpr auto scale = 0x28; // bool
		}
		namespace DecalCull
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto decal = 0x88; // DeferredDecal
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
		}
		namespace GameObjectLOD
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto TargetGameObject = 0x88; // GameObject
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
		}
		namespace HLODBounds
		{
			constexpr auto MeshBounds = 0x18; // Bounds
			constexpr auto MeshPrefix = 0x30; // string
			constexpr auto CullDistance = 0x38; // float
			constexpr auto OverrideLodDistance = 0x3C; // float
			constexpr auto CullBelowHeight = 0x40; // float
			constexpr auto ApplyMeshTrimming = 0x44; // bool
			constexpr auto Settings = 0x48; // MeshTrimSettings
			constexpr auto DebugComponent = 0x78; // RendererLOD
			constexpr auto ShowTrimSettings = 0x80; // bool
		}
		namespace LODCell
		{
			constexpr auto Position = 0x10; // Vector3
			constexpr auto Size = 0x1C; // float
			constexpr auto Distance = 0x20; // float
			constexpr auto DistanceY = 0x24; // float
			constexpr auto Timestamp = 0x28; // float
			constexpr auto Environment = 0x2C; // EnvironmentType
			constexpr auto members = 0x30; // ListHashSet`1
		}
		namespace LODComponent
		{
			constexpr auto DistanceMode = 0x18; // LODDistanceMode
			constexpr auto OccludeeParams = 0x1C; // OccludeeParameters
			constexpr auto cachedTransform = 0x30; // Transform
			constexpr auto impostor = 0x38; // Impostor
			constexpr auto EnvironmentMode = 0x40; // LODEnvironmentMode
			constexpr auto culled = 0x44; // bool
			constexpr auto cell = 0x48; // LODCell
			constexpr auto currentDistance = 0x50; // float
			constexpr auto occludeeCulled = 0x54; // bool
			constexpr auto occludeeShadowsVisible = 0x55; // bool
			constexpr auto occludeeShadowRange = 0x58; // float
			constexpr auto occludee = 0x60; // OccludeeSphere
			constexpr auto occludeeSet = 0x0; // HashSet`1
			constexpr auto DynamicOccludeeLowPerFrame = 0x8; // int32_t
			constexpr auto DynamicOccludeeMinimumLowInterval = 0xC; // float
			constexpr auto dynamicOccludees = 0x10; // ListHashSet`1
			constexpr auto dynamicOccludeeLowIndex = 0x18; // int32_t
		}
		namespace LODComponentParticleSystem
		{
			constexpr auto playOnShow = 0x80; // bool
			constexpr auto particleSystem = 0x88; // ParticleSystem
			constexpr auto particleSystemRenderer = 0x90; // Renderer
			constexpr auto maxEmission = 0x98; // float
			constexpr auto curlod = 0x9C; // int32_t
			constexpr auto force = 0xA0; // bool
			constexpr auto initialized = 0xA1; // bool
		}
		namespace LODGrid
		{
			constexpr auto Paused = 0x0; // bool
			constexpr auto CellSize = 0x18; // float
			constexpr auto MaxMilliseconds = 0x1C; // float
			constexpr auto TreeMeshDistance = 0x4; // float
			constexpr auto treeRefreshRequest = 0x20; // bool
			constexpr auto treeRefreshPosition = 0x24; // Vector3
			constexpr auto treeQueue = 0x30; // List`1
			constexpr auto treeMeshes = 0x38; // ListHashSet`1
			constexpr auto grid = 0x40; // WorldSpaceGrid`1
			constexpr auto curCell = 0x48; // Vector2i
			constexpr auto watch = 0x50; // Stopwatch
		}
		namespace LODManager
		{
			constexpr auto MaxMilliseconds = 0x18; // float
			constexpr auto members = 0x20; // ListHashSet`1
			constexpr auto watch = 0x28; // Stopwatch
			constexpr auto offset = 0x30; // int32_t
		}
		namespace LODMasterMesh
		{
			constexpr auto ReplacementMesh = 0x80; // MeshRenderer
			constexpr auto Distance = 0x88; // float
			constexpr auto ChildComponents = 0x90; // LODComponent[]
			constexpr auto Block = 0x98; // bool
			constexpr auto MeshBounds = 0x9C; // Bounds
			constexpr auto DebugMaterial = 0x0; // Material
			constexpr auto originalMaterial = 0xB8; // Material
			constexpr auto curlod = 0xC0; // int32_t
			constexpr auto force = 0xC4; // bool
			constexpr auto EnableQueue = 0x8; // LODEnableQueue
			constexpr auto DisableQueue = 0x10; // LODEnableQueue
			constexpr auto showState = 0xC5; // bool
		}
		namespace LODDistanceMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace LODEnvironmentMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace MeshCull
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto meshBatch = 0x88; // RendererBatch
			constexpr auto meshRenderer = 0x90; // Renderer
			constexpr auto meshFilter = 0x98; // MeshFilter
			constexpr auto curlod = 0xA0; // int32_t
			constexpr auto force = 0xA4; // bool
		}
		namespace MeshGroupCull
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto meshRenderers = 0x88; // Renderer[]
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
		}
		namespace MeshLOD
		{
			constexpr auto States = 0x80; // State[]
			constexpr auto meshBatch = 0x88; // RendererBatch
			constexpr auto meshRenderer = 0x90; // MeshRenderer
			constexpr auto meshFilter = 0x98; // MeshFilter
			constexpr auto meshShadowMode = 0xA0; // ShadowCastingMode
			constexpr auto curlod = 0xA4; // int32_t
			constexpr auto force = 0xA8; // bool
			constexpr auto isSmall = 0xA9; // bool
		}
		namespace NotifyLOD
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto MinDistanceMultiplier = 0x84; // float
			constexpr auto TargetGameObject = 0x88; // GameObject
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
			constexpr auto lodTarget = 0x98; // INotifyLOD
		}
		namespace ParticleCollisionLOD
		{
			constexpr auto States = 0xA8; // State[]
		}
		namespace ParticleSystemCull
		{
			constexpr auto Distance = 0xA8; // float
		}
		namespace ParticleSystemLOD
		{
			constexpr auto States = 0xA8; // State[]
		}
		namespace RendererLOD
		{
			constexpr auto States = 0x80; // State[]
			constexpr auto meshBatch = 0x88; // RendererBatch
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
			constexpr auto isSmall = 0x95; // bool
			constexpr auto isBeingForcedOff = 0x96; // bool
		}
		namespace RigidbodyLOD
		{
			constexpr auto Distance = 0x80; // float
			constexpr auto rigidbody = 0x88; // Rigidbody
			constexpr auto curlod = 0x90; // int32_t
			constexpr auto force = 0x94; // bool
			constexpr auto kinematic = 0x95; // bool
		}
		namespace SwitchLODMaterials
		{
			constexpr auto materialSet1 = 0x18; // Material[]
			constexpr auto materialSet2 = 0x20; // Material[]
		}
		namespace TreeLOD
		{
			constexpr auto States = 0x80; // State[]
			constexpr auto requestedlod = 0x88; // int32_t
			constexpr auto curlod = 0x8C; // int32_t
			constexpr auto force = 0x90; // bool
			constexpr auto Comparison = 0x0; // Comparison`1
		}
		namespace UndergroundLODSwitcher
		{
			constexpr auto TargetComponent = 0x18; // LODComponent
		}
		namespace MeshReplacement
		{
			constexpr auto Female = 0x18; // SkinnedMeshRenderer
		}
		namespace MonumentInfo
		{
			constexpr auto Type = 0x30; // MonumentType
			constexpr auto Tier = 0x34; // MonumentTier
			constexpr auto MinWorldSize = 0x38; // int32_t
			constexpr auto Bounds = 0x3C; // Bounds
			constexpr auto HasNavmesh = 0x54; // bool
			constexpr auto IsSafeZone = 0x55; // bool
			constexpr auto WantsDungeonLink = 0x56; // bool
			constexpr auto HasDungeonLink = 0x57; // bool
			constexpr auto DungeonEntrance = 0x58; // DungeonGridInfo
			constexpr auto obbBounds = 0x60; // OBB
		}
		namespace MonumentType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace MonumentTier
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Prefab
		{
			constexpr auto Component = 0x0; // T
			constexpr auto ID = 0x10; // uint32_t
			constexpr auto Name = 0x18; // string
			constexpr auto Folder = 0x20; // string
			constexpr auto Object = 0x28; // GameObject
			constexpr auto Manager = 0x30; // GameManager
			constexpr auto Attribute = 0x38; // Library
			constexpr auto Parameters = 0x40; // PrefabParameters
		}
		namespace PrefabInformation
		{
			constexpr auto associatedItemDefinition = 0x98; // ItemDefinition
			constexpr auto title = 0xA0; // Phrase
			constexpr auto description = 0xA8; // Phrase
			constexpr auto sprite = 0xB0; // Sprite
			constexpr auto shownOnDeathScreen = 0xB8; // bool
			constexpr auto DeathScreenEntities = 0x0; // List`1
		}
		namespace PrefabInstantiate
		{
			constexpr auto Prefab = 0x18; // GameObjectRef
		}
		namespace PrefabPriority
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PrefabParameters
		{
			constexpr auto Priority = 0x18; // PrefabPriority
			constexpr auto Count = 0x1C; // int32_t
		}
		namespace PrefabPreProcess
		{
			constexpr auto clientsideOnlyTypes = 0x0; // Type[]
			constexpr auto serversideOnlyTypes = 0x8; // Type[]
			constexpr auto isClientside = 0x10; // bool
			constexpr auto isServerside = 0x11; // bool
			constexpr auto isBundling = 0x12; // bool
			constexpr auto prefabList = 0x18; // Dictionary`2
			constexpr auto destroyList = 0x20; // List`1
			constexpr auto cleanupList = 0x28; // List`1
		}
		namespace ArmorProperties
		{
			constexpr auto area = 0x18; // HitArea
		}
		namespace ClothingMovementProperties
		{
			constexpr auto speedReduction = 0x18; // float
			constexpr auto minSpeedReduction = 0x1C; // float
			constexpr auto waterSpeedBonus = 0x20; // float
		}
		namespace DamageProperties
		{
			constexpr auto fallback = 0x18; // DamageProperties
			constexpr auto bones = 0x20; // HitAreaProperty[]
		}
		namespace LazyAimProperties
		{
			constexpr auto snapStrength = 0x18; // float
			constexpr auto deadzoneAngle = 0x1C; // float
		}
		namespace SkeletonProperties
		{
			constexpr auto boneReference = 0x18; // GameObject
			constexpr auto bones = 0x20; // BoneProperty[]
			constexpr auto quickLookup = 0x28; // Dictionary`2
		}
		namespace RealmedCollider
		{
			constexpr auto ServerCollider = 0x20; // Collider
			constexpr auto ClientCollider = 0x28; // Collider
		}
		namespace RealmedRemove
		{
			constexpr auto removedFromClient = 0x18; // GameObject[]
			constexpr auto removedComponentFromClient = 0x20; // Component[]
			constexpr auto removedFromServer = 0x28; // GameObject[]
			constexpr auto removedComponentFromServer = 0x30; // Component[]
			constexpr auto doNotRemoveFromServer = 0x38; // Component[]
			constexpr auto doNotRemoveFromClient = 0x40; // Component[]
		}
		namespace SaveRestore
		{
			constexpr auto IsSaving = 0x0; // bool
			constexpr auto SaveCreatedTime = 0x8; // DateTime
		}
		namespace SceneToPrefab
		{
			constexpr auto flattenHierarchy = 0x18; // bool
			constexpr auto outputPrefab = 0x20; // GameObject
			constexpr auto skipAllHlod = 0x28; // bool
		}
		namespace SceneToPrefabTag
		{
			constexpr auto Type = 0x18; // TagType
			constexpr auto SpecificLOD = 0x1C; // int32_t
		}
		namespace ConvarControlledSpawnPopulation
		{
			constexpr auto PopulationConvar = 0x68; // string
		}
		namespace Spawnable
		{
			constexpr auto Population = 0x18; // SpawnPopulation
			constexpr auto ForceSpawnOnly = 0x20; // bool
			constexpr auto ForceSpawnInfoMessage = 0x28; // string
		}
		namespace SpawnIndividual
		{
			constexpr auto PrefabID = 0x0; // uint32_t
			constexpr auto Position = 0x4; // Vector3
			constexpr auto Rotation = 0x10; // Quaternion
		}
		namespace SpawnPopulation
		{
			constexpr auto ResourceFolder = 0x20; // string
			constexpr auto ResourceList = 0x28; // GameObjectRef[]
			constexpr auto _targetDensity = 0x30; // float
			constexpr auto SpawnRate = 0x34; // float
			constexpr auto ClusterSizeMin = 0x38; // int32_t
			constexpr auto ClusterSizeMax = 0x3C; // int32_t
			constexpr auto ClusterDithering = 0x40; // int32_t
			constexpr auto SpawnAttemptsInitial = 0x44; // int32_t
			constexpr auto SpawnAttemptsRepeating = 0x48; // int32_t
			constexpr auto EnforcePopulationLimits = 0x4C; // bool
			constexpr auto ScaleWithLargeMaps = 0x4D; // bool
			constexpr auto ScaleWithSpawnFilter = 0x4E; // bool
			constexpr auto ScaleWithServerPopulation = 0x4F; // bool
			constexpr auto AlignToNormal = 0x50; // bool
			constexpr auto Filter = 0x58; // SpawnFilter
			constexpr auto FilterCutoff = 0x60; // float
			constexpr auto FilterRadius = 0x64; // float
		}
		namespace GameModeSpawnGroup
		{
			constexpr auto gameModeTags = 0x58; // string[]
		}
		namespace GenericSpawnPoint
		{
			constexpr auto dropToGround = 0x18; // bool
			constexpr auto randomRot = 0x19; // bool
			constexpr auto randomRotSnapDegrees = 0x1C; // float
			constexpr auto spawnEffect = 0x20; // GameObjectRef
			constexpr auto OnObjectSpawnedEvent = 0x28; // UnityEvent
			constexpr auto OnObjectRetiredEvent = 0x30; // UnityEvent
		}
		namespace IndividualSpawner
		{
			constexpr auto entityPrefab = 0x18; // GameObjectRef
			constexpr auto respawnDelayMin = 0x20; // float
			constexpr auto respawnDelayMax = 0x24; // float
			constexpr auto useCustomBoundsCheckMask = 0x28; // bool
			constexpr auto customBoundsCheckMask = 0x2C; // LayerMask
			constexpr auto oneTimeSpawner = 0x30; // bool
		}
		namespace JunkpileNPCSpawner
		{
			constexpr auto UseSpawnChance = 0xB0; // bool
		}
		namespace NPCSpawner
		{
			constexpr auto AdditionalLOSBlockingLayer = 0x58; // int32_t
			constexpr auto monumentNavMesh = 0x60; // MonumentNavMesh
			constexpr auto shouldFillOnSpawn = 0x68; // bool
			constexpr auto VirtualInfoZone = 0x70; // AIInformationZone
			constexpr auto Path = 0x78; // AIMovePointPath
			constexpr auto AStarGraph = 0x80; // BasePath
			constexpr auto UseStatModifiers = 0x88; // bool
			constexpr auto SenseRange = 0x8C; // float
			constexpr auto CheckLOS = 0x90; // bool
			constexpr auto TargetLostRange = 0x94; // float
			constexpr auto AttackRangeMultiplier = 0x98; // float
			constexpr auto ListenRange = 0x9C; // float
			constexpr auto CanUseHealingItemsChance = 0xA0; // float
			constexpr auto Loadouts = 0xA8; // PlayerInventoryProperties[]
		}
		namespace RadialSpawnPoint
		{
			constexpr auto radius = 0x18; // float
		}
		namespace SpaceCheckingSpawnPoint
		{
			constexpr auto useCustomBoundsCheckMask = 0x38; // bool
			constexpr auto customBoundsCheckMask = 0x3C; // LayerMask
			constexpr auto customBoundsCheckScale = 0x40; // float
		}
		namespace SpawnGroup
		{
			constexpr auto Tier = 0x18; // MonumentTier
			constexpr auto prefabs = 0x20; // List`1
			constexpr auto maxPopulation = 0x28; // int32_t
			constexpr auto numToSpawnPerTickMin = 0x2C; // int32_t
			constexpr auto numToSpawnPerTickMax = 0x30; // int32_t
			constexpr auto respawnDelayMin = 0x34; // float
			constexpr auto respawnDelayMax = 0x38; // float
			constexpr auto wantsInitialSpawn = 0x3C; // bool
			constexpr auto temporary = 0x3D; // bool
			constexpr auto forceInitialSpawn = 0x3E; // bool
			constexpr auto preventDuplicates = 0x3F; // bool
			constexpr auto isSpawnerActive = 0x40; // bool
			constexpr auto setFreeIfMovedBeyond = 0x48; // BoxCollider
			constexpr auto category = 0x50; // string
		}
		namespace SpawnHandler
		{
			constexpr auto TickInterval = 0x18; // float
			constexpr auto MinSpawnsPerTick = 0x1C; // int32_t
			constexpr auto MaxSpawnsPerTick = 0x20; // int32_t
			constexpr auto PlacementMask = 0x24; // LayerMask
			constexpr auto PlacementCheckMask = 0x28; // LayerMask
			constexpr auto PlacementCheckHeight = 0x2C; // float
			constexpr auto RadiusCheckMask = 0x30; // LayerMask
			constexpr auto RadiusCheckDistance = 0x34; // float
			constexpr auto BoundsCheckMask = 0x38; // LayerMask
			constexpr auto CharacterSpawn = 0x40; // SpawnFilter
			constexpr auto CharacterSpawnCutoff = 0x48; // float
			constexpr auto SpawnPopulations = 0x50; // SpawnPopulation[]
			constexpr auto SpawnDistributions = 0x58; // SpawnDistribution[]
			constexpr auto CharDistribution = 0x60; // SpawnDistribution
			constexpr auto SpawnGroups = 0x68; // ListHashSet`1
			constexpr auto SpawnIndividuals = 0x70; // List`1
			constexpr auto ConvarSpawnPopulations = 0x78; // SpawnPopulation[]
		}
		namespace StripRig
		{
			constexpr auto root = 0x18; // Transform
			constexpr auto fromClient = 0x20; // bool
			constexpr auto fromServer = 0x21; // bool
		}
		namespace TechTreeData
		{
			constexpr auto shortname = 0x18; // string
			constexpr auto nextID = 0x20; // int32_t
			constexpr auto _idToNode = 0x28; // Dictionary`2
			constexpr auto _entryNode = 0x30; // NodeInstance
			constexpr auto nodes = 0x38; // List`1
		}
		namespace TriggerAchievement
		{
			constexpr auto statToIncrease = 0x30; // string
			constexpr auto achievementOnEnter = 0x38; // string
			constexpr auto requiredVehicleName = 0x40; // string
			constexpr auto serverSide = 0x48; // bool
			constexpr auto triggeredPlayers = 0x50; // List`1
		}
		namespace TriggerAnalytic
		{
			constexpr auto AnalyticMessage = 0x30; // string
			constexpr auto Timeout = 0x38; // float
		}
		namespace TriggerBase
		{
			constexpr auto interestLayers = 0x18; // LayerMask
			constexpr auto contents = 0x20; // HashSet`1
			constexpr auto entityContents = 0x28; // HashSet`1
		}
		namespace TriggerComfort
		{
			constexpr auto triggerSize = 0x30; // float
			constexpr auto baseComfort = 0x34; // float
			constexpr auto minComfortRange = 0x38; // float
		}
		namespace TriggerDanceAchievement
		{
			constexpr auto RequiredPlayerCount = 0x30; // int32_t
			constexpr auto AchievementName = 0x38; // string
		}
		namespace TriggerEnsnare
		{
			constexpr auto blockHands = 0x30; // bool
		}
		namespace TriggerForce
		{
			constexpr auto velocity = 0x30; // Vector3
		}
		namespace TriggerHurt
		{
			constexpr auto DamagePerSecond = 0x30; // float
			constexpr auto DamageTickRate = 0x34; // float
			constexpr auto damageType = 0x38; // DamageType
		}
		namespace TriggerHurtNotChild
		{
			constexpr auto DamagePerSecond = 0x30; // float
			constexpr auto DamageTickRate = 0x34; // float
			constexpr auto DamageDelay = 0x38; // float
			constexpr auto damageType = 0x3C; // DamageType
			constexpr auto ignoreNPC = 0x40; // bool
			constexpr auto npcMultiplier = 0x44; // float
			constexpr auto resourceMultiplier = 0x48; // float
			constexpr auto triggerHitImpacts = 0x4C; // bool
			constexpr auto RequireUpAxis = 0x4D; // bool
			constexpr auto SourceEntity = 0x50; // BaseEntity
			constexpr auto UseSourceEntityDamageMultiplier = 0x58; // bool
			constexpr auto ignoreAllVehicleMounted = 0x59; // bool
			constexpr auto activationDelay = 0x5C; // float
		}
		namespace TriggerNoSpray
		{
			constexpr auto TriggerCollider = 0x30; // BoxCollider
			constexpr auto cachedBounds = 0x38; // OBB
			constexpr auto cachedTransform = 0x88; // Transform
		}
		namespace TriggerNotify
		{
			constexpr auto notifyTarget = 0x30; // GameObject
			constexpr auto toNotify = 0x38; // INotifyTrigger
			constexpr auto runClientside = 0x40; // bool
			constexpr auto runServerside = 0x41; // bool
		}
		namespace TriggerNotifyEntity
		{
			constexpr auto notifyTarget = 0x30; // GameObject
			constexpr auto toNotify = 0x38; // INotifyEntityTrigger
			constexpr auto runClientside = 0x40; // bool
			constexpr auto runServerside = 0x41; // bool
		}
		namespace TriggerParent
		{
			constexpr auto doClippingCheck = 0x30; // bool
			constexpr auto associatedMountable = 0x38; // BaseMountable
			constexpr auto parentMountedPlayers = 0x40; // bool
			constexpr auto parentSleepers = 0x41; // bool
			constexpr auto ParentNPCPlayers = 0x42; // bool
			constexpr auto overrideOtherTriggers = 0x43; // bool
		}
		namespace TriggerParentElevator
		{
			constexpr auto AllowHorsesToBypassClippingChecks = 0x58; // bool
		}
		namespace TriggerParentEnclosed
		{
			constexpr auto Padding = 0x48; // float
			constexpr auto intersectionMode = 0x4C; // TriggerMode
			constexpr auto CheckBoundsOnUnparent = 0x50; // bool
		}
		namespace TriggerPlayerForce
		{
			constexpr auto triggerCollider = 0x30; // BoxCollider
			constexpr auto pushVelocity = 0x38; // float
			constexpr auto requireUpAxis = 0x3C; // bool
		}
		namespace TriggerPlayerTimer
		{
			constexpr auto TargetEntity = 0x30; // BaseEntity
			constexpr auto DamageAmount = 0x38; // float
			constexpr auto TimeToDamage = 0x3C; // float
		}
		namespace TriggerRadiation
		{
			constexpr auto radiationTier = 0x30; // RadiationTier
			constexpr auto RadiationAmountOverride = 0x34; // float
			constexpr auto falloff = 0x38; // float
			constexpr auto sphereCollider = 0x40; // SphereCollider
		}
		namespace TriggerRagdollRelocate
		{
			constexpr auto targetLocation = 0x30; // Transform
		}
		namespace TriggerSafeZone
		{
			constexpr auto allSafeZones = 0x0; // List`1
			constexpr auto maxDepth = 0x30; // float
			constexpr auto maxAltitude = 0x34; // float
			constexpr auto triggerColliderk__BackingField = 0x38; // Collider
		}
		namespace TriggerTemperature
		{
			constexpr auto Temperature = 0x30; // float
			constexpr auto triggerSize = 0x34; // float
			constexpr auto minSize = 0x38; // float
			constexpr auto sunlightBlocker = 0x3C; // bool
			constexpr auto sunlightBlockAmount = 0x40; // float
			constexpr auto blockMinHour = 0x44; // float
			constexpr auto blockMaxHour = 0x48; // float
		}
		namespace TriggerWakeAIZ
		{
			constexpr auto SleepDelaySeconds = 0x30; // float
			constexpr auto zones = 0x38; // List`1
		}
		namespace TriggerWetness
		{
			constexpr auto Wetness = 0x30; // float
			constexpr auto TargetCollider = 0x38; // SphereCollider
			constexpr auto OriginTransform = 0x40; // Transform
			constexpr auto ApplyLocalHeightCheck = 0x48; // bool
			constexpr auto MinLocalHeight = 0x4C; // float
		}
		namespace TriggerWorkbench
		{
			constexpr auto parentBench = 0x30; // Workbench
		}
		namespace ValidBounds
		{
			constexpr auto worldBounds = 0x18; // Bounds
		}
		namespace Vis
		{
			constexpr auto colCount = 0x0; // int32_t
			constexpr auto colBuffer = 0x8; // Collider[]
			constexpr auto lerp = 0x0; // bool
			constexpr auto damage = 0x1; // bool
			constexpr auto attack = 0x2; // bool
			constexpr auto protection = 0x3; // bool
			constexpr auto weakspots = 0x4; // bool
			constexpr auto triggers = 0x5; // bool
			constexpr auto hitboxes = 0x6; // bool
			constexpr auto lineofsight = 0x7; // bool
			constexpr auto sense = 0x8; // bool
		}
		namespace WaterVolume
		{
			constexpr auto WaterBounds = 0x30; // Bounds
			constexpr auto cachedBounds = 0x48; // OBB
			constexpr auto cachedTransform = 0x98; // Transform
			constexpr auto cutOffPlanes = 0xA0; // Transform[]
			constexpr auto waterEnabled = 0xA8; // bool
		}
		namespace Wearable
		{
			constexpr auto removeSkin = 0x18; // RemoveSkin
			constexpr auto removeSkinFirstPerson = 0x1C; // RemoveSkin
			constexpr auto removeHair = 0x20; // RemoveHair
			constexpr auto deformHair = 0x24; // DeformHair
			constexpr auto occupationUnder = 0x28; // OccupationSlots
			constexpr auto occupationOver = 0x2C; // OccupationSlots
			constexpr auto showCensorshipCube = 0x30; // bool
			constexpr auto showCensorshipCubeBreasts = 0x31; // bool
			constexpr auto forceHideCensorshipBreasts = 0x32; // bool
			constexpr auto followBone = 0x38; // string
			constexpr auto disableRigStripping = 0x40; // bool
			constexpr auto overrideDownLimit = 0x41; // bool
			constexpr auto downLimit = 0x44; // float
			constexpr auto playerModelHair = 0x48; // PlayerModelHair
			constexpr auto playerModelHairCap = 0x50; // PlayerModelHairCap
			constexpr auto wearableReplacementByRace = 0x58; // WearableReplacementByRace
			constexpr auto wearableShadowLod = 0x60; // WearableShadowLod
			constexpr auto renderers = 0x68; // List`1
			constexpr auto playerModelSkins = 0x70; // List`1
			constexpr auto boneRetargets = 0x78; // List`1
			constexpr auto skinnedRenderers = 0x80; // List`1
			constexpr auto skeletonSkins = 0x88; // List`1
			constexpr auto componentInfos = 0x90; // List`1
			constexpr auto HideInEyesView = 0x98; // bool
			constexpr auto HideInFirstPerson = 0x99; // bool
			constexpr auto ExtraLeanBack = 0x9C; // float
			constexpr auto PreserveBones = 0xA0; // bool
			constexpr auto RenderersLod0 = 0xA8; // Renderer[]
			constexpr auto RenderersLod1 = 0xB0; // Renderer[]
			constexpr auto RenderersLod2 = 0xB8; // Renderer[]
			constexpr auto RenderersLod3 = 0xC0; // Renderer[]
			constexpr auto SkipInFirstPersonLegs = 0xC8; // Renderer[]
			constexpr auto emptyLOD = 0x0; // LOD[]
		}
		namespace WearableEyeViewAdjustment_Submesh
		{
			constexpr auto TargetSubmesh = 0x18; // int32_t
			constexpr auto HideMaterial = 0x20; // Material
			constexpr auto DefaultMaterial = 0x28; // Material
		}
		namespace WearableHolsterOffset
		{
			constexpr auto Offsets = 0x18; // offsetInfo[]
		}
		namespace WearableReplacementByRace
		{
			constexpr auto replacements = 0x18; // GameObjectRef[]
		}
		namespace WearableShadowLod
		{
			constexpr auto DisableShadows = 0x18; // Renderer[]
		}
		namespace WeatherEffect
		{
			constexpr auto emitOnStart = 0x18; // ParticleSystem[]
			constexpr auto emitOnStop = 0x20; // ParticleSystem[]
			constexpr auto emitOnLoop = 0x28; // ParticleSystem[]
			constexpr auto currentIntensity = 0x30; // float
			constexpr auto maxEmissionRates = 0x38; // float[]
			constexpr auto invokeUpdate = 0x40; // Action
		}
		namespace RainEffect
		{
			constexpr auto FadeStartDistance = 0x48; // int32_t
			constexpr auto FadeEndDistance = 0x4C; // int32_t
			constexpr auto FadeFalloff = 0x50; // int32_t
			constexpr auto Stormy = 0x54; // bool
		}
		namespace SnowEffect
		{
			constexpr auto FadeStartDistance = 0x48; // int32_t
			constexpr auto FadeEndDistance = 0x4C; // int32_t
			constexpr auto FadeFalloff = 0x50; // int32_t
			constexpr auto Stormy = 0x54; // bool
		}
		namespace WeatherEffectSting
		{
			constexpr auto frequency = 0x18; // float
			constexpr auto variance = 0x1C; // float
			constexpr auto effects = 0x20; // GameObjectRef[]
			constexpr auto stingClock = 0x28; // SynchronizedClock
		}
		namespace WeatherPresetType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace WeatherPreset
		{
			constexpr auto Type = 0x18; // WeatherPresetType
			constexpr auto Wind = 0x1C; // float
			constexpr auto Rain = 0x20; // float
			constexpr auto Thunder = 0x24; // float
			constexpr auto Rainbow = 0x28; // float
			constexpr auto Atmosphere = 0x30; // TOD_AtmosphereParameters
			constexpr auto Clouds = 0x38; // TOD_CloudParameters
		}
		namespace LegacyWeatherState
		{
			constexpr auto preset = 0x10; // WeatherPreset
		}
		namespace WorldCell
		{
			constexpr auto Position = 0x10; // Vector3
			constexpr auto Size = 0x1C; // float
			constexpr auto Visible = 0x20; // bool
			constexpr auto Timestamp = 0x24; // float
			constexpr auto prefabs = 0x28; // List`1
			constexpr auto instances = 0x30; // List`1
		}
		namespace WorldGrid
		{
			constexpr auto Paused = 0x0; // bool
			constexpr auto CellSize = 0x18; // float
			constexpr auto MaxMilliseconds = 0x1C; // float
			constexpr auto tempInstances = 0x20; // List`1
			constexpr auto grid = 0x28; // WorldSpaceGrid`1
			constexpr auto curCell = 0x30; // Vector2i
			constexpr auto watch = 0x38; // Stopwatch
		}
		namespace WorldModel
		{
			constexpr auto mass = 0x18; // float
		}
		namespace GestureCollection
		{
			constexpr auto AllGestures = 0x18; // GestureConfig[]
			constexpr auto GestureVmInDuration = 0x20; // float
			constexpr auto GestureInCurve = 0x28; // AnimationCurve
			constexpr auto GestureVmOutDuration = 0x30; // float
			constexpr auto GestureOutCurve = 0x38; // AnimationCurve
			constexpr auto GestureViewmodelDeployDelay = 0x40; // float
		}
		namespace GestureConfig
		{
			constexpr auto gestureId = 0x18; // uint32_t
			constexpr auto gestureCommand = 0x20; // string
			constexpr auto convarName = 0x28; // string
			constexpr auto gestureName = 0x30; // Phrase
			constexpr auto icon = 0x38; // Sprite
			constexpr auto order = 0x40; // int32_t
			constexpr auto duration = 0x44; // float
			constexpr auto canCancel = 0x48; // bool
			constexpr auto playerModelLayer = 0x4C; // PlayerModelLayer
			constexpr auto gestureType = 0x50; // GestureType
			constexpr auto hideHeldEntity = 0x54; // bool
			constexpr auto canDuckDuringGesture = 0x55; // bool
			constexpr auto movementMode = 0x58; // MovementCapabilities
			constexpr auto animationType = 0x5C; // AnimationType
			constexpr auto viewMode = 0x60; // CameraMode
			constexpr auto useRootMotion = 0x64; // bool
			constexpr auto actionType = 0x68; // GestureActionType
			constexpr auto forceUnlock = 0x6C; // bool
			constexpr auto dlcItem = 0x70; // SteamDLCItem
			constexpr auto inventoryItem = 0x78; // SteamInventoryItem
		}
		namespace OutlineManager
		{
			constexpr auto blurMat = 0x0; // Material
			constexpr auto objectsToRender = 0x18; // List`1
			constexpr auto blurAmount = 0x20; // float
			constexpr auto glowSolidMaterial = 0x28; // Material
			constexpr auto blendGlowMaterial = 0x30; // Material
			constexpr auto worldModelDistance = 0x8; // float
			constexpr auto nextUpdateTime = 0x38; // float
		}
		namespace OutlineObject
		{
			constexpr auto meshes = 0x18; // Mesh[]
			constexpr auto meshTransforms = 0x20; // Transform[]
			constexpr auto _col = 0x28; // Collider
		}
		namespace WorldModelOutline
		{
			constexpr auto query = 0x30; // Query
			constexpr auto currentOcclusion = 0x38; // float
		}
		namespace LinearFog
		{
			constexpr auto fogMaterial = 0x18; // Material
			constexpr auto fogColor = 0x20; // Color
			constexpr auto fogStart = 0x30; // float
			constexpr auto fogRange = 0x34; // float
			constexpr auto fogDensity = 0x38; // float
			constexpr auto fogSky = 0x3C; // bool
		}
		namespace MaterialOverlay
		{
			constexpr auto material = 0x18; // Material
		}
		namespace NaturalBloomAndDirtyLens
		{
			constexpr auto shader = 0x18; // Shader
			constexpr auto lensDirtTexture = 0x20; // Texture2D
			constexpr auto range = 0x28; // float
			constexpr auto cutoff = 0x2C; // float
			constexpr auto bloomIntensity = 0x30; // float
			constexpr auto lensDirtIntensity = 0x34; // float
			constexpr auto spread = 0x38; // float
			constexpr auto iterations = 0x3C; // int32_t
			constexpr auto mips = 0x40; // int32_t
			constexpr auto mipWeights = 0x48; // float[]
			constexpr auto highPrecision = 0x50; // bool
			constexpr auto downscaleSource = 0x51; // bool
			constexpr auto debug = 0x52; // bool
			constexpr auto temporalFilter = 0x53; // bool
			constexpr auto temporalFilterWeight = 0x54; // float
			constexpr auto material = 0x58; // Material
			constexpr auto blurSize = 0x60; // float
			constexpr auto temporalHistory = 0x68; // RenderTexture
			constexpr auto paramID = 0x0; // int32_t[]
			constexpr auto sourceID = 0x8; // int32_t[]
		}
		namespace ImageRenderController
		{
			constexpr auto Camera = 0x18; // Camera
		}
		namespace BUTTON
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace InputState
		{
			constexpr auto current = 0x10; // InputMessage
			constexpr auto previous = 0x18; // InputMessage
			constexpr auto SwallowedButtons = 0x20; // int32_t
		}
		namespace ItemCraftTask
		{
			constexpr auto blueprint = 0x10; // ItemBlueprint
			constexpr auto endTime = 0x18; // float
			constexpr auto taskUID = 0x1C; // int32_t
			constexpr auto owner = 0x20; // BasePlayer
			constexpr auto cancelled = 0x28; // bool
			constexpr auto instanceData = 0x30; // InstanceData
			constexpr auto amount = 0x38; // int32_t
			constexpr auto skinID = 0x3C; // int32_t
			constexpr auto potentialOwners = 0x40; // List`1
			constexpr auto takenItems = 0x48; // List`1
			constexpr auto numCrafted = 0x50; // int32_t
			constexpr auto conditionScale = 0x54; // float
			constexpr auto workSecondsComplete = 0x58; // float
			constexpr auto worksecondsRequired = 0x5C; // float
			constexpr auto workbenchEntity = 0x60; // BaseEntity
		}
		namespace ItemCrafter
		{
			constexpr auto containers = 0x20; // List`1
			constexpr auto queue = 0x28; // LinkedList`1
			constexpr auto taskUID = 0x30; // int32_t
		}
		namespace ItemEventFlag
		{
			constexpr auto flag = 0x18; // Flag
			constexpr auto onEnabled = 0x20; // UnityEvent
			constexpr auto onDisable = 0x28; // UnityEvent
			constexpr auto firstRun = 0x30; // bool
			constexpr auto lastState = 0x31; // bool
		}
		namespace Item
		{
			constexpr auto _condition = 0x10;
			constexpr auto _maxCondition = 0x14;
			constexpr auto info = 0x18; //public ItemDefinition info; // 0x18
			constexpr auto uid = 0x20;
			constexpr auto dirty = 0x28;
			constexpr auto amount = 0x2c;
			constexpr auto position = 0x30;
			constexpr auto busyTime = 0x34;
			constexpr auto removeTime = 0x38;
			constexpr auto fuel = 0x3c;
			constexpr auto isServer = 0x40;
			constexpr auto instanceData = 0x48;
			constexpr auto skin = 0x50;
			constexpr auto name = 0x58;
			constexpr auto streamerName = 0x60;
			constexpr auto text = 0x68;
			constexpr auto cookTimeLeft = 0x70;
			constexpr auto progressBar = 0x74;
			constexpr auto OnDirty = 0x78;
			constexpr auto flags = 0x80;
			constexpr auto contents = 0x88;
			constexpr auto parent = 0x90;
			constexpr auto worldEnt = 0x98;
			constexpr auto heldEntity = 0xA8;
			constexpr auto amountOverride = 0xb8;
		}
		namespace ItemContainer
		{
			constexpr auto flags = 0x10;
			constexpr auto allowedContents = 0x14;
			constexpr auto onlyAllowedItems = 0x18;
			constexpr auto availableSlots = 0x20;
			constexpr auto capacity = 0x28;
			constexpr auto uid = 0x30;
			constexpr auto dirty = 0x38;
			constexpr auto itemList = 0x40;
			constexpr auto temperature = 0x48;
			constexpr auto parent = 0x50;
			constexpr auto playerOwner = 0x58;
			constexpr auto entityOwner = 0x60;
			constexpr auto isServer = 0x68;
			constexpr auto maxStackSize = 0x6c;
		}
		namespace ItemCorpseOverride
		{
			constexpr auto MaleCorpse = 0x18; // GameObjectRef
			constexpr auto FemaleCorpse = 0x20; // GameObjectRef
			constexpr auto BlockWearableCopy = 0x28; // bool
		}
		namespace ItemBlueprint
		{
			constexpr auto ingredients = 0x18; // List`1
			constexpr auto additionalUnlocks = 0x20; // List`1
			constexpr auto defaultBlueprint = 0x28; // bool
			constexpr auto userCraftable = 0x29; // bool
			constexpr auto isResearchable = 0x2A; // bool
			constexpr auto forceShowInConveyorFilter = 0x2B; // bool
			constexpr auto rarity = 0x2C; // Rarity
			constexpr auto workbenchLevelRequired = 0x30; // int32_t
			constexpr auto scrapRequired = 0x34; // int32_t
			constexpr auto scrapFromRecycle = 0x38; // int32_t
			constexpr auto NeedsSteamItem = 0x3C; // bool
			constexpr auto blueprintStackSize = 0x40; // int32_t
			constexpr auto time = 0x44; // float
			constexpr auto amountToCreate = 0x48; // int32_t
			constexpr auto UnlockAchievment = 0x50; // string
			constexpr auto RecycleStat = 0x58; // string
		}
		namespace ItemDefinition
		{
			constexpr auto itemid = 0x18; // int32_t
			constexpr auto shortname = 0x20; // string
			constexpr auto displayName = 0x28; // Phrase
			constexpr auto displayDescription = 0x30; // Phrase
			constexpr auto iconSprite = 0x38; // Sprite
			constexpr auto category = 0x40; // ItemCategory
			constexpr auto selectionPanel = 0x44; // ItemSelectionPanel
			constexpr auto maxDraggable = 0x48; // int32_t
			constexpr auto itemType = 0x4C; // ContentsType
			constexpr auto amountType = 0x50; // AmountType
			constexpr auto occupySlots = 0x54; // ItemSlot
			constexpr auto stackable = 0x58; // int32_t
			constexpr auto quickDespawn = 0x5C; // bool
			constexpr auto rarity = 0x60; // Rarity
			constexpr auto despawnRarity = 0x64; // Rarity
			constexpr auto spawnAsBlueprint = 0x68; // bool
			constexpr auto inventoryGrabSound = 0x70; // SoundDefinition
			constexpr auto inventoryDropSound = 0x78; // SoundDefinition
			constexpr auto physImpactSoundDef = 0x80; // SoundDefinition
			constexpr auto condition = 0x88; // Condition
			constexpr auto hidden = 0xA0; // bool
			constexpr auto flags = 0xA4; // Flag
			constexpr auto steamItem = 0xA8; // SteamInventoryItem
			constexpr auto steamDlc = 0xB0; // SteamDLCItem
			constexpr auto Parent = 0xB8; // ItemDefinition
			constexpr auto worldModelPrefab = 0xC0; // GameObjectRef
			constexpr auto isRedirectOf = 0xC8; // ItemDefinition
			constexpr auto redirectVendingBehaviour = 0xD0; // RedirectVendingBehaviour
			constexpr auto itemMods = 0xD8; // ItemMod[]
			constexpr auto Traits = 0xE0; // TraitFlag
			constexpr auto skins = 0xE8; // Skin[]
			constexpr auto _skins2 = 0xF0; // IPlayerItemDefinition[]
			constexpr auto panel = 0xF8; // GameObject
			constexpr auto ItemModWearablek__BackingField = 0x100; // ItemModWearable
			constexpr auto isHoldablek__BackingField = 0x108; // bool
			constexpr auto isUsablek__BackingField = 0x109; // bool
			constexpr auto CraftableWithSkink__BackingField = 0x10A; // bool
			constexpr auto Children = 0x110; // ItemDefinition[]
		}
		namespace ItemCategory
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ItemSlot
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ItemSelectionPanel
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ItemSelector
		{
			constexpr auto category = 0x10; // ItemCategory
		}
		namespace ItemMod
		{
			constexpr auto siblingMods = 0x18; // ItemMod[]
		}
		namespace ItemModActionChange
		{
			constexpr auto actions = 0x20; // ItemMod[]
		}
		namespace ItemModActionContainerChange
		{
			constexpr auto actions = 0x20; // ItemMod[]
		}
		namespace ItemModAlterCondition
		{
			constexpr auto conditionChange = 0x20; // float
		}
		namespace ItemModAnimalEquipment
		{
			constexpr auto WearableFlag = 0x20; // Flags
			constexpr auto hideHair = 0x24; // bool
			constexpr auto animalProtection = 0x28; // ProtectionProperties
			constexpr auto riderProtection = 0x30; // ProtectionProperties
			constexpr auto additionalInventorySlots = 0x38; // int32_t
			constexpr auto speedModifier = 0x3C; // float
			constexpr auto staminaUseModifier = 0x40; // float
			constexpr auto slot = 0x44; // SlotType
		}
		namespace ItemModAssociatedEntity
		{
			constexpr auto entityPrefab = 0x0; // GameObjectRef
		}
		namespace ItemModBlueprintCraft
		{
			constexpr auto successEffect = 0x20; // GameObjectRef
		}
		namespace ItemModBurnable
		{
			constexpr auto fuelAmount = 0x20; // float
			constexpr auto byproductItem = 0x28; // ItemDefinition
			constexpr auto byproductAmount = 0x30; // int32_t
			constexpr auto byproductChance = 0x34; // float
		}
		namespace ItemModCassetteContainer
		{
			constexpr auto CassetteItems = 0x58; // ItemDefinition[]
		}
		namespace ItemModChildIO
		{
			constexpr auto TargetChildIO = 0x20; // GameObjectRef
		}
		namespace ItemModCompostable
		{
			constexpr auto TotalFertilizerProduced = 0x18; // float
			constexpr auto BaitValue = 0x1C; // float
		}
		namespace ItemModConditionContainerFlag
		{
			constexpr auto flag = 0x20; // Flag
			constexpr auto requiredState = 0x24; // bool
		}
		namespace ItemModConditionHasCondition
		{
			constexpr auto conditionTarget = 0x20; // float
			constexpr auto conditionFractionTarget = 0x24; // float
			constexpr auto lessThan = 0x28; // bool
		}
		namespace ItemModConditionHasContents
		{
			constexpr auto itemDef = 0x20; // ItemDefinition
			constexpr auto requiredState = 0x28; // bool
		}
		namespace ItemModConditionHasFlag
		{
			constexpr auto flag = 0x20; // Flag
			constexpr auto requiredState = 0x24; // bool
		}
		namespace ItemModConditionInWater
		{
			constexpr auto requiredState = 0x20; // bool
		}
		namespace ItemModConditionIsSleeping
		{
			constexpr auto requiredState = 0x20; // bool
		}
		namespace ItemModConsumable
		{
			constexpr auto amountToConsume = 0x18; // int32_t
			constexpr auto conditionFractionToLose = 0x1C; // float
			constexpr auto achievementWhenEaten = 0x20; // string
			constexpr auto effects = 0x28; // List`1
			constexpr auto modifiers = 0x30; // List`1
		}
		namespace ItemModConsume
		{
			constexpr auto consumeEffect = 0x20; // GameObjectRef
			constexpr auto eatGesture = 0x28; // string
			constexpr auto product = 0x30; // ItemAmountRandom[]
			constexpr auto primaryConsumable = 0x38; // ItemModConsumable
		}
		namespace ItemModConsumeChance
		{
			constexpr auto chanceForSecondaryConsume = 0x40; // float
			constexpr auto secondaryConsumeEffect = 0x48; // GameObjectRef
			constexpr auto secondaryConsumable = 0x50; // ItemModConsumable
		}
		namespace ItemModConsumeContents
		{
			constexpr auto consumeEffect = 0x20; // GameObjectRef
		}
		namespace ItemModContainer
		{
			constexpr auto capacity = 0x20; // int32_t
			constexpr auto maxStackSize = 0x24; // int32_t
			constexpr auto containerFlags = 0x28; // Flag
			constexpr auto onlyAllowedContents = 0x2C; // ContentsType
			constexpr auto onlyAllowedItemType = 0x30; // ItemDefinition
			constexpr auto availableSlots = 0x38; // List`1
			constexpr auto validItemWhitelist = 0x40; // ItemDefinition[]
			constexpr auto openInDeployed = 0x48; // bool
			constexpr auto openInInventory = 0x49; // bool
			constexpr auto defaultContents = 0x50; // List`1
		}
		namespace ItemModContainerRestriction
		{
			constexpr auto slotFlags = 0x20; // SlotFlags
		}
		namespace ItemModCookable
		{
			constexpr auto becomeOnCooked = 0x20; // ItemDefinition
			constexpr auto cookTime = 0x28; // float
			constexpr auto amountOfBecome = 0x2C; // int32_t
			constexpr auto lowTemp = 0x30; // int32_t
			constexpr auto highTemp = 0x34; // int32_t
			constexpr auto setCookingFlag = 0x38; // bool
		}
		namespace ItemModCycle
		{
			constexpr auto actions = 0x20; // ItemMod[]
			constexpr auto timeBetweenCycles = 0x28; // float
			constexpr auto timerStart = 0x2C; // float
			constexpr auto onlyAdvanceTimerWhenPass = 0x30; // bool
		}
		namespace ItemModDeployable
		{
			constexpr auto entityPrefab = 0x18; // GameObjectRef
			constexpr auto showCrosshair = 0x20; // bool
			constexpr auto UnlockAchievement = 0x28; // string
		}
		namespace ItemModEntity
		{
			constexpr auto entityPrefab = 0x20; // GameObjectRef
			constexpr auto defaultBone = 0x28; // string
		}
		namespace ItemModEntityReference
		{
			constexpr auto entityPrefab = 0x18; // GameObjectRef
		}
		namespace ItemModFishable
		{
			constexpr auto CanBeFished = 0x20; // bool
			constexpr auto StrainModifier = 0x24; // float
			constexpr auto MoveMultiplier = 0x28; // float
			constexpr auto ReelInSpeedMultiplier = 0x2C; // float
			constexpr auto CatchWaitTimeMultiplier = 0x30; // float
			constexpr auto MinimumBaitLevel = 0x34; // float
			constexpr auto MaximumBaitLevel = 0x38; // float
			constexpr auto MinimumWaterDepth = 0x3C; // float
			constexpr auto MaximumWaterDepth = 0x40; // float
			constexpr auto RequiredTag = 0x44; // FishingTag
			constexpr auto Chance = 0x48; // float
			constexpr auto SteamStatName = 0x50; // string
		}
		namespace ItemModGiveOxygen
		{
			constexpr auto airType = 0x20; // AirSupplyType
			constexpr auto amountToConsume = 0x24; // int32_t
			constexpr auto inhaleEffect = 0x28; // GameObjectRef
			constexpr auto exhaleEffect = 0x30; // GameObjectRef
			constexpr auto bubblesEffect = 0x38; // GameObjectRef
			constexpr auto timeRemaining = 0x40; // float
			constexpr auto cycleTime = 0x44; // float
		}
		namespace ItemModKeycard
		{
			constexpr auto accessLevel = 0x20; // int32_t
		}
		namespace ItemModMenuOption
		{
			constexpr auto commandName = 0x20; // string
			constexpr auto actionTarget = 0x28; // ItemMod
			constexpr auto option = 0x30; // Option
			constexpr auto isPrimaryOption = 0x50; // bool
		}
		namespace ItemModPaintable
		{
			constexpr auto ChangeSignTextDialog = 0x28; // GameObjectRef
			constexpr auto PaintableSources = 0x30; // MeshPaintableSource[]
			constexpr auto _paintStorage = 0x38; // EntityRef`1
		}
		namespace ItemModPetStats
		{
			constexpr auto SpeedModifier = 0x20; // float
			constexpr auto MaxHealthModifier = 0x24; // float
			constexpr auto AttackDamageModifier = 0x28; // float
			constexpr auto AttackRateModifier = 0x2C; // float
		}
		namespace ItemModProjectile
		{
			constexpr auto projectileObject = 0x18; // GameObjectRef
			constexpr auto mods = 0x20; // ItemModProjectileMod[]
			constexpr auto ammoType = 0x28; // AmmoTypes
			constexpr auto numProjectiles = 0x2C; // int32_t
			constexpr auto projectileSpread = 0x30; // float
			constexpr auto projectileVelocity = 0x34; // float
			constexpr auto projectileVelocitySpread = 0x38; // float
			constexpr auto useCurve = 0x3C; // bool
			constexpr auto spreadScalar = 0x40; // AnimationCurve
			constexpr auto attackEffectOverride = 0x48; // GameObjectRef
			constexpr auto barrelConditionLoss = 0x50; // float
			constexpr auto category = 0x58; // string
		}
		namespace ItemModProjectileRadialDamage
		{
			constexpr auto radius = 0x18; // float
			constexpr auto damage = 0x20; // DamageTypeEntry
			constexpr auto effect = 0x28; // GameObjectRef
			constexpr auto ignoreHitObject = 0x30; // bool
		}
		namespace ItemModProjectileSpawn
		{
			constexpr auto createOnImpactChance = 0x60; // float
			constexpr auto createOnImpact = 0x68; // GameObjectRef
			constexpr auto spreadAngle = 0x70; // float
			constexpr auto spreadVelocityMin = 0x74; // float
			constexpr auto spreadVelocityMax = 0x78; // float
			constexpr auto numToCreateChances = 0x7C; // int32_t
		}
		namespace ItemModRecycleInto
		{
			constexpr auto recycleIntoItem = 0x20; // ItemDefinition
			constexpr auto numRecycledItemMin = 0x28; // int32_t
			constexpr auto numRecycledItemMax = 0x2C; // int32_t
			constexpr auto successEffect = 0x30; // GameObjectRef
		}
		namespace ItemModRepair
		{
			constexpr auto conditionLost = 0x20; // float
			constexpr auto successEffect = 0x28; // GameObjectRef
			constexpr auto workbenchLvlRequired = 0x30; // int32_t
		}
		namespace ItemModReveal
		{
			constexpr auto numForReveal = 0x20; // int32_t
			constexpr auto revealedItemOverride = 0x28; // ItemDefinition
			constexpr auto revealedItemAmount = 0x30; // int32_t
			constexpr auto revealList = 0x38; // LootSpawn
			constexpr auto successEffect = 0x40; // GameObjectRef
		}
		namespace ItemModSound
		{
			constexpr auto effect = 0x20; // GameObjectRef
			constexpr auto actionType = 0x28; // Type
		}
		namespace ItemModStudyBlueprint
		{
			constexpr auto studyEffect = 0x20; // GameObjectRef
		}
		namespace ItemModSummerSunglassesEquip
		{
			constexpr auto SunsetTime = 0x20; // float
			constexpr auto SunriseTime = 0x24; // float
			constexpr auto AchivementName = 0x28; // string
		}
		namespace ItemModSwap
		{
			constexpr auto actionEffect = 0x20; // GameObjectRef
			constexpr auto becomeItem = 0x28; // ItemAmount[]
			constexpr auto sendPlayerPickupNotification = 0x30; // bool
			constexpr auto sendPlayerDropNotification = 0x31; // bool
			constexpr auto xpScale = 0x34; // float
			constexpr auto RandomOptions = 0x38; // ItemAmount[]
		}
		namespace ItemModSwitchFlag
		{
			constexpr auto flag = 0x20; // Flag
			constexpr auto state = 0x24; // bool
		}
		namespace ItemModUpgrade
		{
			constexpr auto numForUpgrade = 0x20; // int32_t
			constexpr auto upgradeSuccessChance = 0x24; // float
			constexpr auto numToLoseOnFail = 0x28; // int32_t
			constexpr auto upgradedItem = 0x30; // ItemDefinition
			constexpr auto numUpgradedItem = 0x38; // int32_t
			constexpr auto successEffect = 0x40; // GameObjectRef
			constexpr auto failEffect = 0x48; // GameObjectRef
		}
		namespace ItemModUseContent
		{
			constexpr auto amountToConsume = 0x20; // int32_t
		}
		namespace ItemModWearable
		{
			constexpr auto entityPrefab = 0x20; // GameObjectRef
			constexpr auto entityPrefabFemale = 0x28; // GameObjectRef
			constexpr auto protectionProperties = 0x30; // ProtectionProperties
			constexpr auto armorProperties = 0x38; // ArmorProperties
			constexpr auto movementProperties = 0x40; // ClothingMovementProperties
			constexpr auto occlusionType = 0x48; // blackoutType
			constexpr auto blocksAiming = 0x4C; // bool
			constexpr auto emissive = 0x4D; // bool
			constexpr auto accuracyBonus = 0x50; // float
			constexpr auto blocksEquipping = 0x54; // bool
			constexpr auto eggVision = 0x58; // float
			constexpr auto weight = 0x5C; // float
			constexpr auto equipOnRightClick = 0x60; // bool
			constexpr auto npcOnly = 0x61; // bool
			constexpr auto breakEffect = 0x68; // GameObjectRef
			constexpr auto viewmodelAddition = 0x70; // GameObjectRef
		}
		namespace ItemModXPWhenUsed
		{
			constexpr auto xpPerUnit = 0x20; // float
			constexpr auto unitSize = 0x24; // int32_t
		}
		namespace ItemFootstepSounds
		{
			constexpr auto effectFolder = 0x18; // string
		}
		namespace ItemAmount
		{
			constexpr auto itemDef = 0x10; // ItemDefinition
			constexpr auto amount = 0x18; // float
			constexpr auto startAmount = 0x1C; // float
		}
		namespace ItemAmountRandom
		{
			constexpr auto itemDef = 0x10; // ItemDefinition
			constexpr auto amount = 0x18; // AnimationCurve
		}
		namespace ItemAmountRanged
		{
			constexpr auto maxAmount = 0x20; // float
		}
		namespace ItemManager
		{
			constexpr auto itemList = 0x0; // List`1
			constexpr auto itemDictionary = 0x8; // Dictionary`2
			constexpr auto itemDictionaryByName = 0x10; // Dictionary`2
			constexpr auto bpList = 0x18; // List`1
			constexpr auto defaultBlueprints = 0x20; // int32_t[]
			constexpr auto blueprintBaseDef = 0x28; // ItemDefinition
		}
		namespace LeavesBlowing
		{
			constexpr auto m_psLeaves = 0x18; // ParticleSystem
			constexpr auto m_flSwirl = 0x20; // float
			constexpr auto m_flSpeed = 0x24; // float
			constexpr auto m_flEmissionRate = 0x28; // float
		}
		namespace MaterialEffect
		{
			constexpr auto DefaultEffect = 0x18; // GameObjectRef
			constexpr auto DefaultSoundDefinition = 0x20; // SoundDefinition
			constexpr auto Entries = 0x28; // Entry[]
			constexpr auto waterFootstepIndex = 0x30; // int32_t
			constexpr auto deepWaterEntry = 0x38; // Entry
			constexpr auto deepWaterDepth = 0x40; // float
			constexpr auto submergedWaterEntry = 0x48; // Entry
			constexpr auto submergedWaterDepth = 0x50; // float
			constexpr auto ScaleVolumeWithSpeed = 0x54; // bool
			constexpr auto SpeedGainCurve = 0x58; // AnimationCurve
		}
		namespace MaterialSound
		{
			constexpr auto DefaultSound = 0x18; // SoundDefinition
			constexpr auto Entries = 0x20; // Entry[]
		}
		namespace MaxSpawnDistance
		{
			constexpr auto maxDistance = 0x18; // float
		}
		namespace BaseMission
		{
			constexpr auto shortname = 0x20; // string
			constexpr auto missionName = 0x28; // Phrase
			constexpr auto missionDesc = 0x30; // Phrase
			constexpr auto objectives = 0x38; // MissionObjectiveEntry[]
			constexpr auto acceptEffect = 0x40; // GameObjectRef
			constexpr auto failedEffect = 0x48; // GameObjectRef
			constexpr auto victoryEffect = 0x50; // GameObjectRef
			constexpr auto repeatDelaySecondsSuccess = 0x58; // int32_t
			constexpr auto repeatDelaySecondsFailed = 0x5C; // int32_t
			constexpr auto timeLimitSeconds = 0x60; // float
			constexpr auto icon = 0x68; // Sprite
			constexpr auto providerIcon = 0x70; // Sprite
			constexpr auto acceptDependancies = 0x78; // MissionDependancy[]
			constexpr auto completionDependancies = 0x80; // MissionDependancy[]
			constexpr auto missionEntities = 0x88; // MissionEntityEntry[]
			constexpr auto positionGenerators = 0x90; // PositionGenerator[]
			constexpr auto baseRewards = 0x98; // ItemAmount[]
		}
		namespace MissionEntity
		{
			constexpr auto cleanupOnMissionSuccess = 0x18; // bool
			constexpr auto cleanupOnMissionFailed = 0x19; // bool
		}
		namespace MissionManifest
		{
			constexpr auto missionList = 0x18; // ScriptableObjectRef[]
			constexpr auto positionGenerators = 0x20; // WorldPositionGenerator[]
			constexpr auto instance = 0x0; // MissionManifest
		}
		namespace MissionPoint
		{
			constexpr auto dropToGround = 0x18; // bool
			constexpr auto type2index = 0x0; // Dictionary`2
		}
		namespace MoveMission
		{
			constexpr auto minDistForMovePoint = 0xA0; // float
			constexpr auto maxDistForMovePoint = 0xA4; // float
		}
		namespace MissionUIPanel
		{
			constexpr auto activeMissionParent = 0x18; // GameObject
			constexpr auto missionTitleText = 0x20; // RustText
			constexpr auto missionDescText = 0x28; // RustText
			constexpr auto rewardIcons = 0x30; // VirtualItemIcon[]
			constexpr auto noMissionText = 0x38; // Phrase
			constexpr auto instance = 0x0; // MissionUIPanel
			constexpr auto dirty = 0x40; // bool
		}
		namespace MissionObjective_AcquireItem
		{
			constexpr auto itemShortname = 0x18; // string
			constexpr auto targetItemAmount = 0x20; // int32_t
		}
		namespace MissionObjective_FreeCrate
		{
			constexpr auto targetAmount = 0x18; // int32_t
		}
		namespace MissionObjective_Harvest
		{
			constexpr auto itemShortnames = 0x18; // string[]
			constexpr auto targetItemAmount = 0x20; // int32_t
		}
		namespace MissionObjective_KillEntity
		{
			constexpr auto targetPrefabIDs = 0x18; // string[]
			constexpr auto numToKill = 0x20; // int32_t
			constexpr auto shouldUpdateMissionLocation = 0x24; // bool
		}
		namespace MissionObjective_Move
		{
			constexpr auto positionName = 0x18; // string
			constexpr auto distForCompletion = 0x20; // float
			constexpr auto use2D = 0x24; // bool
		}
		namespace MissionObjective_SpeakWith
		{
			constexpr auto requiredReturnItems = 0x18; // ItemAmount[]
			constexpr auto destroyReturnItems = 0x20; // bool
		}
		namespace WorldPositionGenerator
		{
			constexpr auto Filter = 0x18; // SpawnFilter
			constexpr auto FilterCutoff = 0x20; // float
			constexpr auto aboveWater = 0x24; // bool
			constexpr auto MaxSlopeRadius = 0x28; // float
			constexpr auto MaxSlopeDegrees = 0x2C; // float
			constexpr auto CheckSphereRadius = 0x30; // float
			constexpr auto CheckSphereMask = 0x34; // LayerMask
		}
		namespace MovementSounds
		{
			constexpr auto waterMovementDef = 0x18; // SoundDefinition
			constexpr auto waterMovementFadeInSpeed = 0x20; // float
			constexpr auto waterMovementFadeOutSpeed = 0x24; // float
			constexpr auto enterWaterSmall = 0x28; // SoundDefinition
			constexpr auto enterWaterMedium = 0x30; // SoundDefinition
			constexpr auto enterWaterLarge = 0x38; // SoundDefinition
			constexpr auto waterMovement = 0x40; // Sound
			constexpr auto waterGainMod = 0x48; // Modulator
			constexpr auto inWater = 0x50; // bool
			constexpr auto waterLevel = 0x54; // float
			constexpr auto mute = 0x58; // bool
			constexpr auto ent = 0x60; // BaseEntity
			constexpr auto velocity = 0x68; // Vector3
			constexpr auto velocityReadings = 0x74; // int32_t
			constexpr auto movementYSmoothed = 0x78; // float
			constexpr auto wasInWater = 0x7C; // bool
			constexpr auto lastTime = 0x80; // float
		}
		namespace MoveOverTime
		{
			constexpr auto speed = 0x18; // float
			constexpr auto position = 0x1C; // Vector3
			constexpr auto rotation = 0x28; // Vector3
			constexpr auto scale = 0x34; // Vector3
		}
		namespace NetworkCryptography
		{
			constexpr auto buffer = 0x10; // char[]
		}
		namespace NetworkVisibilityGrid
		{
			constexpr auto startID = 0x18; // int32_t
			constexpr auto gridSize = 0x1C; // int32_t
			constexpr auto cellCount = 0x20; // int32_t
			constexpr auto visibilityRadiusFar = 0x24; // int32_t
			constexpr auto visibilityRadiusNear = 0x28; // int32_t
			constexpr auto switchTolerance = 0x2C; // float
			constexpr auto cavesThreshold = 0x30; // float
			constexpr auto tunnelsThreshold = 0x34; // float
			constexpr auto dynamicDungeonsThreshold = 0x38; // float
			constexpr auto dynamicDungeonsInterval = 0x3C; // float
		}
		namespace NVidiaReflex
		{
			constexpr auto previousIntervalUs = 0x18; // uint32_t
			constexpr auto previousMode = 0x1C; // int32_t
			constexpr auto hasSimulationStarted = 0x20; // bool
			constexpr auto prevUseMarkersToOptimize = 0x21; // bool
			constexpr auto commandBufferManager = 0x28; // CommandBufferManager
			constexpr auto renderSubmitStart = 0x30; // CommandBufferDesc
			constexpr auto renderSubmitEnd = 0x38; // CommandBufferDesc
		}
		namespace BlurType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace BlurOptimized
		{
			constexpr auto downsample = 0x30; // FixedIntParameter
			constexpr auto blurIterations = 0x38; // FixedIntParameter
			constexpr auto blurSize = 0x40; // FloatParameter
			constexpr auto fadeToBlurDistance = 0x48; // FloatParameter
			constexpr auto blurType = 0x50; // BlurTypeParameter
		}
		namespace BlurOptimizedRenderer
		{
			constexpr auto dataProperty = 0x20; // int32_t
			constexpr auto blurShader = 0x28; // Shader
		}
		namespace CustomPostEffectsResources
		{
			constexpr auto shaders = 0x18; // Shader[]
		}
		namespace DOFBlurSampleCount
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DepthOfFieldEffect
		{
			constexpr auto focalLength = 0x30; // FloatParameter
			constexpr auto focalSize = 0x38; // FloatParameter
			constexpr auto aperture = 0x40; // FloatParameter
			constexpr auto maxBlurSize = 0x48; // FloatParameter
			constexpr auto highResolution = 0x50; // BoolParameter
			constexpr auto blurSampleCount = 0x58; // DOFBlurSampleCountParameter
			constexpr auto focalTransform = 0x60; // Transform
		}
		namespace DepthOfFieldEffectRenderer
		{
			constexpr auto focalDistance01 = 0x20; // float
			constexpr auto internalBlurWidth = 0x24; // float
			constexpr auto dofShader = 0x28; // Shader
		}
		namespace DoubleVision
		{
			constexpr auto displace = 0x30; // Vector2Parameter
			constexpr auto amount = 0x38; // FloatParameter
		}
		namespace DoubleVisionRenderer
		{
			constexpr auto displaceProperty = 0x20; // int32_t
			constexpr auto amountProperty = 0x24; // int32_t
			constexpr auto doubleVisionShader = 0x28; // Shader
		}
		namespace FlashbangEffect
		{
			constexpr auto burnIntensity = 0x30; // FloatParameter
			constexpr auto whiteoutIntensity = 0x38; // FloatParameter
		}
		namespace FlashbangEffectRenderer
		{
			constexpr auto needsCapture = 0x0; // bool
			constexpr auto flashbangEffectShader = 0x20; // Shader
			constexpr auto screenRT = 0x28; // RenderTexture
		}
		namespace Frost
		{
			constexpr auto scale = 0x30; // FloatParameter
			constexpr auto enableVignette = 0x38; // BoolParameter
			constexpr auto sharpness = 0x40; // FloatParameter
			constexpr auto darkness = 0x48; // FloatParameter
		}
		namespace FrostRenderer
		{
			constexpr auto scaleProperty = 0x20; // int32_t
			constexpr auto sharpnessProperty = 0x24; // int32_t
			constexpr auto darknessProperty = 0x28; // int32_t
			constexpr auto frostShader = 0x30; // Shader
		}
		namespace BlendModeType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ResolutionType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace GodRays
		{
			constexpr auto UseDepth = 0x30; // BoolParameter
			constexpr auto BlendMode = 0x38; // BlendModeTypeParameter
			constexpr auto Intensity = 0x40; // FloatParameter
			constexpr auto Resolution = 0x48; // ResolutionTypeParameter
			constexpr auto BlurIterations = 0x50; // IntParameter
			constexpr auto BlurRadius = 0x58; // FloatParameter
			constexpr auto MaxRadius = 0x60; // FloatParameter
		}
		namespace GodRaysRenderer
		{
			constexpr auto GodRayShader = 0x20; // Shader
			constexpr auto ScreenClearShader = 0x28; // Shader
			constexpr auto SkyMaskShader = 0x30; // Shader
		}
		namespace GreyScale
		{
			constexpr auto redLuminance = 0x30; // FloatParameter
			constexpr auto greenLuminance = 0x38; // FloatParameter
			constexpr auto blueLuminance = 0x40; // FloatParameter
			constexpr auto amount = 0x48; // FloatParameter
			constexpr auto color = 0x50; // ColorParameter
		}
		namespace GreyScaleRenderer
		{
			constexpr auto dataProperty = 0x20; // int32_t
			constexpr auto colorProperty = 0x24; // int32_t
			constexpr auto greyScaleShader = 0x28; // Shader
		}
		namespace LensDirtinessEffect
		{
			constexpr auto dirtinessTexture = 0x30; // TextureParameter
			constexpr auto sceneTintsBloom = 0x38; // BoolParameter
			constexpr auto gain = 0x40; // FloatParameter
			constexpr auto threshold = 0x48; // FloatParameter
			constexpr auto bloomSize = 0x50; // FloatParameter
			constexpr auto dirtiness = 0x58; // FloatParameter
			constexpr auto bloomColor = 0x60; // ColorParameter
		}
		namespace LensDirtinessRenderer
		{
			constexpr auto dataProperty = 0x20; // int32_t
			constexpr auto lensDirtinessShader = 0x28; // Shader
		}
		namespace PhotoFilter
		{
			constexpr auto color = 0x30; // ColorParameter
			constexpr auto density = 0x38; // FloatParameter
		}
		namespace PhotoFilterRenderer
		{
			constexpr auto rgbProperty = 0x20; // int32_t
			constexpr auto densityProperty = 0x24; // int32_t
			constexpr auto greyScaleShader = 0x28; // Shader
		}
		namespace OverlayBlendMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ScreenOverlay
		{
			constexpr auto blendMode = 0x30; // OverlayBlendModeParameter
			constexpr auto intensity = 0x38; // FloatParameter
			constexpr auto texture = 0x40; // TextureParameter
			constexpr auto normals = 0x48; // TextureParameter
		}
		namespace ScreenOverlayRenderer
		{
			constexpr auto overlayShader = 0x20; // Shader
		}
		namespace SharpenAndVignette
		{
			constexpr auto applySharpen = 0x30; // BoolParameter
			constexpr auto strength = 0x38; // FloatParameter
			constexpr auto clamp = 0x40; // FloatParameter
			constexpr auto applyVignette = 0x48; // BoolParameter
			constexpr auto sharpness = 0x50; // FloatParameter
			constexpr auto darkness = 0x58; // FloatParameter
		}
		namespace SharpenAndVignetteRenderer
		{
			constexpr auto sharpenAndVigenetteShader = 0x20; // Shader
		}
		namespace Wiggle
		{
			constexpr auto speed = 0x30; // FloatParameter
			constexpr auto scale = 0x38; // FloatParameter
		}
		namespace WiggleRenderer
		{
			constexpr auto timerProperty = 0x20; // int32_t
			constexpr auto scaleProperty = 0x24; // int32_t
			constexpr auto wiggleShader = 0x28; // Shader
			constexpr auto timer = 0x30; // float
		}
		namespace PostProcessVolumeLOD
		{
			constexpr auto distance = 0x18; // float
			constexpr auto cell = 0x20; // LODCell
			constexpr auto postProcessVolume = 0x28; // PostProcessVolume
			constexpr auto environmentMode = 0x30; // LODEnvironmentMode
		}
		namespace BoundsCheck
		{
			constexpr auto IsType = 0x98; // BlockType
		}
		namespace SpawnableBoundsBlocker
		{
			constexpr auto BlockType = 0x18; // BlockType
			constexpr auto BoxCollider = 0x20; // BoxCollider
		}
		namespace ByteMap
		{
			constexpr auto size = 0x10; // int32_t
			constexpr auto bytes = 0x14; // int32_t
			constexpr auto values = 0x18; // char[]
		}
		namespace ByteQuadtree
		{
			constexpr auto size = 0x10; // int32_t
			constexpr auto levels = 0x14; // int32_t
			constexpr auto values = 0x18; // charMap[]
		}
		namespace ImageProcessing
		{
			constexpr auto signaturePNG = 0x0; // char[]
			constexpr auto signatureIHDR = 0x8; // char[]
		}
		namespace ManagedNoise
		{
			constexpr auto hash = 0x0; // int32_t[]
			constexpr auto gradients1D = 0x8; // Double[]
			constexpr auto gradients2Dx = 0x10; // Double[]
			constexpr auto gradients2Dy = 0x18; // Double[]
		}
		namespace NoiseParameters
		{
			constexpr auto Octaves = 0x0; // int32_t
			constexpr auto Frequency = 0x4; // float
			constexpr auto Amplitude = 0x8; // float
			constexpr auto Offset = 0xC; // float
		}
		namespace PathList
		{
			constexpr auto rot90 = 0x0; // Quaternion
			constexpr auto rot180 = 0x10; // Quaternion
			constexpr auto rot270 = 0x20; // Quaternion
			constexpr auto Name = 0x10; // string
			constexpr auto Path = 0x18; // PathInterpolator
			constexpr auto Spline = 0x20; // bool
			constexpr auto Start = 0x21; // bool
			constexpr auto End = 0x22; // bool
			constexpr auto Width = 0x24; // float
			constexpr auto InnerPadding = 0x28; // float
			constexpr auto OuterPadding = 0x2C; // float
			constexpr auto InnerFade = 0x30; // float
			constexpr auto OuterFade = 0x34; // float
			constexpr auto RandomScale = 0x38; // float
			constexpr auto MeshOffset = 0x3C; // float
			constexpr auto TerrainOffset = 0x40; // float
			constexpr auto Topology = 0x44; // int32_t
			constexpr auto Splat = 0x48; // int32_t
			constexpr auto Hierarchy = 0x4C; // int32_t
			constexpr auto ProcgenStartNode = 0x50; // Node
			constexpr auto ProcgenEndNode = 0x58; // Node
			constexpr auto placements = 0x30; // float[]
		}
		namespace SpawnFilter
		{
			constexpr auto SplatType = 0x10; // Enum
			constexpr auto BiomeType = 0x14; // Enum
			constexpr auto TopologyAny = 0x18; // Enum
			constexpr auto TopologyAll = 0x1C; // Enum
			constexpr auto TopologyNot = 0x20; // Enum
		}
		namespace TerrainConfig
		{
			constexpr auto CastShadows = 0x18; // bool
			constexpr auto GroundMask = 0x1C; // LayerMask
			constexpr auto WaterMask = 0x20; // LayerMask
			constexpr auto GenericMaterial = 0x28; // PhysicMaterial
			constexpr auto Material = 0x30; // Material
			constexpr auto MarginMaterial = 0x38; // Material
			constexpr auto AlbedoArrays = 0x40; // Texture[]
			constexpr auto NormalArrays = 0x48; // Texture[]
			constexpr auto HeightMapErrorMin = 0x50; // float
			constexpr auto HeightMapErrorMax = 0x54; // float
			constexpr auto BaseMapDistanceMin = 0x58; // float
			constexpr auto BaseMapDistanceMax = 0x5C; // float
			constexpr auto ShaderLodMin = 0x60; // float
			constexpr auto ShaderLodMax = 0x64; // float
			constexpr auto Splats = 0x68; // SplatType[]
			constexpr auto snowMatName = 0x70; // string
			constexpr auto grassMatName = 0x78; // string
			constexpr auto sandMatName = 0x80; // string
			constexpr auto dirtMatNames = 0x88; // List`1
			constexpr auto stoneyMatNames = 0x90; // List`1
		}
		namespace AsyncTerrainNavMeshBake
		{
			constexpr auto indices = 0x10; // List`1
			constexpr auto vertices = 0x18; // List`1
			constexpr auto normals = 0x20; // List`1
			constexpr auto triangles = 0x28; // List`1
			constexpr auto pivot = 0x30; // Vector3
			constexpr auto width = 0x3C; // int32_t
			constexpr auto height = 0x40; // int32_t
			constexpr auto normal = 0x44; // bool
			constexpr auto alpha = 0x45; // bool
			constexpr auto worker = 0x48; // Action
		}
		namespace TextureData
		{
			constexpr auto width = 0x0; // int32_t
			constexpr auto height = 0x4; // int32_t
			constexpr auto colors = 0x8; // Color32[]
		}
		namespace World
		{
			constexpr auto Seedk__BackingField = 0x0; // uint32_t
			constexpr auto Sizek__BackingField = 0x4; // uint32_t
			constexpr auto Checksumk__BackingField = 0x8; // string
			constexpr auto Urlk__BackingField = 0x10; // string
			constexpr auto Proceduralk__BackingField = 0x18; // bool
			constexpr auto Cachedk__BackingField = 0x19; // bool
			constexpr auto Networkedk__BackingField = 0x1A; // bool
			constexpr auto Receivingk__BackingField = 0x1B; // bool
			constexpr auto Transferk__BackingField = 0x1C; // bool
			constexpr auto LoadedFromSavek__BackingField = 0x1D; // bool
			constexpr auto SpawnIndexk__BackingField = 0x20; // int32_t
			constexpr auto Serializationk__BackingField = 0x28; // WorldSerialization
			constexpr auto cache = 0x0; // bool
			constexpr auto streaming = 0x1; // bool
		}
		namespace DecorComponent
		{
			constexpr auto isRoot = 0x98; // bool
		}
		namespace DecorAlign
		{
			constexpr auto NormalAlignment = 0xA0; // float
			constexpr auto GradientAlignment = 0xA4; // float
			constexpr auto SlopeOffset = 0xA8; // Vector3
			constexpr auto SlopeScale = 0xB4; // Vector3
		}
		namespace DecorFlip
		{
			constexpr auto FlipAxis = 0xA0; // AxisType
		}
		namespace DecorOffset
		{
			constexpr auto MinOffset = 0xA0; // Vector3
			constexpr auto MaxOffset = 0xAC; // Vector3
		}
		namespace DecorRotate
		{
			constexpr auto MinRotation = 0xA0; // Vector3
			constexpr auto MaxRotation = 0xAC; // Vector3
		}
		namespace DecorScale
		{
			constexpr auto MinScale = 0xA0; // Vector3
			constexpr auto MaxScale = 0xAC; // Vector3
		}
		namespace DecorTransform
		{
			constexpr auto Position = 0xA0; // Vector3
			constexpr auto Rotation = 0xAC; // Vector3
			constexpr auto Scale = 0xB8; // Vector3
		}
		namespace DecorPatch
		{
			constexpr auto initialized = 0x10; // bool
			constexpr auto LOD = 0x14; // float
			constexpr auto shift = 0x18; // float
			constexpr auto extent = 0x1C; // float
			constexpr auto offset = 0x20; // Vector3
			constexpr auto position = 0x2C; // Vector3
			constexpr auto decorSpawn = 0x38; // DecorSpawn
			constexpr auto spawns = 0x40; // List`1
		}
		namespace DecorSpawn
		{
			constexpr auto Instances = 0x0; // List`1
			constexpr auto Enabled = 0x8; // bool
			constexpr auto Filter = 0x18; // SpawnFilter
			constexpr auto ResourceFolder = 0x20; // string
			constexpr auto Seed = 0x28; // uint32_t
			constexpr auto ObjectCutoff = 0x2C; // float
			constexpr auto ObjectTapering = 0x30; // float
			constexpr auto ObjectsPerPatch = 0x34; // int32_t
			constexpr auto ClusterRadius = 0x38; // float
			constexpr auto ClusterSizeMin = 0x3C; // int32_t
			constexpr auto ClusterSizeMax = 0x40; // int32_t
			constexpr auto PatchCount = 0x44; // int32_t
			constexpr auto PatchSize = 0x48; // int32_t
			constexpr auto LOD = 0x4C; // bool
			constexpr auto Anchor = 0x50; // Transform
			constexpr auto Prefabs = 0x58; // Prefab[]
			constexpr auto patches = 0x60; // DecorPatch[]
		}
		namespace DungeonBaseInfo
		{
			constexpr auto Links = 0x30; // List`1
			constexpr auto Floors = 0x38; // List`1
		}
		namespace DungeonBaseFloor
		{
			constexpr auto Links = 0x10; // List`1
		}
		namespace DungeonBaseLandmarkInfo
		{
			constexpr auto baseLink = 0x30; // DungeonBaseLink
			constexpr auto layer = 0x38; // Nullable`1
		}
		namespace DungeonBaseLink
		{
			constexpr auto Type = 0x18; // DungeonBaseLinkType
			constexpr auto Cost = 0x1C; // int32_t
			constexpr auto MaxFloor = 0x20; // int32_t
			constexpr auto MaxCountLocal = 0x24; // int32_t
			constexpr auto MaxCountGlobal = 0x28; // int32_t
			constexpr auto MaxCountIdentifier = 0x2C; // int32_t
			constexpr auto Dungeon = 0x30; // DungeonBaseInfo
			constexpr auto MapRenderers = 0x38; // MeshRenderer[]
			constexpr auto sockets = 0x40; // List`1
			constexpr auto volumes = 0x48; // List`1
		}
		namespace DungeonBaseLinkType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DungeonBaseSocket
		{
			constexpr auto Type = 0x18; // DungeonBaseSocketType
			constexpr auto Male = 0x1C; // bool
			constexpr auto Female = 0x1D; // bool
		}
		namespace DungeonBaseSocketType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DungeonBaseTransition
		{
			constexpr auto Type = 0x18; // DungeonBaseSocketType
			constexpr auto Neighbour1 = 0x1C; // DungeonBaseLinkType
			constexpr auto Neighbour2 = 0x20; // DungeonBaseLinkType
		}
		namespace DungeonGridCell
		{
			constexpr auto North = 0x18; // DungeonGridConnectionType
			constexpr auto South = 0x1C; // DungeonGridConnectionType
			constexpr auto West = 0x20; // DungeonGridConnectionType
			constexpr auto East = 0x24; // DungeonGridConnectionType
			constexpr auto NorthVariant = 0x28; // DungeonGridConnectionVariant
			constexpr auto SouthVariant = 0x2C; // DungeonGridConnectionVariant
			constexpr auto WestVariant = 0x30; // DungeonGridConnectionVariant
			constexpr auto EastVariant = 0x34; // DungeonGridConnectionVariant
			constexpr auto AvoidNeighbours = 0x38; // GameObjectRef[]
			constexpr auto MapRenderers = 0x40; // MeshRenderer[]
		}
		namespace DungeonGridConnectionType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DungeonGridConnectionVariant
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DungeonGridConnectionHash
		{
			constexpr auto North = 0x0; // bool
			constexpr auto South = 0x1; // bool
			constexpr auto West = 0x2; // bool
			constexpr auto East = 0x3; // bool
		}
		namespace DungeonGridInfo
		{
			constexpr auto CellSize = 0x30; // int32_t
			constexpr auto LinkHeight = 0x34; // float
			constexpr auto LinkRadius = 0x38; // float
			constexpr auto Links = 0x40; // List`1
		}
		namespace DungeonGridLink
		{
			constexpr auto UpSocket = 0x18; // Transform
			constexpr auto DownSocket = 0x20; // Transform
			constexpr auto UpType = 0x28; // DungeonGridLinkType
			constexpr auto DownType = 0x2C; // DungeonGridLinkType
			constexpr auto Priority = 0x30; // int32_t
			constexpr auto Rotation = 0x34; // int32_t
		}
		namespace DungeonGridLinkType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DungeonVolume
		{
			constexpr auto bounds = 0x18; // Bounds
		}
		namespace BiomeVisuals
		{
			constexpr auto Arid = 0x18; // GameObject
			constexpr auto Temperate = 0x20; // GameObject
			constexpr auto Tundra = 0x28; // GameObject
			constexpr auto Arctic = 0x30; // GameObject
		}
		namespace RandomDestroy
		{
			constexpr auto Seed = 0x18; // uint32_t
			constexpr auto Probability = 0x1C; // float
		}
		namespace RandomDynamicObject
		{
			constexpr auto Seed = 0x18; // uint32_t
			constexpr auto Distance = 0x1C; // float
			constexpr auto Probability = 0x20; // float
			constexpr auto Candidates = 0x28; // GameObject[]
			constexpr auto instance = 0x30; // GameObject
			constexpr auto cell = 0x38; // LODCell
		}
		namespace RandomDynamicPrefab
		{
			constexpr auto Seed = 0x18; // uint32_t
			constexpr auto Distance = 0x1C; // float
			constexpr auto Probability = 0x20; // float
			constexpr auto ResourceFolder = 0x28; // string
			constexpr auto prefab = 0x30; // Prefab
			constexpr auto instance = 0x38; // GameObject
			constexpr auto cell = 0x40; // LODCell
		}
		namespace RandomStaticObject
		{
			constexpr auto Seed = 0x18; // uint32_t
			constexpr auto Probability = 0x1C; // float
			constexpr auto Candidates = 0x20; // GameObject[]
		}
		namespace RandomStaticPrefab
		{
			constexpr auto Seed = 0x18; // uint32_t
			constexpr auto Probability = 0x1C; // float
			constexpr auto ResourceFolder = 0x20; // string
		}
		namespace ParticlePatch
		{
			constexpr auto initialized = 0x10; // bool
			constexpr auto LOD = 0x14; // float
			constexpr auto shift = 0x18; // float
			constexpr auto extent = 0x1C; // float
			constexpr auto offset = 0x20; // Vector3
			constexpr auto position = 0x2C; // Vector3
			constexpr auto didHit = 0x38; // bool
			constexpr auto hitRefreshTime = 0x3C; // float
			constexpr auto raycastHit = 0x40; // RaycastHit
			constexpr auto particleSpawn = 0x70; // ParticleSpawn
			constexpr auto spawns = 0x78; // List`1
		}
		namespace ParticleSpawn
		{
			constexpr auto Prefabs = 0x18; // GameObjectRef[]
			constexpr auto PatchCount = 0x20; // int32_t
			constexpr auto PatchSize = 0x24; // int32_t
			constexpr auto Origink__BackingField = 0x28; // Vector3
			constexpr auto patches = 0x38; // ParticlePatch[]
		}
		namespace PowerlineNode
		{
			constexpr auto WirePrefab = 0x18; // GameObjectRef
			constexpr auto MaxDistance = 0x20; // float
		}
		namespace RemoveChildObjectsAlongPath
		{
			constexpr auto Node1 = 0x18; // Transform
			constexpr auto Node2 = 0x20; // Transform
			constexpr auto Distance = 0x28; // float
		}
		namespace TerrainPathChildObjects
		{
			constexpr auto Spline = 0x18; // bool
			constexpr auto Width = 0x1C; // float
			constexpr auto Offset = 0x20; // float
			constexpr auto Fade = 0x24; // float
			constexpr auto Splat = 0x28; // Enum
			constexpr auto Topology = 0x2C; // Enum
			constexpr auto Type = 0x30; // InfrastructureType
		}
		namespace TerrainPathConnect
		{
			constexpr auto Type = 0x18; // InfrastructureType
		}
		namespace PathSequencePowerline
		{
			constexpr auto Rule = 0x98; // SequenceRule
		}
		namespace PowerLineWire
		{
			constexpr auto poles = 0x18; // List`1
			constexpr auto connections = 0x20; // List`1
			constexpr auto spans = 0x28; // List`1
		}
		namespace PowerLineWireConnectionDef
		{
			constexpr auto inOffset = 0x10; // Vector3
			constexpr auto outOffset = 0x1C; // Vector3
			constexpr auto radius = 0x28; // float
			constexpr auto hidden = 0x2C; // bool
		}
		namespace PowerLineWireConnection
		{
			constexpr auto inOffset = 0x10; // Vector3
			constexpr auto outOffset = 0x1C; // Vector3
			constexpr auto radius = 0x28; // float
			constexpr auto start = 0x30; // Transform
			constexpr auto end = 0x38; // Transform
		}
		namespace PowerLineWireConnectionHelper
		{
			constexpr auto connections = 0x18; // List`1
			constexpr auto showgizmo = 0x20; // bool
		}
		namespace PowerLineWireSpan
		{
			constexpr auto wirePrefab = 0x18; // GameObjectRef
			constexpr auto start = 0x20; // Transform
			constexpr auto end = 0x28; // Transform
			constexpr auto WireLength = 0x30; // float
			constexpr auto connections = 0x38; // List`1
		}
		namespace TerrainAnchor
		{
			constexpr auto Extents = 0x98; // float
			constexpr auto Offset = 0x9C; // float
			constexpr auto Radius = 0xA0; // float
		}
		namespace TerrainAnchorMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace TerrainAnchorGenerator
		{
			constexpr auto PlacementRadius = 0x18; // float
			constexpr auto PlacementPadding = 0x1C; // float
			constexpr auto PlacementFade = 0x20; // float
			constexpr auto PlacementDistance = 0x24; // float
			constexpr auto AnchorExtentsMin = 0x28; // float
			constexpr auto AnchorExtentsMax = 0x2C; // float
			constexpr auto AnchorOffsetMin = 0x30; // float
			constexpr auto AnchorOffsetMax = 0x34; // float
		}
		namespace TerrainCheck
		{
			constexpr auto Rotate = 0x98; // bool
			constexpr auto Extents = 0x9C; // float
		}
		namespace TerrainCheckGenerator
		{
			constexpr auto PlacementRadius = 0x18; // float
			constexpr auto PlacementPadding = 0x1C; // float
			constexpr auto PlacementFade = 0x20; // float
			constexpr auto PlacementDistance = 0x24; // float
			constexpr auto CheckExtentsMin = 0x28; // float
			constexpr auto CheckExtentsMax = 0x2C; // float
			constexpr auto CheckRotate = 0x30; // bool
		}
		namespace TerrainCheckGeneratorVolumes
		{
			constexpr auto PlacementRadius = 0x18; // float
		}
		namespace TerrainAtlasSet
		{
			constexpr auto sourceTypeNames = 0x0; // string[]
			constexpr auto sourceTypeNamesExt = 0x8; // string[]
			constexpr auto sourceTypePostfix = 0x10; // string[]
			constexpr auto splatNames = 0x18; // string[]
			constexpr auto albedoHighpass = 0x20; // bool[]
			constexpr auto albedoPaths = 0x28; // string[]
			constexpr auto defaultValues = 0x30; // Color[]
			constexpr auto sourceMaps = 0x38; // SourceMapSet[]
			constexpr auto highQualityCompression = 0x40; // bool
			constexpr auto generateTextureAtlases = 0x41; // bool
			constexpr auto generateTextureArrays = 0x42; // bool
			constexpr auto splatSearchPrefix = 0x48; // string
			constexpr auto splatSearchFolder = 0x50; // string
			constexpr auto albedoAtlasSavePath = 0x58; // string
			constexpr auto normalAtlasSavePath = 0x60; // string
			constexpr auto albedoArraySavePath = 0x68; // string
			constexpr auto normalArraySavePath = 0x70; // string
		}
		namespace TerrainCollision
		{
			constexpr auto ignoredColliders = 0x30; // ListDictionary`2
			constexpr auto terrainCollider = 0x38; // TerrainCollider
		}
		namespace TerrainCollisionProxy
		{
			constexpr auto colliders = 0x18; // WheelCollider[]
		}
		namespace TerrainColors
		{
			constexpr auto splatMap = 0x30; // TerrainSplatMap
			constexpr auto biomeMap = 0x38; // TerrainBiomeMap
		}
		namespace TerrainExtension
		{
			constexpr auto isInitialized = 0x18; // bool
			constexpr auto terrain = 0x20; // Terrain
			constexpr auto config = 0x28; // TerrainConfig
		}
		namespace TerrainAlphaMap
		{
			constexpr auto AlphaTexture = 0x48; // Texture2D
		}
		namespace TerrainBiomeMap
		{
			constexpr auto BiomeTexture = 0x48; // Texture2D
			constexpr auto num = 0x50; // int32_t
		}
		namespace TerrainBlendMap
		{
			constexpr auto BlendTexture = 0x48; // Texture2D
		}
		namespace TerrainDistanceMap
		{
			constexpr auto DistanceTexture = 0x48; // Texture2D
		}
		namespace TerrainHeightMap
		{
			constexpr auto HeightTexture = 0x48; // Texture2D
			constexpr auto NormalTexture = 0x50; // Texture2D
			constexpr auto normY = 0x58; // float
		}
		namespace TerrainMap
		{
			constexpr auto res = 0x30; // int32_t
		}
		namespace TerrainMap
		{
			constexpr auto src = 0x0; // T[]
			constexpr auto dst = 0x0; // T[]
		}
		namespace TerrainPlacementMap
		{
			constexpr auto isEnabled = 0x48; // bool
		}
		namespace TerrainSplatMap
		{
			constexpr auto SplatTexture0 = 0x48; // Texture2D
			constexpr auto SplatTexture1 = 0x50; // Texture2D
			constexpr auto num = 0x58; // int32_t
		}
		namespace TerrainTopologyMap
		{
			constexpr auto TopologyTexture = 0x48; // Texture2D
		}
		namespace TerrainWaterMap
		{
			constexpr auto WaterTexture = 0x48; // Texture2D
			constexpr auto normY = 0x50; // float
		}
		namespace TerrainMargin
		{
			constexpr auto materialPropertyBlock = 0x0; // MaterialPropertyBlock
		}
		namespace TerrainMeta
		{
			constexpr auto terrain = 0x18; // Terrain
			constexpr auto config = 0x20; // TerrainConfig
			constexpr auto paint = 0x28; // PaintMode
			constexpr auto currentPaintMode = 0x2C; // PaintMode
			constexpr auto Configk__BackingField = 0x0; // TerrainConfig
			constexpr auto Terraink__BackingField = 0x8; // Terrain
			constexpr auto Transformk__BackingField = 0x10; // Transform
			constexpr auto Positionk__BackingField = 0x18; // Vector3
			constexpr auto Sizek__BackingField = 0x24; // Vector3
			constexpr auto OneOverSizek__BackingField = 0x30; // Vector3
			constexpr auto HighestPointk__BackingField = 0x3C; // Vector3
			constexpr auto LowestPointk__BackingField = 0x48; // Vector3
			constexpr auto LootAxisAnglek__BackingField = 0x54; // float
			constexpr auto BiomeAxisAnglek__BackingField = 0x58; // float
			constexpr auto Datak__BackingField = 0x60; // TerrainData
			constexpr auto Colliderk__BackingField = 0x68; // TerrainCollider
			constexpr auto Collisionk__BackingField = 0x70; // TerrainCollision
			constexpr auto Physicsk__BackingField = 0x78; // TerrainPhysics
			constexpr auto Colorsk__BackingField = 0x80; // TerrainColors
			constexpr auto Qualityk__BackingField = 0x88; // TerrainQuality
			constexpr auto Pathk__BackingField = 0x90; // TerrainPath
			constexpr auto BiomeMapk__BackingField = 0x98; // TerrainBiomeMap
			constexpr auto AlphaMapk__BackingField = 0xA0; // TerrainAlphaMap
			constexpr auto BlendMapk__BackingField = 0xA8; // TerrainBlendMap
			constexpr auto HeightMapk__BackingField = 0xB0; // TerrainHeightMap
			constexpr auto SplatMapk__BackingField = 0xB8; // TerrainSplatMap
			constexpr auto TopologyMapk__BackingField = 0xC0; // TerrainTopologyMap
			constexpr auto WaterMapk__BackingField = 0xC8; // TerrainWaterMap
			constexpr auto DistanceMapk__BackingField = 0xD0; // TerrainDistanceMap
			constexpr auto PlacementMapk__BackingField = 0xD8; // TerrainPlacementMap
			constexpr auto Texturingk__BackingField = 0xE0; // TerrainTexturing
		}
		namespace TerrainPath
		{
			constexpr auto Roads = 0x30; // List`1
			constexpr auto Rails = 0x38; // List`1
			constexpr auto Rivers = 0x40; // List`1
			constexpr auto Powerlines = 0x48; // List`1
			constexpr auto Landmarks = 0x50; // List`1
			constexpr auto Monuments = 0x58; // List`1
			constexpr auto RiverObjs = 0x60; // List`1
			constexpr auto LakeObjs = 0x68; // List`1
			constexpr auto DungeonGridRoot = 0x70; // GameObject
			constexpr auto DungeonGridEntrances = 0x78; // List`1
			constexpr auto DungeonGridCells = 0x80; // List`1
			constexpr auto DungeonBaseRoot = 0x88; // GameObject
			constexpr auto DungeonBaseEntrances = 0x90; // List`1
			constexpr auto OceanPatrolClose = 0x98; // List`1
			constexpr auto OceanPatrolFar = 0xA0; // List`1
			constexpr auto wires = 0xA8; // Dictionary`2
		}
		namespace InfrastructureType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace TerrainPhysics
		{
			constexpr auto splat = 0x30; // TerrainSplatMap
			constexpr auto materials = 0x38; // PhysicMaterial[]
		}
		namespace TerrainQuality
		{
			constexpr auto HeightMapError = 0x30; // float
			constexpr auto BaseMapDistance = 0x34; // float
			constexpr auto TerrainShaderLod = 0x38; // int32_t
			constexpr auto terrain_quality = 0x40; // Command
			constexpr auto graphics_shaderlod = 0x48; // Command
		}
		namespace TerrainTexturing
		{
			constexpr auto pyramidCacheState = 0x30; // TextureCacheState
			constexpr auto diffuseBasePyramidTexture = 0x38; // RenderTexture
			constexpr auto coarseHeightSlopeCacheState = 0x40; // TextureCacheState
			constexpr auto coarseHeightSlopeTexture = 0x48; // RenderTexture
			constexpr auto debugFoliageDisplacement = 0x50; // bool
			constexpr auto initialized = 0x51; // bool
			constexpr auto instance = 0x0; // TerrainTexturing
			constexpr auto prevDebugFoliageDisplacement = 0x52; // bool
			constexpr auto prevQuality = 0x54; // int32_t
			constexpr auto triggerUpdateGlobalParams = 0x58; // bool
			constexpr auto PID_Layer = 0x60; // int32_t[,]
			constexpr auto PID_NaN = 0x8; // int32_t
			constexpr auto PID_Terrain_Control0 = 0xC; // int32_t
			constexpr auto PID_Terrain_Control1 = 0x10; // int32_t
			constexpr auto PID_Terrain_TextureArray0 = 0x14; // int32_t
			constexpr auto PID_Terrain_TextureArray1 = 0x18; // int32_t
			constexpr auto PID_Terrain_HeightSlope = 0x1C; // int32_t
			constexpr auto PID_Terrain_ShoreVector = 0x20; // int32_t
			constexpr auto PID_Terrain_Position = 0x24; // int32_t
			constexpr auto PID_Terrain_Size = 0x28; // int32_t
			constexpr auto PID_Terrain_RcpSize = 0x2C; // int32_t
			constexpr auto PID_Terrain_TexelSize = 0x30; // int32_t
			constexpr auto PID_Terrain_TexelSize0 = 0x34; // int32_t
			constexpr auto PID_Terrain_TexelSize1 = 0x38; // int32_t
			constexpr auto PID_TerrainParallax = 0x3C; // int32_t
			constexpr auto PID_TerrainPotatoDetailTexture = 0x40; // int32_t
			constexpr auto PID_TerrainPotatoDetailWorldUVScale = 0x44; // int32_t
			constexpr auto PID_PotatoDetailTexture = 0x48; // int32_t
			constexpr auto PID_PotatoDetailWorldUVScale = 0x4C; // int32_t
			constexpr auto PID_UVMIXMult = 0x50; // int32_t
			constexpr auto PID_UVMIXStart = 0x54; // int32_t
			constexpr auto PID_UVMIXDist = 0x58; // int32_t
			constexpr auto PID_LayerFallback_Albedo = 0x5C; // int32_t
			constexpr auto PID_LayerFallback_Metallic = 0x60; // int32_t
			constexpr auto PID_LayerFallback_Smoothness = 0x64; // int32_t
			constexpr auto terrainSize = 0x68; // float
			constexpr auto shoreMapSize = 0x6C; // int32_t
			constexpr auto shoreDistances = 0x70; // float[]
			constexpr auto shoreVectors = 0x78; // Vector3[]
			constexpr auto shoreVectorTexture = 0x80; // Texture2D
		}
		namespace TextureCacheState
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace FixAtlasMipLevelsState
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace TerrainFilter
		{
			constexpr auto Filter = 0x98; // SpawnFilter
			constexpr auto CheckPlacementMap = 0xA0; // bool
		}
		namespace MonumentNode
		{
			constexpr auto ResourceFolder = 0x18; // string
		}
		namespace ProceduralComponent
		{
			constexpr auto Mode = 0x18; // Realm
			constexpr auto Description = 0x20; // string
		}
		namespace GenerateCliffTopology
		{
			constexpr auto KeepExisting = 0x28; // bool
		}
		namespace GenerateDecorTopology
		{
			constexpr auto KeepExisting = 0x28; // bool
		}
		namespace GenerateDungeonBase
		{
			constexpr auto EntranceFolder = 0x28; // string
			constexpr auto LinkFolder = 0x30; // string
			constexpr auto EndFolder = 0x38; // string
			constexpr auto TransitionFolder = 0x40; // string
			constexpr auto ConnectionType = 0x48; // InfrastructureType
			constexpr auto VolumeExtrudePositive = 0x0; // Vector3
			constexpr auto VolumeExtrudeNegative = 0xC; // Vector3
			constexpr auto segmentsTotal = 0x50; // List`1
			constexpr auto horizontalRotations = 0x58; // Quaternion[]
			constexpr auto pillarRotations = 0x60; // Quaternion[]
			constexpr auto verticalRotations = 0x68; // Quaternion[]
		}
		namespace GenerateDungeonGrid
		{
			constexpr auto TunnelFolder = 0x28; // string
			constexpr auto StationFolder = 0x30; // string
			constexpr auto TransitionFolder = 0x38; // string
			constexpr auto LinkFolder = 0x40; // string
			constexpr auto ConnectionType = 0x48; // InfrastructureType
			constexpr auto CellSize = 0x4C; // int32_t
			constexpr auto LinkHeight = 0x50; // float
			constexpr auto LinkRadius = 0x54; // float
			constexpr auto LinkTransition = 0x58; // float
		}
		namespace GenerateRailBranching
		{
			constexpr auto rot90 = 0x0; // Quaternion
		}
		namespace GenerateRailLayout
		{
			constexpr auto rot90 = 0x0; // Quaternion
		}
		namespace GenerateRailMeshes
		{
			constexpr auto RailMesh = 0x28; // Mesh
			constexpr auto RailMeshes = 0x30; // Mesh[]
			constexpr auto RailMaterial = 0x38; // Material
			constexpr auto RailPhysicMaterial = 0x40; // PhysicMaterial
		}
		namespace GenerateRailRing
		{
			constexpr auto MinWorldSize = 0x28; // int32_t
		}
		namespace GenerateRailSiding
		{
			constexpr auto rotRight = 0x0; // Quaternion
			constexpr auto rotLeft = 0x10; // Quaternion
		}
		namespace GenerateRiverMeshes
		{
			constexpr auto RiverMesh = 0x28; // Mesh
			constexpr auto RiverMeshes = 0x30; // Mesh[]
			constexpr auto RiverMaterial = 0x38; // Material
			constexpr auto RiverPhysicMaterial = 0x40; // PhysicMaterial
		}
		namespace GenerateRoadLayout
		{
			constexpr auto RoadType = 0x28; // InfrastructureType
		}
		namespace GenerateRoadMeshes
		{
			constexpr auto RoadMesh = 0x28; // Mesh
			constexpr auto RoadMeshes = 0x30; // Mesh[]
			constexpr auto RoadMaterial = 0x38; // Material
			constexpr auto RoadRingMaterial = 0x40; // Material
			constexpr auto RoadPhysicMaterial = 0x48; // PhysicMaterial
		}
		namespace GenerateRoadRing
		{
			constexpr auto MinWorldSize = 0x28; // int32_t
		}
		namespace PlaceCliffs
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto RetryMultiplier = 0x38; // int32_t
			constexpr auto CutoffSlope = 0x3C; // int32_t
			constexpr auto MinScale = 0x40; // float
			constexpr auto MaxScale = 0x44; // float
			constexpr auto target_count = 0x0; // int32_t
			constexpr auto target_length = 0x4; // int32_t
			constexpr auto min_scale_delta = 0x8; // float
			constexpr auto max_scale_attempts = 0xC; // int32_t
			constexpr auto min_rotation = 0x10; // int32_t
			constexpr auto max_rotation = 0x14; // int32_t
			constexpr auto rotation_delta = 0x18; // int32_t
			constexpr auto offset_c = 0x1C; // float
			constexpr auto offset_l = 0x20; // float
			constexpr auto offset_r = 0x24; // float
			constexpr auto offsets = 0x28; // Vector3[]
		}
		namespace PlaceDecorUniform
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto ObjectDistance = 0x38; // float
			constexpr auto ObjectDithering = 0x3C; // float
		}
		namespace PlaceDecorValueNoise
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto Cluster = 0x38; // NoiseParameters
			constexpr auto ObjectDensity = 0x48; // float
		}
		namespace PlaceDecorWhiteNoise
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto ObjectDensity = 0x38; // float
		}
		namespace PlaceMonument
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto Monument = 0x30; // GameObjectRef
		}
		namespace PlaceMonuments
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto TargetCount = 0x38; // int32_t
			constexpr auto MinDistanceSameType = 0x3C; // int32_t
			constexpr auto MinDistanceDifferentType = 0x40; // int32_t
			constexpr auto MinWorldSize = 0x44; // int32_t
			constexpr auto DistanceSameType = 0x48; // DistanceMode
			constexpr auto DistanceDifferentType = 0x4C; // DistanceMode
		}
		namespace PlaceMonumentsOffshore
		{
			constexpr auto ResourceFolder = 0x28; // string
			constexpr auto TargetCount = 0x30; // int32_t
			constexpr auto MinDistanceFromTerrain = 0x34; // int32_t
			constexpr auto MaxDistanceFromTerrain = 0x38; // int32_t
			constexpr auto DistanceBetweenMonuments = 0x3C; // int32_t
			constexpr auto MinWorldSize = 0x40; // int32_t
		}
		namespace PlaceMonumentsRailside
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto TargetCount = 0x38; // int32_t
			constexpr auto PositionOffset = 0x3C; // int32_t
			constexpr auto TangentInterval = 0x40; // int32_t
			constexpr auto MinDistanceSameType = 0x44; // int32_t
			constexpr auto MinDistanceDifferentType = 0x48; // int32_t
			constexpr auto MinWorldSize = 0x4C; // int32_t
			constexpr auto DistanceSameType = 0x50; // DistanceMode
			constexpr auto DistanceDifferentType = 0x54; // DistanceMode
			constexpr auto rot90 = 0x0; // Quaternion
		}
		namespace PlaceMonumentsRoadside
		{
			constexpr auto Filter = 0x28; // SpawnFilter
			constexpr auto ResourceFolder = 0x30; // string
			constexpr auto TargetCount = 0x38; // int32_t
			constexpr auto MinDistanceSameType = 0x3C; // int32_t
			constexpr auto MinDistanceDifferentType = 0x40; // int32_t
			constexpr auto MinWorldSize = 0x44; // int32_t
			constexpr auto DistanceSameType = 0x48; // DistanceMode
			constexpr auto DistanceDifferentType = 0x4C; // DistanceMode
			constexpr auto RoadType = 0x50; // RoadMode
			constexpr auto rot90 = 0x0; // Quaternion
		}
		namespace PlacePowerlineObjects
		{
			constexpr auto Start = 0x28; // BasicObject[]
			constexpr auto End = 0x30; // BasicObject[]
			constexpr auto Side = 0x38; // SideObject[]
			constexpr auto Path = 0x40; // PathObject[]
		}
		namespace PlaceRiverObjects
		{
			constexpr auto Start = 0x28; // BasicObject[]
			constexpr auto End = 0x30; // BasicObject[]
			constexpr auto Side = 0x38; // SideObject[]
			constexpr auto Path = 0x40; // PathObject[]
		}
		namespace PlaceRoadObjects
		{
			constexpr auto Start = 0x28; // BasicObject[]
			constexpr auto End = 0x30; // BasicObject[]
			constexpr auto Side = 0x38; // SideObject[]
			constexpr auto Path = 0x40; // PathObject[]
		}
		namespace AddToAlphaMap
		{
			constexpr auto bounds = 0x18; // Bounds
		}
		namespace AddToHeightMap
		{
			constexpr auto DestroyGameObject = 0x18; // bool
		}
		namespace TerrainGenerator
		{
			constexpr auto config = 0x18; // TerrainConfig
		}
		namespace WorldSetup
		{
			constexpr auto AutomaticallySetup = 0x18; // bool
			constexpr auto terrain = 0x20; // GameObject
			constexpr auto decorPrefab = 0x28; // GameObject
			constexpr auto grassPrefab = 0x30; // GameObject
			constexpr auto spawnPrefab = 0x38; // GameObject
			constexpr auto terrainMeta = 0x40; // TerrainMeta
			constexpr auto EditorSeed = 0x48; // uint32_t
			constexpr auto EditorSalt = 0x4C; // uint32_t
			constexpr auto EditorSize = 0x50; // uint32_t
			constexpr auto EditorUrl = 0x58; // string
			constexpr auto ProceduralObjects = 0x60; // List`1
			constexpr auto MonumentNodes = 0x68; // List`1
		}
		namespace TerrainHeightAdd
		{
			constexpr auto Delta = 0xA8; // float
		}
		namespace TerrainModifier
		{
			constexpr auto Opacity = 0x98; // float
			constexpr auto Radius = 0x9C; // float
			constexpr auto Fade = 0xA0; // float
		}
		namespace TerrainSplatSet
		{
			constexpr auto SplatType = 0xA8; // Enum
		}
		namespace TerrainTopologyAdd
		{
			constexpr auto TopologyType = 0xA8; // Enum
		}
		namespace TerrainTopologySet
		{
			constexpr auto TopologyType = 0xA8; // Enum
		}
		namespace Monument
		{
			constexpr auto Radius = 0x110; // float
			constexpr auto Fade = 0x114; // float
		}
		namespace Mountain
		{
			constexpr auto Fade = 0x110; // float
		}
		namespace TerrainPlacement
		{
			constexpr auto size = 0x98; // Vector3
			constexpr auto extents = 0xA4; // Vector3
			constexpr auto offset = 0xB0; // Vector3
			constexpr auto HeightMap = 0xBC; // bool
			constexpr auto AlphaMap = 0xBD; // bool
			constexpr auto WaterMap = 0xBE; // bool
			constexpr auto SplatMask = 0xC0; // Enum
			constexpr auto BiomeMask = 0xC4; // Enum
			constexpr auto TopologyMask = 0xC8; // Enum
			constexpr auto heightmap = 0xD0; // Texture2DRef
			constexpr auto splatmap0 = 0xD8; // Texture2DRef
			constexpr auto splatmap1 = 0xE0; // Texture2DRef
			constexpr auto alphamap = 0xE8; // Texture2DRef
			constexpr auto biomemap = 0xF0; // Texture2DRef
			constexpr auto topologymap = 0xF8; // Texture2DRef
			constexpr auto watermap = 0x100; // Texture2DRef
			constexpr auto blendmap = 0x108; // Texture2DRef
		}
		namespace WaterBody
		{
			constexpr auto Type = 0x18; // WaterBodyType
			constexpr auto Renderer = 0x20; // Renderer
			constexpr auto Triggers = 0x28; // Collider[]
			constexpr auto IsOcean = 0x30; // bool
			constexpr auto Transformk__BackingField = 0x38; // Transform
			constexpr auto FishingType = 0x40; // FishingTag
			constexpr auto MeshFilterk__BackingField = 0x48; // MeshFilter
			constexpr auto SharedMeshk__BackingField = 0x50; // Mesh
			constexpr auto Materialk__BackingField = 0x58; // Material
			constexpr auto DepthPassk__BackingField = 0x60; // int32_t
			constexpr auto DepthDisplacementPassk__BackingField = 0x64; // int32_t
			constexpr auto OcclusionPassk__BackingField = 0x68; // int32_t
			constexpr auto CausticsPassk__BackingField = 0x6C; // int32_t
			constexpr auto OcclusionCausticsPassk__BackingField = 0x70; // int32_t
		}
		namespace WaterCamera
		{
			constexpr auto Camerak__BackingField = 0x18; // Camera
			constexpr auto CommandBufferManagerk__BackingField = 0x20; // CommandBufferManager
			constexpr auto PostOpaqueDepthk__BackingField = 0x28; // PostOpaqueDepth
		}
		namespace WaterCollision
		{
			constexpr auto ignoredColliders = 0x18; // ListDictionary`2
			constexpr auto waterColliders = 0x20; // HashSet`1
		}
		namespace WaterCullingVolume
		{
			constexpr auto isDynamic = 0x18; // bool
			constexpr auto worldBounds = 0x1C; // Bounds
			constexpr auto worldToLocal = 0x38; // Vector4[]
			constexpr auto isVisible = 0x40; // bool
			constexpr auto distanceToCamera = 0x44; // float
			constexpr auto volumes = 0x0; // HashSet`1
		}
		namespace WaterDepthMask
		{
			constexpr auto mesh = 0x18; // Mesh
			constexpr auto material = 0x20; // Material
		}
		namespace WaterDynamics
		{
			constexpr auto IsInitializedk__BackingField = 0x18; // bool
			constexpr auto ForceFallback = 0x19; // bool
			constexpr auto target = 0x20; // Target
			constexpr auto useNativePath = 0x28; // bool
			constexpr auto interactions = 0x0; // HashSet`1
			constexpr auto imageDesc = 0x29; // ImageDesc
			constexpr auto imagePixels = 0x40; // char[]
			constexpr auto targetDesc = 0x48; // TargetDesc
			constexpr auto targetPixels = 0x80; // char[]
			constexpr auto targetDrawTileTable = 0x88; // char[]
			constexpr auto targetDrawTileList = 0x90; // SimpleList`1
			constexpr auto ShowDebug = 0x98; // bool
			constexpr auto material = 0xA0; // Material
			constexpr auto block = 0xA8; // MaterialPropertyBlock
			constexpr auto mesh = 0xB0; // Mesh
			constexpr auto Batches = 0x8; // Dictionary`2
		}
		namespace WaterInteraction
		{
			constexpr auto texture = 0x18; // Texture2D
			constexpr auto Displacement = 0x20; // float
			constexpr auto Disturbance = 0x24; // float
			constexpr auto Imagek__BackingField = 0x28; // Image
			constexpr auto Positionk__BackingField = 0x30; // Vector2
			constexpr auto Scalek__BackingField = 0x38; // Vector2
			constexpr auto Rotationk__BackingField = 0x40; // float
			constexpr auto cachedTransform = 0x48; // Transform
		}
		namespace WaterMesh
		{
			constexpr auto borderMesh = 0x10; // Mesh
			constexpr auto centerPatch = 0x18; // Mesh
			constexpr auto borderRingCount = 0x20; // int32_t
			constexpr auto borderRingSpacingFalloff = 0x24; // float
			constexpr auto resolution = 0x28; // int32_t
			constexpr auto borderVerticesLocal = 0x30; // Vector3[]
			constexpr auto borderVerticesWorld = 0x38; // Vector3[]
			constexpr auto initialized = 0x40; // bool
		}
		namespace WaterRadialMesh
		{
			constexpr auto meshes = 0x10; // Mesh[]
			constexpr auto initialized = 0x18; // bool
		}
		namespace WaterRendering
		{
			constexpr auto water = 0x10; // WaterSystem
			constexpr auto simulation = 0x18; // WaterSimulation
			constexpr auto camera = 0x20; // Camera
			constexpr auto postOpaqueDepth = 0x28; // PostOpaqueDepth
			constexpr auto width = 0x30; // int32_t
			constexpr auto height = 0x34; // int32_t
			constexpr auto initialized = 0x38; // bool
			constexpr auto radialMesh = 0x40; // WaterRadialMesh
			constexpr auto state = 0x48; // RenderState
			constexpr auto cullingVolumeArray = 0x0; // Vector4[]
			constexpr auto frustumPlanes = 0x8; // Plane[]
			constexpr auto reflectionMat = 0x70; // Material
			constexpr auto underwaterMat = 0x78; // Material
			constexpr auto multiCopyMat = 0x80; // Material
			constexpr auto surfaceTex = 0x88; // RenderTexture
			constexpr auto preFogBackgroundTex = 0x90; // RenderTexture
			constexpr auto ssrReflectionTex = 0x98; // RenderTexture
			constexpr auto overlayMesh = 0xA0; // Mesh
			constexpr auto underwaterScatterCoefficientOverride = 0xA8; // float
			constexpr auto underwaterBlock = 0xB0; // MaterialPropertyBlock
			constexpr auto commandBufferManager = 0xB8; // CommandBufferManager
			constexpr auto setGlobalsCBDesc = 0xC0; // CommandBufferDesc
			constexpr auto waterMaskCBDesc = 0xC8; // CommandBufferDesc
			constexpr auto waterDepthCBDesc = 0xD0; // CommandBufferDesc
			constexpr auto preFogCBDesc = 0xD8; // CommandBufferDesc
			constexpr auto postFogCBDesc = 0xE0; // CommandBufferDesc
			constexpr auto targets = 0xE8; // RenderTargetIdentifier[]
			constexpr auto initializedMaterials = 0xF0; // bool
		}
		namespace WaterRuntime
		{
			constexpr auto WaterCamerak__BackingField = 0x10; // WaterCamera
			constexpr auto Camerak__BackingField = 0x18; // Camera
			constexpr auto PostOpaqueDepthk__BackingField = 0x20; // PostOpaqueDepth
			constexpr auto CommandBufferManagerk__BackingField = 0x28; // CommandBufferManager
			constexpr auto SimulateNextFramek__BackingField = 0x30; // bool
			constexpr auto Simulationk__BackingField = 0x38; // WaterSimulation
			constexpr auto Renderingk__BackingField = 0x40; // WaterRendering
			constexpr auto VisibilityMaskk__BackingField = 0x48; // int32_t
			constexpr auto IsInitializedk__BackingField = 0x4C; // bool
		}
		namespace WaterSimulation
		{
			constexpr auto water = 0x10; // WaterSystem
			constexpr auto camera = 0x18; // Camera
			constexpr auto solverResolution = 0x20; // int32_t
			constexpr auto solverSizeInWorld = 0x24; // float
			constexpr auto gravity = 0x28; // float
			constexpr auto amplitude = 0x2C; // float
			constexpr auto solverButterflyCount = 0x30; // int32_t
			constexpr auto windDirection = 0x34; // Vector2
			constexpr auto windMagnitude = 0x3C; // float
			constexpr auto displacementMap = 0x40; // RenderTexture
			constexpr auto displacementMapTexelSize = 0x48; // Vector4
			constexpr auto normalFoldMap = 0x58; // RenderTexture
			constexpr auto computeNormalFoldMat = 0x60; // Material
			constexpr auto simulationMat = 0x68; // Material
			constexpr auto hTilde0Map = 0x70; // Texture2D
			constexpr auto dispersionMap = 0x78; // Texture2D
			constexpr auto butterflyMap = 0x80; // Texture2D
			constexpr auto hTilde_hMap = 0x88; // RenderTexture
			constexpr auto hTilde_dxdzMap = 0x90; // RenderTexture
			constexpr auto commandBufferManager = 0x98; // CommandBufferManager
			constexpr auto commandBufferDesc = 0xA0; // CommandBufferDesc
			constexpr auto playing = 0xA8; // bool
			constexpr auto initialized = 0xA9; // bool
		}
		namespace WaterBodyType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace WaterQuality
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace WaterSystem
		{
			constexpr auto Quality = 0x18; // WaterQuality
			constexpr auto ShowDebug = 0x1C; // bool
			constexpr auto ShowGizmos = 0x1D; // bool
			constexpr auto ProgressTime = 0x1E; // bool
			constexpr auto FallbackPlane = 0x20; // GameObject
			constexpr auto Simulation = 0x28; // SimulationSettings
			constexpr auto Rendering = 0x30; // RenderingSettings
			constexpr auto precomputedWaves = 0x38; // PrecomputedWave[]
			constexpr auto precomputedShoreWaves = 0x40; // PrecomputedShoreWaves
			constexpr auto waveArray = 0x68; // Vector4[]
			constexpr auto shoreWaveArray = 0x70; // Vector4[]
			constexpr auto global0 = 0x78; // Vector4
			constexpr auto global1 = 0x88; // Vector4
			constexpr auto ShoreWavesRcpFadeDistancek__BackingField = 0x98; // float
			constexpr auto TerrainRcpFadeDistancek__BackingField = 0x9C; // float
			constexpr auto IsInitializedk__BackingField = 0xA0; // bool
			constexpr auto Collisionk__BackingField = 0x0; // WaterCollision
			constexpr auto Dynamicsk__BackingField = 0x8; // WaterDynamics
			constexpr auto Oceank__BackingField = 0x10; // WaterBody
			constexpr auto WaterBodiesk__BackingField = 0x18; // HashSet`1
			constexpr auto oceanLevel = 0x20; // float
			constexpr auto WaveTimek__BackingField = 0x24; // float
			constexpr auto QualityToMaxVertices = 0x28; // int32_t[]
			constexpr auto prevQuality = 0xA4; // WaterQuality
			constexpr auto reflectionProbe = 0xA8; // ReflectionProbeEx
			constexpr auto reflectionProbeUpdateTime = 0xB0; // float
			constexpr auto reflectionProbeReady = 0xB4; // bool
			constexpr auto defaultHeightSlopeMap = 0xB8; // Texture2D
			constexpr auto hasValidCausticsAnims = 0xC0; // bool
			constexpr auto runtimeCleanup = 0xC8; // List`1
			constexpr auto Runtimesk__BackingField = 0x30; // Dictionary`2
			constexpr auto DepthMasksk__BackingField = 0x38; // HashSet`1
			constexpr auto instance = 0x40; // WaterSystem
			constexpr auto emptyShoreMap = 0x48; // Vector3[]
			constexpr auto emptyWaterMap = 0x50; // Int16[]
			constexpr auto emptyHeightMap = 0x58; // Int16[]
			constexpr auto nativePathState = 0x60; // NativePathState
			constexpr auto currentShoreMap = 0x68; // Vector3[]
			constexpr auto currentShoreMapHandle = 0x70; // GCHandle
			constexpr auto currentWaterMap = 0x78; // Int16[]
			constexpr auto currentWaterMapHandle = 0x80; // GCHandle
			constexpr auto currentHeightMap = 0x88; // Int16[]
			constexpr auto currentHeightMapHandle = 0x90; // GCHandle
			constexpr auto currentOpenWaves = 0x98; // Vector4[]
			constexpr auto currentOpenWavesHandle = 0xA0; // GCHandle
			constexpr auto currentShoreWaves = 0xA8; // Vector4[]
			constexpr auto currentShoreWavesHandle = 0xB0; // GCHandle
			constexpr auto lastQualityChange = 0xD0; // float
		}
		namespace WaterVisibilityTrigger
		{
			constexpr auto togglePhysics = 0x38; // bool
			constexpr auto toggleVisuals = 0x39; // bool
			constexpr auto enteredTick = 0x40; // Int64
			constexpr auto ticks = 0x0; // Int64
			constexpr auto tracker = 0x8; // SortedList`2
		}
		namespace WaterCheck
		{
			constexpr auto Rotate = 0x98; // bool
		}
		namespace WaterCheckGenerator
		{
			constexpr auto PlacementRadius = 0x18; // float
			constexpr auto PlacementDistance = 0x1C; // float
			constexpr auto CheckRotate = 0x20; // bool
		}
		namespace AdaptMeshToTerrain
		{
			constexpr auto LayerMask = 0x18; // LayerMask
			constexpr auto RayHeight = 0x1C; // float
			constexpr auto RayMaxDistance = 0x20; // float
			constexpr auto MinDisplacement = 0x24; // float
			constexpr auto MaxDisplacement = 0x28; // float
			constexpr auto PlaneResolution = 0x2C; // int32_t
			constexpr auto meshFilter = 0x30; // MeshFilter
			constexpr auto meshRenderer = 0x38; // MeshRenderer
			constexpr auto meshCollider = 0x40; // MeshCollider
			constexpr auto meshLOD = 0x48; // MeshLOD
			constexpr auto meshes = 0x50; // Mesh[]
			constexpr auto colliderMesh = 0x58; // Mesh
			constexpr auto referenceMeshes = 0x0; // Dictionary`2
			constexpr auto block = 0x60; // MaterialPropertyBlock
		}
		namespace AtmosphereVolume
		{
			constexpr auto MaxVisibleDistance = 0x18; // float
			constexpr auto BoundsAttenuationDecay = 0x1C; // float
			constexpr auto FogSettings = 0x20; // FogSettings
		}
		namespace FogSettings
		{
			constexpr auto ColorOverDaytime = 0x0; // Gradient
			constexpr auto Density = 0x8; // float
			constexpr auto StartDistance = 0xC; // float
			constexpr auto Height = 0x10; // float
			constexpr auto HeightDensity = 0x14; // float
		}
		namespace AtmosphereVolumeRenderer
		{
			constexpr auto Mode = 0x18; // FogMode
			constexpr auto DistanceFog = 0x1C; // bool
			constexpr auto HeightFog = 0x1D; // bool
			constexpr auto Volume = 0x20; // AtmosphereVolume
			constexpr auto targetCamera = 0x28; // Camera
			constexpr auto commandBufferManager = 0x30; // CommandBufferManager
			constexpr auto commandBufferDesc = 0x38; // CommandBufferDesc
			constexpr auto fogMaterial = 0x40; // Material
			constexpr auto matrixArray = 0x48; // Vector4[]
			constexpr auto volumeMesh = 0x0; // Mesh
			constexpr auto registeredVolumes = 0x8; // HashSet`1
			constexpr auto currentVolumes = 0x50; // List`1
		}
		namespace CommandBufferDesc
		{
			constexpr auto CameraEventk__BackingField = 0x10; // CameraEvent
			constexpr auto OrderIdk__BackingField = 0x14; // int32_t
			constexpr auto FillDelegatek__BackingField = 0x18; // Action`1
		}
		namespace CommandBufferManager
		{
			constexpr auto _targetCamera = 0x18; // Camera
			constexpr auto commandBuffers = 0x20; // Dictionary`2
			constexpr auto changed = 0x28; // bool
			constexpr auto OnPreRenderCall = 0x30; // Action
			constexpr auto OnPreCullCall = 0x38; // Action
			constexpr auto instances = 0x0; // Dictionary`2
		}
		namespace DeferredDecal
		{
			constexpr auto mesh = 0x18; // Mesh
			constexpr auto material = 0x20; // Material
			constexpr auto queue = 0x28; // DeferredDecalQueue
			constexpr auto applyImmediately = 0x2C; // bool
			constexpr auto IsDecalEnabledk__BackingField = 0x2D; // bool
			constexpr auto cached = 0x2E; // bool
			constexpr auto localToWorldMatrix = 0x30; // Matrix4x4
		}
		namespace DeferredDecalRenderer
		{
			constexpr auto DiffuseBuffer = 0x0; // ListDictionary`2[]
			constexpr auto SpecularBuffer = 0x8; // ListDictionary`2[]
			constexpr auto NormalsBuffer = 0x10; // ListDictionary`2[]
			constexpr auto EmissionBuffer = 0x18; // ListDictionary`2[]
			constexpr auto CombinedBuffer = 0x20; // ListDictionary`2[]
			constexpr auto block = 0x28; // MaterialPropertyBlock
		}
		namespace DeferredDecalQueue
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DeferredDecalSystem
		{
			constexpr auto IsDirty = 0x0; // bool
			constexpr auto DiffuseDecals = 0x8; // ListDictionary`2[]
			constexpr auto SpecularDecals = 0x10; // ListDictionary`2[]
			constexpr auto NormalsDecals = 0x18; // ListDictionary`2[]
			constexpr auto EmissionDecals = 0x20; // ListDictionary`2[]
			constexpr auto CombinedDecals = 0x28; // ListDictionary`2[]
			constexpr auto DiffusePass = 0x30; // int32_t
			constexpr auto SpecularPass = 0x34; // int32_t
			constexpr auto NormalsPass = 0x38; // int32_t
			constexpr auto EmissionPass = 0x3C; // int32_t
			constexpr auto CombinedPass = 0x40; // int32_t
			constexpr auto DiffuseRenderTarget = 0x48; // RenderTargetIdentifier[]
			constexpr auto SpecularRenderTarget = 0x50; // RenderTargetIdentifier[]
			constexpr auto NormalsRenderTarget = 0x58; // RenderTargetIdentifier[]
			constexpr auto EmissionRenderTarget = 0x60; // RenderTargetIdentifier[]
			constexpr auto CombinedRenderTarget = 0x68; // RenderTargetIdentifier[]
		}
		namespace CoreEnvBrdfLut
		{
			constexpr auto runtimeEnvBrdfLut = 0x0; // Texture2D
		}
		namespace SubsurfaceScatteringParams
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto quality = 0x4; // Quality
			constexpr auto halfResolution = 0x8; // bool
			constexpr auto radiusScale = 0xC; // float
			constexpr auto Default = 0x0; // SubsurfaceScatteringParams
		}
		namespace ExtendGBufferParams
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto Default = 0x0; // ExtendGBufferParams
		}
		namespace DeferredExtension
		{
			constexpr auto extendGBuffer = 0x18; // ExtendGBufferParams
			constexpr auto subsurfaceScattering = 0x1C; // SubsurfaceScatteringParams
			constexpr auto blueNoise = 0x30; // Texture2D
			constexpr auto depthScale = 0x38; // float
			constexpr auto debug = 0x3C; // bool
			constexpr auto forceToCameraResolution = 0x3D; // bool
			constexpr auto _targetCamera = 0x40; // Camera
			constexpr auto commandBufferManager = 0x48; // CommandBufferManager
			constexpr auto extendGBufferCBDesc = 0x50; // CommandBufferDesc
			constexpr auto postSubsurfaceCBDesc = 0x58; // CommandBufferDesc
			constexpr auto postSubsurfaceMat = 0x60; // Material
			constexpr auto frameIndexMod8 = 0x68; // int32_t
			constexpr auto post = 0x70; // PostProcessLayer
			constexpr auto gbufferWidth = 0x78; // int32_t
			constexpr auto gbufferHeight = 0x7C; // int32_t
			constexpr auto gbufferTexture4 = 0x80; // RenderTexture
			constexpr auto gbufferTexture5 = 0x88; // RenderTexture
			constexpr auto targets = 0x90; // RenderTargetIdentifier[]
			constexpr auto registeredMeshes = 0x0; // HashSet`1
			constexpr auto visibleMeshes = 0x8; // HashSet`1
		}
		namespace DeferredExtensionMesh
		{
			constexpr auto subsurfaceProfile = 0x18; // SubsurfaceProfile
			constexpr auto isVisible = 0x20; // bool
			constexpr auto materialLinks = 0x28; // List`1
			constexpr auto _block = 0x30; // MaterialPropertyBlock
			constexpr auto _renderer = 0x38; // Renderer
		}
		namespace SubsurfaceProfileData
		{
			constexpr auto ScatterRadius = 0x0; // float
			constexpr auto SubsurfaceColor = 0x4; // Color
			constexpr auto FalloffColor = 0x14; // Color
		}
		namespace SubsurfaceProfile
		{
			constexpr auto profileTexture = 0x0; // SubsurfaceProfileTexture
			constexpr auto Data = 0x18; // SubsurfaceProfileData
			constexpr auto id = 0x3C; // int32_t
		}
		namespace SubsurfaceProfileTexture
		{
			constexpr auto entries = 0x10; // List`1
			constexpr auto texture = 0x18; // Texture2D
		}
		namespace DeferredMeshDecal
		{
			constexpr auto isVisible = 0x18; // bool
			constexpr auto renderer = 0x20; // Renderer
			constexpr auto materialLinks = 0x28; // List`1
			constexpr auto instanceData = 0x30; // List`1
		}
		namespace DeferredMeshDecalRenderer
		{
			constexpr auto targetCamera = 0x18; // Camera
			constexpr auto commandBufferEvent = 0x20; // CameraEvent
			constexpr auto commandBuffer = 0x28; // CommandBuffer
			constexpr auto targets = 0x30; // RenderTargetIdentifier[]
			constexpr auto multiCopyMat = 0x38; // Material
			constexpr auto block = 0x40; // MaterialPropertyBlock
			constexpr auto registered = 0x0; // HashSet`1
			constexpr auto visible = 0x8; // HashSet`1
			constexpr auto batches = 0x10; // Dictionary`2
		}
		namespace EnvironmentVolumePropertiesCollection
		{
			constexpr auto TransitionSpeed = 0x18; // float
			constexpr auto ReflectionMultipliers = 0x20; // EnvironmentMultiplier[]
			constexpr auto DefaultReflectionMultiplier = 0x28; // float
			constexpr auto AmbientMultipliers = 0x30; // EnvironmentMultiplier[]
			constexpr auto DefaultAmbientMultiplier = 0x38; // float
			constexpr auto OceanOverrides = 0x40; // OceanParameters
		}
		namespace FoliageDisplacement
		{
			constexpr auto moving = 0x18; // bool
			constexpr auto billboard = 0x19; // bool
			constexpr auto mesh = 0x20; // Mesh
			constexpr auto material = 0x28; // Material
			constexpr auto visible = 0x30; // bool
			constexpr auto cell = 0x38; // LODCell
		}
		namespace FoliageDisplacementManager
		{
			constexpr auto handle = 0x18; // SpecialPurposeCamera
		}
		namespace Impostor
		{
			constexpr auto asset = 0x18; // ImpostorAsset
			constexpr auto reference = 0x20; // GameObject
			constexpr auto angle = 0x28; // float
			constexpr auto resolution = 0x2C; // int32_t
			constexpr auto padding = 0x30; // int32_t
			constexpr auto spriteOutlineAsMesh = 0x34; // bool
			constexpr auto InstanceDatak__BackingField = 0x38; // ImpostorInstanceData
			constexpr auto keepTrying = 0x40; // bool
		}
		namespace ImpostorAsset
		{
			constexpr auto textures = 0x18; // TextureEntry[]
			constexpr auto size = 0x20; // Vector2
			constexpr auto pivot = 0x28; // Vector2
			constexpr auto mesh = 0x30; // Mesh
		}
		namespace ImpostorInstanceData
		{
			constexpr auto Rendererk__BackingField = 0x10; // Renderer
			constexpr auto Meshk__BackingField = 0x18; // Mesh
			constexpr auto Materialk__BackingField = 0x20; // Material
			constexpr auto Batch = 0x28; // ImpostorBatch
			constexpr auto BatchIndex = 0x30; // int32_t
			constexpr auto hash = 0x34; // int32_t
			constexpr auto positionAndScale = 0x38; // Vector4
		}
		namespace ImpostorBatch
		{
			constexpr auto Meshk__BackingField = 0x10; // Mesh
			constexpr auto Materialk__BackingField = 0x18; // Material
			constexpr auto PositionBufferk__BackingField = 0x20; // ComputeBuffer
			constexpr auto Positions = 0x28; // FPNativeList`1
			constexpr auto ArgsBufferk__BackingField = 0x30; // ComputeBuffer
			constexpr auto args = 0x38; // FPNativeList`1
			constexpr auto IsDirtyk__BackingField = 0x40; // bool
			constexpr auto recycle = 0x48; // Queue`1
		}
		namespace ImpostorRenderer
		{
			constexpr auto camera = 0x18; // Camera
			constexpr auto Shadows = 0x0; // HashSet`1
			constexpr auto Impostors = 0x8; // HashSet`1
			constexpr auto Batches = 0x10; // Dictionary`2
			constexpr auto block = 0x18; // MaterialPropertyBlock
			constexpr auto treeLayer = 0x20; // int32_t
			constexpr auto treeLayerMask = 0x24; // int32_t
			constexpr auto impostorLayerMask = 0x28; // int32_t
			constexpr auto instance = 0x20; // ImpostorRenderer
			constexpr auto NaNProperty = 0x28; // int32_t
			constexpr auto PositionBufferProperty = 0x2C; // int32_t
		}
		namespace ImpostorShadows
		{
			constexpr auto light = 0x18; // Light
		}
		namespace LightCloneShadow
		{
			constexpr auto cloneShadowMap = 0x18; // bool
			constexpr auto shaderPropNameMap = 0x20; // string
			constexpr auto cloneShadowMapDownscale = 0x28; // int32_t
			constexpr auto map = 0x30; // RenderTexture
			constexpr auto cloneShadowMask = 0x38; // bool
			constexpr auto shaderPropNameMask = 0x40; // string
			constexpr auto cloneShadowMaskDownscale = 0x48; // int32_t
			constexpr auto mask = 0x50; // RenderTexture
			constexpr auto light = 0x58; // Light
			constexpr auto mapCB = 0x60; // CommandBuffer
			constexpr auto maskCB = 0x68; // CommandBuffer
			constexpr auto screenWidth = 0x70; // int32_t
			constexpr auto screenHeight = 0x74; // int32_t
		}
		namespace LiquidWobble
		{
			constexpr auto rend = 0x18; // Renderer
			constexpr auto lastPos = 0x20; // Vector3
			constexpr auto velocity = 0x2C; // Vector3
			constexpr auto lastRot = 0x38; // Vector3
			constexpr auto angularVelocity = 0x44; // Vector3
			constexpr auto CurrentWaterLevelFraction = 0x50; // float
			constexpr auto MinWaterLevel = 0x54; // float
			constexpr auto MaxWaterLevel = 0x58; // float
			constexpr auto MaxWobble = 0x5C; // float
			constexpr auto WobbleSpeed = 0x60; // float
			constexpr auto Recovery = 0x64; // float
			constexpr auto wobbleAmountX = 0x68; // float
			constexpr auto wobbleAmountZ = 0x6C; // float
			constexpr auto wobbleAmountToAddX = 0x70; // float
			constexpr auto wobbleAmountToAddZ = 0x74; // float
			constexpr auto pulse = 0x78; // float
			constexpr auto time = 0x7C; // float
			constexpr auto turbulence = 0x80; // float
			constexpr auto propertyBlock = 0x0; // MaterialPropertyBlock
			constexpr auto wobbleXID = 0x8; // int32_t
			constexpr auto wobbleZID = 0xC; // int32_t
			constexpr auto waterLevelID = 0x10; // int32_t
			constexpr auto turbulenceID = 0x14; // int32_t
		}
		namespace MaterialPropertyDesc
		{
			constexpr auto nameID = 0x0; // int32_t
			constexpr auto type = 0x8; // Type
		}
		namespace MorphCache
		{
			constexpr auto shapes = 0x18; // Mesh[]
			constexpr auto skinnedMeshRenderer = 0x20; // SkinnedMeshRenderer
			constexpr auto originalMesh = 0x28; // Mesh
			constexpr auto shapeIndex = 0x30; // int32_t
		}
		namespace ObjectMotionVectorFix
		{
			constexpr auto renderer = 0x18; // Renderer
			constexpr auto restoreQueue = 0x0; // Queue`1
		}
		namespace PostOpaqueDepth
		{
			constexpr auto postOpaqueDepth = 0x18; // RenderTexture
			constexpr auto camera = 0x20; // Camera
			constexpr auto commandBufferManager = 0x28; // CommandBufferManager
			constexpr auto commandBufferDesc = 0x30; // CommandBufferDesc
			constexpr auto copyDepthMat = 0x38; // Material
			constexpr auto cameraDepth = 0x40; // RenderTexture
		}
		namespace QuadDecal
		{
			constexpr auto quadDecals = 0x0; // List`1
		}
		namespace ReflectionProbeEx
		{
			constexpr auto qualitySamples = 0x0; // uint32_t[,]
			constexpr auto sampleData = 0x8; // Vector4[]
			constexpr auto refreshMode = 0x18; // ReflectionProbeRefreshMode
			constexpr auto timeSlicing = 0x1C; // bool
			constexpr auto resolution = 0x20; // int32_t
			constexpr auto hdr = 0x24; // bool
			constexpr auto shadowDistance = 0x28; // float
			constexpr auto clearFlags = 0x2C; // ReflectionProbeClearFlags
			constexpr auto background = 0x30; // Color
			constexpr auto nearClip = 0x40; // float
			constexpr auto farClip = 0x44; // float
			constexpr auto attachToTarget = 0x48; // Transform
			constexpr auto directionalLight = 0x50; // Light
			constexpr auto textureMipBias = 0x58; // float
			constexpr auto highPrecision = 0x5C; // bool
			constexpr auto enableShadows = 0x5D; // bool
			constexpr auto convolutionQuality = 0x60; // ConvolutionQuality
			constexpr auto staticRenderList = 0x68; // List`1
			constexpr auto reflectionCubemap = 0x70; // Cubemap
			constexpr auto reflectionIntensity = 0x78; // float
			constexpr auto dynamicRenderList = 0x80; // List`1
			constexpr auto probe = 0x88; // ReflectionProbe
			constexpr auto probeTexture = 0x90; // RenderTexture
			constexpr auto probeResolution = 0x98; // int32_t
			constexpr auto probeHdr = 0x9C; // bool
			constexpr auto probeShadowDistance = 0xA0; // float
			constexpr auto probeNearClip = 0xA4; // float
			constexpr auto probeFarClip = 0xA8; // float
			constexpr auto probeHighPrecision = 0xAC; // bool
			constexpr auto timeSlicedRenderState = 0xB0; // TimeSlicingState
			constexpr auto scriptingRenderQueued = 0xB4; // bool
			constexpr auto faceProjMatrix = 0xB8; // Matrix4x4
			constexpr auto faceProjInvMatrix = 0xF8; // Matrix4x4
			constexpr auto prevFrame = 0x138; // int32_t
			constexpr auto savedProbeRefresh = 0x13C; // ReflectionProbeRefreshMode
			constexpr auto savedProbeMode = 0x140; // ReflectionProbeMode
			constexpr auto savedProbeCustomTexture = 0x148; // Texture
			constexpr auto blitMesh = 0x150; // Mesh
			constexpr auto skyboxMesh = 0x158; // Mesh
			constexpr auto octaVerts = 0x10; // float[]
			constexpr auto cubemapFaceMatrices = 0x18; // CubemapFaceMatrices[]
			constexpr auto cubemapFaceMatricesD3D11 = 0x20; // CubemapFaceMatrices[]
			constexpr auto shadowCubemapFaceMatrices = 0x28; // CubemapFaceMatrices[]
			constexpr auto platformCubemapFaceMatrices = 0x160; // CubemapFaceMatrices[]
			constexpr auto supportedShaderNames = 0x30; // HashSet`1
			constexpr auto supportedShaders = 0x38; // Dictionary`2
			constexpr auto matchingMaterials = 0x40; // Dictionary`2
			constexpr auto probeTempTexture = 0x168; // RenderTexture
			constexpr auto probeShadowTexture = 0x170; // RenderTexture
			constexpr auto arrayTexture = 0x178; // RenderTexture
			constexpr auto arrayTempTexture = 0x180; // RenderTexture
			constexpr auto arrayDepthTexture = 0x188; // RenderTexture
			constexpr auto mipmapCount = 0x190; // int32_t
			constexpr auto blitMaterial = 0x198; // Material
			constexpr auto filterMaterial = 0x1A0; // Material
			constexpr auto shadowMaterial = 0x1A8; // Material
			constexpr auto forwardCB = 0x1B0; // CommandBuffer
			constexpr auto shadowCB = 0x1B8; // CommandBuffer
			constexpr auto viewProjMatrixArray = 0x1C0; // Matrix4x4[]
			constexpr auto objectToWorldArray = 0x1C8; // Matrix4x4[]
			constexpr auto cameraToWorldArray = 0x1D0; // Matrix4x4[]
			constexpr auto useGeometryShader = 0x1D8; // bool
			constexpr auto PassCount = 0x1DC; // int32_t
			constexpr auto tab32 = 0x48; // int32_t[]
		}
		namespace SpecialPurposeCamera
		{
			constexpr auto dirty = 0x10; // bool
			constexpr auto name = 0x18; // string
			constexpr auto camera = 0x20; // Camera
			constexpr auto texture = 0x28; // RenderTexture
			constexpr auto commands = 0x30; // CommandBuffer
			constexpr auto position = 0x38; // Vector3
			constexpr auto rotation = 0x44; // Quaternion
			constexpr auto orthographicSize = 0x54; // float
			constexpr auto nearClipPlane = 0x58; // float
			constexpr auto farClipPlane = 0x5C; // float
			constexpr auto created = 0x60; // bool
			constexpr auto dynamicEntries = 0x68; // ListHashSet`1
			constexpr auto dynamicBuffer = 0x70; // InstancingContainer
			constexpr auto staticEntries = 0x78; // ListHashSet`1
			constexpr auto staticBuffer = 0x80; // InstancingContainer
			constexpr auto cameraEvent = 0x88; // CameraEvent
			constexpr auto block = 0x90; // MaterialPropertyBlock
		}
		namespace ClothWindModify
		{
			constexpr auto cloth = 0x18; // Cloth
			constexpr auto initialClothForce = 0x20; // Vector3
			constexpr auto worldWindScale = 0x2C; // Vector3
			constexpr auto turbulenceScale = 0x38; // Vector3
		}
		namespace WindZoneEx
		{
			constexpr auto windZone = 0x18; // WindZone
		}
		namespace WindZoneExManager
		{
			constexpr auto maxAccumMain = 0x18; // float
			constexpr auto maxAccumTurbulence = 0x1C; // float
			constexpr auto globalMainScale = 0x20; // float
			constexpr auto globalTurbulenceScale = 0x24; // float
			constexpr auto testPosition = 0x28; // Transform
			constexpr auto registeredZones = 0x0; // HashSet`1
			constexpr auto currentZones = 0x8; // List`1
			constexpr auto windZoneInfoArray = 0x10; // Vector4[]
			constexpr auto windZoneParamArray = 0x18; // Vector4[]
			constexpr auto instance = 0x20; // WindZoneExManager
		}
		namespace RgbColor
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace RgbEffects
		{
			constexpr auto Enabled = 0x0; // bool
			constexpr auto ColorCorrection_SteelSeries = 0x4; // Vector3
			constexpr auto ColorCorrection_Razer = 0x10; // Vector3
			constexpr auto Brightness = 0x1C; // float
			constexpr auto defaultColor = 0x18; // Color
			constexpr auto buildingPrivilegeColor = 0x28; // Color
			constexpr auto coldColor = 0x38; // Color
			constexpr auto hotColor = 0x48; // Color
			constexpr auto hurtColor = 0x58; // Color
			constexpr auto healedColor = 0x68; // Color
			constexpr auto irradiatedColor = 0x78; // Color
			constexpr auto comfortedColor = 0x88; // Color
			constexpr auto _controller = 0x98; // RgbController
			constexpr auto _lastStaticSet = 0xA0; // Stopwatch
			constexpr auto _lastStatic = 0xA8; // Nullable`1
			constexpr auto _lastPulse = 0xC0; // Stopwatch
			constexpr auto _lastPulseDuration = 0xC8; // float
		}
		namespace RustPlatformHooks
		{
			constexpr auto Instance = 0x0; // RustPlatformHooks
		}
		namespace SendMessageToEntityOnAnimationFinish
		{
			constexpr auto messageToSendToEntity = 0x18; // string
			constexpr auto repeatRate = 0x20; // float
		}
		namespace AntiHack
		{
			constexpr auto noclip_margin_dismount = 0x0; // float
			constexpr auto noclip_backtracking = 0x4; // float
		}
		namespace ServerPerformance
		{
			constexpr auto deaths = 0x0; // UInt64
			constexpr auto spawns = 0x8; // UInt64
			constexpr auto position_changes = 0x10; // UInt64
		}
		namespace TriggerHurtEx
		{
			constexpr auto repeatRate = 0x30; // float
			constexpr auto damageOnEnter = 0x38; // List`1
			constexpr auto effectOnEnter = 0x40; // GameObjectRef
			constexpr auto hurtTypeOnEnter = 0x48; // HurtType
			constexpr auto damageOnTimer = 0x50; // List`1
			constexpr auto effectOnTimer = 0x58; // GameObjectRef
			constexpr auto hurtTypeOnTimer = 0x60; // HurtType
			constexpr auto damageOnMove = 0x68; // List`1
			constexpr auto effectOnMove = 0x70; // GameObjectRef
			constexpr auto hurtTypeOnMove = 0x78; // HurtType
			constexpr auto damageOnLeave = 0x80; // List`1
			constexpr auto effectOnLeave = 0x88; // GameObjectRef
			constexpr auto hurtTypeOnLeave = 0x90; // HurtType
			constexpr auto damageEnabled = 0x94; // bool
		}
		namespace AssetNameCache
		{
			constexpr auto mixed = 0x0; // Dictionary`2
			constexpr auto lower = 0x8; // Dictionary`2
			constexpr auto upper = 0x10; // Dictionary`2
		}
		namespace BuildingGrade
		{
			constexpr auto type = 0x18; // Enum
			constexpr auto skin = 0x20; // UInt64
			constexpr auto enabledInStandalone = 0x28; // bool
			constexpr auto baseHealth = 0x2C; // float
			constexpr auto baseCost = 0x30; // List`1
			constexpr auto physicMaterial = 0x38; // PhysicMaterial
			constexpr auto damageProtecton = 0x40; // ProtectionProperties
			constexpr auto supportsColourChange = 0x48; // bool
			constexpr auto upgradeMenu = 0x50; // Option
		}
		namespace FileStorage
		{
			constexpr auto db = 0x10; // Database
			constexpr auto crc = 0x18; // CRC32
			constexpr auto _cache = 0x20; // MruDictionary`2
			constexpr auto client = 0x0; // FileStorage
		}
		namespace GameManifest
		{
			constexpr auto loadedManifest = 0x0; // GameManifest
			constexpr auto guidToPath = 0x8; // Dictionary`2
			constexpr auto pathToGuid = 0x10; // Dictionary`2
			constexpr auto guidToObject = 0x18; // Dictionary`2
			constexpr auto pooledStrings = 0x18; // Pooledstring[]
			constexpr auto prefabProperties = 0x20; // PrefabProperties[]
			constexpr auto effectCategories = 0x28; // EffectCategory[]
			constexpr auto guidPaths = 0x30; // GuidPath[]
			constexpr auto entities = 0x38; // string[]
		}
		namespace HairDye
		{
			constexpr auto capBaseColor = 0x10; // Color
			constexpr auto sourceMaterial = 0x20; // Material
			constexpr auto copyProperties = 0x28; // CopyPropertyMask
			constexpr auto transferableProps = 0x0; // MaterialPropertyDesc[]
			constexpr auto _HairBaseColorUV1 = 0x8; // int32_t
			constexpr auto _HairBaseColorUV2 = 0xC; // int32_t
			constexpr auto _HairPackedMapUV1 = 0x10; // int32_t
			constexpr auto _HairPackedMapUV2 = 0x14; // int32_t
		}
		namespace HairDyeCollection
		{
			constexpr auto capMask = 0x18; // Texture
			constexpr auto applyCap = 0x20; // bool
			constexpr auto Variations = 0x28; // HairDye[]
		}
		namespace HairSet
		{
			constexpr auto MeshReplacements = 0x18; // MeshReplace[]
		}
		namespace HairType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace HairSetCollection
		{
			constexpr auto Head = 0x18; // HairSetEntry[]
			constexpr auto Eyebrow = 0x20; // HairSetEntry[]
			constexpr auto Facial = 0x28; // HairSetEntry[]
			constexpr auto Armpit = 0x30; // HairSetEntry[]
			constexpr auto Pubic = 0x38; // HairSetEntry[]
		}
		namespace ItemSkin
		{
			constexpr auto Skinnable = 0x70; // Skinnable
			constexpr auto Materials = 0x78; // Material[]
			constexpr auto Redirect = 0x80; // ItemDefinition
			constexpr auto UnlockedViaSteamItem = 0x88; // SteamInventoryItem
		}
		namespace ItemSkinDirectory
		{
			constexpr auto _Instance = 0x0; // ItemSkinDirectory
			constexpr auto skins = 0x18; // Skin[]
		}
		namespace LootSpawn
		{
			constexpr auto items = 0x18; // ItemAmountRanged[]
			constexpr auto subSpawn = 0x20; // Entry[]
		}
		namespace MapImageRenderer
		{
			constexpr auto StartColor = 0x0; // Vector3
			constexpr auto WaterColor = 0xC; // Vector4
			constexpr auto GravelColor = 0x1C; // Vector4
			constexpr auto DirtColor = 0x2C; // Vector4
			constexpr auto SandColor = 0x3C; // Vector4
			constexpr auto GrassColor = 0x4C; // Vector4
			constexpr auto ForestColor = 0x5C; // Vector4
			constexpr auto RockColor = 0x6C; // Vector4
			constexpr auto SnowColor = 0x7C; // Vector4
			constexpr auto PebbleColor = 0x8C; // Vector4
			constexpr auto OffShoreColor = 0x9C; // Vector4
			constexpr auto SunDirection = 0xAC; // Vector3
			constexpr auto Half = 0xB8; // Vector3
		}
		namespace NameHelper
		{
			constexpr auto _cache = 0x0; // Dictionary`2
			constexpr auto isCacheStreamerMode = 0x8; // bool
			constexpr auto friendListCache = 0x10; // Dictionary`2
			constexpr auto friendCacheExpiry = 0x18; // DateTime
		}
		namespace PlayerInventoryProperties
		{
			constexpr auto niceName = 0x18; // string
			constexpr auto order = 0x20; // int32_t
			constexpr auto belt = 0x28; // List`1
			constexpr auto main = 0x30; // List`1
			constexpr auto wear = 0x38; // List`1
			constexpr auto giveBase = 0x40; // PlayerInventoryProperties
		}
		namespace ProtectionProperties
		{
			constexpr auto comments = 0x18; // string
			constexpr auto density = 0x20; // float
			constexpr auto amounts = 0x28; // float[]
		}
		namespace Recipe
		{
			constexpr auto ProducedItem = 0x18; // ItemDefinition
			constexpr auto ProducedItemCount = 0x20; // int32_t
			constexpr auto CanQueueMultiple = 0x24; // bool
			constexpr auto SpawnedItem = 0x28; // GameObjectRef
			constexpr auto SpawnedItemName = 0x30; // string
			constexpr auto SpawnedItemDescription = 0x38; // string
			constexpr auto SpawnedItemIcon = 0x40; // Sprite
			constexpr auto RequiresBlueprint = 0x48; // bool
			constexpr auto Ingredients = 0x50; // RecipeIngredient[]
			constexpr auto MixingDuration = 0x58; // float
		}
		namespace RecipeDictionary
		{
			constexpr auto recipeListsDict = 0x0; // Dictionary`2
		}
		namespace RecipeList
		{
			constexpr auto Recipes = 0x20; // Recipe[]
		}
		namespace RecoilProperties
		{
			constexpr auto recoilYawMin = 0x18;
			constexpr auto recoilYawMax = 0x1c;
			constexpr auto recoilPitchMin = 0x20;
			constexpr auto recoilPitchMax = 0x24;
			constexpr auto timeToTakeMin = 0x28;
			constexpr auto timeToTakeMax = 0x2c;
			constexpr auto ADSScale = 0x30;
			constexpr auto movementPenalty = 0x34;
			constexpr auto clampPitch = 0x38;
			constexpr auto pitchCurve = 0x40;
			constexpr auto yawCurve = 0x48;
			constexpr auto useCurves = 0x50;
			constexpr auto curvesAsScalar = 0x51;
			constexpr auto shotsUntilMax = 0x54;
			constexpr auto maxRecoilRadius = 0x58;
			constexpr auto overrideAimconeWithCurve = 0x5c;
			constexpr auto aimconeCurveScale = 0x60;
			constexpr auto aimconeCurve = 0x68;
			constexpr auto aimconeProbabilityCurve = 0x70;
			constexpr auto newRecoilOverride = 0x78;
		}
		namespace SkinReplacement
		{
			constexpr auto skinReplacementType = 0x10; // SkinType
			constexpr auto targetReplacement = 0x18; // GameObjectRef
		}
		namespace SkinSet
		{
			constexpr auto Label = 0x18; // string
			constexpr auto SkinColour = 0x20; // Gradient
			constexpr auto HairCollection = 0x28; // HairSetCollection
			constexpr auto Head = 0x30; // GameObjectRef
			constexpr auto Torso = 0x38; // GameObjectRef
			constexpr auto Legs = 0x40; // GameObjectRef
			constexpr auto Feet = 0x48; // GameObjectRef
			constexpr auto Hands = 0x50; // GameObjectRef
			constexpr auto CensoredTorso = 0x58; // GameObjectRef
			constexpr auto CensoredLegs = 0x60; // GameObjectRef
			constexpr auto HeadMaterial = 0x68; // Material
			constexpr auto BodyMaterial = 0x70; // Material
			constexpr auto EyeMaterial = 0x78; // Material
		}
		namespace SkinSetCollection
		{
			constexpr auto Skins = 0x18; // SkinSet[]
		}
		namespace SteamDLCItem
		{
			constexpr auto id = 0x18; // int32_t
			constexpr auto dlcName = 0x20; // Phrase
			constexpr auto dlcAppID = 0x28; // int32_t
			constexpr auto bypassLicenseCheck = 0x2C; // bool
		}
		namespace SteamInventoryCategory
		{
			constexpr auto canBeSoldToOtherUsers = 0x18; // bool
			constexpr auto canBeTradedWithOtherUsers = 0x19; // bool
			constexpr auto isCommodity = 0x1A; // bool
			constexpr auto price = 0x1C; // Price
			constexpr auto dropChance = 0x20; // DropChance
			constexpr auto CanBeInCrates = 0x24; // bool
		}
		namespace SteamInventoryItem
		{
			constexpr auto id = 0x18; // int32_t
			constexpr auto icon = 0x20; // Sprite
			constexpr auto displayName = 0x28; // Phrase
			constexpr auto displayDescription = 0x30; // Phrase
			constexpr auto category = 0x38; // Category
			constexpr auto subcategory = 0x3C; // SubCategory
			constexpr auto steamCategory = 0x40; // SteamInventoryCategory
			constexpr auto isLimitedTimeOffer = 0x48; // bool
			constexpr auto PreventBreakingDown = 0x49; // bool
			constexpr auto itemname = 0x50; // string
			constexpr auto workshopID = 0x58; // UInt64
			constexpr auto DlcItem = 0x60; // SteamDLCItem
			constexpr auto forceCraftableItemDesc = 0x68; // bool
			constexpr auto Item = 0x18; // IPlayerItem
			constexpr auto Image = 0x20; // HttpImage
		}
		namespace StringFormatCache
		{
			constexpr auto dict1 = 0x0; // Dictionary`2
			constexpr auto dict2 = 0x8; // Dictionary`2
			constexpr auto dict3 = 0x10; // Dictionary`2
			constexpr auto dict4 = 0x18; // Dictionary`2
		}
		namespace StringPool
		{
			constexpr auto toString = 0x0; // Dictionary`2
			constexpr auto toNumber = 0x8; // Dictionary`2
			constexpr auto initialized = 0x10; // bool
			constexpr auto closest = 0x14; // uint32_t
		}
		namespace Underwear
		{
			constexpr auto shortname = 0x18; // string
			constexpr auto displayName = 0x20; // Phrase
			constexpr auto icon = 0x28; // Sprite
			constexpr auto iconFemale = 0x30; // Sprite
			constexpr auto replacementsMale = 0x38; // SkinReplacement[]
			constexpr auto replacementsFemale = 0x40; // SkinReplacement[]
			constexpr auto steamItem = 0x48; // SteamInventoryItem
			constexpr auto steamDLC = 0x50; // SteamDLCItem
			constexpr auto adminOnly = 0x58; // bool
		}
		namespace UnderwearManifest
		{
			constexpr auto instance = 0x0; // UnderwearManifest
			constexpr auto underwears = 0x18; // List`1
		}
		namespace OpenSteamURL
		{
			constexpr auto openInSteam = 0x18; // bool
		}
		namespace DemoTimelineController
		{
			constexpr auto Director = 0x18; // PlayableDirector
		}
		namespace DemoTrackBehaviour
		{
			constexpr auto DemoName = 0x10; // string
		}
		namespace TimelineConvarController
		{
			constexpr auto convarName = 0x18; // string
			constexpr auto template_ = 0x20; // TimelineConvarPlayable
		}
		namespace TimelineConvarPlayable
		{
			constexpr auto convar = 0x10; // string
			constexpr auto ConvarValue = 0x18; // float
		}
		namespace AchievementGroup
		{
			constexpr auto groupTitle = 0x10; // Phrase
			constexpr auto All = 0x0; // AchievementGroup[]
			constexpr auto Items = 0x18; // AchievementItem[]
		}
		namespace Achievements
		{
			constexpr auto listComplete = 0x18; // SoundDefinition
			constexpr auto itemComplete = 0x20; // SoundDefinition
			constexpr auto popup = 0x28; // SoundDefinition
			constexpr auto Canvas = 0x30; // Canvas
			constexpr auto titleText = 0x38; // Text
			constexpr auto items = 0x40; // AchievementTodo[]
			constexpr auto blockOpenSound = 0x48; // bool
		}
		namespace AchievementTodo
		{
			constexpr auto text = 0x18; // Text
			constexpr auto checkIcon = 0x20; // RectTransform
			constexpr auto checkBox = 0x28; // RectTransform
			constexpr auto AliveColor = 0x30; // Color
			constexpr auto DeadColor = 0x40; // Color
			constexpr auto HighlightColor = 0x50; // Color
			constexpr auto Item = 0x60; // AchievementItem
			constexpr auto State = 0x68; // bool
		}
		namespace AdminUI
		{
			constexpr auto AllowInDemo = 0x18; // bool
			constexpr auto TargetGameObject = 0x20; // GameObject
		}
		namespace AddNewEventUIButton
		{
			constexpr auto stateUI = 0x18; // BaseStateUI
		}
		namespace AddNewStateUIButton
		{
			constexpr auto designerUI = 0x18; // UIAIDesignerScreen
		}
		namespace BaseEventUI
		{
			constexpr auto EventType = 0x18; // AIEventType
			constexpr auto TextEventType = 0x20; // RustText
			constexpr auto TextOutput = 0x28; // RustText
			constexpr auto ToggleInvert = 0x30; // RustButton
			constexpr auto DropdownInputMemorySlot = 0x38; // Dropdown
			constexpr auto DropdownOutputMemorySlot = 0x40; // Dropdown
			constexpr auto InputFloatValue = 0x48; // RustInput
			constexpr auto InputFloatValue2 = 0x50; // RustInput
			constexpr auto Output = 0x58; // BaseStateUI
			constexpr auto IDk__BackingField = 0x60; // int32_t
			constexpr auto stateUI = 0x68; // BaseStateUI
			constexpr auto outputColor = 0x70; // Color
		}
		namespace BaseStateUI
		{
			constexpr auto DropdownInputMemorySlot = 0x18; // Dropdown
			constexpr auto PrefabAddNewEvent = 0x20; // Transform
			constexpr auto PrefabTimerEvent = 0x28; // Transform
			constexpr auto PrefabPlayerDetectedEvent = 0x30; // Transform
			constexpr auto PrefabStateErrorEvent = 0x38; // Transform
			constexpr auto PrefabStateFinishedEvent = 0x40; // Transform
			constexpr auto PrefabAttackedEvent = 0x48; // Transform
			constexpr auto PrefabInAttackRangeEvent = 0x50; // Transform
			constexpr auto PrefabHealthBelowEvent = 0x58; // Transform
			constexpr auto PrefabInRangeEvent = 0x60; // Transform
			constexpr auto PrefabPerformedAttackEvent = 0x68; // Transform
			constexpr auto PrefabTirednessAboveEvent = 0x70; // Transform
			constexpr auto PrefabHungerAboveEvent = 0x78; // Transform
			constexpr auto PrefabThreatDetectevEvent = 0x80; // Transform
			constexpr auto PrefabTargetDetectevEvent = 0x88; // Transform
			constexpr auto PrefabAmmoBelowEvent = 0x90; // Transform
			constexpr auto PrefabBestTargetDetectedEvent = 0x98; // Transform
			constexpr auto PrefabIsVisibleEvent = 0xA0; // Transform
			constexpr auto PrefabAttackTickEvent = 0xA8; // Transform
			constexpr auto PrefabIsMountedEvent = 0xB0; // Transform
			constexpr auto PrefabAndEvent = 0xB8; // Transform
			constexpr auto PrefabChanceEvent = 0xC0; // Transform
			constexpr auto PrefabTargetLostEvent = 0xC8; // Transform
			constexpr auto PrefabTimeSinceThreatEvent = 0xD0; // Transform
			constexpr auto PrefabOnPositionMemorySetEvent = 0xD8; // Transform
			constexpr auto PrefabAggressionTimerEvent = 0xE0; // Transform
			constexpr auto PrefabReloadingEvent = 0xE8; // Transform
			constexpr auto PrefabInRangeOfHomeEvent = 0xF0; // Transform
			constexpr auto PrefabIsBlindedEvent = 0xF8; // Transform
			constexpr auto TextStateName = 0x100; // RustText
			constexpr auto EventContainer = 0x108; // Transform
			constexpr auto Scroll = 0x110; // ScrollRect
			constexpr auto StateType = 0x118; // AIState
			constexpr auto StateContainerID = 0x11C; // int32_t
			constexpr auto InputEntityMemorySlotk__BackingField = 0x120; // int32_t
			constexpr auto addNewEventButton = 0x128; // Transform
		}
		namespace EnumListItemUI
		{
			constexpr auto Value = 0x18; // Object
			constexpr auto TextValue = 0x20; // RustText
			constexpr auto list = 0x28; // EnumListUI
		}
		namespace EnumListUI
		{
			constexpr auto PrefabItem = 0x18; // Transform
			constexpr auto Container = 0x20; // Transform
			constexpr auto clickedAction = 0x28; // Action`1
			constexpr auto canvasScaler = 0x30; // CanvasScaler
		}
		namespace MemorySlotUI
		{
			constexpr auto Label = 0x18; // RustText
		}
		namespace UIAIDesignerScreen
		{
			constexpr auto SaveEntityButton = 0x18; // GameObject
			constexpr auto SaveServerButton = 0x20; // GameObject
			constexpr auto SaveDefaultButton = 0x28; // GameObject
			constexpr auto InputAIDescription = 0x30; // RustInput
			constexpr auto TextDefaultStateContainer = 0x38; // RustText
			constexpr auto PrefabAddNewStateButton = 0x40; // Transform
			constexpr auto StateContainer = 0x48; // Transform
			constexpr auto PrefabState = 0x50; // Transform
			constexpr auto PopupList = 0x58; // EnumListUI
			constexpr auto EnumList = 0x0; // EnumListUI
			constexpr auto needsCursor = 0x60; // NeedsCursor
			constexpr auto canvasGroup = 0x68; // CanvasGroup
			constexpr auto RootPanel = 0x70; // GameObject
			constexpr auto visible = 0x78; // bool
			constexpr auto DesignProto = 0x80; // AIDesign
			constexpr auto addNewStateButton = 0x88; // Transform
		}
		namespace AspectRatioGuide
		{
			constexpr auto aspectRatioFitter = 0x18; // AspectRatioFitter
			constexpr auto label = 0x20; // RustText
			constexpr auto aspect = 0x28; // float
			constexpr auto ratio = 0x2C; // float
		}
		namespace BlurManager
		{
			constexpr auto postProcessVolume = 0x18; // PostProcessVolume
			constexpr auto blurAmount = 0x20; // float
		}
		namespace Branding
		{
			constexpr auto versionText = 0x18; // TextMeshProUGUI
			constexpr auto canvasGroup = 0x20; // CanvasGroup
			constexpr auto oldChangeId = 0x28; // string
		}
		namespace ChatEntry
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
			constexpr auto avatar = 0x20; // RawImage
			constexpr auto canvasGroup = 0x28; // CanvasGroup
			constexpr auto lifeStarted = 0x30; // float
			constexpr auto steamid = 0x38; // UInt64
			constexpr auto LocalPhrase = 0x40; // Phrase
			constexpr auto CardsPhrase = 0x48; // Phrase
			constexpr auto TeamPhrase = 0x50; // Phrase
			constexpr auto defaultTexture = 0x58; // Texture
			constexpr auto clickedAction = 0x60; // Action`1
		}
		namespace UIChat
		{
			constexpr auto inputArea = 0x18; // GameObject
			constexpr auto chatArea = 0x20; // GameObject
			constexpr auto inputField = 0x28; // TMP_InputField
			constexpr auto channelLabel = 0x30; // TextMeshProUGUI
			constexpr auto scrollRect = 0x38; // ScrollRect
			constexpr auto canvasGroup = 0x40; // CanvasGroup
			constexpr auto chatItemPlayer = 0x48; // GameObjectRef
			constexpr auto userPopup = 0x50; // GameObject
			constexpr auto isOpen = 0x0; // bool
			constexpr auto activeChannel = 0x58; // ChatChannel
			constexpr auto popup = 0x60; // UIChatPopup
			constexpr auto channelOrder = 0x8; // List`1
		}
		namespace UIChatPopup
		{
			constexpr auto TextToggleMute = 0x18; // TextMeshProUGUI
			constexpr auto TextToggleGlobalMute = 0x20; // TextMeshProUGUI
			constexpr auto MuteButton = 0x28; // Button
			constexpr auto ReportButton = 0x30; // Button
			constexpr auto InviteToTeamButton = 0x38; // GameObject
			constexpr auto steamID = 0x40; // UInt64
			constexpr auto text = 0x48; // string
		}
		namespace ChildrenFromScene
		{
			constexpr auto SceneName = 0x18; // string
			constexpr auto StartChildrenDisabled = 0x20; // bool
		}
		namespace CompassMapMarker
		{
			constexpr auto MarkerImage = 0x18; // Image
			constexpr auto MarkerImageOuter = 0x20; // Image
			constexpr auto LeaderRoot = 0x28; // GameObject
			constexpr auto MarkerLabel = 0x30; // RustText
			constexpr auto lastSetString = 0x38; // string
			constexpr auto cachedNote = 0x40; // MapNote
			constexpr auto notNew = 0x48; // TimeUntil
		}
		namespace CompassMissionMarker
		{
			constexpr auto Icon = 0x18; // Image
		}
		namespace ConsoleUI
		{
			constexpr auto text = 0x18; // RustText
			constexpr auto outputField = 0x20; // InputField
			constexpr auto inputField = 0x28; // InputField
			constexpr auto AutocompleteDropDown = 0x30; // GameObject
			constexpr auto ItemTemplate = 0x38; // GameObject
			constexpr auto errorColor = 0x40; // Color
			constexpr auto warningColor = 0x50; // Color
			constexpr auto inputColor = 0x60; // Color
			constexpr auto buffer = 0x70; // TextBuffer
			constexpr auto history = 0x78; // TextBuffer
			constexpr auto historyTemp = 0x80; // string
			constexpr auto historyText = 0x88; // string
			constexpr auto historyIndex = 0x90; // int32_t
			constexpr auto autocompleteButtons = 0x98; // Button[]
			constexpr auto autocompleteIndex = 0xA0; // int32_t
			constexpr auto dirty = 0xA4; // bool
		}
		namespace ContextMenuUI
		{
			constexpr auto type = 0x0; // MenuType
		}
		namespace ConvarToggleChildren
		{
			constexpr auto ConvarName = 0x18; // string
			constexpr auto ConvarEnabled = 0x20; // string
			constexpr auto state = 0x28; // bool
			constexpr auto Command = 0x30; // Command
		}
		namespace CopyText
		{
			constexpr auto TargetText = 0x18; // RustText
		}
		namespace Crosshair
		{
			constexpr auto Enabled = 0x0; // bool
			constexpr auto Image = 0x18; // Image
			constexpr auto reticleTransform = 0x20; // RectTransform
			constexpr auto reticleAlpha = 0x28; // CanvasGroup
			constexpr auto hitNotifyMarker = 0x30; // RectTransform
			constexpr auto hitNotifyAlpha = 0x38; // CanvasGroup
			constexpr auto instance = 0x8; // Crosshair
			constexpr auto lastHitTime = 0x10; // float
			constexpr auto crosshairAlpha = 0x40; // float
			constexpr auto rectTransform = 0x48; // RectTransform
			constexpr auto aimconeMultiplier = 0x50; // float
			constexpr auto aimconeLerpSpeed = 0x54; // float
			constexpr auto hitNotifyStartSize = 0x58; // Vector2
			constexpr auto originalReticleSize = 0x60; // Vector2
			constexpr auto pointsSplashEffect = 0x68; // GameObjectRef
			constexpr auto activePoints = 0x70; // int32_t
		}
		namespace CursorManager
		{
			constexpr auto iHoldOpen = 0x0; // int32_t
			constexpr auto iPreviousOpen = 0x4; // int32_t
			constexpr auto lastTimeVisible = 0x8; // float
			constexpr auto lastTimeInvisible = 0xC; // float
		}
		namespace DamageToggle
		{
			constexpr auto toggle = 0x18; // Toggle
		}
		namespace ContainerSourceLocalPlayer
		{
			constexpr auto type = 0x18; // Type
		}
		namespace ContainerSourceLoot
		{
			constexpr auto container = 0x18; // int32_t
		}
		namespace ButtonIcon
		{
			constexpr auto Image = 0x98; // Image
		}
		namespace DebugCameraInfoReadout
		{
			constexpr auto ReadoutText = 0x18; // RustText
			constexpr auto builder = 0x20; // stringBuilder
		}
		namespace DemoPlaybackUI
		{
			constexpr auto Root = 0x18; // GameObject
		}
		namespace DemoPlaybackWidget
		{
			constexpr auto DemoProgress = 0x18; // RustSlider
			constexpr auto DemoName = 0x20; // RustText
			constexpr auto DemoDuration = 0x28; // RustText
			constexpr auto DemoCurrentTime = 0x30; // RustText
			constexpr auto PausedRoot = 0x38; // GameObject
			constexpr auto PlayingRoot = 0x40; // GameObject
			constexpr auto DemoPlaybackHandle = 0x48; // RectTransform
			constexpr auto ShotPlaybackWindow = 0x50; // RectTransform
			constexpr auto LoopButton = 0x58; // RustButton
			constexpr auto ShotButtonRoot = 0x60; // GameObject
			constexpr auto ShotNameText = 0x68; // RustText
			constexpr auto ShotNameRoot = 0x70; // GameObject
			constexpr auto ShotRecordWindow = 0x78; // RectTransform
			constexpr auto blockProgressInput = 0x80; // bool
			constexpr auto isDraggingSlider = 0x81; // bool
			constexpr auto lastDrag = 0x84; // RealTimeSince
			constexpr auto pausedAtStartOfDrag = 0x88; // bool
		}
		namespace DemoRootFade
		{
			constexpr auto Canvas = 0x18; // CanvasGroup
			constexpr auto ToggleHide = 0x0; // bool
		}
		namespace DemoShotButton
		{
			constexpr auto FireEventOnClicked = 0x98; // bool
		}
		namespace DemoShotEntry
		{
			constexpr auto PlayButton = 0x18; // RustButton
			constexpr auto DragSprite = 0x20; // Sprite
			constexpr auto RenameInput = 0x28; // RustInput
			constexpr auto CurrentShotk__BackingField = 0x30; // DemoShot
		}
		namespace DemoShotListFolderWidget
		{
			constexpr auto FolderName = 0x18; // RustButton
			constexpr auto ChildRoot = 0x20; // Transform
			constexpr auto UpArrow = 0x28; // GameObject
			constexpr auto DownArrow = 0x30; // GameObject
			constexpr auto CountText = 0x38; // RustText
			constexpr auto OpenRoot = 0x40; // GameObject
			constexpr auto ModifyRoot = 0x48; // GameObject
			constexpr auto FolderRenameInput = 0x50; // RustInput
			constexpr auto CurrentStatek__BackingField = 0x58; // bool
			constexpr auto cachedFolderNamek__BackingField = 0x60; // string
		}
		namespace DemoShotListWidget
		{
			constexpr auto ShotListEntry = 0x18; // GameObjectRef
			constexpr auto FolderEntry = 0x20; // GameObjectRef
			constexpr auto ShotListParent = 0x28; // Transform
			constexpr auto FolderNameInput = 0x30; // RustInput
			constexpr auto ShotsRoot = 0x38; // GameObject
			constexpr auto NoShotsRoot = 0x40; // GameObject
			constexpr auto TopUpArrow = 0x48; // GameObject
			constexpr auto TopDownArrow = 0x50; // GameObject
			constexpr auto DragCanvas = 0x58; // Canvas
			constexpr auto foundShots = 0x60; // Dictionary`2
			constexpr auto spawnedEntries = 0x68; // List`1
			constexpr auto spawnedFolders = 0x70; // List`1
			constexpr auto isOpen = 0x78; // bool
		}
		namespace DemoShotRecordWidget
		{
			constexpr auto NameInput = 0x18; // RustInput
			constexpr auto RecordingRoot = 0x20; // GameObject
			constexpr auto PreRecordingRoot = 0x28; // GameObject
			constexpr auto CountdownToggle = 0x30; // RustButton
			constexpr auto PauseOnSaveToggle = 0x38; // RustButton
			constexpr auto ReturnToStartToggle = 0x40; // RustButton
			constexpr auto RecordDofToggle = 0x48; // RustButton
			constexpr auto FolderDropdown = 0x50; // RustOption
			constexpr auto RecordingUnderlay = 0x58; // GameObject
			constexpr auto CountdownAudio = 0x60; // AudioSource
			constexpr auto ShotRecordTime = 0x68; // GameObject
			constexpr auto ShotRecordTimeText = 0x70; // RustText
			constexpr auto ShotNameText = 0x78; // RustText
			constexpr auto RecordingInProcessRoot = 0x80; // GameObject
			constexpr auto CountdownActiveRoot = 0x88; // GameObject
			constexpr auto CountdownActiveSliderRoot = 0x90; // GameObject
			constexpr auto CountdownActiveSlider = 0x98; // RustSlider
			constexpr auto CountdownActiveText = 0xA0; // RustText
			constexpr auto Instance = 0x0; // DemoShotRecordWidget
		}
		namespace DemoText
		{
			constexpr auto TimeText = 0x18; // RustText
			constexpr auto TotalSecondText = 0x20; // RustText
			constexpr auto TimeScaleText = 0x28; // RustText
			constexpr auto FilenameText = 0x30; // RustText
			constexpr auto DateTimeText = 0x38; // RustText
			constexpr auto ParentText = 0x40; // RustText
			constexpr auto DofText = 0x48; // RustText
			constexpr auto InternalRoot = 0x50; // GameObject
			constexpr auto ParentRoot = 0x58; // GameObject
			constexpr auto DofRoot = 0x60; // GameObject
		}
		namespace KeyframeView
		{
			constexpr auto Scroller = 0x18; // ScrollRect
			constexpr auto KeyframePrefab = 0x20; // GameObjectRef
			constexpr auto KeyframeRoot = 0x28; // RectTransform
			constexpr auto CurrentPositionIndicator = 0x30; // Transform
			constexpr auto LockScrollToCurrentPosition = 0x38; // bool
			constexpr auto TrackName = 0x40; // RustText
			constexpr auto spawnedWidgets = 0x48; // List`1
		}
		namespace KeyframeWidget
		{
			constexpr auto AttachedTooltip = 0x18; // Tooltip
			constexpr auto cachedValue = 0x20; // UIKeyframeValue
		}
		namespace DemoRecorder
		{
			constexpr auto Input = 0x18; // RustInput
			constexpr auto RecordingUnderlay = 0x20; // GameObject
			constexpr auto IsOpen = 0x28; // bool
		}
		namespace DemoRecorderProgress
		{
			constexpr auto RecordingLabel = 0x18; // RustText
			constexpr auto ProgressLabel = 0x20; // RustText
			constexpr auto RecordingUnderlay = 0x28; // GameObject
			constexpr auto canvasGroup = 0x30; // CanvasGroup
			constexpr auto needsCursor = 0x38; // NeedsCursor
		}
		namespace DeveloperTools
		{
			constexpr auto developerTools = 0x18; // GameObject
			constexpr auto navButton = 0x20; // GameObject
			constexpr auto panelContainer = 0x28; // GameObject
			constexpr auto ConsoleInput = 0x30; // Text
			constexpr auto LastSelected = 0x0; // int32_t
			constexpr auto CurrentlySelected = 0x4; // int32_t
		}
		namespace BlackjackMainScreenUI
		{
			constexpr auto inGameDisplay = 0x18; // Canvas
			constexpr auto notInGameDisplay = 0x20; // Canvas
			constexpr auto faceNeutral = 0x28; // Sprite
			constexpr auto faceShocked = 0x30; // Sprite
			constexpr auto faceSad = 0x38; // Sprite
			constexpr auto faceCool = 0x40; // Sprite
			constexpr auto faceHappy = 0x48; // Sprite
			constexpr auto faceLove = 0x50; // Sprite
			constexpr auto faceInGame = 0x58; // Image
			constexpr auto faceNotInGame = 0x60; // Image
			constexpr auto faceNeutralVariants = 0x68; // Sprite[]
			constexpr auto faceHalloweenVariants = 0x70; // Sprite[]
			constexpr auto cardCountText = 0x78; // RustText
			constexpr auto payoutText = 0x80; // RustText
			constexpr auto insuranceText = 0x88; // RustText
			constexpr auto placeBetsCanvas = 0x90; // Canvas
			constexpr auto cardsLayout = 0x98; // HorizontalLayoutGroup
			constexpr auto cards = 0xA0; // BlackjackScreenCardUI[]
			constexpr auto phraseBust = 0xA8; // Phrase
			constexpr auto blackjack = 0xB0; // BlackjackMachine
			constexpr auto targetExpression = 0xB8; // DealerOpinion
			constexpr auto expressionBit = 0xBC; // bool
		}
		namespace BlackjackScreenCardUI
		{
			constexpr auto baseCanvas = 0x18; // Canvas
			constexpr auto cardFront = 0x20; // Canvas
			constexpr auto cardBack = 0x28; // Canvas
			constexpr auto image = 0x30; // Image
			constexpr auto text = 0x38; // RustText
			constexpr auto heartSprite = 0x40; // Sprite
			constexpr auto diamondSprite = 0x48; // Sprite
			constexpr auto spadeSprite = 0x50; // Sprite
			constexpr auto clubSprite = 0x58; // Sprite
			constexpr auto targetCard = 0x60; // PlayingCard
		}
		namespace BlackjackScreenInputUI
		{
			constexpr auto availableOption = 0x18; // Canvas
			constexpr auto unavailableOption = 0x20; // Canvas
			constexpr auto availableOptionText = 0x28; // RustText
		}
		namespace BlackjackSmallScreenUI
		{
			constexpr auto notInGameDisplay = 0x18; // Canvas
			constexpr auto inGameDisplay = 0x20; // Canvas
			constexpr auto cardCountText = 0x28; // RustText
			constexpr auto betText = 0x30; // RustText
			constexpr auto splitBetText = 0x38; // RustText
			constexpr auto insuranceText = 0x40; // RustText
			constexpr auto bankText = 0x48; // RustText
			constexpr auto splitText = 0x50; // RustText
			constexpr auto infoTextCanvas = 0x58; // Canvas
			constexpr auto inGameText = 0x60; // RustText
			constexpr auto notInGameText = 0x68; // RustText
			constexpr auto cardsLayout = 0x70; // HorizontalLayoutGroup
			constexpr auto cards = 0x78; // BlackjackScreenCardUI[]
			constexpr auto inputs = 0x80; // BlackjackScreenInputUI[]
			constexpr auto phraseBust = 0x88; // Phrase
			constexpr auto phraseBet = 0x90; // Phrase
			constexpr auto phrasePlaceYourBet = 0x98; // Phrase
			constexpr auto phraseStandoff = 0xA0; // Phrase
			constexpr auto phraseYouWin = 0xA8; // Phrase
			constexpr auto phraseYouLose = 0xB0; // Phrase
			constexpr auto phraseWaitingForOtherPlayers = 0xB8; // Phrase
			constexpr auto phraseAddFunds = 0xC0; // Phrase
			constexpr auto phraseWaitingForPlayer = 0xC8; // Phrase
			constexpr auto phraseSplitStored = 0xD0; // Phrase
			constexpr auto phraseSplitActive = 0xD8; // Phrase
			constexpr auto phraseHand = 0xE0; // Phrase
			constexpr auto blackjack = 0xE8; // BlackjackMachine
		}
		namespace BlackjackUI
		{
			constexpr auto playerCardImages = 0x18; // Image[]
			constexpr auto dealerCardImages = 0x20; // Image[]
			constexpr auto splitCardImages = 0x28; // Image[]
			constexpr auto playerCardBackings = 0x30; // Image[]
			constexpr auto dealerCardBackings = 0x38; // Image[]
			constexpr auto splitCardBackings = 0x40; // Image[]
			constexpr auto playerWidgets = 0x48; // CardGamePlayerWidget[]
			constexpr auto dealerValueObj = 0x50; // GameObject
			constexpr auto dealerValueText = 0x58; // RustText
			constexpr auto yourValueObj = 0x60; // GameObject
			constexpr auto yourValueText = 0x68; // RustText
			constexpr auto phrasePlaceYourBet = 0x70; // Phrase
			constexpr auto phraseHit = 0x78; // Phrase
			constexpr auto phraseStand = 0x80; // Phrase
			constexpr auto phraseSplit = 0x88; // Phrase
			constexpr auto phraseDouble = 0x90; // Phrase
			constexpr auto phraseInsurance = 0x98; // Phrase
			constexpr auto phraseBust = 0xA0; // Phrase
			constexpr auto phraseBlackjack = 0xA8; // Phrase
			constexpr auto phraseStandoff = 0xB0; // Phrase
			constexpr auto phraseYouWin = 0xB8; // Phrase
			constexpr auto phraseYouLose = 0xC0; // Phrase
			constexpr auto phraseWaitingForOtherPlayers = 0xC8; // Phrase
			constexpr auto phraseHand = 0xD0; // Phrase
			constexpr auto phraseInsurancePaidOut = 0xD8; // Phrase
			constexpr auto insuranceIcon = 0xE0; // Sprite
			constexpr auto noIcon = 0xE8; // Sprite
			constexpr auto bustTextColour = 0xF0; // Color
			constexpr auto DynamicBetAmountk__BackingField = 0x100; // int32_t
			constexpr auto lastActionId = 0x108; // UInt64
			constexpr auto wasPlayingSplitCards = 0x110; // bool
		}
		namespace CardGamePlayerWidget
		{
			constexpr auto cardImageSmallPrefab = 0x18; // GameObjectRef
			constexpr auto avatar = 0x20; // RawImage
			constexpr auto playerName = 0x28; // RustText
			constexpr auto scrapTotal = 0x30; // RustText
			constexpr auto betText = 0x38; // RustText
			constexpr auto background = 0x40; // Image
			constexpr auto inactiveBackground = 0x48; // Color
			constexpr auto activeBackground = 0x58; // Color
			constexpr auto foldedBackground = 0x68; // Color
			constexpr auto winnerBackground = 0x78; // Color
			constexpr auto actionShowAnimation = 0x88; // Animation
			constexpr auto actionText = 0x90; // RustText
			constexpr auto canSeeIcon = 0x98; // Sprite
			constexpr auto cannotSeeIcon = 0xA0; // Sprite
			constexpr auto blankSprite = 0xA8; // Sprite
			constexpr auto cornerIcon = 0xB0; // Image
			constexpr auto cardDisplayParent = 0xB8; // Transform
			constexpr auto cardDisplayGridLayout = 0xC0; // GridLayoutGroup
			constexpr auto circle = 0xC8; // GameObject
			constexpr auto circleText = 0xD0; // RustText
			constexpr auto normalCardColour = 0xD8; // Color
			constexpr auto fadedCardColour = 0xE8; // Color
			constexpr auto cardImages = 0xF8; // List`1
			constexpr auto emptyCardList = 0x100; // List`1
			constexpr auto cardSizeOneRow = 0x108; // Vector2
			constexpr auto cardSizeTwoRows = 0x110; // Vector2
			constexpr auto lastHandResultShow = 0x118; // TimeSince
		}
		namespace CardGameUI
		{
			constexpr auto primaryInfo = 0x30; // InfoTextUI
			constexpr auto secondaryInfo = 0x38; // InfoTextUI
			constexpr auto playerLeaveInfo = 0x40; // InfoTextUI
			constexpr auto playingUI = 0x48; // GameObject
			constexpr auto cardImages = 0x50; // PlayingCardImage[]
			constexpr auto inputWidgets = 0x58; // CardInputWidget[]
			constexpr auto dismountProgressSlider = 0x60; // RustSlider
			constexpr auto phraseLoading = 0x68; // Phrase
			constexpr auto phraseWaitingForNextRound = 0x70; // Phrase
			constexpr auto phraseNotEnoughPlayers = 0x78; // Phrase
			constexpr auto phrasePlayerLeftGame = 0x80; // Phrase
			constexpr auto phraseNotEnoughBuyIn = 0x88; // Phrase
			constexpr auto phraseTooMuchBuyIn = 0x90; // Phrase
			constexpr auto phraseYourTurn = 0x98; // Phrase
			constexpr auto phraseYouWinTheRound = 0xA0; // Phrase
			constexpr auto phraseRoundWinner = 0xA8; // Phrase
			constexpr auto phraseRoundWinners = 0xB0; // Phrase
			constexpr auto phraseScrapWon = 0xB8; // Phrase
			constexpr auto phraseScrapReturned = 0xC0; // Phrase
			constexpr auto phraseChangeBetAmount = 0xC8; // Phrase
			constexpr auto phraseBet = 0xD0; // Phrase
			constexpr auto phraseBetAdd = 0xD8; // Phrase
			constexpr auto phraseAllIn = 0xE0; // Phrase
			constexpr auto amountChangeRoot = 0xE8; // GameObject
			constexpr auto amountChangeText = 0xF0; // RustText
			constexpr auto colourNeutralUI = 0xF8; // Color
			constexpr auto colourGoodUI = 0x108; // Color
			constexpr auto colourBadUI = 0x118; // Color
			constexpr auto timerCanvas = 0x128; // CanvasGroup
			constexpr auto timerSlider = 0x130; // RustSlider
			constexpr auto chat = 0x138; // UIChat
			constexpr auto Hunger = 0x140; // HudElement
			constexpr auto Thirst = 0x148; // HudElement
			constexpr auto Health = 0x150; // HudElement
			constexpr auto PendingHealth = 0x158; // HudElement
			constexpr auto cardNone = 0x160; // Sprite
			constexpr auto cardBackLarge = 0x168; // Sprite
			constexpr auto cardBackSmall = 0x170; // Sprite
			constexpr auto cardBackLargeStatic = 0x0; // Sprite
			constexpr auto cardBackSmallStatic = 0x8; // Sprite
			constexpr auto texasHoldEmUI = 0x178; // TexasHoldEmUI
			constexpr auto blackjackUI = 0x180; // BlackjackUI
			constexpr auto owner = 0x188; // BaseCardGameEntity
			constexpr auto uiState = 0x190; // UIState
			constexpr auto curGameTypeUIk__BackingField = 0x198; // ICardGameSubUI
			constexpr auto turnStartTimer = 0x1A0; // TimeSince
			constexpr auto lastInputCount = 0x1A4; // int32_t
			constexpr auto dismountInProgress = 0x1A8; // bool
			constexpr auto dismountStart = 0x1AC; // TimeSince
			constexpr auto dismountInput = 0x1B0; // KeycodeWithAction
			constexpr auto availableInputs = 0x1D8; // List`1
			constexpr auto largeCardImageDict = 0x10; // Dictionary`2
			constexpr auto smallCardImageDict = 0x18; // Dictionary`2
			constexpr auto transparentCardImageDict = 0x20; // Dictionary`2
		}
		namespace CardInputWidget
		{
			constexpr auto InputText = 0x18; // RustText
			constexpr auto ActionText = 0x20; // RustText
			constexpr auto ExtraText = 0x28; // RustText
			constexpr auto lastKey = 0x30; // KeyCode
		}
		namespace PlayingCardSprite
		{
			constexpr auto image = 0x18; // Image
			constexpr auto anim = 0x20; // Animation
			constexpr auto targetSprite = 0x28; // Sprite
			constexpr auto largeCardBack = 0x30; // Sprite
			constexpr auto smallCardBack = 0x38; // Sprite
		}
		namespace TexasHoldEmUI
		{
			constexpr auto holeCardImages = 0x18; // Image[]
			constexpr auto holeCardBackings = 0x20; // Image[]
			constexpr auto communityCardImages = 0x28; // Image[]
			constexpr auto communityCardBackings = 0x30; // Image[]
			constexpr auto potText = 0x38; // RustText
			constexpr auto playerWidgets = 0x40; // CardGamePlayerWidget[]
			constexpr auto phraseWinningHand = 0x48; // Phrase
			constexpr auto foldPhrase = 0x50; // Phrase
			constexpr auto raisePhrase = 0x58; // Phrase
			constexpr auto checkPhrase = 0x60; // Phrase
			constexpr auto callPhrase = 0x68; // Phrase
			constexpr auto phraseRoyalFlush = 0x70; // Phrase
			constexpr auto phraseStraightFlush = 0x78; // Phrase
			constexpr auto phraseFourOfAKind = 0x80; // Phrase
			constexpr auto phraseFullHouse = 0x88; // Phrase
			constexpr auto phraseFlush = 0x90; // Phrase
			constexpr auto phraseStraight = 0x98; // Phrase
			constexpr auto phraseThreeOfAKind = 0xA0; // Phrase
			constexpr auto phraseTwoPair = 0xA8; // Phrase
			constexpr auto phrasePair = 0xB0; // Phrase
			constexpr auto phraseHighCard = 0xB8; // Phrase
			constexpr auto phraseRaiseAmount = 0xC0; // Phrase
			constexpr auto dealerChip = 0xC8; // Sprite
			constexpr auto smallBlindChip = 0xD0; // Sprite
			constexpr auto bigBlindChip = 0xD8; // Sprite
			constexpr auto noIcon = 0xE0; // Sprite
			constexpr auto DynamicBetAmountk__BackingField = 0xE8; // int32_t
			constexpr auto lastActionId = 0xF0; // UInt64
			constexpr auto lastPotUpdate = 0xF8; // int32_t
		}
		namespace ChangeSignText
		{
			constexpr auto onUpdateTexture = 0x30; // Action`2
			constexpr auto objectContainer = 0x38; // GameObject
			constexpr auto currentFrameSection = 0x40; // GameObject
			constexpr auto frameOptions = 0x48; // GameObject[]
			constexpr auto cameraPreview = 0x50; // Camera
			constexpr auto camera3D = 0x58; // Camera
			constexpr auto currentSourcesk__BackingField = 0x60; // MeshPaintableSource[]
			constexpr auto copiedObjects = 0x68; // List`1
			constexpr auto currentFrame = 0x70; // int32_t
			constexpr auto undoBuffer = 0x78; // Dictionary`2
			constexpr auto savedContainerName = 0x0; // string
			constexpr auto savedContainerEuler = 0x8; // Vector3
		}
		namespace UIColorPickerButton
		{
			constexpr auto Image = 0x18; // Image
			constexpr auto Color = 0x20; // Color
		}
		namespace UIFireworkDesigner
		{
			constexpr auto Title = 0x30; // RustInput
			constexpr auto StarsPlaced = 0x38; // RustText
			constexpr auto Canvas = 0x40; // RectTransform
			constexpr auto InnerCanvas = 0x48; // RectTransform
			constexpr auto StarPrefab = 0x50; // GameObject
			constexpr auto Tool = 0x58; // Tools
			constexpr auto SelectedColor = 0x5C; // Color
			constexpr auto _firework = 0x70; // PatternFirework
			constexpr auto _stars = 0x78; // Dictionary`2
		}
		namespace UIFireworkDesignItem
		{
			constexpr auto EmptyPhrase = 0x0; // Phrase
			constexpr auto UntitledPhrase = 0x8; // Phrase
			constexpr auto Title = 0x18; // RustText
			constexpr auto LoadButton = 0x20; // RustButton
			constexpr auto SaveButton = 0x28; // RustButton
			constexpr auto EraseButton = 0x30; // RustButton
			constexpr auto Designer = 0x38; // UIFireworkDesigner
			constexpr auto Index = 0x40; // int32_t
			constexpr auto _saved = 0x48; // SavedDesign
		}
		namespace UIFireworkStar
		{
			constexpr auto Image = 0x20; // Image
			constexpr auto Text = 0x28; // RustText
			constexpr auto _designer = 0x30; // UIFireworkDesigner
			constexpr auto Index = 0x38; // int32_t
			constexpr auto Color = 0x3C; // Color
		}
		namespace KeyCodeEntry
		{
			constexpr auto textDisplay = 0x30; // Text
			constexpr auto onCodeEntered = 0x38; // Action`1
			constexpr auto onClosed = 0x40; // Action
			constexpr auto typeDisplay = 0x48; // Text
			constexpr auto masterCodePhrase = 0x50; // Phrase
			constexpr auto guestCodePhrase = 0x58; // Phrase
			constexpr auto memoryKeycodeButton = 0x60; // GameObject
			constexpr auto lastCodeEntered = 0x0; // string
			constexpr auto textEntered = 0x68; // string
			constexpr auto lastKeyDelete = 0x70; // TimeSince
			constexpr auto isEnteringNumber = 0x74; // bool
			constexpr auto lastEnteredFrame = 0x78; // int32_t
		}
		namespace PhoneDialler
		{
			constexpr auto DialingRoot = 0x30; // GameObject
			constexpr auto CallInProcessRoot = 0x38; // GameObject
			constexpr auto IncomingCallRoot = 0x40; // GameObject
			constexpr auto ThisPhoneNumber = 0x48; // RustText
			constexpr auto PhoneNameInput = 0x50; // RustInput
			constexpr auto textDisplay = 0x58; // RustText
			constexpr auto CallTimeText = 0x60; // RustText
			constexpr auto DefaultDialViewButton = 0x68; // RustButton
			constexpr auto IncomingCallNumber = 0x70; // RustText[]
			constexpr auto NumberDialRoot = 0x78; // GameObject
			constexpr auto PromptVoicemailRoot = 0x80; // GameObject
			constexpr auto ContactsButton = 0x88; // RustButton
			constexpr auto FailText = 0x90; // RustText
			constexpr auto CursorController = 0x98; // NeedsCursor
			constexpr auto KeyboardController = 0xA0; // NeedsKeyboard
			constexpr auto WrongNumberPhrase = 0xA8; // Phrase
			constexpr auto NetworkBusy = 0xB0; // Phrase
			constexpr auto Engaged = 0xB8; // Phrase
			constexpr auto DirectoryEntryPrefab = 0xC0; // GameObjectRef
			constexpr auto DirectoryRoot = 0xC8; // Transform
			constexpr auto NoDirectoryRoot = 0xD0; // GameObject
			constexpr auto DirectoryPageUp = 0xD8; // RustButton
			constexpr auto DirectoryPageDown = 0xE0; // RustButton
			constexpr auto ContactsRoot = 0xE8; // Transform
			constexpr auto ContactsNameInput = 0xF0; // RustInput
			constexpr auto ContactsNumberInput = 0xF8; // RustInput
			constexpr auto NoContactsRoot = 0x100; // GameObject
			constexpr auto AddContactButton = 0x108; // RustButton
			constexpr auto DialToneSfx = 0x110; // SoundDefinition
			constexpr auto NumberButtons = 0x118; // Button[]
			constexpr auto AnsweringMachine = 0x120; // Phrase
			constexpr auto Voicemail = 0x128; // VoicemailDialog
			constexpr auto VoicemailRoot = 0x130; // GameObject
			constexpr auto attachedPhone = 0x138; // PhoneController
			constexpr auto lastState = 0x140; // CallState
			constexpr auto spawnedDirectoryEntries = 0x148; // List`1
			constexpr auto directoryPage = 0x150; // int32_t
			constexpr auto lastKeyDelete = 0x154; // TimeSince
			constexpr auto dialTone = 0x158; // Sound
			constexpr auto textEntered = 0x160; // string
			constexpr auto lastEnteredFrame = 0x168; // int32_t
			constexpr auto inputtingNumber = 0x16C; // bool
		}
		namespace PhoneDirectoryEntry
		{
			constexpr auto PhoneNumber = 0x18; // RustText
			constexpr auto PhoneName = 0x20; // RustText
			constexpr auto DeleteIcon = 0x28; // GameObject
			constexpr auto CensorIcon = 0x30; // GameObject
			constexpr auto diallerDialog = 0x38; // PhoneDialler
			constexpr auto rawNumberString = 0x40; // string
			constexpr auto cachedName = 0x48; // string
			constexpr auto cachedNumber = 0x50; // int32_t
			constexpr auto assignedType = 0x54; // NumberType
		}
		namespace VoicemailDialog
		{
			constexpr auto RecordingRoot = 0x18; // GameObject
			constexpr auto RecordingProgress = 0x20; // RustSlider
			constexpr auto BrowsingRoot = 0x28; // GameObject
			constexpr auto ParentDialler = 0x30; // PhoneDialler
			constexpr auto VoicemailEntry = 0x38; // GameObjectRef
			constexpr auto VoicemailEntriesRoot = 0x40; // Transform
			constexpr auto NoVoicemailRoot = 0x48; // GameObject
			constexpr auto NoCassetteRoot = 0x50; // GameObject
			constexpr auto endTime = 0x0; // float
			constexpr auto duration = 0x58; // float
			constexpr auto toRetire = 0x60; // List`1
		}
		namespace VoicemailEntry
		{
			constexpr auto PlayingRoot = 0x18; // GameObject
			constexpr auto DisplayName = 0x20; // RustText
			constexpr auto PlayIcon = 0x28; // RustIcon
			constexpr auto ProgressSlider = 0x30; // RustSlider
			constexpr auto playingState = 0x38; // bool
			constexpr auto cachedId = 0x3C; // uint32_t
			constexpr auto parentDialog = 0x40; // VoicemailDialog
			constexpr auto lastTime = 0x48; // float
		}
		namespace PickAFriend
		{
			constexpr auto input = 0x30; // InputField
			constexpr auto headerText = 0x38; // RustText
			constexpr auto AutoSelectInputField = 0x40; // bool
			constexpr auto AllowMultiple = 0x41; // bool
			constexpr auto onSelected = 0x48; // Action`2
			constexpr auto sleepingBagHeaderPhrase = 0x50; // Phrase
			constexpr auto turretHeaderPhrase = 0x58; // Phrase
			constexpr auto friendsList = 0x60; // SteamFriendsList
		}
		namespace FavouriteRadioStation
		{
			constexpr auto UrlText = 0x18; // RustText
			constexpr auto XmasRoot = 0x20; // GameObject
			constexpr auto clickedCallback = 0x28; // Action`1
			constexpr auto actualUrl = 0x30; // string
		}
		namespace RadioDialog
		{
			constexpr auto IpInput = 0x30; // RustInput
			constexpr auto FavouritePrefab = 0x38; // GameObjectRef
			constexpr auto FavouritesContainer = 0x40; // Transform
			constexpr auto HasCassetteRoot = 0x48; // GameObject
			constexpr auto Instance = 0x0; // RadioDialog
			constexpr auto currentBox = 0x50; // BoomBox
			constexpr auto spawnedFavourites = 0x58; // List`1
			constexpr auto selectedUrl = 0x60; // string
		}
		namespace SoundLightDialog
		{
			constexpr auto ColourOption = 0x30; // RustOption
			constexpr auto VolumeOption = 0x38; // RustOption
			constexpr auto SpeedOption = 0x40; // RustOption
			constexpr auto PatternOption = 0x48; // RustOption
			constexpr auto GradientOption = 0x50; // RustOption
			constexpr auto targetEntity = 0x58; // AudioVisualisationEntity
		}
		namespace RenameSleepingBag
		{
			constexpr auto input = 0x30; // InputField
			constexpr auto bag = 0x38; // SleepingBag
		}
		namespace SetupAppNotification
		{
			constexpr auto titleInput = 0x30; // RustInput
			constexpr auto bodyInput = 0x38; // RustInput
			constexpr auto _alarm = 0x40; // SmartAlarm
		}
		namespace SprayCanSkinSelect
		{
			constexpr auto skinPicker = 0x30; // IconSkinPicker
			constexpr auto onSkinSelected = 0x38; // Action`2
			constexpr auto cachedBlueprint = 0x40; // ItemBlueprint
			constexpr auto targetEntity = 0x48; // BaseEntity
		}
		namespace TechTreeDialog
		{
			constexpr auto data = 0x30; // TechTreeData
			constexpr auto graphScale = 0x38; // float
			constexpr auto entryPrefab = 0x40; // TechTreeEntry
			constexpr auto groupPrefab = 0x48; // TechTreeGroup
			constexpr auto linePrefab = 0x50; // TechTreeLine
			constexpr auto contents = 0x58; // RectTransform
			constexpr auto contentParent = 0x60; // RectTransform
			constexpr auto selectedNodeUI = 0x68; // TechTreeSelectedNodeUI
			constexpr auto nodeSize = 0x70; // float
			constexpr auto gridSize = 0x74; // float
			constexpr auto unlockEffect = 0x78; // GameObjectRef
			constexpr auto scrapCount = 0x80; // RustText
			constexpr auto startPos = 0x88; // Vector2
			constexpr auto processed = 0x90; // List`1
			constexpr auto widgets = 0x98; // Dictionary`2
			constexpr auto lines = 0xA0; // List`1
			constexpr auto zoom = 0xA8; // ScrollRectZoom
			constexpr auto selectedNodeID = 0xB0; // int32_t
			constexpr auto _attachedWorkbench = 0xB8; // Workbench
		}
		namespace TechTreeEntry
		{
			constexpr auto icon = 0x28; // RawImage
			constexpr auto ableToUnlockBackground = 0x30; // GameObject
			constexpr auto unlockedBackground = 0x38; // GameObject
			constexpr auto lockedBackground = 0x40; // GameObject
			constexpr auto lockOverlay = 0x48; // GameObject
			constexpr auto selectedBackground = 0x50; // GameObject
			constexpr auto radialUnlock = 0x58; // Image
			constexpr auto holdTime = 0x60; // float
			constexpr auto locked = 0x64; // bool
			constexpr auto pathToUnlock = 0x65; // bool
			constexpr auto isSelected = 0x66; // bool
			constexpr auto radialFillTime = 0x68; // float
		}
		namespace TechTreeLine
		{
			constexpr auto center = 0x28; // RawImage
			constexpr auto topLeft = 0x30; // RawImage
			constexpr auto topRight = 0x38; // RawImage
			constexpr auto bottomLeft = 0x40; // RawImage
			constexpr auto bottomRight = 0x48; // RawImage
			constexpr auto centerDotted = 0x50; // RawImage
			constexpr auto topLeftDotted = 0x58; // RawImage
			constexpr auto topRightDotted = 0x60; // RawImage
			constexpr auto bottomLeftDotted = 0x68; // RawImage
			constexpr auto bottomRightDotted = 0x70; // RawImage
			constexpr auto from = 0x78; // int32_t
			constexpr auto to = 0x7C; // int32_t
			constexpr auto isLocked = 0x80; // bool
			constexpr auto targetAbove = 0x81; // bool
			constexpr auto targetLeft = 0x82; // bool
		}
		namespace TechTreeSelectedNodeUI
		{
			constexpr auto selectedTitle = 0x18; // RustText
			constexpr auto selectedIcon = 0x20; // RawImage
			constexpr auto selectedDescription = 0x28; // RustText
			constexpr auto costText = 0x30; // RustText
			constexpr auto craftingCostText = 0x38; // RustText
			constexpr auto costObject = 0x40; // GameObject
			constexpr auto cantAffordObject = 0x48; // GameObject
			constexpr auto unlockedObject = 0x50; // GameObject
			constexpr auto unlockButton = 0x58; // GameObject
			constexpr auto noPathObject = 0x60; // GameObject
			constexpr auto dialog = 0x68; // TechTreeDialog
			constexpr auto ColorAfford = 0x70; // Color
			constexpr auto ColorCantAfford = 0x80; // Color
			constexpr auto totalRequiredRoot = 0x90; // GameObject
			constexpr auto totalRequiredText = 0x98; // RustText
			constexpr auto informationPanels = 0xA0; // ItemInformationPanel[]
			constexpr auto preReqNodes = 0xA8; // List`1
			constexpr auto preReqCost = 0xB0; // int32_t
		}
		namespace TechTreeWidget
		{
			constexpr auto id = 0x18; // int32_t
			constexpr auto originalPos = 0x1C; // Vector3
		}
		namespace ZoomImage
		{
			constexpr auto _minimumScale = 0x18; // float
			constexpr auto _initialScale = 0x1C; // float
			constexpr auto _maximumScale = 0x20; // float
			constexpr auto _scaleIncrement = 0x24; // float
			constexpr auto _scale = 0x28; // Vector3
			constexpr auto _thisTransform = 0x38; // RectTransform
		}
		namespace UIDialog
		{
			constexpr auto openSoundDef = 0x18; // SoundDefinition
			constexpr auto closeSoundDef = 0x20; // SoundDefinition
			constexpr auto isClosing = 0x28; // bool
		}
		namespace UIVideoPlayer
		{
			constexpr auto aspectRatioFitter = 0x30; // AspectRatioFitter
			constexpr auto closeButton = 0x38; // GameObject
			constexpr auto videoPlayer = 0x40; // VideoPlayer
			constexpr auto videoCanvas = 0x48; // RawImage
			constexpr auto videoProgressBar = 0x50; // RectTransform
			constexpr auto loadingIndicator = 0x58; // GameObject
			constexpr auto audioDuckingAmount = 0x60; // float
			constexpr auto timeoutAfter = 0x64; // float
			constexpr auto timeSinceOpen = 0x68; // RealTimeSince
		}
		namespace DynamicMouseCursor
		{
			constexpr auto RegularCursor = 0x18; // Texture2D
			constexpr auto RegularCursorPos = 0x20; // Vector2
			constexpr auto HoverCursor = 0x28; // Texture2D
			constexpr auto HoverCursorPos = 0x30; // Vector2
			constexpr auto current = 0x38; // Texture2D
		}
		namespace EntityHUDRender
		{
			constexpr auto cachedEntity = 0x18; // BaseEntity
		}
		namespace ErrorText
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
			constexpr auto maxLength = 0x20; // int32_t
			constexpr auto stopwatch = 0x28; // Stopwatch
		}
		namespace ExpandedLifeStats
		{
			constexpr auto DisplayRoot = 0x18; // GameObject
			constexpr auto GenericStatRow = 0x20; // GameObjectRef
			constexpr auto ResourcesStatRoot = 0x28; // Transform
			constexpr auto ResourceStats = 0x30; // List`1
			constexpr auto WeaponStatRow = 0x38; // GameObjectRef
			constexpr auto WeaponsRoot = 0x40; // Transform
			constexpr auto MiscRoot = 0x48; // Transform
			constexpr auto MiscStats = 0x50; // List`1
			constexpr auto Infographic = 0x58; // LifeInfographic
			constexpr auto MoveRoot = 0x60; // RectTransform
			constexpr auto OpenPosition = 0x68; // Vector2
			constexpr auto ClosedPosition = 0x70; // Vector2
			constexpr auto OpenButtonRoot = 0x78; // GameObject
			constexpr auto CloseButtonRoot = 0x80; // GameObject
			constexpr auto ScrollGradient = 0x88; // GameObject
			constexpr auto Scroller = 0x90; // ScrollRect
			constexpr auto state = 0x98; // bool
			constexpr auto rowsToRetire = 0xA0; // List`1
		}
		namespace FPSText
		{
			constexpr auto text = 0x18; // Text
			constexpr auto fpsTimer = 0x20; // Stopwatch
		}
		namespace GameStat
		{
			constexpr auto refreshTime = 0x18; // float
			constexpr auto title = 0x20; // Text
			constexpr auto globalStat = 0x28; // Text
			constexpr auto localStat = 0x30; // Text
			constexpr auto globalValue = 0x38; // Int64
			constexpr auto localValue = 0x40; // Int64
			constexpr auto secondsSinceRefresh = 0x48; // float
			constexpr auto secondsUntilUpdate = 0x4C; // float
			constexpr auto secondsUntilChange = 0x50; // float
			constexpr auto stats = 0x58; // Stat[]
			constexpr auto unshownStats = 0x60; // Stat[]
			constexpr auto stat = 0x68; // Stat
		}
		namespace Graph
		{
			constexpr auto Material = 0x18; // Material
			constexpr auto Resolution = 0x20; // int32_t
			constexpr auto ScreenFill = 0x24; // Vector2
			constexpr auto ScreenOrigin = 0x2C; // Vector2
			constexpr auto Pivot = 0x34; // Vector2
			constexpr auto Area = 0x3C; // Rect
			constexpr auto CurrentValue = 0x4C; // float
			constexpr auto index = 0x50; // int32_t
			constexpr auto values = 0x58; // float[]
			constexpr auto max = 0x60; // float
		}
		namespace HostileNote
		{
			constexpr auto warnGroup = 0x18; // CanvasGroup
			constexpr auto group = 0x20; // CanvasGroup
			constexpr auto timerGroup = 0x28; // CanvasGroup
			constexpr auto smallWarning = 0x30; // CanvasGroup
			constexpr auto timerText = 0x38; // Text
			constexpr auto smallWarningText = 0x40; // Text
			constexpr auto unhostileTime = 0x0; // float
			constexpr auto weaponDrawnDuration = 0x4; // float
			constexpr auto warnColor = 0x48; // Color
			constexpr auto hostileColor = 0x58; // Color
			constexpr auto requireDistanceToSafeZone = 0x68; // float
			constexpr auto nextMonumentUpdate = 0x6C; // TimeSince
			constexpr auto isNearSafeZone = 0x70; // bool
			constexpr auto lastHostileTimeStringUpdate = 0x78; // Double
			constexpr auto lastWeaponDrawnStringUpdate = 0x80; // Double
			constexpr auto hostileTimeLeftString = 0x88; // string
		}
		namespace HudElement
		{
			constexpr auto ValueText = 0x18; // Text[]
			constexpr auto FilledImage = 0x20; // Image[]
			constexpr auto lastValue = 0x28; // float
			constexpr auto lastMax = 0x2C; // float
		}
		namespace InfoBar
		{
			constexpr auto TextValue = 0x18; // Text
			constexpr auto ImageFill = 0x20; // Image
			constexpr auto GoodColor = 0x28; // Color
			constexpr auto BadColor = 0x38; // Color
		}
		namespace ContactsEntry
		{
			constexpr auto nameText = 0x18; // RustText
			constexpr auto reputationText = 0x20; // RustText
			constexpr auto smallMugshot = 0x28; // RawImage
			constexpr auto info = 0x30; // PlayerRelationshipInfo
		}
		namespace ContactsPanel
		{
			constexpr auto alliesBucket = 0x18; // RectTransform
			constexpr auto seenBucket = 0x20; // RectTransform
			constexpr auto enemiesBucket = 0x28; // RectTransform
			constexpr auto contentsBucket = 0x30; // RectTransform
			constexpr auto contactEntryPrefab = 0x38; // ContactsEntry
			constexpr auto mugshotTest = 0x40; // RawImage
			constexpr auto fullBodyTest = 0x48; // RawImage
			constexpr auto filterButtons = 0x50; // RustButton[]
			constexpr auto selectedRelationshipType = 0x58; // RelationshipType
			constexpr auto lastSeenToggle = 0x60; // RustButton
			constexpr auto sortingByLastSeenPhrase = 0x68; // Phrase
			constexpr auto sortingByFirstSeen = 0x70; // Phrase
			constexpr auto sortText = 0x78; // RustText
			constexpr auto sortMode = 0x80; // SortMode
			constexpr auto selectedPlayerID = 0x88; // UInt64
			constexpr auto nextUpdateTime = 0x90; // float
			constexpr auto dirty = 0x94; // bool
		}
		namespace GameTip
		{
			constexpr auto canvasGroup = 0x18; // CanvasGroup
			constexpr auto icon = 0x20; // RustIcon
			constexpr auto background = 0x28; // Image
			constexpr auto text = 0x30; // RustText
			constexpr auto themes = 0x38; // Theme[]
			constexpr auto Server_Event_Tips = 0x0; // bool
			constexpr auto Tips = 0x8; // BaseTip[]
			constexpr auto showgametips = 0x10; // bool
		}
		namespace ImagePainter
		{
			constexpr auto onDrawing = 0x18; // OnDrawingEvent
			constexpr auto redirectRightClick = 0x20; // MonoBehaviour
			constexpr auto spacingScale = 0x28; // float
			constexpr auto brush = 0x30; // Brush
			constexpr auto pointerState = 0x38; // PointerState[]
		}
		namespace IndependentScale
		{
			constexpr auto scaleParent = 0x18; // Transform
			constexpr auto initialScale = 0x20; // Vector3
			constexpr auto lastScale = 0x2C; // Vector3
		}
		namespace IndependentScaleImagePPU
		{
			constexpr auto scaleParent = 0x18; // Transform
			constexpr auto image = 0x20; // Image
			constexpr auto initialPPUM = 0x28; // float
			constexpr auto lastScale = 0x2C; // Vector3
		}
		namespace MapLayer
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace MapLayerRenderer
		{
			constexpr auto renderCamera = 0x18; // Camera
			constexpr auto cameraEvent = 0x20; // CameraEvent
			constexpr auto renderMaterial = 0x28; // Material
			constexpr auto _currentlyRenderedLayer = 0x30; // Nullable`1
			constexpr auto _currentlyRenderedDungeon = 0x38; // Nullable`1
			constexpr auto _underwaterLabFloorCount = 0x48; // Nullable`1
		}
		namespace MapInterface
		{
			constexpr auto IsOpen = 0x0; // bool
			constexpr auto cameraPositon = 0x18; // Image
			constexpr auto scrollRect = 0x20; // ScrollRectEx
			constexpr auto showGridToggle = 0x28; // Toggle
			constexpr auto FocusButton = 0x30; // Button
			constexpr auto CanvasGroup = 0x38; // CanvasGroup
			constexpr auto PlaceMarkerSound = 0x40; // SoundDefinition
			constexpr auto ClearMarkerSound = 0x48; // SoundDefinition
			constexpr auto View = 0x50; // MapView
			constexpr auto PointOfInterestColours = 0x58; // Color[]
			constexpr auto PointOfInterestSprites = 0x60; // PointOfInterestSpriteConfig[]
			constexpr auto PingBackground = 0x68; // Sprite
			constexpr auto DebugStayOpen = 0x70; // bool
			constexpr auto MarkerListPrefab = 0x78; // GameObjectRef
			constexpr auto MarkerHeader = 0x80; // GameObject
			constexpr auto LocalPlayerMarkerListParent = 0x88; // Transform
			constexpr auto TeamMarkerListParent = 0x90; // Transform
			constexpr auto TeamLeaderHeader = 0x98; // GameObject
			constexpr auto HideTeamLeaderMarkersToggle = 0xA0; // RustButton
			constexpr auto TeamMarkersCanvas = 0xA8; // CanvasGroup
			constexpr auto ShowSleepingBagsButton = 0xB0; // RustImageButton
			constexpr auto pointerData = 0xB8; // PointerEventData
			constexpr auto rayResults = 0xC0; // List`1
			constexpr auto spawnedLocalMarkers = 0xC8; // List`1
			constexpr auto LastOpened = 0x4; // float
			constexpr auto NeedsCursor = 0xD0; // NeedsCursor
			constexpr auto NeedsMouseButtons = 0xD8; // NeedsMouseButtons
			constexpr auto NeedsMouseWheel = 0xE0; // NeedsMouseWheel
			constexpr auto rmbStartPos = 0xE8; // Vector3
			constexpr auto lmbStartPos = 0xF4; // Vector3
			constexpr auto rmbStartTime = 0x100; // float
			constexpr auto lmbStartTime = 0x104; // float
			constexpr auto selectedMarker = 0x108; // PointOfInterestMapMarker
			constexpr auto lastActiveMap = 0x8; // MapEntity
		}
		namespace MapMarkerIconSelector
		{
			constexpr auto OuterImage = 0x18; // Image
			constexpr auto InnerImage = 0x20; // Image
			constexpr auto Selected = 0x28; // GameObject
			constexpr auto cachedIndex = 0x30; // int32_t
			constexpr auto cachedMarker = 0x38; // PointOfInterestMapMarker
		}
		namespace MapView
		{
			constexpr auto mapImage = 0x18; // RawImage
			constexpr auto cameraPositon = 0x20; // Image
			constexpr auto scrollRect = 0x28; // ScrollRectEx
			constexpr auto monumentMarkerContainer = 0x30; // GameObject
			constexpr auto clusterMarkerContainer = 0x38; // Transform
			constexpr auto monumentMarkerPrefab = 0x40; // GameObjectRef
			constexpr auto missionMarkerContainer = 0x48; // GameObject
			constexpr auto missionMarkerPrefab = 0x50; // GameObjectRef
			constexpr auto activeInteractionParent = 0x58; // Transform
			constexpr auto localPlayerInterestPointRoot = 0x60; // Transform
			constexpr auto teamPositions = 0x68; // TeamMemberMapMarker[]
			constexpr auto PointOfInterestMarkers = 0x70; // List`1
			constexpr auto TeamPointOfInterestMarkers = 0x78; // List`1
			constexpr auto LocalPings = 0x80; // List`1
			constexpr auto TeamPings = 0x88; // List`1
			constexpr auto PlayerDeathMarker = 0x90; // GameObject
			constexpr auto SleepingBagMarkers = 0x98; // List`1
			constexpr auto SleepingBagClusters = 0xA0; // List`1
			constexpr auto UndergroundLayer = 0xA8; // RawImage
			constexpr auto ShowGrid = 0xB0; // bool
			constexpr auto ShowPointOfInterestMarkers = 0xB1; // bool
			constexpr auto ShowDeathMarker = 0xB2; // bool
			constexpr auto ShowSleepingBags = 0xB3; // bool
			constexpr auto AllowSleepingBagDeletion = 0xB4; // bool
			constexpr auto ShowLocalPlayer = 0xB5; // bool
			constexpr auto ShowTeamMembers = 0xB6; // bool
			constexpr auto ShowTrainLayer = 0xB7; // bool
			constexpr auto ShowMissions = 0xB8; // bool
			constexpr auto ShowUndergroundLayers = 0xB9; // bool
			constexpr auto MLRSMarkerMode = 0xBA; // bool
			constexpr auto LockButton = 0xC0; // RustImageButton
			constexpr auto OverworldButton = 0xC8; // RustImageButton
			constexpr auto TrainButton = 0xD0; // RustImageButton
			constexpr auto UnderwaterButtons = 0xD8; // RustImageButton[]
			constexpr auto DungeonButton = 0xE0; // RustImageButton
			constexpr auto ActiveView = 0x0; // MapView
			constexpr auto followingPlayerk__BackingField = 0xE8; // bool
			constexpr auto clusterDict = 0xF0; // Dictionary`2
			constexpr auto markersToRetire = 0xF8; // List`1
			constexpr auto markerLookup = 0x100; // Dictionary`2
			constexpr auto monumentMarkers = 0x108; // List`1
			constexpr auto missionMarkers = 0x110; // List`1
			constexpr auto isShowingUndergroundLayers = 0x118; // bool
			constexpr auto undergroundLayerOverride = 0x11C; // Nullable`1
			constexpr auto visibleLayer = 0x124; // MapLayer
			constexpr auto lastActiveMap = 0x8; // MapEntity
		}
		namespace MissionMapMarker
		{
			constexpr auto Icon = 0x18; // Image
			constexpr auto TooltipComponent = 0x20; // Tooltip
		}
		namespace MonumentMarker
		{
			constexpr auto text = 0x18; // Text
			constexpr auto imageBackground = 0x20; // Image
			constexpr auto image = 0x28; // Image
			constexpr auto dayColor = 0x30; // Color
			constexpr auto nightColor = 0x40; // Color
		}
		namespace PointOfInterestMapMarker
		{
			constexpr auto MapIcon = 0x18; // Image
			constexpr auto MapIconOuter = 0x20; // Image
			constexpr auto LeaderRoot = 0x28; // GameObject
			constexpr auto EditPopup = 0x30; // GameObject
			constexpr auto Tooltip = 0x38; // Tooltip
			constexpr auto MarkerLabelRoot = 0x40; // GameObject
			constexpr auto MarkerLabel = 0x48; // RustText
			constexpr auto NoMarkerLabel = 0x50; // RustText
			constexpr auto MarkerLabelModify = 0x58; // RustInput
			constexpr auto IconSelectors = 0x60; // MapMarkerIconSelector[]
			constexpr auto ColourSelectors = 0x68; // MapMarkerIconSelector[]
			constexpr auto IsListWidget = 0x70; // bool
			constexpr auto DeleteButton = 0x78; // GameObject
			constexpr auto IsLeaderk__BackingField = 0x80; // bool
			constexpr auto MarkerIndexk__BackingField = 0x84; // int32_t
			constexpr auto editIconIndex = 0x88; // int32_t
			constexpr auto editColourIndex = 0x8C; // int32_t
			constexpr auto cachedView = 0x90; // MapView
			constexpr auto CachedWorldPosk__BackingField = 0x98; // Vector3
			constexpr auto suppressMapKeyOnInputField = 0xA4; // bool
			constexpr auto suppressKey = 0xA8; // string
		}
		namespace SleepingBagClusterMapMarker
		{
			constexpr auto CountText = 0x18; // TextMeshProUGUI
			constexpr auto SleepingBagButtons = 0x20; // List`1
			constexpr auto OpenRoot = 0x28; // GameObject
			constexpr auto SummaryTooltip = 0x30; // Tooltip
			constexpr auto RimImage = 0x38; // Image
			constexpr auto open = 0x40; // bool
			constexpr auto currentlyOpen = 0x0; // SleepingBagClusterMapMarker
		}
		namespace SleepingBagMapMarker
		{
			constexpr auto MapIcon = 0x18; // Image
			constexpr auto SleepingBagIcon = 0x20; // Image
			constexpr auto SleepingBagSprite = 0x28; // Sprite
			constexpr auto BedSprite = 0x30; // Sprite
			constexpr auto BeachTowelSprite = 0x38; // Sprite
			constexpr auto CamperSprite = 0x40; // Sprite
			constexpr auto MarkerTooltip = 0x48; // Tooltip
			constexpr auto LockRoot = 0x50; // GameObject
			constexpr auto LockTime = 0x58; // TextMeshProUGUI
			constexpr auto OccupiedRoot = 0x60; // GameObject
			constexpr auto CircleRim = 0x68; // Image
			constexpr auto CircleFill = 0x70; // Image
			constexpr auto DeleteButton = 0x78; // RustButton
			constexpr auto ConfirmSlider = 0x80; // Image
			constexpr auto cachedSpawnInfo = 0x88; // SpawnOptions
			constexpr auto releaseTime = 0x90; // float
			constexpr auto cachedView = 0x98; // MapView
		}
		namespace TeamMemberMapMarker
		{
			constexpr auto rectTransform = 0x18; // RectTransform
			constexpr auto nameTagText = 0x20; // Text
			constexpr auto toolTip = 0x28; // Tooltip
		}
		namespace UIMapGenericRadius
		{
			constexpr auto radialImage = 0x18; // Image
			constexpr auto outlineImage = 0x20; // Image
			constexpr auto radius = 0x28; // float
			constexpr auto fade = 0x30; // CanvasGroup
			constexpr auto rect = 0x38; // RectTransform
		}
		namespace UIMapVendingMachineMarker
		{
			constexpr auto inStock = 0x18; // Color
			constexpr auto outOfStock = 0x28; // Color
			constexpr auto colorBackground = 0x38; // Image
			constexpr auto displayName = 0x40; // string
			constexpr auto toolTip = 0x48; // Tooltip
			constexpr auto button = 0x50; // RustButton
			constexpr auto isInStock = 0x58; // bool
			constexpr auto vendingMachine = 0x60; // EntityRef`1
			constexpr auto vendingMachineData = 0x70; // VendingMachine
			constexpr auto onClicked = 0x0; // Action`1
		}
		namespace UIMapVendingMachineMarkerCluster
		{
			constexpr auto markers = 0x18; // List`1
			constexpr auto OpenRoot = 0x20; // GameObject
			constexpr auto CountText = 0x28; // TextMeshProUGUI
			constexpr auto currentlyOpen = 0x0; // UIMapVendingMachineMarkerCluster
			constexpr auto open = 0x30; // bool
		}
		namespace UIPaintBox
		{
			constexpr auto onBrushChanged = 0x18; // OnBrushChanged
			constexpr auto brush = 0x20; // Brush
		}
		namespace MenuTip
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
			constexpr auto screen = 0x20; // LoadingScreen
			constexpr auto MenuTips = 0x0; // Phrase[]
			constexpr auto currentTipIndex = 0x28; // int32_t
			constexpr auto nextTipTime = 0x2C; // float
		}
		namespace SelectedContact
		{
			constexpr auto nameText = 0x18; // RustText
			constexpr auto seenText = 0x20; // RustText
			constexpr auto mugshotImage = 0x28; // RawImage
			constexpr auto unknownMugshot = 0x30; // Texture2D
			constexpr auto noteInput = 0x38; // InputField
			constexpr auto relationshipTypeTags = 0x40; // GameObject[]
			constexpr auto lastSeenPrefix = 0x48; // Phrase
			constexpr auto nowPhrase = 0x50; // Phrase
			constexpr auto agoSuffix = 0x58; // Phrase
			constexpr auto FriendlyButton = 0x60; // RustButton
			constexpr auto SeenButton = 0x68; // RustButton
			constexpr auto EnemyButton = 0x70; // RustButton
			constexpr auto chatMute = 0x78; // RustButton
			constexpr auto selectedPlayerId = 0x80; // UInt64
			constexpr auto selectedPlayerRelationship = 0x88; // RelationshipType
		}
		namespace UIBuffs
		{
			constexpr auto Enabled = 0x18; // bool
			constexpr auto PrefabBuffIcon = 0x20; // Transform
		}
		namespace UIBuffsIcon
		{
			constexpr auto Text = 0x18; // TextMeshProUGUI
			constexpr auto ToolTip = 0x20; // Tooltip
			constexpr auto Group = 0x28; // CanvasGroup
			constexpr auto Buffs = 0x30; // string
		}
		namespace UICompass
		{
			constexpr auto compassStrip = 0x18; // RawImage
			constexpr auto compassGroup = 0x20; // CanvasGroup
			constexpr auto CompassMarkers = 0x28; // List`1
			constexpr auto TeamCompassMarkers = 0x30; // List`1
			constexpr auto MissionMarkers = 0x38; // List`1
			constexpr auto LocalPings = 0x40; // List`1
			constexpr auto TeamPings = 0x48; // List`1
			constexpr auto LeftPingPulse = 0x50; // Image
			constexpr auto RightPingPulse = 0x58; // Image
			constexpr auto compassToggle = 0x60; // bool
			constexpr auto compassStripMaterial = 0x68; // Material
			constexpr auto compassStripMaterialInst = 0x70; // Material
			constexpr auto leftPingColour = 0x78; // Color
			constexpr auto rightPingColour = 0x88; // Color
		}
		namespace UIFadeOut
		{
			constexpr auto secondsToFadeOut = 0x18; // float
			constexpr auto destroyOnFaded = 0x1C; // bool
			constexpr auto targetGroup = 0x20; // CanvasGroup
			constexpr auto fadeDelay = 0x28; // float
			constexpr auto timeStarted = 0x2C; // float
		}
		namespace UIFishing
		{
			constexpr auto TensionLine = 0x18; // Slider
			constexpr auto FillImage = 0x20; // Image
			constexpr auto FillGradient = 0x28; // Gradient
			constexpr auto lerpedValue = 0x30; // float
		}
		namespace UIHUD
		{
			constexpr auto chatPanel = 0x18; // UIChat
			constexpr auto Hunger = 0x20; // HudElement
			constexpr auto Thirst = 0x28; // HudElement
			constexpr auto Health = 0x30; // HudElement
			constexpr auto PendingHealth = 0x38; // HudElement
			constexpr auto VehicleHealth = 0x40; // HudElement
			constexpr auto AnimalStamina = 0x48; // HudElement
			constexpr auto AnimalStaminaMax = 0x50; // HudElement
			constexpr auto vitalsRect = 0x58; // RectTransform
			constexpr auto healthCanvas = 0x60; // Canvas
			constexpr auto CompassWidget = 0x68; // UICompass
			constexpr auto KeyboardCaptureMode = 0x70; // GameObject
			constexpr auto canvasGroupk__BackingField = 0x78; // CanvasGroup
			constexpr auto visible = 0x80; // bool
		}
		namespace UIRecordingInfo
		{
			constexpr auto CountdownText = 0x18; // RustText
			constexpr auto TapeProgressSlider = 0x20; // Slider
			constexpr auto CountdownRoot = 0x28; // GameObject
			constexpr auto RecordingRoot = 0x30; // GameObject
			constexpr auto Spinner = 0x38; // Transform
			constexpr auto SpinSpeed = 0x40; // float
			constexpr auto CassetteImage = 0x48; // Image
			constexpr auto cachedRecorder = 0x50; // RecorderTool
		}
		namespace UIUnderlay
		{
			constexpr auto damageDirectional = 0x18; // GameObject
			constexpr auto waterDirectional = 0x20; // GameObject
		}
		namespace IngameMenuBackground
		{
			constexpr auto Enabled = 0x0; // bool
			constexpr auto canvasGroup = 0x18; // CanvasGroup
		}
		namespace AmmoInformationPanel
		{
			constexpr auto damageDisplay = 0x18; // ItemStatValue
			constexpr auto velocityDisplay = 0x20; // ItemStatValue
			constexpr auto spreadDisplay = 0x28; // ItemStatValue
			constexpr auto pelletsDisplay = 0x30; // ItemTextValue
			constexpr auto falloffRangeDisplay = 0x38; // ItemStatValue
			constexpr auto thicknessDisplay = 0x40; // ItemTextValue
		}
		namespace ArmorInformationPanel
		{
			constexpr auto projectileDisplay = 0x18; // ItemTextValue
			constexpr auto meleeDisplay = 0x20; // ItemTextValue
			constexpr auto coldDisplay = 0x28; // ItemTextValue
			constexpr auto explosionDisplay = 0x30; // ItemTextValue
			constexpr auto radiationDisplay = 0x38; // ItemTextValue
			constexpr auto biteDisplay = 0x40; // ItemTextValue
			constexpr auto spacer = 0x48; // ItemTextValue
			constexpr auto areaProtectionText = 0x50; // Text
			constexpr auto LegText = 0x58; // Phrase
			constexpr auto ChestText = 0x60; // Phrase
			constexpr auto HeadText = 0x68; // Phrase
			constexpr auto ChestLegsText = 0x70; // Phrase
			constexpr auto WholeBodyText = 0x78; // Phrase
			constexpr auto eggVision = 0x80; // ItemTextValue
		}
		namespace BeltBarIcon
		{
			constexpr auto itemIcon = 0x18; // ItemIcon
			constexpr auto wasSelected = 0x20; // bool
		}
		namespace BlueprintButton
		{
			constexpr auto image = 0x18; // Image
			constexpr auto imageFavourite = 0x20; // Image
			constexpr auto button = 0x28; // Button
			constexpr auto group = 0x30; // CanvasGroup
			constexpr auto newNotification = 0x38; // GameObject
			constexpr auto lockedOverlay = 0x40; // GameObject
			constexpr auto Tip = 0x48; // Tooltip
			constexpr auto FavouriteIcon = 0x50; // Image
			constexpr auto needsRefresh = 0x58; // bool
			constexpr auto blueprint = 0x60; // ItemBlueprint
			constexpr auto parentBlueprints = 0x68; // UIBlueprints
			constexpr auto favourited = 0x70; // bool
			constexpr auto hovered = 0x71; // bool
		}
		namespace BlueprintCategoryButton
		{
			constexpr auto amountLabel = 0x18; // TextMeshProUGUI
			constexpr auto Category = 0x20; // ItemCategory
			constexpr auto AlwaysShow = 0x24; // bool
			constexpr auto ShowItemCount = 0x25; // bool
			constexpr auto BackgroundHighlight = 0x28; // GameObject
			constexpr auto clickSound = 0x30; // SoundDefinition
			constexpr auto hoverSound = 0x38; // SoundDefinition
			constexpr auto needsRefresh = 0x40; // bool
			constexpr auto CurrentAmount = 0x44; // int32_t
			constexpr auto Selected = 0x48; // bool
		}
		namespace BlueprintCraftGridRow
		{
			constexpr auto amount = 0x18; // GameObject
			constexpr auto itemName = 0x20; // GameObject
			constexpr auto total = 0x28; // GameObject
			constexpr auto have = 0x30; // GameObject
			constexpr auto colorOK = 0x38; // Color
			constexpr auto colorBad = 0x48; // Color
		}
		namespace BlueprintHeader
		{
			constexpr auto categoryName = 0x18; // Text
			constexpr auto unlockCount = 0x20; // Text
		}
		namespace CraftingNotice
		{
			constexpr auto canvasGroup = 0x18; // CanvasGroup
			constexpr auto itemName = 0x20; // TextMeshProUGUI
			constexpr auto craftSeconds = 0x28; // TextMeshProUGUI
		}
		namespace CraftingQueue
		{
			constexpr auto queueContainer = 0x18; // GameObject
			constexpr auto queueItemPrefab = 0x20; // GameObject
			constexpr auto scrollRect = 0x28; // ScrollRect
			constexpr auto CraftingItems = 0x0; // Dictionary`2
			constexpr auto isCrafting = 0x8; // bool
		}
		namespace CraftingQueueIcon
		{
			constexpr auto canvasGroup = 0x18; // CanvasGroup
			constexpr auto icon = 0x20; // Image
			constexpr auto iconCancel = 0x28; // Image
			constexpr auto timeLeft = 0x30; // GameObject
			constexpr auto craftingCount = 0x38; // GameObject
			constexpr auto taskid = 0x40; // int32_t
			constexpr auto endTime = 0x44; // float
			constexpr auto item = 0x48; // ItemDefinition
			constexpr auto amount = 0x50; // int32_t
			constexpr auto scrollRect = 0x58; // ScrollRect
			constexpr auto pointerOverButton = 0x60; // bool
		}
		namespace SelectedBlueprint
		{
			constexpr auto blueprint = 0x18; // ItemBlueprint
			constexpr auto craftAmountText = 0x20; // InputField
			constexpr auto ingredientGrid = 0x28; // GameObject
			constexpr auto skinPicker = 0x30; // IconSkinPicker
			constexpr auto iconImage = 0x38; // Image
			constexpr auto titleText = 0x40; // RustText
			constexpr auto descriptionText = 0x48; // RustText
			constexpr auto CraftArea = 0x50; // CanvasGroup
			constexpr auto CraftButton = 0x58; // Button
			constexpr auto CraftingTime = 0x60; // RustText
			constexpr auto CraftingAmount = 0x68; // RustText
			constexpr auto FavouriteOnSprite = 0x70; // Sprite
			constexpr auto FavouriteOffSprite = 0x78; // Sprite
			constexpr auto FavouriteButtonStatusMarker = 0x80; // Image
			constexpr auto workbenchReqs = 0x88; // GameObject[]
			constexpr auto informationPanels = 0x90; // ItemInformationPanel[]
			constexpr auto needsRefresh = 0x98; // bool
			constexpr auto craftAmount = 0x9C; // int32_t
			constexpr auto ingredientRows = 0xA0; // BlueprintCraftGridRow[]
		}
		namespace UIBlueprints
		{
			constexpr auto buttonPrefab = 0x18; // GameObjectRef
			constexpr auto scrollRect = 0x20; // ScrollRect
			constexpr auto ScrollRectCanvasGroup = 0x28; // CanvasGroup
			constexpr auto searchField = 0x30; // InputField
			constexpr auto searchFieldPlaceholder = 0x38; // GameObject
			constexpr auto listAvailable = 0x40; // GameObject
			constexpr auto listLocked = 0x48; // GameObject
			constexpr auto Categories = 0x50; // GameObject
			constexpr auto CategoryVerticalLayoutGroup = 0x58; // VerticalLayoutGroup
			constexpr auto FavouriteCategoryButton = 0x60; // BlueprintCategoryButton
			constexpr auto needsResort = 0x68; // bool
			constexpr auto category = 0x6C; // ItemCategory
			constexpr auto buttons = 0x70; // List`1
			constexpr auto categoryButtons = 0x78; // BlueprintCategoryButton[]
			constexpr auto miscInclusive = 0x0; // ItemCategory[]
		}
		namespace ChangelogButton
		{
			constexpr auto Button = 0x18; // RustButton
			constexpr auto CanvasGroup = 0x20; // CanvasGroup
		}
		namespace ChangelogPanel
		{
			constexpr auto AddedHeader = 0x18; // GameObject
			constexpr auto RemovedHeader = 0x20; // GameObject
			constexpr auto ChangedHeader = 0x28; // GameObject
			constexpr auto AddedContent = 0x30; // RustText
			constexpr auto RemovedContent = 0x38; // RustText
			constexpr auto ChangedContent = 0x40; // RustText
		}
		namespace ConsumableInformationPanel
		{
			constexpr auto values = 0x18; // ItemTextValue[]
			constexpr auto Genes = 0x20; // UIGenesDisplay
			constexpr auto TextUnknownGenetics = 0x28; // Text
			constexpr auto LabelGenetics = 0x30; // Text
			constexpr auto GeneticsGameObject = 0x38; // GameObject
			constexpr auto durationValue = 0x40; // ItemTextValue
			constexpr auto baitValue = 0x48; // ItemTextValue
			constexpr auto genes = 0x50; // GrowableGenes
		}
		namespace DragReceiver
		{
			constexpr auto onEndDrag = 0x18; // TriggerEvent
		}
		namespace EngineItemInformationPanel
		{
			constexpr auto tier = 0x18; // Text
			constexpr auto low = 0x20; // Phrase
			constexpr auto medium = 0x28; // Phrase
			constexpr auto high = 0x30; // Phrase
			constexpr auto accelerationRoot = 0x38; // GameObject
			constexpr auto topSpeedRoot = 0x40; // GameObject
			constexpr auto fuelEconomyRoot = 0x48; // GameObject
		}
		namespace ExplosiveInformationPanel
		{
			constexpr auto explosiveDmgDisplay = 0x18; // ItemTextValue
			constexpr auto lethalDmgDisplay = 0x20; // ItemTextValue
			constexpr auto throwDistanceDisplay = 0x28; // ItemTextValue
			constexpr auto projectileDistanceDisplay = 0x30; // ItemTextValue
			constexpr auto fuseLengthDisplay = 0x38; // ItemTextValue
			constexpr auto blastRadiusDisplay = 0x40; // ItemTextValue
			constexpr auto unreliableText = 0x48; // Text
		}
		namespace FrankensteinPartInformationPanel
		{
			constexpr auto healthDisplay = 0x18; // ItemTextValue
			constexpr auto speedDisplay = 0x20; // ItemTextValue
			constexpr auto attackRateDisplay = 0x28; // ItemTextValue
			constexpr auto attackDamageDisplay = 0x30; // ItemTextValue
		}
		namespace GunModInformationPanel
		{
			constexpr auto fireRateDisplay = 0x18; // ItemTextValue
			constexpr auto velocityDisplay = 0x20; // ItemTextValue
			constexpr auto damageDisplay = 0x28; // ItemTextValue
			constexpr auto accuracyDisplay = 0x30; // ItemTextValue
			constexpr auto recoilDisplay = 0x38; // ItemTextValue
			constexpr auto zoomDisplay = 0x40; // ItemTextValue
			constexpr auto ammoDisplay = 0x48; // ItemTextValue
		}
		namespace HorseEquipmentInformationPanel
		{
			constexpr auto horseProtectionDisplay = 0x18; // ItemTextValue
			constexpr auto riderProtectionDisplay = 0x20; // ItemTextValue
			constexpr auto maxSpeedDisplay = 0x28; // ItemTextValue
			constexpr auto storageAmountDisplay = 0x30; // ItemTextValue
		}
		namespace IOEntityInformationPanel
		{
			constexpr auto requiredPowerDisplay = 0x18; // ItemTextValue
			constexpr auto requiredFluidDisplay = 0x20; // ItemTextValue
			constexpr auto generatedPowerDisplay = 0x28; // ItemTextValue
			constexpr auto capacityDisplay = 0x30; // ItemTextValue
			constexpr auto chargeDisplay = 0x38; // ItemTextValue
		}
		namespace ItemDropCommand
		{
			constexpr auto command = 0x18; // string
		}
		namespace ItemIcon
		{
			constexpr auto backgroundColor = 0x18; // Color
			constexpr auto selectedBackgroundColor = 0x28; // Color
			constexpr auto unoccupiedAlpha = 0x38; // float
			constexpr auto unoccupiedColor = 0x3C; // Color
			constexpr auto containerSource = 0x50; // ItemContainerSource
			constexpr auto slotOffset = 0x58; // int32_t
			constexpr auto slot = 0x5C; // int32_t
			constexpr auto setSlotFromSiblingIndex = 0x60; // bool
			constexpr auto slots = 0x68; // GameObject
			constexpr auto iconContents = 0x70; // CanvasGroup
			constexpr auto canvasGroup = 0x78; // CanvasGroup
			constexpr auto iconImage = 0x80; // Image
			constexpr auto underlayImage = 0x88; // Image
			constexpr auto amountText = 0x90; // Text
			constexpr auto hoverText = 0x98; // Text
			constexpr auto hoverOutline = 0xA0; // Image
			constexpr auto cornerIcon = 0xA8; // Image
			constexpr auto lockedImage = 0xB0; // Image
			constexpr auto progressImage = 0xB8; // Image
			constexpr auto backgroundImage = 0xC0; // Image
			constexpr auto backgroundUnderlayImage = 0xC8; // Image
			constexpr auto progressPanel = 0xD0; // Image
			constexpr auto emptySlotBackgroundSprite = 0xD8; // Sprite
			constexpr auto conditionObject = 0xE0; // CanvasGroup
			constexpr auto conditionFill = 0xE8; // Image
			constexpr auto maxConditionFill = 0xF0; // Image
			constexpr auto lightEnabled = 0xF8; // GameObject
			constexpr auto allowSelection = 0x100; // bool
			constexpr auto allowDropping = 0x101; // bool
			constexpr auto allowMove = 0x102; // bool
			constexpr auto showCountDropShadow = 0x103; // bool
			constexpr auto item = 0x108; // Item
			constexpr auto invalidSlot = 0x110; // bool
			constexpr auto hoverSound = 0x118; // SoundDefinition
			constexpr auto slotImages = 0x120; // Image[]
			constexpr auto containerLootStartTimes = 0x0; // Dictionary`2
			constexpr auto queuedForLooting = 0x128; // bool
			constexpr auto queuedQuickLootContainerID = 0x130; // ItemContainerId
			constexpr auto queuedLootAtTime = 0x138; // float
			constexpr auto visible = 0x13C; // bool
			constexpr auto hovering = 0x13D; // bool
			constexpr auto canvasGroupParent = 0x140; // CanvasGroup
			constexpr auto currentCouroutine = 0x148; // Coroutine
			constexpr auto isSelected = 0x150; // bool
			constexpr auto timedAction = 0x158; // Action
			constexpr auto timedActionTime = 0x160; // Nullable`1
		}
		namespace ItemOptionButton
		{
			constexpr auto name = 0x18; // TextMeshProUGUI
			constexpr auto icon = 0x20; // Image
			constexpr auto item = 0x28; // Item
			constexpr auto option = 0x30; // Option
		}
		namespace ItemPanel
		{
			constexpr auto item = 0x18; // ItemIcon
		}
		namespace ItemPickupNotice
		{
			constexpr auto Text = 0x18; // TextMeshProUGUI
			constexpr auto Amount = 0x20; // TextMeshProUGUI
			constexpr auto enabledTime = 0x28; // TimeSince
			constexpr auto targetRect = 0x30; // RectTransform
			constexpr auto targetCanvas = 0x38; // CanvasGroup
			constexpr auto def = 0x40; // ItemDefinition
			constexpr auto isReuse = 0x48; // bool
			constexpr auto cachedAmount = 0x4C; // int32_t
			constexpr auto scheduledTotal = 0x50; // int32_t
		}
		namespace ItemPreviewIcon
		{
			constexpr auto containerSource = 0x18; // ItemContainerSource
			constexpr auto slot = 0x20; // int32_t
			constexpr auto setSlotFromSiblingIndex = 0x24; // bool
			constexpr auto iconContents = 0x28; // CanvasGroup
			constexpr auto iconImage = 0x30; // Image
			constexpr auto amountText = 0x38; // Text
			constexpr auto item = 0x40; // Item
			constexpr auto invalidSlot = 0x48; // bool
		}
		namespace ItemSplitter
		{
			constexpr auto slider = 0x18; // Slider
			constexpr auto textValue = 0x20; // TextMeshProUGUI
			constexpr auto splitAmountText = 0x28; // TextMeshProUGUI
			constexpr auto amountInputField = 0x30; // TMP_InputField
			constexpr auto isInputFieldOpen = 0x0; // bool
			constexpr auto oldAmount = 0x38; // float
		}
		namespace ItemSplitterDragOut
		{
			constexpr auto rootSplitter = 0x18; // ItemSplitter
		}
		namespace ItemSplitterSlider
		{
			constexpr auto Splitter = 0x18; // ItemSplitter
		}
		namespace ItemStatValue
		{
			constexpr auto text = 0x18; // Text
			constexpr auto slider = 0x20; // Slider
			constexpr auto selectedItem = 0x28; // bool
			constexpr auto smallerIsBetter = 0x29; // bool
			constexpr auto asPercentage = 0x2A; // bool
		}
		namespace ItemTextValue
		{
			constexpr auto text = 0x18; // Text
			constexpr auto bad = 0x20; // Color
			constexpr auto good = 0x30; // Color
			constexpr auto negativestat = 0x40; // bool
			constexpr auto asPercentage = 0x41; // bool
			constexpr auto useColors = 0x42; // bool
			constexpr auto signed_ = 0x43; // bool
			constexpr auto suffix = 0x48; // string
			constexpr auto multiplier = 0x50; // float
		}
		namespace KeyInformationPanel
		{
			constexpr auto id = 0x18; // Text
		}
		namespace LootPanel
		{
			constexpr auto Title = 0x18; // Text
			constexpr auto TitleText = 0x20; // RustText
			constexpr auto hideInvalidIcons = 0x28; // bool
			constexpr auto canvasGroup = 0x30; // CanvasGroup
			constexpr auto allIcons = 0x38; // ItemIcon[]
		}
		namespace LootPanelCardTableTerminal
		{
			constexpr auto buyInInfoText = 0x40; // Text
			constexpr auto phraseMin = 0x48; // Phrase
			constexpr auto phraseMax = 0x50; // Phrase
		}
		namespace LootPanelContainer
		{
			constexpr auto containerName = 0x0; // string
			constexpr auto NoLootPanel = 0x18; // GameObject
			constexpr auto wasShowingPanel = 0x20; // bool
			constexpr auto currentLootPanel = 0x28; // GameObject
			constexpr auto _lastLootPanel = 0x30; // string
		}
		namespace LootPanelEngine
		{
			constexpr auto engineImage = 0x40; // Image
			constexpr auto icons = 0x48; // ItemIcon[]
			constexpr auto warning = 0x50; // GameObject
			constexpr auto hp = 0x58; // RustText
			constexpr auto power = 0x60; // RustText
			constexpr auto acceleration = 0x68; // RustText
			constexpr auto topSpeed = 0x70; // RustText
			constexpr auto fuelEconomy = 0x78; // RustText
		}
		namespace LootPanelFrankensteinTable
		{
			constexpr auto StartCreatingButton = 0x40; // Button
		}
		namespace LootPanelHorse
		{
			constexpr auto breedTitle = 0x40; // Text
			constexpr auto maxSpeedText = 0x48; // Text
			constexpr auto staminaText = 0x50; // Text
			constexpr auto healthText = 0x58; // Text
			constexpr auto storageSlots = 0x60; // GameObject[]
			constexpr auto storageWindow = 0x68; // GameObject
		}
		namespace LootPanelIndustrialCrafter
		{
			constexpr auto CraftingRoot = 0x40; // GameObject
			constexpr auto ProgressSlider = 0x48; // RustSlider
			constexpr auto Spinner = 0x50; // Transform
			constexpr auto SpinSpeed = 0x58; // float
			constexpr auto WorkbenchLevelRoot = 0x60; // GameObject
		}
		namespace LootPanelLocker
		{
			constexpr auto controls = 0x40; // GameObject[]
		}
		namespace LootPanelMixingTable
		{
			constexpr auto controlsOn = 0x40; // GameObject
			constexpr auto controlsOff = 0x48; // GameObject
			constexpr auto StartMixingButton = 0x50; // Button
			constexpr auto ProgressBar = 0x58; // InfoBar
			constexpr auto recipeItemPrefab = 0x60; // GameObject
			constexpr auto recipeContentRect = 0x68; // RectTransform
			constexpr auto inventoryItems = 0x70; // List`1
		}
		namespace LootPanelOven
		{
			constexpr auto ovenPanel = 0x40; // OvenLootPanel
		}
		namespace LootPanelPlayerCorpse
		{
			constexpr auto BeltRoots = 0x40; // GameObject[]
			constexpr auto ClothingRoots = 0x48; // GameObject[]
		}
		namespace LootPanelReclaim
		{
			constexpr auto oldOverflow = 0x40; // int32_t
			constexpr auto overflowText = 0x48; // Text
			constexpr auto overflowObject = 0x50; // GameObject
			constexpr auto MorePhrase = 0x0; // Phrase
		}
		namespace LootPanelRecycler
		{
			constexpr auto controlsOn = 0x40; // GameObject
			constexpr auto controlsOff = 0x48; // GameObject
		}
		namespace LootPanelWaterCatcher
		{
			constexpr auto sourceItem = 0x40; // ItemIcon
			constexpr auto capacityImage = 0x48; // Image
			constexpr auto helpCanvas = 0x50; // CanvasGroup
			constexpr auto buttonsCanvas = 0x58; // CanvasGroup
			constexpr auto fromButton = 0x60; // Button
			constexpr auto toButton = 0x68; // Button
			constexpr auto drinkButton = 0x70; // Button
			constexpr auto transferMode = 0x78; // TransferMode
		}
		namespace MeleeWeaponInformationPanel
		{
			constexpr auto damageDisplay = 0x18; // ItemStatValue
			constexpr auto attackRateDisplay = 0x20; // ItemStatValue
			constexpr auto attackSizeDisplay = 0x28; // ItemStatValue
			constexpr auto attackRangeDisplay = 0x30; // ItemStatValue
			constexpr auto oreGatherDisplay = 0x38; // ItemStatValue
			constexpr auto treeGatherDisplay = 0x40; // ItemStatValue
			constexpr auto fleshGatherDisplay = 0x48; // ItemStatValue
		}
		namespace NoticeArea
		{
			constexpr auto itemPickupPrefab = 0x18; // GameObjectRef
			constexpr auto itemPickupCondensedText = 0x20; // GameObjectRef
			constexpr auto itemDroppedPrefab = 0x28; // GameObjectRef
			constexpr auto pickupSizeCurve = 0x30; // AnimationCurve
			constexpr auto pickupAlphaCurve = 0x38; // AnimationCurve
			constexpr auto reuseAlphaCurve = 0x40; // AnimationCurve
			constexpr auto reuseSizeCurve = 0x48; // AnimationCurve
			constexpr auto notices = 0x50; // IVitalNotice[]
			constexpr auto pickups = 0x58; // List`1
			constexpr auto timeSinceUpdatedNotices = 0x60; // RealTimeSince
		}
		namespace LootAllButton
		{
			constexpr auto Filter = 0x18; // Func`2
			constexpr auto inventoryGrid = 0x20; // OvenLootPanel
		}
		namespace LootGrid
		{
			constexpr auto Container = 0x18; // int32_t
			constexpr auto Offset = 0x1C; // int32_t
			constexpr auto Count = 0x20; // int32_t
			constexpr auto ItemIconPrefab = 0x28; // GameObject
			constexpr auto BackgroundImage = 0x30; // Sprite
			constexpr auto Inventory = 0x38; // ItemContainerSource
			constexpr auto _icons = 0x40; // List`1
		}
		namespace OvenItemIcon
		{
			constexpr auto ItemIcon = 0x18; // ItemIcon
			constexpr auto ItemLabel = 0x20; // RustText
			constexpr auto MaterialLabel = 0x28; // RustText
			constexpr auto SlotType = 0x30; // OvenSlotType
			constexpr auto EmptyPhrase = 0x38; // Phrase
			constexpr auto SlotConfigs = 0x40; // List`1
			constexpr auto DisabledAlphaScale = 0x48; // float
			constexpr auto CanvasGroup = 0x50; // CanvasGroup
			constexpr auto _item = 0x58; // Item
		}
		namespace OvenLineRow
		{
			constexpr auto Above = 0x18; // LootGrid
			constexpr auto Below = 0x20; // LootGrid
			constexpr auto Container = 0x28; // Transform
			constexpr auto Color = 0x30; // Color
			constexpr auto TriangleSprite = 0x40; // Sprite
			constexpr auto LineWidth = 0x48; // int32_t
			constexpr auto ArrowWidth = 0x4C; // int32_t
			constexpr auto ArrowHeight = 0x50; // int32_t
			constexpr auto Padding = 0x54; // int32_t
			constexpr auto _topCount = 0x58; // int32_t
			constexpr auto _bottomCount = 0x5C; // int32_t
			constexpr auto images = 0x60; // List`1
		}
		namespace OvenLootPanel
		{
			constexpr auto controlsOn = 0x18; // GameObject
			constexpr auto controlsOff = 0x20; // GameObject
			constexpr auto TitleBackground = 0x28; // Image
			constexpr auto TitleText = 0x30; // RustText
			constexpr auto AlertBackgroundColor = 0x38; // Color
			constexpr auto AlertTextColor = 0x48; // Color
			constexpr auto OffBackgroundColor = 0x58; // Color
			constexpr auto OffTextColor = 0x68; // Color
			constexpr auto OnBackgroundColor = 0x78; // Color
			constexpr auto OnTextColor = 0x88; // Color
			constexpr auto OffPhrase = 0x98; // Phrase
			constexpr auto OnPhrase = 0xA0; // Phrase
			constexpr auto NoFuelPhrase = 0xA8; // Phrase
			constexpr auto FuelRowPrefab = 0xB0; // GameObject
			constexpr auto MaterialRowPrefab = 0xB8; // GameObject
			constexpr auto ItemRowPrefab = 0xC0; // GameObject
			constexpr auto IconBackground_Wood = 0xC8; // Sprite
			constexpr auto IconBackGround_Input = 0xD0; // Sprite
			constexpr auto LootGrid_Wood = 0xD8; // LootGrid
			constexpr auto LootGrid_Input = 0xE0; // LootGrid
			constexpr auto LootGrid_Output = 0xE8; // LootGrid
			constexpr auto Contents = 0xF0; // GameObject
			constexpr auto ElectricDisableRoots = 0xF8; // GameObject[]
			constexpr auto containerSource = 0x100; // ItemContainerSource
			constexpr auto _slotIndex = 0x108; // int32_t
			constexpr auto _icons = 0x110; // List`1
			constexpr auto _inventoryCreated = 0x118; // bool
			constexpr auto _fuelSlots = 0x11C; // int32_t
			constexpr auto _inputSlots = 0x120; // int32_t
			constexpr auto _outputSlots = 0x124; // int32_t
		}
		namespace OvenSlotType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace OvenStatus
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PaperDollSegment
		{
			constexpr auto selectedAreas = 0x0; // HitArea
			constexpr auto area = 0x18; // HitArea
			constexpr auto overlayImg = 0x20; // Image
		}
		namespace ProjectileWeaponInformationPanel
		{
			constexpr auto damageDisplay = 0x18; // ItemStatValue
			constexpr auto recoilDisplay = 0x20; // ItemStatValue
			constexpr auto rofDisplay = 0x28; // ItemStatValue
			constexpr auto accuracyDisplay = 0x30; // ItemStatValue
			constexpr auto rangeDisplay = 0x38; // ItemStatValue
		}
		namespace ProtectionValue
		{
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto text = 0x20; // TextMeshProUGUI
			constexpr auto damageType = 0x28; // DamageType
			constexpr auto selectedItem = 0x2C; // bool
			constexpr auto displayBaseProtection = 0x2D; // bool
		}
		namespace QuickCraft
		{
			constexpr auto craftButton = 0x18; // GameObjectRef
			constexpr auto empty = 0x20; // GameObject
			constexpr auto FavouriteOnSprite = 0x28; // Sprite
			constexpr auto FavouriteOffSprite = 0x30; // Sprite
			constexpr auto FavouriteOnColor = 0x38; // Color
			constexpr auto FavouriteOffColor = 0x48; // Color
			constexpr auto FavouriteBlueprints = 0x0; // HashSet`1
			constexpr auto lastRebuildTime = 0x58; // float
			constexpr auto forceRebuild = 0x5C; // bool
			constexpr auto isDirty = 0x5D; // bool
			constexpr auto lastHash = 0x60; // int32_t
		}
		namespace QuickCraftButton
		{
			constexpr auto icon = 0x18; // Image
			constexpr auto favourite = 0x20; // Image
			constexpr auto tooltip = 0x28; // Tooltip
			constexpr auto CraftCount = 0x30; // Text
			constexpr auto FavouriteIcon = 0x38; // Image
			constexpr auto bp = 0x40; // ItemBlueprint
			constexpr auto skinId = 0x48; // int32_t
			constexpr auto oldCount = 0x4C; // int32_t
			constexpr auto favourited = 0x50; // bool
			constexpr auto lastClickedItemID = 0x0; // int32_t
		}
		namespace RepairBenchPanel
		{
			constexpr auto infoText = 0x40; // Text
			constexpr auto repairButton = 0x48; // Button
			constexpr auto gotColor = 0x50; // Color
			constexpr auto notGotColor = 0x60; // Color
			constexpr auto phraseEmpty = 0x70; // Phrase
			constexpr auto phraseNotRepairable = 0x78; // Phrase
			constexpr auto phraseRepairNotNeeded = 0x80; // Phrase
			constexpr auto phraseNoBlueprint = 0x88; // Phrase
			constexpr auto skinsPanel = 0x90; // GameObject
			constexpr auto changeSkinDialog = 0x98; // GameObject
			constexpr auto picker = 0xA0; // IconSkinPicker
			constexpr auto attachmentSkinBlocker = 0xA8; // GameObject
			constexpr auto _displayItem = 0xB0; // Item
		}
		namespace ResearchTablePanel
		{
			constexpr auto researchButton = 0x40; // Button
			constexpr auto timerText = 0x48; // Text
			constexpr auto itemDescNoItem = 0x50; // GameObject
			constexpr auto itemDescTooBroken = 0x58; // GameObject
			constexpr auto itemDescNotResearchable = 0x60; // GameObject
			constexpr auto itemDescTooMany = 0x68; // GameObject
			constexpr auto itemTakeBlueprint = 0x70; // GameObject
			constexpr auto itemDescAlreadyResearched = 0x78; // GameObject
			constexpr auto itemDescDefaultBlueprint = 0x80; // GameObject
			constexpr auto successChanceText = 0x88; // Text
			constexpr auto scrapIcon = 0x90; // ItemIcon
			constexpr auto wasResearching = 0x98; // bool
			constexpr auto workbenchReqs = 0xA0; // GameObject[]
			constexpr auto _researchItem = 0xA8; // Item
		}
		namespace SeedInformationPanel
		{
			constexpr auto maxHarvestsDisplay = 0x18; // ItemTextValue
			constexpr auto GeneticsDisplay = 0x20; // UIGenesDisplay
			constexpr auto TextUnknownGenetics = 0x28; // Text
			constexpr auto GeneticsGameObject = 0x30; // GameObject
			constexpr auto WaterResilience = 0x38; // ItemStatValue
			constexpr auto GroundResilience = 0x40; // ItemStatValue
			constexpr auto LightResilience = 0x48; // ItemStatValue
			constexpr auto TemperatureResilience = 0x50; // ItemStatValue
			constexpr auto genes = 0x58; // GrowableGenes
		}
		namespace SelectedItem
		{
			constexpr auto icon = 0x18; // Image
			constexpr auto iconSplitter = 0x20; // Image
			constexpr auto title = 0x28; // RustText
			constexpr auto description = 0x30; // RustText
			constexpr auto splitPanel = 0x38; // GameObject
			constexpr auto itemProtection = 0x40; // GameObject
			constexpr auto menuOption = 0x48; // GameObject
			constexpr auto optionsParent = 0x50; // GameObject
			constexpr auto innerPanelContainer = 0x58; // GameObject
			constexpr auto animator = 0x60; // Animator
			constexpr auto protectionValues = 0x68; // ProtectionValue[]
			constexpr auto informationPanels = 0x70; // ItemInformationPanel[]
			constexpr auto previousOptions = 0x78; // List`1
			constexpr auto lastItem = 0x80; // Item
			constexpr auto wasOpen = 0x88; // bool
			constexpr auto selectedItem = 0x0; // ItemIcon
			constexpr auto hoveredItem = 0x8; // ItemIcon
		}
		namespace SquareBorder
		{
			constexpr auto Size = 0x18; // float
			constexpr auto Color = 0x1C; // Color
			constexpr auto Top = 0x30; // RectTransform
			constexpr auto Bottom = 0x38; // RectTransform
			constexpr auto Left = 0x40; // RectTransform
			constexpr auto Right = 0x48; // RectTransform
			constexpr auto TopImage = 0x50; // Image
			constexpr auto BottomImage = 0x58; // Image
			constexpr auto LeftImage = 0x60; // Image
			constexpr auto RightImage = 0x68; // Image
			constexpr auto _lastSize = 0x70; // float
			constexpr auto _lastColor = 0x74; // Color
		}
		namespace UIBelt
		{
			constexpr auto ItemIcons = 0x18; // List`1
		}
		namespace UIContacts
		{
			constexpr auto isOpen = 0x0; // bool
			constexpr auto LastOpened = 0x4; // float
			constexpr auto contactsPanel = 0x18; // ContactsPanel
			constexpr auto Inset = 0x20; // GameObject
			constexpr auto returnX = 0x28; // float
			constexpr auto canvasGroup = 0x8; // CanvasGroup
			constexpr auto graphicRaycster = 0x10; // GraphicRaycaster
			constexpr auto inventoryItemIcons = 0x30; // ItemIcon[]
		}
		namespace UICrafting
		{
			constexpr auto isOpen = 0x0; // bool
			constexpr auto LastOpened = 0x4; // float
			constexpr auto canvasGroup = 0x8; // CanvasGroup
			constexpr auto graphicRaycster = 0x10; // GraphicRaycaster
			constexpr auto Inset = 0x18; // GameObject
			constexpr auto returnX = 0x20; // float
		}
		namespace UIIntegerEntry
		{
			constexpr auto textEntry = 0x18; // InputField
			constexpr auto textChanged = 0x20; // Action
		}
		namespace UIInventory
		{
			constexpr auto PlayerName = 0x18; // TextMeshProUGUI
			constexpr auto isOpen = 0x0; // bool
			constexpr auto LastOpened = 0x4; // float
			constexpr auto rightContents = 0x20; // VerticalLayoutGroup
			constexpr auto QuickCraft = 0x28; // GameObject
			constexpr auto InventoryIconContainer = 0x30; // Transform
			constexpr auto ChangelogPanel = 0x38; // ChangelogPanel
			constexpr auto contactsPanel = 0x40; // ContactsPanel
			constexpr auto currentQuickLootContainerID = 0x8; // ItemContainerId
			constexpr auto Inset = 0x48; // GameObject
			constexpr auto returnX = 0x50; // float
			constexpr auto canvasGroup = 0x10; // CanvasGroup
			constexpr auto graphicRaycster = 0x18; // GraphicRaycaster
			constexpr auto inventoryItemIcons = 0x58; // ItemIcon[]
			constexpr auto underwearSkinPicker = 0x60; // UnderwearSkinPicker
			constexpr auto lastCloseSoundPlay = 0x20; // TimeSince
		}
		namespace UIMixingTableItem
		{
			constexpr auto ItemIcon = 0x18; // Image
			constexpr auto ItemTooltip = 0x20; // Tooltip
			constexpr auto TextItemNameAndQuantity = 0x28; // RustText
			constexpr auto Ingredients = 0x30; // UIMixingTableItemIngredient[]
		}
		namespace UIMixingTableItemIngredient
		{
			constexpr auto ItemIcon = 0x18; // Image
			constexpr auto ItemCount = 0x20; // Text
			constexpr auto ToolTip = 0x28; // Tooltip
		}
		namespace VehicleEditingItemIcon
		{
			constexpr auto foregroundImage = 0x18; // Image
			constexpr auto linkImage = 0x20; // Image
			constexpr auto itemIcon = 0x28; // ItemIcon
		}
		namespace VehicleEditingPanel
		{
			constexpr auto disabledAlpha = 0x40; // float
			constexpr auto editGroup = 0x48; // CanvasGroup
			constexpr auto moduleInternalItemsGroup = 0x50; // GameObject
			constexpr auto moduleInternalLiquidsGroup = 0x58; // GameObject
			constexpr auto destroyChassisGroup = 0x60; // GameObject
			constexpr auto itemTakeButton = 0x68; // Button
			constexpr auto liquidTakeButton = 0x70; // Button
			constexpr auto liquidHelp = 0x78; // GameObject
			constexpr auto liquidButton = 0x80; // GameObject
			constexpr auto gotColor = 0x88; // Color
			constexpr auto notGotColor = 0x98; // Color
			constexpr auto generalInfoText = 0xA8; // Text
			constexpr auto generalWarningText = 0xB0; // Text
			constexpr auto generalWarningImage = 0xB8; // Image
			constexpr auto repairInfoText = 0xC0; // Text
			constexpr auto repairButton = 0xC8; // Button
			constexpr auto destroyChassisButtonText = 0xD0; // Text
			constexpr auto destroyChassisCountdown = 0xD8; // Text
			constexpr auto phraseEditingInfo = 0xE0; // Phrase
			constexpr auto phraseNoOccupant = 0xE8; // Phrase
			constexpr auto phraseBadOccupant = 0xF0; // Phrase
			constexpr auto phrasePlayerObstructing = 0xF8; // Phrase
			constexpr auto phraseNotDriveable = 0x100; // Phrase
			constexpr auto phraseNotRepairable = 0x108; // Phrase
			constexpr auto phraseRepairNotNeeded = 0x110; // Phrase
			constexpr auto phraseRepairSelectInfo = 0x118; // Phrase
			constexpr auto phraseRepairEnactInfo = 0x120; // Phrase
			constexpr auto phraseHasLock = 0x128; // Phrase
			constexpr auto phraseHasNoLock = 0x130; // Phrase
			constexpr auto phraseAddLock = 0x138; // Phrase
			constexpr auto phraseAddLockButton = 0x140; // Phrase
			constexpr auto phraseChangeLockCodeButton = 0x148; // Phrase
			constexpr auto carLockInfoText = 0x150; // Text
			constexpr auto carLockButtonText = 0x158; // RustText
			constexpr auto actionLockButton = 0x160; // Button
			constexpr auto removeLockButton = 0x168; // Button
			constexpr auto keyEnterDialog = 0x170; // GameObjectRef
			constexpr auto phraseEmptyStorage = 0x178; // Phrase
			constexpr auto chassisOptions = 0x180; // CreateChassisEntry[]
			constexpr auto prevSelectedUID = 0x188; // ItemId
			constexpr auto platformWasOccupied = 0x190; // bool
			constexpr auto hadEditableOccupant = 0x191; // bool
			constexpr auto hasDriveableOccupant = 0x192; // bool
			constexpr auto hasPlayerObstructing = 0x193; // bool
			constexpr auto occupantLockState = 0x194; // OccupantLock
		}
		namespace VehicleModuleInformationPanel
		{
			constexpr auto socketsDisplay = 0x18; // ItemStatValue
			constexpr auto hpDisplay = 0x20; // ItemStatValue
		}
		namespace VirtualItemIcon
		{
			constexpr auto itemDef = 0x18; // ItemDefinition
			constexpr auto itemAmount = 0x20; // int32_t
			constexpr auto asBlueprint = 0x24; // bool
			constexpr auto iconImage = 0x28; // Image
			constexpr auto bpUnderlay = 0x30; // Image
			constexpr auto amountText = 0x38; // Text
			constexpr auto hoverText = 0x40; // Text
			constexpr auto iconContents = 0x48; // CanvasGroup
			constexpr auto ToolTip = 0x50; // Tooltip
			constexpr auto conditionObject = 0x58; // CanvasGroup
			constexpr auto conditionFill = 0x60; // Image
			constexpr auto maxConditionFill = 0x68; // Image
			constexpr auto cornerIcon = 0x70; // Image
		}
		namespace WorkbenchPanel
		{
			constexpr auto experimentButton = 0x40; // Button
			constexpr auto timerText = 0x48; // Text
			constexpr auto costText = 0x50; // Text
			constexpr auto expermentCostParent = 0x58; // GameObject
			constexpr auto controlsParent = 0x60; // GameObject
			constexpr auto allUnlockedNotification = 0x68; // GameObject
			constexpr auto informationParent = 0x70; // GameObject
			constexpr auto cycleIcon = 0x78; // GameObject
			constexpr auto techTreeDialog = 0x80; // TechTreeDialog
			constexpr auto wasWorking = 0x88; // bool
		}
		namespace InventoryUI
		{
			constexpr auto ContactsButton = 0x18; // GameObject
		}
		namespace IOEntityUISlotEntry
		{
			constexpr auto icon = 0x18; // RawImage
			constexpr auto leftText = 0x20; // Text
			constexpr auto rightText = 0x28; // Text
		}
		namespace LifeInfographic
		{
			constexpr auto life = 0x18; // PlayerLifeStory
			constexpr auto container = 0x20; // GameObject
			constexpr auto AttackerAvatarImage = 0x28; // RawImage
			constexpr auto DamageSourceImage = 0x30; // Image
			constexpr auto Stats = 0x38; // LifeInfographicStat[]
			constexpr auto AllAnimators = 0x40; // Animator[]
			constexpr auto WeaponRoot = 0x48; // GameObject
			constexpr auto DistanceRoot = 0x50; // GameObject
			constexpr auto DistanceDivider = 0x58; // GameObject
			constexpr auto WeaponImage = 0x60; // Image
			constexpr auto DamageDisplays = 0x68; // DamageSetting[]
			constexpr auto defaultAvatarTexture = 0x70; // Texture2D
			constexpr auto ShowDebugData = 0x78; // bool
			constexpr auto triggerParam = 0x7C; // int32_t
			constexpr auto closeState = 0x80; // int32_t
		}
		namespace LifeInfographicStat
		{
			constexpr auto dataSource = 0x18; // DataType
			constexpr auto genericStatKey = 0x20; // string
			constexpr auto targetWeaponName = 0x28; // string
			constexpr auto weaponInfoType = 0x30; // WeaponInfoType
			constexpr auto targetText = 0x38; // TextMeshProUGUI
			constexpr auto StatImage = 0x40; // Image
			constexpr auto cachedInfographic = 0x48; // LifeInfographic
		}
		namespace LifeInfographicStatDynamicRow
		{
			constexpr auto StatName = 0x50; // RustText
		}
		namespace LifeInfographicStatWeapon
		{
			constexpr auto WeaponName = 0x18; // RustText
			constexpr auto ShotsFired = 0x20; // RustText
			constexpr auto ShotsHit = 0x28; // RustText
			constexpr auto ShotsPercent = 0x30; // RustText
			constexpr auto WeaponIcon = 0x38; // Image
		}
		namespace LookatHealth
		{
			constexpr auto Enabled = 0x0; // bool
			constexpr auto container = 0x18; // GameObject
			constexpr auto textHealth = 0x20; // Text
			constexpr auto textStability = 0x28; // Text
			constexpr auto healthBar = 0x30; // Image
			constexpr auto healthBarBG = 0x38; // Image
			constexpr auto barBGColorNormal = 0x40; // Color
			constexpr auto barBGColorUnstable = 0x50; // Color
			constexpr auto previousLookingAt = 0x60; // BaseEntity
			constexpr auto idealWidth = 0x68; // float
			constexpr auto anim = 0x70; // Animator
		}
		namespace LookAtIOEnt
		{
			constexpr auto objectTitle = 0x18; // Text
			constexpr auto slotToolTip = 0x20; // RectTransform
			constexpr auto slotTitle = 0x28; // Text
			constexpr auto slotConnection = 0x30; // Text
			constexpr auto slotPower = 0x38; // Text
			constexpr auto powerText = 0x40; // Text
			constexpr auto passthroughText = 0x48; // Text
			constexpr auto chargeLeftText = 0x50; // Text
			constexpr auto capacityText = 0x58; // Text
			constexpr auto maxOutputText = 0x60; // Text
			constexpr auto activeOutputText = 0x68; // Text
			constexpr auto inputEntries = 0x70; // IOEntityUISlotEntry[]
			constexpr auto outputEntries = 0x78; // IOEntityUISlotEntry[]
			constexpr auto NoPowerColor = 0x80; // Color
			constexpr auto GravityWarning = 0x90; // GameObject
			constexpr auto DistanceWarning = 0x98; // GameObject
			constexpr auto LineOfSightWarning = 0xA0; // GameObject
			constexpr auto TooManyInputsWarning = 0xA8; // GameObject
			constexpr auto TooManyOutputsWarning = 0xB0; // GameObject
			constexpr auto BuildPrivilegeWarning = 0xB8; // GameObject
			constexpr auto group = 0xC0; // CanvasGroup
			constexpr auto handleSets = 0xC8; // HandleSet[]
			constexpr auto clearNotification = 0xD0; // RectTransform
			constexpr auto wireInfoGroup = 0xD8; // CanvasGroup
			constexpr auto wireLengthText = 0xE0; // Text
			constexpr auto wireClipsText = 0xE8; // Text
			constexpr auto errorReasonTextTooFar = 0xF0; // Text
			constexpr auto errorReasonTextNoSurface = 0xF8; // Text
			constexpr auto errorShortCircuit = 0x100; // Text
			constexpr auto ConnectionTypeIcon = 0x108; // RawImage
			constexpr auto ElectricSprite = 0x110; // Texture
			constexpr auto FluidSprite = 0x118; // Texture
			constexpr auto IndustrialSprite = 0x120; // Texture
			constexpr auto lastLooking = 0x128; // IOEntity
			constexpr auto nextUpdatetime = 0x130; // float
			constexpr auto activeHandle = 0x138; // GameObject
			constexpr auto activeHandleMaterialSwap = 0x140; // MaterialSwap
			constexpr auto pluggedHandle = 0x148; // GameObject
			constexpr auto inputHandles = 0x150; // List`1
			constexpr auto outputHandles = 0x158; // List`1
			constexpr auto selectedIndex = 0x0; // int32_t
			constexpr auto selectedWasInput = 0x4; // bool
			constexpr auto cachedStorageAdaptorLookup = 0x160; // BaseEntity
			constexpr auto cachedStorageAdaptorResult = 0x168; // ItemDefinition
			constexpr auto wiretoolWasPendingInput = 0x170; // bool
			constexpr auto wiretoolWasPendingOutput = 0x171; // bool
			constexpr auto wireToolWasPendingRoot = 0x172; // bool
			constexpr auto wireToolWasType = 0x174; // IOType
		}
		namespace LookAtPlant
		{
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto GeneDisplay = 0x20; // UIGenesDisplay
			constexpr auto GeneDisplay2 = 0x28; // UIGenesDisplay
			constexpr auto TextPlant = 0x30; // Text
			constexpr auto PlantIcon = 0x38; // Image
			constexpr auto Age = 0x40; // InfoBar
			constexpr auto Stage = 0x48; // InfoBar
			constexpr auto WaterIntake = 0x50; // InfoBar
			constexpr auto TextYieldLabel = 0x58; // Text
			constexpr auto Yield = 0x60; // InfoBar
			constexpr auto Health = 0x68; // InfoBar
			constexpr auto Light = 0x70; // InfoBar
			constexpr auto WaterSaturation = 0x78; // InfoBar
			constexpr auto Ground = 0x80; // InfoBar
			constexpr auto Temperature = 0x88; // InfoBar
			constexpr auto Overall = 0x90; // InfoBar
		}
		namespace LookAtPlanter
		{
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto waterText = 0x20; // Text
		}
		namespace LookatTooltip
		{
			constexpr auto Enabled = 0x0; // bool
			constexpr auto currentlyLookingAt = 0x18; // BaseEntity
			constexpr auto textLabel = 0x20; // RustText
			constexpr auto icon = 0x28; // Image
			constexpr auto canvasGroup = 0x30; // CanvasGroup
			constexpr auto infoGroup = 0x38; // CanvasGroup
			constexpr auto minimiseGroup = 0x40; // CanvasGroup
			constexpr auto lastInfoHash = 0x48; // int32_t
		}
		namespace AboutYou
		{
			constexpr auto username = 0x18; // Text
			constexpr auto avatar = 0x20; // RawImage
			constexpr auto subtitle = 0x28; // Text
		}
		namespace CompanionSetupScreen
		{
			constexpr auto instructionsBody = 0x18; // GameObject
			constexpr auto detailsPanel = 0x20; // GameObject
			constexpr auto loadingMessage = 0x28; // GameObject
			constexpr auto errorMessage = 0x30; // GameObject
			constexpr auto notSupportedMessage = 0x38; // GameObject
			constexpr auto disabledMessage = 0x40; // GameObject
			constexpr auto enabledMessage = 0x48; // GameObject
			constexpr auto refreshButton = 0x50; // GameObject
			constexpr auto enableButton = 0x58; // GameObject
			constexpr auto disableButton = 0x60; // GameObject
			constexpr auto pairButton = 0x68; // GameObject
			constexpr auto serverName = 0x70; // RustText
			constexpr auto helpButton = 0x78; // RustButton
			constexpr auto Statek__BackingField = 0x80; // ScreenState
			constexpr auto _isLoading = 0x84; // bool
			constexpr auto _enabled = 0x85; // Nullable`1
			constexpr auto _hidePair = 0x87; // bool
		}
		namespace CompanionSubscription
		{
			constexpr auto Http = 0x0; // HttpClient
		}
		namespace ConnectionScreen
		{
			constexpr auto statusText = 0x18; // Text
			constexpr auto disconnectButton = 0x20; // GameObject
			constexpr auto retryButton = 0x28; // GameObject
			constexpr auto browserInfo = 0x30; // ServerBrowserInfo
			constexpr auto currentServer = 0x38; // Nullable`1
			constexpr auto currentServerRules = 0xC0; // Dictionary`2
		}
		namespace DemoItem
		{
			constexpr auto demos = 0x98; // Demos
			constexpr auto itemId = 0xA0; // int32_t
			constexpr auto nameText = 0xA8; // RustText
			constexpr auto dateText = 0xB0; // RustText
			constexpr auto lengthText = 0xB8; // RustText
		}
		namespace Demos
		{
			constexpr auto virtualScroll = 0x18; // VirtualScroll
			constexpr auto deletePopup = 0x20; // GameObject
			constexpr auto _demoInfo = 0x28; // List`1
			constexpr auto _sortedDemoInfo = 0x30; // List`1
			constexpr auto _selectedItem = 0x38; // DemoItem
			constexpr auto sortOrder = 0x40; // string
		}
		namespace ItemStore
		{
			constexpr auto CartEmptyPhrase = 0x0; // Phrase
			constexpr auto CartSingularPhrase = 0x8; // Phrase
			constexpr auto CartPluralPhrase = 0x10; // Phrase
			constexpr auto ItemPrefab = 0x18; // GameObject
			constexpr auto LimitedItemParent = 0x20; // RectTransform
			constexpr auto GeneralItemParent = 0x28; // RectTransform
			constexpr auto Cart = 0x30; // List`1
			constexpr auto ItemStoreInfoModal = 0x38; // ItemStoreItemInfoModal
			constexpr auto BuyingModal = 0x40; // GameObject
			constexpr auto ItemStoreBuyFailedModal = 0x48; // ItemStoreBuyFailedModal
			constexpr auto ItemStoreBuySuccessModal = 0x50; // ItemStoreBuySuccessModal
			constexpr auto AddToCartSound = 0x58; // SoundDefinition
			constexpr auto CartButtonLabel = 0x60; // RustText
			constexpr auto QuantityValue = 0x68; // RustText
			constexpr auto TotalValue = 0x70; // RustText
		}
		namespace ItemStoreCartItem
		{
			constexpr auto Index = 0x18; // int32_t
			constexpr auto Name = 0x20; // TextMeshProUGUI
			constexpr auto Price = 0x28; // TextMeshProUGUI
		}
		namespace ItemStoreItem
		{
			constexpr auto Icon = 0x18; // HttpImage
			constexpr auto Name = 0x20; // RustText
			constexpr auto Price = 0x28; // TextMeshProUGUI
			constexpr auto ItemName = 0x30; // RustText
			constexpr auto InCartTag = 0x38; // GameObject
			constexpr auto item = 0x40; // IPlayerItemDefinition
		}
		namespace ItemStoreItemInfoModal
		{
			constexpr auto Icon = 0x18; // HttpImage
			constexpr auto Name = 0x20; // TextMeshProUGUI
			constexpr auto Price = 0x28; // TextMeshProUGUI
			constexpr auto Description = 0x30; // TextMeshProUGUI
			constexpr auto item = 0x38; // IPlayerItemDefinition
		}
		namespace LanguageSelection
		{
			constexpr auto buttonContainer = 0x18; // GameObject
		}
		namespace LoadingScreen
		{
			constexpr auto WantsSkipk__BackingField = 0x0; // bool
			constexpr auto Textk__BackingField = 0x8; // string
			constexpr auto panel = 0x18; // CanvasRenderer
			constexpr auto title = 0x20; // TextMeshProUGUI
			constexpr auto subtitle = 0x28; // TextMeshProUGUI
			constexpr auto skipButton = 0x30; // Button
			constexpr auto cancelButton = 0x38; // Button
			constexpr auto performanceWarning = 0x40; // GameObject
			constexpr auto music = 0x48; // AudioSource
			constexpr auto serverInfo = 0x50; // RectTransform
			constexpr auto serverName = 0x58; // RustText
			constexpr auto serverPlayers = 0x60; // RustText
			constexpr auto serverModeSection = 0x68; // RustLayout
			constexpr auto serverMode = 0x70; // RustText
			constexpr auto serverMap = 0x78; // RustText
			constexpr auto serverTagsSection = 0x80; // RustLayout
			constexpr auto serverTags = 0x88; // ServerBrowserTagList
			constexpr auto demoInfo = 0x90; // RectTransform
			constexpr auto demoName = 0x98; // RustText
			constexpr auto demoLength = 0xA0; // RustText
			constexpr auto demoDate = 0xA8; // RustText
			constexpr auto demoMap = 0xB0; // RustText
			constexpr auto backgroundImage = 0xB8; // RawImage
			constexpr auto defaultBackground = 0xC0; // Texture2D
			constexpr auto pingWarning = 0xC8; // GameObject
			constexpr auto pingWarningText = 0xD0; // RustText
			constexpr auto minPingDiffToShowWarning = 0xD8; // int32_t
			constexpr auto pingDiffFactorToShowWarning = 0xDC; // float
			constexpr auto requiredPingSampleCount = 0xE0; // int32_t
			constexpr auto blackout = 0xE8; // GameObject
			constexpr auto _backgroundImagePath = 0xF0; // string
			constexpr auto _backgroundImage = 0xF8; // Texture2D
			constexpr auto _pingWarningTextTemplate = 0x100; // string
			constexpr auto _pingSampleCount = 0x108; // int32_t
			constexpr auto _minimumPingSample = 0x10C; // int32_t
		}
		namespace MainMenuSystem
		{
			constexpr auto isOpen = 0x0; // bool
			constexpr auto OnOpenStateChanged = 0x8; // Action
			constexpr auto SessionButton = 0x18; // RustButton
			constexpr auto SessionPanel = 0x20; // GameObject
			constexpr auto NewsStoriesAlert = 0x28; // GameObject
			constexpr auto ItemStoreAlert = 0x30; // GameObject
			constexpr auto CompanionAlert = 0x38; // GameObject
			constexpr auto DemoBrowser = 0x40; // GameObject
			constexpr auto DemoBrowserButton = 0x48; // GameObject
			constexpr auto SuicideButton = 0x50; // GameObject
			constexpr auto EndDemoButton = 0x58; // GameObject
			constexpr auto ReflexModeOption = 0x60; // GameObject
			constexpr auto ReflexLatencyMarkerOption = 0x68; // GameObject
		}
		namespace MenuBackgroundVideo
		{
			constexpr auto videos = 0x18; // string[]
			constexpr auto index = 0x20; // int32_t
			constexpr auto errored = 0x24; // bool
		}
		namespace NewsParagraph
		{
			constexpr auto Text = 0x18; // RustText
			constexpr auto Links = 0x20; // List`1
		}
		namespace NewsSource
		{
			constexpr auto BbcodeParse = 0x0; // Regex
			constexpr auto title = 0x18; // RustText
			constexpr auto date = 0x20; // RustText
			constexpr auto authorName = 0x28; // RustText
			constexpr auto coverImage = 0x30; // HttpImage
			constexpr auto container = 0x38; // RectTransform
			constexpr auto button = 0x40; // Button
			constexpr auto paragraphTemplate = 0x48; // RustText
			constexpr auto imageTemplate = 0x50; // HttpImage
			constexpr auto youtubeTemplate = 0x58; // HttpImage
			constexpr auto BulletSeparators = 0x8; // string[]
		}
		namespace SteamNewsSource
		{
			constexpr auto Stories = 0x0; // Story[]
		}
		namespace ApplyTweakUIChanges
		{
			constexpr auto ApplyButton = 0x18; // Button
			constexpr auto Options = 0x20; // TweakUIBase[]
		}
		namespace KeyBindUI
		{
			constexpr auto blockingCanvas = 0x18; // GameObject
			constexpr auto btnA = 0x20; // Button
			constexpr auto btnB = 0x28; // Button
			constexpr auto bindString = 0x30; // string
			constexpr auto IsBindingk__BackingField = 0x0; // bool
			constexpr auto binding = 0x38; // Button
			constexpr auto noButtonsDown = 0x40; // bool
		}
		namespace ToggleHUDLayer
		{
			constexpr auto toggleControl = 0x18; // Toggle
			constexpr auto textControl = 0x20; // TextMeshProUGUI
			constexpr auto hudComponentName = 0x28; // string
		}
		namespace ToggleLayer
		{
			constexpr auto toggleControl = 0x18; // Toggle
			constexpr auto textControl = 0x20; // TextMeshProUGUI
			constexpr auto layer = 0x28; // LayerSelect
		}
		namespace ToggleResolution
		{
			constexpr auto Dropdown = 0x18; // TweakUIDropdown
		}
		namespace ToggleTerrainRenderer
		{
			constexpr auto toggleControl = 0x18; // Toggle
			constexpr auto textControl = 0x20; // Text
		}
		namespace ToggleTerrainTrees
		{
			constexpr auto toggleControl = 0x18; // Toggle
			constexpr auto textControl = 0x20; // Text
		}
		namespace TweakUI
		{
			constexpr auto isOpen = 0x0; // bool
		}
		namespace TweakUIBase
		{
			constexpr auto convarName = 0x18; // string
			constexpr auto ApplyImmediatelyOnChange = 0x20; // bool
			constexpr auto conVar = 0x28; // Command
		}
		namespace TweakUIDropdown
		{
			constexpr auto Current = 0x30; // RustText
			constexpr auto BackgroundImage = 0x38; // Image
			constexpr auto Opener = 0x40; // RustButton
			constexpr auto Dropdown = 0x48; // RectTransform
			constexpr auto DropdownContainer = 0x50; // RectTransform
			constexpr auto DropdownItemPrefab = 0x58; // GameObject
			constexpr auto nameValues = 0x60; // NameValue[]
			constexpr auto assignImageColor = 0x68; // bool
			constexpr auto onValueChanged = 0x70; // UnityEvent
			constexpr auto currentValue = 0x78; // int32_t
		}
		namespace TweakUIMultiSelect
		{
			constexpr auto toggleGroup = 0x30; // ToggleGroup
		}
		namespace TweakUISlider
		{
			constexpr auto sliderControl = 0x30; // Slider
			constexpr auto textControl = 0x38; // TextMeshProUGUI
			constexpr auto lastConVarChanged = 0x0; // string
			constexpr auto timeSinceLastConVarChange = 0x8; // TimeSince
		}
		namespace TweakUIToggle
		{
			constexpr auto toggleControl = 0x30; // Toggle
			constexpr auto inverse = 0x38; // bool
			constexpr auto lastConVarChanged = 0x0; // string
			constexpr auto timeSinceLastConVarChange = 0x8; // TimeSince
		}
		namespace ServerBrowser
		{
			constexpr auto orderBy = 0x18; // string
			constexpr auto searchText = 0x20; // string
			constexpr auto showFull = 0x28; // bool
			constexpr auto showEmpty = 0x29; // bool
			constexpr auto searchTags = 0x30; // List`1
			constexpr auto excludeTags = 0x38; // HashSet`1
		}
		namespace ServerBrowserCategory
		{
			constexpr auto serverCountText = 0x18; // LocalizeText
			constexpr auto browserList = 0x20; // ServerBrowserList
			constexpr auto isDirty = 0x28; // bool
		}
		namespace ServerBrowserInfo
		{
			constexpr auto isMain = 0x18; // bool
			constexpr auto serverName = 0x20; // Text
			constexpr auto serverMeta = 0x28; // Text
			constexpr auto serverText = 0x30; // Text
			constexpr auto viewWebpage = 0x38; // Button
			constexpr auto refresh = 0x40; // Button
			constexpr auto currentServer = 0x48; // Nullable`1
			constexpr auto headerImage = 0xD0; // HttpImage
			constexpr auto logoImage = 0xD8; // HttpImage
			constexpr auto weburl = 0xE0; // string
			constexpr auto loadedTexture = 0xE8; // Texture
			constexpr auto descriptionText = 0xF0; // string
		}
		namespace ServerBrowserItem
		{
			constexpr auto serverName = 0x18; // TextMeshProUGUI
			constexpr auto mapName = 0x20; // RustFlexText
			constexpr auto playerCount = 0x28; // TextMeshProUGUI
			constexpr auto ping = 0x30; // TextMeshProUGUI
			constexpr auto favourited = 0x38; // Toggle
			constexpr auto serverTagList = 0x40; // ServerBrowserTagList
			constexpr auto changeset = 0x48; // TextMeshProUGUI
			constexpr auto timeSinceGotFriendServers = 0x0; // RealTimeSince
			constexpr auto friendsOnServers = 0x8; // Dictionary`2
			constexpr auto timeSinceGotFavouriteServers = 0x10; // RealTimeSince
			constexpr auto favorites = 0x18; // HashSet`1
			constexpr auto serverInfo = 0x50; // ServerInfo
			constexpr auto preventFavouriteToggle = 0xD0; // bool
		}
		namespace ServerBrowserList
		{
			constexpr auto categoryButton = 0x18; // ServerBrowserCategory
			constexpr auto startActive = 0x20; // bool
			constexpr auto listTransform = 0x28; // Transform
			constexpr auto refreshOrder = 0x30; // int32_t
			constexpr auto UseOfficialServers = 0x34; // bool
			constexpr auto VirtualScroll = 0x38; // VirtualScroll
			constexpr auto rules = 0x40; // Rules[]
			constexpr auto hideOfficialServers = 0x48; // bool
			constexpr auto excludeEmptyServersUsingQuery = 0x49; // bool
			constexpr auto alwaysIncludeEmptyServers = 0x4A; // bool
			constexpr auto clampPlayerCountsToTrustedValues = 0x4B; // bool
			constexpr auto isDirty = 0x4C; // bool
			constexpr auto searchFilter = 0x50; // string
			constexpr auto showFull = 0x58; // bool
			constexpr auto showEmpty = 0x59; // bool
			constexpr auto searchTags = 0x60; // List`1
			constexpr auto excludeTags = 0x68; // HashSet`1
			constexpr auto serverList = 0x70; // List`1
			constexpr auto serverListSortedFiltered = 0x78; // List`1
			constexpr auto sortOrder = 0x80; // string
			constexpr auto timeSinceRebuild = 0x88; // RealTimeSince
			constexpr auto queryType = 0x8C; // QueryType
			constexpr auto VersionTag = 0x0; // string
			constexpr auto keyValues = 0x90; // ServerKeyvalues[]
			constexpr auto Request = 0x98; // IServerQuery
			constexpr auto servers = 0xA0; // int32_t
			constexpr auto players = 0xA4; // int32_t
			constexpr auto shouldShowSecureServers = 0xA8; // bool
			constexpr auto officialServers = 0xB0; // HashSet`1
		}
		namespace ServerBrowserTag
		{
			constexpr auto serverTag = 0x18; // string
			constexpr auto button = 0x20; // RustButton
		}
		namespace ServerBrowserTagFilters
		{
			constexpr auto TagFiltersChanged = 0x18; // UnityEvent
			constexpr auto _groups = 0x20; // ServerBrowserTagGroup[]
			constexpr auto _previousState = 0x28; // List`1
		}
		namespace ServerBrowserTagGroup
		{
			constexpr auto isExclusive = 0x18; // bool
			constexpr auto tags = 0x20; // ServerBrowserTag[]
		}
		namespace ServerBrowserTagList
		{
			constexpr auto maxTagsToShow = 0x18; // int32_t
			constexpr auto _groups = 0x20; // ServerBrowserTagGroup[]
		}
		namespace ServerHistory
		{
			constexpr auto prefab = 0x18; // ServerHistoryItem
			constexpr auto panelList = 0x20; // GameObject
			constexpr auto Request = 0x28; // IServerQuery
		}
		namespace ServerHistoryItem
		{
			constexpr auto serverInfo = 0x18; // ServerInfo
			constexpr auto serverName = 0x98; // Text
			constexpr auto players = 0xA0; // Text
			constexpr auto lastJoinDate = 0xA8; // Text
			constexpr auto order = 0xB0; // uint32_t
		}
		namespace UnreadMessages
		{
			constexpr auto AllRead = 0x18; // StyleAsset
			constexpr auto Unread = 0x20; // StyleAsset
			constexpr auto Button = 0x28; // RustButton
			constexpr auto UnreadTextObject = 0x30; // GameObject
			constexpr auto UnreadText = 0x38; // RustText
			constexpr auto MessageList = 0x40; // GameObject
			constexpr auto MessageListContainer = 0x48; // GameObject
			constexpr auto MessageListEmpty = 0x50; // GameObject
			constexpr auto lastCount = 0x58; // int32_t
			constexpr auto createdButtons = 0x60; // List`1
		}
		namespace WorkshopMainMenu
		{
			constexpr auto loading_workshop = 0x0; // Phrase
			constexpr auto loading_workshop_setup = 0x8; // Phrase
			constexpr auto loading_workshop_skinnables = 0x10; // Phrase
			constexpr auto loading_workshop_item = 0x18; // Phrase
		}
		namespace MissionsHUD
		{
			constexpr auto listComplete = 0x18; // SoundDefinition
			constexpr auto itemComplete = 0x20; // SoundDefinition
			constexpr auto popup = 0x28; // SoundDefinition
			constexpr auto Canvas = 0x30; // Canvas
			constexpr auto titleText = 0x38; // Text
			constexpr auto timerObject = 0x40; // GameObject
			constexpr auto timerText = 0x48; // RustText
			constexpr auto items = 0x50; // MissionsHUDToDo[]
			constexpr auto blockOpenSound = 0x58; // bool
			constexpr auto nextTextUpdateTime = 0x5C; // float
		}
		namespace MissionsHUDToDo
		{
			constexpr auto text = 0x18; // Text
			constexpr auto checkIcon = 0x20; // RectTransform
			constexpr auto checkBox = 0x28; // RectTransform
			constexpr auto AliveColor = 0x30; // Color
			constexpr auto DeadColor = 0x40; // Color
			constexpr auto HighlightColor = 0x50; // Color
			constexpr auto index = 0x60; // int32_t
			constexpr auto State = 0x64; // bool
		}
		namespace ObjectRotation
		{
			constexpr auto cam = 0x18; // Camera
			constexpr auto ignoreNeedsKeyboard = 0x20; // bool
		}
		namespace OpenURL
		{
			constexpr auto OpenWebURL = 0x18; // bool
		}
		namespace PaintableImageGrid
		{
			constexpr auto templateImage = 0x18; // UIPaintableImage
			constexpr auto cols = 0x20; // int32_t
			constexpr auto rows = 0x24; // int32_t
			constexpr auto images = 0x28; // UIPaintableImage[,]
		}
		namespace UIPaintableImage
		{
			constexpr auto image = 0x18; // RawImage
			constexpr auto texSize = 0x20; // int32_t
			constexpr auto clearColor = 0x24; // Color
			constexpr auto filterMode = 0x34; // FilterMode
			constexpr auto mipmaps = 0x38; // bool
			constexpr auto imageNumber = 0x3C; // int32_t
			constexpr auto imageHash = 0x40; // uint32_t
			constexpr auto isLocked = 0x44; // bool
			constexpr auto isLoading = 0x45; // bool
			constexpr auto isBlank = 0x46; // bool
			constexpr auto needsApply = 0x47; // bool
			constexpr auto texture = 0x48; // Texture2D
		}
		namespace UIParticle
		{
			constexpr auto LifeTime = 0x18; // Vector2
			constexpr auto Gravity = 0x20; // Vector2
			constexpr auto InitialX = 0x28; // Vector2
			constexpr auto InitialY = 0x30; // Vector2
			constexpr auto InitialScale = 0x38; // Vector2
			constexpr auto InitialDelay = 0x40; // Vector2
			constexpr auto ScaleVelocity = 0x48; // Vector2
			constexpr auto InitialColor = 0x50; // Gradient
			constexpr auto lifetime = 0x58; // float
			constexpr auto gravity = 0x5C; // float
			constexpr auto velocity = 0x60; // Vector2
			constexpr auto scaleVelocity = 0x68; // float
		}
		namespace PerformanceText
		{
			constexpr auto text = 0x18; // TextMeshProUGUI
			constexpr auto sb = 0x20; // stringBuilder
			constexpr auto tick = 0x28; // Tick
		}
		namespace PieMenu
		{
			constexpr auto Instance = 0x0; // PieMenu
			constexpr auto middleBox = 0x18; // Image
			constexpr auto pieBackgroundBlur = 0x20; // PieShape
			constexpr auto pieBackground = 0x28; // PieShape
			constexpr auto pieSelection = 0x30; // PieShape
			constexpr auto pieOptionPrefab = 0x38; // GameObject
			constexpr auto optionsCanvas = 0x40; // GameObject
			constexpr auto options = 0x48; // MenuOption[]
			constexpr auto scaleTarget = 0x50; // GameObject
			constexpr auto arrowLeft = 0x58; // GameObject
			constexpr auto arrowRight = 0x60; // GameObject
			constexpr auto sliceGaps = 0x68; // float
			constexpr auto outerSize = 0x6C; // float
			constexpr auto innerSize = 0x70; // float
			constexpr auto iconSize = 0x74; // float
			constexpr auto startRadius = 0x78; // float
			constexpr auto radiusSize = 0x7C; // float
			constexpr auto middleImage = 0x80; // Image
			constexpr auto middleTitle = 0x88; // TextMeshProUGUI
			constexpr auto middleDesc = 0x90; // TextMeshProUGUI
			constexpr auto middleRequired = 0x98; // TextMeshProUGUI
			constexpr auto colorIconActive = 0xA0; // Color
			constexpr auto colorIconHovered = 0xB0; // Color
			constexpr auto colorIconDisabled = 0xC0; // Color
			constexpr auto colorBackgroundDisabled = 0xD0; // Color
			constexpr auto clipOpen = 0xE0; // SoundDefinition
			constexpr auto clipCancel = 0xE8; // SoundDefinition
			constexpr auto clipChanged = 0xF0; // SoundDefinition
			constexpr auto clipSelected = 0xF8; // SoundDefinition
			constexpr auto defaultOption = 0x100; // MenuOption
			constexpr auto isClosing = 0x108; // bool
			constexpr auto canvasGroup = 0x110; // CanvasGroup
			constexpr auto IsOpenk__BackingField = 0x118; // bool
			constexpr auto IconMaterial = 0x120; // Material
			constexpr auto selectedOption = 0x128; // MenuOption
			constexpr auto pieSelectionColor = 0x8; // Color
			constexpr auto middleImageColor = 0x18; // Color
			constexpr auto easePunch = 0x28; // AnimationCurve
		}
		namespace UISound
		{
			constexpr auto source = 0x0; // AudioSource
		}
		namespace PieOption
		{
			constexpr auto background = 0x18; // PieShape
			constexpr auto imageIcon = 0x20; // Image
			constexpr auto overlayIcon = 0x28; // Image
		}
		namespace PieShape
		{
			constexpr auto outerSize = 0x90; // float
			constexpr auto innerSize = 0x94; // float
			constexpr auto startRadius = 0x98; // float
			constexpr auto endRadius = 0x9C; // float
			constexpr auto border = 0xA0; // float
			constexpr auto debugDrawing = 0xA4; // bool
		}
		namespace PingManager
		{
			constexpr auto PingWidgetRef = 0x18; // GameObjectRef
			constexpr auto PingParent = 0x20; // RectTransform
			constexpr auto TeamPingParent = 0x28; // RectTransform
			constexpr auto AlphaCanvas = 0x30; // CanvasGroup
			constexpr auto spawnedWidgets = 0x38; // List`1
			constexpr auto spawnedTeamWidgets = 0x40; // List`1
			constexpr auto hoveredWidget = 0x48; // PingWidget
		}
		namespace PingWidget
		{
			constexpr auto MoveTransform = 0x18; // RectTransform
			constexpr auto ScaleTransform = 0x20; // RectTransform
			constexpr auto InnerImage = 0x28; // Image
			constexpr auto OuterImage = 0x30; // Image
			constexpr auto TeamLeaderRoot = 0x38; // GameObject
			constexpr auto CancelHoverRoot = 0x40; // GameObject
			constexpr auto PingDeploySoundHostile = 0x48; // SoundDefinition
			constexpr auto PingDeploySoundGoTo = 0x50; // SoundDefinition
			constexpr auto PingDeploySoundDollar = 0x58; // SoundDefinition
			constexpr auto PingDeploySoundLoot = 0x60; // SoundDefinition
			constexpr auto PingDeploySoundNode = 0x68; // SoundDefinition
			constexpr auto PingDeploySoundGun = 0x70; // SoundDefinition
			constexpr auto FadeCanvas = 0x78; // CanvasGroup
			constexpr auto cachedPing = 0x80; // MapNote
			constexpr auto PingIndexk__BackingField = 0x88; // int32_t
			constexpr auto extrapolatedTimeUntilDeath = 0x8C; // TimeUntil
		}
		namespace CameraEx
		{
			constexpr auto overrideAmbientLight = 0x18; // bool
			constexpr auto ambientMode = 0x1C; // AmbientMode
			constexpr auto ambientGroundColor = 0x20; // Color
			constexpr auto ambientEquatorColor = 0x30; // Color
			constexpr auto ambientLight = 0x40; // Color
			constexpr auto ambientIntensity = 0x50; // float
			constexpr auto reflectionProbe = 0x58; // ReflectionProbe
			constexpr auto old_ambientLight = 0x60; // Color
			constexpr auto old_ambientGroundColor = 0x70; // Color
			constexpr auto old_ambientEquatorColor = 0x80; // Color
			constexpr auto old_ambientIntensity = 0x90; // float
			constexpr auto old_ambientMode = 0x94; // AmbientMode
			constexpr auto aspect = 0x98; // float
		}
		namespace SegmentMaskPositioning
		{
			constexpr auto source = 0x18; // PlayerModel
			constexpr auto headMask = 0x20; // GameObject
			constexpr auto chestMask = 0x28; // GameObject
			constexpr auto legsMask = 0x30; // GameObject
			constexpr auto xOffset = 0x38; // float
			constexpr auto headRootBone = 0x40; // Transform
			constexpr auto headRootBoneId = 0x48; // int32_t
			constexpr auto chestRootBone = 0x50; // Transform
			constexpr auto chestRootBoneId = 0x58; // int32_t
		}
		namespace uiPlayerPreview
		{
			constexpr auto previewCamera = 0x18; // Camera
			constexpr auto playermodel = 0x20; // PlayerModel
			constexpr auto reflectionProbe = 0x28; // ReflectionProbe
			constexpr auto segmentMask = 0x30; // SegmentMaskPositioning
			constexpr auto FalseObject = 0x0; // Object
			constexpr auto TrueObject = 0x8; // Object
			constexpr auto needsUpdateFrom = 0x38; // BasePlayer
			constexpr auto postProcessLayer = 0x40; // PostProcessLayer
			constexpr auto wasOpen = 0x48; // bool
		}
		namespace UIPlayerPreviewControls
		{
			constexpr auto RotationSpeed = 0x18; // float
			constexpr auto RotationLerpSpeed = 0x1C; // float
			constexpr auto RotationStopLerpSpeed = 0x20; // float
			constexpr auto rotating = 0x24; // bool
			constexpr auto pointerInControlArea = 0x25; // bool
			constexpr auto rotationVelocity = 0x28; // float
			constexpr auto horizRotationPerc = 0x2C; // float
			constexpr auto startingRotation = 0x30; // float
			constexpr auto dragInputPos = 0x34; // Vector3
			constexpr auto currentDragInputPos = 0x40; // Vector3
			constexpr auto rotation = 0x4C; // Vector3
			constexpr auto previewModel = 0x58; // Transform
			constexpr auto canvasGroup = 0x60; // CanvasGroup
			constexpr auto showInventoryPlayer = 0x68; // bool
		}
		namespace PowerBar
		{
			constexpr auto Instance = 0x0; // PowerBar
			constexpr auto powerInner = 0x18; // Image
			constexpr auto fullSize = 0x20; // float
			constexpr auto group = 0x28; // CanvasGroup
			constexpr auto visible = 0x30; // bool
			constexpr auto progress = 0x34; // float
		}
		namespace UIInvertedMaskImage
		{
			constexpr auto cachedMaterial = 0x100; // Material
		}
		namespace ProgressBar
		{
			constexpr auto Instance = 0x0; // ProgressBar
			constexpr auto action = 0x18; // Action`1
			constexpr auto timeFinished = 0x20; // float
			constexpr auto timeCounter = 0x24; // float
			constexpr auto scaleTarget = 0x28; // GameObject
			constexpr auto progressField = 0x30; // Image
			constexpr auto iconField = 0x38; // Image
			constexpr auto leftField = 0x40; // Text
			constexpr auto rightField = 0x48; // Text
			constexpr auto clipOpen = 0x50; // SoundDefinition
			constexpr auto clipCancel = 0x58; // SoundDefinition
			constexpr auto isOpen = 0x60; // bool
			constexpr auto isClosing = 0x61; // bool
			constexpr auto canvasGroup = 0x68; // CanvasGroup
		}
		namespace ProgressBarUI
		{
			constexpr auto option = 0x0; // Option
			constexpr auto holdButton = 0x68; // ConButton
		}
		namespace RandomObjectEnableOnEnable
		{
			constexpr auto objects = 0x18; // GameObject[]
		}
		namespace RecordingBars
		{
			constexpr auto BorderImage = 0x18; // Image
		}
		namespace RecordingSaved
		{
			constexpr auto Label = 0x18; // RustText
		}
		namespace RepairCostIndicator
		{
			constexpr auto Rows = 0x18; // RepairCostIndicatorRow[]
			constexpr auto Fader = 0x20; // CanvasGroup
			constexpr auto showTime = 0x28; // TimeSince
		}
		namespace RepairCostIndicatorRow
		{
			constexpr auto ItemName = 0x18; // RustText
			constexpr auto ItemSprite = 0x20; // Image
			constexpr auto Amount = 0x28; // RustText
			constexpr auto FillRect = 0x30; // RectTransform
			constexpr auto BackgroundImage = 0x38; // Image
			constexpr auto OkColour = 0x40; // Color
			constexpr auto MissingColour = 0x50; // Color
		}
		namespace Scoreboard
		{
			constexpr auto instance = 0x0; // Scoreboard
			constexpr auto scoreboardTitle = 0x18; // RustText
			constexpr auto scoreboardRootContents = 0x20; // RectTransform
			constexpr auto scoreLimitText = 0x28; // RustText
			constexpr auto teamPrefab = 0x30; // GameObject
			constexpr auto columnPrefab = 0x38; // GameObject
			constexpr auto dividerPrefab = 0x40; // GameObject
			constexpr auto localPlayerColor = 0x48; // Color
			constexpr auto otherPlayerColor = 0x58; // Color
			constexpr auto teamColumns = 0x68; // TeamColumn[]
			constexpr auto TeamPanels = 0x70; // GameObject[]
			constexpr auto divider = 0x78; // GameObject
			constexpr auto dirty = 0x80; // bool
		}
		namespace ScrollRectDisable
		{
			constexpr auto wasVisible = 0x0; // bool
			constexpr auto targetRect = 0x18; // ScrollRect
		}
		namespace ScrollRectZoom
		{
			constexpr auto scrollRect = 0x18; // ScrollRectEx
			constexpr auto zoom = 0x20; // float
			constexpr auto max = 0x24; // float
			constexpr auto min = 0x28; // float
			constexpr auto mouseWheelZoom = 0x2C; // bool
			constexpr auto scrollAmount = 0x30; // float
		}
		namespace SleepingBagButton
		{
			constexpr auto TimeLockRoot = 0x18; // GameObject
			constexpr auto LockRoot = 0x20; // GameObject
			constexpr auto OccupiedRoot = 0x28; // GameObject
			constexpr auto ClickButton = 0x30; // Button
			constexpr auto BagName = 0x38; // TextMeshProUGUI
			constexpr auto LockTime = 0x40; // TextMeshProUGUI
			constexpr auto Icon = 0x48; // Image
			constexpr auto SleepingBagSprite = 0x50; // Sprite
			constexpr auto BedSprite = 0x58; // Sprite
			constexpr auto BeachTowelSprite = 0x60; // Sprite
			constexpr auto CamperSprite = 0x68; // Sprite
			constexpr auto CircleRim = 0x70; // Image
			constexpr auto CircleFill = 0x78; // Image
			constexpr auto Background = 0x80; // Image
			constexpr auto DeleteButton = 0x88; // RustButton
			constexpr auto ConfirmSlider = 0x90; // Image
			constexpr auto toastHoldToUnclaimBag = 0x0; // Phrase
			constexpr auto spawnOption = 0x98; // SpawnOptions
			constexpr auto releaseTime = 0xA0; // float
		}
		namespace SteamFriendsList
		{
			constexpr auto targetPanel = 0x18; // RectTransform
			constexpr auto userButton = 0x20; // SteamUserButton
			constexpr auto IncludeFriendsList = 0x28; // bool
			constexpr auto IncludeRecentlySeen = 0x29; // bool
			constexpr auto IncludeLastAttacker = 0x2A; // bool
			constexpr auto IncludeRecentlyPlayedWith = 0x2B; // bool
			constexpr auto ShowTeamFirst = 0x2C; // bool
			constexpr auto HideSteamIdsInStreamerMode = 0x2D; // bool
			constexpr auto RefreshOnEnable = 0x2E; // bool
			constexpr auto onFriendSelected = 0x30; // onFriendSelectedEvent
			constexpr auto shouldShowPlayer = 0x38; // Func`2
			constexpr auto playerList = 0x40; // List`1
			constexpr auto SeenList = 0x0; // List`1
		}
		namespace SteamUserButton
		{
			constexpr auto steamName = 0x18; // RustText
			constexpr auto steamInfo = 0x20; // RustText
			constexpr auto avatar = 0x28; // RawImage
			constexpr auto textColorInGame = 0x30; // Color
			constexpr auto textColorOnline = 0x40; // Color
			constexpr auto textColorNormal = 0x50; // Color
			constexpr auto SteamIdk__BackingField = 0x60; // UInt64
			constexpr auto Usernamek__BackingField = 0x68; // string
		}
		namespace TabToggle
		{
			constexpr auto TabHolder = 0x18; // Transform
			constexpr auto ContentHolder = 0x20; // Transform
			constexpr auto FadeIn = 0x28; // bool
			constexpr auto FadeOut = 0x29; // bool
		}
		namespace TeamMemberElement
		{
			constexpr auto nameText = 0x18; // RustText
			constexpr auto icon = 0x20; // RawImage
			constexpr auto onlineColor = 0x28; // Color
			constexpr auto offlineColor = 0x38; // Color
			constexpr auto deadColor = 0x48; // Color
			constexpr auto woundedColor = 0x58; // Color
			constexpr auto hoverOverlay = 0x68; // GameObject
			constexpr auto memberIcon = 0x70; // RawImage
			constexpr auto leaderIcon = 0x78; // RawImage
			constexpr auto deadIcon = 0x80; // RawImage
			constexpr auto woundedIcon = 0x88; // RawImage
			constexpr auto teamIndex = 0x90; // int32_t
		}
		namespace TeamUI
		{
			constexpr auto invitePhrase = 0x0; // Phrase
			constexpr auto MemberPanel = 0x18; // RectTransform
			constexpr auto memberEntryPrefab = 0x20; // GameObject
			constexpr auto elements = 0x28; // TeamMemberElement[]
			constexpr auto NoTeamPanel = 0x30; // GameObject
			constexpr auto TeamPanel = 0x38; // GameObject
			constexpr auto LeaveTeamButton = 0x40; // GameObject
			constexpr auto InviteAcceptPanel = 0x48; // GameObject
			constexpr auto inviteText = 0x50; // TextMeshProUGUI
			constexpr auto dirty = 0x8; // bool
			constexpr auto pendingTeamID = 0x10; // UInt64
			constexpr auto pendingTeamLeaderName = 0x18; // string
		}
		namespace TimeSlider
		{
			constexpr auto slider = 0x18; // Slider
		}
		namespace ToolsHUDUI
		{
			constexpr auto prefab = 0x18; // GameObject
			constexpr auto parent = 0x20; // Transform
			constexpr auto initialised = 0x28; // bool
		}
		namespace Tooltip
		{
			constexpr auto Current = 0x0; // TooltipContainer
			constexpr auto Text = 0x18; // string
			constexpr auto TooltipObject = 0x20; // GameObject
			constexpr auto token = 0x28; // string
			constexpr auto RegularPrefab = 0x8; // GameObject
			constexpr auto OnTopPrefab = 0x10; // GameObject
		}
		namespace TooltipContainer
		{
			constexpr auto ScaleRoot = 0x18; // Transform
			constexpr auto TooltipText = 0x20; // RustText
			constexpr auto Source = 0x28; // RectTransform
			constexpr auto corners = 0x30; // Vector3[]
			constexpr auto startFrame = 0x38; // int32_t
		}
		namespace TypeThroughButton
		{
			constexpr auto typingTarget = 0xF0; // InputField
			constexpr auto _processingEvent = 0xF8; // Event
		}
		namespace UIAutoPanelCloser
		{
			constexpr auto Dialog = 0x18; // UIDialog
		}
		namespace UIBackgroundBlur
		{
			constexpr auto amount = 0x18; // float
		}
		namespace UIBlackoutOverlay
		{
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto instances = 0x0; // Dictionary`2
			constexpr auto overlayType = 0x20; // blackoutType
			constexpr auto initialPosition = 0x24; // Vector3
			constexpr auto myAlpha = 0x30; // float
		}
		namespace UICameraOverlay
		{
			constexpr auto FocusOffText = 0x0; // Phrase
			constexpr auto FocusAutoText = 0x8; // Phrase
			constexpr auto FocusManualText = 0x10; // Phrase
			constexpr auto CanvasGroup = 0x18; // CanvasGroup
			constexpr auto FocusModeLabel = 0x20; // RustText
		}
		namespace UIConversationScreen
		{
			constexpr auto needsCursor = 0x18; // NeedsCursor
			constexpr auto conversationPanel = 0x20; // RectTransform
			constexpr auto conversationSpeechBody = 0x28; // RustText
			constexpr auto conversationProviderName = 0x30; // RustText
			constexpr auto responseButtons = 0x38; // RustButton[]
			constexpr auto letterBoxTop = 0x40; // RectTransform
			constexpr auto letterBoxBottom = 0x48; // RectTransform
			constexpr auto canvasGroup = 0x50; // CanvasGroup
			constexpr auto currentlyDisplayedSpeechIndex = 0x58; // int32_t
			constexpr auto visible = 0x5C; // bool
			constexpr auto layoutGroups = 0x60; // LayoutGroup[]
			constexpr auto wasTalking = 0x68; // bool
		}
		namespace UIDeathScreen
		{
			constexpr auto previousLifeInfographic = 0x18; // LifeInfographic
			constexpr auto screenAnimator = 0x20; // Animator
			constexpr auto fadeIn = 0x28; // bool
			constexpr auto ReportCheatButton = 0x30; // Button
			constexpr auto View = 0x38; // MapView
			constexpr auto sleepingBagButtons = 0x40; // List`1
			constexpr auto RespawnColourSchemes = 0x48; // RespawnColourScheme[]
			constexpr auto RespawnScrollGradient = 0x50; // GameObject
			constexpr auto RespawnScrollRect = 0x58; // ScrollRect
			constexpr auto ExpandedStats = 0x60; // ExpandedLifeStats
			constexpr auto StreamerModeContainer = 0x68; // CanvasGroup
			constexpr auto canvasGroup = 0x70; // CanvasGroup
			constexpr auto graphicRaycaster = 0x78; // GraphicRaycaster
			constexpr auto needsCursor = 0x80; // NeedsCursor
			constexpr auto visible = 0x88; // bool
			constexpr auto currentRespawnInfok__BackingField = 0x90; // RespawnInformation
			constexpr auto respawnInfoTimestampk__BackingField = 0x98; // float
		}
		namespace UIEscapeCapture
		{
			constexpr auto onEscape = 0x18; // UnityEvent
		}
		namespace UIFogOverlay
		{
			constexpr auto Instance = 0x0; // UIFogOverlay
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto baseColor = 0x20; // Color
			constexpr auto overlayImage = 0x30; // Image
		}
		namespace UIGene
		{
			constexpr auto Child = 0x18; // GameObject
			constexpr auto PositiveColour = 0x20; // Color
			constexpr auto NegativeColour = 0x30; // Color
			constexpr auto PositiveTextColour = 0x40; // Color
			constexpr auto NegativeTextColour = 0x50; // Color
			constexpr auto ImageBG = 0x60; // Image
			constexpr auto TextGene = 0x68; // Text
		}
		namespace UIGenesDisplay
		{
			constexpr auto GeneUI = 0x18; // UIGene[]
			constexpr auto TextLinks = 0x20; // Text[]
			constexpr auto TextDiagLinks = 0x28; // Text[]
		}
		namespace UIPixelDownscale
		{
			constexpr auto CanvasScaler = 0x18; // CanvasScaler
		}
		namespace UIPrefab
		{
			constexpr auto prefabSource = 0x18; // GameObject
			constexpr auto createdGameObject = 0x20; // GameObject
		}
		namespace UIRoot
		{
			constexpr auto graphicRaycasters = 0x18; // GraphicRaycaster[]
			constexpr auto overlayCanvas = 0x20; // Canvas
		}
		namespace UIRootScaled
		{
			constexpr auto Instance = 0x0; // UIRootScaled
			constexpr auto OverrideReference = 0x28; // bool
			constexpr auto TargetReference = 0x2C; // Vector2
			constexpr auto scaler = 0x38; // CanvasScaler
		}
		namespace UIScale
		{
			constexpr auto scaler = 0x18; // CanvasScaler
		}
		namespace UIScalerOverride
		{
			constexpr auto scaleCurve = 0x18; // AnimationCurve
			constexpr auto rootScaler = 0x20; // CanvasScaler
			constexpr auto rootCanvas = 0x28; // Canvas
			constexpr auto defaultScale = 0x30; // Vector3
		}
		namespace UIScopeOverlay
		{
			constexpr auto group = 0x18; // CanvasGroup
			constexpr auto instance = 0x0; // UIScopeOverlay
			constexpr auto scopeImage = 0x20; // Image
			constexpr auto initialPosition = 0x28; // Vector3
		}
		namespace UISleepingScreen
		{
			constexpr auto canvasGroup = 0x18; // CanvasGroup
			constexpr auto visible = 0x20; // bool
		}
		namespace UIVoiceIcon
		{
			constexpr auto nameText = 0x18; // Text
			constexpr auto avatar = 0x20; // RawImage
		}
		namespace UIWounded
		{
			constexpr auto group = 0x18; // CanvasGroup
		}
		namespace UI_LocalVoice
		{
			constexpr auto voiceCanvas = 0x18; // CanvasGroup
			constexpr auto levelImage = 0x20; // CanvasGroup
		}
		namespace DragMe
		{
			constexpr auto dragging = 0x0; // DragMe
			constexpr auto dragIcon = 0x8; // GameObject
			constexpr auto data = 0x10; // Object
			constexpr auto dragType = 0x18; // string
		}
		namespace DragMeCustomParent
		{
			constexpr auto OverrideCanvas = 0x20; // Canvas
			constexpr auto ShouldCancelOnDrop = 0x28; // bool
		}
		namespace DropMe
		{
			constexpr auto droppableTypes = 0x18; // string[]
		}
		namespace LocalizeText
		{
			constexpr auto token = 0x18; // string
			constexpr auto english = 0x20; // string
			constexpr auto append = 0x28; // string
			constexpr auto specialMode = 0x30; // SpecialMode
			constexpr auto Tokens = 0x38; // Object[]
		}
		namespace RightClickReceiver
		{
			constexpr auto ClickReceiver = 0x18; // UnityEvent
		}
		namespace ShowIfConvarEnabled
		{
			constexpr auto Convar = 0x18; // string
			constexpr auto _initialized = 0x20; // bool
			constexpr auto _cmd = 0x28; // Command
		}
		namespace VitalInfo
		{
			constexpr auto Element = 0x18; // HudElement
			constexpr auto InfoImage = 0x20; // Image
			constexpr auto VitalType = 0x28; // Vital
			constexpr auto text = 0x30; // TextMeshProUGUI
			constexpr auto show = 0x38; // bool
		}
		namespace VitalNote
		{
			constexpr auto VitalType = 0x18; // Vital
			constexpr auto showIf = 0x20; // FloatConditions
			constexpr auto valueText = 0x28; // TextMeshProUGUI
			constexpr auto lastValue = 0x30; // float
			constexpr auto lastPrintedValue = 0x34; // float
			constexpr auto show = 0x38; // bool
		}
		namespace VitalNoteOxygen
		{
			constexpr auto refreshTime = 0x18; // float
			constexpr auto valueText = 0x20; // TextMeshProUGUI
			constexpr auto animator = 0x28; // Animator
			constexpr auto airIcon = 0x30; // Image
			constexpr auto airIconTr = 0x38; // RectTransform
			constexpr auto backgroundImage = 0x40; // Image
			constexpr auto baseColour = 0x48; // Color
			constexpr auto badColour = 0x58; // Color
			constexpr auto iconImage = 0x68; // Image
			constexpr auto iconBaseColour = 0x70; // Color
			constexpr auto iconBadColour = 0x80; // Color
			constexpr auto show = 0x90; // bool
			constexpr auto timeSinceLastRefresh = 0x94; // TimeSince
		}
		namespace BaseCommandBuffer
		{
			constexpr auto cameras = 0x18; // Dictionary`2
		}
		namespace BaseScriptableObject
		{
			constexpr auto FilenameStringId = 0x18; // uint32_t
		}
		namespace InspectorNameAttribute
		{
			constexpr auto name = 0x10; // string
		}
		namespace MinMax
		{
			constexpr auto x = 0x10; // float
			constexpr auto y = 0x14; // float
		}
		namespace MinMaxAttribute
		{
			constexpr auto min = 0x10; // float
			constexpr auto max = 0x14; // float
			constexpr auto min_ = 0x10; // float
			constexpr auto max_ = 0x14; // float
		}
		namespace AmbientLightLOD
		{
			constexpr auto isDynamic = 0x18; // bool
			constexpr auto enabledRadius = 0x1C; // float
			constexpr auto toggleFade = 0x20; // bool
			constexpr auto toggleFadeDuration = 0x24; // float
			constexpr auto lightComponent = 0x28; // Light
			constexpr auto lightOccludee = 0x30; // LightOccludee
			constexpr auto lightEx = 0x38; // LightEx
			constexpr auto volumetricBeam = 0x40; // VolumetricLightBeam
			constexpr auto cell = 0x48; // LODCell
			constexpr auto targetIntensity = 0x50; // float
			constexpr auto targetFadeDuration = 0x54; // float
			constexpr auto EnvironmentMode = 0x58; // LODEnvironmentMode
			constexpr auto fadeStartTime = 0x5C; // float
			constexpr auto fadeEndTime = 0x60; // float
			constexpr auto fadeToState = 0x64; // bool
			constexpr auto queuedState = 0x65; // bool
		}
		namespace BasePrefab
		{
			constexpr auto prefabID = 0x18; // uint32_t
			constexpr auto isClient = 0x1C; // bool
		}
		namespace CachedTransform
		{
			constexpr auto component = 0x0; // T
			constexpr auto position = 0x0; // Vector3
			constexpr auto rotation = 0x0; // Quaternion
			constexpr auto localScale = 0x0; // Vector3
		}
		namespace CameraUpdateHook
		{
			constexpr auto PreCull = 0x0; // Action
			constexpr auto PreRender = 0x8; // Action
			constexpr auto PostRender = 0x10; // Action
			constexpr auto RustCamera_PreRender = 0x18; // Action
		}
		namespace ChildrenScreenshot
		{
			constexpr auto offsetAngle = 0x18; // Vector3
			constexpr auto width = 0x24; // int32_t
			constexpr auto height = 0x28; // int32_t
			constexpr auto fieldOfView = 0x2C; // float
			constexpr auto folder = 0x30; // string
		}
		namespace CommentComponent
		{
			constexpr auto comment = 0x18; // string
		}
		namespace ConvarComponent
		{
			constexpr auto runOnServer = 0x18; // bool
			constexpr auto runOnClient = 0x19; // bool
			constexpr auto List = 0x20; // List`1
		}
		namespace ConvarWater
		{
			constexpr auto water = 0x18; // WaterSystem
			constexpr auto water_quality = 0x20; // Command
		}
		namespace DistanceFlareLOD
		{
			constexpr auto isDynamic = 0x18; // bool
			constexpr auto minEnabledDistance = 0x1C; // float
			constexpr auto maxEnabledDistance = 0x20; // float
			constexpr auto toggleFade = 0x24; // bool
			constexpr auto toggleFadeDuration = 0x28; // float
			constexpr auto cell = 0x30; // LODCell
			constexpr auto flareRenderer = 0x38; // Renderer
			constexpr auto flareIntensity = 0x40; // float
			constexpr auto fadeIntensity = 0x44; // float
			constexpr auto startColor = 0x48; // Color
			constexpr auto emissionColorID = 0x0; // int32_t
			constexpr auto block = 0x8; // MaterialPropertyBlock
			constexpr auto EnvironmentMode = 0x58; // LODEnvironmentMode
			constexpr auto fadeStartTime = 0x5C; // float
			constexpr auto fadeEndTime = 0x60; // float
			constexpr auto fadeToState = 0x64; // bool
			constexpr auto queuedState = 0x65; // bool
		}
		namespace ExecComponent
		{
			constexpr auto ExecToRun = 0x18; // string
		}
		namespace IgnoreCollision
		{
			constexpr auto collider = 0x18; // Collider
		}
		namespace LayerCullDistance
		{
			constexpr auto Layer = 0x18; // string
			constexpr auto Distance = 0x20; // float
		}
		namespace LightLOD
		{
			constexpr auto DistanceBias = 0x18; // float
			constexpr auto ToggleLight = 0x1C; // bool
			constexpr auto ToggleShadows = 0x1D; // bool
			constexpr auto pointLights = 0x0; // List`1
			constexpr auto spotLights = 0x8; // List`1
			constexpr auto lightComponent = 0x20; // Light
			constexpr auto lightOccludee = 0x28; // LightOccludee
			constexpr auto lightEx = 0x30; // LightEx
			constexpr auto volumetricBeam = 0x38; // VolumetricLightBeam
			constexpr auto cameraDist = 0x40; // float
			constexpr auto fadeSign = 0x44; // float
			constexpr auto maxLightIntensity = 0x48; // float
			constexpr auto shadowIntensity = 0x4C; // float
			constexpr auto registered = 0x10; // ListHashSet`1
			constexpr auto UpdatePerFrame = 0x18; // int32_t
			constexpr auto updateIndex = 0x1C; // int32_t
		}
		namespace LightOccludee
		{
			constexpr auto RadiusScale = 0x18; // float
			constexpr auto MinTimeVisible = 0x1C; // float
			constexpr auto IsDynamic = 0x20; // bool
			constexpr auto light = 0x28; // Light
			constexpr auto lightEx = 0x30; // LightEx
			constexpr auto volumetricBeam = 0x38; // VolumetricLightBeam
			constexpr auto occludee = 0x40; // OccludeeSphere
			constexpr auto lodVisible = 0x60; // bool
			constexpr auto volumeVisible = 0x61; // bool
			constexpr auto occludeeCulled = 0x62; // bool
		}
		namespace LoadBalancer
		{
			constexpr auto Paused = 0x0; // bool
			constexpr auto queues = 0x18; // Queue`1[]
			constexpr auto watch = 0x20; // Stopwatch
		}
		namespace ActionPriority
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DeferredAction
		{
			constexpr auto sender = 0x10; // Object
			constexpr auto action = 0x18; // Action
			constexpr auto priority = 0x20; // ActionPriority
			constexpr auto Idlek__BackingField = 0x24; // bool
		}
		namespace MaterialConfig
		{
			constexpr auto Floats = 0x18; // ShaderParametersFloat[]
			constexpr auto Colors = 0x20; // ShaderParametersColor[]
			constexpr auto Textures = 0x28; // ShaderParametersTexture[]
			constexpr auto ScaleUV = 0x30; // string[]
			constexpr auto properties = 0x38; // MaterialPropertyBlock
		}
		namespace MaterialSetup
		{
			constexpr auto config = 0x18; // MaterialConfig
		}
		namespace MeshToggle
		{
			constexpr auto RendererMeshes = 0x18; // Mesh[]
			constexpr auto ColliderMeshes = 0x20; // Mesh[]
		}
		namespace MoveForward
		{
			constexpr auto Speed = 0x18; // float
		}
		namespace NetworkSleep
		{
			constexpr auto totalBehavioursDisabled = 0x0; // int32_t
			constexpr auto totalCollidersDisabled = 0x4; // int32_t
			constexpr auto behaviours = 0x18; // Behaviour[]
			constexpr auto colliders = 0x20; // Collider[]
			constexpr auto BehavioursDisabled = 0x28; // int32_t
			constexpr auto CollidersDisabled = 0x2C; // int32_t
		}
		namespace ObjectFlasher
		{
			constexpr auto enabledObj = 0x18; // GameObject
			constexpr auto disabledObj = 0x20; // GameObject
			constexpr auto toggleLength = 0x28; // float
			constexpr auto timeOffset = 0x2C; // float
			constexpr auto randomOffset = 0x30; // float
		}
		namespace ParticleSystemContainer
		{
			constexpr auto precached = 0x18; // bool
			constexpr auto particleGroups = 0x20; // ParticleSystemGroup[]
		}
		namespace ParticleSystemIK
		{
			constexpr auto system = 0x18; // ParticleSystem
			constexpr auto job = 0x20; // ParticleSystemIKJob
		}
		namespace PerformanceSamplePoint
		{
			constexpr auto UpdateCount = 0x0; // int32_t
			constexpr auto FixedUpdateCount = 0x4; // int32_t
			constexpr auto RenderCount = 0x8; // int32_t
			constexpr auto PreCull = 0x10; // TimeSpan
			constexpr auto Update = 0x18; // TimeSpan
			constexpr auto LateUpdate = 0x20; // TimeSpan
			constexpr auto Render = 0x28; // TimeSpan
			constexpr auto FixedUpdate = 0x30; // TimeSpan
			constexpr auto NetworkMessage = 0x38; // TimeSpan
			constexpr auto TotalCPU = 0x40; // TimeSpan
			constexpr auto CpuUpdateCount = 0x48; // int32_t
		}
		namespace PerformanceMetrics
		{
			constexpr auto current = 0x0; // PerformanceSamplePoint
			constexpr auto OnBeforeRender = 0x50; // Action
			constexpr auto _mainThreadId = 0x58; // int32_t
		}
		namespace PostUpdateHook
		{
			constexpr auto OnUpdate = 0x0; // Action
			constexpr auto OnLateUpdate = 0x8; // Action
			constexpr auto OnFixedUpdate = 0x10; // Action
		}
		namespace PerformanceSample
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PrefabAttribute
		{
			constexpr auto worldPosition = 0x18; // Vector3
			constexpr auto worldRotation = 0x24; // Quaternion
			constexpr auto worldForward = 0x34; // Vector3
			constexpr auto localPosition = 0x40; // Vector3
			constexpr auto localScale = 0x4C; // Vector3
			constexpr auto localRotation = 0x58; // Quaternion
			constexpr auto fullName = 0x68; // string
			constexpr auto hierachyName = 0x70; // string
			constexpr auto prefabID = 0x78; // uint32_t
			constexpr auto instanceID = 0x7C; // int32_t
			constexpr auto prefabAttribute = 0x80; // Library
			constexpr auto gameManager = 0x88; // GameManager
			constexpr auto isServer = 0x90; // bool
			constexpr auto client = 0x0; // Library
		}
		namespace RigidbodyInfo
		{
			constexpr auto mass = 0x98; // float
			constexpr auto drag = 0x9C; // float
			constexpr auto angularDrag = 0xA0; // float
		}
		namespace PreUpdateHook
		{
			constexpr auto OnUpdate = 0x0; // Action
			constexpr auto OnLateUpdate = 0x8; // Action
			constexpr auto OnFixedUpdate = 0x10; // Action
		}
		namespace RotateCameraAroundObject
		{
			constexpr auto m_goObjectToRotateAround = 0x18; // GameObject
			constexpr auto m_flRotateSpeed = 0x20; // float
		}
		namespace Screenshot
		{
			constexpr auto screenshotPath = 0x18; // string
			constexpr auto sizeMultiplier = 0x20; // int32_t
			constexpr auto TakingScreenshot = 0x0; // bool
			constexpr auto HiResScreenshotCustomWidth = 0x4; // int32_t
			constexpr auto takingScreenshot = 0x24; // bool
			constexpr auto savePathName = 0x28; // string
		}
		namespace StartOfFrameHook
		{
			constexpr auto OnStartOfFrame = 0x0; // Action
		}
		namespace UpdateBehaviour
		{
			constexpr auto lastUpdate = 0x18; // float
			constexpr auto nextUpdate = 0x1C; // float
		}
		namespace UpdateHandler
		{
			constexpr auto list = 0x18; // ListHashSet`1
		}
		namespace VisualiseTrigger
		{
			constexpr auto colour = 0x18; // Color
		}
		namespace BoundsEx
		{
			constexpr auto pts = 0x0; // Vector3[]
		}
		namespace RendererEx
		{
			constexpr auto ArrayCache = 0x0; // Memoized`2
		}
		namespace StreamEx
		{
			constexpr auto StaticBuffer = 0x0; // char[]
		}
		namespace DistanceField
		{
			constexpr auto GaussOffsets = 0x0; // int32_t[]
			constexpr auto GaussWeights = 0x8; // float[]
		}
		namespace InstancingContainer
		{
			constexpr auto capacity = 0x10; // int32_t
			constexpr auto buffers = 0x18; // ListDictionary`2
		}
		namespace InstancingBuffer
		{
			constexpr auto matrices = 0x10; // BufferList`1
			constexpr auto mesh = 0x18; // Mesh
			constexpr auto material = 0x20; // Material
			constexpr auto submeshIndex = 0x28; // int32_t
			constexpr auto shaderPass = 0x2C; // int32_t
		}
		namespace InstancingKey
		{
			constexpr auto mesh = 0x0; // Mesh
			constexpr auto submeshIndex = 0x8; // int32_t
			constexpr auto material = 0x10; // Material
			constexpr auto shaderPass = 0x18; // int32_t
		}
		namespace ProcessedTexture
		{
			constexpr auto result = 0x10; // RenderTexture
			constexpr auto material = 0x18; // Material
		}
		namespace sRGB
		{
			constexpr auto to_linear = 0x0; // char[]
			constexpr auto to_srgb = 0x8; // char[]
		}
		namespace Craptography
		{
			constexpr auto hash = 0x0; // char[]
		}
		namespace FixedRateStepped
		{
			constexpr auto rate = 0x10; // float
			constexpr auto maxSteps = 0x14; // int32_t
			constexpr auto nextCall = 0x18; // float
		}
		namespace FloatConditions
		{
			constexpr auto conditions = 0x10; // Condition[]
		}
		namespace FoliageGridMeshData
		{
			constexpr auto vertices = 0x10; // List`1
			constexpr auto triangles = 0x18; // List`1
			constexpr auto bounds = 0x20; // Bounds
		}
		namespace FoliageGridBatch
		{
			constexpr auto position = 0x28; // Vector3
			constexpr auto meshBatch = 0x38; // Mesh
			constexpr auto meshFilter = 0x40; // MeshFilter
			constexpr auto meshRenderer = 0x48; // MeshRenderer
			constexpr auto meshData = 0x50; // FoliageGridMeshData
			constexpr auto meshGroup = 0x58; // MeshGroup
		}
		namespace GlobalMessages
		{
			constexpr auto onInventoryChanged = 0x0; // ListHashSet`1
			constexpr auto OnInventoryChangedAction = 0x8; // Action
			constexpr auto onViewModeChanged = 0x10; // ListHashSet`1
			constexpr auto OnViewModeChangedAction = 0x18; // Action
			constexpr auto onClothingChanged = 0x20; // ListHashSet`1
			constexpr auto OnClothingChangedAction = 0x28; // Action
			constexpr auto onViewModelUpdated = 0x30; // ListHashSet`1
			constexpr auto OnViewModelUpdatedAction = 0x38; // Action
			constexpr auto onBlueprintsChanged = 0x40; // ListHashSet`1
			constexpr auto OnBlueprintsChangedAction = 0x48; // Action
			constexpr auto onItemAmountChanged = 0x50; // ListHashSet`1
			constexpr auto OnItemAmountChangedAction = 0x58; // Action
			constexpr auto onItemIconChanged = 0x60; // ListHashSet`1
			constexpr auto OnItemIconChangedAction = 0x68; // Action
		}
		namespace HierarchyUtil
		{
			constexpr auto rootDict = 0x0; // Dictionary`2
		}
		namespace LocalClock
		{
			constexpr auto events = 0x10; // List`1
		}
		namespace MeshBatch
		{
			constexpr auto NeedsRefreshk__BackingField = 0x18; // bool
			constexpr auto Countk__BackingField = 0x1C; // int32_t
			constexpr auto BatchedCountk__BackingField = 0x20; // int32_t
			constexpr auto VertexCountk__BackingField = 0x24; // int32_t
		}
		namespace MeshDataBatch
		{
			constexpr auto position = 0x28; // Vector3
			constexpr auto meshBatch = 0x38; // Mesh
			constexpr auto meshFilter = 0x40; // MeshFilter
			constexpr auto meshRenderer = 0x48; // MeshRenderer
			constexpr auto meshData = 0x50; // MeshData
			constexpr auto meshGroup = 0x58; // MeshGroup
		}
		namespace MeshRendererBatch
		{
			constexpr auto position = 0x28; // Vector3
			constexpr auto meshBatch = 0x38; // Mesh
			constexpr auto meshFilter = 0x40; // MeshFilter
			constexpr auto meshRenderer = 0x48; // MeshRenderer
			constexpr auto meshData = 0x50; // MeshRendererData
			constexpr auto meshGroup = 0x58; // MeshRendererGroup
			constexpr auto meshLookup = 0x60; // MeshRendererLookup
		}
		namespace PathFinder
		{
			constexpr auto costmap = 0x10; // int32_t[,]
			constexpr auto visited = 0x18; // int32_t[,]
			constexpr auto neighbors = 0x20; // Point[]
			constexpr auto directional = 0x28; // bool
			constexpr auto PushPoint = 0x2C; // Point
			constexpr auto PushRadius = 0x34; // int32_t
			constexpr auto PushDistance = 0x38; // int32_t
			constexpr auto PushMultiplier = 0x3C; // int32_t
			constexpr auto mooreNeighbors = 0x0; // Point[]
			constexpr auto neumannNeighbors = 0x8; // Point[]
		}
		namespace PathInterpolator
		{
			constexpr auto Points = 0x10; // Vector3[]
			constexpr auto Tangents = 0x18; // Vector3[]
			constexpr auto MinIndexk__BackingField = 0x20; // int32_t
			constexpr auto MaxIndexk__BackingField = 0x24; // int32_t
			constexpr auto Lengthk__BackingField = 0x28; // float
			constexpr auto StepSizek__BackingField = 0x2C; // float
			constexpr auto Circulark__BackingField = 0x30; // bool
			constexpr auto initialized = 0x31; // bool
		}
		namespace PooledList
		{
			constexpr auto data = 0x0; // List`1
		}
		namespace RadixSorter
		{
			constexpr auto histogram = 0x10; // uint32_t[]
			constexpr auto offset = 0x18; // uint32_t[]
		}
		namespace RealTimeSinceEx
		{
			constexpr auto time = 0x0; // Double
		}
		namespace SimpleList
		{
			constexpr auto emptyArray = 0x0; // T[]
			constexpr auto array = 0x0; // T[]
			constexpr auto count = 0x0; // int32_t
		}
		namespace SynchronizedClock
		{
			constexpr auto events = 0x10; // List`1
		}
		namespace TickInterpolator
		{
			constexpr auto points = 0x10; // List`1
			constexpr auto index = 0x18; // int32_t
			constexpr auto Length = 0x1C; // float
			constexpr auto CurrentPoint = 0x20; // Vector3
			constexpr auto StartPoint = 0x2C; // Vector3
			constexpr auto EndPoint = 0x38; // Vector3
		}
		namespace TimeCachedValue
		{
			constexpr auto refreshCooldown = 0x0; // float
			constexpr auto refreshRandomRange = 0x0; // float
			constexpr auto updateValue = 0x0; // Func`1
			constexpr auto cachedValue = 0x0; // T
			constexpr auto cooldown = 0x0; // TimeSince
			constexpr auto hasRun = 0x0; // bool
			constexpr auto forceNextRun = 0x0; // bool
		}
		namespace Timing
		{
			constexpr auto sw = 0x0; // Stopwatch
			constexpr auto name = 0x8; // string
		}
		namespace WorldSpline
		{
			constexpr auto dataIndex = 0x18; // int32_t
			constexpr auto points = 0x20; // Vector3[]
			constexpr auto tangents = 0x28; // Vector3[]
			constexpr auto lutInterval = 0x30; // float
			constexpr auto showGizmos = 0x34; // bool
			constexpr auto visualSplineList = 0x0; // List`1
			constexpr auto privateData = 0x38; // WorldSplineData
		}
		namespace WorldSplineData
		{
			constexpr auto inputPoints = 0x10; // Vector3[]
			constexpr auto inputTangents = 0x18; // Vector3[]
			constexpr auto inputLUTInterval = 0x20; // float
			constexpr auto LUTValues = 0x28; // List`1
			constexpr auto Length = 0x30; // float
			constexpr auto maxPointsIndex = 0x34; // int32_t
		}
		namespace WorldSplineSharedData
		{
			constexpr auto dataList = 0x18; // List`1
			constexpr auto instance = 0x0; // WorldSplineSharedData
			constexpr auto worldSplineFolders = 0x8; // string[]
		}
		namespace FixedShort3
		{
			constexpr auto x = 0x0; // Int16
			constexpr auto y = 0x2; // Int16
			constexpr auto z = 0x4; // Int16
		}
		namespace FixedSByteNorm3
		{
			constexpr auto x = 0x0; // Schar
			constexpr auto y = 0x1; // Schar
			constexpr auto z = 0x2; // Schar
		}
		namespace FixedSByteNorm4
		{
			constexpr auto x = 0x0; // Schar
			constexpr auto y = 0x1; // Schar
			constexpr auto z = 0x2; // Schar
			constexpr auto w = 0x3; // Schar
		}
		namespace Half3
		{
			constexpr auto x = 0x0; // UInt16
			constexpr auto y = 0x2; // UInt16
			constexpr auto z = 0x4; // UInt16
		}
		namespace Half4
		{
			constexpr auto x = 0x0; // UInt16
			constexpr auto y = 0x2; // UInt16
			constexpr auto z = 0x4; // UInt16
			constexpr auto w = 0x6; // UInt16
		}
		namespace Poolable
		{
			constexpr auto prefabID = 0x18; // uint32_t
			constexpr auto behaviours = 0x20; // Behaviour[]
			constexpr auto rigidbodies = 0x28; // Rigidbody[]
			constexpr auto colliders = 0x30; // Collider[]
			constexpr auto lodgroups = 0x38; // LODGroup[]
			constexpr auto renderers = 0x40; // Renderer[]
			constexpr auto particles = 0x48; // ParticleSystem[]
			constexpr auto behaviourStates = 0x50; // bool[]
			constexpr auto rigidbodyStates = 0x58; // bool[]
			constexpr auto colliderStates = 0x60; // bool[]
			constexpr auto lodgroupStates = 0x68; // bool[]
			constexpr auto rendererStates = 0x70; // bool[]
		}
		namespace PrefabPool
		{
			constexpr auto stack = 0x10; // Stack`1
		}
		namespace PrefabPoolCollection
		{
			constexpr auto storage = 0x10; // Dictionary`2
		}
		namespace LayerSelect
		{
			constexpr auto layer = 0x0; // int32_t
		}
		namespace NetworkedProperty
		{
			constexpr auto val = 0x0; // T
			constexpr auto entity = 0x0; // BaseEntity
		}
		namespace ResourceRef
		{
			constexpr auto guid = 0x0; // string
			constexpr auto _cachedObject = 0x0; // T
		}
		namespace AlternateAttack
		{
			constexpr auto random = 0x18; // bool
			constexpr auto dontIncrement = 0x19; // bool
			constexpr auto targetTransitions = 0x20; // string[]
		}
		namespace BaseViewModel
		{
			constexpr auto HideViewmodel = 0x0; // bool
			constexpr auto GestureModel = 0x8; // BaseViewModel
			constexpr auto ActiveModels = 0x10; // List`1
			constexpr auto lazyaimRegular = 0x18; // LazyAimProperties
			constexpr auto lazyaimIronsights = 0x20; // LazyAimProperties
			constexpr auto pivot = 0x28; // Transform
			constexpr auto useViewModelCamera = 0x30; // bool
			constexpr auto wantsHeldItemFlags = 0x31; // bool
			constexpr auto hideSightMeshes = 0x38; // GameObject[]
			constexpr auto isGestureViewModel = 0x40; // bool
			constexpr auto MuzzlePoint = 0x48; // Transform
			constexpr auto subsurfaceProfile = 0x50; // SubsurfaceProfile
			constexpr auto animator = 0x58; // Animator
			constexpr auto animationEvent = 0x60; // AnimationEvents
			constexpr auto ironSights = 0x68; // IronSights
			constexpr auto sway = 0x70; // ViewmodelSway
			constexpr auto lower = 0x78; // ViewmodelLower
			constexpr auto bob = 0x80; // ViewmodelBob
			constexpr auto punch = 0x88; // ViewmodelPunch
			constexpr auto aspectOffset = 0x90; // ViewmodelAspectOffset
			constexpr auto mountedAnchor = 0x98; // ViewmodelMountedAnchor
			constexpr auto model = 0xA0; // Model
			constexpr auto gestureHide = 0x18; // bool
			constexpr auto gestureHideTime = 0x1C; // TimeSince
			constexpr auto gestureCollection = 0x20; // GestureCollection
			constexpr auto aimHelperRoot = 0x28; // GameObject
			constexpr auto Skeleton = 0xA8; // Skeleton
			constexpr auto Clothing = 0xB0; // GameObject
			constexpr auto workshopMode = 0xB8; // bool
		}
		namespace FishingRodViewmodel
		{
			constexpr auto PitchTransform = 0x18; // Transform
			constexpr auto YawTransform = 0x20; // Transform
			constexpr auto YawLerpSpeed = 0x28; // float
			constexpr auto PitchLerpSpeed = 0x2C; // float
			constexpr auto LineRendererStartPos = 0x30; // Transform
			constexpr auto StrainParticles = 0x38; // ParticleSystem[]
			constexpr auto ApplyTransformRotation = 0x40; // bool
			constexpr auto CatchRoot = 0x48; // GameObject
			constexpr auto CatchLinePoint = 0x50; // Transform
			constexpr auto FishViewmodels = 0x58; // FishViewmodel[]
			constexpr auto ShakeMaxScale = 0x60; // float
			constexpr auto InputStateX_Param = 0x0; // int32_t
			constexpr auto InputStateY_Param = 0x4; // int32_t
			constexpr auto lerpedInputState = 0x64; // Vector2
		}
		namespace flamethrowerState
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace flamethrowerFire
		{
			constexpr auto pilotLightFX = 0x18; // ParticleSystem
			constexpr auto flameFX = 0x20; // ParticleSystem[]
			constexpr auto jet = 0x28; // FlameJet
			constexpr auto oneShotSound = 0x30; // AudioSource
			constexpr auto loopSound = 0x38; // AudioSource
			constexpr auto pilotlightIdle = 0x40; // AudioClip
			constexpr auto flameLoop = 0x48; // AudioClip
			constexpr auto flameStart = 0x50; // AudioClip
			constexpr auto flameState = 0x58; // flamethrowerState
			constexpr auto previousflameState = 0x5C; // flamethrowerState
		}
		namespace IronsightAimPoint
		{
			constexpr auto targetPoint = 0x18; // Transform
		}
		namespace IronSightOverride
		{
			constexpr auto aimPoint = 0x18; // IronsightAimPoint
			constexpr auto fieldOfViewOffset = 0x20; // float
			constexpr auto zoomFactor = 0x24; // float
			constexpr auto fovBias = 0x28; // float
		}
		namespace IronSights
		{
			constexpr auto Enabled = 0x18; // bool
			constexpr auto aimPoint = 0x20; // IronsightAimPoint
			constexpr auto fieldOfViewOffset = 0x28; // float
			constexpr auto zoomFactor = 0x2C; // float
			constexpr auto introSpeed = 0x30; // float
			constexpr auto introCurve = 0x38; // AnimationCurve
			constexpr auto outroSpeed = 0x40; // float
			constexpr auto outroCurve = 0x48; // AnimationCurve
			constexpr auto upSound = 0x50; // SoundDefinition
			constexpr auto downSound = 0x58; // SoundDefinition
			constexpr auto ironsightsOverride = 0x60; // IronSightOverride
			constexpr auto processUltrawideOffset = 0x68; // bool
			constexpr auto animator = 0x70; // Animator
			constexpr auto param_ironsightstrength = 0x78; // int32_t
			constexpr auto param_ironsightsEnabled = 0x7C; // int32_t
			constexpr auto delta = 0x80; // float
			constexpr auto rawDelta = 0x84; // float
			constexpr auto maxDelta = 0x88; // float
			constexpr auto positionOffset = 0x8C; // Vector3
			constexpr auto rotationOffset = 0x98; // Quaternion
			constexpr auto currentCurve = 0xA8; // AnimationCurve
		}
		namespace RagdollEditor
		{
			constexpr auto view = 0x18; // Vector3
			constexpr auto grabbedRigid = 0x28; // Rigidbody
			constexpr auto grabPos = 0x30; // Vector3
			constexpr auto grabOffset = 0x3C; // Vector3
		}
		namespace RandomParameterNumber
		{
			constexpr auto parameterName = 0x18; // string
			constexpr auto min = 0x20; // int32_t
			constexpr auto max = 0x24; // int32_t
			constexpr auto preventRepetition = 0x28; // bool
			constexpr auto isFloat = 0x29; // bool
			constexpr auto last = 0x2C; // int32_t
		}
		namespace RandomParameterNumberFloat
		{
			constexpr auto parameterName = 0x18; // string
			constexpr auto min = 0x20; // int32_t
			constexpr auto max = 0x24; // int32_t
		}
		namespace SwapArrows
		{
			constexpr auto arrowModels = 0x18; // GameObject[]
			constexpr auto curAmmoType = 0x20; // string
			constexpr auto wasHidden = 0x28; // bool
		}
		namespace SwapKeycard
		{
			constexpr auto accessLevels = 0x18; // GameObject[]
		}
		namespace SwapRPG
		{
			constexpr auto rpgModels = 0x18; // GameObject[]
			constexpr auto curAmmoType = 0x20; // string
		}
		namespace ViewmodelAspectOffset
		{
			constexpr auto OffsetAmount = 0x18; // Vector3
			constexpr auto aspectCutoff = 0x24; // float
		}
		namespace ViewmodelAttachment
		{
			constexpr auto modelObject = 0x20; // GameObjectRef
			constexpr auto targetBone = 0x28; // string
			constexpr auto hideViewModelIronSights = 0x30; // bool
			constexpr auto spawnedGameObject = 0x38; // GameObject
			constexpr auto cachedFlagUpdate = 0x40; // BaseEntity
		}
		namespace ViewmodelBob
		{
			constexpr auto bobSpeedWalk = 0x18; // float
			constexpr auto bobSpeedRun = 0x1C; // float
			constexpr auto bobAmountWalk = 0x20; // float
			constexpr auto bobAmountRun = 0x24; // float
			constexpr auto leftOffsetRun = 0x28; // float
			constexpr auto bobAmountRotateYaw = 0x2C; // float
			constexpr auto bobAmountRotateRoll = 0x30; // float
			constexpr auto velocity = 0x34; // Vector3
			constexpr auto bobOffset = 0x40; // Vector3
			constexpr auto bobRotateYaw = 0x4C; // float
			constexpr auto bobRotateRoll = 0x50; // float
			constexpr auto bobCycle = 0x54; // float
			constexpr auto smoothedBob = 0x58; // BobSettings
		}
		namespace ViewModelCamera
		{
			constexpr auto _PreviousVP = 0x18; // int32_t
			constexpr auto _NonJitteredVP = 0x1C; // int32_t
			constexpr auto _WorldSpaceCameraPos = 0x20; // int32_t
			constexpr auto _HasLastPositionData = 0x24; // int32_t
			constexpr auto _CurrentM = 0x28; // int32_t
			constexpr auto _PreviousM = 0x2C; // int32_t
			constexpr auto _WorldSpaceLightPos0 = 0x30; // int32_t
			constexpr auto _LightColor0 = 0x34; // int32_t
			constexpr auto unity_SHAr = 0x38; // int32_t
			constexpr auto unity_SHAg = 0x3C; // int32_t
			constexpr auto unity_SHAb = 0x40; // int32_t
			constexpr auto unity_SHBr = 0x44; // int32_t
			constexpr auto unity_SHBg = 0x48; // int32_t
			constexpr auto unity_SHBb = 0x4C; // int32_t
			constexpr auto unity_SHC = 0x50; // int32_t
			constexpr auto ambient_SHAr = 0x54; // int32_t
			constexpr auto ambient_SHAg = 0x58; // int32_t
			constexpr auto ambient_SHAb = 0x5C; // int32_t
			constexpr auto ambient_SHBr = 0x60; // int32_t
			constexpr auto ambient_SHBg = 0x64; // int32_t
			constexpr auto ambient_SHBb = 0x68; // int32_t
			constexpr auto ambient_SHC = 0x6C; // int32_t
			constexpr auto global_MainLightingAtten = 0x70; // int32_t
			constexpr auto global_SkyReflection = 0x74; // int32_t
			constexpr auto global_SkyReflection_HDR = 0x78; // int32_t
			constexpr auto Instance = 0x0; // ViewModelCamera
			constexpr auto afterGBufferEvents = 0x80; // ListHashSet`1
			constexpr auto afterForwardAlphaDrawEvents = 0x88; // ListHashSet`1
			constexpr auto utilsMaterial = 0x90; // Material
			constexpr auto stencilPassID = 0x98; // int32_t
			constexpr auto motionPassID = 0x9C; // int32_t
			constexpr auto blockDepthPassID = 0xA0; // int32_t
			constexpr auto clearDepthPassID = 0xA4; // int32_t
			constexpr auto commandBufferManager = 0xA8; // CommandBufferManager
			constexpr auto onBeforeGBufferDesc = 0xB0; // CommandBufferDesc
			constexpr auto onAfterGBufferDesc = 0xB8; // CommandBufferDesc
			constexpr auto onBeforeImageEffectsOpaqueDesc = 0xC0; // CommandBufferDesc
			constexpr auto onAfterForwardAlphaDesc = 0xC8; // CommandBufferDesc
			constexpr auto previousViewProjectionMatrix = 0xD0; // Matrix4x4
		}
		namespace RenderType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ViewModelDrawEvent
		{
			constexpr auto viewModelRenderer = 0x0; // ViewModelRenderer
			constexpr auto renderer = 0x8; // Renderer
			constexpr auto skipDepthPrePass = 0x10; // bool
			constexpr auto material = 0x18; // Material
			constexpr auto subMesh = 0x20; // int32_t
			constexpr auto pass = 0x24; // int32_t
		}
		namespace ViewModelRenderer
		{
			constexpr auto cachedTextureRefs = 0x18; // List`1
			constexpr auto opaqueEvents = 0x20; // List`1
			constexpr auto transparentEvents = 0x28; // List`1
			constexpr auto prevModelMatrix = 0x30; // Matrix4x4
			constexpr auto viewModelRenderer = 0x70; // Renderer
		}
		namespace ViewmodelEditor
		{
			constexpr auto view = 0x18; // Vector3
			constexpr auto meleeHit = 0x24; // bool
		}
		namespace ViewmodelIk
		{
			constexpr auto TargetAnimator = 0x18; // Animator
			constexpr auto leftHandTarget = 0x20; // Transform
			constexpr auto rightHandTarget = 0x28; // Transform
		}
		namespace ViewmodelLower
		{
			constexpr auto lowerOnSprint = 0x18; // bool
			constexpr auto lowerWhenCantAttack = 0x19; // bool
			constexpr auto lowerScale = 0x1C; // float
			constexpr auto shouldLower = 0x20; // bool
			constexpr auto rotateAngle = 0x24; // float
			constexpr auto updatePlayer = 0x28; // BasePlayer
		}
		namespace ViewmodelMountedAnchor
		{
			constexpr auto IkController = 0x18; // ViewmodelIk
		}
		namespace ViewmodelPunch
		{
			constexpr auto punchScale = 0x18; // AnimationCurve
			constexpr auto punchDirection = 0x20; // Vector3
			constexpr auto punchDuration = 0x2C; // float
			constexpr auto punchMagnitude = 0x30; // float
			constexpr auto punchStartTime = 0x34; // float
		}
		namespace ViewmodelSway
		{
			constexpr auto positionalSwaySpeed = 0x18; // float
			constexpr auto positionalSwayAmount = 0x1C; // float
			constexpr auto rotationSwaySpeed = 0x20; // float
			constexpr auto rotationSwayAmount = 0x24; // float
			constexpr auto lastPosition = 0x28; // Vector3
			constexpr auto smoothedVelocity = 0x34; // Vector3
			constexpr auto lastRotation = 0x40; // Vector3
			constexpr auto smoothedRotation = 0x4C; // Vector3
			constexpr auto rotateAmountTest = 0x58; // float
		}
		namespace AmplifyOcclusionBase
		{
			constexpr auto ApplyMethod = 0x18; // ApplicationMethod
			constexpr auto SampleCount = 0x1C; // SampleCountLevel
			constexpr auto PerPixelNormals = 0x20; // PerPixelNormalSource
			constexpr auto Intensity = 0x24; // float
			constexpr auto Tint = 0x28; // Color
			constexpr auto Radius = 0x38; // float
			constexpr auto PixelRadiusLimit = 0x3C; // int32_t
			constexpr auto RadiusIntensity = 0x40; // float
			constexpr auto PowerExponent = 0x44; // float
			constexpr auto Bias = 0x48; // float
			constexpr auto Thickness = 0x4C; // float
			constexpr auto Downsample = 0x50; // bool
			constexpr auto FadeEnabled = 0x51; // bool
			constexpr auto FadeStart = 0x54; // float
			constexpr auto FadeLength = 0x58; // float
			constexpr auto FadeToIntensity = 0x5C; // float
			constexpr auto FadeToTint = 0x60; // Color
			constexpr auto FadeToRadius = 0x70; // float
			constexpr auto FadeToPowerExponent = 0x74; // float
			constexpr auto FadeToThickness = 0x78; // float
			constexpr auto BlurEnabled = 0x7C; // bool
			constexpr auto BlurRadius = 0x80; // int32_t
			constexpr auto BlurPasses = 0x84; // int32_t
			constexpr auto BlurSharpness = 0x88; // float
			constexpr auto FilterEnabled = 0x8C; // bool
			constexpr auto FilterBlending = 0x90; // float
			constexpr auto FilterResponse = 0x94; // float
			constexpr auto TemporalDirections = 0x98; // bool
			constexpr auto TemporalOffsets = 0x99; // bool
			constexpr auto TemporalDilation = 0x9A; // bool
			constexpr auto UseMotionVectors = 0x9B; // bool
			constexpr auto m_prevPerPixelNormals = 0x9C; // PerPixelNormalSource
			constexpr auto m_prevApplyMethod = 0xA0; // ApplicationMethod
			constexpr auto m_prevDeferredReflections = 0xA4; // bool
			constexpr auto m_prevSampleCount = 0xA8; // SampleCountLevel
			constexpr auto m_prevDownsample = 0xAC; // bool
			constexpr auto m_prevBlurEnabled = 0xAD; // bool
			constexpr auto m_prevBlurRadius = 0xB0; // int32_t
			constexpr auto m_prevBlurPasses = 0xB4; // int32_t
			constexpr auto m_targetCamera = 0xB8; // Camera
			constexpr auto applyDebugTargetsTemporal = 0xC0; // RenderTargetIdentifier[]
			constexpr auto applyPostEffectTargetsTemporal = 0xC8; // RenderTargetIdentifier[]
			constexpr auto applyDeferredTargets_Log_Temporal = 0xD0; // RenderTargetIdentifier[]
			constexpr auto applyDeferredTargetsTemporal = 0xD8; // RenderTargetIdentifier[]
			constexpr auto m_commandBuffer_Occlusion = 0xE0; // CmdBuffer
			constexpr auto m_commandBuffer_Apply = 0xF8; // CmdBuffer
			constexpr auto m_quadMesh = 0x0; // Mesh
			constexpr auto m_occlusionMat = 0x8; // Material
			constexpr auto m_blurMat = 0x10; // Material
			constexpr auto m_applyOcclusionMat = 0x18; // Material
			constexpr auto m_occlusionRTFormat = 0x110; // RenderTextureFormat
			constexpr auto m_accumTemporalRTFormat = 0x114; // RenderTextureFormat
			constexpr auto m_temporaryEmissionRTFormat = 0x118; // RenderTextureFormat
			constexpr auto m_paramsChanged = 0x11C; // bool
			constexpr auto m_occlusionDepthRT = 0x120; // RenderTexture
			constexpr auto m_temporalAccumRT = 0x128; // RenderTexture[]
			constexpr auto m_sampleStep = 0x130; // uint32_t
			constexpr auto m_curStepIdx = 0x134; // uint32_t
			constexpr auto m_maxSampleSteps = 0x20; // uint32_t
			constexpr auto PerPixelNormalSourceCount = 0x24; // int32_t
			constexpr auto m_prevViewProjMatrixLeft = 0x138; // Matrix4x4
			constexpr auto m_prevInvViewProjMatrixLeft = 0x178; // Matrix4x4
			constexpr auto m_prevViewProjMatrixRight = 0x1B8; // Matrix4x4
			constexpr auto m_prevInvViewProjMatrixRight = 0x1F8; // Matrix4x4
			constexpr auto m_temporalRotations = 0x28; // float[]
			constexpr auto m_spatialOffsets = 0x30; // float[]
			constexpr auto m_applyDeferredTargets = 0x238; // RenderTargetIdentifier[]
			constexpr auto m_applyDeferredTargets_Log = 0x240; // RenderTargetIdentifier[]
			constexpr auto m_target = 0x248; // TargetDesc
		}
		namespace UVTextureAnimator
		{
			constexpr auto Rows = 0x18; // int32_t
			constexpr auto Columns = 0x1C; // int32_t
			constexpr auto Fps = 0x20; // float
			constexpr auto OffsetMat = 0x24; // int32_t
			constexpr auto IsLoop = 0x28; // bool
			constexpr auto StartDelay = 0x2C; // float
			constexpr auto isInizialised = 0x30; // bool
			constexpr auto index = 0x34; // int32_t
			constexpr auto count = 0x38; // int32_t
			constexpr auto allCount = 0x3C; // int32_t
			constexpr auto deltaFps = 0x40; // float
			constexpr auto isVisible = 0x44; // bool
			constexpr auto isCorutineStarted = 0x45; // bool
			constexpr auto currentRenderer = 0x48; // Renderer
			constexpr auto instanceMaterial = 0x50; // Material
		}
		namespace CoverageQueries
		{
			constexpr auto depthBias = 0x18; // float
			constexpr auto pool = 0x0; // List`1
			constexpr auto added = 0x8; // List`1
			constexpr auto reused = 0x10; // List`1
			constexpr auto removed = 0x18; // List`1
			constexpr auto changed = 0x20; // List`1
			constexpr auto freed = 0x28; // Queue`1
			constexpr auto buffer = 0x30; // BufferSet
			constexpr auto camera = 0x20; // Camera
			constexpr auto coverageMat = 0x28; // Material
			constexpr auto instance = 0x38; // CoverageQueries
			constexpr auto _debugShow = 0x40; // bool
			constexpr auto debug = 0x30; // bool
		}
		namespace runtimeScript
		{
			constexpr auto roadNetwork = 0x18; // ERRoadNetwork
			constexpr auto road = 0x20; // ERRoad
			constexpr auto go = 0x28; // GameObject
			constexpr auto currentElement = 0x30; // int32_t
			constexpr auto distance = 0x34; // float
			constexpr auto speed = 0x38; // float
		}
		namespace FXAA
		{
			constexpr auto shader = 0x20; // Shader
			constexpr auto mat = 0x28; // Material
		}
		namespace FXAAPostEffectsBase
		{
			constexpr auto supportHDRTextures = 0x18; // bool
			constexpr auto isSupported = 0x19; // bool
		}
		namespace Explosion_Bloom
		{
			constexpr auto settings = 0x18; // Settings
			constexpr auto m_Shader = 0x30; // Shader
			constexpr auto m_Material = 0x38; // Material
			constexpr auto m_blurBuffer1 = 0x40; // RenderTexture[]
			constexpr auto m_blurBuffer2 = 0x48; // RenderTexture[]
			constexpr auto m_Threshold = 0x50; // int32_t
			constexpr auto m_Curve = 0x54; // int32_t
			constexpr auto m_PrefilterOffs = 0x58; // int32_t
			constexpr auto m_SampleScale = 0x5C; // int32_t
			constexpr auto m_Intensity = 0x60; // int32_t
			constexpr auto m_BaseTex = 0x64; // int32_t
		}
		namespace ExplosionDemoGUI
		{
			constexpr auto Prefabs = 0x18; // GameObject[]
			constexpr auto reactivateTime = 0x20; // float
			constexpr auto Sun = 0x28; // Light
			constexpr auto currentNomber = 0x30; // int32_t
			constexpr auto currentInstance = 0x38; // GameObject
			constexpr auto guiStyleHeader = 0x40; // GUIStyle
			constexpr auto sunIntensity = 0x48; // float
			constexpr auto dpiScale = 0x4C; // float
		}
		namespace ExplosionDemoReactivator
		{
			constexpr auto TimeDelayToReactivate = 0x18; // float
		}
		namespace ExplosionPlatformActivator
		{
			constexpr auto Effect = 0x18; // GameObject
			constexpr auto TimeDelay = 0x20; // float
			constexpr auto DefaultRepeatTime = 0x24; // float
			constexpr auto NearRepeatTime = 0x28; // float
			constexpr auto currentTime = 0x2C; // float
			constexpr auto currentRepeatTime = 0x30; // float
			constexpr auto canUpdate = 0x34; // bool
		}
		namespace ExplosionsFPS
		{
			constexpr auto guiStyleHeader = 0x18; // GUIStyle
			constexpr auto timeleft = 0x20; // float
			constexpr auto fps = 0x24; // float
			constexpr auto frames = 0x28; // int32_t
		}
		namespace ExplosionsBillboard
		{
			constexpr auto Camera = 0x18; // Camera
			constexpr auto Active = 0x20; // bool
			constexpr auto AutoInitCamera = 0x21; // bool
			constexpr auto myContainer = 0x28; // GameObject
			constexpr auto t = 0x30; // Transform
			constexpr auto camT = 0x38; // Transform
			constexpr auto contT = 0x40; // Transform
		}
		namespace ExplosionsDeactivateRendererByTime
		{
			constexpr auto TimeDelay = 0x18; // float
			constexpr auto rend = 0x20; // Renderer
		}
		namespace ExplosionsLightCurves
		{
			constexpr auto LightCurve = 0x18; // AnimationCurve
			constexpr auto GraphTimeMultiplier = 0x20; // float
			constexpr auto GraphIntensityMultiplier = 0x24; // float
			constexpr auto canUpdate = 0x28; // bool
			constexpr auto startTime = 0x2C; // float
			constexpr auto lightSource = 0x30; // Light
		}
		namespace ExplosionsParticleSystemScaler
		{
			constexpr auto particlesScale = 0x18; // float
		}
		namespace ExplosionsScaleCurves
		{
			constexpr auto ScaleCurveX = 0x18; // AnimationCurve
			constexpr auto ScaleCurveY = 0x20; // AnimationCurve
			constexpr auto ScaleCurveZ = 0x28; // AnimationCurve
			constexpr auto GraphTimeMultiplier = 0x30; // Vector3
			constexpr auto GraphScaleMultiplier = 0x3C; // Vector3
			constexpr auto startTime = 0x48; // float
			constexpr auto t = 0x50; // Transform
			constexpr auto evalX = 0x58; // float
			constexpr auto evalY = 0x5C; // float
			constexpr auto evalZ = 0x60; // float
		}
		namespace ExplosionsShaderColorGradient
		{
			constexpr auto ShaderProperty = 0x18; // string
			constexpr auto MaterialID = 0x20; // int32_t
			constexpr auto Color = 0x28; // Gradient
			constexpr auto TimeMultiplier = 0x30; // float
			constexpr auto canUpdate = 0x34; // bool
			constexpr auto matInstance = 0x38; // Material
			constexpr auto propertyID = 0x40; // int32_t
			constexpr auto startTime = 0x44; // float
			constexpr auto oldColor = 0x48; // Color
		}
		namespace ExplosionsShaderFloatCurves
		{
			constexpr auto ShaderProperty = 0x18; // string
			constexpr auto MaterialID = 0x20; // int32_t
			constexpr auto FloatPropertyCurve = 0x28; // AnimationCurve
			constexpr auto GraphTimeMultiplier = 0x30; // float
			constexpr auto GraphScaleMultiplier = 0x34; // float
			constexpr auto canUpdate = 0x38; // bool
			constexpr auto matInstance = 0x40; // Material
			constexpr auto propertyID = 0x48; // int32_t
			constexpr auto startTime = 0x4C; // float
		}
		namespace ExplosionsShaderQueue
		{
			constexpr auto AddQueue = 0x18; // int32_t
			constexpr auto rend = 0x20; // Renderer
		}
		namespace ExplosionsSpriteSheetAnimation
		{
			constexpr auto TilesX = 0x18; // int32_t
			constexpr auto TilesY = 0x1C; // int32_t
			constexpr auto AnimationFPS = 0x20; // float
			constexpr auto IsInterpolateFrames = 0x24; // bool
			constexpr auto StartFrameOffset = 0x28; // int32_t
			constexpr auto IsLoop = 0x2C; // bool
			constexpr auto StartDelay = 0x30; // float
			constexpr auto FrameOverTime = 0x38; // AnimationCurve
			constexpr auto isInizialised = 0x40; // bool
			constexpr auto index = 0x44; // int32_t
			constexpr auto count = 0x48; // int32_t
			constexpr auto allCount = 0x4C; // int32_t
			constexpr auto animationLifeTime = 0x50; // float
			constexpr auto isVisible = 0x54; // bool
			constexpr auto isCorutineStarted = 0x55; // bool
			constexpr auto currentRenderer = 0x58; // Renderer
			constexpr auto instanceMaterial = 0x60; // Material
			constexpr auto currentInterpolatedTime = 0x68; // float
			constexpr auto animationStartTime = 0x6C; // float
			constexpr auto animationStoped = 0x70; // bool
		}
		namespace NGSS_Directional
		{
			constexpr auto PCSS_GLOBAL_SOFTNESS = 0x18; // float
			constexpr auto PCSS_FILTER_DIR_MIN = 0x1C; // float
			constexpr auto PCSS_FILTER_DIR_MAX = 0x20; // float
			constexpr auto BANDING_NOISE_AMOUNT = 0x24; // float
			constexpr auto SAMPLERS_COUNT = 0x28; // SAMPLER_COUNT
		}
		namespace OccludeeSphere
		{
			constexpr auto id = 0x0; // int32_t
			constexpr auto state = 0x8; // OccludeeState
			constexpr auto sphere = 0x10; // Sphere
		}
		namespace OccludeeState
		{
			constexpr auto slot = 0x18; // int32_t
			constexpr auto isStatic = 0x1C; // bool
			constexpr auto layer = 0x20; // int32_t
			constexpr auto onVisibilityChanged = 0x28; // OnVisibilityChanged
			constexpr auto cell = 0x30; // Cell
			constexpr auto states = 0x38; // SimpleList`1
		}
		namespace Occludee
		{
			constexpr auto minTimeVisible = 0x18; // float
			constexpr auto isStatic = 0x1C; // bool
			constexpr auto autoRegister = 0x1D; // bool
			constexpr auto stickyGizmos = 0x1E; // bool
			constexpr auto state = 0x20; // OccludeeState
			constexpr auto occludeeId = 0x28; // int32_t
			constexpr auto center = 0x2C; // Vector3
			constexpr auto radius = 0x38; // float
			constexpr auto renderer = 0x40; // Renderer
			constexpr auto collider = 0x48; // Collider
		}
		namespace OcclusionCulling
		{
			constexpr auto computeShader = 0x18; // ComputeShader
			constexpr auto usePixelShaderFallback = 0x20; // bool
			constexpr auto useAsyncReadAPI = 0x21; // bool
			constexpr auto camera = 0x28; // Camera
			constexpr auto statePool = 0x0; // Queue`1
			constexpr auto staticOccludees = 0x8; // SimpleList`1
			constexpr auto staticStates = 0x10; // SimpleList`1
			constexpr auto staticVisibilityChanged = 0x18; // SimpleList`1
			constexpr auto dynamicOccludees = 0x20; // SimpleList`1
			constexpr auto dynamicStates = 0x28; // SimpleList`1
			constexpr auto dynamicVisibilityChanged = 0x30; // SimpleList`1
			constexpr auto staticChanged = 0x38; // List`1
			constexpr auto staticRecycled = 0x40; // Queue`1
			constexpr auto dynamicChanged = 0x48; // List`1
			constexpr auto dynamicRecycled = 0x50; // Queue`1
			constexpr auto staticSet = 0x58; // BufferSet
			constexpr auto dynamicSet = 0x60; // BufferSet
			constexpr auto gridSet = 0x68; // BufferSet
			constexpr auto frustumPlanes = 0x30; // Vector4[]
			constexpr auto frustumPropNames = 0x38; // string[]
			constexpr auto matrixToFloatTemp = 0x40; // float[]
			constexpr auto fallbackMat = 0x48; // Material
			constexpr auto depthCopyMat = 0x50; // Material
			constexpr auto viewMatrix = 0x58; // Matrix4x4
			constexpr auto projMatrix = 0x98; // Matrix4x4
			constexpr auto viewProjMatrix = 0xD8; // Matrix4x4
			constexpr auto prevViewProjMatrix = 0x118; // Matrix4x4
			constexpr auto invViewProjMatrix = 0x158; // Matrix4x4
			constexpr auto useNativePath = 0x198; // bool
			constexpr auto instance = 0x70; // OcclusionCulling
			constexpr auto supportedDeviceTypes = 0x78; // GraphicsDeviceType[]
			constexpr auto _enabled = 0x80; // bool
			constexpr auto _safeMode = 0x81; // bool
			constexpr auto _debugShow = 0x84; // DebugFilter
			constexpr auto debugSettings = 0x1A0; // DebugSettings
			constexpr auto debugMipMat = 0x1A8; // Material
			constexpr auto downscaleMat = 0x1B0; // Material
			constexpr auto blitCopyMat = 0x1B8; // Material
			constexpr auto hiZLevelCount = 0x1C0; // int32_t
			constexpr auto hiZWidth = 0x1C4; // int32_t
			constexpr auto hiZHeight = 0x1C8; // int32_t
			constexpr auto depthTexture = 0x1D0; // RenderTexture
			constexpr auto hiZTexture = 0x1D8; // RenderTexture
			constexpr auto hiZLevels = 0x1E0; // RenderTexture[]
			constexpr auto grid = 0x88; // HashedPool`1
			constexpr auto gridChanged = 0x90; // Queue`1
		}
		namespace SEScreenSpaceShadows
		{
			constexpr auto blendShadowsCommandBuffer = 0x18; // CommandBuffer
			constexpr auto renderShadowsCommandBuffer = 0x20; // CommandBuffer
			constexpr auto attachedCamera = 0x28; // Camera
			constexpr auto sun = 0x30; // Light
			constexpr auto blendStrength = 0x38; // float
			constexpr auto accumulation = 0x3C; // float
			constexpr auto lengthFade = 0x40; // float
			constexpr auto range = 0x44; // float
			constexpr auto zThickness = 0x48; // float
			constexpr auto samples = 0x4C; // int32_t
			constexpr auto nearSampleQuality = 0x50; // float
			constexpr auto traceBias = 0x54; // float
			constexpr auto stochasticSampling = 0x58; // bool
			constexpr auto leverageTemporalAA = 0x59; // bool
			constexpr auto bilateralBlur = 0x5A; // bool
			constexpr auto blurPasses = 0x5C; // int32_t
			constexpr auto blurDepthTolerance = 0x60; // float
			constexpr auto material = 0x68; // Material
			constexpr auto initChecker = 0x70; // Object
			constexpr auto sunInitialized = 0x78; // bool
			constexpr auto temporalJitterCounter = 0x7C; // int32_t
			constexpr auto previousBilateralBlurSetting = 0x80; // bool
			constexpr auto previousBlurPassesSetting = 0x84; // int32_t
			constexpr auto noBlendTex = 0x88; // Texture2D
		}
		namespace MeshHolder
		{
			constexpr auto _vertices = 0x10; // Vector3[]
			constexpr auto _normals = 0x18; // Vector3[]
			constexpr auto _triangles = 0x20; // int32_t[]
			constexpr auto _TrianglesOfSubs = 0x28; // trisPerSubmesh[]
			constexpr auto _bindPoses = 0x30; // Matrix4x4[]
			constexpr auto _boneWeights = 0x38; // BoneWeight[]
			constexpr auto _bounds = 0x40; // Bounds
			constexpr auto _subMeshCount = 0x58; // int32_t
			constexpr auto _tangents = 0x60; // Vector4[]
			constexpr auto _uv = 0x68; // Vector2[]
			constexpr auto _uv2 = 0x70; // Vector2[]
			constexpr auto _uv3 = 0x78; // Vector2[]
			constexpr auto _colors = 0x80; // Color[]
			constexpr auto _uv4 = 0x88; // Vector2[]
		}
		namespace trisPerSubmesh
		{
			constexpr auto triangles = 0x10; // int32_t[]
		}
		namespace VertexColorAnimator
		{
			constexpr auto animationMeshes = 0x18; // List`1
			constexpr auto animationKeyframes = 0x20; // List`1
			constexpr auto timeScale = 0x28; // float
			constexpr auto mode = 0x2C; // int32_t
			constexpr auto elapsedTime = 0x30; // float
		}
		namespace VertexColorStream
		{
			constexpr auto originalMesh = 0x18; // Mesh
			constexpr auto paintedMesh = 0x20; // Mesh
			constexpr auto meshHold = 0x28; // MeshHolder
			constexpr auto _vertices = 0x30; // Vector3[]
			constexpr auto _normals = 0x38; // Vector3[]
			constexpr auto _triangles = 0x40; // int32_t[]
			constexpr auto _Subtriangles = 0x48; // int32_t[][]
			constexpr auto _bindPoses = 0x50; // Matrix4x4[]
			constexpr auto _boneWeights = 0x58; // BoneWeight[]
			constexpr auto _bounds = 0x60; // Bounds
			constexpr auto _subMeshCount = 0x78; // int32_t
			constexpr auto _tangents = 0x80; // Vector4[]
			constexpr auto _uv = 0x88; // Vector2[]
			constexpr auto _uv2 = 0x90; // Vector2[]
			constexpr auto _uv3 = 0x98; // Vector2[]
			constexpr auto _colors = 0xA0; // Color[]
			constexpr auto _uv4 = 0xA8; // Vector2[]
		}
		namespace VisualizeTexelDensity
		{
			constexpr auto shader = 0x18; // Shader
			constexpr auto shaderTag = 0x20; // string
			constexpr auto texelsPerMeter = 0x28; // int32_t
			constexpr auto overlayOpacity = 0x2C; // float
			constexpr auto showHUD = 0x30; // bool
			constexpr auto mainCamera = 0x38; // Camera
			constexpr auto initialized = 0x40; // bool
			constexpr auto screenWidth = 0x44; // int32_t
			constexpr auto screenHeight = 0x48; // int32_t
			constexpr auto texelDensityCamera = 0x50; // Camera
			constexpr auto texelDensityRT = 0x58; // RenderTexture
			constexpr auto texelDensityGradTex = 0x60; // Texture
			constexpr auto texelDensityOverlayMat = 0x68; // Material
			constexpr auto instance = 0x0; // VisualizeTexelDensity
		}
		namespace ViewmodelClothing
		{
			constexpr auto SkeletonSkins = 0x18; // SkeletonSkin[]
		}
		namespace WorkshopIconRender
		{
			constexpr auto MinimumId = 0x18; // int32_t
			constexpr auto MaximumId = 0x1C; // int32_t
		}
		namespace BeamGeometry
		{
			constexpr auto m_Master = 0x18; // VolumetricLightBeam
			constexpr auto m_ColorGradientMatrix = 0x20; // Matrix4x4
			constexpr auto m_CurrentMeshType = 0x60; // MeshType
			constexpr auto meshRendererk__BackingField = 0x68; // MeshRenderer
			constexpr auto meshFilterk__BackingField = 0x70; // MeshFilter
			constexpr auto materialk__BackingField = 0x78; // Material
			constexpr auto coneMeshk__BackingField = 0x80; // Mesh
		}
		namespace Config
		{
			constexpr auto geometryLayerID = 0x18; // int32_t
			constexpr auto geometryTag = 0x20; // string
			constexpr auto geometryRenderQueue = 0x28; // int32_t
			constexpr auto forceSinglePass = 0x2C; // bool
			constexpr auto beamShader1Pass = 0x30; // Shader
			constexpr auto beamShader2Pass = 0x38; // Shader
			constexpr auto sharedMeshSides = 0x40; // int32_t
			constexpr auto sharedMeshSegments = 0x44; // int32_t
			constexpr auto globalNoiseScale = 0x48; // float
			constexpr auto globalNoiseVelocity = 0x4C; // Vector3
			constexpr auto noise3DData = 0x58; // TextAsset
			constexpr auto noise3DSize = 0x60; // int32_t
			constexpr auto dustParticlesPrefab = 0x68; // ParticleSystem
			constexpr auto m_Instance = 0x0; // Config
		}
		namespace Consts
		{
			constexpr auto ProceduralObjectsVisibleInEditor = 0x0; // bool
			constexpr auto FlatColor = 0x4; // Color
			constexpr auto NoiseVelocityDefault = 0x14; // Vector3
			constexpr auto BlendingMode_SrcFactor = 0x20; // BlendMode[]
			constexpr auto BlendingMode_DstFactor = 0x28; // BlendMode[]
			constexpr auto BlendingMode_AlphaAsBlack = 0x30; // bool[]
		}
		namespace DynamicOcclusion
		{
			constexpr auto layerMask = 0x18; // LayerMask
			constexpr auto minOccluderArea = 0x1C; // float
			constexpr auto waitFrameCount = 0x20; // int32_t
			constexpr auto minSurfaceRatio = 0x24; // float
			constexpr auto maxSurfaceDot = 0x28; // float
			constexpr auto planeAlignment = 0x2C; // PlaneAlignment
			constexpr auto planeOffset = 0x30; // float
			constexpr auto m_Master = 0x38; // VolumetricLightBeam
			constexpr auto m_FrameCountToWait = 0x40; // int32_t
			constexpr auto m_RangeMultiplier = 0x44; // float
			constexpr auto m_PrevNonSubHitDirectionId = 0x48; // uint32_t
		}
		namespace ColorMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AttenuationEquation
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace BlendingMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace MeshType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace RenderQueue
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PlaneAlignment
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace GlobalMesh
		{
			constexpr auto ms_Mesh = 0x0; // Mesh
		}
		namespace Noise3D
		{
			constexpr auto ms_IsSupportedChecked = 0x0; // bool
			constexpr auto ms_IsSupported = 0x1; // bool
			constexpr auto ms_NoiseTexture = 0x8; // Texture3D
		}
		namespace TriggerZone
		{
			constexpr auto setIsTrigger = 0x18; // bool
			constexpr auto rangeMultiplier = 0x1C; // float
			constexpr auto m_Mesh = 0x20; // Mesh
		}
		namespace Utils
		{
			constexpr auto ms_FloatPackingPrecision = 0x0; // FloatPackingPrecision
		}
		namespace VolumetricDustParticles
		{
			constexpr auto alpha = 0x18; // float
			constexpr auto size = 0x1C; // float
			constexpr auto direction = 0x20; // Direction
			constexpr auto speed = 0x24; // float
			constexpr auto density = 0x28; // float
			constexpr auto spawnMaxDistance = 0x2C; // float
			constexpr auto cullingEnabled = 0x30; // bool
			constexpr auto cullingMaxDistance = 0x34; // float
			constexpr auto isCulledk__BackingField = 0x38; // bool
			constexpr auto isFeatureSupported = 0x0; // bool
			constexpr auto m_Particles = 0x40; // ParticleSystem
			constexpr auto m_Renderer = 0x48; // ParticleSystemRenderer
			constexpr auto ms_NoMainCameraLogged = 0x1; // bool
			constexpr auto ms_MainCamera = 0x8; // Camera
			constexpr auto m_Master = 0x50; // VolumetricLightBeam
		}
		namespace VolumetricLightBeam
		{
			constexpr auto colorFromLight = 0x18; // bool
			constexpr auto colorMode = 0x1C; // ColorMode
			constexpr auto color = 0x20; // Color
			constexpr auto colorGradient = 0x30; // Gradient
			constexpr auto alphaInside = 0x38; // float
			constexpr auto alphaOutside = 0x3C; // float
			constexpr auto blendingMode = 0x40; // BlendingMode
			constexpr auto spotAngleFromLight = 0x44; // bool
			constexpr auto spotAngle = 0x48; // float
			constexpr auto coneRadiusStart = 0x4C; // float
			constexpr auto geomMeshType = 0x50; // MeshType
			constexpr auto geomCustomSides = 0x54; // int32_t
			constexpr auto geomCustomSegments = 0x58; // int32_t
			constexpr auto geomCap = 0x5C; // bool
			constexpr auto fadeEndFromLight = 0x5D; // bool
			constexpr auto attenuationEquation = 0x60; // AttenuationEquation
			constexpr auto attenuationCustomBlending = 0x64; // float
			constexpr auto fadeStart = 0x68; // float
			constexpr auto fadeEnd = 0x6C; // float
			constexpr auto depthBlendDistance = 0x70; // float
			constexpr auto cameraClippingDistance = 0x74; // float
			constexpr auto glareFrontal = 0x78; // float
			constexpr auto glareBehind = 0x7C; // float
			constexpr auto boostDistanceInside = 0x80; // float
			constexpr auto fresnelPowInside = 0x84; // float
			constexpr auto fresnelPow = 0x88; // float
			constexpr auto noiseEnabled = 0x8C; // bool
			constexpr auto noiseIntensity = 0x90; // float
			constexpr auto noiseScaleUseGlobal = 0x94; // bool
			constexpr auto noiseScaleLocal = 0x98; // float
			constexpr auto noiseVelocityUseGlobal = 0x9C; // bool
			constexpr auto noiseVelocityLocal = 0xA0; // Vector3
			constexpr auto m_PlaneWS = 0xAC; // Plane
			constexpr auto pluginVersion = 0xBC; // int32_t
			constexpr auto _TrackChangesDuringPlaytime = 0xC0; // bool
			constexpr auto _SortingLayerID = 0xC4; // int32_t
			constexpr auto _SortingOrder = 0xC8; // int32_t
			constexpr auto m_BeamGeom = 0xD0; // BeamGeometry
			constexpr auto m_CoPlaytimeUpdate = 0xD8; // Coroutine
			constexpr auto _CachedLight = 0xE0; // Light
		}
		namespace MinAttribute
		{
			constexpr auto min = 0x10; // float
			constexpr auto min_ = 0x10; // float
			constexpr auto min__ = 0x10; // float
		}
		namespace PredicationPreset
		{
			constexpr auto Threshold = 0x10; // float
			constexpr auto Scale = 0x14; // float
			constexpr auto Strength = 0x18; // float
		}
		namespace Preset
		{
			constexpr auto DiagDetection = 0x10; // bool
			constexpr auto CornerDetection = 0x11; // bool
			constexpr auto Threshold = 0x14; // float
			constexpr auto DepthThreshold = 0x18; // float
			constexpr auto MaxSearchSteps = 0x1C; // int32_t
			constexpr auto MaxSearchStepsDiag = 0x20; // int32_t
			constexpr auto CornerRounding = 0x24; // int32_t
			constexpr auto LocalContrastAdaptationFactor = 0x28; // float
		}
		namespace EdgeDetectionMethod
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace QualityPreset
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DebugPass
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace SMAA
		{
			constexpr auto DebugPass = 0x18; // DebugPass
			constexpr auto Quality = 0x1C; // QualityPreset
			constexpr auto DetectionMethod = 0x20; // EdgeDetectionMethod
			constexpr auto UsePredication = 0x24; // bool
			constexpr auto CustomPreset = 0x28; // Preset
			constexpr auto CustomPredicationPreset = 0x30; // PredicationPreset
			constexpr auto Shader = 0x38; // Shader
			constexpr auto AreaTex = 0x40; // Texture2D
			constexpr auto SearchTex = 0x48; // Texture2D
			constexpr auto m_Camera = 0x50; // Camera
			constexpr auto m_LowPreset = 0x58; // Preset
			constexpr auto m_MediumPreset = 0x60; // Preset
			constexpr auto m_HighPreset = 0x68; // Preset
			constexpr auto m_UltraPreset = 0x70; // Preset
			constexpr auto m_Material = 0x78; // Material
		}
		namespace VersionInfo
		{
			constexpr auto StageSuffix = 0x0; // string
			constexpr auto m_major = 0x10; // int32_t
			constexpr auto m_minor = 0x14; // int32_t
			constexpr auto m_release = 0x18; // int32_t
		}
		namespace Decoder
		{
			constexpr auto json = 0x10; // stringReader
		}
		namespace EncodeOptions
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Encoder
		{
			constexpr auto includeAttrType = 0x0; // Type
			constexpr auto excludeAttrType = 0x8; // Type
			constexpr auto typeHintAttrType = 0x10; // Type
			constexpr auto builder = 0x10; // stringBuilder
			constexpr auto options = 0x18; // EncodeOptions
			constexpr auto indent = 0x1C; // int32_t
		}
		namespace DecodeAlias
		{
			constexpr auto Namesk__BackingField = 0x10; // string[]
		}
		namespace JSON
		{
			constexpr auto includeAttrType = 0x0; // Type
			constexpr auto excludeAttrType = 0x8; // Type
			constexpr auto decodeAliasAttrType = 0x10; // Type
			constexpr auto typeCache = 0x18; // Dictionary`2
			constexpr auto decodeTypeMethod = 0x20; // MethodInfo
			constexpr auto decodeListMethod = 0x28; // MethodInfo
			constexpr auto decodeDictionaryMethod = 0x30; // MethodInfo
			constexpr auto decodeArrayMethod = 0x38; // MethodInfo
			constexpr auto decodeMultiRankArrayMethod = 0x40; // MethodInfo
		}
		namespace ProxyArray
		{
			constexpr auto list = 0x10; // List`1
		}
		namespace ProxyBoolean
		{
			constexpr auto value = 0x10; // bool
		}
		namespace ProxyNumber
		{
			constexpr auto floatingPointCharacters = 0x0; // Char[]
			constexpr auto value = 0x10; // IConvertible
		}
		namespace ProxyObject
		{
			constexpr auto dict = 0x10; // Dictionary`2
		}
		namespace ProxyString
		{
			constexpr auto value = 0x10; // string
		}
		namespace Variant
		{
			constexpr auto FormatProvider = 0x0; // IFormatProvider
		}
		namespace TerrainSetNeighbours
		{
			constexpr auto leftTerrain = 0x18; // Terrain
			constexpr auto topTerrain = 0x20; // Terrain
			constexpr auto rightTerrain = 0x28; // Terrain
			constexpr auto bottomTerrain = 0x30; // Terrain
		}
		namespace Brush
		{
			constexpr auto spacing = 0x10; // float
			constexpr auto brushSize = 0x14; // Vector2
			constexpr auto texture = 0x20; // Texture2D
			constexpr auto color = 0x28; // Color
			constexpr auto erase = 0x38; // bool
		}
		namespace HowToExamineHeld
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToHammerUpgrade
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastBuildChangeTime = 0x8; // float
		}
		namespace HowToOpenBuildOptions
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastBuildChangeTime = 0x8; // float
		}
		namespace HowToOpenCrafting
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToOpenInventory
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToOpenMap
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToOreMinigame
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastOreHitTime = 0x8; // float
		}
		namespace HowToPing
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToRegenWithComfort
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToRetrieveThrown
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToThrow
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto itemThrown = 0x8; // bool
			constexpr auto lastThrownTime = 0xC; // float
		}
		namespace HowToTreeMinigame
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastTreeHitTime = 0x8; // float
		}
		namespace HowToUseBow
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToUseGrenade
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToUseWave
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastWavedAtTime = 0x8; // float
			constexpr auto lastLocalWaveTime = 0xC; // float
		}
		namespace HowToVoiceChat
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HowToWorldDrink
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipInstrumentFullKeyboard
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipInstrumentNumlock
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipInstrumentPlay
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace HolsterPaddleInput
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto hasPaddledWithEquippedEntityk__BackingField = 0x8; // bool
		}
		namespace TipBreakCarLock
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasShowing = 0x8; // bool
			constexpr auto nextTipTime = 0xC; // float
		}
		namespace TipCannotHarvest
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto nonEntityHitTime = 0x8; // float
		}
		namespace TipConsumeFood
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto lastFoodPickupTime = 0x10; // float
			constexpr auto lastFoodPickupCount = 0x14; // int32_t
		}
		namespace TipControllingMagnetCrane
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasMounted = 0x10; // bool
			constexpr auto timeSinceShown = 0x14; // TimeSince
		}
		namespace TipDrivingSubmarine
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasMounted = 0x10; // bool
			constexpr auto haveShown = 0x11; // bool
		}
		namespace TipEquipTorch
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto nextTorchTipTime = 0x8; // float
		}
		namespace TipFillToolCupboard
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipFishingControls
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipFishingFail
		{
			constexpr auto StrainPhrase = 0x0; // Phrase
			constexpr auto AnglePhrase = 0x8; // Phrase
			constexpr auto ObstructedPhrase = 0x10; // Phrase
		}
		namespace TipFlashlight
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipHealAtCampfire
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto oldHealth = 0x10; // float
			constexpr auto lastHurtTime = 0x14; // float
		}
		namespace TipKayakPaddle
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto hasPaddledWithoutOark__BackingField = 0x8; // bool
		}
		namespace TipMissingLure
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipMLRSAimingModule
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasMounted = 0x8; // bool
			constexpr auto nextTipTime = 0xC; // float
		}
		namespace TipMLRSBrokenDown
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasMounted = 0x8; // bool
			constexpr auto nextTipTime = 0xC; // float
		}
		namespace TipMLRSNoRockets
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto wasMounted = 0x8; // bool
			constexpr auto nextTipTime = 0xC; // float
		}
		namespace TipNoBuild
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipPetControlWheel
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto haveShown = 0x8; // bool
		}
		namespace TipPlaceSleepingBag
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipPlaceToolCupboard
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipPokerWinnings
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipRads
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipRemoveRads
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipReskinObject
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipSledPlacement
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipSleepingBagPlacement
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipSnapAttractionPoint
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto HasDismissedSnapk__BackingField = 0x8; // bool
		}
		namespace TipSnowmobileSurface
		{
			constexpr auto Phrase = 0x0; // Phrase
			constexpr auto showedMessage = 0x8; // bool
			constexpr auto nextTipTime = 0xC; // float
		}
		namespace TipSprayControls
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipTooCold
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipTooHot
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace TipZipline
		{
			constexpr auto Phrase = 0x0; // Phrase
		}
		namespace ConnectionLimiter
		{
			constexpr auto _sync = 0x10; // Object
			constexpr auto _addressCounts = 0x18; // Dictionary`2
			constexpr auto _overallCount = 0x20; // int32_t
		}
		namespace NotificationChannel
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace NotificationSendResult
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Util
		{
			constexpr auto NotificationEmpty = 0x0; // Phrase
			constexpr auto NotificationDisabled = 0x8; // Phrase
			constexpr auto NotificationRateLimit = 0x10; // Phrase
			constexpr auto NotificationServerError = 0x18; // Phrase
			constexpr auto NotificationNoTargets = 0x20; // Phrase
			constexpr auto NotificationTooManySubscribers = 0x28; // Phrase
			constexpr auto NotificationUnknown = 0x30; // Phrase
		}
		namespace Server
		{
			constexpr auto ip = 0x0; // string
			constexpr auto port = 0x8; // int32_t
			constexpr auto queryport = 0xC; // int32_t
			constexpr auto maxplayers = 0x10; // int32_t
			constexpr auto hostname = 0x18; // string
			constexpr auto identity = 0x20; // string
			constexpr auto level = 0x28; // string
			constexpr auto levelurl = 0x30; // string
			constexpr auto leveltransfer = 0x38; // bool
			constexpr auto seed = 0x3C; // int32_t
			constexpr auto salt = 0x40; // int32_t
			constexpr auto worldsize = 0x44; // int32_t
			constexpr auto saveinterval = 0x48; // int32_t
			constexpr auto secure = 0x4C; // bool
			constexpr auto encryption = 0x50; // int32_t
			constexpr auto anticheatid = 0x58; // string
			constexpr auto anticheatkey = 0x60; // string
			constexpr auto tickrate = 0x68; // int32_t
			constexpr auto entityrate = 0x6C; // int32_t
			constexpr auto schematime = 0x70; // float
			constexpr auto cycletime = 0x74; // float
			constexpr auto official = 0x78; // bool
			constexpr auto stats = 0x79; // bool
			constexpr auto stability = 0x7A; // bool
			constexpr auto radiation = 0x7B; // bool
			constexpr auto itemdespawn = 0x7C; // float
			constexpr auto itemdespawn_container_scale = 0x80; // float
			constexpr auto itemdespawn_quick = 0x84; // float
			constexpr auto corpsedespawn = 0x88; // float
			constexpr auto debrisdespawn = 0x8C; // float
			constexpr auto pve = 0x90; // bool
			constexpr auto cinematic = 0x91; // bool
			constexpr auto description = 0x98; // string
			constexpr auto url = 0xA0; // string
			constexpr auto branch = 0xA8; // string
			constexpr auto queriesPerSecond = 0xB0; // int32_t
			constexpr auto ipQueriesPerMin = 0xB4; // int32_t
			constexpr auto statBackup = 0xB8; // bool
			constexpr auto headerimage = 0xC0; // string
			constexpr auto logoimage = 0xC8; // string
			constexpr auto saveBackupCount = 0xD0; // int32_t
			constexpr auto motd = 0xD8; // string
			constexpr auto meleedamage = 0xE0; // float
			constexpr auto arrowdamage = 0xE4; // float
			constexpr auto bulletdamage = 0xE8; // float
			constexpr auto bleedingdamage = 0xEC; // float
			constexpr auto funWaterDamageThreshold = 0xF0; // float
			constexpr auto funWaterWetnessGain = 0xF4; // float
			constexpr auto meleearmor = 0xF8; // float
			constexpr auto arrowarmor = 0xFC; // float
			constexpr auto bulletarmor = 0x100; // float
			constexpr auto bleedingarmor = 0x104; // float
			constexpr auto updatebatch = 0x108; // int32_t
			constexpr auto updatebatchspawn = 0x10C; // int32_t
			constexpr auto entitybatchsize = 0x110; // int32_t
			constexpr auto entitybatchtime = 0x114; // float
			constexpr auto composterUpdateInterval = 0x118; // float
			constexpr auto planttick = 0x11C; // float
			constexpr auto planttickscale = 0x120; // float
			constexpr auto useMinimumPlantCondition = 0x124; // bool
			constexpr auto nonPlanterDeathChancePerTick = 0x128; // float
			constexpr auto ceilingLightGrowableRange = 0x12C; // float
			constexpr auto artificialTemperatureGrowableRange = 0x130; // float
			constexpr auto ceilingLightHeightOffset = 0x134; // float
			constexpr auto sprinklerRadius = 0x138; // float
			constexpr auto sprinklerEyeHeightOffset = 0x13C; // float
			constexpr auto optimalPlanterQualitySaturation = 0x140; // float
			constexpr auto metabolismtick = 0x144; // float
			constexpr auto modifierTickRate = 0x148; // float
			constexpr auto rewounddelay = 0x14C; // float
			constexpr auto woundingenabled = 0x150; // bool
			constexpr auto crawlingenabled = 0x151; // bool
			constexpr auto woundedrecoverchance = 0x154; // float
			constexpr auto incapacitatedrecoverchance = 0x158; // float
			constexpr auto woundedmaxfoodandwaterbonus = 0x15C; // float
			constexpr auto crawlingminimumhealth = 0x160; // int32_t
			constexpr auto crawlingmaximumhealth = 0x164; // int32_t
			constexpr auto playerserverfall = 0x168; // bool
			constexpr auto plantlightdetection = 0x169; // bool
			constexpr auto respawnresetrange = 0x16C; // float
			constexpr auto max_sleeping_bags = 0x170; // int32_t
			constexpr auto bag_quota_item_amount = 0x174; // bool
			constexpr auto maxunack = 0x178; // int32_t
			constexpr auto netcache = 0x17C; // bool
			constexpr auto corpses = 0x17D; // bool
			constexpr auto events = 0x17E; // bool
			constexpr auto dropitems = 0x17F; // bool
			constexpr auto netcachesize = 0x180; // int32_t
			constexpr auto savecachesize = 0x184; // int32_t
			constexpr auto combatlogsize = 0x188; // int32_t
			constexpr auto combatlogdelay = 0x18C; // int32_t
			constexpr auto authtimeout = 0x190; // int32_t
			constexpr auto playertimeout = 0x194; // int32_t
			constexpr auto idlekick = 0x198; // int32_t
			constexpr auto idlekickmode = 0x19C; // int32_t
			constexpr auto idlekickadmins = 0x1A0; // int32_t
			constexpr auto gamemode = 0x1A8; // string
			constexpr auto tags = 0x1B0; // string
			constexpr auto censorplayerlist = 0x1B8; // bool
			constexpr auto bansServerEndpoint = 0x1C0; // string
			constexpr auto bansServerFailureMode = 0x1C8; // int32_t
			constexpr auto bansServerTimeout = 0x1CC; // int32_t
			constexpr auto reportsServerEndpoint = 0x1D0; // string
			constexpr auto reportsServerEndpointKey = 0x1D8; // string
			constexpr auto printReportsToConsole = 0x1E0; // bool
			constexpr auto respawnAtDeathPosition = 0x1E1; // bool
			constexpr auto respawnWithLoadout = 0x1E2; // bool
			constexpr auto waterContainersLeaveWaterBehind = 0x1E3; // bool
			constexpr auto conveyorMoveFrequency = 0x1E4; // float
			constexpr auto industrialCrafterFrequency = 0x1E8; // float
			constexpr auto defaultBlueprintResearchCost = 0x1EC; // int32_t
			constexpr auto enforcePipeChecksOnBuildingBlockChanges = 0x1F0; // bool
			constexpr auto maxItemStacksMovedPerTickIndustrial = 0x1F4; // int32_t
			constexpr auto industrialFrameBudgetMs = 0x1F8; // float
			constexpr auto maximumMapMarkers = 0x1FC; // int32_t
			constexpr auto maximumPings = 0x200; // int32_t
			constexpr auto pingDuration = 0x204; // float
		}
		namespace RenderTextureUtility
		{
			constexpr auto m_TemporaryRTs = 0x10; // List`1
		}
		namespace TonemappingColorGrading
		{
			constexpr auto m_EyeAdaptation = 0x18; // EyeAdaptationSettings
			constexpr auto m_Tonemapping = 0x30; // TonemappingSettings
			constexpr auto m_ColorGrading = 0x60; // ColorGradingSettings
			constexpr auto m_Lut = 0xF8; // LUTSettings
			constexpr auto m_IdentityLut = 0x110; // Texture2D
			constexpr auto m_InternalLut = 0x118; // RenderTexture
			constexpr auto m_CurveTexture = 0x120; // Texture2D
			constexpr auto m_TonemapperCurve = 0x128; // Texture2D
			constexpr auto m_TonemapperCurveRange = 0x130; // float
			constexpr auto m_Shader = 0x138; // Shader
			constexpr auto m_Material = 0x140; // Material
			constexpr auto validRenderTextureFormatk__BackingField = 0x148; // bool
			constexpr auto validUserLutSizek__BackingField = 0x149; // bool
			constexpr auto m_Dirty = 0x14A; // bool
			constexpr auto m_TonemapperDirty = 0x14B; // bool
			constexpr auto m_SmallAdaptiveRt = 0x150; // RenderTexture
			constexpr auto m_AdaptiveRtFormat = 0x158; // RenderTextureFormat
			constexpr auto rts = 0x160; // RenderTexture[]
		}
		namespace ScopeEffect
		{
			constexpr auto overlayMaterial = 0x28; // Material
		}
		namespace Info
		{
			constexpr auto action = 0x0; // string
			constexpr auto icon = 0x8; // string
			constexpr auto hasMoreOptions = 0x10; // bool
			constexpr auto entityName = 0x18; // string
			constexpr auto iconSprite = 0x20; // Sprite
		}
		namespace Option
		{
			constexpr auto title = 0x0; // string
			constexpr auto desc = 0x8; // string
			constexpr auto requirements = 0x10; // string
			constexpr auto icon = 0x18; // string
			constexpr auto showOnItem = 0x20; // bool
			constexpr auto order = 0x24; // int32_t
			constexpr auto time = 0x28; // float
			constexpr auto usableWhileWounded = 0x2C; // bool
			constexpr auto longUseOnly = 0x2D; // bool
			constexpr auto showDisabled = 0x2E; // bool
			constexpr auto show = 0x2F; // bool
			constexpr auto function = 0x30; // Action`1
			constexpr auto functionPrev = 0x38; // Action`1
			constexpr auto functionNext = 0x40; // Action`1
			constexpr auto timeStart = 0x48; // Action
			constexpr auto timeProgress = 0x50; // Action
			constexpr auto iconSprite = 0x58; // Sprite
			constexpr auto command = 0x60; // string
		}
		namespace SonarObject
		{
			constexpr auto sonarType = 0x18; // SType
			constexpr auto trackedObjects = 0x0; // List`1
		}
		namespace SubmarineSonar
		{
			constexpr auto range = 0x18; // float
			constexpr auto sonarPS = 0x20; // ParticleSystem
			constexpr auto blipPS = 0x28; // ParticleSystem
			constexpr auto us = 0x30; // SonarObject
			constexpr auto greenBlip = 0x38; // Color
			constexpr auto redBlip = 0x48; // Color
			constexpr auto whiteBlip = 0x58; // Color
			constexpr auto submarineAudio = 0x68; // SubmarineAudio
			constexpr auto currentlyInRange = 0x70; // List`1
			constexpr auto rangeSqr = 0x78; // float
			constexpr auto timeSinceLastRefresh = 0x7C; // TimeSince
			constexpr auto sonarAngle = 0x80; // float
			constexpr auto blipIndex = 0x84; // int32_t
			constexpr auto scale = 0x88; // float
			constexpr auto blipSize = 0x8C; // float
			constexpr auto ourRefreshHeading = 0x90; // Vector3
			constexpr auto emitParams = 0x9C; // EmitParams
		}
		namespace ConsoleInput
		{
			constexpr auto OnInputText = 0x10; // Action`1
			constexpr auto inputString = 0x18; // string
			constexpr auto statusText = 0x20; // string[]
			constexpr auto nextUpdate = 0x28; // float
		}
		namespace ConsoleWindow
		{
			constexpr auto oldOutput = 0x10; // TextWriter
		}
		namespace DDraw
		{
			constexpr auto store = 0x0; // GameObject
			constexpr auto singleton = 0x8; // DDraw
			constexpr auto list = 0x18; // List`1
			constexpr auto AutoYPosition = 0x10; // int32_t
			constexpr auto LastAutoY = 0x14; // float
			constexpr auto lineMaterial = 0x18; // Material
			constexpr auto _skin = 0x20; // GUISkin
		}
		namespace CoroutineEx
		{
			constexpr auto waitForEndOfFrame = 0x0; // WaitForEndOfFrame
			constexpr auto waitForFixedUpdate = 0x8; // WaitForFixedUpdate
			constexpr auto waitForSecondsBuffer = 0x10; // Dictionary`2
		}
		namespace ScrollRectEx
		{
			constexpr auto scrollButton = 0x18; // InputButton
			constexpr auto altScrollButton = 0x1C; // InputButton
			constexpr auto m_Content = 0x20; // RectTransform
			constexpr auto m_Horizontal = 0x28; // bool
			constexpr auto m_Vertical = 0x29; // bool
			constexpr auto m_MovementType = 0x2C; // MovementType
			constexpr auto m_Elasticity = 0x30; // float
			constexpr auto m_Inertia = 0x34; // bool
			constexpr auto m_DecelerationRate = 0x38; // float
			constexpr auto m_ScrollSensitivity = 0x3C; // float
			constexpr auto m_Viewport = 0x40; // RectTransform
			constexpr auto m_HorizontalScrollbar = 0x48; // Scrollbar
			constexpr auto m_VerticalScrollbar = 0x50; // Scrollbar
			constexpr auto m_HorizontalScrollbarVisibility = 0x58; // ScrollbarVisibility
			constexpr auto m_VerticalScrollbarVisibility = 0x5C; // ScrollbarVisibility
			constexpr auto m_HorizontalScrollbarSpacing = 0x60; // float
			constexpr auto m_VerticalScrollbarSpacing = 0x64; // float
			constexpr auto m_OnValueChanged = 0x68; // ScrollRectEvent
			constexpr auto m_PointerStartLocalCursor = 0x70; // Vector2
			constexpr auto m_ContentStartPosition = 0x78; // Vector2
			constexpr auto m_ViewRect = 0x80; // RectTransform
			constexpr auto m_ContentBounds = 0x88; // Bounds
			constexpr auto m_ViewBounds = 0xA0; // Bounds
			constexpr auto m_Velocity = 0xB8; // Vector2
			constexpr auto m_Dragging = 0xC0; // bool
			constexpr auto m_PrevPosition = 0xC4; // Vector2
			constexpr auto m_PrevContentBounds = 0xCC; // Bounds
			constexpr auto m_PrevViewBounds = 0xE4; // Bounds
			constexpr auto m_HasRebuiltLayout = 0xFC; // bool
			constexpr auto m_HSliderExpand = 0xFD; // bool
			constexpr auto m_VSliderExpand = 0xFE; // bool
			constexpr auto m_HSliderHeight = 0x100; // float
			constexpr auto m_VSliderWidth = 0x104; // float
			constexpr auto m_Rect = 0x108; // RectTransform
			constexpr auto m_HorizontalScrollbarRect = 0x110; // RectTransform
			constexpr auto m_VerticalScrollbarRect = 0x118; // RectTransform
			constexpr auto m_Tracker = 0x120; // DrivenRectTransformTracker
			constexpr auto m_Corners = 0x128; // Vector3[]
		}
		namespace DiamondGraph
		{
			constexpr auto m_a = 0xF0; // float
			constexpr auto m_b = 0xF4; // float
			constexpr auto m_c = 0xF8; // float
			constexpr auto m_d = 0xFC; // float
		}
		namespace UICircle
		{
			constexpr auto ArcInvert = 0xF0; // bool
			constexpr auto Arc = 0xF4; // float
			constexpr auto ArcSteps = 0xF8; // int32_t
			constexpr auto ArcRotation = 0xFC; // int32_t
			constexpr auto Progress = 0x100; // float
			constexpr auto _progress = 0x104; // float
			constexpr auto ProgressColor = 0x108; // Color
			constexpr auto Fill = 0x118; // bool
			constexpr auto Thickness = 0x11C; // float
			constexpr auto Padding = 0x120; // int32_t
			constexpr auto indices = 0x128; // List`1
			constexpr auto vertices = 0x130; // List`1
			constexpr auto uvCenter = 0x138; // Vector2
		}
		namespace UICircleSimple
		{
			constexpr auto ArcSteps = 0xF0; // int32_t
			constexpr auto Fill = 0xF4; // bool
			constexpr auto Thickness = 0xF8; // float
			constexpr auto ThicknessIsOutside = 0xFC; // bool
			constexpr auto indices = 0x100; // List`1
			constexpr auto vertices = 0x108; // List`1
			constexpr auto uvCenter = 0x110; // Vector2
		}
		namespace UICornerCut
		{
			constexpr auto cornerSize = 0xF0; // Vector2
			constexpr auto m_cutUL = 0xF8; // bool
			constexpr auto m_cutUR = 0xF9; // bool
			constexpr auto m_cutLL = 0xFA; // bool
			constexpr auto m_cutLR = 0xFB; // bool
			constexpr auto m_makeColumns = 0xFC; // bool
			constexpr auto m_useColorUp = 0xFD; // bool
			constexpr auto m_colorUp = 0x100; // Color32
			constexpr auto m_useColorDown = 0x104; // bool
			constexpr auto m_colorDown = 0x108; // Color32
		}
		namespace UIGoldenRatioRenderer
		{
			constexpr auto _points = 0x118; // List`1
			constexpr auto _rects = 0x120; // List`1
			constexpr auto canvasWidth = 0x128; // int32_t
			constexpr auto canvasHeight = 0x12C; // int32_t
			constexpr auto lineThickness2 = 0x130; // float
		}
		namespace UIGridRenderer
		{
			constexpr auto m_GridColumns = 0x118; // int32_t
			constexpr auto m_GridRows = 0x11C; // int32_t
		}
		namespace UILineRenderer
		{
			constexpr auto UV_TOP_LEFT = 0x0; // Vector2
			constexpr auto UV_BOTTOM_LEFT = 0x8; // Vector2
			constexpr auto UV_TOP_CENTER_LEFT = 0x10; // Vector2
			constexpr auto UV_TOP_CENTER_RIGHT = 0x18; // Vector2
			constexpr auto UV_BOTTOM_CENTER_LEFT = 0x20; // Vector2
			constexpr auto UV_BOTTOM_CENTER_RIGHT = 0x28; // Vector2
			constexpr auto UV_TOP_RIGHT = 0x30; // Vector2
			constexpr auto UV_BOTTOM_RIGHT = 0x38; // Vector2
			constexpr auto startUvs = 0x40; // Vector2[]
			constexpr auto middleUvs = 0x48; // Vector2[]
			constexpr auto endUvs = 0x50; // Vector2[]
			constexpr auto fullUvs = 0x58; // Vector2[]
			constexpr auto m_points = 0xF0; // Vector2[]
			constexpr auto m_segments = 0xF8; // List`1
			constexpr auto lineThickness = 0x100; // float
			constexpr auto relativeSize = 0x104; // bool
			constexpr auto lineList = 0x105; // bool
			constexpr auto lineCaps = 0x106; // bool
			constexpr auto bezierSegmentsPerCurve = 0x108; // int32_t
			constexpr auto LineJoins = 0x10C; // JoinType
			constexpr auto BezierMode = 0x110; // BezierType
			constexpr auto drivenExternally = 0x114; // bool
		}
		namespace UILineRendererList
		{
			constexpr auto UV_TOP_LEFT = 0x0; // Vector2
			constexpr auto UV_BOTTOM_LEFT = 0x8; // Vector2
			constexpr auto UV_TOP_CENTER_LEFT = 0x10; // Vector2
			constexpr auto UV_TOP_CENTER_RIGHT = 0x18; // Vector2
			constexpr auto UV_BOTTOM_CENTER_LEFT = 0x20; // Vector2
			constexpr auto UV_BOTTOM_CENTER_RIGHT = 0x28; // Vector2
			constexpr auto UV_TOP_RIGHT = 0x30; // Vector2
			constexpr auto UV_BOTTOM_RIGHT = 0x38; // Vector2
			constexpr auto startUvs = 0x40; // Vector2[]
			constexpr auto middleUvs = 0x48; // Vector2[]
			constexpr auto endUvs = 0x50; // Vector2[]
			constexpr auto fullUvs = 0x58; // Vector2[]
			constexpr auto m_points = 0xF0; // List`1
			constexpr auto lineThickness = 0xF8; // float
			constexpr auto relativeSize = 0xFC; // bool
			constexpr auto lineList = 0xFD; // bool
			constexpr auto lineCaps = 0xFE; // bool
			constexpr auto bezierSegmentsPerCurve = 0x100; // int32_t
			constexpr auto LineJoins = 0x104; // JoinType
			constexpr auto BezierMode = 0x108; // BezierType
			constexpr auto drivenExternally = 0x10C; // bool
		}
		namespace UILineTextureRenderer
		{
			constexpr auto m_UVRect = 0xF0; // Rect
			constexpr auto m_points = 0x100; // Vector2[]
			constexpr auto LineThickness = 0x108; // float
			constexpr auto UseMargins = 0x10C; // bool
			constexpr auto Margin = 0x110; // Vector2
			constexpr auto relativeSize = 0x118; // bool
		}
		namespace UIPolygon
		{
			constexpr auto fill = 0xF0; // bool
			constexpr auto thickness = 0xF4; // float
			constexpr auto sides = 0xF8; // int32_t
			constexpr auto rotation = 0xFC; // float
			constexpr auto VerticesDistances = 0x100; // float[]
			constexpr auto size = 0x108; // float
		}
		namespace ResolutionMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace UIPrimitiveBase
		{
			constexpr auto s_ETC1DefaultUI = 0x0; // Material
			constexpr auto outputList = 0xC8; // List`1
			constexpr auto m_Sprite = 0xD0; // Sprite
			constexpr auto m_OverrideSprite = 0xD8; // Sprite
			constexpr auto m_EventAlphaThreshold = 0xE0; // float
			constexpr auto m_improveResolution = 0xE4; // ResolutionMode
			constexpr auto m_Resolution = 0xE8; // float
			constexpr auto m_useNativeSize = 0xEC; // bool
		}
		namespace UIRing
		{
			constexpr auto innerRadius = 0xF0; // float
			constexpr auto outerRadius = 0xF4; // float
			constexpr auto ArcSteps = 0xF8; // int32_t
			constexpr auto indices = 0x100; // List`1
			constexpr auto vertices = 0x108; // List`1
		}
		namespace BezierPath
		{
			constexpr auto SegmentsPerCurve = 0x10; // int32_t
			constexpr auto MINIMUM_SQR_DISTANCE = 0x14; // float
			constexpr auto DIVISION_THRESHOLD = 0x18; // float
			constexpr auto controlPoints = 0x20; // List`1
			constexpr auto curveCount = 0x28; // int32_t
		}
		namespace CableCurve
		{
			constexpr auto m_start = 0x10; // Vector2
			constexpr auto m_end = 0x18; // Vector2
			constexpr auto m_slack = 0x20; // float
			constexpr auto m_steps = 0x24; // int32_t
			constexpr auto m_regen = 0x28; // bool
			constexpr auto emptyCurve = 0x0; // Vector2[]
			constexpr auto points = 0x30; // Vector2[]
		}
		namespace PostProcessLayer
		{
			constexpr auto colorBuffer = 0x18; // RenderTexture
			constexpr auto depthBuffer = 0x20; // RenderTexture
			constexpr auto motionBuffer = 0x28; // RenderTexture
			constexpr auto colorOutput = 0x30; // RenderTexture
			constexpr auto renderingCamera = 0x38; // Camera
			constexpr auto renderScaleMaterial = 0x40; // Material
			constexpr auto mipmapShaders = 0x48; // HashSet`1
			constexpr auto scalingMode = 0x50; // Nullable`1
			constexpr auto prevRenderScale = 0x58; // float
			constexpr auto prevPerfQuality = 0x5C; // NVSDK_NGX_PerfQuality_Value
			constexpr auto prevScreenWidth = 0x60; // uint32_t
			constexpr auto prevScreenHeight = 0x64; // uint32_t
			constexpr auto prevUpdateTime = 0x68; // float
			constexpr auto screenshotMode = 0x6C; // bool
			constexpr auto firstDLSSPass = 0x6D; // bool
			constexpr auto dlssRecommendedSettings = 0x70; // DlSSRecommendedSettings
			constexpr auto dlssDataHandle = 0x90; // GCHandle
			constexpr auto afterEverythingCommandBuffer = 0x98; // CommandBuffer
			constexpr auto volumeTrigger = 0xA0; // Transform
			constexpr auto volumeLayer = 0xA8; // LayerMask
			constexpr auto stopNaNPropagation = 0xAC; // bool
			constexpr auto finalBlitToCameraTarget = 0xAD; // bool
			constexpr auto antialiasingMode = 0xB0; // Antialiasing
			constexpr auto temporalAntialiasing = 0xB8; // TemporalAntialiasing
			constexpr auto subpixelMorphologicalAntialiasing = 0xC0; // SubpixelMorphologicalAntialiasing
			constexpr auto fastApproximateAntialiasing = 0xC8; // FastApproximateAntialiasing
			constexpr auto fog = 0xD0; // Fog
			constexpr auto dithering = 0xD8; // Dithering
			constexpr auto debugLayer = 0xE0; // PostProcessDebugLayer
			constexpr auto intermediateFormat = 0xE8; // RenderTextureFormat
			constexpr auto prevIntermediateFormat = 0xEC; // RenderTextureFormat
			constexpr auto supportsIntermediateFormat = 0xF0; // bool
			constexpr auto m_Resources = 0xF8; // PostProcessResources
			constexpr auto m_ShowToolkit = 0x100; // bool
			constexpr auto m_ShowCustomSorter = 0x101; // bool
			constexpr auto breakBeforeColorGrading = 0x102; // bool
			constexpr auto m_BeforeTransparentBundles = 0x108; // List`1
			constexpr auto m_BeforeStackBundles = 0x110; // List`1
			constexpr auto m_AfterStackBundles = 0x118; // List`1
			constexpr auto sortedBundlesk__BackingField = 0x120; // Dictionary`2
			constexpr auto haveBundlesBeenInitedk__BackingField = 0x128; // bool
			constexpr auto m_Bundles = 0x130; // Dictionary`2
			constexpr auto m_PropertySheetFactory = 0x138; // PropertySheetFactory
			constexpr auto m_LegacyCmdBufferBeforeReflections = 0x140; // CommandBuffer
			constexpr auto m_LegacyCmdBufferBeforeLighting = 0x148; // CommandBuffer
			constexpr auto m_LegacyCmdBufferOpaque = 0x150; // CommandBuffer
			constexpr auto m_LegacyCmdBuffer = 0x158; // CommandBuffer
			constexpr auto m_Camera = 0x160; // Camera
			constexpr auto m_CurrentContext = 0x168; // PostProcessRenderContext
			constexpr auto m_LogHistogram = 0x170; // LogHistogram
			constexpr auto m_SettingsUpdateNeeded = 0x178; // bool
			constexpr auto m_IsRenderingInSceneView = 0x179; // bool
			constexpr auto m_TargetPool = 0x180; // TargetPool
			constexpr auto m_NaNKilled = 0x188; // bool
			constexpr auto m_ActiveEffects = 0x190; // List`1
			constexpr auto m_Targets = 0x198; // List`1
		}
		namespace PostProcessRenderContext
		{
			constexpr auto dlssEnabled = 0x10; // bool
			constexpr auto m_Camera = 0x18; // Camera
			constexpr auto commandk__BackingField = 0x20; // CommandBuffer
			constexpr auto sourcek__BackingField = 0x28; // RenderTargetIdentifier
			constexpr auto destinationk__BackingField = 0x50; // RenderTargetIdentifier
			constexpr auto sourceFormatk__BackingField = 0x78; // RenderTextureFormat
			constexpr auto flipk__BackingField = 0x7C; // bool
			constexpr auto resourcesk__BackingField = 0x80; // PostProcessResources
			constexpr auto propertySheetsk__BackingField = 0x88; // PropertySheetFactory
			constexpr auto userDatak__BackingField = 0x90; // Dictionary`2
			constexpr auto debugLayerk__BackingField = 0x98; // PostProcessDebugLayer
			constexpr auto widthk__BackingField = 0xA0; // int32_t
			constexpr auto heightk__BackingField = 0xA4; // int32_t
			constexpr auto stereoActivek__BackingField = 0xA8; // bool
			constexpr auto xrActiveEyek__BackingField = 0xAC; // int32_t
			constexpr auto numberOfEyesk__BackingField = 0xB0; // int32_t
			constexpr auto stereoRenderingModek__BackingField = 0xB4; // StereoRenderingMode
			constexpr auto screenWidthk__BackingField = 0xB8; // int32_t
			constexpr auto screenHeightk__BackingField = 0xBC; // int32_t
			constexpr auto isSceneViewk__BackingField = 0xC0; // bool
			constexpr auto antialiasingk__BackingField = 0xC4; // Antialiasing
			constexpr auto temporalAntialiasingk__BackingField = 0xC8; // TemporalAntialiasing
			constexpr auto uberSheet = 0xD0; // PropertySheet
			constexpr auto autoExposureTexture = 0xD8; // Texture
			constexpr auto logHistogram = 0xE0; // LogHistogram
			constexpr auto logLut = 0xE8; // Texture
			constexpr auto autoExposure = 0xF0; // AutoExposure
			constexpr auto bloomBufferNameID = 0xF8; // int32_t
			constexpr auto physicalCamera = 0xFC; // bool
			constexpr auto m_sourceDescriptor = 0x100; // RenderTextureDescriptor
		}
		namespace DisplayNameAttribute
		{
			constexpr auto displayName = 0x10; // string
		}
		namespace MaxAttribute
		{
			constexpr auto max = 0x10; // float
		}
		namespace PostProcessAttribute
		{
			constexpr auto renderer = 0x10; // Type
			constexpr auto eventType = 0x18; // PostProcessEvent
			constexpr auto menuItem = 0x20; // string
			constexpr auto allowInSceneView = 0x28; // bool
			constexpr auto builtinEffect = 0x29; // bool
		}
		namespace TrackballAttribute
		{
			constexpr auto mode = 0x10; // Mode
		}
		namespace AmbientOcclusionMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AmbientOcclusionQuality
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AmbientOcclusion
		{
			constexpr auto mode = 0x30; // AmbientOcclusionModeParameter
			constexpr auto intensity = 0x38; // FloatParameter
			constexpr auto color = 0x40; // ColorParameter
			constexpr auto ambientOnly = 0x48; // BoolParameter
			constexpr auto noiseFilterTolerance = 0x50; // FloatParameter
			constexpr auto blurTolerance = 0x58; // FloatParameter
			constexpr auto upsampleTolerance = 0x60; // FloatParameter
			constexpr auto thicknessModifier = 0x68; // FloatParameter
			constexpr auto directLightingStrength = 0x70; // FloatParameter
			constexpr auto radius = 0x78; // FloatParameter
			constexpr auto quality = 0x80; // AmbientOcclusionQualityParameter
		}
		namespace AmbientOcclusionRenderer
		{
			constexpr auto m_Methods = 0x20; // IAmbientOcclusionMethod[]
		}
		namespace EyeAdaptation
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace AutoExposure
		{
			constexpr auto filtering = 0x30; // Vector2Parameter
			constexpr auto minLuminance = 0x38; // FloatParameter
			constexpr auto maxLuminance = 0x40; // FloatParameter
			constexpr auto keyValue = 0x48; // FloatParameter
			constexpr auto eyeAdaptation = 0x50; // EyeAdaptationParameter
			constexpr auto speedUp = 0x58; // FloatParameter
			constexpr auto speedDown = 0x60; // FloatParameter
		}
		namespace AutoExposureRenderer
		{
			constexpr auto m_AutoExposurePool = 0x20; // RenderTexture[][]
			constexpr auto m_AutoExposurePingPong = 0x28; // int32_t[]
			constexpr auto m_CurrentAutoExposure = 0x30; // RenderTexture
		}
		namespace Bloom
		{
			constexpr auto intensity = 0x30; // FloatParameter
			constexpr auto threshold = 0x38; // FloatParameter
			constexpr auto softKnee = 0x40; // FloatParameter
			constexpr auto clamp = 0x48; // FloatParameter
			constexpr auto diffusion = 0x50; // FloatParameter
			constexpr auto anamorphicRatio = 0x58; // FloatParameter
			constexpr auto color = 0x60; // ColorParameter
			constexpr auto fastMode = 0x68; // BoolParameter
			constexpr auto dirtTexture = 0x70; // TextureParameter
			constexpr auto dirtIntensity = 0x78; // FloatParameter
		}
		namespace BloomRenderer
		{
			constexpr auto m_Pyramid = 0x20; // Level[]
		}
		namespace ChromaticAberration
		{
			constexpr auto spectralLut = 0x30; // TextureParameter
			constexpr auto intensity = 0x38; // FloatParameter
			constexpr auto fastMode = 0x40; // BoolParameter
		}
		namespace ChromaticAberrationRenderer
		{
			constexpr auto m_InternalSpectralLut = 0x20; // Texture2D
		}
		namespace GradingMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Tonemapper
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ColorGrading
		{
			constexpr auto gradingMode = 0x30; // GradingModeParameter
			constexpr auto externalLut = 0x38; // TextureParameter
			constexpr auto tonemapper = 0x40; // TonemapperParameter
			constexpr auto toneCurveToeStrength = 0x48; // FloatParameter
			constexpr auto toneCurveToeLength = 0x50; // FloatParameter
			constexpr auto toneCurveShoulderStrength = 0x58; // FloatParameter
			constexpr auto toneCurveShoulderLength = 0x60; // FloatParameter
			constexpr auto toneCurveShoulderAngle = 0x68; // FloatParameter
			constexpr auto toneCurveGamma = 0x70; // FloatParameter
			constexpr auto ldrLut = 0x78; // TextureParameter
			constexpr auto ldrLutContribution = 0x80; // FloatParameter
			constexpr auto temperature = 0x88; // FloatParameter
			constexpr auto tint = 0x90; // FloatParameter
			constexpr auto colorFilter = 0x98; // ColorParameter
			constexpr auto hueShift = 0xA0; // FloatParameter
			constexpr auto saturation = 0xA8; // FloatParameter
			constexpr auto brightness = 0xB0; // FloatParameter
			constexpr auto postExposure = 0xB8; // FloatParameter
			constexpr auto contrast = 0xC0; // FloatParameter
			constexpr auto mixerRedOutRedIn = 0xC8; // FloatParameter
			constexpr auto mixerRedOutGreenIn = 0xD0; // FloatParameter
			constexpr auto mixerRedOutBlueIn = 0xD8; // FloatParameter
			constexpr auto mixerGreenOutRedIn = 0xE0; // FloatParameter
			constexpr auto mixerGreenOutGreenIn = 0xE8; // FloatParameter
			constexpr auto mixerGreenOutBlueIn = 0xF0; // FloatParameter
			constexpr auto mixerBlueOutRedIn = 0xF8; // FloatParameter
			constexpr auto mixerBlueOutGreenIn = 0x100; // FloatParameter
			constexpr auto mixerBlueOutBlueIn = 0x108; // FloatParameter
			constexpr auto lift = 0x110; // Vector4Parameter
			constexpr auto gamma = 0x118; // Vector4Parameter
			constexpr auto gain = 0x120; // Vector4Parameter
			constexpr auto masterCurve = 0x128; // SplineParameter
			constexpr auto redCurve = 0x130; // SplineParameter
			constexpr auto greenCurve = 0x138; // SplineParameter
			constexpr auto blueCurve = 0x140; // SplineParameter
			constexpr auto hueVsHueCurve = 0x148; // SplineParameter
			constexpr auto hueVsSatCurve = 0x150; // SplineParameter
			constexpr auto satVsSatCurve = 0x158; // SplineParameter
			constexpr auto lumVsSatCurve = 0x160; // SplineParameter
		}
		namespace ColorGradingRenderer
		{
			constexpr auto m_GradingCurves = 0x20; // Texture2D
			constexpr auto m_Pixels = 0x28; // Color[]
			constexpr auto m_InternalLdrLut = 0x30; // RenderTexture
			constexpr auto m_InternalLogLut = 0x38; // RenderTexture
			constexpr auto m_HableCurve = 0x40; // HableCurve
		}
		namespace KernelSize
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DepthOfField
		{
			constexpr auto focusDistance = 0x30; // FloatParameter
			constexpr auto aperture = 0x38; // FloatParameter
			constexpr auto focalLength = 0x40; // FloatParameter
			constexpr auto kernelSize = 0x48; // KernelSizeParameter
		}
		namespace DepthOfFieldRenderer
		{
			constexpr auto m_CoCHistoryTextures = 0x20; // RenderTexture[][]
			constexpr auto m_HistoryPingPong = 0x28; // int32_t[]
		}
		namespace Dithering
		{
			constexpr auto m_NoiseTextureIndex = 0x10; // int32_t
		}
		namespace FastApproximateAntialiasing
		{
			constexpr auto fastMode = 0x10; // bool
			constexpr auto keepAlpha = 0x11; // bool
		}
		namespace Fog
		{
			constexpr auto enabled = 0x10; // bool
			constexpr auto excludeSkybox = 0x11; // bool
		}
		namespace Grain
		{
			constexpr auto colored = 0x30; // BoolParameter
			constexpr auto intensity = 0x38; // FloatParameter
			constexpr auto size = 0x40; // FloatParameter
			constexpr auto lumContrib = 0x48; // FloatParameter
		}
		namespace GrainRenderer
		{
			constexpr auto m_GrainLookupRT = 0x20; // RenderTexture
			constexpr auto m_SampleIndex = 0x28; // int32_t
		}
		namespace LensDistortion
		{
			constexpr auto intensity = 0x30; // FloatParameter
			constexpr auto intensityX = 0x38; // FloatParameter
			constexpr auto intensityY = 0x40; // FloatParameter
			constexpr auto centerX = 0x48; // FloatParameter
			constexpr auto centerY = 0x50; // FloatParameter
			constexpr auto scale = 0x58; // FloatParameter
		}
		namespace MotionBlur
		{
			constexpr auto shutterAngle = 0x30; // FloatParameter
			constexpr auto sampleCount = 0x38; // IntParameter
		}
		namespace MultiScaleVO
		{
			constexpr auto m_SampleThickness = 0x10; // float[]
			constexpr auto m_InvThicknessTable = 0x18; // float[]
			constexpr auto m_SampleWeightTable = 0x20; // float[]
			constexpr auto m_Widths = 0x28; // int32_t[]
			constexpr auto m_Heights = 0x30; // int32_t[]
			constexpr auto m_Settings = 0x38; // AmbientOcclusion
			constexpr auto m_PropertySheet = 0x40; // PropertySheet
			constexpr auto m_Resources = 0x48; // PostProcessResources
			constexpr auto m_AmbientOnlyAO = 0x50; // RenderTexture
			constexpr auto m_MRT = 0x58; // RenderTargetIdentifier[]
		}
		namespace ScalableAO
		{
			constexpr auto m_Result = 0x10; // RenderTexture
			constexpr auto m_PropertySheet = 0x18; // PropertySheet
			constexpr auto m_Settings = 0x20; // AmbientOcclusion
			constexpr auto m_MRT = 0x28; // RenderTargetIdentifier[]
			constexpr auto m_SampleCount = 0x30; // int32_t[]
		}
		namespace ScreenSpaceReflectionPreset
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ScreenSpaceReflectionResolution
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ScreenSpaceReflections
		{
			constexpr auto preset = 0x30; // ScreenSpaceReflectionPresetParameter
			constexpr auto maximumIterationCount = 0x38; // IntParameter
			constexpr auto resolution = 0x40; // ScreenSpaceReflectionResolutionParameter
			constexpr auto thickness = 0x48; // FloatParameter
			constexpr auto maximumMarchDistance = 0x50; // FloatParameter
			constexpr auto distanceFade = 0x58; // FloatParameter
			constexpr auto vignette = 0x60; // FloatParameter
		}
		namespace ScreenSpaceReflectionsRenderer
		{
			constexpr auto m_Resolve = 0x20; // RenderTexture
			constexpr auto m_History = 0x28; // RenderTexture
			constexpr auto m_MipIDs = 0x30; // int32_t[]
			constexpr auto m_Presets = 0x38; // QualityPreset[]
		}
		namespace SubpixelMorphologicalAntialiasing
		{
			constexpr auto quality = 0x10; // Quality
		}
		namespace TemporalAntialiasing
		{
			constexpr auto jitterSpread = 0x10; // float
			constexpr auto sharpness = 0x14; // float
			constexpr auto stationaryBlending = 0x18; // float
			constexpr auto motionBlending = 0x1C; // float
			constexpr auto jitteredMatrixFunc = 0x20; // Func`3
			constexpr auto jitterk__BackingField = 0x28; // Vector2
			constexpr auto jitterRawk__BackingField = 0x30; // Vector2
			constexpr auto m_Mrt = 0x38; // RenderTargetIdentifier[]
			constexpr auto m_ResetHistory = 0x40; // bool
			constexpr auto sampleIndexk__BackingField = 0x44; // int32_t
			constexpr auto sampleCountk__BackingField = 0x48; // int32_t
			constexpr auto m_HistoryTextures = 0x50; // RenderTexture[][]
			constexpr auto m_HistoryPingPong = 0x58; // int32_t[]
		}
		namespace VignetteMode
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Vignette
		{
			constexpr auto mode = 0x30; // VignetteModeParameter
			constexpr auto color = 0x38; // ColorParameter
			constexpr auto center = 0x40; // Vector2Parameter
			constexpr auto intensity = 0x48; // FloatParameter
			constexpr auto smoothness = 0x50; // FloatParameter
			constexpr auto roundness = 0x58; // FloatParameter
			constexpr auto rounded = 0x60; // BoolParameter
			constexpr auto mask = 0x68; // TextureParameter
			constexpr auto opacity = 0x70; // FloatParameter
		}
		namespace HistogramMonitor
		{
			constexpr auto width = 0x20; // int32_t
			constexpr auto height = 0x24; // int32_t
			constexpr auto channel = 0x28; // Channel
			constexpr auto m_Data = 0x30; // ComputeBuffer
		}
		namespace LightMeterMonitor
		{
			constexpr auto width = 0x20; // int32_t
			constexpr auto height = 0x24; // int32_t
			constexpr auto showCurves = 0x28; // bool
		}
		namespace MonitorType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Monitor
		{
			constexpr auto outputk__BackingField = 0x10; // RenderTexture
			constexpr auto requested = 0x18; // bool
		}
		namespace VectorscopeMonitor
		{
			constexpr auto size = 0x20; // int32_t
			constexpr auto exposure = 0x24; // float
			constexpr auto m_Data = 0x28; // ComputeBuffer
		}
		namespace WaveformMonitor
		{
			constexpr auto exposure = 0x20; // float
			constexpr auto height = 0x24; // int32_t
			constexpr auto m_Data = 0x28; // ComputeBuffer
		}
		namespace ParameterOverride
		{
			constexpr auto overrideState = 0x10; // bool
		}
		namespace ParameterOverride
		{
			constexpr auto value = 0x0; // T
		}
		namespace TextureParameterDefault
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace TextureParameter
		{
			constexpr auto defaultState = 0x20; // TextureParameterDefault
		}
		namespace PostProcessBundle
		{
			constexpr auto attributek__BackingField = 0x10; // PostProcessAttribute
			constexpr auto settingsk__BackingField = 0x18; // PostProcessEffectSettings
			constexpr auto m_Renderer = 0x20; // PostProcessEffectRenderer
		}
		namespace PostProcessDebug
		{
			constexpr auto postProcessLayer = 0x18; // PostProcessLayer
			constexpr auto m_PreviousPostProcessLayer = 0x20; // PostProcessLayer
			constexpr auto lightMeter = 0x28; // bool
			constexpr auto histogram = 0x29; // bool
			constexpr auto waveform = 0x2A; // bool
			constexpr auto vectorscope = 0x2B; // bool
			constexpr auto debugOverlay = 0x2C; // DebugOverlay
			constexpr auto m_CurrentCamera = 0x30; // Camera
			constexpr auto m_CmdAfterEverything = 0x38; // CommandBuffer
		}
		namespace DebugOverlay
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace ColorBlindnessType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PostProcessDebugLayer
		{
			constexpr auto lightMeter = 0x10; // LightMeterMonitor
			constexpr auto histogram = 0x18; // HistogramMonitor
			constexpr auto waveform = 0x20; // WaveformMonitor
			constexpr auto vectorscope = 0x28; // VectorscopeMonitor
			constexpr auto m_Monitors = 0x30; // Dictionary`2
			constexpr auto frameWidth = 0x38; // int32_t
			constexpr auto frameHeight = 0x3C; // int32_t
			constexpr auto debugOverlayTargetk__BackingField = 0x40; // RenderTexture
			constexpr auto debugOverlayActivek__BackingField = 0x48; // bool
			constexpr auto debugOverlayk__BackingField = 0x4C; // DebugOverlay
			constexpr auto overlaySettings = 0x50; // OverlaySettings
		}
		namespace PostProcessEffectRenderer
		{
			constexpr auto m_ResetHistory = 0x10; // bool
		}
		namespace PostProcessEffectRenderer
		{
			constexpr auto settingsk__BackingField = 0x0; // T
		}
		namespace PostProcessEffectSettings
		{
			constexpr auto active = 0x18; // bool
			constexpr auto enabled = 0x20; // BoolParameter
			constexpr auto parameters = 0x28; // ReadOnlyCollection`1
		}
		namespace PostProcessEvent
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PostProcessManager
		{
			constexpr auto s_Instance = 0x0; // PostProcessManager
			constexpr auto m_SortedVolumes = 0x10; // Dictionary`2
			constexpr auto m_Volumes = 0x18; // List`1
			constexpr auto m_SortNeeded = 0x20; // Dictionary`2
			constexpr auto m_BaseSettings = 0x28; // List`1
			constexpr auto settingsTypes = 0x30; // Dictionary`2
		}
		namespace PostProcessProfile
		{
			constexpr auto settings = 0x18; // List`1
			constexpr auto isDirty = 0x20; // bool
		}
		namespace PostProcessResources
		{
			constexpr auto blueNoise64 = 0x18; // Texture2D[]
			constexpr auto blueNoise256 = 0x20; // Texture2D[]
			constexpr auto smaaLuts = 0x28; // SMAALuts
			constexpr auto shaders = 0x30; // Shaders
			constexpr auto computeShaders = 0x38; // ComputeShaders
		}
		namespace PostProcessVolume
		{
			constexpr auto sharedProfile = 0x18; // PostProcessProfile
			constexpr auto isGlobal = 0x20; // bool
			constexpr auto bounds = 0x24; // Bounds
			constexpr auto blendDistance = 0x3C; // float
			constexpr auto weight = 0x40; // float
			constexpr auto priority = 0x44; // float
			constexpr auto m_PreviousLayer = 0x48; // int32_t
			constexpr auto m_PreviousPriority = 0x4C; // float
			constexpr auto m_InternalProfile = 0x50; // PostProcessProfile
		}
		namespace HableCurve
		{
			constexpr auto whitePointk__BackingField = 0x10; // float
			constexpr auto inverseWhitePointk__BackingField = 0x14; // float
			constexpr auto x0k__BackingField = 0x18; // float
			constexpr auto x1k__BackingField = 0x1C; // float
			constexpr auto m_Segments = 0x20; // Segment[]
			constexpr auto uniforms = 0x28; // Uniforms
		}
		namespace LogHistogram
		{
			constexpr auto datak__BackingField = 0x10; // ComputeBuffer
		}
		namespace MeshUtilities
		{
			constexpr auto s_Primitives = 0x0; // Dictionary`2
			constexpr auto s_ColliderPrimitives = 0x8; // Dictionary`2
		}
		namespace PropertySheet
		{
			constexpr auto propertiesk__BackingField = 0x10; // MaterialPropertyBlock
			constexpr auto materialk__BackingField = 0x18; // Material
		}
		namespace PropertySheetFactory
		{
			constexpr auto m_Sheets = 0x10; // Dictionary`2
		}
		namespace RuntimeUtilities
		{
			constexpr auto m_WhiteTexture = 0x0; // Texture2D
			constexpr auto m_WhiteTexture3D = 0x8; // Texture3D
			constexpr auto m_BlackTexture = 0x10; // Texture2D
			constexpr auto m_BlackTexture3D = 0x18; // Texture3D
			constexpr auto m_TransparentTexture = 0x20; // Texture2D
			constexpr auto m_TransparentTexture3D = 0x28; // Texture3D
			constexpr auto m_LutStrips = 0x30; // Dictionary`2
			constexpr auto s_Resources = 0x38; // PostProcessResources
			constexpr auto s_FullscreenTriangle = 0x40; // Mesh
			constexpr auto s_CopyStdMaterial = 0x48; // Material
			constexpr auto s_CopyStdFromDoubleWideMaterial = 0x50; // Material
			constexpr auto s_CopyMaterial = 0x58; // Material
			constexpr auto s_CopyFromTexArrayMaterial = 0x60; // Material
			constexpr auto s_CopySheet = 0x68; // PropertySheet
			constexpr auto s_CopyFromTexArraySheet = 0x70; // PropertySheet
			constexpr auto m_AssemblyTypes = 0x78; // IEnumerable`1
		}
		namespace ShaderIDs
		{
			constexpr auto MainTex = 0x0; // int32_t
			constexpr auto Jitter = 0x4; // int32_t
			constexpr auto Sharpness = 0x8; // int32_t
			constexpr auto FinalBlendParameters = 0xC; // int32_t
			constexpr auto HistoryTex = 0x10; // int32_t
			constexpr auto SMAA_Flip = 0x14; // int32_t
			constexpr auto SMAA_Flop = 0x18; // int32_t
			constexpr auto AOParams = 0x1C; // int32_t
			constexpr auto AOColor = 0x20; // int32_t
			constexpr auto OcclusionTexture1 = 0x24; // int32_t
			constexpr auto OcclusionTexture2 = 0x28; // int32_t
			constexpr auto SAOcclusionTexture = 0x2C; // int32_t
			constexpr auto MSVOcclusionTexture = 0x30; // int32_t
			constexpr auto DepthCopy = 0x34; // int32_t
			constexpr auto LinearDepth = 0x38; // int32_t
			constexpr auto LowDepth1 = 0x3C; // int32_t
			constexpr auto LowDepth2 = 0x40; // int32_t
			constexpr auto LowDepth3 = 0x44; // int32_t
			constexpr auto LowDepth4 = 0x48; // int32_t
			constexpr auto TiledDepth1 = 0x4C; // int32_t
			constexpr auto TiledDepth2 = 0x50; // int32_t
			constexpr auto TiledDepth3 = 0x54; // int32_t
			constexpr auto TiledDepth4 = 0x58; // int32_t
			constexpr auto Occlusion1 = 0x5C; // int32_t
			constexpr auto Occlusion2 = 0x60; // int32_t
			constexpr auto Occlusion3 = 0x64; // int32_t
			constexpr auto Occlusion4 = 0x68; // int32_t
			constexpr auto Combined1 = 0x6C; // int32_t
			constexpr auto Combined2 = 0x70; // int32_t
			constexpr auto Combined3 = 0x74; // int32_t
			constexpr auto SSRResolveTemp = 0x78; // int32_t
			constexpr auto Noise = 0x7C; // int32_t
			constexpr auto Test = 0x80; // int32_t
			constexpr auto Resolve = 0x84; // int32_t
			constexpr auto History = 0x88; // int32_t
			constexpr auto ViewMatrix = 0x8C; // int32_t
			constexpr auto InverseViewMatrix = 0x90; // int32_t
			constexpr auto InverseProjectionMatrix = 0x94; // int32_t
			constexpr auto ScreenSpaceProjectionMatrix = 0x98; // int32_t
			constexpr auto Params2 = 0x9C; // int32_t
			constexpr auto FogColor = 0xA0; // int32_t
			constexpr auto FogParams = 0xA4; // int32_t
			constexpr auto VelocityScale = 0xA8; // int32_t
			constexpr auto MaxBlurRadius = 0xAC; // int32_t
			constexpr auto RcpMaxBlurRadius = 0xB0; // int32_t
			constexpr auto VelocityTex = 0xB4; // int32_t
			constexpr auto Tile2RT = 0xB8; // int32_t
			constexpr auto Tile4RT = 0xBC; // int32_t
			constexpr auto Tile8RT = 0xC0; // int32_t
			constexpr auto TileMaxOffs = 0xC4; // int32_t
			constexpr auto TileMaxLoop = 0xC8; // int32_t
			constexpr auto TileVRT = 0xCC; // int32_t
			constexpr auto NeighborMaxTex = 0xD0; // int32_t
			constexpr auto LoopCount = 0xD4; // int32_t
			constexpr auto DepthOfFieldTemp = 0xD8; // int32_t
			constexpr auto DepthOfFieldTex = 0xDC; // int32_t
			constexpr auto Distance = 0xE0; // int32_t
			constexpr auto LensCoeff = 0xE4; // int32_t
			constexpr auto MaxCoC = 0xE8; // int32_t
			constexpr auto RcpMaxCoC = 0xEC; // int32_t
			constexpr auto RcpAspect = 0xF0; // int32_t
			constexpr auto CoCTex = 0xF4; // int32_t
			constexpr auto TaaParams = 0xF8; // int32_t
			constexpr auto AutoExposureTex = 0xFC; // int32_t
			constexpr auto HistogramBuffer = 0x100; // int32_t
			constexpr auto Params = 0x104; // int32_t
			constexpr auto ScaleOffsetRes = 0x108; // int32_t
			constexpr auto BloomTex = 0x10C; // int32_t
			constexpr auto SampleScale = 0x110; // int32_t
			constexpr auto Threshold = 0x114; // int32_t
			constexpr auto ColorIntensity = 0x118; // int32_t
			constexpr auto Bloom_DirtTex = 0x11C; // int32_t
			constexpr auto Bloom_Settings = 0x120; // int32_t
			constexpr auto Bloom_Color = 0x124; // int32_t
			constexpr auto Bloom_DirtTileOffset = 0x128; // int32_t
			constexpr auto ChromaticAberration_Amount = 0x12C; // int32_t
			constexpr auto ChromaticAberration_SpectralLut = 0x130; // int32_t
			constexpr auto Distortion_CenterScale = 0x134; // int32_t
			constexpr auto Distortion_Amount = 0x138; // int32_t
			constexpr auto Lut2D = 0x13C; // int32_t
			constexpr auto Lut3D = 0x140; // int32_t
			constexpr auto Lut3D_Params = 0x144; // int32_t
			constexpr auto Lut2D_Params = 0x148; // int32_t
			constexpr auto UserLut2D_Params = 0x14C; // int32_t
			constexpr auto PostExposure = 0x150; // int32_t
			constexpr auto ColorBalance = 0x154; // int32_t
			constexpr auto ColorFilter = 0x158; // int32_t
			constexpr auto HueSatCon = 0x15C; // int32_t
			constexpr auto Brightness = 0x160; // int32_t
			constexpr auto ChannelMixerRed = 0x164; // int32_t
			constexpr auto ChannelMixerGreen = 0x168; // int32_t
			constexpr auto ChannelMixerBlue = 0x16C; // int32_t
			constexpr auto Lift = 0x170; // int32_t
			constexpr auto InvGamma = 0x174; // int32_t
			constexpr auto Gain = 0x178; // int32_t
			constexpr auto Curves = 0x17C; // int32_t
			constexpr auto CustomToneCurve = 0x180; // int32_t
			constexpr auto ToeSegmentA = 0x184; // int32_t
			constexpr auto ToeSegmentB = 0x188; // int32_t
			constexpr auto MidSegmentA = 0x18C; // int32_t
			constexpr auto MidSegmentB = 0x190; // int32_t
			constexpr auto ShoSegmentA = 0x194; // int32_t
			constexpr auto ShoSegmentB = 0x198; // int32_t
			constexpr auto Vignette_Color = 0x19C; // int32_t
			constexpr auto Vignette_Center = 0x1A0; // int32_t
			constexpr auto Vignette_Settings = 0x1A4; // int32_t
			constexpr auto Vignette_Mask = 0x1A8; // int32_t
			constexpr auto Vignette_Opacity = 0x1AC; // int32_t
			constexpr auto Vignette_Mode = 0x1B0; // int32_t
			constexpr auto Grain_Params1 = 0x1B4; // int32_t
			constexpr auto Grain_Params2 = 0x1B8; // int32_t
			constexpr auto GrainTex = 0x1BC; // int32_t
			constexpr auto Phase = 0x1C0; // int32_t
			constexpr auto GrainNoiseParameters = 0x1C4; // int32_t
			constexpr auto LumaInAlpha = 0x1C8; // int32_t
			constexpr auto DitheringTex = 0x1CC; // int32_t
			constexpr auto Dithering_Coords = 0x1D0; // int32_t
			constexpr auto From = 0x1D4; // int32_t
			constexpr auto To = 0x1D8; // int32_t
			constexpr auto Interp = 0x1DC; // int32_t
			constexpr auto TargetColor = 0x1E0; // int32_t
			constexpr auto HalfResFinalCopy = 0x1E4; // int32_t
			constexpr auto WaveformSource = 0x1E8; // int32_t
			constexpr auto WaveformBuffer = 0x1EC; // int32_t
			constexpr auto VectorscopeBuffer = 0x1F0; // int32_t
			constexpr auto RenderViewportScaleFactor = 0x1F4; // int32_t
			constexpr auto UVTransform = 0x1F8; // int32_t
			constexpr auto DepthSlice = 0x1FC; // int32_t
			constexpr auto UVScaleOffset = 0x200; // int32_t
			constexpr auto PosScaleOffset = 0x204; // int32_t
		}
		namespace Spline
		{
			constexpr auto curve = 0x10; // AnimationCurve
			constexpr auto m_Loop = 0x18; // bool
			constexpr auto m_ZeroValue = 0x1C; // float
			constexpr auto m_Range = 0x20; // float
			constexpr auto m_InternalLoopingCurve = 0x28; // AnimationCurve
			constexpr auto frameCount = 0x30; // int32_t
			constexpr auto cachedData = 0x38; // float[]
		}
		namespace TargetPool
		{
			constexpr auto m_Pool = 0x10; // List`1
			constexpr auto m_Current = 0x18; // int32_t
		}
		namespace TextureFormatUtilities
		{
			constexpr auto s_FormatAliasMap = 0x0; // Dictionary`2
			constexpr auto s_SupportedRenderTextureFormats = 0x8; // Dictionary`2
			constexpr auto s_SupportedTextureFormats = 0x10; // Dictionary`2
		}
		namespace TextureLerper
		{
			constexpr auto m_Instance = 0x0; // TextureLerper
			constexpr auto m_Command = 0x10; // CommandBuffer
			constexpr auto m_PropertySheets = 0x18; // PropertySheetFactory
			constexpr auto m_Resources = 0x20; // PostProcessResources
			constexpr auto m_Recycled = 0x28; // List`1
			constexpr auto m_Actives = 0x30; // List`1
		}
		namespace Admin
		{
			constexpr auto admintime = 0x0; // float
			constexpr auto adminlight = 0x4; // float
			constexpr auto adminreflectionmultiplier = 0x8; // float
			constexpr auto adminambientmultiplier = 0xC; // float
			constexpr auto allowAdminUI = 0x10; // bool
			constexpr auto underwater_effect = 0x11; // bool
			constexpr auto underwater_cinematic = 0x12; // bool
			constexpr auto underwater_scatter = 0x14; // float
			constexpr auto woundedfreecam = 0x18; // bool
			constexpr auto ddraw_netupdate = 0x19; // bool
		}
		namespace AI
		{
			constexpr auto allowdesigning = 0x0; // bool
			constexpr auto designing = 0x1; // bool
			constexpr auto groundAlign = 0x2; // bool
			constexpr auto maxGroundAlignDist = 0x4; // float
			constexpr auto debugVis = 0x8; // bool
			constexpr auto npc_no_foot_ik = 0x9; // bool
			constexpr auto lookingAtNpcCache = 0x10; // HitTest
		}
		namespace App
		{
			constexpr auto listenip = 0x0; // string
			constexpr auto port = 0x8; // int32_t
			constexpr auto publicip = 0x10; // string
			constexpr auto update = 0x18; // bool
			constexpr auto notifications = 0x19; // bool
			constexpr auto queuelimit = 0x1C; // int32_t
			constexpr auto serverid = 0x20; // string
			constexpr auto alarmcooldown = 0x28; // float
			constexpr auto maxconnections = 0x2C; // int32_t
			constexpr auto maxconnectionsperip = 0x30; // int32_t
			constexpr auto maxmessagesize = 0x34; // int32_t
		}
		namespace Audio
		{
			constexpr auto master = 0x0; // float
			constexpr auto musicvolume = 0x4; // float
			constexpr auto musicvolumemenu = 0x8; // float
			constexpr auto game = 0xC; // float
			constexpr auto voices = 0x10; // float
			constexpr auto instruments = 0x14; // float
			constexpr auto voiceProps = 0x18; // float
			constexpr auto eventAudio = 0x1C; // float
			constexpr auto ambience = 0x20; // bool
			constexpr auto framebudget = 0x24; // float
			constexpr auto minupdatefraction = 0x28; // float
			constexpr auto advancedocclusion = 0x2C; // bool
			constexpr auto hqsoundfade = 0x2D; // bool
			constexpr auto debugVoiceLimiting = 0x2E; // bool
		}
		namespace Batching
		{
			constexpr auto renderers = 0x0; // bool
			constexpr auto renderer_threading = 0x1; // bool
			constexpr auto renderer_capacity = 0x4; // int32_t
			constexpr auto renderer_vertices = 0x8; // int32_t
			constexpr auto renderer_submeshes = 0xC; // int32_t
			constexpr auto verbose = 0x10; // int32_t
		}
		namespace Chat
		{
			constexpr auto localChatRange = 0x0; // float
			constexpr auto globalchat = 0x4; // bool
			constexpr auto localchat = 0x5; // bool
			constexpr auto enabled = 0x6; // bool
			constexpr auto muted = 0x8; // MuteList
		}
		namespace Console
		{
			constexpr auto erroroverlay = 0x0; // bool
		}
		namespace Construct
		{
			constexpr auto frameminutes = 0x0; // float
		}
		namespace Culling
		{
			constexpr auto entityUpdateRate = 0x0; // float
			constexpr auto entityMinCullDist = 0x4; // float
			constexpr auto entityMinShadowCullDist = 0x8; // float
			constexpr auto entityMaxDist = 0xC; // float
			constexpr auto _env = 0x10; // bool
			constexpr auto envMinDist = 0x14; // float
			constexpr auto noDataVisible = 0x18; // bool
		}
		namespace Debugging
		{
			constexpr auto checktriggers = 0x0; // bool
			constexpr auto checkparentingtriggers = 0x1; // bool
			constexpr auto DebugDismounts = 0x2; // bool
			constexpr auto callbacks = 0x3; // bool
			constexpr auto debugcamera_targetbind = 0x8; // ConButton
			constexpr auto debugcamera_dollyforward = 0x10; // ConButton
			constexpr auto debugcamera_dollyback = 0x18; // ConButton
			constexpr auto debugcamera_cyclebone = 0x20; // ConButton
			constexpr auto debugcamera_dollyspeed = 0x28; // float
			constexpr auto debugcamera_raise = 0x30; // ConButton
			constexpr auto debugcamera_lower = 0x38; // ConButton
			constexpr auto debugcamera_zoomin = 0x40; // ConButton
			constexpr auto debugcamera_zoomout = 0x48; // ConButton
			constexpr auto debugcamera_offset = 0x50; // Vector3
			constexpr auto debugcamera_bonerotation = 0x5C; // bool
			constexpr auto debugcamera_lookat = 0x5D; // bool
			constexpr auto debugcamera_autosave = 0x5E; // bool
			constexpr auto debugcamera_autoload = 0x5F; // bool
			constexpr auto debugcamera_preserve = 0x60; // bool
			constexpr auto debugcamera_lock = 0x61; // bool
			constexpr auto drawcolliders = 0x62; // bool
			constexpr auto ambientvolumes = 0x63; // bool
			constexpr auto oninventorychanged = 0x64; // bool
			constexpr auto fakeSpeechPlayer = 0x68; // string
			constexpr auto showWorldInfoInPerformanceReadout = 0x70; // bool
			constexpr auto showViewmodelAimHelper = 0x71; // bool
			constexpr auto viewmodelAimHelpWidth = 0x74; // float
		}
		namespace Decal
		{
			constexpr auto cache = 0x0; // bool
			constexpr auto instancing = 0x1; // bool
			constexpr auto capacity = 0x4; // int32_t
			constexpr auto limit = 0x8; // int32_t
		}
		namespace Decor
		{
			constexpr auto m_quality = 0x0; // float
		}
		namespace Demo
		{
			constexpr auto Version = 0x0; // uint32_t
			constexpr auto _ui = 0x4; // bool
			constexpr auto timescale = 0x8; // float
			constexpr auto renableNametags = 0xC; // bool
			constexpr auto autoDebugCam = 0xD; // bool
			constexpr auto compressShotKeyframes = 0xE; // bool
			constexpr auto showLocalPlayerNameTag = 0xF; // bool
			constexpr auto showCommunityUI = 0x10; // bool
		}
		namespace Effects
		{
			constexpr auto _antialiasing = 0x0; // int32_t
			constexpr auto ao = 0x4; // bool
			constexpr auto bloom = 0x5; // bool
			constexpr auto lensdirt = 0x6; // bool
			constexpr auto motionblur = 0x7; // bool
			constexpr auto sharpen = 0x8; // bool
			constexpr auto shafts = 0x9; // bool
			constexpr auto vignet = 0xA; // bool
			constexpr auto footsteps = 0xB; // bool
			constexpr auto maxgibs = 0xC; // int32_t
			constexpr auto maxGibDist = 0x10; // int32_t
			constexpr auto minGibLife = 0x14; // int32_t
			constexpr auto maxGibLife = 0x18; // int32_t
			constexpr auto creationEffects = 0x1C; // bool
			constexpr auto otherplayerslightflares = 0x1D; // bool
			constexpr auto showoutlines = 0x1E; // bool
		}
		namespace FPS
		{
			constexpr auto _limit = 0x0; // int32_t
			constexpr auto limitInBackground = 0x4; // bool
			constexpr auto limitInMenu = 0x5; // bool
			constexpr auto m_graph = 0x8; // int32_t
		}
		namespace GC
		{
			constexpr auto buffer_enabled = 0x0; // bool
			constexpr auto debuglevel = 0x4; // int32_t
			constexpr auto m_buffer = 0x8; // int32_t
			constexpr auto gcTime = 0x0; // float
			constexpr auto gcMode = 0x4; // Mode
			constexpr auto heapSize = 0x18; // Int64
			constexpr auto heapBaseline = 0x20; // Int64
			constexpr auto collectionCount = 0x28; // int32_t
		}
		namespace Global
		{
			constexpr auto _developer = 0x0; // int32_t
			constexpr auto skipAssetWarmup_crashes = 0x4; // bool
			constexpr auto maxthreads = 0x8; // int32_t
			constexpr auto warmupConcurrency = 0xC; // int32_t
			constexpr auto preloadConcurrency = 0x10; // int32_t
			constexpr auto forceUnloadBundles = 0x14; // bool
			constexpr auto asyncWarmup = 0x15; // bool
			constexpr auto asyncLoadingPreset = 0x18; // int32_t
			constexpr auto _censornudity = 0x1C; // int32_t
			constexpr auto _censorsigns = 0x20; // bool
			constexpr auto signUndoBuffer = 0x24; // int32_t
			constexpr auto _censorRecordings = 0x28; // bool
			constexpr auto _processMidiInput = 0x29; // bool
			constexpr auto _showBlood = 0x2A; // bool
			constexpr auto limitFlashing = 0x2B; // bool
			constexpr auto showItemCountsOnPickup = 0x2C; // bool
			constexpr auto useSingleItemPickupNotice = 0x2D; // bool
			constexpr auto showItemPickupNotices = 0x2E; // bool
			constexpr auto vehicleDismountHoldTime = 0x30; // float
			constexpr auto hideInteractTextWhileADS = 0x34; // bool
			constexpr auto perf = 0x38; // int32_t
			constexpr auto god = 0x3C; // bool
			constexpr auto specnet = 0x3D; // bool
			constexpr auto streamermode = 0x3E; // bool
			constexpr auto richPresence = 0x3F; // bool
			constexpr auto _consoleScale = 0x40; // float
			constexpr auto hideTeamLeaderMapMarkers = 0x44; // bool
			constexpr auto cinematicGingerbreadCorpses = 0x45; // bool
			constexpr auto _gingerbreadMaterialID = 0x48; // uint32_t
		}
		namespace Graphics
		{
			constexpr auto _shadowdistance = 0x0; // float
			constexpr auto shadowmode = 0x4; // int32_t
			constexpr auto shadowlights = 0x8; // int32_t
			constexpr auto _shadowquality = 0xC; // int32_t
			constexpr auto grassshadows = 0x10; // bool
			constexpr auto contactshadows = 0x11; // bool
			constexpr auto drawdistance = 0x14; // float
			constexpr auto _fov = 0x18; // float
			constexpr auto hud = 0x1C; // bool
			constexpr auto chat = 0x1D; // bool
			constexpr auto branding = 0x1E; // bool
			constexpr auto compass = 0x20; // int32_t
			constexpr auto dof = 0x24; // bool
			constexpr auto dof_aper = 0x28; // float
			constexpr auto dof_blur = 0x2C; // float
			constexpr auto dof_mode = 0x30; // int32_t
			constexpr auto dof_focus_dist = 0x34; // float
			constexpr auto dof_focus_time = 0x38; // float
			constexpr auto dof_debug = 0x3C; // bool
			constexpr auto dof_kernel_count = 0x40; // int32_t
			constexpr auto dof_focus_target_entity = 0x48; // BaseEntity
			constexpr auto vm_fov_scale = 0x50; // bool
			constexpr auto vm_horizontal_flip = 0x51; // bool
			constexpr auto _resolution = 0x54; // int32_t
			constexpr auto uniqueResolutions = 0x58; // List`1
			constexpr auto firstResolutionSet = 0x60; // bool
			constexpr auto _screenmode = 0x64; // int32_t
			constexpr auto _uiscale = 0x68; // float
			constexpr auto _anisotropic = 0x6C; // int32_t
			constexpr auto _parallax = 0x70; // int32_t
			constexpr auto _impostorshadows = 0x74; // bool
			constexpr auto _showtexeldensity = 0x78; // int32_t
			constexpr auto _waves = 0x7C; // bool
			constexpr auto viewModelCamera = 0x7D; // bool
			constexpr auto viewModelDepth = 0x7E; // bool
			constexpr auto reflexMode = 0x80; // int32_t
			constexpr auto reflexIntervalUs = 0x84; // int32_t
			constexpr auto reflexLatencyMarker = 0x88; // bool
			constexpr auto useMarkersToOptimize = 0x89; // bool
			constexpr auto dlss = 0x8C; // int32_t
			constexpr auto _renderScale = 0x90; // float
			constexpr auto jitterSpread = 0x94; // float
			constexpr auto disableLightLod = 0x98; // bool
			constexpr auto disableParticleLod = 0x99; // bool
			constexpr auto disableAnimatorLod = 0x9A; // bool
			constexpr auto aggressiveShadowLod = 0x9B; // bool
			constexpr auto _aggressiveShadowLodWearable = 0x9C; // bool
			constexpr auto _hlod = 0x9D; // bool
			constexpr auto lastHlodChange = 0xA0; // TimeSince
		}
		namespace Grass
		{
			constexpr auto displacement = 0x0; // bool
			constexpr auto m_quality = 0x4; // float
			constexpr auto m_distance = 0x8; // float
			constexpr auto m_maxthreads = 0xC; // int32_t
			constexpr auto m_refresh_budget = 0x10; // float
		}
		namespace Halloween
		{
			constexpr auto enabled = 0x0; // bool
		}
		namespace Hero
		{
			constexpr auto ident = 0x0; // string
			constexpr auto video = 0x8; // string
			constexpr auto title = 0x10; // string
			constexpr auto action = 0x18; // string
			constexpr auto url = 0x20; // string
			constexpr auto CanvasGroup = 0x18; // CanvasGroup
			constexpr auto VideoPlayer = 0x20; // Video
			constexpr auto TitleText = 0x28; // RustText
			constexpr auto ButtonText = 0x30; // RustText
			constexpr auto TitleImage = 0x38; // HttpImage
			constexpr auto ItemStoreButton = 0x40; // RustButton
			constexpr auto LimitedTabButton = 0x48; // RustButton
			constexpr auto GeneralTabButton = 0x50; // RustButton
			constexpr auto canShowHero = 0x58; // bool
		}
		namespace Input
		{
			constexpr auto flipy = 0x0; // bool
			constexpr auto autocrouch = 0x1; // bool
			constexpr auto sensitivity = 0x4; // float
			constexpr auto ads_sensitivity = 0x8; // float
			constexpr auto vehicle_sensitivity = 0xC; // float
			constexpr auto vehicle_flipy = 0x10; // bool
			constexpr auto toggleDuck = 0x11; // bool
			constexpr auto alwayssprint = 0x12; // bool
			constexpr auto toggleAds = 0x13; // bool
			constexpr auto holdtime = 0x14; // float
			constexpr auto radial_menu_mode = 0x18; // int32_t
		}
		namespace instruments
		{
			constexpr auto _debugMidi = 0x0; // bool
			constexpr auto processSustainPedal = 0x1; // bool
			constexpr auto debugNotesk__BackingField = 0x2; // bool
		}
		namespace Inventory
		{
			constexpr auto _quickCraftDelay = 0x0; // float
		}
		namespace Legs
		{
			constexpr auto EnableLegs = 0x0; // bool
			constexpr auto LeanBack = 0x4; // float
			constexpr auto LeanDown = 0x8; // float
			constexpr auto ModelOffset = 0xC; // float
			constexpr auto ModelRotation = 0x10; // Vector3
		}
		namespace Lerp
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto inertia_cur = 0x4; // float
			constexpr auto smoothing_cur = 0x8; // float
			constexpr auto interpolation_cur = 0xC; // float
			constexpr auto extrapolation_cur = 0x10; // float
		}
		namespace Mesh
		{
			constexpr auto m_quality = 0x0; // float
		}
		namespace Music
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto songGapMin = 0x4; // int32_t
			constexpr auto songGapMax = 0x8; // int32_t
		}
		namespace Net
		{
			constexpr auto visdebug = 0x0; // bool
			constexpr auto debug = 0x1; // bool
			constexpr auto visibilityRadiusFarOverride = 0x4; // int32_t
			constexpr auto visibilityRadiusNearOverride = 0x8; // int32_t
		}
		namespace Netgraph
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto updatespeed = 0x4; // float
			constexpr auto typefilter = 0x8; // string
			constexpr auto entityfilter = 0x10; // string
		}
		namespace Particle
		{
			constexpr auto m_quality = 0x0; // float
			constexpr auto simulationspace = 0x4; // bool
			constexpr auto ik = 0x5; // bool
		}
		namespace Physics
		{
			constexpr auto ragdollmode = 0x0; // int32_t
			constexpr auto batchsynctransforms = 0x4; // bool
		}
		namespace Player
		{
			constexpr auto tickrate_cl = 0x0; // int32_t
			constexpr auto tickrate_sv = 0x4; // int32_t
			constexpr auto InfiniteAmmo = 0x8; // bool
			constexpr auto recoilcomp = 0x9; // bool
			constexpr auto footik = 0xA; // bool
			constexpr auto footikdistance = 0xC; // float
			constexpr auto footikrate = 0x10; // float
			constexpr auto triggerfix = 0x14; // bool
			constexpr auto eye_blinking = 0x15; // bool
			constexpr auto eye_movement = 0x16; // bool
			constexpr auto useCinematicAvatar = 0x17; // bool
			constexpr auto noclipspeed = 0x18; // float
			constexpr auto noclipspeedslow = 0x1C; // float
			constexpr auto noclipspeedfast = 0x20; // float
		}
		namespace PlayerCull
		{
			constexpr auto _enabled = 0x0; // bool
			constexpr auto updateRate = 0x4; // float
			constexpr auto minCullDist = 0x8; // float
			constexpr auto maxSleeperDist = 0xC; // float
			constexpr auto maxPlayerDist = 0x10; // float
			constexpr auto visQuality = 0x14; // int32_t
			constexpr auto debug = 0x18; // bool
		}
		namespace Pool
		{
			constexpr auto mode = 0x0; // int32_t
			constexpr auto prewarm = 0x4; // bool
			constexpr auto enabled = 0x5; // bool
			constexpr auto debug = 0x6; // bool
		}
		namespace Sentry
		{
			constexpr auto targetall = 0x0; // bool
			constexpr auto hostileduration = 0x4; // float
		}
		namespace Spawn
		{
			constexpr auto min_rate = 0x0; // float
			constexpr auto max_rate = 0x4; // float
			constexpr auto min_density = 0x8; // float
			constexpr auto max_density = 0xC; // float
			constexpr auto player_base = 0x10; // float
			constexpr auto player_scale = 0x14; // float
			constexpr auto respawn_populations = 0x18; // bool
			constexpr auto respawn_groups = 0x19; // bool
			constexpr auto respawn_individuals = 0x1A; // bool
			constexpr auto tick_populations = 0x1C; // float
			constexpr auto tick_individuals = 0x20; // float
		}
		namespace SSS
		{
			constexpr auto enabled = 0x0; // bool
			constexpr auto quality = 0x4; // int32_t
			constexpr auto halfres = 0x8; // bool
			constexpr auto scale = 0xC; // float
		}
		namespace Stability
		{
			constexpr auto verbose = 0x0; // int32_t
			constexpr auto strikes = 0x4; // int32_t
			constexpr auto collapse = 0x8; // float
			constexpr auto accuracy = 0xC; // float
			constexpr auto stabilityqueue = 0x10; // float
			constexpr auto surroundingsqueue = 0x14; // float
		}
		namespace Steam
		{
			constexpr auto server_allow_steam_nicknamesk__BackingField = 0x0; // bool
			constexpr auto use_steam_nicknamesk__BackingField = 0x1; // bool
		}
		namespace Terrain
		{
			constexpr auto quality = 0x0; // float
		}
		namespace Texture
		{
			constexpr auto streamingBudgetOverride = 0x0; // int32_t
		}
		namespace Tree
		{
			constexpr auto m_quality = 0x0; // float
			constexpr auto m_meshes = 0x4; // int32_t
		}
		namespace UI
		{
			constexpr auto showinventoryplayer = 0x0; // bool
			constexpr auto autoswitchchannel = 0x1; // bool
		}
		namespace Voice
		{
			constexpr auto loopback = 0x0; // bool
			constexpr auto _voiceRangeBoostAmount = 0x4; // float
		}
		namespace Water
		{
			constexpr auto quality = 0x0; // int32_t
			constexpr auto MaxQuality = 0x4; // int32_t
			constexpr auto MinQuality = 0x8; // int32_t
			constexpr auto reflections = 0xC; // int32_t
			constexpr auto MaxReflections = 0x10; // int32_t
			constexpr auto MinReflections = 0x14; // int32_t
		}
		namespace Weather
		{
			constexpr auto wetness_rain = 0x0; // float
			constexpr auto wetness_snow = 0x4; // float
		}
		namespace hitnotify
		{
			constexpr auto notification_level = 0x0; // int32_t
			constexpr auto headshot = 0x4; // bool
		}
		namespace ShoutcastStream
		{
			constexpr auto client = 0x0; // HttpClient
			constexpr auto SocketConnectedk__BackingField = 0x10; // bool
			constexpr auto MP3Stream = 0x18; // MP3Stream
			constexpr auto cancelSource = 0x20; // CancellationTokenSource
			constexpr auto cancelToken = 0x28; // CancellationToken
			constexpr auto disconnected = 0x30; // bool
			constexpr auto connecting = 0x31; // bool
			constexpr auto lastStreamInit = 0x8; // TimeSince
			constexpr auto sessionCount = 0xC; // int32_t
			constexpr auto sessionId = 0x34; // int32_t
			constexpr auto reading = 0x38; // bool
			constexpr auto url = 0x40; // string
			constexpr auto pooledBuffers = 0x10; // List`1
			constexpr auto currentWriteIndexk__BackingField = 0x48; // uint32_t
			constexpr auto floatSamplesk__BackingField = 0x50; // float[]
			constexpr auto buffer = 0x58; // char[]
			constexpr auto floatBuffer = 0x60; // float[]
			constexpr auto connectedStreamers = 0x68; // List`1
			constexpr auto connections = 0x18; // List`1
			constexpr auto active = 0x20; // List`1
			constexpr auto lastFrameUpdate = 0x28; // int32_t
			constexpr auto intToFloatBuffer = 0x70; // float[]
			constexpr auto zeroResult = 0x78; // Int16[]
			constexpr auto byteResult = 0x80; // Int16[]
		}
		namespace Output
		{
			constexpr auto OnMessage = 0x0; // Action`3
			constexpr auto installed = 0x8; // bool
			constexpr auto HistoryOutput = 0x10; // List`1
		}
		namespace RCon
		{
			constexpr auto Password = 0x0; // string
			constexpr auto Port = 0x8; // int32_t
			constexpr auto Ip = 0x10; // string
			constexpr auto Web = 0x18; // bool
			constexpr auto Print = 0x19; // bool
			constexpr auto listener = 0x20; // RConListener
			constexpr auto listenerNew = 0x28; // Listener
			constexpr auto Commands = 0x30; // Queue`1
			constexpr auto lastRunTime = 0x38; // float
			constexpr auto bannedAddresses = 0x40; // List`1
			constexpr auto responseIdentifier = 0x48; // int32_t
			constexpr auto responseConnection = 0x4C; // int32_t
			constexpr auto isInput = 0x50; // bool
			constexpr auto SERVERDATA_AUTH = 0x54; // int32_t
			constexpr auto SERVERDATA_EXECCOMMAND = 0x58; // int32_t
			constexpr auto SERVERDATA_AUTH_RESPONSE = 0x5C; // int32_t
			constexpr auto SERVERDATA_RESPONSE_VALUE = 0x60; // int32_t
			constexpr auto SERVERDATA_CONSOLE_LOG = 0x64; // int32_t
			constexpr auto SERVERDATA_SWITCH_UTF8 = 0x68; // int32_t
		}
		namespace VirtualScroll
		{
			constexpr auto ItemHeight = 0x18; // int32_t
			constexpr auto ItemSpacing = 0x1C; // int32_t
			constexpr auto Padding = 0x20; // RectOffset
			constexpr auto DataSourceObject = 0x28; // GameObject
			constexpr auto SourceObject = 0x30; // GameObject
			constexpr auto ScrollRect = 0x38; // ScrollRect
			constexpr auto OverrideContentRoot = 0x40; // RectTransform
			constexpr auto dataSource = 0x48; // IDataSource
			constexpr auto ActivePool = 0x50; // Dictionary`2
			constexpr auto InactivePool = 0x58; // Stack`1
		}
		namespace FPNativeList
		{
			constexpr auto _array = 0x0; // NativeArray`1
			constexpr auto _length = 0x0; // int32_t
		}
		namespace ESPCanvas
		{
			constexpr auto RefreshRate = 0x18; // float
			constexpr auto Source = 0x20; // ESPPlayerInfo
			constexpr auto MaxDistance = 0x28; // float
			constexpr auto NameplateCount = 0x0; // int32_t
			constexpr auto OverrideMaxDisplayDistance = 0x4; // float
			constexpr auto DisableOcclusionChecks = 0x8; // bool
			constexpr auto ShowHealth = 0x9; // bool
			constexpr auto ColourCodeTeams = 0xA; // bool
			constexpr auto Elements = 0x30; // ESPPlayerInfo[]
			constexpr auto timeSinceRefreshed = 0x38; // RealTimeSince
			constexpr auto lastCheckedZoomFrame = 0xC; // int32_t
			constexpr auto cachedUsingZoomItem = 0x10; // bool
		}
		namespace ESPPlayerInfo
		{
			constexpr auto WorldOffset = 0x18; // Vector3
			constexpr auto Text = 0x28; // TextMeshProUGUI
			constexpr auto Image = 0x30; // TextMeshProUGUI
			constexpr auto group = 0x38; // CanvasGroup
			constexpr auto gradientNormal = 0x40; // Gradient
			constexpr auto gradientTeam = 0x48; // Gradient
			constexpr auto TeamColor = 0x50; // Color
			constexpr auto AllyColor = 0x60; // Color
			constexpr auto EnemyColor = 0x70; // Color
			constexpr auto visCheck = 0x80; // QueryVis
			constexpr auto Entityk__BackingField = 0x88; // BasePlayer
			constexpr auto framebudgetms = 0x0; // float
			constexpr auto GreenTeamId = 0x4; // int32_t
			constexpr auto RedTeamId = 0x8; // int32_t
			constexpr auto BlueTeamId = 0xC; // int32_t
			constexpr auto YellowTeamId = 0x10; // int32_t
			constexpr auto PurpleTeamId = 0x14; // int32_t
			constexpr auto OrangeTeamId = 0x18; // int32_t
			constexpr auto GrayTeamId = 0x1C; // int32_t
			constexpr auto PinkTeamId = 0x20; // int32_t
			constexpr auto inQueue = 0x90; // bool
			constexpr auto workQueue = 0x28; // ESPWorkQueue
			constexpr auto playerVisPosHead = 0x94; // Vector3
			constexpr auto playerVisPosSpine = 0xA0; // Vector3
			constexpr auto numFramesVisible = 0xAC; // int32_t
			constexpr auto distanceFromCamera = 0xB0; // float
			constexpr auto lastHealthUpdate = 0xB4; // TimeSince
		}
		namespace BlackjackController
		{
			constexpr auto dealerCards = 0x50; // List`1
			constexpr auto LastActionk__BackingField = 0x58; // BlackjackInputOption
			constexpr auto LastActionTargetk__BackingField = 0x60; // UInt64
			constexpr auto LastActionValuek__BackingField = 0x68; // int32_t
			constexpr auto dealerRoundOpinion = 0x6C; // DealerOpinion
		}
		namespace CardGameController
		{
			constexpr auto Statek__BackingField = 0x10; // CardGameState
			constexpr auto PlayerDatak__BackingField = 0x18; // CardPlayerData[]
			constexpr auto Ownerk__BackingField = 0x20; // BaseCardGameEntity
			constexpr auto resultInfok__BackingField = 0x28; // RoundResults
			constexpr auto localPlayerCards = 0x30; // CardList
			constexpr auto activePlayerIndex = 0x38; // int32_t
			constexpr auto _sounds = 0x40; // CardGameSounds
			constexpr auto ClientScrapInPotk__BackingField = 0x48; // int32_t
		}
		namespace CardPlayerData
		{
			constexpr auto UserIDk__BackingField = 0x10; // UInt64
			constexpr auto Cards = 0x18; // List`1
			constexpr auto Statek__BackingField = 0x20; // CardPlayerState
			constexpr auto mountIndex = 0x24; // int32_t
			constexpr auto isServer = 0x28; // bool
			constexpr auto availableInputs = 0x2C; // int32_t
			constexpr auto betThisRound = 0x30; // int32_t
			constexpr auto betThisTurn = 0x34; // int32_t
			constexpr auto LeftRoundEarlyk__BackingField = 0x38; // bool
			constexpr auto SendCardDetailsk__BackingField = 0x39; // bool
			constexpr auto ClientTimeUntilTurnEnds = 0x3C; // TimeUntil
			constexpr auto clientScrap = 0x40; // int32_t
		}
		namespace CardPlayerDataBlackjack
		{
			constexpr auto SplitCards = 0x48; // List`1
			constexpr auto splitBetThisRound = 0x50; // int32_t
			constexpr auto insuranceBetThisRound = 0x54; // int32_t
			constexpr auto playingSplitCards = 0x58; // bool
		}
		namespace Rank
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace Suit
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace PlayingCard
		{
			constexpr auto IsUnknownCard = 0x10; // bool
			constexpr auto Suit = 0x14; // Suit
			constexpr auto Rank = 0x18; // Rank
			constexpr auto cards = 0x0; // PlayingCard[]
			constexpr auto unknownCard = 0x8; // PlayingCard
		}
		namespace TexasHoldEmController
		{
			constexpr auto communityCards = 0x50; // List`1
			constexpr auto LastActionk__BackingField = 0x58; // PokerInputOption
			constexpr auto LastActionTargetk__BackingField = 0x60; // UInt64
			constexpr auto LastActionValuek__BackingField = 0x68; // int32_t
			constexpr auto BiggestRaiseThisTurnk__BackingField = 0x6C; // int32_t
			constexpr auto dealerIndex = 0x70; // int32_t
		}
		namespace Controls
		{
			constexpr auto labelWidth = 0x0; // float
		}
		namespace TabbedPanel
		{
			constexpr auto selectedTabID = 0x10; // int32_t
			constexpr auto tabs = 0x18; // List`1
		}
		namespace Analytics
		{
			constexpr auto StatsBlacklist = 0x0; // HashSet`1
			constexpr auto trackedSpawnedIds = 0x8; // HashSet`1
			constexpr auto ClientAnalyticsUrlk__BackingField = 0x10; // string
			constexpr auto ServerAnalyticsUrlk__BackingField = 0x18; // string
			constexpr auto AnalyticsHeaderk__BackingField = 0x20; // string
			constexpr auto AnalyticsSecretk__BackingField = 0x28; // string
			constexpr auto AnalyticsPublicKeyk__BackingField = 0x30; // string
			constexpr auto HighFrequencyStatsk__BackingField = 0x38; // bool
		}
		namespace EventRecord
		{
			constexpr auto Timestamp = 0x10; // DateTime
			constexpr auto IsServer = 0x18; // bool
			constexpr auto EventTypek__BackingField = 0x20; // string
			constexpr auto Data = 0x28; // List`1
		}
		namespace EventRecordField
		{
			constexpr auto Key1 = 0x0; // string
			constexpr auto Key2 = 0x8; // string
			constexpr auto String = 0x10; // string
			constexpr auto Number = 0x18; // Nullable`1
			constexpr auto Float = 0x28; // Nullable`1
			constexpr auto Vector = 0x38; // Nullable`1
			constexpr auto Guid = 0x48; // Nullable`1
			constexpr auto IsObject = 0x5C; // bool
		}
		namespace PerformanceLogging
		{
			constexpr auto server = 0x0; // PerformanceLogging
			constexpr auto client = 0x8; // PerformanceLogging
			constexpr auto ClientInterval = 0x10; // TimeSpan
			constexpr auto ServerInterval = 0x18; // TimeSpan
			constexpr auto PublicServerInterval = 0x20; // TimeSpan
			constexpr auto PingInterval = 0x28; // TimeSpan
			constexpr auto Frametimes = 0x30; // List`1
			constexpr auto PingHistory = 0x38; // List`1
			constexpr auto lagSpikes = 0x40; // List`1
			constexpr auto garbageCollections = 0x48; // List`1
			constexpr auto isClient = 0x50; // bool
			constexpr auto frameWatch = 0x58; // Stopwatch
			constexpr auto nextPingTime = 0x60; // DateTime
			constexpr auto nextFlushTime = 0x68; // DateTime
			constexpr auto connectedTime = 0x70; // DateTime
			constexpr auto serverIndex = 0x78; // int32_t
			constexpr auto totalSessionId = 0x7C; // Guid
			constexpr auto sessionId = 0x8C; // Guid
			constexpr auto lastFrameGC = 0x9C; // int32_t
			constexpr auto pool = 0xA0; // ConcurrentQueue`1
			constexpr auto sortedList = 0xA8; // List`1
		}
		namespace DamageType
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace DamageTypeList
		{
			constexpr auto types = 0x10; // float[]
		}
		namespace DamageTypeEntry
		{
			constexpr auto type = 0x10; // DamageType
			constexpr auto amount = 0x14; // float
		}
		namespace Defines
		{
			constexpr auto appID = 0x0; // uint32_t
		}
		namespace Generic
		{
			constexpr auto _batchingScene = 0x0; // Scene
		}
		namespace MuteListController
		{
			constexpr auto ListParent = 0x30; // RectTransform
			constexpr auto UserWidget = 0x38; // GameObjectRef
			constexpr auto SearchList = 0x40; // SteamFriendsList
		}
		namespace ReportBug
		{
			constexpr auto GetInformation = 0x30; // GameObject
			constexpr auto Finished = 0x38; // GameObject
			constexpr auto Subject = 0x40; // RustInput
			constexpr auto Message = 0x48; // RustInput
			constexpr auto ReportButton = 0x50; // RustButton
			constexpr auto Category = 0x58; // RustButtonGroup
			constexpr auto ProgressIcon = 0x60; // RustIcon
			constexpr auto ProgressText = 0x68; // RustText
			constexpr auto ScreenshotImage = 0x70; // RawImage
			constexpr auto ScreenshotRoot = 0x78; // GameObject
			constexpr auto BlurController = 0x80; // UIBackgroundBlur
			constexpr auto SubmitButton = 0x88; // RustButton
			constexpr auto SubmitErrorRoot = 0x90; // GameObject
			constexpr auto CooldownText = 0x98; // RustText
			constexpr auto ContentMissingText = 0xA0; // RustText
			constexpr auto reportScreenshot = 0xA8; // Texture2D
			constexpr auto lastOffensiveContentReport = 0x0; // TimeSince
			constexpr auto hasSubmittedOffensiveContentReport = 0x4; // bool
			constexpr auto possibleUgcCandidate = 0xB0; // BaseEntity
		}
		namespace ReportPlayer
		{
			constexpr auto FindPlayer = 0x30; // GameObject
			constexpr auto GetInformation = 0x38; // GameObject
			constexpr auto Finished = 0x40; // GameObject
			constexpr auto RecentlyReported = 0x48; // GameObject
			constexpr auto ReasonDropdown = 0x50; // Dropdown
			constexpr auto Subject = 0x58; // RustInput
			constexpr auto Message = 0x60; // RustInput
			constexpr auto ReportButton = 0x68; // RustButton
			constexpr auto SteamUserButton = 0x70; // SteamUserButton
			constexpr auto ProgressIcon = 0x78; // RustIcon
			constexpr auto ProgressText = 0x80; // RustText
			constexpr auto ReportReasons = 0x0; // Option[]
			constexpr auto SteamId = 0x88; // UInt64
			constexpr auto reportTimes = 0x8; // Dictionary`2
		}
		namespace SteamInventoryCrafting
		{
			constexpr auto Container = 0x18; // GameObject
			constexpr auto ToggleGroup = 0x20; // ToggleGroup
			constexpr auto ConvertToItem = 0x28; // Button
			constexpr auto WoodAmount = 0x30; // TextMeshProUGUI
			constexpr auto ClothAmount = 0x38; // TextMeshProUGUI
			constexpr auto MetalAmount = 0x40; // TextMeshProUGUI
			constexpr auto InfoText = 0x48; // TextMeshProUGUI
			constexpr auto ResultItemk__BackingField = 0x50; // IPlayerItemDefinition
			constexpr auto MarketCoroutinek__BackingField = 0x58; // Coroutine
			constexpr auto CraftModal = 0x60; // SteamInventoryCrateOpen
			constexpr auto CraftingContainer = 0x68; // GameObject
			constexpr auto CraftingButton = 0x70; // GameObject
			constexpr auto NewItemModal = 0x78; // SteamInventoryNewItem
			constexpr auto selectedHash = 0x80; // int32_t
			constexpr auto priceRegex = 0x0; // Regex
			constexpr auto httpClient = 0x88; // HttpClient
			constexpr auto priceCache = 0x90; // Dictionary`2
		}
		namespace SteamInventoryCrateOpen
		{
			constexpr auto Name = 0x18; // TextMeshProUGUI
			constexpr auto Requirements = 0x20; // TextMeshProUGUI
			constexpr auto Label = 0x28; // TextMeshProUGUI
			constexpr auto IconImage = 0x30; // HttpImage
			constexpr auto ErrorPanel = 0x38; // GameObject
			constexpr auto ErrorText = 0x40; // TextMeshProUGUI
			constexpr auto CraftButton = 0x48; // GameObject
			constexpr auto ProgressPanel = 0x50; // GameObject
			constexpr auto NewItemModal = 0x58; // SteamInventoryNewItem
			constexpr auto Recipe = 0x60; // InventoryRecipe
		}
		namespace SteamInventoryManager
		{
			constexpr auto inventoryItemPrefab = 0x18; // GameObject
			constexpr auto inventoryCanvas = 0x20; // GameObject
			constexpr auto missingItems = 0x28; // GameObject
			constexpr auto CraftControl = 0x30; // SteamInventoryCrafting
			constexpr auto items = 0x38; // List`1
			constexpr auto LoadingOverlay = 0x40; // GameObject
		}
		namespace ServerAdminConvarInfo
		{
			constexpr auto InfoName = 0x18; // RustText
			constexpr auto InfoValue = 0x20; // RustText
			constexpr auto VariableInput = 0x28; // RustInput
			constexpr auto TooltipComponent = 0x30; // Tooltip
		}
		namespace ServerAdminPlayerEntry
		{
			constexpr auto PlayerName = 0x18; // RustText
			constexpr auto Ping = 0x20; // RustText
			constexpr auto Button = 0x28; // RustButton
			constexpr auto CachedInfok__BackingField = 0x30; // PlayerInfo
			constexpr auto selectedAction = 0x70; // Action
			constexpr auto deselectedAction = 0x78; // Action
		}
		namespace ServerAdminPlayerId
		{
			constexpr auto PlayerName = 0x18; // RustText
			constexpr auto PlayerId = 0x20; // RustText
		}
		namespace ServerAdminPlayerInfo
		{
			constexpr auto PlayerName = 0x18; // RustText
			constexpr auto SteamID = 0x20; // RustText
			constexpr auto OwnerSteamID = 0x28; // RustText
			constexpr auto Ping = 0x30; // RustText
			constexpr auto Address = 0x38; // RustText
			constexpr auto ConnectedTime = 0x40; // RustText
			constexpr auto ViolationLevel = 0x48; // RustText
			constexpr auto Health = 0x50; // RustText
			constexpr auto KickReasonInput = 0x58; // RustInput
			constexpr auto BanReasonInput = 0x60; // RustInput
			constexpr auto CachedInfok__BackingField = 0x68; // PlayerInfo
		}
		namespace ServerAdminServerInfo
		{
			constexpr auto InfoName = 0x18; // RustText
			constexpr auto InfoValue = 0x20; // RustText
		}
		namespace ServerAdminUGCEntry
		{
			constexpr auto cachedInfo = 0x18; // ServerUGCInfo
			constexpr auto receivedCallback = 0x40; // Action`1
		}
		namespace ServerAdminUGCEntryAudio
		{
			constexpr auto AudioSpeaker = 0x48; // AudioSource
			constexpr auto DurationText = 0x50; // RustText
			constexpr auto ProgressSlider = 0x58; // RustSlider
			constexpr auto PlayIcon = 0x60; // RustIcon
			constexpr auto blockSeek = 0x68; // bool
		}
		namespace ServerAdminUGCEntryImage
		{
			constexpr auto Image = 0x48; // RawImage
			constexpr auto Backing = 0x50; // RectTransform
			constexpr auto MultiImageRoot = 0x58; // GameObject
			constexpr auto ImageIndex = 0x60; // RustText
			constexpr auto OriginalImageSize = 0x68; // Vector2
			constexpr auto currentIndex = 0x70; // int32_t
		}
		namespace ServerAdminUGCEntryPattern
		{
			constexpr auto StarPrefab = 0x48; // GameObjectRef
			constexpr auto StarRoot = 0x50; // RectTransform
		}
		namespace ServerAdminUGCEntryStub
		{
			constexpr auto AudioWidget = 0x18; // ServerAdminUGCEntryAudio
			constexpr auto ImageWidget = 0x20; // ServerAdminUGCEntryImage
			constexpr auto PatternWidget = 0x28; // ServerAdminUGCEntryPattern
			constexpr auto PrefabName = 0x30; // RustText
			constexpr auto HistoryButton = 0x38; // RustButton
			constexpr auto HistoryIds = 0x40; // ServerAdminPlayerId[]
			constexpr auto cachedInfo = 0x48; // ServerUGCInfo
		}
		namespace ServerAdminUI
		{
			constexpr auto PlayerEntry = 0x18; // GameObjectRef
			constexpr auto PlayerInfoParent = 0x20; // RectTransform
			constexpr auto PlayerCount = 0x28; // RustText
			constexpr auto PlayerNameFilter = 0x30; // RustInput
			constexpr auto ServerInfoEntry = 0x38; // GameObjectRef
			constexpr auto ServerInfoParent = 0x40; // RectTransform
			constexpr auto ConvarInfoEntry = 0x48; // GameObjectRef
			constexpr auto ConvarInfoLongEntry = 0x50; // GameObjectRef
			constexpr auto ConvarInfoParent = 0x58; // RectTransform
			constexpr auto PlayerInfo = 0x60; // ServerAdminPlayerInfo
			constexpr auto UgcNameFilter = 0x68; // RustInput
			constexpr auto ImageEntry = 0x70; // GameObjectRef
			constexpr auto PatternEntry = 0x78; // GameObjectRef
			constexpr auto SoundEntry = 0x80; // GameObjectRef
			constexpr auto UgcVirtualScroll = 0x88; // VirtualScroll
			constexpr auto ExpandedUgcRoot = 0x90; // GameObject
			constexpr auto ExpandedImage = 0x98; // RawImage
			constexpr auto ExpandedImageBacking = 0xA0; // RectTransform
			constexpr auto initialExpandedImageSize = 0xA8; // Vector2
			constexpr auto playerEntries = 0xB0; // List`1
			constexpr auto ugcEntries = 0xB8; // List`1
			constexpr auto UgcSource = 0xC0; // UGCDataSource
		}
		namespace ForceWeather
		{
			constexpr auto component = 0x18; // Toggle
			constexpr auto Rain = 0x20; // bool
			constexpr auto Fog = 0x21; // bool
			constexpr auto Wind = 0x22; // bool
			constexpr auto Clouds = 0x23; // bool
		}
		namespace ConditionalObject
		{
			constexpr auto gameObject = 0x10; // GameObject
			constexpr auto ownerGameObject = 0x18; // GameObject
			constexpr auto socketSettings = 0x20; // ConditionalSocketSettings[]
			constexpr auto restrictOnHealth = 0x28; // bool
			constexpr auto healthRestrictionMin = 0x2C; // float
			constexpr auto healthRestrictionMax = 0x30; // float
			constexpr auto restrictOnAdjacent = 0x34; // bool
			constexpr auto adjacentRestriction = 0x38; // AdjacentCondition
			constexpr auto adjacentMatch = 0x3C; // AdjacentMatchType
			constexpr auto restrictOnLockable = 0x40; // bool
			constexpr auto lockableRestriction = 0x41; // bool
			constexpr auto IsActivek__BackingField = 0x42; // Nullable`1
		}
		namespace ConditionalSocketSettings
		{
			constexpr auto restrictOnLocation = 0x10; // bool
			constexpr auto locationRestriction = 0x14; // LocationCondition
			constexpr auto restrictOnWheel = 0x18; // bool
			constexpr auto wheelRestriction = 0x1C; // SocketWheelType
		}
		namespace EnableDisableEvent
		{
			constexpr auto enableEvent = 0x18; // UnityEvent
			constexpr auto disableEvent = 0x20; // UnityEvent
		}
		namespace EngineStorage
		{
			constexpr auto engineIcon = 0x418; // Sprite
			constexpr auto internalDamageMultiplier = 0x420; // float
			constexpr auto slotTypes = 0x428; // EngineItemTypes[]
			constexpr auto allEngineItems = 0x430; // VehicleModuleEngineItems
			constexpr auto accelerationBoostSlots = 0x438; // int32_t
			constexpr auto topSpeedBoostSlots = 0x43C; // int32_t
			constexpr auto fuelEconomyBoostSlots = 0x440; // int32_t
			constexpr auto isUsablek__BackingField = 0x444; // bool
			constexpr auto accelerationBoostPercentk__BackingField = 0x448; // float
			constexpr auto topSpeedBoostPercentk__BackingField = 0x44C; // float
			constexpr auto fuelEconomyBoostPercentk__BackingField = 0x450; // float
		}
		namespace ModularCarAudio
		{
			constexpr auto showDebug = 0x98; // bool
			constexpr auto skidSoundLoop = 0xA0; // SoundDefinition
			constexpr auto skidSoundDirtLoop = 0xA8; // SoundDefinition
			constexpr auto skidSoundSnowLoop = 0xB0; // SoundDefinition
			constexpr auto skidMinSlip = 0xB8; // float
			constexpr auto skidMaxSlip = 0xBC; // float
			constexpr auto movementStartOneshot = 0xC0; // SoundDefinition
			constexpr auto movementStopOneshot = 0xC8; // SoundDefinition
			constexpr auto movementStartStopMinTimeBetweenSounds = 0xD0; // float
			constexpr auto movementRattleLoop = 0xD8; // SoundDefinition
			constexpr auto movementRattleMaxSpeed = 0xE0; // float
			constexpr auto movementRattleMaxAngSpeed = 0xE4; // float
			constexpr auto movementRattleIdleGain = 0xE8; // float
			constexpr auto suspensionLurchSound = 0xF0; // SoundDefinition
			constexpr auto suspensionLurchMinExtensionDelta = 0xF8; // float
			constexpr auto suspensionLurchMinTimeBetweenSounds = 0xFC; // float
			constexpr auto tyreRollingSoundDef = 0x100; // SoundDefinition
			constexpr auto tyreRollingWaterSoundDef = 0x108; // SoundDefinition
			constexpr auto tyreRollingGrassSoundDef = 0x110; // SoundDefinition
			constexpr auto tyreRollingSnowSoundDef = 0x118; // SoundDefinition
			constexpr auto tyreRollGainCurve = 0x120; // AnimationCurve
			constexpr auto currentEngineAudioSet = 0x128; // EngineAudioSet
			constexpr auto modularCar = 0x130; // ModularCar
			constexpr auto skidRatio = 0x138; // float
			constexpr auto skidSound = 0x140; // Sound
			constexpr auto skidGain = 0x148; // Modulator
			constexpr auto prevWheelExtensionPercent = 0x150; // Dictionary`2
			constexpr auto wheelWasGrounded = 0x158; // Dictionary`2
			constexpr auto lastSuspensionSoundPlayed = 0x160; // Dictionary`2
			constexpr auto attachedEngineCounts = 0x168; // Dictionary`2
			constexpr auto movementRattleSound = 0x170; // Sound
			constexpr auto rattleGain = 0x178; // Modulator
			constexpr auto prevRotation = 0x180; // Quaternion
			constexpr auto wasStationary = 0x190; // bool
			constexpr auto lastMovementStartSoundPlayed = 0x194; // float
			constexpr auto lastMovementStopSoundPlayed = 0x198; // float
			constexpr auto noMovementCount = 0x19C; // float
		}
		namespace ModularVehicleSocket
		{
			constexpr auto socketTransform = 0x10; // Transform
			constexpr auto wheelType = 0x18; // SocketWheelType
			constexpr auto locationType = 0x1C; // SocketLocationType
		}
		namespace VehicleModuleEngineItems
		{
			constexpr auto engineItems = 0x18; // ItemModEngineItem[]
		}
		namespace VehicleModuleSlidingComponent
		{
			constexpr auto interactionColliderName = 0x10; // string
			constexpr auto flag_SliderOpen = 0x18; // Flags
			constexpr auto moveTime = 0x1C; // float
			constexpr auto slidingParts = 0x20; // SlidingPart[]
			constexpr auto openSoundDef = 0x28; // SoundDefinition
			constexpr auto closeSoundDef = 0x30; // SoundDefinition
			constexpr auto positionPercent = 0x38; // float
			constexpr auto invokeParentEnt = 0x40; // BaseEntity
		}
		namespace ItemModEngineItem
		{
			constexpr auto engineItemType = 0x20; // EngineItemTypes
			constexpr auto tier = 0x24; // int32_t
		}
		namespace ItemModVehicleChassis
		{
			constexpr auto entityPrefab = 0x20; // GameObjectRef
			constexpr auto socketsTaken = 0x28; // int32_t
		}
		namespace ItemModVehicleModule
		{
			constexpr auto entityPrefab = 0x20; // GameObjectRef
			constexpr auto socketsTaken = 0x28; // int32_t
			constexpr auto doNonUserSpawn = 0x2C; // bool
		}
		namespace KeyboardMidi
		{
			constexpr auto midikeymap = 0x0; // string
			constexpr auto MidiLookup = 0x8; // Dictionary`2
		}
		namespace NoteButtons
		{
			constexpr auto Regular = 0x0; // ConButton[]
			constexpr auto Sharp = 0x8; // ConButton[]
		}
		namespace Notes
		{
			constexpr auto value__ = 0x0; // int32_t
		}
		namespace GenericLerp
		{
			constexpr auto interpolator = 0x0; // Interpolator`1
			constexpr auto target = 0x0; // IGenericLerpTarget`1
			constexpr auto snapshotPrototype = 0x0; // T
			constexpr auto TimeOffset = 0x0; // float
			constexpr auto timeOffset0 = 0x0; // float
			constexpr auto timeOffset1 = 0x0; // float
			constexpr auto timeOffset2 = 0x0; // float
			constexpr auto timeOffset3 = 0x0; // float
			constexpr auto timeOffsetCount = 0x0; // int32_t
			constexpr auto extrapolatedTime = 0x0; // float
		}
		namespace Interpolator
		{
			constexpr auto list = 0x0; // List`1
			constexpr auto last = 0x0; // T
		}
		namespace TransformSnapshot
		{
			constexpr auto Timek__BackingField = 0x0; // float
			constexpr auto pos = 0x4; // Vector3
			constexpr auto rot = 0x10; // Quaternion
		}
		namespace FloatSnapshot
		{
			constexpr auto Timek__BackingField = 0x0; // float
			constexpr auto value = 0x4; // float
		}
		namespace CoverPoint
		{
			constexpr auto Volumek__BackingField = 0x10; // CoverPointVolume
			constexpr auto NormalCoverType = 0x18; // CoverType
			constexpr auto IsDynamic = 0x1C; // bool
			constexpr auto SourceTransform = 0x20; // Transform
			constexpr auto _staticPosition = 0x28; // Vector3
			constexpr auto _staticNormal = 0x34; // Vector3
			constexpr auto ReservedFork__BackingField = 0x40; // BaseEntity
			constexpr auto IsCompromisedk__BackingField = 0x48; // bool
			constexpr auto Scorek__BackingField = 0x4C; // float
		}
		namespace CoverPointVolume
		{
			constexpr auto DefaultCoverPointScore = 0x18; // float
			constexpr auto CoverPointRayLength = 0x1C; // float
			constexpr auto CoverLayerMask = 0x20; // LayerMask
			constexpr auto BlockerGroup = 0x28; // Transform
			constexpr auto ManualCoverPointGroup = 0x30; // Transform
			constexpr auto cover_point_sample_step_size = 0x0; // float
			constexpr auto cover_point_sample_step_height = 0x4; // float
			constexpr auto CoverPoints = 0x38; // List`1
			constexpr auto _coverPointBlockers = 0x40; // List`1
			constexpr auto bounds = 0x48; // Bounds
		}
		namespace ManualCoverPoint
		{
			constexpr auto IsDynamic = 0x18; // bool
			constexpr auto Score = 0x1C; // float
			constexpr auto Volume = 0x20; // CoverPointVolume
			constexpr auto Normal = 0x28; // Vector3
			constexpr auto NormalCoverType = 0x34; // CoverType
		}
		namespace AiManagedAgent
		{
			constexpr auto AgentTypeIndex = 0x18; // int32_t
		}
		namespace AiManager
		{
			constexpr auto UseCover = 0x18; // bool
			constexpr auto CoverPointVolumeCellSize = 0x1C; // float
			constexpr auto CoverPointVolumeCellHeight = 0x20; // float
			constexpr auto CoverPointRayLength = 0x24; // float
			constexpr auto cpvPrefab = 0x28; // CoverPointVolume
			constexpr auto DynamicCoverPointVolumeLayerMask = 0x30; // LayerMask
			constexpr auto coverPointVolumeGrid = 0x38; // WorldSpaceGrid`1
		}
		namespace NavmeshPrefabInstantiator
		{
			constexpr auto NavmeshPrefab = 0x18; // GameObjectRef
		}
		namespace ScientistSpawner
		{
			constexpr auto Mobile = 0x58; // bool
			constexpr auto NeverMove = 0x59; // bool
			constexpr auto SpawnHostile = 0x5A; // bool
			constexpr auto OnlyAggroMarkedTargets = 0x5B; // bool
			constexpr auto IsPeacekeeper = 0x5C; // bool
			constexpr auto IsBandit = 0x5D; // bool
			constexpr auto IsMilitaryTunnelLab = 0x5E; // bool
			constexpr auto Waypoints = 0x60; // WaypointSet
			constexpr auto LookAtInterestPointsStationary = 0x68; // Transform[]
			constexpr auto RadioEffectRepeatRange = 0x70; // Vector2
			constexpr auto Model = 0x78; // Model
			constexpr auto _mgr = 0x80; // AiLocationManager
		}
		namespace AiLocationManager
		{
			constexpr auto Managers = 0x0; // List`1
			constexpr auto MainSpawner = 0x18; // AiLocationSpawner
			constexpr auto LocationWhenMainSpawnerIsNull = 0x20; // SquadSpawnerLocation
			constexpr auto CoverPointGroup = 0x28; // Transform
			constexpr auto PatrolPointGroup = 0x30; // Transform
			constexpr auto DynamicCoverPointVolume = 0x38; // CoverPointVolume
			constexpr auto SnapCoverPointsToGround = 0x40; // bool
		}
		namespace AiLocationSpawner
		{
			constexpr auto Location = 0x58; // SquadSpawnerLocation
			constexpr auto Manager = 0x60; // AiLocationManager
			constexpr auto Junkpile = 0x68; // JunkPile
			constexpr auto IsMainSpawner = 0x70; // bool
			constexpr auto chance = 0x74; // float
			constexpr auto defaultMaxPopulation = 0x78; // int32_t
			constexpr auto defaultNumToSpawnPerTickMax = 0x7C; // int32_t
			constexpr auto defaultNumToSpawnPerTickMin = 0x80; // int32_t
		}
		namespace WaypointSet
		{
			constexpr auto _points = 0x18; // List`1
			constexpr auto navMode = 0x20; // NavModes
		}
		namespace ScientistJunkpileSpawner
		{
			constexpr auto ScientistPrefab = 0x18; // GameObjectRef
			constexpr auto Spawned = 0x20; // List`1
			constexpr auto SpawnPoints = 0x28; // BaseSpawnPoint[]
			constexpr auto MaxPopulation = 0x30; // int32_t
			constexpr auto InitialSpawn = 0x34; // bool
			constexpr auto MinRespawnTimeMinutes = 0x38; // float
			constexpr auto MaxRespawnTimeMinutes = 0x3C; // float
			constexpr auto MovementRadius = 0x40; // float
			constexpr auto ReducedLongRangeAccuracy = 0x44; // bool
			constexpr auto SpawnType = 0x48; // JunkpileType
			constexpr auto SpawnBaseChance = 0x4C; // float
		}
		namespace AStarNode
		{
			constexpr auto Parent = 0x10; // AStarNode
			constexpr auto G = 0x18; // float
			constexpr auto H = 0x1C; // float
			constexpr auto Node = 0x20; // IAIPathNode
		}
		namespace AStarNodeList
		{
			constexpr auto comparer = 0x28; // AStarNodeComparer
		}
		namespace PrivateImplementationDetails
		{
			constexpr auto _087D62403E78DC49C9277940610005765798849EA9532010ED60C2D57E018E8A = 0x0; // __StaticArrayInitTypeSize=128
			constexpr auto _0A0EC6D4742068B4D88C6145B8224EF1DC240C8A305CDFC50C3AAF9121E6875D = 0x80; // __StaticArrayInitTypeSize=12
			constexpr auto _0E2324949E99F3333C190A2D72DC1C4D3D195A1D6F548FA73962188FF3868B07 = 0x8C; // __StaticArrayInitTypeSize=2048
			constexpr auto _0EE084CADFFFB658F8CD58C183172F2D33009DF779D1A81F82CB7B5EFBD430EE = 0x88C; // __StaticArrayInitTypeSize=28
			constexpr auto _3682C3D0020436C45462995A4F64438C144BBFEBA725B00DE5906AB322B6B915 = 0x8A8; // __StaticArrayInitTypeSize=256
			constexpr auto _4480B9AD80872D62587B3451F1F1102998288B4592A9E0273FD080F32BBD16A0 = 0x9A8; // __StaticArrayInitTypeSize=28
			constexpr auto _4894ABA2851986192F27C53E7679E7E6894ACC0254BE445938A7E6CB7F234FF1 = 0x9C4; // __StaticArrayInitTypeSize=56
			constexpr auto _4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6 = 0xA00; // Int64
			constexpr auto _4C9469721776BEE6DBA86F2CC30275A64996A5A231B62D460C5FF0B842829F8E = 0xA08; // __StaticArrayInitTypeSize=80
			constexpr auto _5067FBB519143D2BBB50837A7114B667EA232E97D9C104D0E9391200C742B1FC = 0xA58; // __StaticArrayInitTypeSize=64
			constexpr auto _506C6453F87F3785712509D9C5245FE037AA50E097F04A38E17DDA39F9AE234F = 0xA98; // __StaticArrayInitTypeSize=24
			constexpr auto _5100273FB9EF921DC63C656D63E4E6E5C72DC4FFA99E83670B79217D80FE71E9 = 0xAB0; // __StaticArrayInitTypeSize=12
			constexpr auto _5DB55EE96DEC22255FABFE213AC7C494DC651B58A6FC8C0E7934E33D9DBDC8FA = 0xABC; // __StaticArrayInitTypeSize=24
			constexpr auto _62C43A98E03BC219CD683A7101365F5F41CAD798C199710F2BE30A01F0380878 = 0xAD4; // __StaticArrayInitTypeSize=64
			constexpr auto _71B7C064263BFD112B8F81B89C1E4F0033B4195FE5F291343845AC656DF4B1F2 = 0xB18; // Int64
			constexpr auto _85DD1779ED6EFC5644F3EF8B25784A4EA351D8F9C57F0FA383673B34974DFDC2 = 0xB20; // __StaticArrayInitTypeSize=12
			constexpr auto _91978E399417CFD1A1A97C40FD396771A1C9ADEB0985FB3BC5A891653B99C992 = 0xB2C; // __StaticArrayInitTypeSize=6
			constexpr auto BC82A0AC0B67F05365E16A836B704B9608DD1361818C73924728D55165F4A882 = 0xB32; // __StaticArrayInitTypeSize=24
			constexpr auto BEE794DBCD4CBBBF1C7DAF41EF192F0C8543F2C04DCD5D88F445D71BB75FC08A = 0xB4A; // __StaticArrayInitTypeSize=20
			constexpr auto C215755794210E90D92868EB5012E9D07820FF8605477A9DE6E9744D7BA3CBE9 = 0xB5E; // __StaticArrayInitTypeSize=16
			constexpr auto C5D8838BCD960F0B6E95C59D3DFBDA6DD313DB9BFC67FDA91AC377405D895685 = 0xB6E; // __StaticArrayInitTypeSize=12
			constexpr auto EC28B0ED453324964CE8F1AE6F3819EE3274E6C7262F892293A5CC05A45880EB = 0xB7A; // __StaticArrayInitTypeSize=288
			constexpr auto F186F2262AE48F2AA4F90C9A6B35913B0F6B0B895423B6267252259BFD357D3B = 0xC9A; // __StaticArrayInitTypeSize=12
			constexpr auto FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE = 0xCA6; // __StaticArrayInitTypeSize=24
		}
	}
}