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

// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectorySpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Thrower_Trajectory_C::SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectorySpline");

	ABP_Thrower_Trajectory_C_SetTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
	if (SplineTangents != nullptr)
		*SplineTangents = params.SplineTangents;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Thrower_Trajectory_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.UserConstructionScript");

	ABP_Thrower_Trajectory_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectoryFromNative
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>*        SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Thrower_Trajectory_C::SetTrajectoryFromNative(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.SetTrajectoryFromNative");

	ABP_Thrower_Trajectory_C_SetTrajectoryFromNative_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Thrower_Trajectory_C::BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Thrower_Trajectory_C_BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Change Material
// (BlueprintCallable, BlueprintEvent)

void ABP_Thrower_Trajectory_C::Change_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Change Material");

	ABP_Thrower_Trajectory_C_Change_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Thrower_Trajectory_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ReceiveBeginPlay");

	ABP_Thrower_Trajectory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Thrower_Trajectory_C::BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Thrower_Trajectory_C_BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Thrower_Trajectory_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Thrower_Trajectory_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Decal Timer
// (BlueprintCallable, BlueprintEvent)

void ABP_Thrower_Trajectory_C::Decal_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.Decal Timer");

	ABP_Thrower_Trajectory_C_Decal_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ExecuteUbergraph_BP_Thrower_Trajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Thrower_Trajectory_C::ExecuteUbergraph_BP_Thrower_Trajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Thrower_Trajectory.BP_Thrower_Trajectory_C.ExecuteUbergraph_BP_Thrower_Trajectory");

	ABP_Thrower_Trajectory_C_ExecuteUbergraph_BP_Thrower_Trajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
