#pragma once

#include "CoreMinimal.h"
#include "LandscapeHeightfieldCollisionComponent.generated.h"

UCLASS()
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SectionBaseX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SectionBaseY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CollisionSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CollisionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SimpleCollisionSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> CollisionQuadFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid HeightfieldGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox CachedLocalBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TLazyObjectPtr<class ULandscapeComponent> RenderComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPhysicalMaterial*> CookedPhysicalMaterials;


};