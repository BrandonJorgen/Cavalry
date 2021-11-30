#pragma once
#include "E_LoadType__pf1725717533.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enums/E_LoadType.E_LoadType", OverrideNativeName="E_LoadType", EnumDisplayNameFn="E__E_LoadType__pf__GetUserFriendlyName") )
enum class E__E_LoadType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_LoadType::NewEnumerator0"),
	NewEnumerator2 = 1 UMETA(OverrideName = "E_LoadType::NewEnumerator2"),
	NewEnumerator3 = 2 UMETA(OverrideName = "E_LoadType::NewEnumerator3"),
	NewEnumerator4 = 3 UMETA(OverrideName = "E_LoadType::NewEnumerator4"),
	NewEnumerator1 = 4 UMETA(OverrideName = "E_LoadType::NewEnumerator1"),
	E__E_LoadType__pf_MAX = 5 UMETA(OverrideName = "E_LoadType::E_MAX"),
};
FText E__E_LoadType__pf__GetUserFriendlyName(int32 InValue);
