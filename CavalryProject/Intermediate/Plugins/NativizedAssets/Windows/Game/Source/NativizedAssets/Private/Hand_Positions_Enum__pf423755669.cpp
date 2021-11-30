#include "NativizedAssets.h"
#include "Hand_Positions_Enum__pf423755669.h"
FText E__Hand_Positions_Enum__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Hand_Positions_Enum__pf>(InValue);
	switch(EnumValue)
	{
		case E__Hand_Positions_Enum__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B9C6E33444923D900BC4F5A7768E06DF]\", \"62E1B3E4460ED61C7657B0B6CA4D4798\", \"Open\")"), Text); break;
		case E__Hand_Positions_Enum__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B9C6E33444923D900BC4F5A7768E06DF]\", \"7C98561643FB1BBFE7F7F98030E5F08F\", \"Grip_Generic\")"), Text); break;
		case E__Hand_Positions_Enum__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B9C6E33444923D900BC4F5A7768E06DF]\", \"FDCCE82E4E73B3EFF034C68916B702D6\", \"Grip_Pistol\")"), Text); break;
		case E__Hand_Positions_Enum__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[B9C6E33444923D900BC4F5A7768E06DF]\", \"3FAD987B442694C42A0C999F7D801D44\", \"Grip_Pistol_Second_Hand\")"), Text); break;
		case E__Hand_Positions_Enum__pf::E__Hand_Positions_Enum__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Hand Positions MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
