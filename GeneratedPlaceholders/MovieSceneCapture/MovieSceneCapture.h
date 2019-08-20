#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCapture.generated.h"

UCLASS()
class UMovieSceneCapture : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCaptureProtocolID CaptureType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieSceneCaptureProtocolSettings* ProtocolSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneCaptureSettings Settings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseSeparateProcess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCloseEditorWhenCaptureStarts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString AdditionalCommandLineArguments;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString InheritedCommandLineArguments;


};