#pragma once
#include "Blueprint/BlueprintSupport.h"
class AActor;
#include "BPI_TakeDamage__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_TakeDamage.BPI_TakeDamage_C", OverrideNativeName="BPI_TakeDamage_C"))
class UBPI_TakeDamage_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_TakeDamage_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="TakeDamage"))
	void bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="TakeDamageActor"))
	void bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf);
public:
};
