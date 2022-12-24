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

// Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMapNodeLayout_2Split_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.Construct");

	UQuestMapNodeLayout_2Split_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.ExecuteUbergraph_QuestMapNodeLayout-2Split
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMapNodeLayout_2Split_C::ExecuteUbergraph_QuestMapNodeLayout_2Split(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.ExecuteUbergraph_QuestMapNodeLayout-2Split");

	UQuestMapNodeLayout_2Split_C_ExecuteUbergraph_QuestMapNodeLayout_2Split_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
