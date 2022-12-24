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

// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_C064A1B545D792D62509919D8FFE8FBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DudeBro_Vortex_C::EventReceived_C064A1B545D792D62509919D8FFE8FBD(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_C064A1B545D792D62509919D8FFE8FBD");

	UGA_DudeBro_Vortex_C_EventReceived_C064A1B545D792D62509919D8FFE8FBD_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_600270C649671D219DB85584BE0265BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DudeBro_Vortex_C::EventReceived_600270C649671D219DB85584BE0265BC(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_600270C649671D219DB85584BE0265BC");

	UGA_DudeBro_Vortex_C_EventReceived_600270C649671D219DB85584BE0265BC_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_0A7014874570D996FD13889185F02E0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_DudeBro_Vortex_C::EventReceived_0A7014874570D996FD13889185F02E0A(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.EventReceived_0A7014874570D996FD13889185F02E0A");

	UGA_DudeBro_Vortex_C_EventReceived_0A7014874570D996FD13889185F02E0A_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_DudeBro_Vortex_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_ActivateAbility");

	UGA_DudeBro_Vortex_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DudeBro_Vortex_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.K2_OnEndAbility");

	UGA_DudeBro_Vortex_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.PlayerCapsuleHit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_DudeBro_Vortex_C::PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.PlayerCapsuleHit");

	UGA_DudeBro_Vortex_C_PlayerCapsuleHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.ExecuteUbergraph_GA_DudeBro_Vortex
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DudeBro_Vortex_C::ExecuteUbergraph_GA_DudeBro_Vortex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Dudebro_Vortex.GA_DudeBro_Vortex_C.ExecuteUbergraph_GA_DudeBro_Vortex");

	UGA_DudeBro_Vortex_C_ExecuteUbergraph_GA_DudeBro_Vortex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
