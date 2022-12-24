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

// BlueprintGeneratedClass B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C
// 0x001C (0x0FE4 - 0x0FC8)
class AB_RCRocket_Launcher_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponentBudgeted*              RC;                                                       // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RearMuzzle;                                               // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DelayBeforeFX_End;                                        // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_RCRocket_Launcher_Athena.B_RCRocket_Launcher_Athena_C");
		return ptr;
	}


	bool IsCachedIsProjectileWeapon();
	void UserConstructionScript();
	void SendMuzzleFlashFX();
	void OnWeaponVisibilityChanged(bool* bVisible);
	void ExecuteUbergraph_B_RCRocket_Launcher_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
