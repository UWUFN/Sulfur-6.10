#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ChallengeBundleCategoryHeaderStyleStruct.ChallengeBundleCategoryHeaderStyleStruct
// 0x00C1
struct FChallengeBundleCategoryHeaderStyleStruct
{
	struct FSlateBrush                                 IconAppearance_15_321A2C94451261E6A1B0528A8ADAC526;       // 0x0000(0x0088) (Edit, BlueprintVisible)
	struct FWidgetTransform                            IconTransform_14_469C4A7F4C2CC3E64B542BA6E5C59619;        // 0x0088(0x001C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UClass*                                      BundleCategoryBorderStyle_23_8B995C4D4D97D0A237F876A7FF50038E;// 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BundleCategoryNameStyle_24_848047FA48E3432AAF50138C429A9108;// 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EffectWidget_30_A539FCD44D924941563417AACA249D7A;         // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanShowLockedIcon_29_092BDED14C0CD501C8F1D284FF240998;    // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
