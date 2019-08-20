#pragma once

#include "CoreMinimal.h"
#include "AnimNotifyState_Trail.generated.h"

UCLASS()
class UAnimNotifyState_Trail : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* PSTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName FirstSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SecondSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrailWidthMode> WidthScaleMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName WidthScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRecycleSpawnedSystems : 1;

	UFUNCTION(BlueprintCallable, Category = "AnimNotifyState_Trail")
	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

};