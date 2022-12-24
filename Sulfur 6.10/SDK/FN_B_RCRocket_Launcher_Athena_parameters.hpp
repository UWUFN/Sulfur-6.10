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

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.IsCachedIsProjectileWeapon
struct AB_RCRocket_Launcher_Athena_C_IsCachedIsProjectileWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.UserConstructionScript
struct AB_RCRocket_Launcher_Athena_C_UserConstructionScript_Params
{
};

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.SendMuzzleFlashFX
struct AB_RCRocket_Launcher_Athena_C_SendMuzzleFlashFX_Params
{
};

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.OnWeaponVisibilityChanged
struct AB_RCRocket_Launcher_Athena_C_OnWeaponVisibilityChanged_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C.ExecuteUbergraph_B_RCRocket_Launcher_Athena
struct AB_RCRocket_Launcher_Athena_C_ExecuteUbergraph_B_RCRocket_Launcher_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
