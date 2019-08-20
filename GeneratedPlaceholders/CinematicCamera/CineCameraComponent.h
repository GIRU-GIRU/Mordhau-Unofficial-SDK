#pragma once

#include "CoreMinimal.h"
#include "CineCameraComponent.generated.h"

UCLASS()
class UCineCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraFilmbackSettings FilmbackSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraLensSettings LensSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCameraFocusSettings FocusSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentFocalLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentAperture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentFocusDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* FocusPlaneVisualizationMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* FocusPlaneVisualizationMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* DebugFocusPlaneComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* DebugFocusPlaneMID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedFilmbackPreset> FilmbackPresets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNamedLensPreset> LensPresets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DefaultFilmbackPresetName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DefaultLensPresetName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultLensFocalLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultLensFStop;

	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
	void SetLensPresetByName(const struct FString& InPresetName);
	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
		void SetFilmbackPresetByName(const struct FString& InPresetName);
	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
		float GetVerticalFieldOfView();
	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
		struct FString GetLensPresetName();
	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
		float GetHorizontalFieldOfView();
	UFUNCTION(BlueprintCallable, Category = "CineCameraComponent")
		struct FString GetFilmbackPresetName();

};