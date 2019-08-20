#pragma once

#include "CoreMinimal.h"
#include "VelocityBoxComponent.generated.h"

UCLASS()
class UVelocityBoxComponent : public UBoxComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyRunOnAuthority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TriggerVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseVelocityAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VelocityAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bVelocityAxisAccountForPawnVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTriggered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentVelocity;


};