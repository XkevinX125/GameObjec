// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameObjecGameMode.h"
#include "GameObjecPlayerController.h"
#include "GameObjecPawn.h"

AGameObjecGameMode::AGameObjecGameMode()
{
	// no pawn by default
	DefaultPawnClass = AGameObjecPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AGameObjecPlayerController::StaticClass();
}
