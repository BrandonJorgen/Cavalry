#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PickupActorInterface__pf563933975.h"
#include "BPI_GrabbableObj__pf691914051.h"
class UGrabbableObject_C__pf2132744816;
class USceneComponent;
class AActor;
#include "BP_PickupCubeTEST__pf563933975.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST.BP_PickupCubeTEST_C", OverrideNativeName="BP_PickupCubeTEST_C"))
class ABP_PickupCubeTEST_C__pf563933975 : public AStaticMeshActor, public IPickupActorInterface_C, public IBPI_GrabbableObj_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabbableObject"))
	UGrabbableObject_C__pf2132744816* bpv__GrabbableObject__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam"))
	EControllerHand b0l__K2Node_Event_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HandSocket"))
	FName b0l__K2Node_Event_HandSocket__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachToMe"))
	USceneComponent* b0l__K2Node_Event_AttachToMe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Actor"))
	AActor* b0l__K2Node_Event_Actor__pf;
	ABP_PickupCubeTEST_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_PickupCubeTEST__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PickupCubeTEST__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PickupCubeTEST__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PickupCubeTEST__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Release"))
	virtual void bpf__Release__pf(EControllerHand bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	virtual void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	virtual void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
public:
};
