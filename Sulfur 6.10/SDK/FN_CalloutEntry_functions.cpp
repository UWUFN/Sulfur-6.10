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

// Function CalloutEntry.CalloutEntry_C.SetCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UCalloutEntry_C::SetCallout(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CalloutEntry.CalloutEntry_C.SetCallout");

	UCalloutEntry_C_SetCallout_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
