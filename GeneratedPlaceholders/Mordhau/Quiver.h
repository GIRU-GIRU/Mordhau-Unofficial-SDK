#pragma once

#include "CoreMinimal.h"
#include "Quiver.generated.h"

UCLASS()
class UQuiver : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform AttachSocketTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UStaticMesh*> QuiverMeshes;

	UFUNCTION(BlueprintCallable, Category = "Quiver")
	class UStaticMesh* FindAppropriateQuiverMesh(unsigned char Ammo, unsigned char MaxAmmo);

};