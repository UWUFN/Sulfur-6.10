// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProxyQuickbarSlot_Combo_C::BP_GetPropertyValue(int* PropertyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyValue");

	UProxyQuickbarSlot_Combo_C_BP_GetPropertyValue_Params params;
	params.PropertyIndex = PropertyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::SetSlotIndex(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotIndex");

	UProxyQuickbarSlot_Combo_C_SetSlotIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::SetSlotType(unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotType");

	UProxyQuickbarSlot_Combo_C_SetSlotType_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetMultiOptionLabels
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FText> UProxyQuickbarSlot_Combo_C::BP_GetMultiOptionLabels(int* PropertyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetMultiOptionLabels");

	UProxyQuickbarSlot_Combo_C_BP_GetMultiOptionLabels_Params params;
	params.PropertyIndex = PropertyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyName
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UProxyQuickbarSlot_Combo_C::BP_GetPropertyName(int* PropertyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyName");

	UProxyQuickbarSlot_Combo_C_BP_GetPropertyName_Params params;
	params.PropertyIndex = PropertyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetNumOfProperties
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UProxyQuickbarSlot_Combo_C::BP_GetNumOfProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetNumOfProperties");

	UProxyQuickbarSlot_Combo_C_BP_GetNumOfProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyRange
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutMax                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::BP_GetPropertyRange(int* PropertyIndex, float* OutMin, float* OutMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyRange");

	UProxyQuickbarSlot_Combo_C_BP_GetPropertyRange_Params params;
	params.PropertyIndex = PropertyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMin != nullptr)
		*OutMin = params.OutMin;
	if (OutMax != nullptr)
		*OutMax = params.OutMax;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyType
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ELayoutPropertyType            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELayoutPropertyType UProxyQuickbarSlot_Combo_C::BP_GetPropertyType(int* PropertyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyType");

	UProxyQuickbarSlot_Combo_C_BP_GetPropertyType_Params params;
	params.PropertyIndex = PropertyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_SetPropertyValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           PropertyIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::BP_SetPropertyValue(int* PropertyIndex, float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_SetPropertyValue");

	UProxyQuickbarSlot_Combo_C_BP_SetPropertyValue_Params params;
	params.PropertyIndex = PropertyIndex;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.PreConstruct");

	UProxyQuickbarSlot_Combo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.ExecuteUbergraph_ProxyQuickbarSlot_Combo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProxyQuickbarSlot_Combo_C::ExecuteUbergraph_ProxyQuickbarSlot_Combo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.ExecuteUbergraph_ProxyQuickbarSlot_Combo");

	UProxyQuickbarSlot_Combo_C_ExecuteUbergraph_ProxyQuickbarSlot_Combo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
