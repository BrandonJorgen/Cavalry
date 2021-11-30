#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_DamageDirection__pf760233656.h"
#include "BPI_ToggleObjective__pf2435026734.h"
#include "BPI_MissionText__pf1982152804.h"
class UWidgetComponent;
class UStaticMeshComponent;
class USceneComponent;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class UObjectivePointer_C__pf2435026734;
class UWidg_MissionText_C__pf1982152804;
#include "BP_HorsemenHUD__pf760233656.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD.BP_HorsemenHUD_C", OverrideNativeName="BP_HorsemenHUD_C"))
class ABP_HorsemenHUD_C__pf760233656 : public AActor, public IBPI_DamageDirection_C, public IBPI_ToggleObjective_C, public IBPI_MissionText_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MissionText"))
	UWidgetComponent* bpv__MissionText__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MissionText_Loc"))
	UStaticMeshComponent* bpv__MissionText_Loc__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ObjectivePointer"))
	UWidgetComponent* bpv__ObjectivePointer__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Objective_Loc"))
	UStaticMeshComponent* bpv__Objective_Loc__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HUD_Overlay"))
	UWidgetComponent* bpv__HUD_Overlay__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Overlay_Loc"))
	UStaticMeshComponent* bpv__Overlay_Loc__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpawnLocation"))
	UStaticMeshComponent* bpv__SpawnLocation__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	bool bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owning Player", Category="Default", MultiLine="true", OverrideNativeName="Owning Player"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__OwningxPlayer__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewLocation"))
	FVector b0l__K2Node_Event_NewLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Source"))
	FVector b0l__K2Node_Event_Source__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_CurrentlyHit"))
	bool b0l__K2Node_Event_CurrentlyHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Player_Character_Base"))
	ABP_PlayerCharacter_Base_C__pf1490413170* b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction"))
	FVector b0l__K2Node_CustomEvent_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsObjective_Pointer"))
	UObjectivePointer_C__pf2435026734* b0l__K2Node_DynamicCast_AsObjective_Pointer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsObjective_Pointer_1"))
	UObjectivePointer_C__pf2435026734* b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsObjective_Pointer_2"))
	UObjectivePointer_C__pf2435026734* b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Objective_"))
	bool b0l__K2Node_Event_Objective___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ObjectiveDetails"))
	FText b0l__K2Node_Event_ObjectiveDetails__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction_1"))
	FVector b0l__K2Node_CustomEvent_Direction_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsWidg_Mission_Text"))
	UWidg_MissionText_C__pf1982152804* b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsObjective_Pointer_3"))
	UObjectivePointer_C__pf2435026734* b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	ABP_HorsemenHUD_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_HorsemenHUD_1"))
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateObjectiveLoc"))
	virtual void bpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateMission"))
	virtual void bpf__UpdateMission__pf(const FText& bpp__ObjectiveDetails__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ToggleObjetiveBool"))
	virtual void bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Player_Was_Hit"))
	virtual void bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Damage_Source"))
	virtual void bpf__Damage_Source__pf(FVector bpp__Source__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn Damage Widget"))
	virtual void bpf__SpawnxDamagexWidget__pfTT(FVector bpp__Direction__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Respawning Trace"))
	virtual void bpf__RespawningxTrace__pfT(FVector bpp__Direction__pf);
public:
};
