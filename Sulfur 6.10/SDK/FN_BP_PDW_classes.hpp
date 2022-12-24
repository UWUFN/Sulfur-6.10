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

// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
// 0x00E8 (0x0458 - 0x0370)
class UBP_PDW_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0562F6184C86E34D2BBC87BBF67B4E94;      // 0x0378(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8DF0F768443238A6FA9CD39C6A756B6D;// 0x03B8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1186B52041A8BE0BBE0BB29197667B1A;      // 0x03F0(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_PDW(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
