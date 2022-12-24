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

// BlueprintGeneratedClass GCNL_Vortex_Enter.GCNL_Vortex_Enter_C
// 0x0031 (0x08C9 - 0x0898)
class AGCNL_Vortex_Enter_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadePPVol_LERP_F35A72C74D88F5C4CADFACB7EC8514C8;          // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadePPVol__Direction_F35A72C74D88F5C4CADFACB7EC8514C8;    // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadePPVol;                                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      CameraShakeClass;                                         // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCameraShake*                                CameraShake;                                              // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePP;                                                    // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Vortex_Enter.GCNL_Vortex_Enter_C");
		return ptr;
	}


	void UserConstructionScript();
	void FadePPVol__FinishedFunc();
	void FadePPVol__UpdateFunc();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Vortex_Enter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
