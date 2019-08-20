#pragma once

#include "CoreMinimal.h"
#include "AnimCompress.generated.h"

UCLASS()
class UAnimCompress : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNeedsSkeleton : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationCompressionFormat> TranslationCompressionFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationCompressionFormat> RotationCompressionFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationCompressionFormat> ScaleCompressionFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxCurveError;


};