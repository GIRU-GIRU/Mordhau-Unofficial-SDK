#pragma once

#include "CoreMinimal.h"
#include "AdvProjectileMovementComponent.generated.h"

UCLASS()
class UAdvProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DragDeceleration;


};