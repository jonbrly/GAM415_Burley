// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAM415_BurleyGameMode.h"
#include "GAM415_BurleyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAM415_BurleyGameMode::AGAM415_BurleyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
