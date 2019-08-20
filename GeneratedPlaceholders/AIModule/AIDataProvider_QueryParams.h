#pragma once

#include "CoreMinimal.h"
#include "AIDataProvider_QueryParams.generated.h"

UCLASS()
class UAIDataProvider_QueryParams : public UAIDataProvider
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParamName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FloatValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int IntValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool BoolValue;


};