#pragma once

#include "CoreMinimal.h"
#include "CouchedAttackMotion.generated.h"

UCLASS()
class UCouchedAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* WindUpMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauWeapon* Weapon;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CouchingBlendFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CouchStage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CouchStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxCouchTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RecoveryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInRecovery;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo AttackInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OriginalSecondaryTurnLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AHorse> HorsePtr;


};