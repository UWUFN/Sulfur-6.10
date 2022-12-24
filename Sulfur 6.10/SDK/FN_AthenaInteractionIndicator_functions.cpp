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

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateKeybinds");

	UAthenaInteractionIndicator_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowBasicInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInteractionIndicator_C::ShowBasicInteractionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowBasicInteractionWidget");

	UAthenaInteractionIndicator_C_ShowBasicInteractionWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowPickupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowPickupWidget");

	UAthenaInteractionIndicator_C_ShowPickupWidget_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.HandleInteractionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo* Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.HandleInteractionChanged");

	UAthenaInteractionIndicator_C_HandleInteractionChanged_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInteractionIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Construct");

	UAthenaInteractionIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInteractionIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Destruct");

	UAthenaInteractionIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ExecuteUbergraph_AthenaInteractionIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInteractionIndicator_C::ExecuteUbergraph_AthenaInteractionIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ExecuteUbergraph_AthenaInteractionIndicator");

	UAthenaInteractionIndicator_C_ExecuteUbergraph_AthenaInteractionIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
