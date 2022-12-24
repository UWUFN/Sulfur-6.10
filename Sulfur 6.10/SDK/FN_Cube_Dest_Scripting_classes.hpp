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

// BlueprintGeneratedClass Cube_Dest_Scripting.Cube_Dest_Scripting_C
// 0x0078 (0x03A0 - 0x0328)
class ACube_Dest_Scripting_C : public AFortAthenaWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Cube_Printing_540_541;                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_Athena_Water_C*                          LakeActor;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               CubeSinking;                                              // 0x0348(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LakeTurnedOn;                                             // 0x0349(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	class ACUBE_C*                                     CubeRef;                                                  // 0x0350(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SinkingWaterBoil;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class ABP_AmbientSplineActor_C*>            ShorelineAudioActors;                                     // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_AmbientLakeAudioActor_C*>         LakeAudioActors;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UAudioComponent*                             PropagateAudioLoop;                                       // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                LakeState;                                                // 0x0388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LakeCenter;                                               // 0x038C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedPreSinkAudio;                                       // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                IsCubeSinking;                                            // 0x039C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cube_Dest_Scripting.Cube_Dest_Scripting_C");
		return ptr;
	}


	void OnRep_IsCubeSinking();
	void OnRep_LakeState();
	void UpdateCorruption(float PercentComplete);
	void ConvertLakeAudioActor(class ABP_AmbientLakeAudioActor_C* Lake);
	void CorruptRiverAudioActor(class ABP_AmbientSplineActor_C* River);
	void OnRep_LakeTurnedOn();
	void OnRep_CubeSinking();
	void UserConstructionScript();
	void CubeStartSinking();
	void CubeStopSinking();
	void CubeSplash();
	void LakeTurnOn();
	void ReceiveBeginPlay();
	void CubeDone(int CurrentIndex);
	void ExecuteUbergraph_Cube_Dest_Scripting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
