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

// BlueprintGeneratedClass GA_Athena_HookPassive.GA_Athena_HookPassive_C
// 0x0020 (0x0910 - 0x08F0)
class UGA_Athena_HookPassive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	bool                                               AmmoReserves;                                             // 0x08F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_Hookgun_Athena_C*                         PlayerHookGun;                                            // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HookPassive.GA_Athena_HookPassive_C");
		return ptr;
	}


	void OnRep_AmmoReserves();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Athena_HookPassive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
