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

// BlueprintGeneratedClass CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C
// 0x0010 (0x0398 - 0x0388)
class ACheckForUnfloweringUITutorials_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C");
		return ptr;
	}


	void CanRunTutorialQuests(bool* Result);
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void ExecuteUbergraph_CheckForUnfloweringUITutorials(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
