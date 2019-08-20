#pragma once

#include "CoreMinimal.h"
#include "PawnSensingComponent.generated.h"

UCLASS()
class UPawnSensingComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HearingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LOSHearingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SightRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SensingInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HearingMaxSoundAge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableSensingUpdates : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlySensePlayers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSeePawns : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHearNoises : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSeePawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnHearNoise;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PeripheralVisionAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PeripheralVisionCosine;

	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
	void SetSensingUpdatesEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		void SetSensingInterval(float NewSensingInterval);
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		float GetPeripheralVisionCosine();
	UFUNCTION(BlueprintCallable, Category = "PawnSensingComponent")
		float GetPeripheralVisionAngle();

};