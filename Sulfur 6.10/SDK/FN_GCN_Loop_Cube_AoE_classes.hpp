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

// BlueprintGeneratedClass GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C
// 0x0020 (0x08B8 - 0x0898)
class AGCN_Loop_Cube_AoE_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDelta;                                              // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpDelta;                                              // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             LoopingAudio;                                             // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Cube_AoE.GCN_Loop_Cube_AoE_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void ReceiveTick(float* DeltaSeconds);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void TargetPlayerLanded(const struct FHitResult& Hit);
	void ExecuteUbergraph_GCN_Loop_Cube_AoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
