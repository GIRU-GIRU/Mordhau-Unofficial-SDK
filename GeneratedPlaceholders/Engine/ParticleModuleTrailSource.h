#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTrailSource.generated.h"

UCLASS()
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrail2SourceMethod> SourceMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SourceName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SourceStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockSourceStength : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SourceOffsetCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector> SourceOffsetDefaults;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritRotation : 1;


};