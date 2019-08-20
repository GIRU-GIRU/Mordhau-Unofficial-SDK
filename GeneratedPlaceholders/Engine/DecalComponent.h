#pragma once

#include "CoreMinimal.h"
#include "DecalComponent.generated.h"

UCLASS()
class UDecalComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SortOrder;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeScreenSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeStartDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDestroyOwnerAfterFade : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DecalSize;

	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
	void SetSortOrder(int Value);
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		void SetFadeScreenSize(float NewFadeScreenSize);
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		float GetFadeStartDelay();
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		float GetFadeDuration();
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		class UMaterialInterface* GetDecalMaterial();
	UFUNCTION(BlueprintCallable, Category = "DecalComponent")
		class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();

};