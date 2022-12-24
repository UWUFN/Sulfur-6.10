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

// Function LTMHeistVictory.LTMHeistVictory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULTMHeistVictory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMHeistVictory.LTMHeistVictory_C.Construct");

	ULTMHeistVictory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LTMHeistVictory.LTMHeistVictory_C.Event Intro
// (BlueprintCallable, BlueprintEvent)

void ULTMHeistVictory_C::Event_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMHeistVictory.LTMHeistVictory_C.Event Intro");

	ULTMHeistVictory_C_Event_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LTMHeistVictory.LTMHeistVictory_C.Event Outro
// (BlueprintCallable, BlueprintEvent)

void ULTMHeistVictory_C::Event_Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMHeistVictory.LTMHeistVictory_C.Event Outro");

	ULTMHeistVictory_C_Event_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LTMHeistVictory.LTMHeistVictory_C.ExecuteUbergraph_LTMHeistVictory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULTMHeistVictory_C::ExecuteUbergraph_LTMHeistVictory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LTMHeistVictory.LTMHeistVictory_C.ExecuteUbergraph_LTMHeistVictory");

	ULTMHeistVictory_C_ExecuteUbergraph_LTMHeistVictory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
