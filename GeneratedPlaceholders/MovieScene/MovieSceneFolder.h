#pragma once

#include "CoreMinimal.h"
#include "MovieSceneFolder.generated.h"

UCLASS()
class UMovieSceneFolder : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName FolderName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneFolder*> ChildFolders;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneTrack*> ChildMasterTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ChildObjectBindingStrings;


};