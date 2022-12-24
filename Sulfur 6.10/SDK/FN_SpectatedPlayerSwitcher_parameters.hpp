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

// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.FocusWidget
struct USpectatedPlayerSwitcher_C_FocusWidget_Params
{
};

// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.PreConstruct
struct USpectatedPlayerSwitcher_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.OnDisplayedTargetsUpdated
struct USpectatedPlayerSwitcher_C_OnDisplayedTargetsUpdated_Params
{
};

// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.ExecuteUbergraph_SpectatedPlayerSwitcher
struct USpectatedPlayerSwitcher_C_ExecuteUbergraph_SpectatedPlayerSwitcher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
