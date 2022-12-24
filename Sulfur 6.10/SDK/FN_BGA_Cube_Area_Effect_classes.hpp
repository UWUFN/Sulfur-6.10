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

// BlueprintGeneratedClass BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C
// 0x0069 (0x0761 - 0x06F8)
class ABGA_Cube_Area_Effect_C : public AFortAthenaLowGravZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Cube_Printing;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Cube_Rune_Volume;                                       // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Cube_AoE_Volume;                                        // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AreaSphere;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RuneMesh;                                                 // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Effect_Area;                                              // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Gravity;                                                  // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0740(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PrintingEffect;                                           // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      RuneIndex;                                                // 0x0750(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRuneAmbientEffect;                                  // 0x0751(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0752(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    RuneAmbientEffect;                                        // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Printing;                                                 // 0x0760(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Cube_Area_Effect.BGA_Cube_Area_Effect_C");
		return ptr;
	}


	void OnRep_Printing();
	void OnRep_EnableRuneAmbientEffect();
	void OnRep_RuneIndex();
	void SetRuneMaterial();
	void UserConstructionScript();
	void TrySpawnGlowEffect();
	void BndEvt__Effect_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void DisableGlowEffect();
	void CubeNoLongerOnTop();
	void SpawnVolumeEffect();
	void ReceiveBeginPlay();
	void ReplayScrubbed();
	void ExecuteUbergraph_BGA_Cube_Area_Effect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
