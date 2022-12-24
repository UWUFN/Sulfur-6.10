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

// BlueprintGeneratedClass B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C
// 0x001C (0x03FC - 0x03E0)
class AB_CameraLens_SpookyMist_Loop_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      VelocityActor;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRot;                                                // 0x03F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_SpookyMist_Loop.B_CameraLens_SpookyMist_Loop_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_SpookyMist_Loop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
