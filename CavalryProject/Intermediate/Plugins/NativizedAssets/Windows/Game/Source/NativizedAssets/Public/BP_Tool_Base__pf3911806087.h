#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ENUM_ObjectType__pf3911806087.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_ToolControls__pf691914051.h"
#include "BPI_GrabbableObj__pf691914051.h"
class UGrabbableObjectSocket_C__pf2132744816;
class UBoxComponent;
class USkeletalMeshComponent;
class ABP_MagneticPlacement_C__pf3911806087;
class AActor;
class UPrimitiveComponent;
class USceneComponent;
#include "BP_Tool_Base__pf3911806087.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Tools/BP_Tool_Base.BP_Tool_Base_C", OverrideNativeName="BP_Tool_Base_C"))
class ABP_Tool_Base_C__pf3911806087 : public AActor, public IBPI_ToolControls_C, public IBPI_GrabbableObj_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabbableObjectSocket"))
	UGrabbableObjectSocket_C__pf2132744816* bpv__GrabbableObjectSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Mag Mount", OverrideNativeName="MagnetCollision"))
	UBoxComponent* bpv__MagnetCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Tool_SkM"))
	USkeletalMeshComponent* bpv__Tool_SkM__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tool Activated", Category="Default", MultiLine="true", OverrideNativeName="toolActivated"))
	bool bpv__toolActivated__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Grabbed", Category="Default", MultiLine="true", OverrideNativeName="isGrabbed"))
	bool bpv__isGrabbed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Mount", Category="Mag Mount", MultiLine="true", OverrideNativeName="ClosestMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__ClosestMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlapping Magnets", Category="Mag Mount", MultiLine="true", OverrideNativeName="OverlappingMagnets"))
	TArray<ABP_MagneticPlacement_C__pf3911806087*> bpv__OverlappingMagnets__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tool Object Type", Category="Mag Mount", MultiLine="true", OverrideNativeName="Tool Object Type"))
	E__ENUM_ObjectType__pf bpv__ToolxObjectxType__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="On Magnet Mount", Category="Mag Mount", MultiLine="true", OverrideNativeName="OnMagnetMount"))
	bool bpv__OnMagnetMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Magnet Mount", Category="Mag Mount", MultiLine="true", OverrideNativeName="MagnetMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__MagnetMount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam"))
	EControllerHand b0l__K2Node_Event_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Active"))
	bool b0l__K2Node_Event_Active__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Magnet"))
	AActor* b0l__K2Node_CustomEvent_Magnet__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement_1"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HandSocket"))
	FName b0l__K2Node_Event_HandSocket__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachToMe"))
	USceneComponent* b0l__K2Node_Event_AttachToMe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Actor"))
	AActor* b0l__K2Node_Event_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	ABP_Tool_Base_C__pf3911806087(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Tool_Base__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Release"))
	virtual void bpf__Release__pf(EControllerHand bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Activate"))
	virtual void bpf__Activate__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Magnetize"))
	virtual void bpf__Magnetize__pf(AActor* bpp__Magnet__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ActivateTool"))
	virtual void bpf__ActivateTool__pf(bool bpp__Active__pf);
public:
};
