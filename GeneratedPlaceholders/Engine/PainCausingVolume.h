#pragma once

#include "CoreMinimal.h"
#include "PainCausingVolume.generated.h"

UCLASS()
class APainCausingVolume : public APhysicsVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPainCausing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamagePerSec;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DamageType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PainInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEntryPain : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char BACKUP_bPainCausing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AController* DamageInstigator;


};