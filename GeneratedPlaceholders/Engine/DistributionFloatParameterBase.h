#pragma once

#include "CoreMinimal.h"
#include "DistributionFloatParameterBase.generated.h"

UCLASS()
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinOutput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxOutput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionParamMode> ParamMode;


};