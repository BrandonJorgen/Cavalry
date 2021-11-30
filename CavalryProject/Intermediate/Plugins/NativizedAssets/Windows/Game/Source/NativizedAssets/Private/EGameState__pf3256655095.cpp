#include "NativizedAssets.h"
#include "EGameState__pf3256655095.h"
FText E__EGameState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EGameState__pf>(InValue);
	switch(EnumValue)
	{
		case E__EGameState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7B1346F849BC6DC744456CB2339E661E]\", \"F683AF094D24A9D85E3F65BCCCCA96B6\", \"MainMenu\")"), Text); break;
		case E__EGameState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7B1346F849BC6DC744456CB2339E661E]\", \"DF60D1734ABD1B6DBF35F193212D961D\", \"LevelSelect\")"), Text); break;
		case E__EGameState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7B1346F849BC6DC744456CB2339E661E]\", \"1B67F38E477148E8EF1B49B069568312\", \"LoadingScreen\")"), Text); break;
		case E__EGameState__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7B1346F849BC6DC744456CB2339E661E]\", \"8345E5DB46D559268CB0C69D969F4E2A\", \"CoreGameplay\")"), Text); break;
		case E__EGameState__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7B1346F849BC6DC744456CB2339E661E]\", \"833291F149FFE9837D7DE59A3B4628CA\", \"Unassigned\")"), Text); break;
		case E__EGameState__pf::E__EGameState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("EGame State MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
