#pragma once

#include "CoreMinimal.h"
#include "Pawn.generated.h"

UCLASS()
class APawn : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseControllerRotationPitch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseControllerRotationYaw : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseControllerRotationRoll : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanAffectNavigationGeneration : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseEyeHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAutoReceiveInput> AutoPossessPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAutoPossessAI AutoPossessAI;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AIControllerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerState* PlayerState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RemoteViewPitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AController* LastHitBy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AController* Controller;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ControlInputVector;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastControlInputVector;

	UFUNCTION(BlueprintCallable, Category = "Pawn")
	void SpawnDefaultController();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void ReceiveUnpossessed(class AController* OldController);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void ReceivePossessed(class AController* NewController);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void OnRep_PlayerState();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void OnRep_Controller();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FVector K2_GetMovementInputVector();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		bool IsPlayerControlled();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		bool IsMoveInputIgnored();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		bool IsLocallyControlled();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		bool IsControlled();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FVector GetPendingMovementInputVector();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FVector GetNavAgentLocation();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		class UPawnMovementComponent* GetMovementComponent();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		class AActor* STATIC_GetMovementBaseActor(class APawn* Pawn);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FVector GetLastMovementInputVector();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FRotator GetControlRotation();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		class AController* GetController();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FRotator GetBaseAimRotation();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void DetachFromControllerPendingDestroy();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		struct FVector ConsumeMovementInputVector();
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void AddControllerYawInput(float Val);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void AddControllerRollInput(float Val);
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void AddControllerPitchInput(float Val);

};