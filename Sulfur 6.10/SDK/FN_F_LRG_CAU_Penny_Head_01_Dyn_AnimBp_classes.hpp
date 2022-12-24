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

// AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
// 0x00B0 (0x0500 - 0x0450)
class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_CD7E1EF9420B7BB62D1960BB468B9A0F;  // 0x0458(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2211EFB427B44656937CB978CEBA74F;      // 0x04C0(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C");
		return ptr;
	}


	void ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
