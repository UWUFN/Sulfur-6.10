#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCNS_GM_OnDeathExplosionFriendly.GCNS_GM_OnDeathExplosionFriendly_C
// 0x0000 (0x0080 - 0x0080)
class UGCNS_GM_OnDeathExplosionFriendly_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNS_GM_OnDeathExplosionFriendly.GCNS_GM_OnDeathExplosionFriendly_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
