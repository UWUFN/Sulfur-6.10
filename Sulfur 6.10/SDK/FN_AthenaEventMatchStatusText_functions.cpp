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

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyText
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchStatusText_C::ApplyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyText");

	UAthenaEventMatchStatusText_C_ApplyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.HighlightMaterialControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchStatusText_C::HighlightMaterialControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.HighlightMaterialControl");

	UAthenaEventMatchStatusText_C_HighlightMaterialControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetOpacityAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             ColorIn                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusText_C::SetOpacityAndColor(const struct FSlateColor& ColorIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetOpacityAndColor");

	UAthenaEventMatchStatusText_C_SetOpacityAndColor_Params params;
	params.ColorIn = ColorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.GetFont
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          Output                         (Parm, OutParm)

void UAthenaEventMatchStatusText_C::GetFont(struct FSlateFontInfo* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.GetFont");

	UAthenaEventMatchStatusText_C_GetFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          FontIn                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaEventMatchStatusText_C::SetFont(const struct FSlateFontInfo& FontIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetFont");

	UAthenaEventMatchStatusText_C_SetFont_Params params;
	params.FontIn = FontIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ApplyImmediately               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusText_C::SetText(const struct FText& InText, bool ApplyImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetText");

	UAthenaEventMatchStatusText_C_SetText_Params params;
	params.InText = InText;
	params.ApplyImmediately = ApplyImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.PreConstruct");

	UAthenaEventMatchStatusText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyNewText
// (BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchStatusText_C::ApplyNewText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyNewText");

	UAthenaEventMatchStatusText_C_ApplyNewText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ExecuteUbergraph_AthenaEventMatchStatusText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchStatusText_C::ExecuteUbergraph_AthenaEventMatchStatusText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ExecuteUbergraph_AthenaEventMatchStatusText");

	UAthenaEventMatchStatusText_C_ExecuteUbergraph_AthenaEventMatchStatusText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
