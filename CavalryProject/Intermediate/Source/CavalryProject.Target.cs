using UnrealBuildTool;

public class CavalryProjectTarget : TargetRules
{
	public CavalryProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CavalryProject");
	}
}
