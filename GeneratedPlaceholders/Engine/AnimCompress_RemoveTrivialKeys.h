#pragma once

#include "CoreMinimal.h"
#include "AnimCompress_RemoveTrivialKeys.generated.h"

UCLASS()
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxPosDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxScaleDiff;


};