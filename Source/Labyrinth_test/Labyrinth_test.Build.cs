// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Labyrinth_test : ModuleRules
{
	public Labyrinth_test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
