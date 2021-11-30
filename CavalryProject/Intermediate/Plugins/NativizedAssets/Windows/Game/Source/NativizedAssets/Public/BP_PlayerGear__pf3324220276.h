#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Horsemen__pf1725717533.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_GearCommunication__pf691914051.h"
class UChildActorComponent;
class UStaticMeshComponent;
class ABPC_Pistol_C__pf1418999182;
class ABP_Firearm_Base_C__pf1418999182;
class ABP_GrabAmmoTrigger_C__pf3324220276;
class ABP_Tool_Base_C__pf3911806087;
#include "BP_PlayerGear__pf3324220276.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C", OverrideNativeName="BP_PlayerGear_C"))
class ABP_PlayerGear_C__pf3324220276 : public AActor, public IBPI_GearCommunication_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 8"))
	UChildActorComponent* bpv__Magnetx8__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 7"))
	UChildActorComponent* bpv__Magnetx7__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 6"))
	UChildActorComponent* bpv__Magnetx6__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 5"))
	UChildActorComponent* bpv__Magnetx5__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 4"))
	UChildActorComponent* bpv__Magnetx4__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 3"))
	UChildActorComponent* bpv__Magnetx3__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 2"))
	UChildActorComponent* bpv__Magnetx2__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Magnet 1"))
	UChildActorComponent* bpv__Magnetx1__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_FP_Gear_Whitebox"))
	UStaticMeshComponent* bpv__SM_FP_Gear_Whitebox__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pistol", Category="Default", MultiLine="true", OverrideNativeName="Pistol"))
	ABPC_Pistol_C__pf1418999182* bpv__Pistol__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Weapon", Category="Default", MultiLine="true", OverrideNativeName="MainWeapon"))
	ABP_Firearm_Base_C__pf1418999182* bpv__MainWeapon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horseman to Spawn For", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="HorsemanToSpawnFor"))
	E__E_Horsemen__pf bpv__HorsemanToSpawnFor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo Trigger", Category="Default", MultiLine="true", OverrideNativeName="AmmoTrigger"))
	ABP_GrabAmmoTrigger_C__pf3324220276* bpv__AmmoTrigger__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tool", Category="Default", MultiLine="true", OverrideNativeName="Tool"))
	ABP_Tool_Base_C__pf3911806087* bpv__Tool__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	ABP_PlayerGear_C__pf3324220276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_PlayerGear__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerGear__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="CheckForTeleport"))
	virtual void bpf__CheckForTeleport__pf();
public:
};
