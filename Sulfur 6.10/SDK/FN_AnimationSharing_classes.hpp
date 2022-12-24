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

// Class AnimationSharing.AdditiveAnimationActor
// 0x0028 (0x0350 - 0x0328)
class AAdditiveAnimationActor : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0330(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AdditiveAnimationActor");
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0010 (0x0380 - 0x0370)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlendBool;                                               // 0x037C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0010 (0x0380 - 0x0370)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                        // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateBool;                                               // 0x037C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingInstance
// 0x00D0 (0x00F8 - 0x0028)
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET
	class UAnimationSharingStateProcessor*             StateProcessor;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	class UEnum*                                       StateEnum;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class AActor*                                      SharingActor;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingManager
// 0x0038 (0x0060 - 0x0028)
class UAnimationSharingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}


	void UnregisterActor(class AActor* InActor);
	void RegisterActorWithSkeleton(class AActor* InActor, class USkeleton* SharingSkeleton);
	void RegisterActor(class AActor* InActor);
	class UAnimationSharingManager* STATIC_GetManagerForWorld(class UWorld* InWorld);
	class UAnimationSharingManager* STATIC_GetManagerForActor(class AActor* InActor);
	bool STATIC_AnimSharingEnabled();
};


// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FAnimationSharingScalability                ScalabilitySettings;                                      // 0x0038(0x0010) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (0x0050 - 0x0028)
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSharingStateProcessor.AnimationStateEnum

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}


	void ProcessActorState(class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, int* OutState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};


// Class AnimationSharing.TransitionBlendActor
// 0x0028 (0x0350 - 0x0328)
class ATransitionBlendActor : public AActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0330(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.TransitionBlendActor");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
