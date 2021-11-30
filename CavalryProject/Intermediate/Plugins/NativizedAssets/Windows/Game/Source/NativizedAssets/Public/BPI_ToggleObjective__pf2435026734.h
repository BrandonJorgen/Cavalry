#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_ToggleObjective__pf2435026734.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/HUD/Widgets/Objective_Display/BPI_ToggleObjective.BPI_ToggleObjective_C", OverrideNativeName="BPI_ToggleObjective_C"))
class UBPI_ToggleObjective_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_ToggleObjective_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ToggleObjetiveBool"))
	void bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy);
public:
};
