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

// BlueprintGeneratedClass GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C
// 0x0080 (0x0918 - 0x0898)
class AGCL_SpookyMist_Wobble_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             TargetPawn;                                               // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerHeightOffset;                                       // 0x08A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetVelocity;                                           // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerVelocityMultiplier;                                 // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusOfCornToWiggle;                                     // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WiggleCooldown;                                           // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TravelTime;                                               // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	struct FScalableFloat                              DashStrength;                                             // 0x08E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABuildingSMActor*>                    ArrayOfActors;                                            // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                WiggleTimer;                                              // 0x0910(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_SpookyMist_Wobble.GCL_SpookyMist_Wobble_C");
		return ptr;
	}


	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WiggleActors();
	void ExecuteUbergraph_GCL_SpookyMist_Wobble(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
