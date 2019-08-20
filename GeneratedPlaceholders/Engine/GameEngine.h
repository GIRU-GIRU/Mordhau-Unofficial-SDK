#pragma once

#include "CoreMinimal.h"
#include "GameEngine.generated.h"

UCLASS()
class UGameEngine : public UEngine
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerFlushLogInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameInstance* GameInstance;


};