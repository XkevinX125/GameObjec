// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameObjecPlayerController.h"

AGameObjecPlayerController::AGameObjecPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
