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

// AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
// 0x0148 (0x04B8 - 0x0370)
class UBP_BoltActionSniperRifleNoScope_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_80F88762449D5790C18126A73190A30A;      // 0x0378(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3F9AE2D64A1081980E00CE94E79DD708;      // 0x03B8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F813E2B842B7262277782F9EC5A3917A;// 0x0420(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
