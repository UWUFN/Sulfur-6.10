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

// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
struct UHeaderWithNav_C_SetTextAndUpdate_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HeaderWithNav.HeaderWithNav_C.Update
struct UHeaderWithNav_C_Update_Params
{
	bool                                               IsUsingGamepad;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.Construct
struct UHeaderWithNav_C_Construct_Params
{
};

// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
struct UHeaderWithNav_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UHeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
struct UHeaderWithNav_C_ExecuteUbergraph_HeaderWithNav_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature
struct UHeaderWithNav_C_BackButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
