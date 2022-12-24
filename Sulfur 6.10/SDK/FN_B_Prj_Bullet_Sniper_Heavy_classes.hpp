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

// BlueprintGeneratedClass B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C
// 0x0014 (0x07F8 - 0x07E4)
class AB_Prj_Bullet_Sniper_Heavy_C : public AB_Prj_Bullet_Sniper_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	class USoundBase*                                  Sniper_Rifle_SurfaceImpactSound_0_1;                      // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sniper_Rifle_PlayerImpactSound_0_1;                       // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
