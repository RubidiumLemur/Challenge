// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ChallengeTarget : TargetRules
{
	public ChallengeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
        CppStandard = CppStandardVersion.Cpp20;  // Add this line
        ExtraModuleNames.AddRange( new string[] { "Challenge" } );
	}
}
