// Fill out your copyright notice in the Description page of Project Settings.

#include "DNA.h"

// Sets default values for this component's properties
UDNA::UDNA()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

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
UDNA UDNA::Replicate(UDNA* origDNA)
{
	return UDNA();
}

//	mutates and returns the gene
Gene* Gene::Mutate(Gene* origGene)
{
	// store the original value
	float origValue = origGene->floatValue;
	// mutate the original value
	bool isPositive = FMath::RandBool();
	float randomFloat = FMath::FRandRange(0, 0.01);
	float mutatedValue = (isPositive ? (origValue + randomFloat) : (origValue - randomFloat));

	//	set the new gene's value to the mutated value
	origGene->floatValue = mutatedValue;

	// print a log of the new value
	UE_LOG(LogTemp, Warning, TEXT("gene value: %f"), origGene->floatValue);

	return origGene;
}

float Gene::getValue()
{
	return this->floatValue;
}
