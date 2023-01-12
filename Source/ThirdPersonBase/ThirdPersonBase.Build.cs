// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ThirdPersonBase : ModuleRules
{
	public ThirdPersonBase(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
