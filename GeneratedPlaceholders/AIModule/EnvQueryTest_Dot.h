#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest_Dot.generated.h"

UCLASS()
class UEnvQueryTest_Dot : public UEnvQueryTest
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvDirection LineA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEnvDirection LineB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EEnvTestDot TestMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAbsoluteValue;


};