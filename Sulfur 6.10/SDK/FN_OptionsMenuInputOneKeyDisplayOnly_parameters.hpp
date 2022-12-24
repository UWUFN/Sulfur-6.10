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

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.GetListItemObject
struct UOptionsMenuInputOneKeyDisplayOnly_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnEntryReleased
struct UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemExpansionChanged
struct UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemSelectionChanged
struct UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.OnListItemObjectSet
struct UOptionsMenuInputOneKeyDisplayOnly_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly
struct UOptionsMenuInputOneKeyDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.UnbindClicked__DelegateSignature
struct UOptionsMenuInputOneKeyDisplayOnly_C_UnbindClicked__DelegateSignature_Params
{
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOptionsMenuInputOneKey_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.Input Clicked__DelegateSignature
struct UOptionsMenuInputOneKeyDisplayOnly_C_Input_Clicked__DelegateSignature_Params
{
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
