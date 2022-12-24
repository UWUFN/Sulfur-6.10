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

// AnimBlueprintGeneratedClass F_SML_CAU_Sarah_Head_01_Dyn_AnimBP.F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C
// 0x00B0 (0x0500 - 0x0450)
class UF_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_7C93049B4FDE4AB382791F8242A36627;  // 0x0458(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_B45D4D6B4C79D1ED63C9FC9F1E5CCCD6;      // 0x04C0(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_SML_CAU_Sarah_Head_01_Dyn_AnimBP.F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_F_SML_CAU_Sarah_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
