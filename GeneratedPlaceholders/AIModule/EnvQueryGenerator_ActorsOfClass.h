#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_ActorsOfClass.generated.h"

UCLASS()
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SearchedActorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue SearchRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SearchCenter;


};