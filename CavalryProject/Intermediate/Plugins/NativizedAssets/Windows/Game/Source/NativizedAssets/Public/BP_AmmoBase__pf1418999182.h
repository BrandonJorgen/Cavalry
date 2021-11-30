#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_LoadType__pf1725717533.h"
#include "ENUM_ObjectType__pf3911806087.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_GrabbableObj__pf691914051.h"
#include "BPI_Magnetic__pf691914051.h"
class UArrowComponent;
class UBoxComponent;
class UGrabbableObjectSocket_C__pf2132744816;
class UStaticMeshComponent;
class ABP_MagneticPlacement_C__pf3911806087;
class AAmmoDisplay_C__pf3627927311;
class USceneComponent;
class AActor;
class ABP_Firearm_Base_C__pf1418999182;
class UPrimitiveComponent;
#include "BP_AmmoBase__pf1418999182.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Weapons/BP_AmmoBase.BP_AmmoBase_C", OverrideNativeName="BP_AmmoBase_C"))
class ABP_AmmoBase_C__pf1418999182 : public AActor, public IBPI_GrabbableObj_C, public IBPI_Magnetic_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AmmoWidget_SpawnLoc"))
	UArrowComponent* bpv__AmmoWidget_SpawnLoc__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MagnetCollision"))
	UBoxComponent* bpv__MagnetCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabbableObjectSocket"))
	UGrabbableObjectSocket_C__pf2132744816* bpv__GrabbableObjectSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ammo_SM"))
	UStaticMeshComponent* bpv__Ammo_SM__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Magazine Ammo", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="MagazineAmmo"))
	int32 bpv__MagazineAmmo__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ammo Type", Category="Default", MultiLine="true", OverrideNativeName="AmmoType"))
	E__E_LoadType__pf bpv__AmmoType__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Grabbed", Category="Default", MultiLine="true", OverrideNativeName="IsGrabbed"))
	bool bpv__IsGrabbed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="On Magnet Mount", Category="Default", MultiLine="true", OverrideNativeName="OnMagnetMount"))
	bool bpv__OnMagnetMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Magnet Mount", Category="Default", MultiLine="true", OverrideNativeName="MagnetMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__MagnetMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlapping Magnets", Category="Default", MultiLine="true", OverrideNativeName="OverlappingMagnets"))
	TArray<ABP_MagneticPlacement_C__pf3911806087*> bpv__OverlappingMagnets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Mount", Category="Default", MultiLine="true", OverrideNativeName="ClosestMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__ClosestMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Gun", Category="Default", MultiLine="true", OverrideNativeName="InGun"))
	bool bpv__InGun__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ammo Object Type", Category="Default", MultiLine="true", OverrideNativeName="Ammo Object Type"))
	E__ENUM_ObjectType__pf bpv__AmmoxObjectxType__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo Widget Ref", Category="Default", MultiLine="true", OverrideNativeName="AmmoWidget_Ref"))
	AAmmoDisplay_C__pf3627927311* bpv__AmmoWidget_Ref__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HandSocket"))
	FName b0l__K2Node_Event_HandSocket__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachToMe"))
	USceneComponent* b0l__K2Node_Event_AttachToMe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Actor"))
	AActor* b0l__K2Node_Event_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam"))
	EControllerHand b0l__K2Node_Event_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Firearm_Base"))
	ABP_Firearm_Base_C__pf1418999182* b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Magnet"))
	AActor* b0l__K2Node_Event_Magnet__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement_1"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_RemainingShots"))
	int32 b0l__K2Node_CustomEvent_RemainingShots__pf;
	ABP_AmmoBase_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_AmmoBase__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnAmmoChange"))
	virtual void bpf__OnAmmoChange__pf(int32 bpp__RemainingShots__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Magnetize"))
	virtual void bpf__Magnetize__pf(AActor* bpp__Magnet__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SnapEvent"))
	virtual void bpf__SnapEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Release"))
	virtual void bpf__Release__pf(EControllerHand bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
