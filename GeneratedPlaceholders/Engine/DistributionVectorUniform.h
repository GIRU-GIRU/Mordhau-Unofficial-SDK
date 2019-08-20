#pragma once

#include "CoreMinimal.h"
#include "DistributionVectorUniform.generated.h"

UCLASS()
class UDistributionVectorUniform : public UDistributionVector
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Max;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Min;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockAxes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseExtremes : 1;


};