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

// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// 0x10E0 (0x1530 - 0x0450)
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_966722F040605A529996238D427F43D4;      // 0x0458(0x0040)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B;  // 0x0498(0x0068)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095;// 0x0500(0x0360)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646;// 0x0860(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2;// 0x08A0(0x0040)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9;// 0x08E0(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC;// 0x0C40(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505;// 0x0FA0(0x0360)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3;// 0x1300(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7;// 0x13D8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405;// 0x1420(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E;// 0x14E0(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
