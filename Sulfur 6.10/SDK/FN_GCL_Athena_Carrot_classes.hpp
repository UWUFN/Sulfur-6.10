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

// BlueprintGeneratedClass GCL_Athena_Carrot.GCL_Athena_Carrot_C
// 0x0020 (0x08B8 - 0x0898)
class AGCL_Athena_Carrot_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_171D7FAA42724A6BBDB147806C9E9DCE;   // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_171D7FAA42724A6BBDB147806C9E9DCE;   // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Athena_Carrot.GCL_Athena_Carrot_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void ExecuteUbergraph_GCL_Athena_Carrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
