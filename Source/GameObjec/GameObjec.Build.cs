// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameObjec : ModuleRules
{
	public GameObjec(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
