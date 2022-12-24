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

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript");

	AGCL_TNT_Fuse_Cook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ReceiveBeginPlay");

	AGCL_TNT_Fuse_Cook_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ModulateFuseSound
// (BlueprintCallable, BlueprintEvent)

void AGCL_TNT_Fuse_Cook_C::ModulateFuseSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ModulateFuseSound");

	AGCL_TNT_Fuse_Cook_C_ModulateFuseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*>* ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*>* AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCL_TNT_Fuse_Cook_C::OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart");

	AGCL_TNT_Fuse_Cook_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_TNT_Fuse_Cook_C::ExecuteUbergraph_GCL_TNT_Fuse_Cook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook");

	AGCL_TNT_Fuse_Cook_C_ExecuteUbergraph_GCL_TNT_Fuse_Cook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
