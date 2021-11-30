#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_ToolControls__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_ToolControls.BPI_ToolControls_C", OverrideNativeName="BPI_ToolControls_C"))
class UBPI_ToolControls_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_ToolControls_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ActivateTool"))
	void bpf__ActivateTool__pf(bool bpp__Active__pf);
public:
};
