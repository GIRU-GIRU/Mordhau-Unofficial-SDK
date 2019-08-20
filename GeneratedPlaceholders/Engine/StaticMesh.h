#pragma once

#include "CoreMinimal.h"
#include "StaticMesh.generated.h"

UCLASS()
class UStaticMesh : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPerPlatformInt MinLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> Materials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStaticMaterial> StaticMaterials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LightmapUVDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LightMapResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LightMapCoordinateIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFieldSelfShadowBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateMeshDistanceField : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LODForCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStripComplexCollisionForConsole : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasNavigationData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportUniformlyDistributedSampling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LpvBiasMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAllowCPUAccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UStaticMeshSocket*> Sockets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PositiveBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NegativeBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds ExtendedBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ElementToIgnoreForTexFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* EditableMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavCollisionBase* NavCollision;

	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
	int GetNumSections(int InLOD);
	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
		int GetNumLODs();
	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
		int GetMaterialIndex(const struct FName& MaterialSlotName);
	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
		class UMaterialInterface* GetMaterial(int MaterialIndex);
	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
		struct FBoxSphereBounds GetBounds();
	UFUNCTION(BlueprintCallable, Category = "StaticMesh")
		struct FBox GetBoundingBox();

};