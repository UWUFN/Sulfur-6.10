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

// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.UserConstructionScript");

	AB_Prj_Ranged_Thrower_Flame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__FinishedFunc");

	AB_Prj_Ranged_Thrower_Flame_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.Timeline_0__UpdateFunc");

	AB_Prj_Ranged_Thrower_Flame_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveTick");

	AB_Prj_Ranged_Thrower_Flame_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveDestroyed");

	AB_Prj_Ranged_Thrower_Flame_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent_1_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::CustomEvent_1_2(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent_1_2");

	AB_Prj_Ranged_Thrower_Flame_C_CustomEvent_1_2_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Ranged_Thrower_Flame_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnExploded");

	AB_Prj_Ranged_Thrower_Flame_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveHit
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

void AB_Prj_Ranged_Thrower_Flame_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveHit");

	AB_Prj_Ranged_Thrower_Flame_C_ReceiveHit_Params params;
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


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.CustomEvent");

	AB_Prj_Ranged_Thrower_Flame_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AB_Prj_Ranged_Thrower_Flame_C_BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_Thrower_Flame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ReceiveBeginPlay");

	AB_Prj_Ranged_Thrower_Flame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnStop");

	AB_Prj_Ranged_Thrower_Flame_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.OnBounce");

	AB_Prj_Ranged_Thrower_Flame_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_Thrower_Flame_C::ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C.ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame");

	AB_Prj_Ranged_Thrower_Flame_C_ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
