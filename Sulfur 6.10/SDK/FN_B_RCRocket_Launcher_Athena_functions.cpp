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

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_RCRocket_Launcher_Athena_C::IsCachedIsProjectileWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon");

	AB_RCRocket_Launcher_Athena_C_IsCachedIsProjectileWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_RCRocket_Launcher_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript");

	AB_RCRocket_Launcher_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_RCRocket_Launcher_Athena_C::SendMuzzleFlashFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX");

	AB_RCRocket_Launcher_Athena_C_SendMuzzleFlashFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RCRocket_Launcher_Athena_C::OnWeaponVisibilityChanged(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.OnWeaponVisibilityChanged");

	AB_RCRocket_Launcher_Athena_C_OnWeaponVisibilityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RCRocket_Launcher_Athena_C::ExecuteUbergraph_B_RCRocket_Launcher_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena");

	AB_RCRocket_Launcher_Athena_C_ExecuteUbergraph_B_RCRocket_Launcher_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
