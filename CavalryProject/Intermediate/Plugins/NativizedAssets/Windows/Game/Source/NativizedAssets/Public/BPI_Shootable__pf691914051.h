#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_Shootable__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_Shootable.BPI_Shootable_C", OverrideNativeName="BPI_Shootable_C"))
class UBPI_Shootable_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Shootable_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Shot"))
	void bpf__Shot__pf();
public:
};
