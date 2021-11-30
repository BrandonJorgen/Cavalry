#pragma once
#include "E_FireMode__pf1725717533.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enums/E_FireMode.E_FireMode", OverrideNativeName="E_FireMode", EnumDisplayNameFn="E__E_FireMode__pf__GetUserFriendlyName") )
enum class E__E_FireMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_FireMode::NewEnumerator0"),
	NewEnumerator2 = 1 UMETA(OverrideName = "E_FireMode::NewEnumerator2"),
	E__E_FireMode__pf_MAX = 2 UMETA(OverrideName = "E_FireMode::E_MAX"),
};
FText E__E_FireMode__pf__GetUserFriendlyName(int32 InValue);
