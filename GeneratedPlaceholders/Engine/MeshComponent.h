#pragma once

#include "CoreMinimal.h"
#include "MeshComponent.generated.h"

UCLASS()
class UMeshComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> OverrideMaterials;

	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
	void SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		void SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int CinematicTextureGroups);
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		bool IsMaterialSlotNameValid(const struct FName& MaterialSlotName);
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		TArray<struct FName> GetMaterialSlotNames();
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		TArray<class UMaterialInterface*> GetMaterials();
	UFUNCTION(BlueprintCallable, Category = "MeshComponent")
		int GetMaterialIndex(const struct FName& MaterialSlotName);

};