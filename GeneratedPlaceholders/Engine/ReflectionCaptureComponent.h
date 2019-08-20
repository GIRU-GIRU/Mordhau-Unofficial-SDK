#pragma once

#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.generated.h"

UCLASS()
class UReflectionCaptureComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EReflectionSourceType ReflectionSourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureCube* Cubemap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SourceCubemapAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Brightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CaptureOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid MapBuildDataId;


};