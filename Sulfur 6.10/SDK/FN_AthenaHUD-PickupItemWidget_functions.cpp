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

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             NewPickup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_PickupItemWidget_C::SetPickup(class AFortPickup* NewPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.SetPickup");

	UAthenaHUD_PickupItemWidget_C_SetPickup_Params params;
	params.NewPickup = NewPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeInteractionFailureText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_PickupItemWidget_C::InitializeInteractionFailureText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeInteractionFailureText");

	UAthenaHUD_PickupItemWidget_C_InitializeInteractionFailureText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeItemData
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaHUD_PickupItemWidget_C::InitializeItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeItemData");

	UAthenaHUD_PickupItemWidget_C_InitializeItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHUD_PickupItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.Construct");

	UAthenaHUD_PickupItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.ExecuteUbergraph_AthenaHUD-PickupItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHUD_PickupItemWidget_C::ExecuteUbergraph_AthenaHUD_PickupItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.ExecuteUbergraph_AthenaHUD-PickupItemWidget");

	UAthenaHUD_PickupItemWidget_C_ExecuteUbergraph_AthenaHUD_PickupItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
