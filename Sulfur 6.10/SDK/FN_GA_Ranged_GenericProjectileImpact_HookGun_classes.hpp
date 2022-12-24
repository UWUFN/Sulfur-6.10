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

// BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C
// 0x0028 (0x0958 - 0x0930)
class UGA_Ranged_GenericProjectileImpact_HookGun_C : public UGA_Ranged_GenericDamage_C
{
public:
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0930(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C");
		return ptr;
	}


	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
