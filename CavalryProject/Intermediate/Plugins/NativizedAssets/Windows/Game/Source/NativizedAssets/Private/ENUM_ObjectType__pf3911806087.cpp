#include "NativizedAssets.h"
#include "ENUM_ObjectType__pf3911806087.h"
FText E__ENUM_ObjectType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENUM_ObjectType__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENUM_ObjectType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"2DE2AACF40FB089ABD948D851FA9FB3F\", \"Generic\")"), Text); break;
		case E__ENUM_ObjectType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"C2CF16844433E045394A83AC640D1129\", \"Secondary Weapon\")"), Text); break;
		case E__ENUM_ObjectType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"267978304EB7E03C1660099BCBACE550\", \"Tools\")"), Text); break;
		case E__ENUM_ObjectType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"C30651744FFB8226CC76F1B78DE79CD5\", \"Primary Weapon\")"), Text); break;
		case E__ENUM_ObjectType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"E980D23342C6DAAE6B1A4AAF51F71746\", \"Ammo\")"), Text); break;
		case E__ENUM_ObjectType__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[11386110418FC4D5AC7B319C81E5BF2A]\", \"4D655BC04F1AA83AF9DD82B573DB0ED1\", \"Shield\")"), Text); break;
		case E__ENUM_ObjectType__pf::E__ENUM_ObjectType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENUM MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
