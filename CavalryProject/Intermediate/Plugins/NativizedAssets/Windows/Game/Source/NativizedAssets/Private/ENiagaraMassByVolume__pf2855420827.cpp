#include "NativizedAssets.h"
#include "ENiagaraMassByVolume__pf2855420827.h"
FText E__ENiagaraMassByVolume__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraMassByVolume__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraMassByVolume__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"9DC4059E4D3E4080BB968ABF23E5D590\", \"Rock\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"9BDB945B45A1F2985D7DDD9DD4701762\", \"Steel\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"8CE2B1F14042B0553C5F918DFAEBEEB0\", \"Wood\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"CA3801E74B0D0833733C79B5455DE6B7\", \"Water\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"3EE3A26A47CB1F4A19F586A7F70D7ED8\", \"Paper\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[46B08B3F495F9CA4B93DCC8904E044CC]\", \"E61C23344E361D8B2EECA4B18FE0880C\", \"Styrofoam\")"), Text); break;
		case E__ENiagaraMassByVolume__pf::E__ENiagaraMassByVolume__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Mass by Volume MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
