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

// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.UserConstructionScript");

	AB_Prj_Ranged_QuadRocket_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::PPFader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__FinishedFunc");

	AB_Prj_Ranged_QuadRocket_Athena_C_PPFader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::PPFader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.PPFader__UpdateFunc");

	AB_Prj_Ranged_QuadRocket_Athena_C_PPFader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnBounce");

	AB_Prj_Ranged_QuadRocket_Athena_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnStop");

	AB_Prj_Ranged_QuadRocket_Athena_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveBeginPlay");

	AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::FuseTimerMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.FuseTimerMax");

	AB_Prj_Ranged_QuadRocket_Athena_C_FuseTimerMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Ranged_QuadRocket_Athena_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnExploded");

	AB_Prj_Ranged_QuadRocket_Athena_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveTick");

	AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Ranged_QuadRocket_Athena_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveDestroyed");

	AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.OnTouched");

	AB_Prj_Ranged_QuadRocket_Athena_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ReceiveHit");

	AB_Prj_Ranged_QuadRocket_Athena_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_QuadRocket_Athena_C::ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_QuadRocket_Athena.B_Prj_Ranged_QuadRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena");

	AB_Prj_Ranged_QuadRocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_QuadRocket_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
