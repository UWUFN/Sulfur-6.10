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

// BlueprintGeneratedClass BP_Growth_HouseGlow.BP_Growth_HouseGlow_C
// 0x0070 (0x0398 - 0x0328)
class ABP_Growth_HouseGlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PulseAudio;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             BeamAudio;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             PortalAudio;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_CenterFlare;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Shockwave_Partial_Sphere;                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Currupt_Island_Pulse;                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Deimos_Sky_Swirl;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Deimos_Sky_Cloud;                                      // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Straight_Spline_100_101;                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IslandCachedTime;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StageProgress;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Growth_HouseGlow.BP_Growth_HouseGlow_C");
		return ptr;
	}


	void UserConstructionScript();
	void EnablePortal();
	void EnableHouseGlow();
	void ReceiveBeginPlay();
	void PortalStage1();
	void PortalStage3();
	void PortalStage4();
	void PortalStage2();
	void PortalStage5();
	void PortalStage6();
	void ExecuteUbergraph_BP_Growth_HouseGlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
