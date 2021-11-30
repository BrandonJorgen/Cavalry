#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class UMeshComponent;
class AActor;
class USceneComponent;
#include "GrabbableObject__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/GrabbableObject.GrabbableObject_C", OverrideNativeName="GrabbableObject_C"))
class UGrabbableObject_C__pf2132744816 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mesh Component", Category="Default", MultiLine="true", OverrideNativeName="MeshComponent"))
	UMeshComponent* bpv__MeshComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Actor", Category="Default", MultiLine="true", OverrideNativeName="RootActor"))
	AActor* bpv__RootActor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Component Active", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="ComponentActive"))
	bool bpv__ComponentActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Using Root", Category="Default", MultiLine="true", OverrideNativeName="UsingRoot"))
	bool bpv__UsingRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Simulate"))
	bool b0l__K2Node_CustomEvent_Simulate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MeshComponent"))
	UMeshComponent* b0l__K2Node_CustomEvent_MeshComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_RootActor"))
	AActor* b0l__K2Node_CustomEvent_RootActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_AttachTo"))
	USceneComponent* b0l__K2Node_CustomEvent_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_UseRoot"))
	bool b0l__K2Node_CustomEvent_UseRoot__pf;
	UGrabbableObject_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GrabbableObject__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GrabbableObject__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Release"))
	virtual void bpf__Release__pf(bool bpp__Simulate__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(UMeshComponent* bpp__MeshComponent__pf, AActor* bpp__RootActor__pf, USceneComponent* bpp__AttachTo__pf, bool bpp__UseRoot__pf);
public:
};
