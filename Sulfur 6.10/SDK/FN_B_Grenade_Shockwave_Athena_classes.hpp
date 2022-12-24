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

// BlueprintGeneratedClass B_Grenade_Shockwave_Athena.B_Grenade_Shockwave_Athena_C
// 0x0000 (0x0B60 - 0x0B60)
class AB_Grenade_Shockwave_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Grenade_Shockwave_Athena.B_Grenade_Shockwave_Athena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
