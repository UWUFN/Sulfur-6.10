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

// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
struct UXpReasonFeedItem_C_SetXpText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffect
struct UXpReasonFeedItem_C_PlayPresentEffect_Params
{
	float                                              PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
