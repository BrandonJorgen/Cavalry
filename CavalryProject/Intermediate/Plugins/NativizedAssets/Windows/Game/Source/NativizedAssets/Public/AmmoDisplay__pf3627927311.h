#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UWidgetComponent;
class USceneComponent;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class UAmmoMarker_C__pf3627927311;
#include "AmmoDisplay__pf3627927311.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Ammo_Display/AmmoDisplay.AmmoDisplay_C", OverrideNativeName="AmmoDisplay_C"))
class AAmmoDisplay_C__pf3627927311 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Widget"))
	UWidgetComponent* bpv__Widget__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char REF", Category="Default", MultiLine="true", OverrideNativeName="CharREF"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__CharREF__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Should Rot?", Category="Default", MultiLine="true", OverrideNativeName="ShouldRot?"))
	bool bpv__ShouldRotx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Start?", Category="Default", MultiLine="true", OverrideNativeName="GameStart?"))
	bool bpv__GameStartx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Remaining Shots", Category="Default", MultiLine="true", OverrideNativeName="RemainingShots"))
	int32 bpv__RemainingShots__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", MultiLine="true", OverrideNativeName="NewVar_1"))
	bool bpv__NewVar_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Held?", Category="Default", MultiLine="true", OverrideNativeName="IsHeld?"))
	bool bpv__IsHeldx__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_RemainingShots"))
	int32 b0l__K2Node_CustomEvent_RemainingShots__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAmmo_Marker"))
	UAmmoMarker_C__pf3627927311* b0l__K2Node_DynamicCast_AsAmmo_Marker__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_IsHeld_"))
	bool b0l__K2Node_CustomEvent_IsHeld___pf;
	AAmmoDisplay_C__pf3627927311(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AmmoDisplay_3"))
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AmmoDisplay_4"))
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AmmoDisplay_5"))
	void bpf__ExecuteUbergraph_AmmoDisplay__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsBeingHeld"))
	virtual void bpf__IsBeingHeld__pf(bool bpp__IsHeldx__pfzy);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update_Ammo"))
	virtual void bpf__Update_Ammo__pf(int32 bpp__RemainingShots__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Should Rot Event"))
	virtual void bpf__ShouldxRotxEvent__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FacePlayer"))
	virtual void bpf__FacePlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetPlayerRef"))
	virtual void bpf__GetPlayerRef__pf();
public:
};
