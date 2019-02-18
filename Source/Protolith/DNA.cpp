// Fill out your copyright notice in the Description page of Project Settings.

#include "DNA.h"

// Sets default values for this component's properties
UDNA::UDNA()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	NumberOfGenes = 1;
	int i = 0;
	for (int i = 0; i < NumberOfGenes; i++)
	{
		Genes[i]->floatValue = 0;
	}
	// ...
}


// Called when the game starts
void UDNA::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UDNA::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// returns a replicate of the DNA object
UDNA* UDNA::Replicate(UDNA* origDNA)
{
	UDNA* alias = origDNA;
	return alias;
}