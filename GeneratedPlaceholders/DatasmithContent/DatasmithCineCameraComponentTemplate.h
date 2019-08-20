#pragma once

#include "CoreMinimal.h"
#include "DatasmithCineCameraComponentTemplate.generated.h"

UCLASS()
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithCameraLensSettingsTemplate LensSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentFocalLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentAperture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings;


};