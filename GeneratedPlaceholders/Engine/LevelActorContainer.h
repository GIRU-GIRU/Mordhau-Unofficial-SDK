#pragma once

#include "CoreMinimal.h"
#include "LevelActorContainer.generated.h"

UCLASS()
class ULevelActorContainer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> Actors;


};