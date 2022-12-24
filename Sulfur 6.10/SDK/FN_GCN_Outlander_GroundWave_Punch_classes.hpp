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

// BlueprintGeneratedClass GCN_Outlander_GroundWave_Punch.GCN_Outlander_GroundWave_Punch_C
// 0x0000 (0x0080 - 0x0080)
class UGCN_Outlander_GroundWave_Punch_C : public UFortGameplayCueNotify_Simple
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Outlander_GroundWave_Punch.GCN_Outlander_GroundWave_Punch_C");
		return ptr;
	}


	bool OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
