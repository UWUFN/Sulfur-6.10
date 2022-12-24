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

// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
// 0x00E8 (0x0458 - 0x0370)
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39;      // 0x0378(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_782D94BD4EFDE1439B44CB93C212AD03;      // 0x03B8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_829520A14F89D74E64C7AEBBB88029DD;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
