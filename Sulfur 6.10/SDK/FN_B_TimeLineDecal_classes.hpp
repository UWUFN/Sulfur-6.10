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

// BlueprintGeneratedClass B_TimeLineDecal.B_TimeLineDecal_C
// 0x0030 (0x0358 - 0x0328)
class AB_TimeLineDecal_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Time_8976492442EE7DF41645EDBAB6FCEB40;         // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_WaveOffset_8976492442EE7DF41645EDBAB6FCEB40;   // 0x033C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Intensity_8976492442EE7DF41645EDBAB6FCEB40;    // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8976492442EE7DF41645EDBAB6FCEB40;   // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMID;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_TimeLineDecal.B_TimeLineDecal_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_TimeLineDecal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
