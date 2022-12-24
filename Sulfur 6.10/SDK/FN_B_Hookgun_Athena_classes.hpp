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

// BlueprintGeneratedClass B_Hookgun_Athena.B_Hookgun_Athena_C
// 0x0011 (0x0FD9 - 0x0FC8)
class AB_Hookgun_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FTimerHandle                                Timer;                                                    // 0x0FC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                       Player_Pawn;                                              // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0FD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Hookgun_Athena.B_Hookgun_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
