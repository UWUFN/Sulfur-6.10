#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CUBE.CUBE_C
// 0x0700 (0x0DF8 - 0x06F8)
class ACUBE_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientAudio;                                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LakeTimeline_Vectortrack_46D4818442D63D3EF0E04BB124CC5D90;// 0x0718(0x000C) (IsPlainOldData)
	float                                              LakeTimeline_CubeMovement_46D4818442D63D3EF0E04BB124CC5D90;// 0x0724(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LakeTimeline__Direction_46D4818442D63D3EF0E04BB124CC5D90; // 0x0728(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LakeTimeline;                                             // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CubeAppearGlow_Glow_33F5C90741462707C010C785CF1397D6;     // 0x0738(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CubeAppearGlow__Direction_33F5C90741462707C010C785CF1397D6;// 0x073C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x073D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CubeAppearGlow;                                           // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RuneEffect_NewTrack_0_D0367CB34A1CE7B75476B3AC031AE666;   // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RuneEffect__Direction_D0367CB34A1CE7B75476B3AC031AE666;   // 0x074C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RuneEffect;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FinalSinkTimeline__Direction_A2C7BC3544C52543A3F11E824C06D673;// 0x0758(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FinalSinkTimeline;                                        // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RollTimeline_Percent_Complete_4CCDB9044D0CBFCF7DBC0F8942AEF43D;// 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RollTimeline_Tip_Amount_4CCDB9044D0CBFCF7DBC0F8942AEF43D; // 0x076C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RollTimeline__Direction_4CCDB9044D0CBFCF7DBC0F8942AEF43D; // 0x0770(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class UTimelineComponent*                          RollTimeline;                                             // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DuplicateIndex;                                           // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviewTime;                                              // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Debug_Up;                                                 // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x078A(0x0002) MISSED OFFSET
	int                                                PathIndex;                                                // 0x078C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  NewTransform;                                             // 0x0790(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  OldTransform;                                             // 0x07C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Corners;                                                  // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Faces;                                                    // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ClosestCorners;                                           // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TraceDistance;                                            // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AveragePos;                                               // 0x082C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulsePlayerStrength;                                    // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseZStrength;                                         // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseZStrengthWalking;                                  // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0844(0x000C) MISSED OFFSET
	struct FTransform                                  NewTransformPt2;                                          // 0x0850(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                SnapToGround;                                             // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _2PartTransform;                                          // 0x0884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xB];                                       // 0x0885(0x000B) MISSED OFFSET
	struct FTransform                                  SetTransform;                                             // 0x0890(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              IgnoreArray;                                              // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                DrawLast;                                                 // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsMoving;                                                 // 0x08D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x08D5(0x0003) MISSED OFFSET
	TArray<struct FCubeStruct>                         Steps;                                                    // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData10[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET
	struct FCubeStruct                                 CurrentStep;                                              // 0x08F0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      SealNumber;                                               // 0x0930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	int                                                EventNumberOfDays;                                        // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimespan                                   TimeUntilEnd;                                             // 0x0938(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NormalizedProgress;                                       // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurveLookup;                                              // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitialSetup;                                             // 0x0954(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	TArray<struct FString>                             EventsToBindTo;                                           // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Runes;                                                    // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, class UCurveFloat*>                      ProgressCurves;                                           // 0x0978(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LastEventName;                                            // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimespan                                   EventTimeTotal;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             TempDust;                                                 // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CubeVisibleWithCollision;                                 // 0x09E8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CubeTurnedOn;                                             // 0x09E9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x09EA(0x0006) MISSED OFFSET
	TArray<int>                                        RealStepsPerRune;                                         // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABGA_Cube_Area_Effect_C*                     LowGravZoneActor;                                         // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RuneDestination;                                          // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    CubeSetupComplete;                                        // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrintingRune;                                             // 0x0A28(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	struct FName                                       NewVar_0_1;                                               // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    StopRuneGlow;                                             // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CubeAppearEffectTime;                                     // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	class UParticleSystem*                             CubeSpawnEmitter;                                         // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioAmbFadeTime;                                         // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAudioDebugEnabled;                                       // 0x0A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0A5D(0x0003) MISSED OFFSET
	class USoundBase*                                  AudioOnLaunchPlayer;                                      // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AudioRoll;                                                // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AudioRoll_2Part_1_2;                                      // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AudioRoll_2Part_1_End;                                    // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AudioRoll_2Part_2_3;                                      // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  AudioRollLand;                                            // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RollAmbientVolumeCurve;                                   // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RollAmbientPitchCurve;                                    // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollEndOffsetTime;                                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageAccumulated;                                        // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerToZap;                                              // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class ACubeOverlapActor_C*                         OverlapActor;                                             // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CubeSpawnEffects;                                         // 0x0AB8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	struct FScalableFloat                              CubeDamageThreshold;                                      // 0x0AC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ImpulseVehicleStrength;                                   // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class AFortAthenaVehicle*                          ImpulsedVehicle;                                          // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTransform>                          RuneLocations;                                            // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundBase*                                  AudioPrintLoop;                                           // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             RunePrintAudioComp;                                       // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  AudioPrintStart;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AudioSpawn;                                               // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AudioSpawnDustAppear;                                     // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    LandedAtRune;                                             // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<int, float>                                   WoodsSteps;                                               // 0x0B38(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DebugGameTime;                                            // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestinationTimeOfDay;                                     // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsUntilspawn;                                        // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    CubeReady;                                                // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  AudioOnLaunchPlayerVocal;                                 // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar_1_2;                                               // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	TArray<int>                                        KeyframesPerRune;                                         // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TryPathIndex;                                             // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CubeLoopFX;                                               // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ImpulseStrengthZVehicle;                                  // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	struct FTimerHandle                                SpawnCubeTimer;                                           // 0x0BE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    CubeLeftPosition;                                         // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData26[0x8];                                       // 0x0BF8(0x0008) MISSED OFFSET
	struct FTransform                                  RollForwardTransform;                                     // 0x0C00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCubeStruct>                         TempSteps;                                                // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APlayerPawn_Athena_C*>                LastLaunchedPlayer;                                       // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<int, struct FTransform>                       CorrectiveTransforms;                                     // 0x0C50(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               GravVolumesSpawned;                                       // 0x0CA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0CA1(0x0007) MISSED OFFSET
	struct FScalableFloat                              ImpulseStrengthPlayer;                                    // 0x0CA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseStrengthVehicle;                                   // 0x0CC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseVehicleZ;                                          // 0x0CE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulsePlayerZ;                                           // 0x0D08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulsePlayerZWalking;                                    // 0x0D28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RetriggerCleanupTimer;                                    // 0x0D48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ACube_Dest_Scripting_C*                      CubeDestBlueprint;                                        // 0x0D50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAtLake;                                                 // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0D59(0x0003) MISSED OFFSET
	float                                              SkyStartingIntensity;                                     // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LerpFrom;                                                 // 0x0D60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LerpTo;                                                   // 0x0D90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AudioRollLandLake;                                        // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TiltedHit;                                                // 0x0DC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestTurnedOn;                                             // 0x0DC9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x0DCA(0x0006) MISSED OFFSET
	TArray<class ABGA_Cube_Area_Effect_C*>             AreaActors;                                               // 0x0DD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                LowGravSphereArray;                                       // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        DistantLakeGlow;                                          // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CUBE.CUBE_C");
		return ptr;
	}


	void OnRep_DestTurnedOn();
	bool IsLakeSplash();
	void OnRep_GravVolumesSpawned();
	void ImpulseVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location, float ZMultiplier);
	void SetSpecificTimeOfDay(float Seconds);
	void Set_Tree_MPC(bool AtStartup);
	void OnRep_CubeSpawn();
	void OnRep_PrintingRune();
	void CalcRuneSteps();
	void StepsThisRuneIndex(int RuneDestination);
	void OnRep_CubeTurnedOn();
	void OnRep_CubeHidden();
	void UnhideAndSetCollision(bool TurnedOn);
	void CalculateNextMove(const struct FTimespan& TimespanTillEnd, int RuneDestination, int* NextIndex, float* SecondsTillMove);
	void TraceCubeShape(bool* Hit);
	void OnRep_StartingIndex();
	void DoFindDownFace(int StepToTest, int* FaceIndex);
	void OnRep_PathIndex();
	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	void LaunchPlayerAway(const struct FVector& HitLocation, const struct FVector& HitNormal, class APlayerPawn_Athena_C* Player, float ForceMultiplier, bool FlashCube);
	void FindBottomFace(const struct FTransform& Transform, struct FVector* Downward_Face);
	void UserConstructionScript();
	void FinalSinkTimeline__FinishedFunc();
	void FinalSinkTimeline__UpdateFunc();
	void RuneEffect__FinishedFunc();
	void RuneEffect__UpdateFunc();
	void CubeAppearGlow__FinishedFunc();
	void CubeAppearGlow__UpdateFunc();
	void LakeTimeline__FinishedFunc();
	void LakeTimeline__UpdateFunc();
	void LakeTimeline__DoneSinking__EventFunc();
	void LakeTimeline__TurnOn__EventFunc();
	void RollTimeline__FinishedFunc();
	void RollTimeline__UpdateFunc();
	void OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_750DF2F749472DA252073089796089C8(const struct FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void PerformStep();
	void _1___DupLastIndex();
	void _2__DeleteLastIndex();
	void TwoPartTransitionEvent();
	void SwapLast2Indicies();
	void _3__DuplicateSpecified();
	void PlayFinalSink();
	void FindDownFaces();
	void StartRuneSequence(bool StartMidway);
	void ClearStartingPosition();
	void IncrementIndex();
	void CubeRollFeedback();
	void ImpactLake();
	void CalcStepsPerRuneIndex();
	void Show();
	void RippleGC(const struct FVector& Location, const struct FVector& Normal, class AActor* Source, float Scale);
	void ResetRollInit();
	void SetRuneGlow(bool Active);
	void SpawnCube();
	void Set_Ambient_Audio_Enabled(bool Enabled);
	void Start_Roll_Audio_Part_1(bool Is_2_Part_Roll);
	void Start_Roll_Audio_Part_2();
	void End_Roll_Audio();
	void Update_Roll_Audio(float Percent_Complete);
	void CubeSpawnEffect();
	void TestForCrushOnHit(float Trace_Distance);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void CrushPlayer(class AActor* Actor);
	void Set_Rune_Print_Audio_Enabled(bool Enabled);
	void On_Spawn_Dust_Appear(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ContinueSetup();
	void LeftRuneLocation();
	void CubeLeftPathPoint();
	void Rollforward();
	void ClearLastLaunchedPlayer();
	void On_Amb_Zap_Spawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void CubeAppear();
	void ReplayScrubbed();
	void New(int NewParam);
	void End_Roll_Audio_Lake();
	void ReplayScrubSetup();
	void Tilted_Impact_Sound();
	void SetupLake();
	void Next(int NewParam);
	void ReceiveBeginPlay();
	void Reset();
	void TurnOn();
	void ResetImpulseTimer();
	void ExecuteUbergraph_CUBE(int EntryPoint);
	void CubeLeftPosition__DelegateSignature();
	void CubeReady__DelegateSignature();
	void LandedAtRune__DelegateSignature(int Index);
	void StopRuneGlow__DelegateSignature();
	void CubeSetupComplete__DelegateSignature(int CurrentIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
