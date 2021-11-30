#pragma once
#include "Blueprint/BlueprintSupport.h"
class AActor;
#include "BPI_Magnetic__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_Magnetic.BPI_Magnetic_C", OverrideNativeName="BPI_Magnetic_C"))
class UBPI_Magnetic_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Magnetic_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Magnetize"))
	void bpf__Magnetize__pf(AActor* bpp__Magnet__pf);
public:
};
