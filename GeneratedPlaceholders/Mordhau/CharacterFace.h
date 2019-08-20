#pragma once

#include "CoreMinimal.h"
#include "CharacterFace.generated.h"

UCLASS()
class UCharacterFace : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Normal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* AgedNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* PBRMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Albedo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EyebrowOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EyebrowScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EyebrowDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EyebrowRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BloodOffsetA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BloodOffsetB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BloodMaskSizeFine;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BloodMaskSizeSoft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BloodTextureSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Hair;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> FacialHair;


};