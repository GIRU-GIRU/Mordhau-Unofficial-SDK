#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_ConeCheck.generated.h"

UCLASS()
class UBTDecorator_ConeCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConeHalfAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector ConeOrigin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector ConeDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector Observed;


};