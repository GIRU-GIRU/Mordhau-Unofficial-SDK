#pragma once

#include "CoreMinimal.h"
#include "AnimNotify_PlayParticleEffect.generated.h"

UCLASS()
class UAnimNotify_PlayParticleEffect : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* PSTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LocationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Scale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Attached : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SocketName;


};