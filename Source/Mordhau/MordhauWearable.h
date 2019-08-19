// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "MordhauWearable.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UMordhauWearable : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	//EWearableSlot                                      UseColorsFromSlot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  AlbedoMap;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  NormalMap;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  RoughnessMap;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor                                      Albedo;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              Metallic;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              Roughness;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MetalAlbedoDarken;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              PDO;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodOffsetA;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodOffsetB;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodMaskSizeFine;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodMaskSizeSoft;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BloodTextureSize;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     EmblemScale;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     EmblemOffset;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              EmblemRotation;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHasEmblem;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bMuffleVoice;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bTreatAsMaster;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideIn1P;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideEars;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideHair;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideBeard;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideNose;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftHand;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightHand;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftFoot;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightFoot;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftLeg;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightLeg;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideChest;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideLeftArm;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHideRightArm;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               Mesh;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               Mesh1POverride;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               AuxiliaryMesh;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAuxiliaryConsideredBody;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               AuxiliaryMesh1POverride;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAuxiliaryWantsMaterialInstance;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAuxiliary1POverrideWantsMaterialInstance;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              VertexCameraDisplacement;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                CharacterPointCost;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint8                                      ArmorClass;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAllowedForPeasants;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              SpeedFactor;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              AccelerationFactor;
 //UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
//	TArray<struct FPatternInfo>                        Patterns;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint8                                      Pattern;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              Colors;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<uint8>                              ColorTables;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoreTeamColor1;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoreTeamColor2;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor                                DefaultColor1Temp;
 UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor                                DefaultColor2Temp;
	
	
	
};
