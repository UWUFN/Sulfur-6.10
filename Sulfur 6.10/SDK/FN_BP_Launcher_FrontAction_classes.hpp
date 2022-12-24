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

// AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C
// 0x00E8 (0x0458 - 0x0370)
class UBP_Launcher_FrontAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_497F340240F0CC64E94B6DAF83B9813F;      // 0x0378(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_90E8D6E744D2D9DA5DE75A8AA3FAEEDC;      // 0x03B8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_509BFA8742C047DE9209E1B642963779;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Launcher_FrontAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
