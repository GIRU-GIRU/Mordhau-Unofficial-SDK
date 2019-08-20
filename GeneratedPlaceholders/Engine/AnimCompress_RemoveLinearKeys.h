#pragma once

#include "CoreMinimal.h"
#include "AnimCompress_RemoveLinearKeys.generated.h"

UCLASS()
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxPosDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxScaleDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxEffectorDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinEffectorDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EffectorDiffSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParentKeyScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRetarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActuallyFilterLinearKeys : 1;


};