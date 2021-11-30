#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UWidgetComponent;
class UStaticMeshComponent;
class USceneComponent;
class USpawned_DI_C__pf760233656;
#include "DamageIndicator_Actor__pf760233656.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Damage_Display/DamageIndicator_Actor.DamageIndicator_Actor_C", OverrideNativeName="DamageIndicator_Actor_C"))
class ADamageIndicator_Actor_C__pf760233656 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Update Widget Direction__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__MulticastDelegate , FVector , bpp__WidgetxDirection__pfT);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cur_DamageIndicator"))
	UWidgetComponent* bpv__Cur_DamageIndicator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Widget_Root"))
	UStaticMeshComponent* bpv__Widget_Root__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cur Direction", Category="Default", MultiLine="true", OverrideNativeName="Cur_Direction"))
	FVector bpv__Cur_Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destroy?", Category="Default", MultiLine="true", OverrideNativeName="Destroy?"))
	bool bpv__Destroyx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Update Widget Direction", Category="Default", MultiLine="true", OverrideNativeName="Update Widget Direction"))
	FUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__MulticastDelegate bpv__UpdatexWidgetxDirection__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSpawned_DI"))
	USpawned_DI_C__pf760233656* b0l__K2Node_DynamicCast_AsSpawned_DI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ADamageIndicator_Actor_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DamageIndicator_Actor__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_DamageIndicator_Actor_1"))
	void bpf__ExecuteUbergraph_DamageIndicator_Actor__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
public:
};
