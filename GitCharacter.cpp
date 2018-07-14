// Fill out your copyright notice in the Description page of Project Settings.

#include "GitCharacter.h"


// Sets default values
AGitCharacter::AGitCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGitCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGitCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGitCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

