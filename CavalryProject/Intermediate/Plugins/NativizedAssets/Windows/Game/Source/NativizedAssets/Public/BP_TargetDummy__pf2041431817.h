#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_TakeDamage__pf691914051.h"
class UStaticMeshComponent;
class USceneComponent;
class AActor;
#include "BP_TargetDummy__pf2041431817.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Playground/BP_TargetDummy.BP_TargetDummy_C", OverrideNativeName="BP_TargetDummy_C"))
class ABP_TargetDummy_C__pf2041431817 : public AActor, public IBPI_TakeDamage_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Dummy_SM"))
	UStaticMeshComponent* bpv__Dummy_SM__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", MultiLine="true", OverrideNativeName="health"))
	int32 bpv__health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Alive", Category="Default", MultiLine="true", OverrideNativeName="targetAlive"))
	bool bpv__targetAlive__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FTransform b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount_1"))
	int32 b0l__K2Node_Event_DamageAmount_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount"))
	int32 b0l__K2Node_Event_DamageAmount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamagingActor"))
	AActor* b0l__K2Node_Event_DamagingActor__pf;
	ABP_TargetDummy_C__pf2041431817(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_TargetDummy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetDummy__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_TargetDummy__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamageActor"))
	virtual void bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnTarget"))
	virtual void bpf__SpawnTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf);
public:
};
