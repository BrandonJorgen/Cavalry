#pragma once
#include "ENUM_ObjectType__pf3911806087.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Tools/ENUM_ObjectType.ENUM_ObjectType", OverrideNativeName="ENUM_ObjectType", EnumDisplayNameFn="E__ENUM_ObjectType__pf__GetUserFriendlyName") )
enum class E__ENUM_ObjectType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(OverrideName = "ENUM_ObjectType::NewEnumerator5"),
	E__ENUM_ObjectType__pf_MAX = 6 UMETA(OverrideName = "ENUM_ObjectType::ENUM_MAX"),
};
FText E__ENUM_ObjectType__pf__GetUserFriendlyName(int32 InValue);
