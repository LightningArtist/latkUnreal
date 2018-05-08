// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class latkUnrealEditorTarget : TargetRules
{
	public latkUnrealEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.Add("latkUnreal");
	}

	//
	// TargetRules interface.
	//

	/*
	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "latkUnreal" } );
	}
	*/
}
