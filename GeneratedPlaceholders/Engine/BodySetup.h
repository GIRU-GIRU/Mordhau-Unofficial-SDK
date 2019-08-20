#pragma once

#include "CoreMinimal.h"
#include "BodySetup.generated.h"

UCLASS()
class UBodySetup : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FKAggregateGeom AggGeom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BoneName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicsType> PhysicsType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysFullAnimWeight : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bConsiderForBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMeshCollideAll : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDoubleSidedGeometry : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateNonMirroredCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSharedCookedData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateMirroredCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBodyCollisionResponse> CollisionReponse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* PhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWalkableSlopeOverride WalkableSlopeOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBodyInstance DefaultInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BuildScale3D;


};