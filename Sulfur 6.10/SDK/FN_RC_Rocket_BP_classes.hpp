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

// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
// 0x0148 (0x04B8 - 0x0370)
class URC_Rocket_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9;      // 0x0378(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261;// 0x03B8(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4;      // 0x0450(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_RC_Rocket_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
