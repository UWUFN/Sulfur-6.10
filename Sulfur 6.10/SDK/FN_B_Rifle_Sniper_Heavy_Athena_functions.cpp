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

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.CalculateTraceDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPoint                     (Parm, OutParm, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, OutParm, IsPlainOldData)

void AB_Rifle_Sniper_Heavy_Athena_C::CalculateTraceDistance(struct FVector* StartPoint, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.CalculateTraceDistance");

	AB_Rifle_Sniper_Heavy_Athena_C_CalculateTraceDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
}


// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Rifle_Sniper_Heavy_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.UserConstructionScript");

	AB_Rifle_Sniper_Heavy_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Rifle_Sniper_Heavy_Athena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ReceiveTick");

	AB_Rifle_Sniper_Heavy_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Rifle_Sniper_Heavy_Athena_C::ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena");

	AB_Rifle_Sniper_Heavy_Athena_C_ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
