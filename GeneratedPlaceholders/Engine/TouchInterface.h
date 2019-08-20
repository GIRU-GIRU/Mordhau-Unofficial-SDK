#pragma once

#include "CoreMinimal.h"
#include "TouchInterface.generated.h"

UCLASS()
class UTouchInterface : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTouchInputControl> Controls;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ActiveOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InactiveOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeUntilDeactive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeUntilReset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ActivationDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPreventRecenter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartupDelay;


};