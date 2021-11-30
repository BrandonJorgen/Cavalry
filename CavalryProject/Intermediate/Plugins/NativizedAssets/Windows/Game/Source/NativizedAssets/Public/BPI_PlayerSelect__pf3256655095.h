#pragma once
#include "Blueprint/BlueprintSupport.h"
class ADefaultPawn;
class UClass;
#include "BPI_PlayerSelect__pf3256655095.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/HUD/Main_Menu/BPI_PlayerSelect.BPI_PlayerSelect_C", OverrideNativeName="BPI_PlayerSelect_C"))
class UBPI_PlayerSelect_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_PlayerSelect_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Select Player"))
	void bpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf);
public:
};
