#pragma once

#include "CoreMinimal.h"
#include "EnvQueryTest.generated.h"

UCLASS()
class UEnvQueryTest : public UEnvQueryNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TestOrder;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestPurpose> TestPurpose;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TestComment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestFilterOperator> MultipleContextFilterOp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestScoreOperator> MultipleContextScoreOp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestFilterType> FilterType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderBoolValue BoolValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue FloatValueMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue FloatValueMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvTestScoreEquation> ScoringEquation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvQueryTestClamping> ClampMinType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvQueryTestClamping> ClampMaxType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EEQSNormalizationType NormalizationType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ScoreClampMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ScoreClampMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ScoringFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ReferenceValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDefineReferenceValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWorkOnFloatValues : 1;


};