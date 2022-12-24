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

// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.BP_OnTrigger
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         TouchingActors                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bOutConsumeEvent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATrap_Wall_BouncePad_C::BP_OnTrigger(TArray<class AActor*>* TouchingActors, bool* bOutConsumeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.BP_OnTrigger");

	ATrap_Wall_BouncePad_C_BP_OnTrigger_Params params;
	params.TouchingActors = TouchingActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutConsumeEvent != nullptr)
		*bOutConsumeEvent = params.bOutConsumeEvent;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.DeimosApplyGameplayEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Wall_BouncePad_C::DeimosApplyGameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.DeimosApplyGameplayEffects");

	ATrap_Wall_BouncePad_C_DeimosApplyGameplayEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.DeimosLaunch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyPawn_Parent_C*     DeimosPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Wall_BouncePad_C::DeimosLaunch(class AEnemyPawn_Parent_C* DeimosPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.DeimosLaunch");

	ATrap_Wall_BouncePad_C_DeimosLaunch_Params params;
	params.DeimosPawn = DeimosPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.PlayerApplyGameplayEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Wall_BouncePad_C::PlayerApplyGameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.PlayerApplyGameplayEffects");

	ATrap_Wall_BouncePad_C_PlayerApplyGameplayEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnRep_Overlappedactor
// (BlueprintCallable, BlueprintEvent)

void ATrap_Wall_BouncePad_C::OnRep_Overlappedactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnRep_Overlappedactor");

	ATrap_Wall_BouncePad_C_OnRep_Overlappedactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.VehicleLaunch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Wall_BouncePad_C::VehicleLaunch(class AFortAthenaVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.VehicleLaunch");

	ATrap_Wall_BouncePad_C_VehicleLaunch_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.PlayerLaunch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   FortPlayerPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATrap_Wall_BouncePad_C::PlayerLaunch(class AFortPlayerPawnAthena* FortPlayerPawn, const struct FVector& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.PlayerLaunch");

	ATrap_Wall_BouncePad_C_PlayerLaunch_Params params;
	params.FortPlayerPawn = FortPlayerPawn;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Wall_BouncePad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.UserConstructionScript");

	ATrap_Wall_BouncePad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Wall_BouncePad_C::OnPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnPlaced");

	ATrap_Wall_BouncePad_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Wall_BouncePad_C::OnFinishedBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.OnFinishedBuilding");

	ATrap_Wall_BouncePad_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Wall_BouncePad_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Wall_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATrap_Wall_BouncePad_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ReceiveDestroyed");

	ATrap_Wall_BouncePad_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrap_Wall_BouncePad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ReceiveBeginPlay");

	ATrap_Wall_BouncePad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ExecuteUbergraph_Trap_Wall_BouncePad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Wall_BouncePad_C::ExecuteUbergraph_Trap_Wall_BouncePad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap_Wall_BouncePad.Trap_Wall_BouncePad_C.ExecuteUbergraph_Trap_Wall_BouncePad");

	ATrap_Wall_BouncePad_C_ExecuteUbergraph_Trap_Wall_BouncePad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
