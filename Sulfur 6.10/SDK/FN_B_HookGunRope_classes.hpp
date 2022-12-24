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

// BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C
// 0x00C0 (0x03E8 - 0x0328)
class AB_HookGunRope_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Grappling_Hook_Projectile;                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Rope;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Tight_NewTrack_0_FFAA67BE44D4D10C00414E828FA9423F;        // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Tight__Direction_FFAA67BE44D4D10C00414E828FA9423F;        // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Tight;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Reel_In_Tighten_22145CB34BE582F3E6C3B88B44E066FE;         // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Reel_In_Reel_Lerp_Controller_22145CB34BE582F3E6C3B88B44E066FE;// 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Reel_In__Direction_22145CB34BE582F3E6C3B88B44E066FE;      // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Reel_In;                                                  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start_Rope;                                               // 0x0370(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     End_Rope;                                                 // 0x037C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Projectile_Gone;                                          // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class AB_Prj_Hook_Athena_C*                        Projectile_Actor;                                         // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 RopeGE;                                                   // 0x03A0(0x0008) (Edit, BlueprintVisible)
	class USoundBase*                                  ReelSound;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReattachSound;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BlockIncomingPickups;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Change_Equipment_Tag;                                     // 0x03C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C");
		return ptr;
	}


	void UserConstructionScript();
	void Reel_In__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Tight__FinishedFunc();
	void Tight__UpdateFunc();
	void End_Reel();
	void Set_Start_Point_of_Rope();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveTick(float* DeltaSeconds);
	void TightenRope();
	void ExecuteUbergraph_B_HookGunRope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
