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

// Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.OnChange_9CD0DBED48EBE934D131728DF5BDE543
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_RuneVent_RemoveFX_C::OnChange_9CD0DBED48EBE934D131728DF5BDE543(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.OnChange_9CD0DBED48EBE934D131728DF5BDE543");

	UGA_Athena_RuneVent_RemoveFX_C_OnChange_9CD0DBED48EBE934D131728DF5BDE543_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_RuneVent_RemoveFX_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.K2_ActivateAbility");

	UGA_Athena_RuneVent_RemoveFX_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.RemoveOnSkydive
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_RuneVent_RemoveFX_C::RemoveOnSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.RemoveOnSkydive");

	UGA_Athena_RuneVent_RemoveFX_C_RemoveOnSkydive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.ExecuteUbergraph_GA_Athena_RuneVent_RemoveFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_RuneVent_RemoveFX_C::ExecuteUbergraph_GA_Athena_RuneVent_RemoveFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_RuneVent_RemoveFX.GA_Athena_RuneVent_RemoveFX_C.ExecuteUbergraph_GA_Athena_RuneVent_RemoveFX");

	UGA_Athena_RuneVent_RemoveFX_C_ExecuteUbergraph_GA_Athena_RuneVent_RemoveFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
