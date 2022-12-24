#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnTouchEnded
struct UAthenaFrontEndRadialPicker_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.On Item Touched
struct UAthenaFrontEndRadialPicker_C_On_Item_Touched_Params
{
	class URadialPickerItem_C*                         Touched_Item;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetShowMouseCursor
struct UAthenaFrontEndRadialPicker_C_SetShowMouseCursor_Params
{
	bool                                               InShowMouseCursor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetPointerDirection
struct UAthenaFrontEndRadialPicker_C_SetPointerDirection_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.IsGamepadInPickerDeadZone
struct UAthenaFrontEndRadialPicker_C_IsGamepadInPickerDeadZone_Params
{
	bool                                               bIsInDeadZone;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.MoveActiveOption
struct UAthenaFrontEndRadialPicker_C_MoveActiveOption_Params
{
	int                                                MoveOptionDirection;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ResetInput
struct UAthenaFrontEndRadialPicker_C_ResetInput_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.CanConfirm
struct UAthenaFrontEndRadialPicker_C_CanConfirm_Params
{
	bool                                               CanAccept;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetInputMode
struct UAthenaFrontEndRadialPicker_C_SetInputMode_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.SetActiveOption
struct UAthenaFrontEndRadialPicker_C_SetActiveOption_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClearActiveOption
struct UAthenaFrontEndRadialPicker_C_ClearActiveOption_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionAngle
struct UAthenaFrontEndRadialPicker_C_GetOptionAngle_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetAngleDifference
struct UAthenaFrontEndRadialPicker_C_GetAngleDifference_Params
{
	float                                              AngleA;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleB;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.GetOptionPosition
struct UAthenaFrontEndRadialPicker_C_GetOptionPosition_Params
{
	int                                                Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.InitializePicker
struct UAthenaFrontEndRadialPicker_C_InitializePicker_Params
{
	EFortPickerMode                                    PickerMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Construct
struct UAthenaFrontEndRadialPicker_C_Construct_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Tick
struct UAthenaFrontEndRadialPicker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event AcceptOption
struct UAthenaFrontEndRadialPicker_C_Event_AcceptOption_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Event CancelPicker
struct UAthenaFrontEndRadialPicker_C_Event_CancelPicker_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ClosePicker
struct UAthenaFrontEndRadialPicker_C_ClosePicker_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.AcceptChosenOption
struct UAthenaFrontEndRadialPicker_C_AcceptChosenOption_Params
{
	int                                                PickerOption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.OnPickerRefreshItems
struct UAthenaFrontEndRadialPicker_C_OnPickerRefreshItems_Params
{
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption0_K2Node_ComponentBoundEvent_2_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption1_K2Node_ComponentBoundEvent_8_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption2_K2Node_ComponentBoundEvent_9_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption3_K2Node_ComponentBoundEvent_12_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption4_K2Node_ComponentBoundEvent_16_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption5_K2Node_ComponentBoundEvent_21_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption6_K2Node_ComponentBoundEvent_27_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On Item Touched__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PickerOption7_K2Node_ComponentBoundEvent_34_On_Item_Touched__DelegateSignature_Params
{
	class URadialPickerItem_C*                         Picked_Option;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__NextWheelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__NextWheelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_BndEvt__PreviousWheelButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.ExecuteUbergraph_AthenaFrontEndRadialPicker
struct UAthenaFrontEndRadialPicker_C_ExecuteUbergraph_AthenaFrontEndRadialPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaFrontEndRadialPicker.AthenaFrontEndRadialPicker_C.Picker Closing__DelegateSignature
struct UAthenaFrontEndRadialPicker_C_Picker_Closing__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
