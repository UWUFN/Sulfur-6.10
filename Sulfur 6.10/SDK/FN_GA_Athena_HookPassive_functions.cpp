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

// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookPassive_C::OnRep_AmmoReserves()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.OnRep_AmmoReserves");

	UGA_Athena_HookPassive_C_OnRep_AmmoReserves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_HookPassive_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_ActivateAbility");

	UGA_Athena_HookPassive_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookPassive_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.K2_OnEndAbility");

	UGA_Athena_HookPassive_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.ExecuteUbergraph_GA_Athena_HookPassive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookPassive_C::ExecuteUbergraph_GA_Athena_HookPassive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookPassive.GA_Athena_HookPassive_C.ExecuteUbergraph_GA_Athena_HookPassive");

	UGA_Athena_HookPassive_C_ExecuteUbergraph_GA_Athena_HookPassive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
