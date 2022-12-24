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

// AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C
// 0x1228 (0x1598 - 0x0370)
class UShoppingCartVehicleSK_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8FDF89204E958A5F299D6C81CC05AEC0;      // 0x0378(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F89D0F4F47020ADDE62FB5919F7EECC0;// 0x03B8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E;// 0x03F8(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA;// 0x0520(0x0128)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0648(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_02FB628C4E1C416029F3FC8C0A2F6265; // 0x0650(0x0560)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C;// 0x0BB0(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2;// 0x0CD8(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843;// 0x0E00(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD;// 0x0F28(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178;// 0x1050(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219;// 0x1178(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA;// 0x12A0(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1B1D442A4E63EB172E7CF2ADCD71EAC5;// 0x13C8(0x0128)
	struct FTransform                                  TruckTransformF;                                          // 0x14F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TruckTransformB;                                          // 0x1520(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinFR;                                              // 0x1550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinFL;                                              // 0x1554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinBR;                                              // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinBL;                                              // 0x155C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelRotationFR;                                          // 0x1560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelRotationFL;                                          // 0x1564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SeatCoverRotation;                                        // 0x1568(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeatCoverForce;                                           // 0x1574(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeatBasePosition;                                         // 0x1580(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SeatBaseRotation;                                         // 0x158C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_RigidBody_02FB628C4E1C416029F3FC8C0A2F6265();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_1B1D442A4E63EB172E7CF2ADCD71EAC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843();
	void ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
