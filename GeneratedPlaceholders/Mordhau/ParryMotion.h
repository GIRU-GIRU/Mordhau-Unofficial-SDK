#pragma once

#include "CoreMinimal.h"
#include "ParryMotion.generated.h"

UCLASS()
class UParryMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<class UMordhauMotion*, float> BlockedAttacks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldBlockMemoryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimedBlockMemoryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EasyParryDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EasyParryStaminaCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldRiposteWindowExtra;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NonHeldParryExtensionAndRiposteWindowExtra;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction SuccessfulParryRecoveryMovementRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction FailedParryRecoveryMovementRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* MWAP;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteWindowBase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryFailPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryFailFadeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryFailPlayRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryFailFadeOut1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParryFailPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParryFailFadeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParryFailPlayRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParryFailFadeOut1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumHeldParryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParryRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParrySuccessRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeldParrySuccessRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryUpTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BlockStaminaRecover;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char TotalBlocks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsBlockHoldable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParryStage Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteWindowStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauWeapon> WeaponPtr;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasQueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedMoveTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove QueuedMove;


};