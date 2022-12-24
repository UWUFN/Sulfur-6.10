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

// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleChanged
// (Event, Public, BlueprintEvent)

void UVehicleInfoIndicator_C::OnVehicleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleChanged");

	UVehicleInfoIndicator_C_OnVehicleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleHealthChanged
// (Event, Public, BlueprintEvent)

void UVehicleInfoIndicator_C::OnVehicleHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleInfoIndicator.VehicleInfoIndicator_C.OnVehicleHealthChanged");

	UVehicleInfoIndicator_C_OnVehicleHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleInfoIndicator.VehicleInfoIndicator_C.ExecuteUbergraph_VehicleInfoIndicator
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleInfoIndicator_C::ExecuteUbergraph_VehicleInfoIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleInfoIndicator.VehicleInfoIndicator_C.ExecuteUbergraph_VehicleInfoIndicator");

	UVehicleInfoIndicator_C_ExecuteUbergraph_VehicleInfoIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
