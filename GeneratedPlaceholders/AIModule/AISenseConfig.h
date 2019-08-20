#pragma once

#include "CoreMinimal.h"
#include "AISenseConfig.generated.h"

UCLASS()
class UAISenseConfig : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor DebugColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStartsEnabled : 1;


};