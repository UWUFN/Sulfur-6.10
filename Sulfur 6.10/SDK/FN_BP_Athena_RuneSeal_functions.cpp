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

// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.TurnOnPillarOfLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::TurnOnPillarOfLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.TurnOnPillarOfLight");

	ABP_Athena_RuneSeal_C_TurnOnPillarOfLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SetupRuneSeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::SetupRuneSeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SetupRuneSeal");

	ABP_Athena_RuneSeal_C_SetupRuneSeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnCubeChargeEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::SpawnCubeChargeEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnCubeChargeEffects");

	ABP_Athena_RuneSeal_C_SpawnCubeChargeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.IsSealFlying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Athena_RuneSeal_C::IsSealFlying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.IsSealFlying");

	ABP_Athena_RuneSeal_C_IsSealFlying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RemapTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Athena_RuneSeal_C::RemapTime(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RemapTime");

	ABP_Athena_RuneSeal_C_RemapTime_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RepositionChestsOnIsland
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::RepositionChestsOnIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.RepositionChestsOnIsland");

	ABP_Athena_RuneSeal_C_RepositionChestsOnIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_IslandPassed
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::OnRep_IslandPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_IslandPassed");

	ABP_Athena_RuneSeal_C_OnRep_IslandPassed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActiveInt
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::OnRep_SealActiveInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActiveInt");

	ABP_Athena_RuneSeal_C_OnRep_SealActiveInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_TestSealActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::OnRep_TestSealActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_TestSealActive");

	ABP_Athena_RuneSeal_C_OnRep_TestSealActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.AddVentToArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Athena_RuneVent_C*   NewVent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneSeal_C::AddVentToArray(class ABP_Athena_RuneVent_C* NewVent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.AddVentToArray");

	ABP_Athena_RuneSeal_C_AddVentToArray_Params params;
	params.NewVent = NewVent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnVortex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::SpawnVortex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.SpawnVortex");

	ABP_Athena_RuneSeal_C_SpawnVortex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateVents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::DeactivateVents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateVents");

	ABP_Athena_RuneSeal_C_DeactivateVents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateVents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::ActivateVents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateVents");

	ABP_Athena_RuneSeal_C_ActivateVents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.CloseSeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::CloseSeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.CloseSeal");

	ABP_Athena_RuneSeal_C_CloseSeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OpenSeal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::OpenSeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OpenSeal");

	ABP_Athena_RuneSeal_C_OpenSeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActive
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::OnRep_SealActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.OnRep_SealActive");

	ABP_Athena_RuneSeal_C_OnRep_SealActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.UserConstructionScript");

	ABP_Athena_RuneSeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.GetIslandTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Athena_RuneSeal_C::GetIslandTime(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.GetIslandTime");

	ABP_Athena_RuneSeal_C_GetIslandTime_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_RuneSeal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ReceiveBeginPlay");

	ABP_Athena_RuneSeal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.HarvestChestLocations
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::HarvestChestLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.HarvestChestLocations");

	ABP_Athena_RuneSeal_C_HarvestChestLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Athena_RuneSeal_C::BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	ABP_Athena_RuneSeal_C_BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneSeal_C::BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Athena_RuneSeal_C_BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateSeal
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::DeactivateSeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.DeactivateSeal");

	ABP_Athena_RuneSeal_C_DeactivateSeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Athena_RuneSeal_C::BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Athena_RuneSeal_C_BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneSeal_C::BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Athena_RuneSeal_C_BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateSeal
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_RuneSeal_C::ActivateSeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ActivateSeal");

	ABP_Athena_RuneSeal_C_ActivateSeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ExecuteUbergraph_BP_Athena_RuneSeal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_RuneSeal_C::ExecuteUbergraph_BP_Athena_RuneSeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_RuneSeal.BP_Athena_RuneSeal_C.ExecuteUbergraph_BP_Athena_RuneSeal");

	ABP_Athena_RuneSeal_C_ExecuteUbergraph_BP_Athena_RuneSeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
