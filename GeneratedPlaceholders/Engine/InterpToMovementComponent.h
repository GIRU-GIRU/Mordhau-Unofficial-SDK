#pragma once

#include "CoreMinimal.h"
#include "InterpToMovementComponent.generated.h"

UCLASS()
class UInterpToMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPauseOnImpact : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EInterpToBehaviourType BehaviourType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceSubStepping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInterpToReverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInterpToStop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnWaitBeginDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnWaitEndDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnResetDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSimulationTimeStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSimulationIterations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInterpControlPoint> ControlPoints;

	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
	void StopSimulating(const struct FHitResult& HitResult);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void RestartMovement(float InitialDirection);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void OnInterpToWaitEndDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void OnInterpToWaitBeginDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void OnInterpToStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void OnInterpToReverseDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void OnInterpToResetDelegate__DelegateSignature(const struct FHitResult& ImpactResult, float Time);
	UFUNCTION(BlueprintCallable, Category = "InterpToMovementComponent")
		void FinaliseControlPoints();

};