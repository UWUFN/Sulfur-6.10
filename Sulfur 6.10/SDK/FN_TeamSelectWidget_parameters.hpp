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

// Function TeamSelectWidget.TeamSelectWidget_C.Construct
struct UTeamSelectWidget_C_Construct_Params
{
};

// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
struct UTeamSelectWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct UTeamSelectWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection Changed__DelegateSignature
struct UTeamSelectWidget_C_BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamSelectWidget.TeamSelectWidget_C.OnActivated
struct UTeamSelectWidget_C_OnActivated_Params
{
};

// Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget
struct UTeamSelectWidget_C_ExecuteUbergraph_TeamSelectWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
