#pragma once

#include "CoreMinimal.h"
#include "Controller.generated.h"

UCLASS()
class AController : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerState* PlayerState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInstigatedAnyDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName StateName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APawn* Pawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ACharacter* Character;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TransformComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ControlRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAttachToPawn : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsPlayerController : 1;

	UFUNCTION(BlueprintCallable, Category = "Controller")
	void UnPossess();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void StopMovement();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void SetIgnoreMoveInput(bool bNewMoveInput);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void SetIgnoreLookInput(bool bNewLookInput);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void SetControlRotation(const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ResetIgnoreMoveInput();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ResetIgnoreLookInput();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ResetIgnoreInputFlags();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void Possess(class APawn* InPawn);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void OnRep_PlayerState();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void OnRep_Pawn();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		class APawn* K2_GetPawn();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool IsPlayerController();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool IsMoveInputIgnored();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool IsLookInputIgnored();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool IsLocalPlayerController();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		bool IsLocalController();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		class AActor* GetViewTarget();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		struct FRotator GetDesiredRotation();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		struct FRotator GetControlRotation();
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		void ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "Controller")
		class APlayerController* CastToPlayerController();

};