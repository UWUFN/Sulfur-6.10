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

// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_AmbientSplineActor_C : public AFortSplineAudioActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Check_Closest_Point();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientSplineActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
