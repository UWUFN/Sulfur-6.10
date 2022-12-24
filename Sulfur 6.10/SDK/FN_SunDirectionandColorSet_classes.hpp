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

// BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C
// 0x0048 (0x0370 - 0x0328)
class ASunDirectionandColorSet_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     SunLightVector;                                           // 0x0340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SunLightColor;                                            // 0x034C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FMaterialParameterInfo                      Material_COllection;                                      // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_SunDirectionandColorSet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
