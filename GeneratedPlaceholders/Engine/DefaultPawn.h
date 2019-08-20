#pragma once

#include "CoreMinimal.h"
#include "DefaultPawn.generated.h"

UCLASS()
class ADefaultPawn : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseTurnRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseLookUpRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnMovementComponent* MovementComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USphereComponent* CollisionComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAddDefaultMovementBindings : 1;

	UFUNCTION(BlueprintCallable, Category = "DefaultPawn")
	void TurnAtRate(float Rate);
	UFUNCTION(BlueprintCallable, Category = "DefaultPawn")
		void MoveUp_World(float Val);
	UFUNCTION(BlueprintCallable, Category = "DefaultPawn")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category = "DefaultPawn")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category = "DefaultPawn")
		void LookUpAtRate(float Rate);

};