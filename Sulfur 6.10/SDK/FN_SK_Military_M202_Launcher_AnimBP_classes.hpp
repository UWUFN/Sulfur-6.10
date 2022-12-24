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

// AnimBlueprintGeneratedClass SK_Military_M202_Launcher_AnimBP.SK_Military_M202_Launcher_AnimBP_C
// 0x0690 (0x0A00 - 0x0370)
class USK_Military_M202_Launcher_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_17CF37A94A2C7AC4053A03A9139BF1E7;      // 0x0378(0x0040)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_E162F90747951BA3BEDA4896DEED9E40;  // 0x03B8(0x0068)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_B765535648D151547097BEA864D8C8D4; // 0x0420(0x0560)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_43CF7C314AA3EFEE15AD1687FA14E458;// 0x0980(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_68F46D374AA96ADBF7D82B82DA19EDA7;// 0x09C0(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Military_M202_Launcher_AnimBP.SK_Military_M202_Launcher_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Military_M202_Launcher_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
