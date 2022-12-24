#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehicleDriver_Bind
struct UVehicleChangeSeatIndicator_C_OnEnterVehicleDriver_Bind_Params
{
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnEnterVehiclePassenger_Bind
struct UVehicleChangeSeatIndicator_C_OnEnterVehiclePassenger_Bind_Params
{
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Destruct
struct UVehicleChangeSeatIndicator_C_Destruct_Params
{
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Construct
struct UVehicleChangeSeatIndicator_C_Construct_Params
{
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.OnVehicleSeatTransitionTargetIndexChange_Bind
struct UVehicleChangeSeatIndicator_C_OnVehicleSeatTransitionTargetIndexChange_Bind_Params
{
	int                                                SeatIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.HideWidget
struct UVehicleChangeSeatIndicator_C_HideWidget_Params
{
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.Tick
struct UVehicleChangeSeatIndicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleChangeSeatIndicator.VehicleChangeSeatIndicator_C.ExecuteUbergraph_VehicleChangeSeatIndicator
struct UVehicleChangeSeatIndicator_C_ExecuteUbergraph_VehicleChangeSeatIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
