// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "Mordhau_classes.hpp"
#include "AdvancedCharacter.generated.h"

UCLASS()
class MORDHAU_API AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Health;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int ReplicatedHealth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnRateCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float ReceivedDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsDead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextHealthTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HealthRegenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIgnoreGameStateHealthRegenRestriction;  
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float KnockbackFlinch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingMinTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingMinVelocityToGetUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirborneTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsUsingRagdollFallingCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float OutOfBoundsKillTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingGetUpDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              TurnLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RagdollFallingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              JumpCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float bTurnRateIgnoresCap;
	//UFUNCTION()
	//bool IsLocallyPlayerControlled();
	//UFUNCTION()
	//voidReplicatedHealth();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsLocallyPlayerControlled();
		//UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
			//float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StopHealthRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void AddTurnDegrees(float Delta);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StartRagdoll();
};
