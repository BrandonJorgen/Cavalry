#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "BPI_PlayerSelect__pf3256655095.h"
class USceneComponent;
class ADefaultPawn;
class UClass;
class UBP_Cavalry_GameInstance_C__pf3256655095;
class APlayerStart;
#include "GM_Cavalry__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/GM_Cavalry.GM_Cavalry_C", OverrideNativeName="GM_Cavalry_C"))
class AGM_Cavalry_C__pf2132744816 : public AGameModeBase, public IBPI_PlayerSelect_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerInput"))
	UClass* b0l__K2Node_Event_PlayerInput__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b0l__CallFunc_GetTransform_ReturnValue__pf;
	AGM_Cavalry_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GM_Cavalry__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GM_Cavalry__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Select Player"))
	virtual void bpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf);
public:
};
