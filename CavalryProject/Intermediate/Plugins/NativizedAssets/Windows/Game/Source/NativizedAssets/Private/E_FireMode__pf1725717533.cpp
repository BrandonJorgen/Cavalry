#include "NativizedAssets.h"
#include "E_FireMode__pf1725717533.h"
FText E__E_FireMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_FireMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_FireMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[734C7120470F01B16D0099BD5BCB988B]\", \"2C34B1FA454737B3E380658C6C1CB9CA\", \"Single\")"), Text); break;
		case E__E_FireMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[734C7120470F01B16D0099BD5BCB988B]\", \"6D918DFA4B3F7E869EF4948F9EE2E6C3\", \"Automatic\")"), Text); break;
		case E__E_FireMode__pf::E__E_FireMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
