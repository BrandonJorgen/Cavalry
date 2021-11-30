#pragma once
#include "Hand_Positions_Enum__pf423755669.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Meshes/Placeholder/Player_Generic/Hand_Positions_Enum.Hand_Positions_Enum", OverrideNativeName="Hand_Positions_Enum", EnumDisplayNameFn="E__Hand_Positions_Enum__pf__GetUserFriendlyName") )
enum class E__Hand_Positions_Enum__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Hand_Positions_Enum::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Hand_Positions_Enum::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "Hand_Positions_Enum::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "Hand_Positions_Enum::NewEnumerator3"),
	E__Hand_Positions_Enum__pf_MAX = 4 UMETA(OverrideName = "Hand_Positions_Enum::Hand_Positions_MAX"),
};
FText E__Hand_Positions_Enum__pf__GetUserFriendlyName(int32 InValue);
