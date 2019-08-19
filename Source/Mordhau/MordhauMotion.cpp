// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauMotion.h"
#include "UnrealNetwork.h"

void UMordhauMotion::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMordhauMotion, StartRealTime)
	DOREPLIFETIME(UMordhauMotion, ComingFromMotion)
	DOREPLIFETIME(UMordhauMotion, ExpectedDelay)
	DOREPLIFETIME(UMordhauMotion, StartTime)
	DOREPLIFETIME(UMordhauMotion, EndTime)
	DOREPLIFETIME(UMordhauMotion, LeaveTime)
	DOREPLIFETIME(UMordhauMotion, bInitiatedLocally)
	DOREPLIFETIME(UMordhauMotion, bWasConfirmedByAuthority)
	DOREPLIFETIME(UMordhauMotion, ConfirmedByAuthorityTime)
	DOREPLIFETIME(UMordhauMotion, bIsFlinchable)
	DOREPLIFETIME(UMordhauMotion, SpeedFactor)
	DOREPLIFETIME(UMordhauMotion, BackpedalSpeedFactor)
	DOREPLIFETIME(UMordhauMotion, bCanEmote)
	DOREPLIFETIME(UMordhauMotion, bCanAttack)
	DOREPLIFETIME(UMordhauMotion, bCanBlock)
	DOREPLIFETIME(UMordhauMotion, bDisablesAtmospherics)
	DOREPLIFETIME(UMordhauMotion, bRequires3PArmsSync)
	DOREPLIFETIME(UMordhauMotion, bDisablesCosmeticWeaponTransform)
	DOREPLIFETIME(UMordhauMotion, bDisablesOffhandIK)
	DOREPLIFETIME(UMordhauMotion, bDisablesChaseMechanic)
	DOREPLIFETIME(UMordhauMotion, bForcesOffhandIK)
	DOREPLIFETIME(UMordhauMotion, bOffhandIsRightHand)
	DOREPLIFETIME(UMordhauMotion, OffhandIKChangeSpeed)
	DOREPLIFETIME(UMordhauMotion, CosmeticTransformChangeSpeed)
	DOREPLIFETIME(UMordhauMotion, OffhandIKDistanceMax)
	DOREPLIFETIME(UMordhauMotion, OffhandIKDistanceMin)
	DOREPLIFETIME(UMordhauMotion, bBlocksRegen)
	DOREPLIFETIME(UMordhauMotion, bAllowDedicatedServerAnimLOD)
	DOREPLIFETIME(UMordhauMotion, bUsesLeftTorsoBlend)
	DOREPLIFETIME(UMordhauMotion, LeftTorsoBlendSpeed)
	DOREPLIFETIME(UMordhauMotion, bWantsRightLegBending)
	DOREPLIFETIME(UMordhauMotion, RightLegBendingChangeSpeed)
}


bool UMordhauMotion::ProcessFeint()
{
	return 1;
}
void UMordhauMotion::OnTick(float DeltaTime)
{}
void UMordhauMotion::OnLeave(bool Interrupted)
{}
void UMordhauMotion::OnLateTick(float DeltaTime)
{}
void UMordhauMotion::OnEnded()
{}
void UMordhauMotion::OnBegin()
{}

