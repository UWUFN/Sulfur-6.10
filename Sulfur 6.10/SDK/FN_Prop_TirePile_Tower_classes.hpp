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

// BlueprintGeneratedClass Prop_TirePile_Tower.Prop_TirePile_Tower_C
// 0x0048 (0x0C80 - 0x0C38)
class AProp_TirePile_Tower_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Jump_Collision;                                           // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Ceiling;                                                  // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C49(0x0003) MISSED OFFSET
	float                                              BounceHeight;                                             // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpHeight;                                               // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalBounceJumpHeight;                                    // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        LaunchForceFeedback;                                      // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             OverlapPawn;                                              // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerController*                       OverlapController;                                        // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_PlayerLaunched;                                        // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TireSound;                                                // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prop_TirePile_Tower.Prop_TirePile_Tower_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Prop_TirePile_Tower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
