#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class UMeshComponent;
class AActor;
class USceneComponent;
class ABP_MotionController_C__pf563933975;
#include "GrabbableObjectSocket__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/GrabbableObjectSocket.GrabbableObjectSocket_C", OverrideNativeName="GrabbableObjectSocket_C"))
class UGrabbableObjectSocket_C__pf2132744816 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Static Mesh Component", Category="Default", MultiLine="true", OverrideNativeName="StaticMeshComponent"))
	UMeshComponent* bpv__StaticMeshComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Actor", Category="Default", MultiLine="true", OverrideNativeName="RootActor"))
	AActor* bpv__RootActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Component Active", Category="Default", MultiLine="true", OverrideNativeName="ComponentActive"))
	bool bpv__ComponentActive__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_StaticMeshComponent"))
	UMeshComponent* b0l__K2Node_CustomEvent_StaticMeshComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_RootActor"))
	AActor* b0l__K2Node_CustomEvent_RootActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SocketName"))
	FName b0l__K2Node_CustomEvent_SocketName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_AttachTo"))
	USceneComponent* b0l__K2Node_CustomEvent_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf;
	UGrabbableObjectSocket_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GrabbableObjectSocket__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GrabbableObjectSocket__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Release"))
	virtual void bpf__Release__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(UMeshComponent* bpp__StaticMeshComponent__pf, AActor* bpp__RootActor__pf, FName bpp__SocketName__pf, USceneComponent* bpp__AttachTo__pf);
public:
};
