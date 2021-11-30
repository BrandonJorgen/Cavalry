#include "NativizedAssets.h"
#include "E_Hands__pf1725717533.h"
FText E__E_Hands__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__E_Hands__pf>(InValue);
	switch(EnumValue)
	{
		case E__E_Hands__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[470E908B44F7F1E85612D3A957CC4D6C]\", \"08DB256A43D8F6149E3D1AB468261A7B\", \"Right\")"), Text); break;
		case E__E_Hands__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[470E908B44F7F1E85612D3A957CC4D6C]\", \"EF73986441E43E6CDA89A79FD7CF7A45\", \"Left\")"), Text); break;
		case E__E_Hands__pf::E__E_Hands__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("E MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
