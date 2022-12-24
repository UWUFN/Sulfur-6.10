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

// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_Printing
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::OnRep_Printing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_Printing");

	ABGA_Cube_Area_Effect_C_OnRep_Printing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_EnableRuneAmbientEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::OnRep_EnableRuneAmbientEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_EnableRuneAmbientEffect");

	ABGA_Cube_Area_Effect_C_OnRep_EnableRuneAmbientEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_RuneIndex
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::OnRep_RuneIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.OnRep_RuneIndex");

	ABGA_Cube_Area_Effect_C_OnRep_RuneIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SetRuneMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::SetRuneMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SetRuneMaterial");

	ABGA_Cube_Area_Effect_C_SetRuneMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.UserConstructionScript");

	ABGA_Cube_Area_Effect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.TrySpawnGlowEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::TrySpawnGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.TrySpawnGlowEffect");

	ABGA_Cube_Area_Effect_C_TrySpawnGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.BndEvt__Effect Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Cube_Area_Effect_C::BndEvt__Effect_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.BndEvt__Effect Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_Cube_Area_Effect_C_BndEvt__Effect_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Cube_Area_Effect_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveActorEndOverlap");

	ABGA_Cube_Area_Effect_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.DisableGlowEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::DisableGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.DisableGlowEffect");

	ABGA_Cube_Area_Effect_C_DisableGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.CubeNoLongerOnTop
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::CubeNoLongerOnTop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.CubeNoLongerOnTop");

	ABGA_Cube_Area_Effect_C_CubeNoLongerOnTop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SpawnVolumeEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::SpawnVolumeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.SpawnVolumeEffect");

	ABGA_Cube_Area_Effect_C_SpawnVolumeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReceiveBeginPlay");

	ABGA_Cube_Area_Effect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReplayScrubbed
// (BlueprintCallable, BlueprintEvent)

void ABGA_Cube_Area_Effect_C::ReplayScrubbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ReplayScrubbed");

	ABGA_Cube_Area_Effect_C_ReplayScrubbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ExecuteUbergraph_BGA_Cube_Area_Effect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Cube_Area_Effect_C::ExecuteUbergraph_BGA_Cube_Area_Effect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C.ExecuteUbergraph_BGA_Cube_Area_Effect");

	ABGA_Cube_Area_Effect_C_ExecuteUbergraph_BGA_Cube_Area_Effect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
