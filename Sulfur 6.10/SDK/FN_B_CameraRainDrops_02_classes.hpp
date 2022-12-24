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

// BlueprintGeneratedClass B_CameraRainDrops_02.B_CameraRainDrops_02_C
// 0x0018 (0x03F8 - 0x03E0)
class AB_CameraRainDrops_02_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	float                                              Alpha_Alpha_DCEE07724A8E0C236CD3F49821233A51;             // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Alpha__Direction_DCEE07724A8E0C236CD3F49821233A51;        // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Alpha;                                                    // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraRainDrops_02.B_CameraRainDrops_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
