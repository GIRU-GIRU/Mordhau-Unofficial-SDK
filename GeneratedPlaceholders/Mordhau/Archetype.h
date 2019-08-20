#pragma once

#include "CoreMinimal.h"
#include "Archetype.generated.h"

UCLASS()
class UArchetype : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CharacterPoints;


};