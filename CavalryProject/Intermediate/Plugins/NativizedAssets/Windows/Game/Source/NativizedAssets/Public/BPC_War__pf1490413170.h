#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BP_PlayerCharacter_Base__pf1490413170.h"
#include "BPC_War__pf1490413170.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Characters/BPC_War.BPC_War_C", OverrideNativeName="BPC_War_C"))
class ABPC_War_C__pf1490413170 : public ABP_PlayerCharacter_Base_C__pf1490413170
{
public:
	GENERATED_BODY()
	ABPC_War_C__pf1490413170(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPC_War__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveBeginPlay__pf() override;
public:
};
