#pragma once

#include "CoreMinimal.h"
#include "DecalActor.generated.h"

UCLASS()
class ADecalActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDecalComponent* Decal;

	UFUNCTION(BlueprintCallable, Category = "DecalActor")
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	UFUNCTION(BlueprintCallable, Category = "DecalActor")
		class UMaterialInterface* GetDecalMaterial();
	UFUNCTION(BlueprintCallable, Category = "DecalActor")
		class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();

};