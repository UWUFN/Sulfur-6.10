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

// Function LTMVictory.LTMVictory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULTMVictory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMVictory.LTMVictory_C.Construct");

	ULTMVictory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LTMVictory.LTMVictory_C.Event Intro
// (BlueprintCallable, BlueprintEvent)

void ULTMVictory_C::Event_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMVictory.LTMVictory_C.Event Intro");

	ULTMVictory_C_Event_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LTMVictory.LTMVictory_C.ExecuteUbergraph_LTMVictory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULTMVictory_C::ExecuteUbergraph_LTMVictory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMVictory.LTMVictory_C.ExecuteUbergraph_LTMVictory");

	ULTMVictory_C_ExecuteUbergraph_LTMVictory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
