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

// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.GetLaunchVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToLaunch                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LaunchVector                   (Parm, OutParm, IsPlainOldData)

void ABP_Athena_RuneVent_C::GetLaunchVector(class AActor* ActorToLaunch, struct FVector* LaunchVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.GetLaunchVector");

	ABP_Athena_RuneVent_C_GetLaunchVector_Params params;
	params.ActorToLaunch = ActorToLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaunchVector != nullptr)
		*LaunchVector = params.LaunchVector;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.DoLaunchEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GCTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneVent_C::DoLaunchEffects(class AActor* GCTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.DoLaunchEffects");

	ABP_Athena_RuneVent_C_DoLaunchEffects_Params params;
	params.GCTarget = GCTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_ForceActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::OnRep_ForceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_ForceActive");

	ABP_Athena_RuneVent_C_OnRep_ForceActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.SetActiveEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::SetActiveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.SetActiveEffects");

	ABP_Athena_RuneVent_C_SetActiveEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_VentIsActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::OnRep_VentIsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnRep_VentIsActive");

	ABP_Athena_RuneVent_C_OnRep_VentIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.UserConstructionScript");

	ABP_Athena_RuneVent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_RuneVent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReceiveBeginPlay");

	ABP_Athena_RuneVent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Athena_RuneVent_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Athena_RuneVent_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void ABP_Athena_RuneVent_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.OnWorldReady");

	ABP_Athena_RuneVent_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TimeReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Athena_RuneVent_C::TimeReady(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TimeReady");

	ABP_Athena_RuneVent_C_TimeReady_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReplicateGC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneVent_C::ReplicateGC(class AActor* PlayerTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ReplicateGC");

	ABP_Athena_RuneVent_C_ReplicateGC_Params params;
	params.PlayerTarget = PlayerTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.RetryRootMotionPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::RetryRootMotionPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.RetryRootMotionPlayer");

	ABP_Athena_RuneVent_C_RetryRootMotionPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchPlayer
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::TryLaunchPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchPlayer");

	ABP_Athena_RuneVent_C_TryLaunchPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneVent_C::TryLaunchVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.TryLaunchVehicle");

	ABP_Athena_RuneVent_C_TryLaunchVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ExecuteUbergraph_BP_Athena_RuneVent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneVent_C::ExecuteUbergraph_BP_Athena_RuneVent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneVent.BP_Athena_RuneVent_C.ExecuteUbergraph_BP_Athena_RuneVent");

	ABP_Athena_RuneVent_C_ExecuteUbergraph_BP_Athena_RuneVent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
