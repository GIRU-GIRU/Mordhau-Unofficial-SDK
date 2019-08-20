#pragma once

#include "CoreMinimal.h"
#include "NavCollisionBase.generated.h"

UCLASS()
class UNavCollisionBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsDynamicObstacle : 1;


};