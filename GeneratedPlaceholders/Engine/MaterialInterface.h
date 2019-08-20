#pragma once

#include "CoreMinimal.h"
#include "MaterialInterface.generated.h"

UCLASS()
class UMaterialInterface : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USubsurfaceProfile* SubsurfaceProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassMaterialInterfaceSettings LightmassSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMaterialTextureInfo> TextureStreamingData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;

	UFUNCTION(BlueprintCallable, Category = "MaterialInterface")
	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int CinematicTextureGroups);
	UFUNCTION(BlueprintCallable, Category = "MaterialInterface")
		class UPhysicalMaterial* GetPhysicalMaterial();
	UFUNCTION(BlueprintCallable, Category = "MaterialInterface")
		class UMaterial* GetBaseMaterial();

};