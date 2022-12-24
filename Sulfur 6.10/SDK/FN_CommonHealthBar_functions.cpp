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

// Function CommonHealthBar.CommonHealthBar_C.SetDeltaVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::SetDeltaVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.SetDeltaVisibility");

	UCommonHealthBar_C_SetDeltaVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.SetSwitcherTextIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::SetSwitcherTextIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.SetSwitcherTextIndex");

	UCommonHealthBar_C_SetSwitcherTextIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            ColorA                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            ColorB                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            BevelColor                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            BaseplateColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCommonHealthBar_C::SetColors(const struct FLinearColor& ColorA, const struct FLinearColor& ColorB, const struct FLinearColor& BevelColor, const struct FLinearColor& BaseplateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.SetColors");

	UCommonHealthBar_C_SetColors_Params params;
	params.ColorA = ColorA;
	params.ColorB = ColorB;
	params.BevelColor = BevelColor;
	params.BaseplateColor = BaseplateColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Set Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::Set_Timer(bool InEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Set Timer");

	UCommonHealthBar_C_Set_Timer_Params params;
	params.InEnabled = InEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonHealthBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Update");

	UCommonHealthBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Update HP Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonHealthBar_C::Update_HP_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Update HP Delta Bar");

	UCommonHealthBar_C_Update_HP_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Update HP Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonHealthBar_C::Update_HP_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Update HP Fill Bar");

	UCommonHealthBar_C_Update_HP_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Update Current HP Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::Update_Current_HP_Value(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Update Current HP Value");

	UCommonHealthBar_C_Update_Current_HP_Value_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.Update Max HP Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::Update_Max_HP_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.Update Max HP Value");

	UCommonHealthBar_C_Update_Max_HP_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.InitializeBar
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonHealthBar_C::InitializeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.InitializeBar");

	UCommonHealthBar_C_InitializeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.PreConstruct");

	UCommonHealthBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonHealthBar.CommonHealthBar_C.ExecuteUbergraph_CommonHealthBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommonHealthBar_C::ExecuteUbergraph_CommonHealthBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonHealthBar.CommonHealthBar_C.ExecuteUbergraph_CommonHealthBar");

	UCommonHealthBar_C_ExecuteUbergraph_CommonHealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
