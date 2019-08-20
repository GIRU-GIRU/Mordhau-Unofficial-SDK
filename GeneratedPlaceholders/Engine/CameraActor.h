#pragma once

#include "CoreMinimal.h"
#include "CameraActor.generated.h"

UCLASS()
class ACameraActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAutoReceiveInput> AutoActivateForPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bConstrainAspectRatio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AspectRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FOVAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostProcessBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPostProcessSettings PostProcessSettings;

	UFUNCTION(BlueprintCallable, Category = "CameraActor")
	int GetAutoActivatePlayerIndex();

};