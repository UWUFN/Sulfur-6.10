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

// BlueprintGeneratedClass GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C
// 0x001C (0x08B4 - 0x0898)
class AGCL_TNT_Fuse_Projectile_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	float                                              FuseDuration;                                             // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	struct FTimerHandle                                FusePitchHandle;                                          // 0x08A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FuseElapsedTime;                                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_TNT_Fuse_Projectile.GCL_TNT_Fuse_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ModulateFuseSound();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void ExecuteUbergraph_GCL_TNT_Fuse_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
