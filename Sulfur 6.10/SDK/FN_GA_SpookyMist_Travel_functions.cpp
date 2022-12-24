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

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::PlayerCapsuleSizes(float* Radius, float* HalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes");

	UGA_SpookyMist_Travel_C_PlayerCapsuleSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
	if (HalfHeight != nullptr)
		*HalfHeight = params.HalfHeight;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPoint                     (Parm, OutParm, IsPlainOldData)
// struct FVector                 EndPoint                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void UGA_SpookyMist_Travel_C::SetDashStartEndAndDirection(struct FVector* StartPoint, struct FVector* EndPoint, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection");

	UGA_SpookyMist_Travel_C_SetDashStartEndAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartPoint != nullptr)
		*StartPoint = params.StartPoint;
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::HandlePawnDetachRC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC");

	UGA_SpookyMist_Travel_C_HandlePawnDetachRC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish_7DCB8EEB464593BB57421A868DAD3B3E
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::OnFinish_7DCB8EEB464593BB57421A868DAD3B3E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish_7DCB8EEB464593BB57421A868DAD3B3E");

	UGA_SpookyMist_Travel_C_OnFinish_7DCB8EEB464593BB57421A868DAD3B3E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Completed_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Completed_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Cancelled_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Cancelled_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::Triggered_BA1318F5441CE862ADFAB5BA78450BAF(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF");

	UGA_SpookyMist_Travel_C_Triggered_BA1318F5441CE862ADFAB5BA78450BAF_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_Travel_C::EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8");

	UGA_SpookyMist_Travel_C_EventReceived_76DD035A4216DFB29C5E0DB3261B6CD8_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SpookyMist_Travel_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent");

	UGA_SpookyMist_Travel_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility");

	UGA_SpookyMist_Travel_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::CheckIfStillColliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding");

	UGA_SpookyMist_Travel_C_CheckIfStillColliding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfTraveling
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::CheckIfTraveling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfTraveling");

	UGA_SpookyMist_Travel_C_CheckIfTraveling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::On_DBNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO");

	UGA_SpookyMist_Travel_C_On_DBNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyIfOverlapping
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_Travel_C::DestroyIfOverlapping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyIfOverlapping");

	UGA_SpookyMist_Travel_C_DestroyIfOverlapping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_Travel_C::ExecuteUbergraph_GA_SpookyMist_Travel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel");

	UGA_SpookyMist_Travel_C_ExecuteUbergraph_GA_SpookyMist_Travel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
