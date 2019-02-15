// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DNA.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOLITH_API UDNA : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDNA();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// an array of our genes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<Gene*> Genes;

	// number of genes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumberOfGenes;

	// mutates the genes and returns itself
	UFUNCTION(BlueprintCallable)
		UDNA Replicate(UDNA* origDNA);

};

//	Gene class - holds a float value
class Gene
{
public:
	// mutate itself and return the value
	Gene* Mutate(Gene* origGene);
	// return the floatValue]
	float getValue();

private:
	// the particular sequence of bits for this gene
	float floatValue;
};