#include "NativizedAssets.h"
#include "E_LoadType__pf1725717533.h"
FText E__E_LoadType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_LoadType__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_LoadType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38A339C74B14A0283BAE7CA79A0ABCF5]\", \"CEA7B7AB405D3F4D7999118B4AF4EEA7\", \"PistolMagazine\")"), Text); break;
		case E__E_LoadType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38A339C74B14A0283BAE7CA79A0ABCF5]\", \"7452E1B1460A3F5596AF2B85D18E8918\", \"RifleMagazine\")"), Text); break;
		case E__E_LoadType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38A339C74B14A0283BAE7CA79A0ABCF5]\", \"60559FED44B108EAEC37FCB132AC059A\", \"DMRMagazine\")"), Text); break;
		case E__E_LoadType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38A339C74B14A0283BAE7CA79A0ABCF5]\", \"45E9FBEC463DD77009A998AB7C91DBA3\", \"SMGMagazine\")"), Text); break;
		case E__E_LoadType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[38A339C74B14A0283BAE7CA79A0ABCF5]\", \"2FE76EAD45EA2CD748E02897D597F302\", \"ShotgunShell\")"), Text); break;
		case E__E_LoadType__pf::E__E_LoadType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
