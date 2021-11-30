#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_GameStateCommunication__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_GameStateCommunication.BPI_GameStateCommunication_C", OverrideNativeName="BPI_GameStateCommunication_C"))
class UBPI_GameStateCommunication_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_GameStateCommunication_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="HostageRescued"))
	void bpf__HostageRescued__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ServerDownloadStopped"))
	void bpf__ServerDownloadStopped__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="MissileLaunchStopped"))
	void bpf__MissileLaunchStopped__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="SecurityLockdownLifted"))
	void bpf__SecurityLockdownLifted__pf();
public:
};
