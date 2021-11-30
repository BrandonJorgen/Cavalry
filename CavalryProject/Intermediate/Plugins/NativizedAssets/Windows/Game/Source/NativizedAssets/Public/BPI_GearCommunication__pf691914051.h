#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_GearCommunication__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_GearCommunication.BPI_GearCommunication_C", OverrideNativeName="BPI_GearCommunication_C"))
class UBPI_GearCommunication_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_GearCommunication_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="CheckForTeleport"))
	void bpf__CheckForTeleport__pf();
public:
};
