#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationSkelVertSurface.generated.h"

UCLASS()
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector UniversalOffset;
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
	TArray<struct FName> ValidAssociatedBones;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnforceNormalCheck : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NormalToCompare;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalCheckToleranceDegrees;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalCheckTolerance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> ValidMaterialIndices;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritVertexColor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritUV : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t InheritUVChannel;


};