// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TacticalDoorBreach : ModuleRules
{
	public TacticalDoorBreach(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TacticalDoorBreach",
			"TacticalDoorBreach/Variant_Horror",
			"TacticalDoorBreach/Variant_Horror/UI",
			"TacticalDoorBreach/Variant_Shooter",
			"TacticalDoorBreach/Variant_Shooter/AI",
			"TacticalDoorBreach/Variant_Shooter/UI",
			"TacticalDoorBreach/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
