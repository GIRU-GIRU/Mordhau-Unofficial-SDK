#pragma once

#include "CoreMinimal.h"
#include "StaticMeshComponent.generated.h"

UCLASS()
class UStaticMeshComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubDivisionStepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor WireframeColorOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideWireframeColor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideMinLod : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideNavigationExport : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceNavigationObstacle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisallowMeshPaintPerInstance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreInstanceForTextureStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideLightMapRes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastDistanceFieldIndirectShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideDistanceFieldSelfShadowBias : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseSubDivisions : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseDefaultCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReverseCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OverriddenLightMapRes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFieldIndirectShadowMinVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceFieldSelfShadowBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StreamingDistanceMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStaticMeshComponentLODInfo> LODData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStreamingTextureBuildInfo> StreamingTextureData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassPrimitiveSettings LightmassSettings;

	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
	bool SetStaticMesh(class UStaticMesh* NewMesh);
	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
		void SetReverseCulling(bool ReverseCulling);
	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
		void SetForcedLodModel(int NewForcedLodModel);
	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
		void SetDistanceFieldSelfShadowBias(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
		void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	UFUNCTION(BlueprintCallable, Category = "StaticMeshComponent")
		void GetLocalBounds(struct FVector* Min, struct FVector* Max);

};