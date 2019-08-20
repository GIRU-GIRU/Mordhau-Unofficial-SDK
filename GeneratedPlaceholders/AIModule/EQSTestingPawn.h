#pragma once

#include "CoreMinimal.h"
#include "EQSTestingPawn.generated.h"

UCLASS()
class AEQSTestingPawn : public ACharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnvQuery* QueryTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEnvNamedValue> QueryParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAIDynamicParam> QueryConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeLimitPerStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StepToDebugDraw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EEnvQueryHightlightMode HighlightMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawLabels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawFailedItems : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReRunQueryOnlyOnFinishedMove : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBeVisibleInGame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTickDuringGame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEnvQueryRunMode> QueryingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAgentProperties NavAgentProperties;


};