#pragma once

#include "CoreMinimal.h"
#include "AnimCompress_PerTrackCompression.generated.h"

UCLASS()
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxZeroingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxPosDiffBitwise;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleDiffBitwise;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxScaleDiffBitwise;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EAnimationCompressionFormat>> AllowedRotationFormats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EAnimationCompressionFormat>> AllowedTranslationFormats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EAnimationCompressionFormat>> AllowedScaleFormats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bResampleAnimation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ResampledFramerate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinKeysForResampling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAdaptiveError : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseOverrideForEndEffectors : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TrackHeightBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParentingDivisor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParentingDivisorExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAdaptiveError2 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RotationErrorSourceRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslationErrorSourceRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ScaleErrorSourceRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxErrorPerTrackRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PerturbationProbeSize;


};