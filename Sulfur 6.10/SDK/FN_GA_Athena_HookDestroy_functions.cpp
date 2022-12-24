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

// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_OnEndAbility");

	UGA_Athena_HookDestroy_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PitchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::PickGrappleMontage(float PitchAngle, struct FName* SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.PickGrappleMontage");

	UGA_Athena_HookDestroy_C_PickGrappleMontage_Params params;
	params.PitchAngle = PitchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionName != nullptr)
		*SectionName = params.SectionName;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HookDestroy_C::OnRep_AmmoReserves()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnRep_AmmoReserves");

	UGA_Athena_HookDestroy_C_OnRep_AmmoReserves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263");

	UGA_Athena_HookDestroy_C_OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263");

	UGA_Athena_HookDestroy_C_OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263");

	UGA_Athena_HookDestroy_C_OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263");

	UGA_Athena_HookDestroy_C_OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_CB1C85E64FAE092AD81A04933C6C3263");

	UGA_Athena_HookDestroy_C_OnCompleted_CB1C85E64FAE092AD81A04933C6C3263_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_056D82C6464BB95E4DA717BEB307DB74");

	UGA_Athena_HookDestroy_C_EventReceived_056D82C6464BB95E4DA717BEB307DB74_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC");

	UGA_Athena_HookDestroy_C_OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC");

	UGA_Athena_HookDestroy_C_OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_556AB31A412041E7414C21AA5F4A70CC");

	UGA_Athena_HookDestroy_C_OnInterrupted_556AB31A412041E7414C21AA5F4A70CC_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_556AB31A412041E7414C21AA5F4A70CC");

	UGA_Athena_HookDestroy_C_OnBlendOut_556AB31A412041E7414C21AA5F4A70CC_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnCompleted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_556AB31A412041E7414C21AA5F4A70CC");

	UGA_Athena_HookDestroy_C_OnCompleted_556AB31A412041E7414C21AA5F4A70CC_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HookDestroy_C::EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.EventReceived_3FEADD91456C78D266936684DE918289");

	UGA_Athena_HookDestroy_C_EventReceived_3FEADD91456C78D266936684DE918289_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62");

	UGA_Athena_HookDestroy_C_OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62");

	UGA_Athena_HookDestroy_C_OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62");

	UGA_Athena_HookDestroy_C_OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62");

	UGA_Athena_HookDestroy_C_OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.OnCompleted_28C962BC449D96C668F3C4BE36E6CA62");

	UGA_Athena_HookDestroy_C_OnCompleted_28C962BC449D96C668F3C4BE36E6CA62_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_HookDestroy_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.K2_ActivateAbility");

	UGA_Athena_HookDestroy_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HookDestroy_C::ExecuteUbergraph_GA_Athena_HookDestroy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_HookDestroy.GA_Athena_HookDestroy_C.ExecuteUbergraph_GA_Athena_HookDestroy");

	UGA_Athena_HookDestroy_C_ExecuteUbergraph_GA_Athena_HookDestroy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
