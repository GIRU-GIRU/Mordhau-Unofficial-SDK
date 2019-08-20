#pragma once

#include "CoreMinimal.h"
#include "RetainerBox.generated.h"

UCLASS()
class URetainerBox : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool RenderOnInvalidation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool RenderOnPhase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Phase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PhaseCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* EffectMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TextureParameter;

	UFUNCTION(BlueprintCallable, Category = "RetainerBox")
	void SetTextureParameter(const struct FName& TextureParameter);
	UFUNCTION(BlueprintCallable, Category = "RetainerBox")
		void SetRenderingPhase(int RenderPhase, int TotalPhases);
	UFUNCTION(BlueprintCallable, Category = "RetainerBox")
		void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	UFUNCTION(BlueprintCallable, Category = "RetainerBox")
		void RequestRender();
	UFUNCTION(BlueprintCallable, Category = "RetainerBox")
		class UMaterialInstanceDynamic* GetEffectMaterial();

};