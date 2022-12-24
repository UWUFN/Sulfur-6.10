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

// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Rift_Item_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_CanActivateAbility");

	UGA_Athena_Rift_Item_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Completed_1B4C20DD4792D45069FE6C8D47581114
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Rift_Item_C::Completed_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Completed_1B4C20DD4792D45069FE6C8D47581114");

	UGA_Athena_Rift_Item_C_Completed_1B4C20DD4792D45069FE6C8D47581114_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Cancelled_1B4C20DD4792D45069FE6C8D47581114
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Rift_Item_C::Cancelled_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Cancelled_1B4C20DD4792D45069FE6C8D47581114");

	UGA_Athena_Rift_Item_C_Cancelled_1B4C20DD4792D45069FE6C8D47581114_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Triggered_1B4C20DD4792D45069FE6C8D47581114
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Rift_Item_C::Triggered_1B4C20DD4792D45069FE6C8D47581114(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.Triggered_1B4C20DD4792D45069FE6C8D47581114");

	UGA_Athena_Rift_Item_C_Triggered_1B4C20DD4792D45069FE6C8D47581114_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Rift_Item_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_ActivateAbility");

	UGA_Athena_Rift_Item_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Rift_Item_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.K2_OnEndAbility");

	UGA_Athena_Rift_Item_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.ExecuteUbergraph_GA_Athena_Rift_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Rift_Item_C::ExecuteUbergraph_GA_Athena_Rift_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Rift_Item.GA_Athena_Rift_Item_C.ExecuteUbergraph_GA_Athena_Rift_Item");

	UGA_Athena_Rift_Item_C_ExecuteUbergraph_GA_Athena_Rift_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
