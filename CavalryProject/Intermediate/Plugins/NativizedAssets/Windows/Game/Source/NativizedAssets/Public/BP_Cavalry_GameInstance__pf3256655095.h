#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Struc_LevelData__pf3256655095.h"
#include "EGameState__pf3256655095.h"
#include "Struc_CharacterData__pf3256655095.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class UUserWidget;
class ABP_MainMenu_Actor_C__pf3256655095;
class ABP_MissionBrief_Actor_C__pf3256655095;
class ABP_Loading_Actor_C__pf3256655095;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class UClass;
#include "BP_Cavalry_GameInstance__pf3256655095.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/BP_Cavalry_GameInstance.BP_Cavalry_GameInstance_C", OverrideNativeName="BP_Cavalry_GameInstance_C"))
class UBP_Cavalry_GameInstance_C__pf3256655095 : public UGameInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Data", Category="Config", MultiLine="true", OverrideNativeName="Level Data"))
	TArray<FStruc_LevelData__pf3256655095> bpv__LevelxData__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game State", Category="Runtime Allocation", MultiLine="true", OverrideNativeName="Game State"))
	E__EGameState__pf bpv__GamexState__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Active Level Index", Category="Runtime Allocation", MultiLine="true", OverrideNativeName="Active Level Index"))
	int32 bpv__ActivexLevelxIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Widget", Category="Runtime Allocation", MultiLine="true", tooltip="The Active high level Widget", OverrideNativeName="RootWidget"))
	UUserWidget* bpv__RootWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Menu", Category="Default", MultiLine="true", OverrideNativeName="MainMenu"))
	ABP_MainMenu_Actor_C__pf3256655095* bpv__MainMenu__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mission Brief", Category="Default", MultiLine="true", OverrideNativeName="MissionBrief"))
	ABP_MissionBrief_Actor_C__pf3256655095* bpv__MissionBrief__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loading Screen", Category="Default", MultiLine="true", OverrideNativeName="LoadingScreen"))
	ABP_Loading_Actor_C__pf3256655095* bpv__LoadingScreen__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Player to Spawn", Category="Default", MultiLine="true", OverrideNativeName="PlayerToSpawn"))
	UClass* bpv__PlayerToSpawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Data", Category="Config", MultiLine="true", OverrideNativeName="Character_Data"))
	TArray<FStruc_CharacterData__pf3256655095> bpv__Character_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Active_Level_Index"))
	int32 b0l__K2Node_CustomEvent_Active_Level_Index__pf;
	UBP_Cavalry_GameInstance_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Cavalry_GameInstance_0"))
	void bpf__ExecuteUbergraph_BP_Cavalry_GameInstance__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartNewLevel"))
	virtual void bpf__StartNewLevel__pf(int32 bpp__ActivexLevelxIndex__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get Level Data"))
	virtual void bpf__GetxLevelxData__pfTT(/*out*/ TArray<FStruc_LevelData__pf3256655095>& bpp__LevelxData__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Game State"))
	virtual void bpf__SetxGamexState__pfTT(E__EGameState__pf bpp__NewState__pf, /*out*/ bool& bpp__Successx__pfzy);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Verify Active Level Index"))
	virtual void bpf__VerifyxActivexLevelxIndex__pfTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn MainMenu"))
	virtual void bpf__SpawnxMainMenu__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Spawn MissionBrief"))
	virtual void bpf__SpawnxMissionBrief__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MainMenuVisOff"))
	virtual void bpf__MainMenuVisOff__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MissionBriefVisOff"))
	virtual void bpf__MissionBriefVisOff__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetCharacterData"))
	virtual void bpf__GetCharacterData__pf(/*out*/ TArray<FStruc_CharacterData__pf3256655095>& bpp__Character_Data__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetCharacter"))
	virtual void bpf__SetCharacter__pf(int32 bpp__CharacterIndex__pf);
public:
};
