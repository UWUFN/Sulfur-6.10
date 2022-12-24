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

// BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C
// 0x0008 (0x03E8 - 0x03E0)
class ABP_CameraLens_CrackExit_C : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*                    Portal;                                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
