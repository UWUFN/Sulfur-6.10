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

// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText");

	UXpReasonFeedItem_C_SetXpText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXpReasonFeedItem_C::PlayPresentEffect(float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffect");

	UXpReasonFeedItem_C_PlayPresentEffect_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
