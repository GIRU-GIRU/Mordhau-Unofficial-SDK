#pragma once

#include "CoreMinimal.h"
#include "LateTickComponent.generated.h"

UCLASS()
class ULateTickComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LastFrameTick;


};