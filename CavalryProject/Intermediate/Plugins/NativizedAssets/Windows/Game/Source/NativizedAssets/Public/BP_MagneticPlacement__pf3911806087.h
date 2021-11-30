#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "ENUM_ObjectType__pf3911806087.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_Magnetic__pf691914051.h"
class USphereComponent;
class AActor;
#include "BP_MagneticPlacement__pf3911806087.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Tools/BP_MagneticPlacement.BP_MagneticPlacement_C", OverrideNativeName="BP_MagneticPlacement_C"))
class ABP_MagneticPlacement_C__pf3911806087 : public AActor, public IBPI_Magnetic_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collision Detection"))
	USphereComponent* bpv__CollisionxDetection__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Occupied", Category="Default", MultiLine="true", OverrideNativeName="Occupied"))
	bool bpv__Occupied__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Object Type", Category="Default", MultiLine="true", OverrideNativeName="Object Type"))
	E__ENUM_ObjectType__pf bpv__ObjectxType__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Magnet"))
	AActor* b0l__K2Node_Event_Magnet__pf;
	ABP_MagneticPlacement_C__pf3911806087(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_MagneticPlacement__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Magnetize"))
	virtual void bpf__Magnetize__pf(AActor* bpp__Magnet__pf);
public:
};
