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

// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Pistol_AutoHeavy_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.UserConstructionScript");

	AB_Pistol_AutoHeavy_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pistol_AutoHeavy_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ReceiveBeginPlay");

	AB_Pistol_AutoHeavy_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Pistol_AutoHeavy_Athena_C::OnWeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.OnWeaponAttached");

	AB_Pistol_AutoHeavy_Athena_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ExecuteUbergraph_B_Pistol_AutoHeavy_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pistol_AutoHeavy_Athena_C::ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C.ExecuteUbergraph_B_Pistol_AutoHeavy_Athena");

	AB_Pistol_AutoHeavy_Athena_C_ExecuteUbergraph_B_Pistol_AutoHeavy_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
