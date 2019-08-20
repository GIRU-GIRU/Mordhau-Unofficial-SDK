#pragma once

#include "CoreMinimal.h"
#include "DistributionVectorUniformCurve.generated.h"

UCLASS()
class UDistributionVectorUniformCurve : public UDistributionVector
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveTwoVectors ConstantCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockAxes1 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockAxes2 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorLockFlags> LockedAxes[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseExtremes : 1;


};