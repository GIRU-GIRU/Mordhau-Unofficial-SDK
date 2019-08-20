#pragma once

#include "CoreMinimal.h"
#include "MeshVertexPainterKismetLibrary.generated.h"

UCLASS()
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MeshVertexPainterKismetLibrary")
	void STATIC_RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);
	UFUNCTION(BlueprintCallable, Category = "MeshVertexPainterKismetLibrary")
		void STATIC_PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB);
	UFUNCTION(BlueprintCallable, Category = "MeshVertexPainterKismetLibrary")
		void STATIC_PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);

};