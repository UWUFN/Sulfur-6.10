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

// Function TrickEntry.TrickEntry_C.SetTrick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTrickEntry_C::SetTrick(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrickEntry.TrickEntry_C.SetTrick");

	UTrickEntry_C_SetTrick_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
