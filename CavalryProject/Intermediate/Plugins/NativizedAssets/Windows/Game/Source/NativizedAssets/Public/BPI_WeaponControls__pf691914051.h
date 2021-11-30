#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Hands__pf1725717533.h"
#include "BPI_WeaponControls__pf691914051.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Blueprints/Interfaces/BPI_WeaponControls.BPI_WeaponControls_C", OverrideNativeName="BPI_WeaponControls_C"))
class UBPI_WeaponControls_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_WeaponControls_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="Shoot"))
	void bpf__Shoot__pf(E__E_Hands__pf bpp__Hand__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ChangeFiremode"))
	void bpf__ChangeFiremode__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ReleaseMagazine"))
	void bpf__ReleaseMagazine__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ShootRelease"))
	void bpf__ShootRelease__pf();
public:
};
