#pragma once

#include "CoreMinimal.h"
#include "MovieScene3DAttachSection.generated.h"

UCLASS()
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachComponentName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentLocationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentRotationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AttachmentScaleRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDetachmentRule DetachmentLocationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDetachmentRule DetachmentRotationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDetachmentRule DetachmentScaleRule;


};