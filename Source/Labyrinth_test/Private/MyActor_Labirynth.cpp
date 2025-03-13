// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_Labirynth.h"

// Sets default values
AMyActor_Labirynth::AMyActor_Labirynth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor_Labirynth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor_Labirynth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

