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

// Function BasicGradientFill.BasicGradientFill_C.Set Brush Size
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Brush_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBasicGradientFill_C::Set_Brush_Size(const struct FVector2D& Brush_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicGradientFill.BasicGradientFill_C.Set Brush Size");

	UBasicGradientFill_C_Set_Brush_Size_Params params;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicGradientFill.BasicGradientFill_C.Set Fill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            color_1                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            color_2                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rotation__0___1_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicGradientFill_C::Set_Fill(const struct FLinearColor& color_1, const struct FLinearColor& color_2, float Rotation__0___1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicGradientFill.BasicGradientFill_C.Set Fill");

	UBasicGradientFill_C_Set_Fill_Params params;
	params.color_1 = color_1;
	params.color_2 = color_2;
	params.Rotation__0___1_ = Rotation__0___1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicGradientFill.BasicGradientFill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicGradientFill_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicGradientFill.BasicGradientFill_C.PreConstruct");

	UBasicGradientFill_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicGradientFill_C::ExecuteUbergraph_BasicGradientFill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicGradientFill.BasicGradientFill_C.ExecuteUbergraph_BasicGradientFill");

	UBasicGradientFill_C_ExecuteUbergraph_BasicGradientFill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
