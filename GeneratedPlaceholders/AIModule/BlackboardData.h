#pragma once

#include "CoreMinimal.h"
#include "BlackboardData.generated.h"

UCLASS()
class UBlackboardData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlackboardData* Parent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlackboardEntry> Keys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasSynchronizedKeys : 1;


};