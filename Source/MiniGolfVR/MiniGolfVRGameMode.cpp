// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MiniGolfVRGameMode.h"
#include "MiniGolfVRHUD.h"
#include "MiniGolfVRCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMiniGolfVRGameMode::AMiniGolfVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMiniGolfVRHUD::StaticClass();
}
