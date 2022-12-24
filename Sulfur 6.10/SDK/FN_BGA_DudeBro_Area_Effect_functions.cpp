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

// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReduceChannelingFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::ReduceChannelingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReduceChannelingFX");

	ABGA_DudeBro_Area_Effect_C_ReduceChannelingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.GetSocketClosestToTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LookAtDirection                (Parm, OutParm, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::GetSocketClosestToTarget(class AActor* Target, struct FVector* LookAtDirection, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.GetSocketClosestToTarget");

	ABGA_DudeBro_Area_Effect_C_GetSocketClosestToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtDirection != nullptr)
		*LookAtDirection = params.LookAtDirection;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsBall_Master_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ToyExit(class APhysicsBall_Master_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyExit");

	ABGA_DudeBro_Area_Effect_C_ToyExit_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsBall_Master_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ToyEnter(class APhysicsBall_Master_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToyEnter");

	ABGA_DudeBro_Area_Effect_C_ToyEnter_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ProjExit(class AFortProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjExit");

	ABGA_DudeBro_Area_Effect_C_ProjExit_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ProjEnter(class AFortProjectileBase* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ProjEnter");

	ABGA_DudeBro_Area_Effect_C_ProjEnter_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_EnableSafeZone
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::OnRep_EnableSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_EnableSafeZone");

	ABGA_DudeBro_Area_Effect_C_OnRep_EnableSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.IsIslandAtRune
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_DudeBro_Area_Effect_C::IsIslandAtRune()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.IsIslandAtRune");

	ABGA_DudeBro_Area_Effect_C_IsIslandAtRune_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_GroundLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::OnRep_GroundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.OnRep_GroundLocation");

	ABGA_DudeBro_Area_Effect_C_OnRep_GroundLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetVortexBaseVisibilitiesFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::SetVortexBaseVisibilitiesFX(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetVortexBaseVisibilitiesFX");

	ABGA_DudeBro_Area_Effect_C_SetVortexBaseVisibilitiesFX_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpperDownward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ImpulseAndSetSkydiveUpperDownward(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpperDownward");

	ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveUpperDownward_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveLower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ImpulseAndSetSkydiveLower(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveLower");

	ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveLower_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ImpulseAndSetSkydiveUpper(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ImpulseAndSetSkydiveUpper");

	ABGA_DudeBro_Area_Effect_C_ImpulseAndSetSkydiveUpper_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.UserConstructionScript");

	ABGA_DudeBro_Area_Effect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__FinishedFunc");

	ABGA_DudeBro_Area_Effect_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Timeline_0__UpdateFunc");

	ABGA_DudeBro_Area_Effect_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__FinishedFunc
// (BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::CubeRetaliatingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__FinishedFunc");

	ABGA_DudeBro_Area_Effect_C_CubeRetaliatingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__UpdateFunc
// (BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::CubeRetaliatingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliatingTimeline__UpdateFunc");

	ABGA_DudeBro_Area_Effect_C_CubeRetaliatingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ReceiveBeginPlay");

	ABGA_DudeBro_Area_Effect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BeginChanneling
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::BeginChanneling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BeginChanneling");

	ABGA_DudeBro_Area_Effect_C_BeginChanneling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.NoChanneling
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::NoChanneling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.NoChanneling");

	ABGA_DudeBro_Area_Effect_C_NoChanneling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Trace
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::Trace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.Trace");

	ABGA_DudeBro_Area_Effect_C_Trace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToggleBaseVisibility
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::ToggleBaseVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ToggleBaseVisibility");

	ABGA_DudeBro_Area_Effect_C_ToggleBaseVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.On Channeling Zap Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::On_Channeling_Zap_Audio(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.On Channeling Zap Audio");

	ABGA_DudeBro_Area_Effect_C_On_Channeling_Zap_Audio_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_DudeBro_Area_Effect_C_BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_DudeBro_Area_Effect_C_BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_DudeBro_Area_Effect_C_BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_DudeBro_Area_Effect_C_BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeBounceFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::CubeBounceFX(const struct FVector& Location, const struct FVector& Normal, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeBounceFX");

	ABGA_DudeBro_Area_Effect_C_CubeBounceFX_Params params;
	params.Location = Location;
	params.Normal = Normal;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliationTelegraph
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::CubeRetaliationTelegraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.CubeRetaliationTelegraph");

	ABGA_DudeBro_Area_Effect_C_CubeRetaliationTelegraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InstigatingPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ZapPlayer(class AFortPlayerPawn* InstigatingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapPlayer");

	ABGA_DudeBro_Area_Effect_C_ZapPlayer_Params params;
	params.InstigatingPlayer = InstigatingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.TraceDownward
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Area_Effect_C::TraceDownward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.TraceDownward");

	ABGA_DudeBro_Area_Effect_C_TraceDownward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapVehicle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ZapVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ZapVehicle");

	ABGA_DudeBro_Area_Effect_C_ZapVehicle_Params params;
	params.Vehicle = Vehicle;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SpawnGC
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GCTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::SpawnGC(class AActor* GCTarget, const struct FVector& Location, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SpawnGC");

	ABGA_DudeBro_Area_Effect_C_SpawnGC_Params params;
	params.GCTarget = GCTarget;
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.setupEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::setupEffects(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.setupEffects");

	ABGA_DudeBro_Area_Effect_C_setupEffects_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetupGroundLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::SetupGroundLocation(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.SetupGroundLocation");

	ABGA_DudeBro_Area_Effect_C_SetupGroundLocation_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ExecuteUbergraph_BGA_DudeBro_Area_Effect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_DudeBro_Area_Effect_C::ExecuteUbergraph_BGA_DudeBro_Area_Effect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C.ExecuteUbergraph_BGA_DudeBro_Area_Effect");

	ABGA_DudeBro_Area_Effect_C_ExecuteUbergraph_BGA_DudeBro_Area_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
