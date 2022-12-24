// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm, ZeroConstructor)

void UGA_Athena_Thrower_WithTrajectory_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryPoints");

	UGA_Athena_Thrower_WithTrajectory_C_GetProjectileTrajectoryPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = params.OutSplinePoints;
	if (OutSplineTangents != nullptr)
		*OutSplineTangents = params.OutSplineTangents;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGA_Athena_Thrower_WithTrajectory_C::GetProjectileTrajectoryActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetProjectileTrajectoryActor");

	UGA_Athena_Thrower_WithTrajectory_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.GetOwningPlayer");

	UGA_Athena_Thrower_WithTrajectory_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CalcGrenadeSpeedFromPitch");

	UGA_Athena_Thrower_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_Thrower_WithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::SetupDummyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupDummyProjectile");

	UGA_Athena_Thrower_WithTrajectory_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SpawnLocationAndRotation");

	UGA_Athena_Thrower_WithTrajectory_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
// float                          Projectile_Gravity_Scale       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.SetupGrenade");

	UGA_Athena_Thrower_WithTrajectory_C_SetupGrenade_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Grenade != nullptr)
		*Base_Grenade = params.Base_Grenade;
	if (Projectile_Speed != nullptr)
		*Projectile_Speed = params.Projectile_Speed;
	if (Explosion_Gameplay_Spec != nullptr)
		*Explosion_Gameplay_Spec = params.Explosion_Gameplay_Spec;
	if (Projectile_Gravity_Scale != nullptr)
		*Projectile_Gravity_Scale = params.Projectile_Gravity_Scale;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Completed_3599970A4E9210FEBE2B88AC88FE29D2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Thrower_WithTrajectory_C::Completed_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Completed_3599970A4E9210FEBE2B88AC88FE29D2");

	UGA_Athena_Thrower_WithTrajectory_C_Completed_3599970A4E9210FEBE2B88AC88FE29D2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Cancelled_3599970A4E9210FEBE2B88AC88FE29D2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Thrower_WithTrajectory_C::Cancelled_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Cancelled_3599970A4E9210FEBE2B88AC88FE29D2");

	UGA_Athena_Thrower_WithTrajectory_C_Cancelled_3599970A4E9210FEBE2B88AC88FE29D2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Triggered_3599970A4E9210FEBE2B88AC88FE29D2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Thrower_WithTrajectory_C::Triggered_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Triggered_3599970A4E9210FEBE2B88AC88FE29D2");

	UGA_Athena_Thrower_WithTrajectory_C_Triggered_3599970A4E9210FEBE2B88AC88FE29D2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_37B0203E4AC7F2A18426DE80F86A009C
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnFinish_37B0203E4AC7F2A18426DE80F86A009C()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_37B0203E4AC7F2A18426DE80F86A009C");

	UGA_Athena_Thrower_WithTrajectory_C_OnFinish_37B0203E4AC7F2A18426DE80F86A009C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Exploded_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Exploded_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Exploded_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Exploded_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Stopped_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Stopped_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Stopped_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Stopped_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Bounced_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Bounced_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Bounced_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Bounced_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Touched_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Touched_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Touched_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Touched_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Created_F93DCAF245C97EABF008A49FAE8CFF0B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Thrower_WithTrajectory_C::Created_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Created_F93DCAF245C97EABF008A49FAE8CFF0B");

	UGA_Athena_Thrower_WithTrajectory_C_Created_F93DCAF245C97EABF008A49FAE8CFF0B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_4151964B41B373DEE708F8A881431167
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnFinish_4151964B41B373DEE708F8A881431167()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_4151964B41B373DEE708F8A881431167");

	UGA_Athena_Thrower_WithTrajectory_C_OnFinish_4151964B41B373DEE708F8A881431167_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA");

	UGA_Athena_Thrower_WithTrajectory_C_OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCancelled_C38B946747458248EFD32B823552103E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnCancelled_C38B946747458248EFD32B823552103E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCancelled_C38B946747458248EFD32B823552103E");

	UGA_Athena_Thrower_WithTrajectory_C_OnCancelled_C38B946747458248EFD32B823552103E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnInterrupted_C38B946747458248EFD32B823552103E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnInterrupted_C38B946747458248EFD32B823552103E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnInterrupted_C38B946747458248EFD32B823552103E");

	UGA_Athena_Thrower_WithTrajectory_C_OnInterrupted_C38B946747458248EFD32B823552103E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnBlendOut_C38B946747458248EFD32B823552103E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnBlendOut_C38B946747458248EFD32B823552103E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnBlendOut_C38B946747458248EFD32B823552103E");

	UGA_Athena_Thrower_WithTrajectory_C_OnBlendOut_C38B946747458248EFD32B823552103E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCompleted_C38B946747458248EFD32B823552103E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnCompleted_C38B946747458248EFD32B823552103E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnCompleted_C38B946747458248EFD32B823552103E");

	UGA_Athena_Thrower_WithTrajectory_C_OnCompleted_C38B946747458248EFD32B823552103E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_Thrower_WithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::OnAbilityInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.OnAbilityInputReleased");

	UGA_Athena_Thrower_WithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_OnEndAbility");

	UGA_Athena_Thrower_WithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_Thrower_WithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_Thrower_WithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.TossGrenade");

	UGA_Athena_Thrower_WithTrajectory_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::InitTrajectoryVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.InitTrajectoryVariables");

	UGA_Athena_Thrower_WithTrajectory_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.AthenaProjectileSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.AthenaProjectileSpawned");

	UGA_Athena_Thrower_WithTrajectory_C_AthenaProjectileSpawned_Params params;
	params.ProjectileReference = ProjectileReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.FireMontage
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Thrower_WithTrajectory_C::FireMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.FireMontage");

	UGA_Athena_Thrower_WithTrajectory_C_FireMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Thrower_WithTrajectory_C::ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory");

	UGA_Athena_Thrower_WithTrajectory_C_ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
