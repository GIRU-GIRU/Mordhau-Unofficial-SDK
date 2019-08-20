#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationBoneSocket.generated.h"

UCLASS()
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELocationBoneSocketSource> SourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector UniversalOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLocationBoneSocketInfo> SourceLocations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdatePositionEachFrame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOrientMeshEmitters : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritBoneVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InheritVelocityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SkelMeshActorParamName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumPreSelectedIndices;


};