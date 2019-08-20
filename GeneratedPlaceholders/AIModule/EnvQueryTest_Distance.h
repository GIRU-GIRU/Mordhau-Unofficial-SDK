#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Distance.generated.h"

UCLASS()
class UEnvQueryTest_Distance : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestDistance> TestMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DistanceTo;


};