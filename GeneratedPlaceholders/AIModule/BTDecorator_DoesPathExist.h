#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_DoesPathExist.generated.h"

UCLASS()
class UBTDecorator_DoesPathExist : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKeyA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKeyB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseSelf : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPathExistanceQueryType> PathQueryType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FilterClass;


};