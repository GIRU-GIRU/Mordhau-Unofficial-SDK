#pragma once

#include "CoreMinimal.h"
#include "WindDirectionalSource.generated.h"

UCLASS()
class AWindDirectionalSource : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWindDirectionalSourceComponent* Component;


};