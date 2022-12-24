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

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
struct UFeatureUnlockScreen_C_Reset_Intro_Params
{
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
struct UFeatureUnlockScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
struct UFeatureUnlockScreen_C_Construct_Params
{
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
struct UFeatureUnlockScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
struct UFeatureUnlockScreen_C_OnBeginIntro_Params
{
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
struct UFeatureUnlockScreen_C_Destruct_Params
{
};

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
struct UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
