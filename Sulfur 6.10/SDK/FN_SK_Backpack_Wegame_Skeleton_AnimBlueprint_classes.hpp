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

// AnimBlueprintGeneratedClass SK_Backpack_Wegame_Skeleton_AnimBlueprint.SK_Backpack_Wegame_Skeleton_AnimBlueprint_C
// 0x0264 (0x06B4 - 0x0450)
class USK_Backpack_Wegame_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1747FACC43F6028274B8148C5C3255C5;      // 0x0458(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_016A74174BE5F7D7F8F91CBB300D568F;// 0x0498(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9333DEF34357DB26B270629E3ED30703;// 0x05C0(0x0040)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_3F15C75E443C45F1FC993DBB39BBAB6B;  // 0x0600(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AA2CCD2D40620C56F58FEA9E07E91DF2;// 0x0668(0x0040)
	struct FRotator                                    backpack_rotate;                                          // 0x06A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Backpack_Wegame_Skeleton_AnimBlueprint.SK_Backpack_Wegame_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Backpack_Wegame_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_016A74174BE5F7D7F8F91CBB300D568F();
	void ExecuteUbergraph_SK_Backpack_Wegame_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
