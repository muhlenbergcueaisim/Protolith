// Fill out your copyright notice in the Description page of Project Settings.

#include "PopulationActor.h"

// Sets default values
APopulationActor::APopulationActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APopulationActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APopulationActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// initializes the population and returns an array of pawn actors
TArray<AProtoPawn*> APopulationActor::PopGenesis()
{
	return TArray<AProtoPawn*>();
}

void APopulationActor::EvaluateFitness(TArray<AProtoPawn*> Pop)
{
	UE_LOG(LogTemp, Warning, TEXT("evaluating fitness..."));
}

