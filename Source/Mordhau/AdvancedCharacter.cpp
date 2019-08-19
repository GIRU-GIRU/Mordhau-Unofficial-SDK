// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedCharacter.h"
#include "UnrealNetwork.h"

void AAdvancedCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);
	DOREPLIFETIME(AAdvancedCharacter, Team)
	DOREPLIFETIME(AAdvancedCharacter, Health)
	DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth)
	DOREPLIFETIME(AAdvancedCharacter, TurnRateCap)
	DOREPLIFETIME(AAdvancedCharacter, ReceivedDamageModifier)
	DOREPLIFETIME(AAdvancedCharacter, bIsDead)
	DOREPLIFETIME(AAdvancedCharacter, NextHealthTick)
	DOREPLIFETIME(AAdvancedCharacter, HealthRegenDelay)
	DOREPLIFETIME(AAdvancedCharacter, bIgnoreGameStateHealthRegenRestriction)
	DOREPLIFETIME(AAdvancedCharacter, KnockbackFlinch)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingMinTime)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingMinVelocityToGetUp)
	DOREPLIFETIME(AAdvancedCharacter, AirborneTime)
	DOREPLIFETIME(AAdvancedCharacter, bIsRagdollFalling)
	DOREPLIFETIME(AAdvancedCharacter, bIsUsingRagdollFallingCollision)
	DOREPLIFETIME(AAdvancedCharacter, OutOfBoundsKillTime)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingGetUpDuration)
	DOREPLIFETIME(AAdvancedCharacter, TurnLimit)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingStartTime)
	DOREPLIFETIME(AAdvancedCharacter, JumpCooldown)
	DOREPLIFETIME(AAdvancedCharacter, bTurnRateIgnoresCap)

}
	bool AAdvancedCharacter::GetIsDead()
	{
		return true;
	}
	bool AAdvancedCharacter::IsOutOfBounds()
	{
		return true;
	}
	bool AAdvancedCharacter::IsLocallyPlayerControlled()
	{
		return true;
	}
	void AAdvancedCharacter::SetIsRagdollFalling(bool bInIsRagdollFalling)
	{

	}
	void AAdvancedCharacter::StopHealthRegen(float ExtraTime)
	{

	}
	void AAdvancedCharacter::TurnAtRate(float Val)
	{

	}
	void AAdvancedCharacter::MoveRight(float Val)
	{

	}
	void AAdvancedCharacter::MoveForward(float Val)
	{}
	void AAdvancedCharacter::LookUpAtRate(float Val)
	{}
	void AAdvancedCharacter::LeftOutOfBoundsArea()
	{}
	bool AAdvancedCharacter::IsAirborne()
	{
		return true;

	}
	void AAdvancedCharacter::AddTurnDegrees(float Delta)
	{}
	bool AAdvancedCharacter::Knockback(const struct FVector& Amount)
	{
		return true;

	}
	void AAdvancedCharacter::EnteredOutOfBoundsArea()
	{}
	void AAdvancedCharacter::StartRagdoll()
	{}
