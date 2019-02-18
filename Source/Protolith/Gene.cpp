// Fill out your copyright notice in the Description page of Project Settings.

#include "Gene.h"

UGene::UGene()
{
	

}

//	mutates and returns the gene
UGene* UGene::Mutate(UGene* origGene)
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

float UGene::GetValue()
{
	return this->floatValue;
}