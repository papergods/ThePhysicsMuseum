// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThePhysicsMuseumGameMode.h"
#include "ThePhysicsMuseumCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThePhysicsMuseumGameMode::AThePhysicsMuseumGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
