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

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.SetPickup
struct UAthenaHUD_PickupItemWidget_C_SetPickup_Params
{
	class AFortPickup*                                 NewPickup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeInteractionFailureText
struct UAthenaHUD_PickupItemWidget_C_InitializeInteractionFailureText_Params
{
};

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.InitializeItemData
struct UAthenaHUD_PickupItemWidget_C_InitializeItemData_Params
{
};

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.Construct
struct UAthenaHUD_PickupItemWidget_C_Construct_Params
{
};

// Function AthenaHUD-PickupItemWidget.AthenaHUD-PickupItemWidget_C.ExecuteUbergraph_AthenaHUD-PickupItemWidget
struct UAthenaHUD_PickupItemWidget_C_ExecuteUbergraph_AthenaHUD_PickupItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
