// Copyright Epic Games, Inc. All Rights Reserved.

#include "Labyrinth_testGameMode.h"
#include "Labyrinth_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALabyrinth_testGameMode::ALabyrinth_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
