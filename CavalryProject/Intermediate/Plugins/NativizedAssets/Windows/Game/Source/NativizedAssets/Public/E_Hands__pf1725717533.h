#pragma once
#include "E_Hands__pf1725717533.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Enums/E_Hands.E_Hands", OverrideNativeName="E_Hands", EnumDisplayNameFn="E__E_Hands__pf__GetUserFriendlyName") )
enum class E__E_Hands__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "E_Hands::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "E_Hands::NewEnumerator1"),
	E__E_Hands__pf_MAX = 2 UMETA(OverrideName = "E_Hands::E_MAX"),
};
FText E__E_Hands__pf__GetUserFriendlyName(int32 InValue);
