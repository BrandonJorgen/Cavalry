#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BPI_DamageDirection__pf760233656.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection.BPI_DamageDirection_C", OverrideNativeName="BPI_DamageDirection_C"))
class UBPI_DamageDirection_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_DamageDirection_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Player_Was_Hit"))
	void bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Damage_Source"))
	void bpf__Damage_Source__pf(FVector bpp__Source__pf);
public:
};
