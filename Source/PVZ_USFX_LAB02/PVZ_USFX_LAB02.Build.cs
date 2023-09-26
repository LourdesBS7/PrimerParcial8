// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PVZ_USFX_LAB02 : ModuleRules
{
	public PVZ_USFX_LAB02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
