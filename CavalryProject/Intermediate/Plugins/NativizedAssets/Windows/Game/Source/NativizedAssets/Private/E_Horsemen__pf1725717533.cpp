#include "NativizedAssets.h"
#include "E_Horsemen__pf1725717533.h"
FText E__E_Horsemen__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Horsemen__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Horsemen__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0C707845476B62BBA52EE7BBBE94C67B]\", \"9585B21347E004793CF60C8E2E1A27FA\", \"Conquest\")"), Text); break;
		case E__E_Horsemen__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0C707845476B62BBA52EE7BBBE94C67B]\", \"22119F3F404CEAC283B2BC8D92B054F8\", \"War\")"), Text); break;
		case E__E_Horsemen__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0C707845476B62BBA52EE7BBBE94C67B]\", \"21199A7049FE8642C519518FB71A9AD2\", \"Death\")"), Text); break;
		case E__E_Horsemen__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[0C707845476B62BBA52EE7BBBE94C67B]\", \"5CF73D5249DF67DD10B70BB5A216101F\", \"Famine\")"), Text); break;
		case E__E_Horsemen__pf::E__E_Horsemen__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
