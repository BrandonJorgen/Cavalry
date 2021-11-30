#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BPI_MissionText__pf1982152804.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/HUD/Widgets/BPI_MissionText.BPI_MissionText_C", OverrideNativeName="BPI_MissionText_C"))
class UBPI_MissionText_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_MissionText_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateMission"))
	void bpf__UpdateMission__pf(const FText& bpp__ObjectiveDetails__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UpdateObjectiveLoc"))
	void bpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf);
public:
};
