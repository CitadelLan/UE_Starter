// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClientTestGameMode.h"
#include "ClientTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClientTestGameMode::AClientTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
    // Score = 0;
}


