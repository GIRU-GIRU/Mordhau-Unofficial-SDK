#pragma once

#include "CoreMinimal.h"
#include "Horse.generated.h"

UCLASS()
class AHorse : public AMordhauVehicle
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* BumpCapsule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurdSpawnInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurdSpawnChance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastTurdSpawnCheck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* BumpDamageBySpeedModifierCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* AttackDamageBySpeedModifierCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DesiredGear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackForceVelocityFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* KnockbackSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RiderRearingCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RearingDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReplicatedRearingTimeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRearingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRearingRealTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EHorseGear MinimumGearToCouch;

	UFUNCTION(BlueprintCallable, Category = "Horse")
	void SpawnTurd();
	UFUNCTION(BlueprintCallable, Category = "Horse")
		void ServerRequestRearing();
	UFUNCTION(BlueprintCallable, Category = "Horse")
		void SecondaryTurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "Horse")
		void RequestRearing();
	UFUNCTION(BlueprintCallable, Category = "Horse")
		void OnRep_ReplicatedRearing();
	UFUNCTION(BlueprintCallable, Category = "Horse")
		void OnBumpCapsuleOverlapped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "Horse")
		bool GetIsInRearingMode();
	UFUNCTION(BlueprintCallable, Category = "Horse")
		float CalculateBumpDamage(const struct FVector& OurWorldVelocity);

};