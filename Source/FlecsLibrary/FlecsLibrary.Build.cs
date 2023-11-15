// Flecs is copyright (c) 2019 Sander Mertens, under MIT license
// Unreal wrapper plugin by Jon Hatton

using System.IO;
using UnrealBuildTool;

public class FlecsLibrary : ModuleRules
{
	public FlecsLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "ThirdParty", "flecs", "Public"));

		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "ThirdParty", "flecs", "Private"));
	}
}
