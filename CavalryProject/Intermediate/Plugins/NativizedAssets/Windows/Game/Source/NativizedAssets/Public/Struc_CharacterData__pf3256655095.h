#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ABP_PlayerCharacter_Base_C__pf1490413170;
class UClass;
class UTexture;
#include "Struc_CharacterData__pf3256655095.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/Struc_CharacterData.Struc_CharacterData", OverrideNativeName="Struc_CharacterData"))
struct FStruc_CharacterData__pf3256655095
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ID", Tooltip, OverrideNativeName="ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3"))
	int32 bpv__ID_2_5AC298EC41D84DAAA3A5C5BB5E2C75C3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_11_7C49E5F347C142A89A1C7BA4644CC9A0"))
	FText bpv__Name_11_7C49E5F347C142A89A1C7BA4644CC9A0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Tooltip, OverrideNativeName="Description_12_F4B3087547A8585A495D1FA2957C210D"))
	FText bpv__Description_12_F4B3087547A8585A495D1FA2957C210D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Character", Tooltip, OverrideNativeName="Character_17_1A17CA034A492038F4A2DDABFAE689BC"))
	UClass* bpv__Character_17_1A17CA034A492038F4A2DDABFAE689BC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Image", Tooltip, OverrideNativeName="Image_14_3FAA3787483113AC10F5E88AFFE6745A"))
	UTexture* bpv__Image_14_3FAA3787483113AC10F5E88AFFE6745A__pf;
	FStruc_CharacterData__pf3256655095();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStruc_CharacterData__pf3256655095& __Other) const
	{
		return FStruc_CharacterData__pf3256655095::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
