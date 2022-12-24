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

// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::SetupDummyProjectileRed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SetupDummyProjectileRed");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::Server_SpawnProjectile(struct FVector* Location, struct FRotator* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
