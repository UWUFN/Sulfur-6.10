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

// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Cancelled_4882FEAA4B32D70FE53C06A619E266D1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_FloorFreeze_Athena_C::Cancelled_4882FEAA4B32D70FE53C06A619E266D1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Cancelled_4882FEAA4B32D70FE53C06A619E266D1");

	UGA_Trap_FloorFreeze_Athena_C_Cancelled_4882FEAA4B32D70FE53C06A619E266D1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Targeted_4882FEAA4B32D70FE53C06A619E266D1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_FloorFreeze_Athena_C::Targeted_4882FEAA4B32D70FE53C06A619E266D1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.Targeted_4882FEAA4B32D70FE53C06A619E266D1");

	UGA_Trap_FloorFreeze_Athena_C_Targeted_4882FEAA4B32D70FE53C06A619E266D1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_FloorFreeze_Athena_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.K2_ActivateAbility");

	UGA_Trap_FloorFreeze_Athena_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.GA_LifeTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Trap_FloorFreeze_Athena_C::GA_LifeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.GA_LifeTimer");

	UGA_Trap_FloorFreeze_Athena_C_GA_LifeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.ExecuteUbergraph_GA_Trap_FloorFreeze_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_FloorFreeze_Athena_C::ExecuteUbergraph_GA_Trap_FloorFreeze_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorFreeze_Athena.GA_Trap_FloorFreeze_Athena_C.ExecuteUbergraph_GA_Trap_FloorFreeze_Athena");

	UGA_Trap_FloorFreeze_Athena_C_ExecuteUbergraph_GA_Trap_FloorFreeze_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
