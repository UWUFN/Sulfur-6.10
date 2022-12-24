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

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyValue
struct UProxyQuickbarSlot_Combo_C_BP_GetPropertyValue_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotIndex
struct UProxyQuickbarSlot_Combo_C_SetSlotIndex_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotType
struct UProxyQuickbarSlot_Combo_C_SetSlotType_Params
{
	unsigned char                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetMultiOptionLabels
struct UProxyQuickbarSlot_Combo_C_BP_GetMultiOptionLabels_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyName
struct UProxyQuickbarSlot_Combo_C_BP_GetPropertyName_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetNumOfProperties
struct UProxyQuickbarSlot_Combo_C_BP_GetNumOfProperties_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyRange
struct UProxyQuickbarSlot_Combo_C_BP_GetPropertyRange_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutMin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMax;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyType
struct UProxyQuickbarSlot_Combo_C_BP_GetPropertyType_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ELayoutPropertyType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_SetPropertyValue
struct UProxyQuickbarSlot_Combo_C_BP_SetPropertyValue_Params
{
	int*                                               PropertyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.PreConstruct
struct UProxyQuickbarSlot_Combo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.ExecuteUbergraph_ProxyQuickbarSlot_Combo
struct UProxyQuickbarSlot_Combo_C_ExecuteUbergraph_ProxyQuickbarSlot_Combo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
