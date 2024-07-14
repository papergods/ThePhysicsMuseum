// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ThePhysicsMuseum : ModuleRules
{
	public ThePhysicsMuseum(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
