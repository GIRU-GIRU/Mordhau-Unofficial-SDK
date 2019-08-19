// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauCharacter.h"
#include "UnrealNetwork.h"

void AMordhauCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMordhauCharacter, FallingTimeToRagdoll)
	DOREPLIFETIME(AMordhauCharacter, FallingTime)
	DOREPLIFETIME(AMordhauCharacter, JumpStaminaCost)
	DOREPLIFETIME(AMordhauCharacter, StaminaRegenTickRate)
	DOREPLIFETIME(AMordhauCharacter, HealthOnKill)
	DOREPLIFETIME(AMordhauCharacter, bIsUnflinchable)
	DOREPLIFETIME(AMordhauCharacter, MeleeMissRecoveryModifier)
	DOREPLIFETIME(AMordhauCharacter, DodgeStaminaCost)
	DOREPLIFETIME(AMordhauCharacter, bHasScaryFace)
	DOREPLIFETIME(AMordhauCharacter, DodgeCooldown)
	DOREPLIFETIME(AMordhauCharacter, DodgeDuration)
	DOREPLIFETIME(AMordhauCharacter, EasyParryUntilTime)
	DOREPLIFETIME(AMordhauCharacter, bDestroyEquipmentOnDeath)
	DOREPLIFETIME(AMordhauCharacter, MeleeReleaseModifier)
	DOREPLIFETIME(AMordhauCharacter, StaminaCostModifier)
	DOREPLIFETIME(AMordhauCharacter, MeleeWindupModifier)
	DOREPLIFETIME(AMordhauCharacter, bDoNotUseGrounding)
	DOREPLIFETIME(AMordhauCharacter, bIsRightArmDisabled)
	DOREPLIFETIME(AMordhauCharacter, bIsRightLegDisabled)
	DOREPLIFETIME(AMordhauCharacter, bIsLeftLegDisabled)
	DOREPLIFETIME(AMordhauCharacter, bIsLeftArmDisabled)
	DOREPLIFETIME(AMordhauCharacter, bIsHoldingBlock)
	DOREPLIFETIME(AMordhauCharacter, bDoNotAnimateBreathing)
	DOREPLIFETIME(AMordhauCharacter, ReceivedFireDamageModifierWithFireproofPerk)
	DOREPLIFETIME(AMordhauCharacter, ReceivedDamageModifierWithFriendlyPerk)
	DOREPLIFETIME(AMordhauCharacter, StaminaRegenPerTick)
	DOREPLIFETIME(AMordhauCharacter, stamina)
	DOREPLIFETIME(AMordhauCharacter, StaminaRegenDelay)
	DOREPLIFETIME(AMordhauCharacter, StaminaOnKill)
	DOREPLIFETIME(AMordhauCharacter, MovementBoostDurationWithRushPerk)
	DOREPLIFETIME(AMordhauCharacter, MinDelayBetweenBattlecries)
	DOREPLIFETIME(AMordhauCharacter, MinDelayBetweenVoiceCommands)
	DOREPLIFETIME(AMordhauCharacter, bIsWrithingInPain)
	DOREPLIFETIME(AMordhauCharacter, MaxThirdPersonFOV)
	DOREPLIFETIME(AMordhauCharacter, CurrentFOVOffset)
	DOREPLIFETIME(AMordhauCharacter, UseHoldTime)

}

void AMordhauCharacter :: LeftTeamArea(int OwningTeam)
{

}
void AMordhauCharacter::EnteredTeamArea(int OwningTeam)
{

}
bool AMordhauCharacter :: IsInKnockback()
{
	return 1;
}
bool AMordhauCharacter :: IsInEnemyTeamArea()
{
	return 1;
}
bool AMordhauCharacter :: IsInAnyTeamArea()
{
	return 1;
}
bool AMordhauCharacter :: IsHoldingBlock()
{
	return 1;
}
bool AMordhauCharacter :: HasPerk(uint8 PerkId)
{
	return 1;
}
bool AMordhauCharacter :: CanEasyParry()
{
	return 1;
}
void AMordhauCharacter::UseReleased()
{

}
void AMordhauCharacter::UsePressed()
{}
bool AMordhauCharacter::ValidateInteractionTarget(class AActor* TargetActor)
{
	return 1;
}