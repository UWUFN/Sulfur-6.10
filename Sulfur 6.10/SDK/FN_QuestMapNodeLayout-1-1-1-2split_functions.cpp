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

// Function QuestMapNodeLayout-1-1-1-2split.QuestMapNodeLayout-1-1-1-2split_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMapNodeLayout_1_1_1_2split_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapNodeLayout-1-1-1-2split.QuestMapNodeLayout-1-1-1-2split_C.Construct");

	UQuestMapNodeLayout_1_1_1_2split_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMapNodeLayout-1-1-1-2split.QuestMapNodeLayout-1-1-1-2split_C.ExecuteUbergraph_QuestMapNodeLayout-1-1-1-2split
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMapNodeLayout_1_1_1_2split_C::ExecuteUbergraph_QuestMapNodeLayout_1_1_1_2split(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapNodeLayout-1-1-1-2split.QuestMapNodeLayout-1-1-1-2split_C.ExecuteUbergraph_QuestMapNodeLayout-1-1-1-2split");

	UQuestMapNodeLayout_1_1_1_2split_C_ExecuteUbergraph_QuestMapNodeLayout_1_1_1_2split_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
