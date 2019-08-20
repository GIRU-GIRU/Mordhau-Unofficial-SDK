#pragma once

#include "CoreMinimal.h"
#include "SpectatorPawnMovement.generated.h"

UCLASS()
class USpectatorPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreTimeDilation : 1;


};