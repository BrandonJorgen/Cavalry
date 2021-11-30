#include "NativizedAssets.h"
#include "Struc_LevelData__pf3256655095.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FStruc_LevelData__pf3256655095::FStruc_LevelData__pf3256655095()
{
	bpv__ID_2_5D80B9494B987756E44A79ADEC0572F1__pf = 0;
	bpv__DisplayName_20_B93A6AF9452F28B0797A9AA021970721__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[20CB4D4C40638DF1CFF8C9BFCF1A2351]\", \"64B233B84E44AB41664A63BE23F09DBD\", \"Name\")")	);
	bpv__Description_19_2DB7B48443B37A3B9EE8908E263439ED__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[20CB4D4C40638DF1CFF8C9BFCF1A2351]\", \"81155DB5446A236E3550AB8A936B7BDE\", \"Description\")")	);
	bpv__FileName_18_381C602747293309CC84E4A69220030E__pf = FName();
	bpv__Image_17_31A4FA6D4CB37548DB2A86BF7F5E9F7E__pf = nullptr;
	bpv__Unlocked_16_A6894C31443748FF38A17287F32569FA__pf = true;
	bpv__HasGameplayx_15_02393D1F444182092204EA907E0E0BE6__pfzy = false;
}
PRAGMA_DISABLE_OPTIMIZATION
void FStruc_LevelData__pf3256655095::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FStruc_LevelData__pf3256655095
{
	FRegisterHelper__FStruc_LevelData__pf3256655095()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/HUD/Main_Menu/Struc_LevelData"), &FStruc_LevelData__pf3256655095::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FStruc_LevelData__pf3256655095 Instance;
};
FRegisterHelper__FStruc_LevelData__pf3256655095 FRegisterHelper__FStruc_LevelData__pf3256655095::Instance;
