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

// BlueprintGeneratedClass BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C
// 0x02D0 (0x05F8 - 0x0328)
class ABP_AmbientLakeAudioActor_C : public AActor
{
public:
	class UAudioComponent*                             WaterLoopAudio;                                           // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverride;                                      // 0x0338(0x02A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     AttenuationExtents;                                       // 0x05E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientLakeAudioActor.BP_AmbientLakeAudioActor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
