#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleEventReceiverBase.generated.h"

UCLASS()
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleEventType> EventGeneratorType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName EventName;


};