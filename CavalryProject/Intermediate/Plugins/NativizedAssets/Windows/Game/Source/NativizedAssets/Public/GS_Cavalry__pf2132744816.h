#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "BPI_GameStateCommunication__pf691914051.h"
class USceneComponent;
class AActor;
class ABP_HostageTest_C__pf4081514875;
#include "GS_Cavalry__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/GS_Cavalry.GS_Cavalry_C", OverrideNativeName="GS_Cavalry_C"))
class AGS_Cavalry_C__pf2132744816 : public AGameStateBase, public IBPI_GameStateCommunication_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="SecurityLockdownStart__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hostage Array", Category="Default", MultiLine="true", OverrideNativeName="HostageArray"))
	TArray<AActor*> bpv__HostageArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hostage Rescue Count", Category="Default", MultiLine="true", OverrideNativeName="HostageRescueCount"))
	int32 bpv__HostageRescueCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hostages Rescued", Category="Default", MultiLine="true", OverrideNativeName="HostagesRescued"))
	bool bpv__HostagesRescued__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Server Donwload Stopped", Category="Default", MultiLine="true", OverrideNativeName="ServerDonwloadStopped"))
	bool bpv__ServerDonwloadStopped__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Security Lockdown Start", Category="Default", MultiLine="true", OverrideNativeName="SecurityLockdownStart"))
	FSecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate bpv__SecurityLockdownStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_HostageTest_C__pf4081514875*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	AGS_Cavalry_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_GS_Cavalry_4"))
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GS_Cavalry__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="MissileLaunchStopped"))
	virtual void bpf__MissileLaunchStopped__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SecurityLockdownLifted"))
	virtual void bpf__SecurityLockdownLifted__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Phase1CompletionCheck"))
	virtual void bpf__Phase1CompletionCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ServerDownloadStopped"))
	virtual void bpf__ServerDownloadStopped__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HostageRescued"))
	virtual void bpf__HostageRescued__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
