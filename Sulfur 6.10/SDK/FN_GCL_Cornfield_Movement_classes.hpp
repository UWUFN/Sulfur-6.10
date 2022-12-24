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

// BlueprintGeneratedClass GCL_Cornfield_Movement.GCL_Cornfield_Movement_C
// 0x0040 (0x08D8 - 0x0898)
class AGCL_Cornfield_Movement_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             TargetPawn;                                               // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerHeightOffset;                                       // 0x08B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetVelocity;                                           // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerVelocityMultiplier;                                 // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusOfCornToWiggle;                                     // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WiggleCooldown;                                           // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    LoopingEmitter;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Cornfield_Movement.GCL_Cornfield_Movement_C");
		return ptr;
	}


	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void On_Player_Step();
	void ExecuteUbergraph_GCL_Cornfield_Movement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
