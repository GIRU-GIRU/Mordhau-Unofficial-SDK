#pragma once

#include "CoreMinimal.h"
#include "TriggerBase.generated.h"

UCLASS()
class ATriggerBase : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UShapeComponent* CollisionComponent;


};