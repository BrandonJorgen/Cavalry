#pragma once
#include "EGameState__pf3256655095.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/EGameState.EGameState", OverrideNativeName="EGameState", EnumDisplayNameFn="E__EGameState__pf__GetUserFriendlyName") )
enum class E__EGameState__pf  : uint8
{
	NewEnumerator1 = 0 UMETA(OverrideName = "EGameState::NewEnumerator1"),
	NewEnumerator0 = 1 UMETA(OverrideName = "EGameState::NewEnumerator0"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EGameState::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EGameState::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "EGameState::NewEnumerator4"),
	E__EGameState__pf_MAX = 5 UMETA(OverrideName = "EGameState::EGameState_MAX"),
};
FText E__EGameState__pf__GetUserFriendlyName(int32 InValue);
