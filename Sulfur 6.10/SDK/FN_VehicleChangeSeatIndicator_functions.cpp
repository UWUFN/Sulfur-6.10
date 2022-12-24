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

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehicleDriver_Bind
// (BlueprintCallable, BlueprintEvent)

void UVehicleChangeSeatIndicator_C::OnEnterVehicleDriver_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehicleDriver_Bind");

	UVehicleChangeSeatIndicator_C_OnEnterVehicleDriver_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehiclePassenger_Bind
// (BlueprintCallable, BlueprintEvent)

void UVehicleChangeSeatIndicator_C::OnEnterVehiclePassenger_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehiclePassenger_Bind");

	UVehicleChangeSeatIndicator_C_OnEnterVehiclePassenger_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVehicleChangeSeatIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Destruct");

	UVehicleChangeSeatIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVehicleChangeSeatIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Construct");

	UVehicleChangeSeatIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnVehicleSeatTransitionTargetIndexChange_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleChangeSeatIndicator_C::OnVehicleSeatTransitionTargetIndexChange_Bind(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnVehicleSeatTransitionTargetIndexChange_Bind");

	UVehicleChangeSeatIndicator_C_OnVehicleSeatTransitionTargetIndexChange_Bind_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.HideWidget
// (BlueprintCallable, BlueprintEvent)

void UVehicleChangeSeatIndicator_C::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.HideWidget");

	UVehicleChangeSeatIndicator_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleChangeSeatIndicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Tick");

	UVehicleChangeSeatIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.ExecuteUbergraph_VehicleChangeSeatIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleChangeSeatIndicator_C::ExecuteUbergraph_VehicleChangeSeatIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.ExecuteUbergraph_VehicleChangeSeatIndicator");

	UVehicleChangeSeatIndicator_C_ExecuteUbergraph_VehicleChangeSeatIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
