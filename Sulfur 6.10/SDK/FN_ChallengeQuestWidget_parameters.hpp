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

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLinearChain
struct UChallengeQuestWidget_C_StyleAsLinearChain_Params
{
	int                                                ChainLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ChainIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLocked
struct UChallengeQuestWidget_C_StyleAsLocked_Params
{
	struct FText                                       LockedText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid
struct UChallengeQuestWidget_C_StyleAsInvalid_Params
{
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
struct UChallengeQuestWidget_C_UpdateName_Params
{
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
struct UChallengeQuestWidget_C_GetAchievedCount_Params
{
	int                                                OutTotalAchievedCount;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutTotalRequiredCount;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
struct UChallengeQuestWidget_C_GetQuestState_Params
{
	EFortQuestState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
struct UChallengeQuestWidget_C_UpdateProgress_Params
{
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete
struct UChallengeQuestWidget_C_StyleAsIncomplete_Params
{
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete
struct UChallengeQuestWidget_C_StyleAsComplete_Params
{
};

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
struct UChallengeQuestWidget_C_SetQuestItem_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDefinition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortChallengeBundleInfo*                    Bundle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
