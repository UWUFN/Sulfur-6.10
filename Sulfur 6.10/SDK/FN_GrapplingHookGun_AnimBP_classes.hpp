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

// AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C
// 0x0229 (0x0599 - 0x0370)
class UGrapplingHookGun_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7F4939FF463BFA7ADBE0D0BC3CE8B2CF;      // 0x0378(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_32473B4946F7224F26381CAE8FAF7655;// 0x03B8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118;// 0x03F0(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FACD2E7D44A066EA8B462DB8C1391182;// 0x0518(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_54A8C16E43BFCF837D3972B21E76142E;// 0x0558(0x0040)
	bool                                               IsFired;                                                  // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_GrapplingHookGun_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
