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

// AnimBlueprintGeneratedClass F_SML_CAU_Jess_Head_01_Dyn_AnimBP.F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C
// 0x00B0 (0x0420 - 0x0370)
class UF_SML_CAU_Jess_Head_01_Dyn_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_E9C497CE4272446DE820C7AC4F9475C9;  // 0x0378(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_A8263707428C6C1716519682DC411824;      // 0x03E0(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_SML_CAU_Jess_Head_01_Dyn_AnimBP.F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_F_SML_CAU_Jess_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
