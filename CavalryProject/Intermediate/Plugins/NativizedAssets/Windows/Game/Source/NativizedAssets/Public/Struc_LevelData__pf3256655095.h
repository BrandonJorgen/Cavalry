#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture;
#include "Struc_LevelData__pf3256655095.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/Struc_LevelData.Struc_LevelData", OverrideNativeName="Struc_LevelData"))
struct FStruc_LevelData__pf3256655095
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ID", Tooltip, OverrideNativeName="ID_2_5D80B9494B987756E44A79ADEC0572F1"))
	int32 bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DisplayName", Tooltip, OverrideNativeName="DisplayName_20_B93A6AF9452F28B0797A9AA021970721"))
	FText bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Tooltip, OverrideNativeName="Description_19_2DB7B48443B37A3B9EE8908E263439ED"))
	FText bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FileName", Tooltip, OverrideNativeName="FileName_18_381C602747293309CC84E4A69220030E"))
	FName bpv__FileName_18_381C602747293309CC84E4A69220030E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Image", Tooltip, OverrideNativeName="Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E"))
	UTexture* bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unlocked", Tooltip, OverrideNativeName="Unlocked_16_A6894C31443748FF38A17287F32569FA"))
	bool bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HasGameplay?", Tooltip, OverrideNativeName="HasGameplay?_15_02393D1F444182092204EA907E0E0BE6"))
	bool bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy;
	FStruc_LevelData__pf3256655095();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruc_LevelData__pf3256655095& __Other) const
	{
		return FStruc_LevelData__pf3256655095::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
