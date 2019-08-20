#pragma once

#include "CoreMinimal.h"
#include "EmitterCameraLensEffectBase.generated.h"

UCLASS()
class AEmitterCameraLensEffectBase : public AEmitter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* PS_CameraEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* PS_CameraEffectNonExtremeContent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerCameraManager* BaseCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform RelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseFOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowMultipleInstances : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bResetWhenRetriggered : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> EmittersToTreatAsSame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistFromCamera;


};