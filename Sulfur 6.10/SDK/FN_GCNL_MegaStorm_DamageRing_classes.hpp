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

// BlueprintGeneratedClass GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C
// 0x0048 (0x08E0 - 0x0898)
class AGCNL_MegaStorm_DamageRing_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_1_StormDamage_20EF97A841793BC1BC17A38E68D1694B;  // 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_20EF97A841793BC1BC17A38E68D1694B;   // 0x08A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1_2;                                             // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_StormDamage_217AB728482679C9E1B9D281A03AF2D6;  // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_217AB728482679C9E1B9D281A03AF2D6;   // 0x08B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    StormDamageFX;                                            // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class ASafeZoneIndicator_C*                        SafeZoneIndicator;                                        // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnDamageSound;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_MegaStorm_DamageRing.GCNL_MegaStorm_DamageRing_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void Reset();
	void ExecuteUbergraph_GCNL_MegaStorm_DamageRing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
