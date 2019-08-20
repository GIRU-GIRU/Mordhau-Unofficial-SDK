#pragma once

#include "CoreMinimal.h"
#include "LevelBounds.generated.h"

UCLASS()
class ALevelBounds : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoUpdateBounds;


};