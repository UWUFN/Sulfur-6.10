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

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Handle Pawn Detach RC
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::Handle_Pawn_Detach_RC()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Handle Pawn Detach RC");

	AB_Prj_Athena_ShockGrenade_C_Handle_Pawn_Detach_RC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.UserConstructionScript");

	AB_Prj_Athena_ShockGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_ShockGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_ShockGrenade_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnStop");

	AB_Prj_Athena_ShockGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::Stop_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Stop_Rotation");

	AB_Prj_Athena_ShockGrenade_C_Stop_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_ShockGrenade_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnExploded");

	AB_Prj_Athena_ShockGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_ShockGrenade_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_Athena_ShockGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchDeimos
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::LaunchDeimos()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchDeimos");

	AB_Prj_Athena_ShockGrenade_C_LaunchDeimos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ShockGrenade_C::OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnTouched");

	AB_Prj_Athena_ShockGrenade_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_ShockGrenade_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");

	AB_Prj_Athena_ShockGrenade_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ExecuteUbergraph_B_Prj_Athena_ShockGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ShockGrenade_C::ExecuteUbergraph_B_Prj_Athena_ShockGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ExecuteUbergraph_B_Prj_Athena_ShockGrenade");

	AB_Prj_Athena_ShockGrenade_C_ExecuteUbergraph_B_Prj_Athena_ShockGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
