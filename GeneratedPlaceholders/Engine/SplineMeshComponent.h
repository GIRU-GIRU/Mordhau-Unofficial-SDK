#pragma once

#include "CoreMinimal.h"
#include "SplineMeshComponent.generated.h"

UCLASS()
class USplineMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSplineMeshParams SplineParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SplineUpDir;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowSplineEditingPerInstance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSmoothInterpRollScale : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESplineMeshAxis> ForwardAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SplineBoundaryMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SplineBoundaryMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid CachedMeshBodySetupGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMeshDirty : 1;

	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
	void UpdateMesh();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartTangent(const struct FVector& StartTangent, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartScale(const struct FVector2D& StartScale, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartRoll(float StartRoll, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartPosition(const struct FVector& StartPos, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartOffset(const struct FVector2D& StartOffset, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetSplineUpDir(const struct FVector& InSplineUpDir, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetForwardAxis(TEnumAsByte<ESplineMeshAxis> InForwardAxis, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetEndTangent(const struct FVector& EndTangent, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetEndScale(const struct FVector2D& EndScale, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetEndRoll(float EndRoll, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetEndPosition(const struct FVector& EndPos, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetEndOffset(const struct FVector2D& EndOffset, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector GetStartTangent();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector2D GetStartScale();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		float GetStartRoll();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector GetStartPosition();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector2D GetStartOffset();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector GetSplineUpDir();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		TEnumAsByte<ESplineMeshAxis> GetForwardAxis();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector GetEndTangent();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector2D GetEndScale();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		float GetEndRoll();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector GetEndPosition();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		struct FVector2D GetEndOffset();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		float GetBoundaryMin();
	UFUNCTION(BlueprintCallable, Category = "SplineMeshComponent")
		float GetBoundaryMax();

};