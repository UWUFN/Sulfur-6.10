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

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientSplineActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript");

	ABP_AmbientSplineActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AmbientSplineActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay");

	ABP_AmbientSplineActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientSplineActor_C::Check_Closest_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point");

	ABP_AmbientSplineActor_C_Check_Closest_Point_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick");

	ABP_AmbientSplineActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientSplineActor_C::ExecuteUbergraph_BP_AmbientSplineActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor");

	ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
