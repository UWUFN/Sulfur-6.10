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

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.OnClicked
struct USpectatedPlayerItem_C_OnClicked_Params
{
};

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.SetPlayer
struct USpectatedPlayerItem_C_SetPlayer_Params
{
	struct FPotentialSpectatorTarget                   SpectatorInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.PreConstruct
struct USpectatedPlayerItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USpectatedPlayerItem_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SpectatedPlayerItem.SpectatedPlayerItem_C.ExecuteUbergraph_SpectatedPlayerItem
struct USpectatedPlayerItem_C_ExecuteUbergraph_SpectatedPlayerItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
