#pragma once

#include "CoreMinimal.h"
#include "CharacterHair.generated.h"

UCLASS()
class UCharacterHair : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Albedo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Normal;


};