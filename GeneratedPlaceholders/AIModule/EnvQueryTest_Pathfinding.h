#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Pathfinding.generated.h"

UCLASS()
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestPathfinding> TestMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Context;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue PathFromContext;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue SkipUnreachable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FilterClass;


};