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

// BlueprintGeneratedClass GC_Perk_Ninja_ShadowStance_Active.GC_Perk_Ninja_ShadowStance_Active_C
// 0x003C (0x045C - 0x0420)
class AGC_Perk_Ninja_ShadowStance_Active_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	float                                              Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_E17701694932393A7CEF57869B1CE50B;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_E17701694932393A7CEF57869B1CE50B;// 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate_Ninja_ShadowStance_Dissolve__Direction_E17701694932393A7CEF57869B1CE50B;// 0x0430(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Animate_Ninja_ShadowStance_Dissolve;                      // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawn_Ninja_C*                         MyTarget;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Shadow_Stance_Material;                                   // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Ninja_Dissolve_Material;                                  // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowStanceVisibility;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Perk_Ninja_ShadowStance_Active.GC_Perk_Ninja_ShadowStance_Active_C");
		return ptr;
	}


	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void Shadow_Stance_Dissolve_Timeline(bool Reverse);
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GC_Perk_Ninja_ShadowStance_Active(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
