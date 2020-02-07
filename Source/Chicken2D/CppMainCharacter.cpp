// Fill out your copyright notice in the Description page of Project Settings.


#include "CppMainCharacter.h"

// Sets default values
ACppMainCharacter::ACppMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACppMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

