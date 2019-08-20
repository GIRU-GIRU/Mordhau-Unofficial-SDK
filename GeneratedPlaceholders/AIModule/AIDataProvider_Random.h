#pragma once

#include "CoreMinimal.h"
#include "AIDataProvider_Random.generated.h"

UCLASS()
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Min;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Max;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInteger : 1;


};