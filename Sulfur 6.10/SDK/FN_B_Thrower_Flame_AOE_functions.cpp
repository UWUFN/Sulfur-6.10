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

// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.GetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Thrower_Flame_AOE_C::GetRotation(const struct FRotator& Rotation, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.GetRotation");

	AB_Thrower_Flame_AOE_C_GetRotation_Params params;
	params.Rotation = Rotation;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Thrower_Flame_AOE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.UserConstructionScript");

	AB_Thrower_Flame_AOE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Thrower_Flame_AOE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveBeginPlay");

	AB_Thrower_Flame_AOE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Thrower_Flame_AOE_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ReceiveDestroyed");

	AB_Thrower_Flame_AOE_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Thrower_Flame_AOE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Thrower_Flame_AOE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ExecuteUbergraph_B_Thrower_Flame_AOE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Thrower_Flame_AOE_C::ExecuteUbergraph_B_Thrower_Flame_AOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C.ExecuteUbergraph_B_Thrower_Flame_AOE");

	AB_Thrower_Flame_AOE_C_ExecuteUbergraph_B_Thrower_Flame_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
