#pragma once

#include "CoreMinimal.h"
#include "AnimationSettings.generated.h"

UCLASS()
class UAnimationSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CompressCommandletVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> KeyEndEffectorsMatchNameArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DefaultCompressionAlgorithm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationCompressionFormat> RotationCompressionFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationCompressionFormat> TranslationCompressionFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxCurveError;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlternativeCompressionThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool ForceRecompression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyCheckForMissingSkeletalMeshes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceBelowThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFirstRecompressUsingCurrentOrDefault;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRaiseMaxErrorToExisting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTryFixedBitwiseCompression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTryPerTrackBitwiseCompression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTryLinearKeyRemovalCompression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTryIntervalKeyRemoval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnablePerformanceLog;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bStripAnimationDataOnDedicatedServer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTickAnimationOnSkeletalMeshInit;


};