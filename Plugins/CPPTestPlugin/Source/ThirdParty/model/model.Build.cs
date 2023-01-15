using UnrealBuildTool;
using System;
using System.IO;

namespace UnrealBuildTool.Rules
{

	public class model : ModuleRules
	{
		public model(ReadOnlyTargetRules Target)
			: base(Target)
		{
			Type = ModuleType.External;

			string modelPath = ModuleDirectory;
			string PlatformSubdir = Target.Platform.ToString();
			//string modelLibraries = Path.Combine(modelPath, "lib", PlatformSubdir) + "/";
			string modelInclude = Path.Combine(modelPath);
			PublicIncludePaths.Add(modelInclude);
			PublicSystemIncludePaths.Add(modelInclude);
			/*
			if (Target.Platform == UnrealTargetPlatform.Win64)
				{
					PublicAdditionalLibraries.Add(modelLibraries + "open_simulation_interface.lib");
					PublicAdditionalLibraries.Add(modelLibraries + "open_simulation_interface_pic.lib");
					PublicAdditionalLibraries.Add(modelLibraries + "open_simulation_interface_static.lib");
					//PublicDelayLoadDLLs.Add("open_simulation_interface.dll");
					//RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "open_simulation_interface.dll"), Path.Combine(OSI3Libraries, "open_simulation_interface.dll"));
				}
			*/
		}
	}

}