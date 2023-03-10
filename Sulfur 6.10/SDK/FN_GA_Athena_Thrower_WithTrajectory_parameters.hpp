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

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Thrower_WithTrajectory_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryActor
struct UGA_Athena_Thrower_WithTrajectory_C_GetProjectileTrajectoryActor_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetOwningPlayer
struct UGA_Athena_Thrower_WithTrajectory_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_Thrower_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_Thrower_WithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_Thrower_WithTrajectory_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_Thrower_WithTrajectory_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupGrenade
struct UGA_Athena_Thrower_WithTrajectory_C_SetupGrenade_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Base_Grenade;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Projectile_Speed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            Explosion_Gameplay_Spec;                                  // (Parm, OutParm)
	float                                              Projectile_Gravity_Scale;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Completed_3599970A4E9210FEBE2B88AC88FE29D2
struct UGA_Athena_Thrower_WithTrajectory_C_Completed_3599970A4E9210FEBE2B88AC88FE29D2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Cancelled_3599970A4E9210FEBE2B88AC88FE29D2
struct UGA_Athena_Thrower_WithTrajectory_C_Cancelled_3599970A4E9210FEBE2B88AC88FE29D2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Triggered_3599970A4E9210FEBE2B88AC88FE29D2
struct UGA_Athena_Thrower_WithTrajectory_C_Triggered_3599970A4E9210FEBE2B88AC88FE29D2_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_37B0203E4AC7F2A18426DE80F86A009C
struct UGA_Athena_Thrower_WithTrajectory_C_OnFinish_37B0203E4AC7F2A18426DE80F86A009C_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Exploded_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Exploded_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Stopped_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Stopped_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Bounced_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Bounced_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Touched_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Touched_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Created_F93DCAF245C97EABF008A49FAE8CFF0B
struct UGA_Athena_Thrower_WithTrajectory_C_Created_F93DCAF245C97EABF008A49FAE8CFF0B_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_4151964B41B373DEE708F8A881431167
struct UGA_Athena_Thrower_WithTrajectory_C_OnFinish_4151964B41B373DEE708F8A881431167_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA
struct UGA_Athena_Thrower_WithTrajectory_C_OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCancelled_C38B946747458248EFD32B823552103E
struct UGA_Athena_Thrower_WithTrajectory_C_OnCancelled_C38B946747458248EFD32B823552103E_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnInterrupted_C38B946747458248EFD32B823552103E
struct UGA_Athena_Thrower_WithTrajectory_C_OnInterrupted_C38B946747458248EFD32B823552103E_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnBlendOut_C38B946747458248EFD32B823552103E
struct UGA_Athena_Thrower_WithTrajectory_C_OnBlendOut_C38B946747458248EFD32B823552103E_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCompleted_C38B946747458248EFD32B823552103E
struct UGA_Athena_Thrower_WithTrajectory_C_OnCompleted_C38B946747458248EFD32B823552103E_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_Thrower_WithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_Thrower_WithTrajectory_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_Thrower_WithTrajectory_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_Thrower_WithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_Thrower_WithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.TossGrenade
struct UGA_Athena_Thrower_WithTrajectory_C_TossGrenade_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.InitTrajectoryVariables
struct UGA_Athena_Thrower_WithTrajectory_C_InitTrajectoryVariables_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.AthenaProjectileSpawned
struct UGA_Athena_Thrower_WithTrajectory_C_AthenaProjectileSpawned_Params
{
	class AFortProjectileBase*                         ProjectileReference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.FireMontage
struct UGA_Athena_Thrower_WithTrajectory_C_FireMontage_Params
{
};

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory
struct UGA_Athena_Thrower_WithTrajectory_C_ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
