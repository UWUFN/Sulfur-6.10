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

// Function CubeOverlapActor.CubeOverlapActor_C.GetSocketClosestToTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookAtDirection                (Parm, OutParm, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, IsPlainOldData)

void ACubeOverlapActor_C::GetSocketClosestToTarget(class AActor* TargetPlayer, struct FVector* LookAtDirection, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.GetSocketClosestToTarget");

	ACubeOverlapActor_C_GetSocketClosestToTarget_Params params;
	params.TargetPlayer = TargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtDirection != nullptr)
		*LookAtDirection = params.LookAtDirection;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function CubeOverlapActor.CubeOverlapActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACubeOverlapActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.UserConstructionScript");

	ACubeOverlapActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__FinishedFunc
// (BlueprintEvent)

void ACubeOverlapActor_C::CubeRetaliationGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__FinishedFunc");

	ACubeOverlapActor_C_CubeRetaliationGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__UpdateFunc
// (BlueprintEvent)

void ACubeOverlapActor_C::CubeRetaliationGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationGlow__UpdateFunc");

	ACubeOverlapActor_C_CubeRetaliationGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__FinishedFunc
// (BlueprintEvent)

void ACubeOverlapActor_C::CubeBounceFlash__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__FinishedFunc");

	ACubeOverlapActor_C_CubeBounceFlash__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__UpdateFunc
// (BlueprintEvent)

void ACubeOverlapActor_C::CubeBounceFlash__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFlash__UpdateFunc");

	ACubeOverlapActor_C_CubeBounceFlash__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.ZapPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InstigatingPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACubeOverlapActor_C::ZapPlayer(class AFortPlayerPawn* InstigatingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.ZapPlayer");

	ACubeOverlapActor_C_ZapPlayer_Params params;
	params.InstigatingPlayer = InstigatingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.SpawnGC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GCTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACubeOverlapActor_C::SpawnGC(class AActor* GCTarget, const struct FVector& Location, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.SpawnGC");

	ACubeOverlapActor_C_SpawnGC_Params params;
	params.GCTarget = GCTarget;
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationTelegraph
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACubeOverlapActor_C::CubeRetaliationTelegraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeRetaliationTelegraph");

	ACubeOverlapActor_C_CubeRetaliationTelegraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACubeOverlapActor_C::CubeBounceFX(const struct FVector& Location, const struct FVector& Normal, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeBounceFX");

	ACubeOverlapActor_C_CubeBounceFX_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACubeOverlapActor_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ACubeOverlapActor_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACubeOverlapActor_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ACubeOverlapActor_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.TraceDownward
// (BlueprintCallable, BlueprintEvent)

void ACubeOverlapActor_C::TraceDownward()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.TraceDownward");

	ACubeOverlapActor_C_TraceDownward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACubeOverlapActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.ReceiveBeginPlay");

	ACubeOverlapActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.CubeRuneWub
// (BlueprintCallable, BlueprintEvent)

void ACubeOverlapActor_C::CubeRuneWub()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.CubeRuneWub");

	ACubeOverlapActor_C_CubeRuneWub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.ZapVehicle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACubeOverlapActor_C::ZapVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.ZapVehicle");

	ACubeOverlapActor_C_ZapVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACubeOverlapActor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.ReceiveDestroyed");

	ACubeOverlapActor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CubeOverlapActor.CubeOverlapActor_C.ExecuteUbergraph_CubeOverlapActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACubeOverlapActor_C::ExecuteUbergraph_CubeOverlapActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CubeOverlapActor.CubeOverlapActor_C.ExecuteUbergraph_CubeOverlapActor");

	ACubeOverlapActor_C_ExecuteUbergraph_CubeOverlapActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
