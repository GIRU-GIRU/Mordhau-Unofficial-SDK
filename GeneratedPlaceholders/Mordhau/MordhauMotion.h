#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.generated.h"

UCLASS()
class UMordhauMotion : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter> Owner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartRealTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauMotion* ComingFromMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ExpectedDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EndTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LeaveTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInitiatedLocally;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasConfirmedByAuthority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConfirmedByAuthorityTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFlinchable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction MovementRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BackpedalSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanEmote;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesAtmospherics;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRequires3PArmsSync;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesCosmeticWeaponTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesOffhandIK;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesChaseMechanic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForcesOffhandIK;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOffhandIsRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIKChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CosmeticTransformChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIKDistanceMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIKDistanceMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bBlocksRegen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowDedicatedServerAnimLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsesLeftTorsoBlend;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LeftTorsoBlendSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsRightLegBending;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RightLegBendingChangeSpeed;

	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
	bool ProcessFeint();
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		bool ProcessBlock(EBlockType Type);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		bool ProcessAttack(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnLeave(bool Interrupted);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnLateTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnEnded();
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnDynamicParamChanged(unsigned char OldValue, unsigned char NewValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		void OnBegin();
	UFUNCTION(BlueprintCallable, Category = "MordhauMotion")
		bool CanInitiateMotion(class UClass* NewMotionType);

};