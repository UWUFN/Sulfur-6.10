#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CUBE.CUBE_C.OnRep_DestTurnedOn
struct ACUBE_C_OnRep_DestTurnedOn_Params
{
};

// Function CUBE.CUBE_C.IsLakeSplash
struct ACUBE_C_IsLakeSplash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnRep_GravVolumesSpawned
struct ACUBE_C_OnRep_GravVolumesSpawned_Params
{
};

// Function CUBE.CUBE_C.ImpulseVehicle
struct ACUBE_C_ImpulseVehicle_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ZMultiplier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.SetSpecificTimeOfDay
struct ACUBE_C_SetSpecificTimeOfDay_Params
{
	float                                              Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.Set Tree MPC
struct ACUBE_C_Set_Tree_MPC_Params
{
	bool                                               AtStartup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnRep_CubeSpawn
struct ACUBE_C_OnRep_CubeSpawn_Params
{
};

// Function CUBE.CUBE_C.OnRep_PrintingRune
struct ACUBE_C_OnRep_PrintingRune_Params
{
};

// Function CUBE.CUBE_C.CalcRuneSteps
struct ACUBE_C_CalcRuneSteps_Params
{
};

// Function CUBE.CUBE_C.StepsThisRuneIndex
struct ACUBE_C_StepsThisRuneIndex_Params
{
	int                                                RuneDestination;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnRep_CubeTurnedOn
struct ACUBE_C_OnRep_CubeTurnedOn_Params
{
};

// Function CUBE.CUBE_C.OnRep_CubeHidden
struct ACUBE_C_OnRep_CubeHidden_Params
{
};

// Function CUBE.CUBE_C.UnhideAndSetCollision
struct ACUBE_C_UnhideAndSetCollision_Params
{
	bool                                               TurnedOn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.CalculateNextMove
struct ACUBE_C_CalculateNextMove_Params
{
	struct FTimespan                                   TimespanTillEnd;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                RuneDestination;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SecondsTillMove;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.TraceCubeShape
struct ACUBE_C_TraceCubeShape_Params
{
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnRep_StartingIndex
struct ACUBE_C_OnRep_StartingIndex_Params
{
};

// Function CUBE.CUBE_C.DoFindDownFace
struct ACUBE_C_DoFindDownFace_Params
{
	int                                                StepToTest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FaceIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnRep_PathIndex
struct ACUBE_C_OnRep_PathIndex_Params
{
};

// Function CUBE.CUBE_C.ShouldDie
struct ACUBE_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CUBE.CUBE_C.LaunchPlayerAway
struct ACUBE_C_LaunchPlayerAway_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class APlayerPawn_Athena_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForceMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlashCube;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.FindBottomFace
struct ACUBE_C_FindBottomFace_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Downward_Face;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function CUBE.CUBE_C.UserConstructionScript
struct ACUBE_C_UserConstructionScript_Params
{
};

// Function CUBE.CUBE_C.FinalSinkTimeline__FinishedFunc
struct ACUBE_C_FinalSinkTimeline__FinishedFunc_Params
{
};

// Function CUBE.CUBE_C.FinalSinkTimeline__UpdateFunc
struct ACUBE_C_FinalSinkTimeline__UpdateFunc_Params
{
};

// Function CUBE.CUBE_C.RuneEffect__FinishedFunc
struct ACUBE_C_RuneEffect__FinishedFunc_Params
{
};

// Function CUBE.CUBE_C.RuneEffect__UpdateFunc
struct ACUBE_C_RuneEffect__UpdateFunc_Params
{
};

// Function CUBE.CUBE_C.CubeAppearGlow__FinishedFunc
struct ACUBE_C_CubeAppearGlow__FinishedFunc_Params
{
};

// Function CUBE.CUBE_C.CubeAppearGlow__UpdateFunc
struct ACUBE_C_CubeAppearGlow__UpdateFunc_Params
{
};

// Function CUBE.CUBE_C.LakeTimeline__FinishedFunc
struct ACUBE_C_LakeTimeline__FinishedFunc_Params
{
};

// Function CUBE.CUBE_C.LakeTimeline__UpdateFunc
struct ACUBE_C_LakeTimeline__UpdateFunc_Params
{
};

// Function CUBE.CUBE_C.LakeTimeline__DoneSinking__EventFunc
struct ACUBE_C_LakeTimeline__DoneSinking__EventFunc_Params
{
};

// Function CUBE.CUBE_C.LakeTimeline__TurnOn__EventFunc
struct ACUBE_C_LakeTimeline__TurnOn__EventFunc_Params
{
};

// Function CUBE.CUBE_C.RollTimeline__FinishedFunc
struct ACUBE_C_RollTimeline__FinishedFunc_Params
{
};

// Function CUBE.CUBE_C.RollTimeline__UpdateFunc
struct ACUBE_C_RollTimeline__UpdateFunc_Params
{
};

// Function CUBE.CUBE_C.OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9
struct ACUBE_C_OnEventEnded_16C2560C48CD325DC3C47CA23BEBB2C9_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9
struct ACUBE_C_OnEventUpdated_16C2560C48CD325DC3C47CA23BEBB2C9_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9
struct ACUBE_C_OnEventActive_16C2560C48CD325DC3C47CA23BEBB2C9_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0
struct ACUBE_C_OnEventEnded_2648B1B24D74D365B5C956ACA1EAECB0_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0
struct ACUBE_C_OnEventUpdated_2648B1B24D74D365B5C956ACA1EAECB0_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0
struct ACUBE_C_OnEventActive_2648B1B24D74D365B5C956ACA1EAECB0_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventEnded_750DF2F749472DA252073089796089C8
struct ACUBE_C_OnEventEnded_750DF2F749472DA252073089796089C8_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventUpdated_750DF2F749472DA252073089796089C8
struct ACUBE_C_OnEventUpdated_750DF2F749472DA252073089796089C8_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.OnEventActive_750DF2F749472DA252073089796089C8
struct ACUBE_C_OnEventActive_750DF2F749472DA252073089796089C8_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.ReceiveHit
struct ACUBE_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnDamageServer
struct ACUBE_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.PerformStep
struct ACUBE_C_PerformStep_Params
{
};

// Function CUBE.CUBE_C.1 - DupLastIndex
struct ACUBE_C__1___DupLastIndex_Params
{
};

// Function CUBE.CUBE_C.2- DeleteLastIndex
struct ACUBE_C__2__DeleteLastIndex_Params
{
};

// Function CUBE.CUBE_C.TwoPartTransitionEvent
struct ACUBE_C_TwoPartTransitionEvent_Params
{
};

// Function CUBE.CUBE_C.SwapLast2Indicies
struct ACUBE_C_SwapLast2Indicies_Params
{
};

// Function CUBE.CUBE_C.3- DuplicateSpecified
struct ACUBE_C__3__DuplicateSpecified_Params
{
};

// Function CUBE.CUBE_C.PlayFinalSink
struct ACUBE_C_PlayFinalSink_Params
{
};

// Function CUBE.CUBE_C.FindDownFaces
struct ACUBE_C_FindDownFaces_Params
{
};

// Function CUBE.CUBE_C.StartRuneSequence
struct ACUBE_C_StartRuneSequence_Params
{
	bool                                               StartMidway;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.ClearStartingPosition
struct ACUBE_C_ClearStartingPosition_Params
{
};

// Function CUBE.CUBE_C.IncrementIndex
struct ACUBE_C_IncrementIndex_Params
{
};

// Function CUBE.CUBE_C.CubeRollFeedback
struct ACUBE_C_CubeRollFeedback_Params
{
};

// Function CUBE.CUBE_C.ImpactLake
struct ACUBE_C_ImpactLake_Params
{
};

// Function CUBE.CUBE_C.CalcStepsPerRuneIndex
struct ACUBE_C_CalcStepsPerRuneIndex_Params
{
};

// Function CUBE.CUBE_C.Show
struct ACUBE_C_Show_Params
{
};

// Function CUBE.CUBE_C.RippleGC
struct ACUBE_C_RippleGC_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.ResetRollInit
struct ACUBE_C_ResetRollInit_Params
{
};

// Function CUBE.CUBE_C.SetRuneGlow
struct ACUBE_C_SetRuneGlow_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.SpawnCube
struct ACUBE_C_SpawnCube_Params
{
};

// Function CUBE.CUBE_C.Set Ambient Audio Enabled
struct ACUBE_C_Set_Ambient_Audio_Enabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.Start Roll Audio Part 1
struct ACUBE_C_Start_Roll_Audio_Part_1_Params
{
	bool                                               Is_2_Part_Roll;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.Start Roll Audio Part 2
struct ACUBE_C_Start_Roll_Audio_Part_2_Params
{
};

// Function CUBE.CUBE_C.End Roll Audio
struct ACUBE_C_End_Roll_Audio_Params
{
};

// Function CUBE.CUBE_C.Update Roll Audio
struct ACUBE_C_Update_Roll_Audio_Params
{
	float                                              Percent_Complete;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.CubeSpawnEffect
struct ACUBE_C_CubeSpawnEffect_Params
{
};

// Function CUBE.CUBE_C.TestForCrushOnHit
struct ACUBE_C_TestForCrushOnHit_Params
{
	float                                              Trace_Distance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.OnDamagePlayEffects
struct ACUBE_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CUBE.CUBE_C.CrushPlayer
struct ACUBE_C_CrushPlayer_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.Set Rune Print Audio Enabled
struct ACUBE_C_Set_Rune_Print_Audio_Enabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.On Spawn Dust Appear
struct ACUBE_C_On_Spawn_Dust_Appear_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CUBE.CUBE_C.ContinueSetup
struct ACUBE_C_ContinueSetup_Params
{
};

// Function CUBE.CUBE_C.LeftRuneLocation
struct ACUBE_C_LeftRuneLocation_Params
{
};

// Function CUBE.CUBE_C.CubeLeftPathPoint
struct ACUBE_C_CubeLeftPathPoint_Params
{
};

// Function CUBE.CUBE_C.Rollforward
struct ACUBE_C_Rollforward_Params
{
};

// Function CUBE.CUBE_C.ClearLastLaunchedPlayer
struct ACUBE_C_ClearLastLaunchedPlayer_Params
{
};

// Function CUBE.CUBE_C.On Amb Zap Spawn
struct ACUBE_C_On_Amb_Zap_Spawn_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CUBE.CUBE_C.CubeAppear
struct ACUBE_C_CubeAppear_Params
{
};

// Function CUBE.CUBE_C.ReplayScrubbed
struct ACUBE_C_ReplayScrubbed_Params
{
};

// Function CUBE.CUBE_C.New
struct ACUBE_C_New_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.End Roll Audio Lake
struct ACUBE_C_End_Roll_Audio_Lake_Params
{
};

// Function CUBE.CUBE_C.ReplayScrubSetup
struct ACUBE_C_ReplayScrubSetup_Params
{
};

// Function CUBE.CUBE_C.Tilted Impact Sound
struct ACUBE_C_Tilted_Impact_Sound_Params
{
};

// Function CUBE.CUBE_C.SetupLake
struct ACUBE_C_SetupLake_Params
{
};

// Function CUBE.CUBE_C.Next
struct ACUBE_C_Next_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.ReceiveBeginPlay
struct ACUBE_C_ReceiveBeginPlay_Params
{
};

// Function CUBE.CUBE_C.Reset
struct ACUBE_C_Reset_Params
{
};

// Function CUBE.CUBE_C.TurnOn
struct ACUBE_C_TurnOn_Params
{
};

// Function CUBE.CUBE_C.ResetImpulseTimer
struct ACUBE_C_ResetImpulseTimer_Params
{
};

// Function CUBE.CUBE_C.ExecuteUbergraph_CUBE
struct ACUBE_C_ExecuteUbergraph_CUBE_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.CubeLeftPosition__DelegateSignature
struct ACUBE_C_CubeLeftPosition__DelegateSignature_Params
{
};

// Function CUBE.CUBE_C.CubeReady__DelegateSignature
struct ACUBE_C_CubeReady__DelegateSignature_Params
{
};

// Function CUBE.CUBE_C.LandedAtRune__DelegateSignature
struct ACUBE_C_LandedAtRune__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CUBE.CUBE_C.StopRuneGlow__DelegateSignature
struct ACUBE_C_StopRuneGlow__DelegateSignature_Params
{
};

// Function CUBE.CUBE_C.CubeSetupComplete__DelegateSignature
struct ACUBE_C_CubeSetupComplete__DelegateSignature_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
