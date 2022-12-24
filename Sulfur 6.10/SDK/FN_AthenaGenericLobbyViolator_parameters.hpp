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

// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
struct UAthenaGenericLobbyViolator_C_SetGamemodeName_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SubText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
