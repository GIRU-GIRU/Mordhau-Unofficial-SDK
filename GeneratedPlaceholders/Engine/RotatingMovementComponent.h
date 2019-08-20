#pragma once

#include "CoreMinimal.h"
#include "RotatingMovementComponent.generated.h"

UCLASS()
class URotatingMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RotationRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PivotTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRotationInLocalSpace : 1;


};