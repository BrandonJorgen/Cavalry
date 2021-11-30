#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "BPI_WeaponControls__pf691914051.h"
#include "BPI_ToolControls__pf691914051.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class ABP_PlayerCharacter_Base_C__pf1490413170;
class ABP_PlayerGear_C__pf3324220276;
class ABPC_War_C__pf1490413170;
class ABP_Firearm_Base_C__pf1418999182;
class ABP_Tool_Base_C__pf3911806087;
#include "BP_CavalryController__pf1490413170.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Characters/BP_CavalryController.BP_CavalryController_C", OverrideNativeName="BP_CavalryController_C"))
class ABP_CavalryController_C__pf1490413170 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Possessed Character", Category="Default", MultiLine="true", OverrideNativeName="possessedCharacter"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__possessedCharacter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owned Gear", Category="Default", MultiLine="true", OverrideNativeName="ownedGear"))
	ABP_PlayerGear_C__pf3324220276* bpv__ownedGear__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Smooth Rotation", Category="Default", MultiLine="true", OverrideNativeName="Smooth Rotation"))
	bool bpv__SmoothxRotation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Turn Deadzone", Category="Default", MultiLine="true", OverrideNativeName="Turn Deadzone"))
	float bpv__TurnxDeadzone__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Smooth Rotation Speed", Category="Default", MultiLine="true", OverrideNativeName="Smooth Rotation Speed"))
	float bpv__SmoothxRotationxSpeed__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Snap Rotation Degrees", Category="Default", MultiLine="true", OverrideNativeName="Snap Rotation Degrees"))
	float bpv__SnapxRotationxDegrees__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Angle", Category="Default", MultiLine="true", OverrideNativeName="Rotation Angle"))
	float bpv__RotationxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Body Yaw", Category="Default", MultiLine="true", OverrideNativeName="BodyYaw"))
	float bpv__BodyYaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Player_Character_Base"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPC_Famine"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBPC_Famine__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPC_Death"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBPC_Death__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPC_War"))
	ABPC_War_C__pf1490413170* b0l__K2Node_DynamicCast_AsBPC_War__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPC_Conquest"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBPC_Conquest__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base_1"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_1"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Tool_Base"))
	ABP_Tool_Base_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Tool_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base_2"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b0l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ActivateTool_self_CastInput"))
	TScriptInterface<IBPI_ToolControls_C> b0l__CallFunc_ActivateTool_self_CastInput__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_2"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b0l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base_3"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_12"))
	bool b0l__K2Node_DynamicCast_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Tool_Base_1"))
	ABP_Tool_Base_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Tool_Base_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_13"))
	bool b0l__K2Node_DynamicCast_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_3"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_14"))
	bool b0l__K2Node_DynamicCast_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ActivateTool_self_CastInput_1"))
	TScriptInterface<IBPI_ToolControls_C> b0l__CallFunc_ActivateTool_self_CastInput_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_4"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_15"))
	bool b0l__K2Node_DynamicCast_bSuccess_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base_4"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_16"))
	bool b0l__K2Node_DynamicCast_bSuccess_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_5"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_17"))
	bool b0l__K2Node_DynamicCast_bSuccess_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base_5"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_18"))
	bool b0l__K2Node_DynamicCast_bSuccess_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_6"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_19"))
	bool b0l__K2Node_DynamicCast_bSuccess_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Weapon_Controls_7"))
	TScriptInterface<IBPI_WeaponControls_C> b0l__K2Node_DynamicCast_AsBPI_Weapon_Controls_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_20"))
	bool b0l__K2Node_DynamicCast_bSuccess_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b0l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b0l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FKey b0l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b0l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_8"))
	FKey b0l__K2Node_InputActionEvent_Key_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_3"))
	FKey b0l__Temp_struct_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_9"))
	FKey b0l__K2Node_InputActionEvent_Key_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_10"))
	FKey b0l__K2Node_InputActionEvent_Key_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	ABP_CavalryController_C__pf1490413170(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_CavalryController__pf_15(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbRight_X_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_Y_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MotionControllerThumbLeft_X_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryButtonLeft_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_PrimaryButtonLeft_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_SecondaryButtonRight_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_SecondaryButtonRight_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryButtonRight_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_PrimaryButtonRight_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_PrimaryTriggerRight_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_PrimaryTriggerLeft_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabRight_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_GrabLeft_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
public:
};
