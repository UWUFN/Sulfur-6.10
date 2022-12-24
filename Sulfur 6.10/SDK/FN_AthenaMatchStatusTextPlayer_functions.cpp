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

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyText
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatusTextPlayer_C::ApplyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyText");

	UAthenaMatchStatusTextPlayer_C_ApplyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatusTextPlayer_C::HighlightMaterialControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialControl");

	UAthenaMatchStatusTextPlayer_C_HighlightMaterialControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetOpacityAndColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             ColorIn                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchStatusTextPlayer_C::SetOpacityAndColor(const struct FSlateColor& ColorIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetOpacityAndColor");

	UAthenaMatchStatusTextPlayer_C_SetOpacityAndColor_Params params;
	params.ColorIn = ColorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.GetFont
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          Output                         (Parm, OutParm)

void UAthenaMatchStatusTextPlayer_C::GetFont(struct FSlateFontInfo* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.GetFont");

	UAthenaMatchStatusTextPlayer_C_GetFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          FontIn                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchStatusTextPlayer_C::SetFont(const struct FSlateFontInfo& FontIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetFont");

	UAthenaMatchStatusTextPlayer_C_SetFont_Params params;
	params.FontIn = FontIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ApplyImmediately               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatusTextPlayer_C::SetText(const struct FText& InText, bool ApplyImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetText");

	UAthenaMatchStatusTextPlayer_C_SetText_Params params;
	params.InText = InText;
	params.ApplyImmediately = ApplyImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatusTextPlayer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.PreConstruct");

	UAthenaMatchStatusTextPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOn
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatusTextPlayer_C::HighlightMaterialOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOn");

	UAthenaMatchStatusTextPlayer_C_HighlightMaterialOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOff
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatusTextPlayer_C::HighlightMaterialOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOff");

	UAthenaMatchStatusTextPlayer_C_HighlightMaterialOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyNewText
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatusTextPlayer_C::ApplyNewText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyNewText");

	UAthenaMatchStatusTextPlayer_C_ApplyNewText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ExecuteUbergraph_AthenaMatchStatusTextPlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatusTextPlayer_C::ExecuteUbergraph_AthenaMatchStatusTextPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ExecuteUbergraph_AthenaMatchStatusTextPlayer");

	UAthenaMatchStatusTextPlayer_C_ExecuteUbergraph_AthenaMatchStatusTextPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
