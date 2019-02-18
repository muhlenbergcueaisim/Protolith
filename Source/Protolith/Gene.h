// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gene.generated.h"
/**
 * 
 */

UCLASS()
class PROTOLITH_API UGene : public UObject
{
	GENERATED_BODY()

public:
	UGene();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float floatValue;

	UFUNCTION(BlueprintCallable)
		UGene* Mutate(UGene* origGene);

	UFUNCTION(BlueprintCallable)
	float GetValue();
};
