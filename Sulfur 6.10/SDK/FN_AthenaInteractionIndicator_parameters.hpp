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

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.UpdateKeybinds
struct UAthenaInteractionIndicator_C_UpdateKeybinds_Params
{
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowBasicInteractionWidget
struct UAthenaInteractionIndicator_C_ShowBasicInteractionWidget_Params
{
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ShowPickupWidget
struct UAthenaInteractionIndicator_C_ShowPickupWidget_Params
{
	class AFortPickup*                                 Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.HandleInteractionChanged
struct UAthenaInteractionIndicator_C_HandleInteractionChanged_Params
{
	class UFortInteractContextInfo*                    Interaction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Construct
struct UAthenaInteractionIndicator_C_Construct_Params
{
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.Destruct
struct UAthenaInteractionIndicator_C_Destruct_Params
{
};

// Function AthenaInteractionIndicator.AthenaInteractionIndicator_C.ExecuteUbergraph_AthenaInteractionIndicator
struct UAthenaInteractionIndicator_C_ExecuteUbergraph_AthenaInteractionIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
