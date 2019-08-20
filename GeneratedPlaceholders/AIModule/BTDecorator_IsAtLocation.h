#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_IsAtLocation.generated.h"

UCLASS()
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AcceptableRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFAIDistanceType GeometricDistanceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseParametrizedRadius : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseNavAgentGoalLocation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPathFindingBasedTest : 1;


};