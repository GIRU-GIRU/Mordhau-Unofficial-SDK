#pragma once

#include "CoreMinimal.h"
#include "DistributionVectorParameterBase.generated.h"

UCLASS()
class UDistributionVectorParameterBase : public UDistributionVectorConstant
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MinInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MaxInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MinOutput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MaxOutput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionParamMode> ParamModes[0x3];


};