#pragma once

#include "CoreMinimal.h"
#include "CableComponent.generated.h"

UCLASS()
class UCableComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FComponentReference AttachEndTo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachEndToSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EndLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CableLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSegments;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SubstepTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SolverIterations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CollisionFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CableForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CableGravityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CableWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileMaterial;

	UFUNCTION(BlueprintCallable, Category = "CableComponent")
	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	UFUNCTION(BlueprintCallable, Category = "CableComponent")
		void GetCableParticleLocations(TArray<struct FVector>* Locations);
	UFUNCTION(BlueprintCallable, Category = "CableComponent")
		class USceneComponent* GetAttachedComponent();
	UFUNCTION(BlueprintCallable, Category = "CableComponent")
		class AActor* GetAttachedActor();

};