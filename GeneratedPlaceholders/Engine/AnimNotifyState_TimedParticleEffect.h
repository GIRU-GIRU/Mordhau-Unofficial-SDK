#pragma once

#include "CoreMinimal.h"
#include "AnimNotifyState_TimedParticleEffect.generated.h"

UCLASS()
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* PSTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LocationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDestroyAtEnd;


};