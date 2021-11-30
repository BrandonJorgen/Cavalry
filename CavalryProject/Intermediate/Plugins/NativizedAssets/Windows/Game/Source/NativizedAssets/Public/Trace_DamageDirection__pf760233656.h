#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#include "Trace_DamageDirection__pf760233656.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Damage_Display/Trace_DamageDirection.Trace_DamageDirection_C", OverrideNativeName="Trace_DamageDirection_C"))
class ATrace_DamageDirection_C__pf760233656 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Get Damage Direction__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetxDamagexDirection__pfTT__Trace_DamageDirection_C__pf__MulticastDelegate , FVector , bpp__Direction__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Direction"))
	UStaticMeshComponent* bpv__Direction__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Trace_Origin"))
	UStaticMeshComponent* bpv__Trace_Origin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Trace?", Category="Default", MultiLine="true", OverrideNativeName="CanTrace?"))
	bool bpv__CanTracex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player", Category="Default", MultiLine="true", OverrideNativeName="Player"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__Player__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Get Damage Direction", Category="Default", MultiLine="true", OverrideNativeName="Get Damage Direction"))
	FGetxDamagexDirection__pfTT__Trace_DamageDirection_C__pf__MulticastDelegate bpv__GetxDamagexDirection__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Player_Character_Base"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Player_Character_Base_1"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBP_Player_Character_Base_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	ATrace_DamageDirection_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Trace_DamageDirection__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Trace_DamageDirection__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
