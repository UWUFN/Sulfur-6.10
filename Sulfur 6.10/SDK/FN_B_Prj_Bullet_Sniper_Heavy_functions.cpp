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

// Function B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Bullet_Sniper_Heavy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C.UserConstructionScript");

	AB_Prj_Bullet_Sniper_Heavy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
