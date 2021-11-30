#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UArrowComponent;
class UStaticMeshComponent;
class USceneComponent;
#include "BP_ObjectiveDisplay_Spawner__pf2435026734.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Objective_Display/BP_ObjectiveDisplay_Spawner.BP_ObjectiveDisplay_Spawner_C", OverrideNativeName="BP_ObjectiveDisplay_Spawner_C"))
class ABP_ObjectiveDisplay_Spawner_C__pf2435026734 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Update Objective Loc__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__MulticastDelegate , FVector , bpp__Objective_Loc__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpawnLocation"))
	UArrowComponent* bpv__SpawnLocation__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh Root"))
	UStaticMeshComponent* bpv__MeshxRoot__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Update Objective Loc", Category="Default", MultiLine="true", OverrideNativeName="Update Objective Loc"))
	FUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__MulticastDelegate bpv__UpdatexObjectivexLoc__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b0l__CallFunc_GetTransform_ReturnValue__pf;
	ABP_ObjectiveDisplay_Spawner_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_ObjectiveDisplay_Spawner_0"))
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay_Spawner__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
